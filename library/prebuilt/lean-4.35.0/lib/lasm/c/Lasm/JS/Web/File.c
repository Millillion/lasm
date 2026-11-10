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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeFileBlob___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeFileBlob___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeFileBlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeFileBlob___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeFileBlob___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeFileBlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeFileBlob = (const lean_object*)&l_Lasm_JS_Web_instCoeFileBlob___closed__0_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBlobPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeByteArrayBlobPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeByteArrayBlobPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeByteArrayBlobPart___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayBlobPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeByteArrayBlobPart = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayBlobPart___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBlobPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBlobBlobPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBlobBlobPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeBlobBlobPart___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBlobPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBlobBlobPart = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBlobPart___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBlobPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringBlobPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringBlobPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeStringBlobPart___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeStringBlobPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringBlobPart = (const lean_object*)&l_Lasm_JS_Web_instCoeStringBlobPart___closed__0_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeFileBlob___lam__0(lean_object* v_self_29_){
_start:
{
lean_inc(v_self_29_);
return v_self_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeFileBlob___lam__0___boxed(lean_object* v_self_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lasm_JS_Web_instCoeFileBlob___lam__0(v_self_30_);
lean_dec(v_self_30_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorIdx(uint8_t v_x_34_){
_start:
{
if (v_x_34_ == 0)
{
lean_object* v___x_35_; 
v___x_35_ = lean_unsigned_to_nat(0u);
return v___x_35_;
}
else
{
lean_object* v___x_36_; 
v___x_36_ = lean_unsigned_to_nat(1u);
return v___x_36_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorIdx___boxed(lean_object* v_x_37_){
_start:
{
uint8_t v_x_boxed_38_; lean_object* v_res_39_; 
v_x_boxed_38_ = lean_unbox(v_x_37_);
v_res_39_ = l_Lasm_JS_Web_EndingType_ctorIdx(v_x_boxed_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim___redArg(lean_object* v_k_40_){
_start:
{
lean_inc(v_k_40_);
return v_k_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim___redArg___boxed(lean_object* v_k_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lasm_JS_Web_EndingType_ctorElim___redArg(v_k_41_);
lean_dec(v_k_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim(lean_object* v_motive_43_, lean_object* v_ctorIdx_44_, uint8_t v_t_45_, lean_object* v_h_46_, lean_object* v_k_47_){
_start:
{
lean_inc(v_k_47_);
return v_k_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim___boxed(lean_object* v_motive_48_, lean_object* v_ctorIdx_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_k_52_){
_start:
{
uint8_t v_t_boxed_53_; lean_object* v_res_54_; 
v_t_boxed_53_ = lean_unbox(v_t_50_);
v_res_54_ = l_Lasm_JS_Web_EndingType_ctorElim(v_motive_48_, v_ctorIdx_49_, v_t_boxed_53_, v_h_51_, v_k_52_);
lean_dec(v_k_52_);
lean_dec(v_ctorIdx_49_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim___redArg(lean_object* v_transparent_55_){
_start:
{
lean_inc(v_transparent_55_);
return v_transparent_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim___redArg___boxed(lean_object* v_transparent_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lasm_JS_Web_EndingType_transparent_elim___redArg(v_transparent_56_);
lean_dec(v_transparent_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim(lean_object* v_motive_58_, uint8_t v_t_59_, lean_object* v_h_60_, lean_object* v_transparent_61_){
_start:
{
lean_inc(v_transparent_61_);
return v_transparent_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim___boxed(lean_object* v_motive_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_transparent_65_){
_start:
{
uint8_t v_t_boxed_66_; lean_object* v_res_67_; 
v_t_boxed_66_ = lean_unbox(v_t_63_);
v_res_67_ = l_Lasm_JS_Web_EndingType_transparent_elim(v_motive_62_, v_t_boxed_66_, v_h_64_, v_transparent_65_);
lean_dec(v_transparent_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim___redArg(lean_object* v_native_68_){
_start:
{
lean_inc(v_native_68_);
return v_native_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim___redArg___boxed(lean_object* v_native_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lasm_JS_Web_EndingType_native_elim___redArg(v_native_69_);
lean_dec(v_native_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim(lean_object* v_motive_71_, uint8_t v_t_72_, lean_object* v_h_73_, lean_object* v_native_74_){
_start:
{
lean_inc(v_native_74_);
return v_native_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim___boxed(lean_object* v_motive_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_native_78_){
_start:
{
uint8_t v_t_boxed_79_; lean_object* v_res_80_; 
v_t_boxed_79_ = lean_unbox(v_t_76_);
v_res_80_ = l_Lasm_JS_Web_EndingType_native_elim(v_motive_75_, v_t_boxed_79_, v_h_77_, v_native_78_);
lean_dec(v_native_78_);
return v_res_80_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqEndingType_beq(uint8_t v_x_81_, uint8_t v_y_82_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_83_ = l_Lasm_JS_Web_EndingType_ctorIdx(v_x_81_);
v___x_84_ = l_Lasm_JS_Web_EndingType_ctorIdx(v_y_82_);
v___x_85_ = lean_nat_dec_eq(v___x_83_, v___x_84_);
lean_dec(v___x_84_);
lean_dec(v___x_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqEndingType_beq___boxed(lean_object* v_x_86_, lean_object* v_y_87_){
_start:
{
uint8_t v_x_21__boxed_88_; uint8_t v_y_22__boxed_89_; uint8_t v_res_90_; lean_object* v_r_91_; 
v_x_21__boxed_88_ = lean_unbox(v_x_86_);
v_y_22__boxed_89_ = lean_unbox(v_y_87_);
v_res_90_ = l_Lasm_JS_Web_instBEqEndingType_beq(v_x_21__boxed_88_, v_y_22__boxed_89_);
v_r_91_ = lean_box(v_res_90_);
return v_r_91_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__4(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_unsigned_to_nat(2u);
v___x_101_ = lean_nat_to_int(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__5(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_unsigned_to_nat(1u);
v___x_103_ = lean_nat_to_int(v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprEndingType_repr(uint8_t v_x_104_, lean_object* v_prec_105_){
_start:
{
lean_object* v___y_107_; lean_object* v___y_114_; 
if (v_x_104_ == 0)
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_unsigned_to_nat(1024u);
v___x_121_ = lean_nat_dec_le(v___x_120_, v_prec_105_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l_Lasm_JS_Web_instReprEndingType_repr___closed__4, &l_Lasm_JS_Web_instReprEndingType_repr___closed__4_once, _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__4);
v___y_107_ = v___x_122_;
goto v___jp_106_;
}
else
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&l_Lasm_JS_Web_instReprEndingType_repr___closed__5, &l_Lasm_JS_Web_instReprEndingType_repr___closed__5_once, _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__5);
v___y_107_ = v___x_123_;
goto v___jp_106_;
}
}
else
{
lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(1024u);
v___x_125_ = lean_nat_dec_le(v___x_124_, v_prec_105_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_once(&l_Lasm_JS_Web_instReprEndingType_repr___closed__4, &l_Lasm_JS_Web_instReprEndingType_repr___closed__4_once, _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__4);
v___y_114_ = v___x_126_;
goto v___jp_113_;
}
else
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&l_Lasm_JS_Web_instReprEndingType_repr___closed__5, &l_Lasm_JS_Web_instReprEndingType_repr___closed__5_once, _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__5);
v___y_114_ = v___x_127_;
goto v___jp_113_;
}
}
v___jp_106_:
{
lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_108_ = ((lean_object*)(l_Lasm_JS_Web_instReprEndingType_repr___closed__1));
lean_inc(v___y_107_);
v___x_109_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_109_, 0, v___y_107_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
v___x_110_ = 0;
v___x_111_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_111_, 0, v___x_109_);
lean_ctor_set_uint8(v___x_111_, sizeof(void*)*1, v___x_110_);
v___x_112_ = l_Repr_addAppParen(v___x_111_, v_prec_105_);
return v___x_112_;
}
v___jp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; uint8_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_115_ = ((lean_object*)(l_Lasm_JS_Web_instReprEndingType_repr___closed__3));
lean_inc(v___y_114_);
v___x_116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_116_, 0, v___y_114_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = 0;
v___x_118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set_uint8(v___x_118_, sizeof(void*)*1, v___x_117_);
v___x_119_ = l_Repr_addAppParen(v___x_118_, v_prec_105_);
return v___x_119_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprEndingType_repr___boxed(lean_object* v_x_128_, lean_object* v_prec_129_){
_start:
{
uint8_t v_x_117__boxed_130_; lean_object* v_res_131_; 
v_x_117__boxed_130_ = lean_unbox(v_x_128_);
v_res_131_ = l_Lasm_JS_Web_instReprEndingType_repr(v_x_117__boxed_130_, v_prec_129_);
lean_dec(v_prec_129_);
return v_res_131_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedEndingType_default(void){
_start:
{
uint8_t v___x_134_; 
v___x_134_ = 0;
return v___x_134_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedEndingType(void){
_start:
{
uint8_t v___x_135_; 
v___x_135_ = 0;
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0(uint8_t v_x_142_){
_start:
{
if (v_x_142_ == 0)
{
lean_object* v___x_143_; 
v___x_143_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__1));
return v___x_143_;
}
else
{
lean_object* v___x_144_; 
v___x_144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__3));
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0___boxed(lean_object* v_x_145_){
_start:
{
uint8_t v_x_40__boxed_146_; lean_object* v_res_147_; 
v_x_40__boxed_146_ = lean_unbox(v_x_145_);
v_res_147_ = l_Lasm_JS_Web_instToJSEndingType___lam__0(v_x_40__boxed_146_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0(lean_object* v_x_159_){
_start:
{
if (lean_obj_tag(v_x_159_) == 4)
{
lean_object* v_s_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
v_s_162_ = lean_ctor_get(v_x_159_, 0);
v___x_163_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__0));
v___x_164_ = lean_string_dec_eq(v_s_162_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_165_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__2));
v___x_166_ = lean_string_dec_eq(v_s_162_, v___x_165_);
if (v___x_166_ == 0)
{
goto v___jp_160_;
}
else
{
lean_object* v___x_167_; 
v___x_167_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__2));
return v___x_167_;
}
}
else
{
lean_object* v___x_168_; 
v___x_168_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__3));
return v___x_168_;
}
}
else
{
goto v___jp_160_;
}
v___jp_160_:
{
lean_object* v___x_161_; 
v___x_161_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__1));
return v___x_161_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0___boxed(lean_object* v_x_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lasm_JS_Web_instFromJSEndingType___lam__0(v_x_169_);
lean_dec(v_x_169_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx(lean_object* v_x_178_){
_start:
{
switch(lean_obj_tag(v_x_178_))
{
case 0:
{
lean_object* v___x_179_; 
v___x_179_ = lean_unsigned_to_nat(0u);
return v___x_179_;
}
case 1:
{
lean_object* v___x_180_; 
v___x_180_ = lean_unsigned_to_nat(1u);
return v___x_180_;
}
default: 
{
lean_object* v___x_181_; 
v___x_181_ = lean_unsigned_to_nat(2u);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx___boxed(lean_object* v_x_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lasm_JS_Web_BlobPart_ctorIdx(v_x_182_);
lean_dec_ref(v_x_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___redArg(lean_object* v_t_184_, lean_object* v_k_185_){
_start:
{
if (lean_obj_tag(v_t_184_) == 1)
{
lean_object* v_value_186_; lean_object* v___x_187_; 
v_value_186_ = lean_ctor_get(v_t_184_, 0);
lean_inc(v_value_186_);
lean_dec_ref_known(v_t_184_, 1);
v___x_187_ = lean_apply_1(v_k_185_, v_value_186_);
return v___x_187_;
}
else
{
lean_object* v_value_188_; lean_object* v___x_189_; 
v_value_188_ = lean_ctor_get(v_t_184_, 0);
lean_inc_ref(v_value_188_);
lean_dec_ref(v_t_184_);
v___x_189_ = lean_apply_1(v_k_185_, v_value_188_);
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim(lean_object* v_motive_190_, lean_object* v_ctorIdx_191_, lean_object* v_t_192_, lean_object* v_h_193_, lean_object* v_k_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_192_, v_k_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___boxed(lean_object* v_motive_196_, lean_object* v_ctorIdx_197_, lean_object* v_t_198_, lean_object* v_h_199_, lean_object* v_k_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lasm_JS_Web_BlobPart_ctorElim(v_motive_196_, v_ctorIdx_197_, v_t_198_, v_h_199_, v_k_200_);
lean_dec(v_ctorIdx_197_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim___redArg(lean_object* v_t_202_, lean_object* v_bufferSource_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_202_, v_bufferSource_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim(lean_object* v_motive_205_, lean_object* v_t_206_, lean_object* v_h_207_, lean_object* v_bufferSource_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_206_, v_bufferSource_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim___redArg(lean_object* v_t_210_, lean_object* v_blob_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_210_, v_blob_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim(lean_object* v_motive_213_, lean_object* v_t_214_, lean_object* v_h_215_, lean_object* v_blob_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_214_, v_blob_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim___redArg(lean_object* v_t_218_, lean_object* v_usvString_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_218_, v_usvString_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim(lean_object* v_motive_221_, lean_object* v_t_222_, lean_object* v_h_223_, lean_object* v_usvString_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_222_, v_usvString_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPart___lam__0(lean_object* v_x_226_){
_start:
{
switch(lean_obj_tag(v_x_226_))
{
case 0:
{
lean_object* v_value_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
v_value_227_ = lean_ctor_get(v_x_226_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v_x_226_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v_x_226_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_value_227_);
lean_dec(v_x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 6);
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_value_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
case 1:
{
lean_object* v_value_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v_value_235_ = lean_ctor_get(v_x_226_, 0);
lean_inc(v_value_235_);
lean_dec_ref_known(v_x_226_, 1);
v___x_236_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_237_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_237_, 0, v_value_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
return v___x_237_;
}
default: 
{
lean_object* v_value_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
v_value_238_ = lean_ctor_get(v_x_226_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_x_226_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v_x_226_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_value_238_);
lean_dec(v_x_226_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
lean_ctor_set_tag(v___x_240_, 4);
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_value_238_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBlobPart___lam__0(lean_object* v_value_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v_value_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBlobPart___lam__0(lean_object* v_value_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_253_, 0, v_value_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBlobPart___lam__0(lean_object* v_value_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_257_, 0, v_value_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0(lean_object* v___f_262_, lean_object* v___f_263_, lean_object* v_d_264_){
_start:
{
lean_object* v_type_265_; lean_object* v_endings_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_283_; 
v_type_265_ = lean_ctor_get(v_d_264_, 0);
v_endings_266_ = lean_ctor_get(v_d_264_, 1);
v_isSharedCheck_283_ = !lean_is_exclusive(v_d_264_);
if (v_isSharedCheck_283_ == 0)
{
v___x_268_ = v_d_264_;
v_isShared_269_ = v_isSharedCheck_283_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_endings_266_);
lean_inc(v_type_265_);
lean_dec(v_d_264_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_283_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_273_; 
v___x_270_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_271_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_262_, v_type_265_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 1, v___x_271_);
lean_ctor_set(v___x_268_, 0, v___x_270_);
v___x_273_ = v___x_268_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_270_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v___x_271_);
v___x_273_ = v_reuseFailAlloc_282_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_274_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_275_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_263_, v_endings_266_);
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_274_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_unsigned_to_nat(2u);
v___x_278_ = lean_mk_empty_array_with_capacity(v___x_277_);
v___x_279_ = lean_array_push(v___x_278_, v___x_273_);
v___x_280_ = lean_array_push(v___x_279_, v___x_276_);
v___x_281_ = l_Lasm_JS_Web_Support_fields(v___x_280_);
lean_dec_ref(v___x_280_);
return v___x_281_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0(lean_object* v___f_290_, lean_object* v___f_291_, lean_object* v___f_292_, lean_object* v_d_293_){
_start:
{
lean_object* v_type_294_; lean_object* v_endings_295_; lean_object* v_lastModified_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_type_294_ = lean_ctor_get(v_d_293_, 0);
lean_inc(v_type_294_);
v_endings_295_ = lean_ctor_get(v_d_293_, 1);
lean_inc(v_endings_295_);
v_lastModified_296_ = lean_ctor_get(v_d_293_, 2);
lean_inc(v_lastModified_296_);
lean_dec_ref(v_d_293_);
v___x_297_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_298_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_290_, v_type_294_);
v___x_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_301_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_291_, v_endings_295_);
v___x_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_300_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_304_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_292_, v_lastModified_296_);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_303_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
v___x_306_ = lean_unsigned_to_nat(3u);
v___x_307_ = lean_mk_empty_array_with_capacity(v___x_306_);
v___x_308_ = lean_array_push(v___x_307_, v___x_299_);
v___x_309_ = lean_array_push(v___x_308_, v___x_302_);
v___x_310_ = lean_array_push(v___x_309_, v___x_305_);
v___x_311_ = l_Lasm_JS_Web_Support_fields(v___x_310_);
lean_dec_ref(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(lean_object* v_x_318_){
_start:
{
if (lean_obj_tag(v_x_318_) == 0)
{
lean_object* v___x_319_; 
v___x_319_ = lean_box(0);
return v___x_319_;
}
else
{
lean_object* v_val_320_; uint8_t v___x_321_; 
v_val_320_ = lean_ctor_get(v_x_318_, 0);
v___x_321_ = lean_unbox(v_val_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; 
v___x_322_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__1));
return v___x_322_;
}
else
{
lean_object* v___x_323_; 
v___x_323_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__3));
return v___x_323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2___boxed(lean_object* v_x_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_x_324_);
lean_dec(v_x_324_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1(lean_object* v_x_326_){
_start:
{
if (lean_obj_tag(v_x_326_) == 0)
{
lean_object* v___x_327_; 
v___x_327_ = lean_box(0);
return v___x_327_;
}
else
{
lean_object* v_val_328_; lean_object* v_type_329_; lean_object* v_endings_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_347_; 
v_val_328_ = lean_ctor_get(v_x_326_, 0);
lean_inc(v_val_328_);
lean_dec_ref_known(v_x_326_, 1);
v_type_329_ = lean_ctor_get(v_val_328_, 0);
v_endings_330_ = lean_ctor_get(v_val_328_, 1);
v_isSharedCheck_347_ = !lean_is_exclusive(v_val_328_);
if (v_isSharedCheck_347_ == 0)
{
v___x_332_ = v_val_328_;
v_isShared_333_ = v_isSharedCheck_347_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_endings_330_);
lean_inc(v_type_329_);
lean_dec(v_val_328_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_347_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_335_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_329_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 1, v___x_335_);
lean_ctor_set(v___x_332_, 0, v___x_334_);
v___x_337_ = v___x_332_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_334_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v___x_335_);
v___x_337_ = v_reuseFailAlloc_346_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_338_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_339_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_endings_330_);
lean_dec(v_endings_330_);
v___x_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_338_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
v___x_341_ = lean_unsigned_to_nat(2u);
v___x_342_ = lean_mk_empty_array_with_capacity(v___x_341_);
v___x_343_ = lean_array_push(v___x_342_, v___x_337_);
v___x_344_ = lean_array_push(v___x_343_, v___x_340_);
v___x_345_ = l_Lasm_JS_Web_Support_fields(v___x_344_);
lean_dec_ref(v___x_344_);
return v___x_345_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_352_ = lean_string_utf8_byte_size(v___x_351_);
return v___x_352_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_353_ = lean_unsigned_to_nat(0u);
v___x_354_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3);
v___x_355_ = lean_nat_dec_eq(v___x_354_, v___x_353_);
return v___x_355_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_360_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__8));
v___x_361_ = lean_unsigned_to_nat(46u);
v___x_362_ = lean_unsigned_to_nat(193u);
v___x_363_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__7));
v___x_364_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__6));
v___x_365_ = l_mkPanicMessageWithDecl(v___x_364_, v___x_363_, v___x_362_, v___x_361_, v___x_360_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(lean_object* v_context_367_, lean_object* v_d_368_){
_start:
{
lean_object* v___y_371_; lean_object* v___y_372_; 
if (lean_obj_tag(v_d_368_) == 9)
{
lean_object* v_value_376_; lean_object* v___x_377_; 
v_value_376_ = lean_ctor_get(v_d_368_, 0);
lean_inc(v_value_376_);
lean_dec_ref_known(v_d_368_, 2);
v___x_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_377_, 0, v_value_376_);
return v___x_377_;
}
else
{
lean_object* v___x_378_; lean_object* v_received_380_; 
v___x_378_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
if (lean_obj_tag(v_d_368_) == 9)
{
lean_object* v_value_394_; lean_object* v_description_395_; uint8_t v___x_396_; 
v_value_394_ = lean_ctor_get(v_d_368_, 0);
v_description_395_ = lean_ctor_get(v_d_368_, 1);
v___x_396_ = lean_string_dec_eq(v_description_395_, v___x_378_);
if (v___x_396_ == 0)
{
goto v___jp_392_;
}
else
{
uint32_t v___x_397_; uint64_t v___x_398_; lean_object* v___x_399_; uint32_t v___x_400_; lean_object* v___x_401_; 
lean_inc_n(v_value_394_, 2);
lean_dec_ref_known(v_d_368_, 2);
v___x_397_ = 206;
v___x_398_ = 0ULL;
v___x_399_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_399_, 0, v_value_394_);
lean_ctor_set(v___x_399_, 1, v___x_378_);
v___x_400_ = lasm_js_value_handle(v_value_394_);
lean_dec(v_value_394_);
v___x_401_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_397_, v___x_398_, v___x_399_, v___x_400_);
lean_dec_ref_known(v___x_399_, 2);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; uint8_t v___x_403_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref_known(v___x_401_, 1);
v___x_403_ = lean_string_validate_utf8(v_a_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec(v_a_402_);
v___x_404_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_405_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_404_);
v_received_380_ = v___x_405_;
goto v___jp_379_;
}
else
{
lean_object* v___x_406_; 
v___x_406_ = lean_string_from_utf8_unchecked(v_a_402_);
v_received_380_ = v___x_406_;
goto v___jp_379_;
}
}
else
{
lean_object* v___x_407_; 
lean_dec_ref_known(v___x_401_, 1);
v___x_407_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v_received_380_ = v___x_407_;
goto v___jp_379_;
}
}
}
else
{
goto v___jp_392_;
}
v___jp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_381_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_382_ = lean_string_append(v___x_381_, v_context_367_);
v___x_383_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_384_ = lean_string_append(v___x_382_, v___x_383_);
v___x_385_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBlob___closed__1));
v___x_386_ = lean_string_append(v___x_384_, v___x_385_);
v___x_387_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_388_ = lean_string_append(v___x_386_, v___x_387_);
v___x_389_ = lean_string_append(v___x_388_, v_received_380_);
lean_dec_ref(v_received_380_);
v___x_390_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; 
v___x_391_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5));
v___y_371_ = v___x_389_;
v___y_372_ = v___x_391_;
goto v___jp_370_;
}
else
{
v___y_371_ = v___x_389_;
v___y_372_ = v___x_378_;
goto v___jp_370_;
}
}
v___jp_392_:
{
lean_object* v___x_393_; 
v___x_393_ = l_Lasm_JS_Data_describe(v_d_368_);
v_received_380_ = v___x_393_;
goto v___jp_379_;
}
}
v___jp_370_:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = lean_string_append(v___y_371_, v___y_372_);
v___x_374_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
v___x_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___boxed(lean_object* v_context_408_, lean_object* v_d_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(v_context_408_, v_d_409_);
lean_dec_ref(v_context_408_);
return v_res_411_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1(void){
_start:
{
uint8_t v___x_413_; uint64_t v___x_414_; 
v___x_413_ = 0;
v___x_414_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(lean_object* v_b_415_, lean_object* v_args_416_, uint8_t v_await_417_){
_start:
{
uint64_t v___y_420_; uint64_t v___y_421_; uint64_t v___x_464_; uint64_t v___y_466_; 
v___x_464_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_417_ == 0)
{
uint64_t v___x_471_; 
v___x_471_ = 0ULL;
v___y_466_ = v___x_471_;
goto v___jp_465_;
}
else
{
uint64_t v___x_472_; 
v___x_472_ = 2ULL;
v___y_466_ = v___x_472_;
goto v___jp_465_;
}
v___jp_419_:
{
uint64_t v_flags_422_; uint32_t v___x_423_; lean_object* v___x_424_; uint32_t v___x_425_; lean_object* v___x_426_; 
v_flags_422_ = lean_uint64_lor(v___y_420_, v___y_421_);
v___x_423_ = 214;
v___x_424_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_415_, v_args_416_);
v___x_425_ = 0;
v___x_426_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_423_, v_flags_422_, v___x_424_, v___x_425_);
lean_dec(v___x_424_);
if (lean_obj_tag(v___x_426_) == 0)
{
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_428_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_a_427_);
lean_dec_ref_known(v___x_426_, 1);
v___x_428_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_427_);
lean_dec(v_a_427_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
lean_dec_ref_known(v___x_428_, 1);
v___x_430_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_415_);
v___x_431_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(v___x_430_, v_a_429_);
lean_dec_ref(v___x_430_);
return v___x_431_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_a_432_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_428_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_428_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
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
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
v_a_440_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_426_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_426_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set_tag(v___x_442_, 1);
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_463_; 
v_a_448_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_463_ == 0)
{
v___x_450_ = v___x_426_;
v_isShared_451_ = v_isSharedCheck_463_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_426_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_463_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_461_; 
v___x_452_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_453_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_415_);
v___x_454_ = lean_string_append(v___x_452_, v___x_453_);
lean_dec_ref(v___x_453_);
v___x_455_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0));
v___x_456_ = lean_string_append(v___x_454_, v___x_455_);
v___x_457_ = lean_io_error_to_string(v_a_448_);
v___x_458_ = lean_string_append(v___x_456_, v___x_457_);
lean_dec_ref(v___x_457_);
v___x_459_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 0, v___x_459_);
v___x_461_ = v___x_450_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
v___jp_465_:
{
uint8_t v_construct_467_; uint64_t v___x_468_; 
v_construct_467_ = lean_ctor_get_uint8(v_b_415_, sizeof(void*)*4);
v___x_468_ = lean_uint64_lor(v___x_464_, v___y_466_);
if (v_construct_467_ == 0)
{
uint64_t v___x_469_; 
v___x_469_ = 0ULL;
v___y_420_ = v___x_468_;
v___y_421_ = v___x_469_;
goto v___jp_419_;
}
else
{
uint64_t v___x_470_; 
v___x_470_ = 4ULL;
v___y_420_ = v___x_468_;
v___y_421_ = v___x_470_;
goto v___jp_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___boxed(lean_object* v_b_473_, lean_object* v_args_474_, lean_object* v_await_475_, lean_object* v_a_476_){
_start:
{
uint8_t v_await_boxed_477_; lean_object* v_res_478_; 
v_await_boxed_477_ = lean_unbox(v_await_475_);
v_res_478_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(v_b_473_, v_args_474_, v_await_boxed_477_);
lean_dec_ref(v_b_473_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(size_t v_sz_479_, size_t v_i_480_, lean_object* v_bs_481_){
_start:
{
uint8_t v___x_482_; 
v___x_482_ = lean_usize_dec_lt(v_i_480_, v_sz_479_);
if (v___x_482_ == 0)
{
return v_bs_481_;
}
else
{
lean_object* v_v_483_; lean_object* v___x_484_; lean_object* v_bs_x27_485_; lean_object* v___y_487_; 
v_v_483_ = lean_array_uget(v_bs_481_, v_i_480_);
v___x_484_ = lean_unsigned_to_nat(0u);
v_bs_x27_485_ = lean_array_uset(v_bs_481_, v_i_480_, v___x_484_);
switch(lean_obj_tag(v_v_483_))
{
case 0:
{
lean_object* v_value_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
v_value_492_ = lean_ctor_get(v_v_483_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v_v_483_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v_v_483_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_value_492_);
lean_dec(v_v_483_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
lean_ctor_set_tag(v___x_494_, 6);
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_value_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
v___y_487_ = v___x_497_;
goto v___jp_486_;
}
}
}
case 1:
{
lean_object* v_value_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v_value_500_ = lean_ctor_get(v_v_483_, 0);
lean_inc(v_value_500_);
lean_dec_ref_known(v_v_483_, 1);
v___x_501_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_502_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_502_, 0, v_value_500_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___y_487_ = v___x_502_;
goto v___jp_486_;
}
default: 
{
lean_object* v_value_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
v_value_503_ = lean_ctor_get(v_v_483_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_v_483_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v_v_483_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_value_503_);
lean_dec(v_v_483_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
lean_ctor_set_tag(v___x_505_, 4);
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_value_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
v___y_487_ = v___x_508_;
goto v___jp_486_;
}
}
}
}
v___jp_486_:
{
size_t v___x_488_; size_t v___x_489_; lean_object* v___x_490_; 
v___x_488_ = ((size_t)1ULL);
v___x_489_ = lean_usize_add(v_i_480_, v___x_488_);
v___x_490_ = lean_array_uset(v_bs_x27_485_, v_i_480_, v___y_487_);
v_i_480_ = v___x_489_;
v_bs_481_ = v___x_490_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0___boxed(lean_object* v_sz_511_, lean_object* v_i_512_, lean_object* v_bs_513_){
_start:
{
size_t v_sz_boxed_514_; size_t v_i_boxed_515_; lean_object* v_res_516_; 
v_sz_boxed_514_ = lean_unbox_usize(v_sz_511_);
lean_dec(v_sz_511_);
v_i_boxed_515_ = lean_unbox_usize(v_i_512_);
lean_dec(v_i_512_);
v_res_516_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_boxed_514_, v_i_boxed_515_, v_bs_513_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0(lean_object* v_x_517_){
_start:
{
if (lean_obj_tag(v_x_517_) == 0)
{
lean_object* v___x_518_; 
v___x_518_ = lean_box(0);
return v___x_518_;
}
else
{
lean_object* v_val_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_529_; 
v_val_519_ = lean_ctor_get(v_x_517_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v_x_517_);
if (v_isSharedCheck_529_ == 0)
{
v___x_521_ = v_x_517_;
v_isShared_522_ = v_isSharedCheck_529_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_val_519_);
lean_dec(v_x_517_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_529_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
size_t v_sz_523_; size_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
v_sz_523_ = lean_array_size(v_val_519_);
v___x_524_ = ((size_t)0ULL);
v___x_525_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_523_, v___x_524_, v_val_519_);
if (v_isShared_522_ == 0)
{
lean_ctor_set_tag(v___x_521_, 7);
lean_ctor_set(v___x_521_, 0, v___x_525_);
v___x_527_ = v___x_521_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_new(lean_object* v_blobParts_539_, lean_object* v_options_540_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; lean_object* v___x_551_; 
v___x_542_ = lean_unsigned_to_nat(2u);
v___x_543_ = ((lean_object*)(l_Lasm_JS_Web_Blob_new___closed__3));
v___x_544_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0(v_blobParts_539_);
v___x_545_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1(v_options_540_);
v___x_546_ = lean_mk_empty_array_with_capacity(v___x_542_);
v___x_547_ = lean_array_push(v___x_546_, v___x_544_);
v___x_548_ = lean_array_push(v___x_547_, v___x_545_);
v___x_549_ = l_Lasm_JS_Web_Support_args(v___x_548_);
v___x_550_ = 0;
v___x_551_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(v___x_543_, v___x_549_, v___x_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_new___boxed(lean_object* v_blobParts_552_, lean_object* v_options_553_, lean_object* v_a_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lasm_JS_Web_Blob_new(v_blobParts_552_, v_options_553_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_size(lean_object* v_self_557_){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(l_Lasm_JS_Web_Blob_size___closed__0));
v___x_560_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_557_, v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_size___boxed(lean_object* v_self_561_, lean_object* v_a_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lasm_JS_Web_Blob_size(v_self_561_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_type(lean_object* v_self_564_){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_567_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_564_, v___x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_type___boxed(lean_object* v_self_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lasm_JS_Web_Blob_type(v_self_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(lean_object* v_x_571_){
_start:
{
if (lean_obj_tag(v_x_571_) == 0)
{
lean_object* v___x_572_; 
v___x_572_ = lean_box(0);
return v___x_572_;
}
else
{
lean_object* v_val_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_585_; 
v_val_573_ = lean_ctor_get(v_x_571_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v_x_571_);
if (v_isSharedCheck_585_ == 0)
{
v___x_575_ = v_x_571_;
v_isShared_576_ = v_isSharedCheck_585_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_val_573_);
lean_dec(v_x_571_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_585_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_577_ = lean_nat_abs(v_val_573_);
v___x_578_ = lean_cstr_to_nat("9007199254740991");
v___x_579_ = lean_nat_dec_le(v___x_577_, v___x_578_);
lean_dec(v___x_577_);
if (v___x_579_ == 0)
{
lean_object* v___x_581_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set_tag(v___x_575_, 5);
v___x_581_ = v___x_575_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_val_573_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
else
{
double v___x_583_; lean_object* v___x_584_; 
lean_del_object(v___x_575_);
v___x_583_ = l_Float_ofInt(v_val_573_);
lean_dec(v_val_573_);
v___x_584_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice(lean_object* v_self_587_, lean_object* v_start_588_, lean_object* v_end_589_, lean_object* v_contentType_590_){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_592_ = ((lean_object*)(l_Lasm_JS_Web_Blob_slice___closed__0));
v___x_593_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_588_);
v___x_594_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_589_);
v___x_595_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentType_590_);
v___x_596_ = lean_unsigned_to_nat(3u);
v___x_597_ = lean_mk_empty_array_with_capacity(v___x_596_);
v___x_598_ = lean_array_push(v___x_597_, v___x_593_);
v___x_599_ = lean_array_push(v___x_598_, v___x_594_);
v___x_600_ = lean_array_push(v___x_599_, v___x_595_);
v___x_601_ = l_Lasm_JS_Web_Support_args(v___x_600_);
v___x_602_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_587_, v___x_592_, v___x_601_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_602_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_602_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_a_611_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_602_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_602_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice___boxed(lean_object* v_self_619_, lean_object* v_start_620_, lean_object* v_end_621_, lean_object* v_contentType_622_, lean_object* v_a_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lasm_JS_Web_Blob_slice(v_self_619_, v_start_620_, v_end_621_, v_contentType_622_);
return v_res_624_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Blob_stream___closed__2(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = ((lean_object*)(l_Lasm_JS_Web_Blob_stream___closed__1));
v___x_629_ = l_Lasm_JS_Web_Support_args(v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream(lean_object* v_self_630_){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_632_ = ((lean_object*)(l_Lasm_JS_Web_Blob_stream___closed__0));
v___x_633_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_634_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_630_, v___x_632_, v___x_633_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_634_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_634_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
v_a_643_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_634_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_634_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream___boxed(lean_object* v_self_651_, lean_object* v_a_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lasm_JS_Web_Blob_stream(v_self_651_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3(lean_object* v_a_654_, lean_object* v_x_655_){
_start:
{
if (lean_obj_tag(v_x_655_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_665_; 
v_a_657_ = lean_ctor_get(v_x_655_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v_x_655_);
if (v_isSharedCheck_665_ == 0)
{
v___x_659_ = v_x_655_;
v_isShared_660_ = v_isSharedCheck_665_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v_x_655_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_665_;
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
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_664_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
lean_object* v___x_663_; 
v___x_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
return v___x_663_;
}
}
}
else
{
lean_object* v___x_666_; 
lean_dec_ref_known(v_x_655_, 1);
v___x_666_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_654_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed(lean_object* v_a_667_, lean_object* v_x_668_, lean_object* v___y_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3(v_a_667_, v_x_668_);
lean_dec(v_a_667_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7(lean_object* v___f_671_, lean_object* v_a_672_, uint32_t v_op_673_, uint64_t v_flags_674_, lean_object* v_payload_675_, lean_object* v_x_676_){
_start:
{
if (lean_obj_tag(v_x_676_) == 0)
{
lean_object* v___x_678_; 
lean_dec_ref(v___f_671_);
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v_x_676_);
return v___x_678_;
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_699_; 
v_a_679_ = lean_ctor_get(v_x_676_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_699_ == 0)
{
v___x_681_ = v_x_676_;
v_isShared_682_ = v_isSharedCheck_699_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v_x_676_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_699_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
uint32_t v___x_683_; lean_object* v___x_684_; uint8_t v___x_685_; lean_object* v_val_687_; lean_object* v___x_690_; 
v___x_683_ = 0;
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = 0;
v___x_690_ = lasm_js_call_into(v_a_672_, v_op_673_, v___x_683_, v_flags_674_, v_a_679_, v_payload_675_);
lean_dec(v_a_679_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_693_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v___x_690_, 1);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v_a_691_);
v___x_693_ = v___x_681_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_691_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
v_val_687_ = v___x_693_;
goto v___jp_686_;
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; 
v_a_695_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_690_, 1);
if (v_isShared_682_ == 0)
{
lean_ctor_set_tag(v___x_681_, 0);
lean_ctor_set(v___x_681_, 0, v_a_695_);
v___x_697_ = v___x_681_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
v_val_687_ = v___x_697_;
goto v___jp_686_;
}
}
v___jp_686_:
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v_val_687_);
v___x_689_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_684_, v___x_685_, v___x_688_, v___f_671_);
return v___x_689_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed(lean_object* v___f_700_, lean_object* v_a_701_, lean_object* v_op_702_, lean_object* v_flags_703_, lean_object* v_payload_704_, lean_object* v_x_705_, lean_object* v___y_706_){
_start:
{
uint32_t v_op_boxed_707_; uint64_t v_flags_boxed_708_; lean_object* v_res_709_; 
v_op_boxed_707_ = lean_unbox_uint32(v_op_702_);
lean_dec(v_op_702_);
v_flags_boxed_708_ = lean_unbox_uint64(v_flags_703_);
lean_dec_ref(v_flags_703_);
v_res_709_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7(v___f_700_, v_a_701_, v_op_boxed_707_, v_flags_boxed_708_, v_payload_704_, v_x_705_);
lean_dec(v_payload_704_);
lean_dec(v_a_701_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5(lean_object* v___x_710_, uint8_t v___x_711_, lean_object* v___f_712_, lean_object* v_a_713_, uint32_t v_op_714_, uint64_t v_flags_715_, lean_object* v_payload_716_, lean_object* v_x_717_){
_start:
{
lean_object* v_val_720_; 
if (lean_obj_tag(v_x_717_) == 0)
{
lean_object* v___x_723_; 
lean_dec_ref(v___f_712_);
lean_dec(v___x_710_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v_x_717_);
return v___x_723_;
}
else
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_738_; 
v_a_724_ = lean_ctor_get(v_x_717_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v_x_717_);
if (v_isSharedCheck_738_ == 0)
{
v___x_726_ = v_x_717_;
v_isShared_727_ = v_isSharedCheck_738_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v_x_717_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_738_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
uint32_t v___x_728_; lean_object* v___x_729_; 
v___x_728_ = 0;
v___x_729_ = lasm_js_call_into(v_a_713_, v_op_714_, v___x_728_, v_flags_715_, v_a_724_, v_payload_716_);
lean_dec(v_a_724_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v___x_732_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_730_);
lean_dec_ref_known(v___x_729_, 1);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v_a_730_);
v___x_732_ = v___x_726_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
v_val_720_ = v___x_732_;
goto v___jp_719_;
}
}
else
{
lean_object* v_a_734_; lean_object* v___x_736_; 
v_a_734_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_734_);
lean_dec_ref_known(v___x_729_, 1);
if (v_isShared_727_ == 0)
{
lean_ctor_set_tag(v___x_726_, 0);
lean_ctor_set(v___x_726_, 0, v_a_734_);
v___x_736_ = v___x_726_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_734_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
v_val_720_ = v___x_736_;
goto v___jp_719_;
}
}
}
}
v___jp_719_:
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v_val_720_);
v___x_722_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_710_, v___x_711_, v___x_721_, v___f_712_);
return v___x_722_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed(lean_object* v___x_739_, lean_object* v___x_740_, lean_object* v___f_741_, lean_object* v_a_742_, lean_object* v_op_743_, lean_object* v_flags_744_, lean_object* v_payload_745_, lean_object* v_x_746_, lean_object* v___y_747_){
_start:
{
uint8_t v___x_827__boxed_748_; uint32_t v_op_boxed_749_; uint64_t v_flags_boxed_750_; lean_object* v_res_751_; 
v___x_827__boxed_748_ = lean_unbox(v___x_740_);
v_op_boxed_749_ = lean_unbox_uint32(v_op_743_);
lean_dec(v_op_743_);
v_flags_boxed_750_ = lean_unbox_uint64(v_flags_744_);
lean_dec_ref(v_flags_744_);
v_res_751_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5(v___x_739_, v___x_827__boxed_748_, v___f_741_, v_a_742_, v_op_boxed_749_, v_flags_boxed_750_, v_payload_745_, v_x_746_);
lean_dec(v_payload_745_);
lean_dec(v_a_742_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_752_, uint32_t v_op_753_, uint64_t v_flags_754_, lean_object* v_payload_755_, lean_object* v___f_756_, lean_object* v___f_757_, lean_object* v___f_758_, lean_object* v_x_759_){
_start:
{
if (lean_obj_tag(v_x_759_) == 0)
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_769_; 
lean_dec_ref(v___f_758_);
lean_dec_ref(v___f_757_);
lean_dec_ref(v___f_756_);
lean_dec(v_payload_755_);
v_a_761_ = lean_ctor_get(v_x_759_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v_x_759_);
if (v_isSharedCheck_769_ == 0)
{
v___x_763_ = v_x_759_;
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v_x_759_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_768_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
lean_object* v___x_767_; 
v___x_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_767_, 0, v___x_766_);
return v___x_767_;
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_816_; 
v_a_770_ = lean_ctor_get(v_x_759_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v_x_759_);
if (v_isSharedCheck_816_ == 0)
{
v___x_772_ = v_x_759_;
v_isShared_773_ = v_isSharedCheck_816_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v_x_759_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_816_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_774_ = lean_string_utf8_byte_size(v_failurePrefix_752_);
v___x_775_ = lean_unsigned_to_nat(0u);
v___x_776_ = lean_nat_dec_eq(v___x_774_, v___x_775_);
if (v___x_776_ == 0)
{
lean_object* v___f_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___f_781_; lean_object* v_val_783_; lean_object* v___x_788_; 
lean_dec_ref(v___f_758_);
lean_inc(v_a_770_);
v___f_777_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_777_, 0, v_a_770_);
v___x_778_ = lean_box(v___x_776_);
v___x_779_ = lean_box_uint32(v_op_753_);
v___x_780_ = lean_box_uint64(v_flags_754_);
lean_inc(v_payload_755_);
v___f_781_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_781_, 0, v___x_775_);
lean_closure_set(v___f_781_, 1, v___x_778_);
lean_closure_set(v___f_781_, 2, v___f_777_);
lean_closure_set(v___f_781_, 3, v_a_770_);
lean_closure_set(v___f_781_, 4, v___x_779_);
lean_closure_set(v___f_781_, 5, v___x_780_);
lean_closure_set(v___f_781_, 6, v_payload_755_);
v___x_788_ = l_Lasm_JS_Wire_encodeIO(v_payload_755_);
lean_dec(v_payload_755_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; lean_object* v___x_791_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_788_, 1);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v_a_789_);
v___x_791_ = v___x_772_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
v_val_783_ = v___x_791_;
goto v___jp_782_;
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; 
v_a_793_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_788_, 1);
if (v_isShared_773_ == 0)
{
lean_ctor_set_tag(v___x_772_, 0);
lean_ctor_set(v___x_772_, 0, v_a_793_);
v___x_795_ = v___x_772_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_793_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
v_val_783_ = v___x_795_;
goto v___jp_782_;
}
}
v___jp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_784_, 0, v_val_783_);
v___x_785_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_775_, v___x_776_, v___x_784_, v___f_781_);
v___x_786_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_775_, v___x_776_, v___x_785_, v___f_756_);
v___x_787_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_775_, v___x_776_, v___x_786_, v___f_757_);
return v___x_787_;
}
}
else
{
lean_object* v___f_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___f_800_; uint8_t v___x_801_; lean_object* v_val_803_; lean_object* v___x_807_; 
lean_dec_ref(v___f_757_);
lean_dec_ref(v___f_756_);
lean_inc(v_a_770_);
v___f_797_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_797_, 0, v_a_770_);
v___x_798_ = lean_box_uint32(v_op_753_);
v___x_799_ = lean_box_uint64(v_flags_754_);
lean_inc(v_payload_755_);
v___f_800_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_800_, 0, v___f_797_);
lean_closure_set(v___f_800_, 1, v_a_770_);
lean_closure_set(v___f_800_, 2, v___x_798_);
lean_closure_set(v___f_800_, 3, v___x_799_);
lean_closure_set(v___f_800_, 4, v_payload_755_);
v___x_801_ = 0;
v___x_807_ = l_Lasm_JS_Wire_encodeIO(v_payload_755_);
lean_dec(v_payload_755_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_810_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_807_, 1);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v_a_808_);
v___x_810_ = v___x_772_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_808_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
v_val_803_ = v___x_810_;
goto v___jp_802_;
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; 
v_a_812_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_a_812_);
lean_dec_ref_known(v___x_807_, 1);
if (v_isShared_773_ == 0)
{
lean_ctor_set_tag(v___x_772_, 0);
lean_ctor_set(v___x_772_, 0, v_a_812_);
v___x_814_ = v___x_772_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_812_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
v_val_803_ = v___x_814_;
goto v___jp_802_;
}
}
v___jp_802_:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v_val_803_);
v___x_805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_775_, v___x_801_, v___x_804_, v___f_800_);
v___x_806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_775_, v___x_801_, v___x_805_, v___f_758_);
return v___x_806_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_817_, lean_object* v_op_818_, lean_object* v_flags_819_, lean_object* v_payload_820_, lean_object* v___f_821_, lean_object* v___f_822_, lean_object* v___f_823_, lean_object* v_x_824_, lean_object* v___y_825_){
_start:
{
uint32_t v_op_boxed_826_; uint64_t v_flags_boxed_827_; lean_object* v_res_828_; 
v_op_boxed_826_ = lean_unbox_uint32(v_op_818_);
lean_dec(v_op_818_);
v_flags_boxed_827_ = lean_unbox_uint64(v_flags_819_);
lean_dec_ref(v_flags_819_);
v_res_828_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6(v_failurePrefix_817_, v_op_boxed_826_, v_flags_boxed_827_, v_payload_820_, v___f_821_, v___f_822_, v___f_823_, v_x_824_);
lean_dec_ref(v_failurePrefix_817_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2(lean_object* v___f_829_, lean_object* v_x_830_){
_start:
{
if (lean_obj_tag(v_x_830_) == 0)
{
lean_object* v_a_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_840_; 
lean_dec_ref(v___f_829_);
v_a_832_ = lean_ctor_get(v_x_830_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v_x_830_);
if (v_isSharedCheck_840_ == 0)
{
v___x_834_ = v_x_830_;
v_isShared_835_ = v_isSharedCheck_840_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_a_832_);
lean_dec(v_x_830_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_840_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_837_; 
if (v_isShared_835_ == 0)
{
v___x_837_ = v___x_834_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_832_);
v___x_837_ = v_reuseFailAlloc_839_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
lean_object* v___x_838_; 
v___x_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
return v___x_838_;
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_842_; 
v_a_841_ = lean_ctor_get(v_x_830_, 0);
lean_inc(v_a_841_);
lean_dec_ref_known(v_x_830_, 1);
v___x_842_ = lean_apply_2(v___f_829_, v_a_841_, lean_box(0));
return v___x_842_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2___boxed(lean_object* v___f_843_, lean_object* v_x_844_, lean_object* v___y_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2(v___f_843_, v_x_844_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1(lean_object* v___f_847_, lean_object* v_bytes_848_){
_start:
{
lean_object* v___x_850_; uint8_t v___x_851_; lean_object* v_val_853_; lean_object* v___x_856_; 
v___x_850_ = lean_unsigned_to_nat(0u);
v___x_851_ = 0;
v___x_856_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_848_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_856_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
lean_ctor_set_tag(v___x_859_, 1);
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
v_val_853_ = v___x_862_;
goto v___jp_852_;
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
v_a_865_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_856_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_856_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
lean_ctor_set_tag(v___x_867_, 0);
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
v_val_853_ = v___x_870_;
goto v___jp_852_;
}
}
}
v___jp_852_:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v_val_853_);
v___x_855_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_850_, v___x_851_, v___x_854_, v___f_847_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1___boxed(lean_object* v___f_873_, lean_object* v_bytes_874_, lean_object* v___y_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1(v___f_873_, v_bytes_874_);
lean_dec_ref(v_bytes_874_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_877_, lean_object* v_x_878_){
_start:
{
if (lean_obj_tag(v_x_878_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_891_; 
v_a_880_ = lean_ctor_get(v_x_878_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v_x_878_);
if (v_isSharedCheck_891_ == 0)
{
v___x_882_ = v_x_878_;
v_isShared_883_ = v_isSharedCheck_891_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v_x_878_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_891_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_884_ = lean_io_error_to_string(v_a_880_);
v___x_885_ = lean_string_append(v_failurePrefix_877_, v___x_884_);
lean_dec_ref(v___x_884_);
v___x_886_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_886_);
v___x_888_ = v___x_882_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_886_);
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
lean_object* v___x_892_; 
lean_dec_ref(v_failurePrefix_877_);
v___x_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_892_, 0, v_x_878_);
return v___x_892_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_893_, lean_object* v_x_894_, lean_object* v___y_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4(v_failurePrefix_893_, v_x_894_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8(lean_object* v___f_897_, lean_object* v_x_898_){
_start:
{
if (lean_obj_tag(v_x_898_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_908_; 
lean_dec_ref(v___f_897_);
v_a_900_ = lean_ctor_get(v_x_898_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v_x_898_);
if (v_isSharedCheck_908_ == 0)
{
v___x_902_ = v_x_898_;
v_isShared_903_ = v_isSharedCheck_908_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v_x_898_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_908_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_900_);
v___x_905_ = v_reuseFailAlloc_907_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v___x_906_; 
v___x_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
return v___x_906_;
}
}
}
else
{
lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_920_; 
v_isSharedCheck_920_ = !lean_is_exclusive(v_x_898_);
if (v_isSharedCheck_920_ == 0)
{
lean_object* v_unused_921_; 
v_unused_921_ = lean_ctor_get(v_x_898_, 0);
lean_dec(v_unused_921_);
v___x_910_ = v_x_898_;
v_isShared_911_ = v_isSharedCheck_920_;
goto v_resetjp_909_;
}
else
{
lean_dec(v_x_898_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_920_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; uint8_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_916_; 
v___x_912_ = lean_unsigned_to_nat(0u);
v___x_913_ = 0;
v___x_914_ = lean_io_promise_new();
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_914_);
v___x_916_ = v___x_910_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v___x_914_);
v___x_916_ = v_reuseFailAlloc_919_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
v___x_918_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_912_, v___x_913_, v___x_917_, v___f_897_);
return v___x_918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8___boxed(lean_object* v___f_922_, lean_object* v_x_923_, lean_object* v___y_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8(v___f_922_, v_x_923_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0(lean_object* v_context_926_, lean_object* v_x_927_){
_start:
{
lean_object* v_val_930_; 
if (lean_obj_tag(v_x_927_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_940_; 
v_a_932_ = lean_ctor_get(v_x_927_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v_x_927_);
if (v_isSharedCheck_940_ == 0)
{
v___x_934_ = v_x_927_;
v_isShared_935_ = v_isSharedCheck_940_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v_x_927_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_940_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_939_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
lean_object* v___x_938_; 
v___x_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
return v___x_938_;
}
}
}
else
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_954_; 
v_a_941_ = lean_ctor_get(v_x_927_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v_x_927_);
if (v_isSharedCheck_954_ == 0)
{
v___x_943_ = v_x_927_;
v_isShared_944_ = v_isSharedCheck_954_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v_x_927_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_954_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; 
v___x_945_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v_context_926_, v_a_941_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_948_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_945_, 1);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v_a_946_);
v___x_948_ = v___x_943_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
v_val_930_ = v___x_948_;
goto v___jp_929_;
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; 
v_a_950_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_945_, 1);
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 0);
lean_ctor_set(v___x_943_, 0, v_a_950_);
v___x_952_ = v___x_943_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_950_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
v_val_930_ = v___x_952_;
goto v___jp_929_;
}
}
}
}
v___jp_929_:
{
lean_object* v___x_931_; 
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v_val_930_);
return v___x_931_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0___boxed(lean_object* v_context_955_, lean_object* v_x_956_, lean_object* v___y_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0(v_context_955_, v_x_956_);
lean_dec_ref(v_context_955_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(lean_object* v_context_959_, uint32_t v_op_960_, uint64_t v_flags_961_, lean_object* v_payload_962_, lean_object* v_failurePrefix_963_){
_start:
{
lean_object* v___f_965_; lean_object* v___f_966_; lean_object* v___f_967_; lean_object* v___f_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___f_971_; lean_object* v___f_972_; lean_object* v___x_973_; uint8_t v___x_974_; lean_object* v_val_976_; lean_object* v___x_979_; 
v___f_965_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_965_, 0, v_context_959_);
v___f_966_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_966_, 0, v___f_965_);
v___f_967_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_967_, 0, v___f_966_);
lean_inc_ref(v_failurePrefix_963_);
v___f_968_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_968_, 0, v_failurePrefix_963_);
v___x_969_ = lean_box_uint32(v_op_960_);
v___x_970_ = lean_box_uint64(v_flags_961_);
lean_inc_ref(v___f_967_);
v___f_971_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_971_, 0, v_failurePrefix_963_);
lean_closure_set(v___f_971_, 1, v___x_969_);
lean_closure_set(v___f_971_, 2, v___x_970_);
lean_closure_set(v___f_971_, 3, v_payload_962_);
lean_closure_set(v___f_971_, 4, v___f_968_);
lean_closure_set(v___f_971_, 5, v___f_967_);
lean_closure_set(v___f_971_, 6, v___f_967_);
v___f_972_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_972_, 0, v___f_971_);
v___x_973_ = lean_unsigned_to_nat(0u);
v___x_974_ = 0;
v___x_979_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_979_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_979_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
lean_ctor_set_tag(v___x_982_, 1);
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
v_val_976_ = v___x_985_;
goto v___jp_975_;
}
}
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
v_a_988_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_979_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_979_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
lean_ctor_set_tag(v___x_990_, 0);
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
v_val_976_ = v___x_993_;
goto v___jp_975_;
}
}
}
v___jp_975_:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_977_, 0, v_val_976_);
v___x_978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_973_, v___x_974_, v___x_977_, v___f_972_);
return v___x_978_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___boxed(lean_object* v_context_996_, lean_object* v_op_997_, lean_object* v_flags_998_, lean_object* v_payload_999_, lean_object* v_failurePrefix_1000_, lean_object* v_a_1001_){
_start:
{
uint32_t v_op_boxed_1002_; uint64_t v_flags_boxed_1003_; lean_object* v_res_1004_; 
v_op_boxed_1002_ = lean_unbox_uint32(v_op_997_);
lean_dec(v_op_997_);
v_flags_boxed_1003_ = lean_unbox_uint64(v_flags_998_);
lean_dec_ref(v_flags_998_);
v_res_1004_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v_context_996_, v_op_boxed_1002_, v_flags_boxed_1003_, v_payload_999_, v_failurePrefix_1000_);
return v_res_1004_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(uint8_t v_await_1005_, uint64_t v_extra_1006_){
_start:
{
uint64_t v___x_1007_; uint64_t v___y_1009_; 
v___x_1007_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1005_ == 0)
{
uint64_t v___x_1012_; 
v___x_1012_ = 0ULL;
v___y_1009_ = v___x_1012_;
goto v___jp_1008_;
}
else
{
uint64_t v___x_1013_; 
v___x_1013_ = 2ULL;
v___y_1009_ = v___x_1013_;
goto v___jp_1008_;
}
v___jp_1008_:
{
uint64_t v___x_1010_; uint64_t v___x_1011_; 
v___x_1010_ = lean_uint64_lor(v___x_1007_, v___y_1009_);
v___x_1011_ = lean_uint64_lor(v___x_1010_, v_extra_1006_);
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0___boxed(lean_object* v_await_1014_, lean_object* v_extra_1015_){
_start:
{
uint8_t v_await_boxed_1016_; uint64_t v_extra_boxed_1017_; uint64_t v_res_1018_; lean_object* v_r_1019_; 
v_await_boxed_1016_ = lean_unbox(v_await_1014_);
v_extra_boxed_1017_ = lean_unbox_uint64(v_extra_1015_);
lean_dec_ref(v_extra_1015_);
v_res_1018_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v_await_boxed_1016_, v_extra_boxed_1017_);
v_r_1019_ = lean_box_uint64(v_res_1018_);
return v_r_1019_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1(void){
_start:
{
uint64_t v___x_1021_; uint8_t v___x_1022_; uint64_t v___x_1023_; 
v___x_1021_ = 8ULL;
v___x_1022_ = 0;
v___x_1023_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v___x_1022_, v___x_1021_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object* v_o_1024_, lean_object* v_name_1025_, lean_object* v_args_1026_){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; uint32_t v___x_1033_; uint64_t v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1028_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1029_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1029_, 0, v_o_1024_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
lean_inc_ref(v_name_1025_);
v___x_1030_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1030_, 0, v_name_1025_);
v___x_1031_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0));
v___x_1032_ = lean_string_append(v___x_1031_, v_name_1025_);
lean_dec_ref(v_name_1025_);
v___x_1033_ = 205;
v___x_1034_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1);
v___x_1035_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1035_, 0, v_args_1026_);
v___x_1036_ = lean_unsigned_to_nat(3u);
v___x_1037_ = lean_mk_empty_array_with_capacity(v___x_1036_);
v___x_1038_ = lean_array_push(v___x_1037_, v___x_1029_);
v___x_1039_ = lean_array_push(v___x_1038_, v___x_1030_);
v___x_1040_ = lean_array_push(v___x_1039_, v___x_1035_);
v___x_1041_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
v___x_1042_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v___x_1032_, v___x_1033_, v___x_1034_, v___x_1041_, v___x_1028_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___boxed(lean_object* v_o_1043_, lean_object* v_name_1044_, lean_object* v_args_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_o_1043_, v_name_1044_, v_args_1045_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text(lean_object* v_self_1049_){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1051_ = ((lean_object*)(l_Lasm_JS_Web_Blob_text___closed__0));
v___x_1052_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1053_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_1049_, v___x_1051_, v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text___boxed(lean_object* v_self_1054_, lean_object* v_a_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lasm_JS_Web_Blob_text(v_self_1054_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0(lean_object* v_x_1057_){
_start:
{
lean_object* v_val_1060_; 
if (lean_obj_tag(v_x_1057_) == 0)
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1070_; 
v_a_1062_ = lean_ctor_get(v_x_1057_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_x_1057_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1064_ = v_x_1057_;
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v_x_1057_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1067_);
return v___x_1068_;
}
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1084_; 
v_a_1071_ = lean_ctor_get(v_x_1057_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_x_1057_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1073_ = v_x_1057_;
v_isShared_1074_ = v_isSharedCheck_1084_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v_x_1057_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1084_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_1071_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v_a_1076_);
v___x_1078_ = v___x_1073_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1076_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
v_val_1060_ = v___x_1078_;
goto v___jp_1059_;
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; 
v_a_1080_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1080_);
lean_dec_ref_known(v___x_1075_, 1);
if (v_isShared_1074_ == 0)
{
lean_ctor_set_tag(v___x_1073_, 0);
lean_ctor_set(v___x_1073_, 0, v_a_1080_);
v___x_1082_ = v___x_1073_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
v_val_1060_ = v___x_1082_;
goto v___jp_1059_;
}
}
}
}
v___jp_1059_:
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1061_, 0, v_val_1060_);
return v___x_1061_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0___boxed(lean_object* v_x_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lasm_JS_Web_Blob_arrayBuffer___lam__0(v_x_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2(lean_object* v___f_1088_, lean_object* v_x_1089_){
_start:
{
if (lean_obj_tag(v_x_1089_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1099_; 
lean_dec_ref(v___f_1088_);
v_a_1091_ = lean_ctor_get(v_x_1089_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v_x_1089_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1093_ = v_x_1089_;
v_isShared_1094_ = v_isSharedCheck_1099_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v_x_1089_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1099_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
return v___x_1097_;
}
}
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1101_; 
v_a_1100_ = lean_ctor_get(v_x_1089_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v_x_1089_, 1);
v___x_1101_ = lean_apply_2(v___f_1088_, v_a_1100_, lean_box(0));
return v___x_1101_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2___boxed(lean_object* v___f_1102_, lean_object* v_x_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2(v___f_1102_, v_x_1103_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1(lean_object* v___f_1106_, lean_object* v_bytes_1107_){
_start:
{
lean_object* v___x_1109_; uint8_t v___x_1110_; lean_object* v_val_1112_; lean_object* v___x_1115_; 
v___x_1109_ = lean_unsigned_to_nat(0u);
v___x_1110_ = 0;
v___x_1115_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1107_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1115_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1115_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
lean_ctor_set_tag(v___x_1118_, 1);
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
v_val_1112_ = v___x_1121_;
goto v___jp_1111_;
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
v_a_1124_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1115_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1115_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
lean_ctor_set_tag(v___x_1126_, 0);
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
v_val_1112_ = v___x_1129_;
goto v___jp_1111_;
}
}
}
v___jp_1111_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v_val_1112_);
v___x_1114_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1109_, v___x_1110_, v___x_1113_, v___f_1106_);
return v___x_1114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1___boxed(lean_object* v___f_1132_, lean_object* v_bytes_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1(v___f_1132_, v_bytes_1133_);
lean_dec_ref(v_bytes_1133_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_1136_, uint32_t v_op_1137_, uint64_t v_flags_1138_, lean_object* v_payload_1139_, lean_object* v___f_1140_, lean_object* v___f_1141_, lean_object* v___f_1142_, lean_object* v_x_1143_){
_start:
{
if (lean_obj_tag(v_x_1143_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1153_; 
lean_dec_ref(v___f_1142_);
lean_dec_ref(v___f_1141_);
lean_dec_ref(v___f_1140_);
lean_dec(v_payload_1139_);
v_a_1145_ = lean_ctor_get(v_x_1143_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1147_ = v_x_1143_;
v_isShared_1148_ = v_isSharedCheck_1153_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v_x_1143_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1153_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; 
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1200_; 
v_a_1154_ = lean_ctor_get(v_x_1143_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1156_ = v_x_1143_;
v_isShared_1157_ = v_isSharedCheck_1200_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v_x_1143_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1200_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1158_ = lean_string_utf8_byte_size(v_failurePrefix_1136_);
v___x_1159_ = lean_unsigned_to_nat(0u);
v___x_1160_ = lean_nat_dec_eq(v___x_1158_, v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___f_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___f_1165_; lean_object* v_val_1167_; lean_object* v___x_1172_; 
lean_dec_ref(v___f_1142_);
lean_inc(v_a_1154_);
v___f_1161_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1161_, 0, v_a_1154_);
v___x_1162_ = lean_box(v___x_1160_);
v___x_1163_ = lean_box_uint32(v_op_1137_);
v___x_1164_ = lean_box_uint64(v_flags_1138_);
lean_inc(v_payload_1139_);
v___f_1165_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1165_, 0, v___x_1159_);
lean_closure_set(v___f_1165_, 1, v___x_1162_);
lean_closure_set(v___f_1165_, 2, v___f_1161_);
lean_closure_set(v___f_1165_, 3, v_a_1154_);
lean_closure_set(v___f_1165_, 4, v___x_1163_);
lean_closure_set(v___f_1165_, 5, v___x_1164_);
lean_closure_set(v___f_1165_, 6, v_payload_1139_);
v___x_1172_ = l_Lasm_JS_Wire_encodeIO(v_payload_1139_);
lean_dec(v_payload_1139_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v___x_1172_, 1);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 0, v_a_1173_);
v___x_1175_ = v___x_1156_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_a_1173_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
v_val_1167_ = v___x_1175_;
goto v___jp_1166_;
}
}
else
{
lean_object* v_a_1177_; lean_object* v___x_1179_; 
v_a_1177_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1177_);
lean_dec_ref_known(v___x_1172_, 1);
if (v_isShared_1157_ == 0)
{
lean_ctor_set_tag(v___x_1156_, 0);
lean_ctor_set(v___x_1156_, 0, v_a_1177_);
v___x_1179_ = v___x_1156_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
v_val_1167_ = v___x_1179_;
goto v___jp_1166_;
}
}
v___jp_1166_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1168_, 0, v_val_1167_);
v___x_1169_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1159_, v___x_1160_, v___x_1168_, v___f_1165_);
v___x_1170_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1159_, v___x_1160_, v___x_1169_, v___f_1140_);
v___x_1171_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1159_, v___x_1160_, v___x_1170_, v___f_1141_);
return v___x_1171_;
}
}
else
{
lean_object* v___f_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___f_1184_; uint8_t v___x_1185_; lean_object* v_val_1187_; lean_object* v___x_1191_; 
lean_dec_ref(v___f_1141_);
lean_dec_ref(v___f_1140_);
lean_inc(v_a_1154_);
v___f_1181_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1181_, 0, v_a_1154_);
v___x_1182_ = lean_box_uint32(v_op_1137_);
v___x_1183_ = lean_box_uint64(v_flags_1138_);
lean_inc(v_payload_1139_);
v___f_1184_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1184_, 0, v___f_1181_);
lean_closure_set(v___f_1184_, 1, v_a_1154_);
lean_closure_set(v___f_1184_, 2, v___x_1182_);
lean_closure_set(v___f_1184_, 3, v___x_1183_);
lean_closure_set(v___f_1184_, 4, v_payload_1139_);
v___x_1185_ = 0;
v___x_1191_ = l_Lasm_JS_Wire_encodeIO(v_payload_1139_);
lean_dec(v_payload_1139_);
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v_a_1192_; lean_object* v___x_1194_; 
v_a_1192_ = lean_ctor_get(v___x_1191_, 0);
lean_inc(v_a_1192_);
lean_dec_ref_known(v___x_1191_, 1);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 0, v_a_1192_);
v___x_1194_ = v___x_1156_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1192_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
v_val_1187_ = v___x_1194_;
goto v___jp_1186_;
}
}
else
{
lean_object* v_a_1196_; lean_object* v___x_1198_; 
v_a_1196_ = lean_ctor_get(v___x_1191_, 0);
lean_inc(v_a_1196_);
lean_dec_ref_known(v___x_1191_, 1);
if (v_isShared_1157_ == 0)
{
lean_ctor_set_tag(v___x_1156_, 0);
lean_ctor_set(v___x_1156_, 0, v_a_1196_);
v___x_1198_ = v___x_1156_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_a_1196_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
v_val_1187_ = v___x_1198_;
goto v___jp_1186_;
}
}
v___jp_1186_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_val_1187_);
v___x_1189_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1159_, v___x_1185_, v___x_1188_, v___f_1184_);
v___x_1190_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1159_, v___x_1185_, v___x_1189_, v___f_1142_);
return v___x_1190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_1201_, lean_object* v_op_1202_, lean_object* v_flags_1203_, lean_object* v_payload_1204_, lean_object* v___f_1205_, lean_object* v___f_1206_, lean_object* v___f_1207_, lean_object* v_x_1208_, lean_object* v___y_1209_){
_start:
{
uint32_t v_op_boxed_1210_; uint64_t v_flags_boxed_1211_; lean_object* v_res_1212_; 
v_op_boxed_1210_ = lean_unbox_uint32(v_op_1202_);
lean_dec(v_op_1202_);
v_flags_boxed_1211_ = lean_unbox_uint64(v_flags_1203_);
lean_dec_ref(v_flags_1203_);
v_res_1212_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9(v_failurePrefix_1201_, v_op_boxed_1210_, v_flags_boxed_1211_, v_payload_1204_, v___f_1205_, v___f_1206_, v___f_1207_, v_x_1208_);
lean_dec_ref(v_failurePrefix_1201_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0(lean_object* v_context_1213_, lean_object* v_x_1214_){
_start:
{
lean_object* v_val_1217_; 
if (lean_obj_tag(v_x_1214_) == 0)
{
lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1227_; 
v_a_1219_ = lean_ctor_get(v_x_1214_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_x_1214_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1221_ = v_x_1214_;
v_isShared_1222_ = v_isSharedCheck_1227_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v_x_1214_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1227_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1219_);
v___x_1224_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
lean_object* v___x_1225_; 
v___x_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
return v___x_1225_;
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1241_; 
v_a_1228_ = lean_ctor_get(v_x_1214_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_x_1214_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1230_ = v_x_1214_;
v_isShared_1231_ = v_isSharedCheck_1241_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v_x_1214_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1241_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_1213_, v_a_1228_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v_a_1233_; lean_object* v___x_1235_; 
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1233_);
lean_dec_ref_known(v___x_1232_, 1);
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 0, v_a_1233_);
v___x_1235_ = v___x_1230_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1233_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
v_val_1217_ = v___x_1235_;
goto v___jp_1216_;
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; 
v_a_1237_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1237_);
lean_dec_ref_known(v___x_1232_, 1);
if (v_isShared_1231_ == 0)
{
lean_ctor_set_tag(v___x_1230_, 0);
lean_ctor_set(v___x_1230_, 0, v_a_1237_);
v___x_1239_ = v___x_1230_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1237_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
v_val_1217_ = v___x_1239_;
goto v___jp_1216_;
}
}
}
}
v___jp_1216_:
{
lean_object* v___x_1218_; 
v___x_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1218_, 0, v_val_1217_);
return v___x_1218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0___boxed(lean_object* v_context_1242_, lean_object* v_x_1243_, lean_object* v___y_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0(v_context_1242_, v_x_1243_);
lean_dec_ref(v_context_1242_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3(lean_object* v___f_1246_, lean_object* v_x_1247_){
_start:
{
if (lean_obj_tag(v_x_1247_) == 0)
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref(v___f_1246_);
v_a_1249_ = lean_ctor_get(v_x_1247_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v_x_1247_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1251_ = v_x_1247_;
v_isShared_1252_ = v_isSharedCheck_1257_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v_x_1247_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1257_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1252_ == 0)
{
v___x_1254_ = v___x_1251_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1249_);
v___x_1254_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
lean_object* v___x_1255_; 
v___x_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
return v___x_1255_;
}
}
}
else
{
lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1269_; 
v_isSharedCheck_1269_ = !lean_is_exclusive(v_x_1247_);
if (v_isSharedCheck_1269_ == 0)
{
lean_object* v_unused_1270_; 
v_unused_1270_ = lean_ctor_get(v_x_1247_, 0);
lean_dec(v_unused_1270_);
v___x_1259_ = v_x_1247_;
v_isShared_1260_ = v_isSharedCheck_1269_;
goto v_resetjp_1258_;
}
else
{
lean_dec(v_x_1247_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1269_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1261_; uint8_t v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1265_; 
v___x_1261_ = lean_unsigned_to_nat(0u);
v___x_1262_ = 0;
v___x_1263_ = lean_io_promise_new();
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v___x_1263_);
v___x_1265_ = v___x_1259_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1263_);
v___x_1265_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
v___x_1267_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1261_, v___x_1262_, v___x_1266_, v___f_1246_);
return v___x_1267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3___boxed(lean_object* v___f_1271_, lean_object* v_x_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3(v___f_1271_, v_x_1272_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(lean_object* v_context_1275_, uint32_t v_op_1276_, uint64_t v_flags_1277_, lean_object* v_payload_1278_, lean_object* v_failurePrefix_1279_){
_start:
{
lean_object* v___f_1281_; lean_object* v___f_1282_; lean_object* v___f_1283_; lean_object* v___f_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___f_1287_; lean_object* v___f_1288_; lean_object* v___x_1289_; uint8_t v___x_1290_; lean_object* v_val_1292_; lean_object* v___x_1295_; 
v___f_1281_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1281_, 0, v_context_1275_);
v___f_1282_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1282_, 0, v___f_1281_);
v___f_1283_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1283_, 0, v___f_1282_);
lean_inc_ref(v_failurePrefix_1279_);
v___f_1284_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1284_, 0, v_failurePrefix_1279_);
v___x_1285_ = lean_box_uint32(v_op_1276_);
v___x_1286_ = lean_box_uint64(v_flags_1277_);
lean_inc_ref(v___f_1283_);
v___f_1287_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1287_, 0, v_failurePrefix_1279_);
lean_closure_set(v___f_1287_, 1, v___x_1285_);
lean_closure_set(v___f_1287_, 2, v___x_1286_);
lean_closure_set(v___f_1287_, 3, v_payload_1278_);
lean_closure_set(v___f_1287_, 4, v___f_1284_);
lean_closure_set(v___f_1287_, 5, v___f_1283_);
lean_closure_set(v___f_1287_, 6, v___f_1283_);
v___f_1288_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1288_, 0, v___f_1287_);
v___x_1289_ = lean_unsigned_to_nat(0u);
v___x_1290_ = 0;
v___x_1295_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
v_a_1296_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1295_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1295_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
lean_ctor_set_tag(v___x_1298_, 1);
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
v_val_1292_ = v___x_1301_;
goto v___jp_1291_;
}
}
}
else
{
lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
v_a_1304_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1306_ = v___x_1295_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1295_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 0);
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_a_1304_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
v_val_1292_ = v___x_1309_;
goto v___jp_1291_;
}
}
}
v___jp_1291_:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v_val_1292_);
v___x_1294_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1289_, v___x_1290_, v___x_1293_, v___f_1288_);
return v___x_1294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___boxed(lean_object* v_context_1312_, lean_object* v_op_1313_, lean_object* v_flags_1314_, lean_object* v_payload_1315_, lean_object* v_failurePrefix_1316_, lean_object* v_a_1317_){
_start:
{
uint32_t v_op_boxed_1318_; uint64_t v_flags_boxed_1319_; lean_object* v_res_1320_; 
v_op_boxed_1318_ = lean_unbox_uint32(v_op_1313_);
lean_dec(v_op_1313_);
v_flags_boxed_1319_ = lean_unbox_uint64(v_flags_1314_);
lean_dec_ref(v_flags_1314_);
v_res_1320_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v_context_1312_, v_op_boxed_1318_, v_flags_boxed_1319_, v_payload_1315_, v_failurePrefix_1316_);
return v_res_1320_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1321_; uint8_t v___x_1322_; uint64_t v___x_1323_; 
v___x_1321_ = 8ULL;
v___x_1322_ = 0;
v___x_1323_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_1322_, v___x_1321_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object* v_o_1324_, lean_object* v_name_1325_, lean_object* v_args_1326_){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; uint32_t v___x_1333_; uint64_t v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1328_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1329_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1329_, 0, v_o_1324_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
lean_inc_ref(v_name_1325_);
v___x_1330_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_name_1325_);
v___x_1331_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0));
v___x_1332_ = lean_string_append(v___x_1331_, v_name_1325_);
lean_dec_ref(v_name_1325_);
v___x_1333_ = 205;
v___x_1334_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0);
v___x_1335_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1335_, 0, v_args_1326_);
v___x_1336_ = lean_unsigned_to_nat(3u);
v___x_1337_ = lean_mk_empty_array_with_capacity(v___x_1336_);
v___x_1338_ = lean_array_push(v___x_1337_, v___x_1329_);
v___x_1339_ = lean_array_push(v___x_1338_, v___x_1330_);
v___x_1340_ = lean_array_push(v___x_1339_, v___x_1335_);
v___x_1341_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
v___x_1342_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v___x_1332_, v___x_1333_, v___x_1334_, v___x_1341_, v___x_1328_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___boxed(lean_object* v_o_1343_, lean_object* v_name_1344_, lean_object* v_args_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_o_1343_, v_name_1344_, v_args_1345_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer(lean_object* v_self_1350_){
_start:
{
lean_object* v___f_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___f_1352_ = ((lean_object*)(l_Lasm_JS_Web_Blob_arrayBuffer___closed__0));
v___x_1353_ = ((lean_object*)(l_Lasm_JS_Web_Blob_arrayBuffer___closed__1));
v___x_1354_ = lean_unsigned_to_nat(0u);
v___x_1355_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1356_ = 0;
v___x_1357_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_1350_, v___x_1353_, v___x_1355_);
v___x_1358_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1354_, v___x_1356_, v___x_1357_, v___f_1352_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___boxed(lean_object* v_self_1359_, lean_object* v_a_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Lasm_JS_Web_Blob_arrayBuffer(v_self_1359_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream(lean_object* v_self_1363_){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1365_ = ((lean_object*)(l_Lasm_JS_Web_Blob_textStream___closed__0));
v___x_1366_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1367_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1363_, v___x_1365_, v___x_1366_);
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
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
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
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream___boxed(lean_object* v_self_1384_, lean_object* v_a_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l_Lasm_JS_Web_Blob_textStream(v_self_1384_);
return v_res_1386_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(uint8_t v_await_1387_, uint64_t v_extra_1388_){
_start:
{
uint64_t v___x_1389_; uint64_t v___y_1391_; 
v___x_1389_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1387_ == 0)
{
uint64_t v___x_1394_; 
v___x_1394_ = 0ULL;
v___y_1391_ = v___x_1394_;
goto v___jp_1390_;
}
else
{
uint64_t v___x_1395_; 
v___x_1395_ = 2ULL;
v___y_1391_ = v___x_1395_;
goto v___jp_1390_;
}
v___jp_1390_:
{
uint64_t v___x_1392_; uint64_t v___x_1393_; 
v___x_1392_ = lean_uint64_lor(v___x_1389_, v___y_1391_);
v___x_1393_ = lean_uint64_lor(v___x_1392_, v_extra_1388_);
return v___x_1393_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0___boxed(lean_object* v_await_1396_, lean_object* v_extra_1397_){
_start:
{
uint8_t v_await_boxed_1398_; uint64_t v_extra_boxed_1399_; uint64_t v_res_1400_; lean_object* v_r_1401_; 
v_await_boxed_1398_ = lean_unbox(v_await_1396_);
v_extra_boxed_1399_ = lean_unbox_uint64(v_extra_1397_);
lean_dec_ref(v_extra_1397_);
v_res_1400_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(v_await_boxed_1398_, v_extra_boxed_1399_);
v_r_1401_ = lean_box_uint64(v_res_1400_);
return v_r_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2(lean_object* v___f_1402_, lean_object* v_x_1403_){
_start:
{
if (lean_obj_tag(v_x_1403_) == 0)
{
lean_object* v___x_1405_; 
lean_dec_ref(v___f_1402_);
v___x_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1405_, 0, v_x_1403_);
return v___x_1405_;
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1407_; 
v_a_1406_ = lean_ctor_get(v_x_1403_, 0);
lean_inc(v_a_1406_);
lean_dec_ref_known(v_x_1403_, 1);
v___x_1407_ = lean_apply_2(v___f_1402_, v_a_1406_, lean_box(0));
return v___x_1407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1408_, lean_object* v_x_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2(v___f_1408_, v_x_1409_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0(lean_object* v_context_1412_, lean_object* v_x_1413_){
_start:
{
lean_object* v_val_1416_; 
if (lean_obj_tag(v_x_1413_) == 0)
{
lean_object* v_a_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1426_; 
v_a_1418_ = lean_ctor_get(v_x_1413_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v_x_1413_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1420_ = v_x_1413_;
v_isShared_1421_ = v_isSharedCheck_1426_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_a_1418_);
lean_dec(v_x_1413_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1426_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1423_; 
if (v_isShared_1421_ == 0)
{
v___x_1423_ = v___x_1420_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1418_);
v___x_1423_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
return v___x_1424_;
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1440_; 
v_a_1427_ = lean_ctor_get(v_x_1413_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v_x_1413_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1429_ = v_x_1413_;
v_isShared_1430_ = v_isSharedCheck_1440_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v_x_1413_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1440_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; 
v___x_1431_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_1412_, v_a_1427_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; lean_object* v___x_1434_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref_known(v___x_1431_, 1);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v_a_1432_);
v___x_1434_ = v___x_1429_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1432_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
v_val_1416_ = v___x_1434_;
goto v___jp_1415_;
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; 
v_a_1436_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1436_);
lean_dec_ref_known(v___x_1431_, 1);
if (v_isShared_1430_ == 0)
{
lean_ctor_set_tag(v___x_1429_, 0);
lean_ctor_set(v___x_1429_, 0, v_a_1436_);
v___x_1438_ = v___x_1429_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
v_val_1416_ = v___x_1438_;
goto v___jp_1415_;
}
}
}
}
v___jp_1415_:
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1417_, 0, v_val_1416_);
return v___x_1417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1441_, lean_object* v_x_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0(v_context_1441_, v_x_1442_);
lean_dec_ref(v_context_1441_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1(lean_object* v___f_1445_, lean_object* v_bytes_1446_){
_start:
{
lean_object* v___x_1448_; uint8_t v___x_1449_; lean_object* v_val_1451_; lean_object* v___x_1454_; 
v___x_1448_ = lean_unsigned_to_nat(0u);
v___x_1449_ = 0;
v___x_1454_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1446_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1454_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1454_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set_tag(v___x_1457_, 1);
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
v_val_1451_ = v___x_1460_;
goto v___jp_1450_;
}
}
}
else
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1470_; 
v_a_1463_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1465_ = v___x_1454_;
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1454_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1468_; 
if (v_isShared_1466_ == 0)
{
lean_ctor_set_tag(v___x_1465_, 0);
v___x_1468_ = v___x_1465_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_a_1463_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
v_val_1451_ = v___x_1468_;
goto v___jp_1450_;
}
}
}
v___jp_1450_:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1452_, 0, v_val_1451_);
v___x_1453_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1448_, v___x_1449_, v___x_1452_, v___f_1445_);
return v___x_1453_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1471_, lean_object* v_bytes_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1(v___f_1471_, v_bytes_1472_);
lean_dec_ref(v_bytes_1472_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3(lean_object* v___f_1475_, lean_object* v_x_1476_){
_start:
{
if (lean_obj_tag(v_x_1476_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v___f_1475_);
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
lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1498_; 
v_isSharedCheck_1498_ = !lean_is_exclusive(v_x_1476_);
if (v_isSharedCheck_1498_ == 0)
{
lean_object* v_unused_1499_; 
v_unused_1499_ = lean_ctor_get(v_x_1476_, 0);
lean_dec(v_unused_1499_);
v___x_1488_ = v_x_1476_;
v_isShared_1489_ = v_isSharedCheck_1498_;
goto v_resetjp_1487_;
}
else
{
lean_dec(v_x_1476_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1498_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; uint8_t v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1494_; 
v___x_1490_ = lean_unsigned_to_nat(0u);
v___x_1491_ = 0;
v___x_1492_ = lean_io_promise_new();
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v___x_1492_);
v___x_1494_ = v___x_1488_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1492_);
v___x_1494_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1494_);
v___x_1496_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1490_, v___x_1491_, v___x_1495_, v___f_1475_);
return v___x_1496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3___boxed(lean_object* v___f_1500_, lean_object* v_x_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3(v___f_1500_, v_x_1501_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_1504_, uint32_t v_op_1505_, uint64_t v_flags_1506_, lean_object* v_payload_1507_, lean_object* v___f_1508_, lean_object* v___f_1509_, lean_object* v___f_1510_, lean_object* v_x_1511_){
_start:
{
if (lean_obj_tag(v_x_1511_) == 0)
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1521_; 
lean_dec_ref(v___f_1510_);
lean_dec_ref(v___f_1509_);
lean_dec_ref(v___f_1508_);
lean_dec(v_payload_1507_);
v_a_1513_ = lean_ctor_get(v_x_1511_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_x_1511_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1515_ = v_x_1511_;
v_isShared_1516_ = v_isSharedCheck_1521_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v_x_1511_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1521_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
lean_object* v___x_1519_; 
v___x_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1518_);
return v___x_1519_;
}
}
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1568_; 
v_a_1522_ = lean_ctor_get(v_x_1511_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_x_1511_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1524_ = v_x_1511_;
v_isShared_1525_ = v_isSharedCheck_1568_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v_x_1511_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1568_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; 
v___x_1526_ = lean_string_utf8_byte_size(v_failurePrefix_1504_);
v___x_1527_ = lean_unsigned_to_nat(0u);
v___x_1528_ = lean_nat_dec_eq(v___x_1526_, v___x_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___f_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___f_1533_; lean_object* v_val_1535_; lean_object* v___x_1540_; 
lean_dec_ref(v___f_1510_);
lean_inc(v_a_1522_);
v___f_1529_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1529_, 0, v_a_1522_);
v___x_1530_ = lean_box(v___x_1528_);
v___x_1531_ = lean_box_uint32(v_op_1505_);
v___x_1532_ = lean_box_uint64(v_flags_1506_);
lean_inc(v_payload_1507_);
v___f_1533_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1533_, 0, v___x_1527_);
lean_closure_set(v___f_1533_, 1, v___x_1530_);
lean_closure_set(v___f_1533_, 2, v___f_1529_);
lean_closure_set(v___f_1533_, 3, v_a_1522_);
lean_closure_set(v___f_1533_, 4, v___x_1531_);
lean_closure_set(v___f_1533_, 5, v___x_1532_);
lean_closure_set(v___f_1533_, 6, v_payload_1507_);
v___x_1540_ = l_Lasm_JS_Wire_encodeIO(v_payload_1507_);
lean_dec(v_payload_1507_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v___x_1540_, 1);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 0, v_a_1541_);
v___x_1543_ = v___x_1524_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1541_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
v_val_1535_ = v___x_1543_;
goto v___jp_1534_;
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; 
v_a_1545_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1545_);
lean_dec_ref_known(v___x_1540_, 1);
if (v_isShared_1525_ == 0)
{
lean_ctor_set_tag(v___x_1524_, 0);
lean_ctor_set(v___x_1524_, 0, v_a_1545_);
v___x_1547_ = v___x_1524_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_a_1545_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
v_val_1535_ = v___x_1547_;
goto v___jp_1534_;
}
}
v___jp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1536_, 0, v_val_1535_);
v___x_1537_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1527_, v___x_1528_, v___x_1536_, v___f_1533_);
v___x_1538_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1527_, v___x_1528_, v___x_1537_, v___f_1508_);
v___x_1539_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1527_, v___x_1528_, v___x_1538_, v___f_1509_);
return v___x_1539_;
}
}
else
{
lean_object* v___f_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___f_1552_; uint8_t v___x_1553_; lean_object* v_val_1555_; lean_object* v___x_1559_; 
lean_dec_ref(v___f_1509_);
lean_dec_ref(v___f_1508_);
lean_inc(v_a_1522_);
v___f_1549_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1549_, 0, v_a_1522_);
v___x_1550_ = lean_box_uint32(v_op_1505_);
v___x_1551_ = lean_box_uint64(v_flags_1506_);
lean_inc(v_payload_1507_);
v___f_1552_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1552_, 0, v___f_1549_);
lean_closure_set(v___f_1552_, 1, v_a_1522_);
lean_closure_set(v___f_1552_, 2, v___x_1550_);
lean_closure_set(v___f_1552_, 3, v___x_1551_);
lean_closure_set(v___f_1552_, 4, v_payload_1507_);
v___x_1553_ = 0;
v___x_1559_ = l_Lasm_JS_Wire_encodeIO(v_payload_1507_);
lean_dec(v_payload_1507_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1562_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1560_);
lean_dec_ref_known(v___x_1559_, 1);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 0, v_a_1560_);
v___x_1562_ = v___x_1524_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1560_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
v_val_1555_ = v___x_1562_;
goto v___jp_1554_;
}
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; 
v_a_1564_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1564_);
lean_dec_ref_known(v___x_1559_, 1);
if (v_isShared_1525_ == 0)
{
lean_ctor_set_tag(v___x_1524_, 0);
lean_ctor_set(v___x_1524_, 0, v_a_1564_);
v___x_1566_ = v___x_1524_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1564_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
v_val_1555_ = v___x_1566_;
goto v___jp_1554_;
}
}
v___jp_1554_:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1556_, 0, v_val_1555_);
v___x_1557_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1527_, v___x_1553_, v___x_1556_, v___f_1552_);
v___x_1558_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1527_, v___x_1553_, v___x_1557_, v___f_1510_);
return v___x_1558_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_1569_, lean_object* v_op_1570_, lean_object* v_flags_1571_, lean_object* v_payload_1572_, lean_object* v___f_1573_, lean_object* v___f_1574_, lean_object* v___f_1575_, lean_object* v_x_1576_, lean_object* v___y_1577_){
_start:
{
uint32_t v_op_boxed_1578_; uint64_t v_flags_boxed_1579_; lean_object* v_res_1580_; 
v_op_boxed_1578_ = lean_unbox_uint32(v_op_1570_);
lean_dec(v_op_1570_);
v_flags_boxed_1579_ = lean_unbox_uint64(v_flags_1571_);
lean_dec_ref(v_flags_1571_);
v_res_1580_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9(v_failurePrefix_1569_, v_op_boxed_1578_, v_flags_boxed_1579_, v_payload_1572_, v___f_1573_, v___f_1574_, v___f_1575_, v_x_1576_);
lean_dec_ref(v_failurePrefix_1569_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(lean_object* v_context_1581_, uint32_t v_op_1582_, uint64_t v_flags_1583_, lean_object* v_payload_1584_, lean_object* v_failurePrefix_1585_){
_start:
{
lean_object* v___f_1587_; lean_object* v___f_1588_; lean_object* v___f_1589_; lean_object* v___f_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___f_1593_; lean_object* v___f_1594_; lean_object* v___x_1595_; uint8_t v___x_1596_; lean_object* v_val_1598_; lean_object* v___x_1601_; 
v___f_1587_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1587_, 0, v_context_1581_);
v___f_1588_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1588_, 0, v___f_1587_);
v___f_1589_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1589_, 0, v___f_1588_);
lean_inc_ref(v_failurePrefix_1585_);
v___f_1590_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1590_, 0, v_failurePrefix_1585_);
v___x_1591_ = lean_box_uint32(v_op_1582_);
v___x_1592_ = lean_box_uint64(v_flags_1583_);
lean_inc_ref(v___f_1589_);
v___f_1593_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1593_, 0, v_failurePrefix_1585_);
lean_closure_set(v___f_1593_, 1, v___x_1591_);
lean_closure_set(v___f_1593_, 2, v___x_1592_);
lean_closure_set(v___f_1593_, 3, v_payload_1584_);
lean_closure_set(v___f_1593_, 4, v___f_1590_);
lean_closure_set(v___f_1593_, 5, v___f_1589_);
lean_closure_set(v___f_1593_, 6, v___f_1589_);
v___f_1594_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1594_, 0, v___f_1593_);
v___x_1595_ = lean_unsigned_to_nat(0u);
v___x_1596_ = 0;
v___x_1601_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set_tag(v___x_1604_, 1);
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
v_val_1598_ = v___x_1607_;
goto v___jp_1597_;
}
}
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
v_a_1610_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1601_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1601_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
lean_ctor_set_tag(v___x_1612_, 0);
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1610_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
v_val_1598_ = v___x_1615_;
goto v___jp_1597_;
}
}
}
v___jp_1597_:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1599_, 0, v_val_1598_);
v___x_1600_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1595_, v___x_1596_, v___x_1599_, v___f_1594_);
return v___x_1600_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___boxed(lean_object* v_context_1618_, lean_object* v_op_1619_, lean_object* v_flags_1620_, lean_object* v_payload_1621_, lean_object* v_failurePrefix_1622_, lean_object* v_a_1623_){
_start:
{
uint32_t v_op_boxed_1624_; uint64_t v_flags_boxed_1625_; lean_object* v_res_1626_; 
v_op_boxed_1624_ = lean_unbox_uint32(v_op_1619_);
lean_dec(v_op_1619_);
v_flags_boxed_1625_ = lean_unbox_uint64(v_flags_1620_);
lean_dec_ref(v_flags_1620_);
v_res_1626_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v_context_1618_, v_op_boxed_1624_, v_flags_boxed_1625_, v_payload_1621_, v_failurePrefix_1622_);
return v_res_1626_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1627_; uint8_t v___x_1628_; uint64_t v___x_1629_; 
v___x_1627_ = 8ULL;
v___x_1628_ = 0;
v___x_1629_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(v___x_1628_, v___x_1627_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(lean_object* v_o_1630_, lean_object* v_name_1631_, lean_object* v_args_1632_){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; uint32_t v___x_1639_; uint64_t v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1634_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1635_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1635_, 0, v_o_1630_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
lean_inc_ref(v_name_1631_);
v___x_1636_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1636_, 0, v_name_1631_);
v___x_1637_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0));
v___x_1638_ = lean_string_append(v___x_1637_, v_name_1631_);
lean_dec_ref(v_name_1631_);
v___x_1639_ = 205;
v___x_1640_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0);
v___x_1641_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1641_, 0, v_args_1632_);
v___x_1642_ = lean_unsigned_to_nat(3u);
v___x_1643_ = lean_mk_empty_array_with_capacity(v___x_1642_);
v___x_1644_ = lean_array_push(v___x_1643_, v___x_1635_);
v___x_1645_ = lean_array_push(v___x_1644_, v___x_1636_);
v___x_1646_ = lean_array_push(v___x_1645_, v___x_1641_);
v___x_1647_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
v___x_1648_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v___x_1638_, v___x_1639_, v___x_1640_, v___x_1647_, v___x_1634_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___boxed(lean_object* v_o_1649_, lean_object* v_name_1650_, lean_object* v_args_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_o_1649_, v_name_1650_, v_args_1651_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes(lean_object* v_self_1655_){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1657_ = ((lean_object*)(l_Lasm_JS_Web_Blob_bytes___closed__0));
v___x_1658_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1659_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_self_1655_, v___x_1657_, v___x_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes___boxed(lean_object* v_self_1660_, lean_object* v_a_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_Lasm_JS_Web_Blob_bytes(v_self_1660_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(lean_object* v_x_1663_){
_start:
{
if (lean_obj_tag(v_x_1663_) == 0)
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_box(0);
return v___x_1664_;
}
else
{
lean_object* v_val_1665_; lean_object* v_type_1666_; lean_object* v_endings_1667_; lean_object* v_lastModified_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v_val_1665_ = lean_ctor_get(v_x_1663_, 0);
lean_inc(v_val_1665_);
lean_dec_ref_known(v_x_1663_, 1);
v_type_1666_ = lean_ctor_get(v_val_1665_, 0);
lean_inc(v_type_1666_);
v_endings_1667_ = lean_ctor_get(v_val_1665_, 1);
lean_inc(v_endings_1667_);
v_lastModified_1668_ = lean_ctor_get(v_val_1665_, 2);
lean_inc(v_lastModified_1668_);
lean_dec(v_val_1665_);
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_1670_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_1666_);
v___x_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_1673_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_endings_1667_);
lean_dec(v_endings_1667_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1672_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_1676_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_lastModified_1668_);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1675_);
lean_ctor_set(v___x_1677_, 1, v___x_1676_);
v___x_1678_ = lean_unsigned_to_nat(3u);
v___x_1679_ = lean_mk_empty_array_with_capacity(v___x_1678_);
v___x_1680_ = lean_array_push(v___x_1679_, v___x_1671_);
v___x_1681_ = lean_array_push(v___x_1680_, v___x_1674_);
v___x_1682_ = lean_array_push(v___x_1681_, v___x_1677_);
v___x_1683_ = l_Lasm_JS_Web_Support_fields(v___x_1682_);
lean_dec_ref(v___x_1682_);
return v___x_1683_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(lean_object* v_context_1684_, lean_object* v_d_1685_){
_start:
{
lean_object* v___y_1688_; lean_object* v___y_1689_; 
if (lean_obj_tag(v_d_1685_) == 9)
{
lean_object* v_value_1693_; lean_object* v___x_1694_; 
v_value_1693_ = lean_ctor_get(v_d_1685_, 0);
lean_inc(v_value_1693_);
lean_dec_ref_known(v_d_1685_, 2);
v___x_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1694_, 0, v_value_1693_);
return v___x_1694_;
}
else
{
lean_object* v___x_1695_; lean_object* v_received_1697_; 
v___x_1695_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
if (lean_obj_tag(v_d_1685_) == 9)
{
lean_object* v_value_1711_; lean_object* v_description_1712_; uint8_t v___x_1713_; 
v_value_1711_ = lean_ctor_get(v_d_1685_, 0);
v_description_1712_ = lean_ctor_get(v_d_1685_, 1);
v___x_1713_ = lean_string_dec_eq(v_description_1712_, v___x_1695_);
if (v___x_1713_ == 0)
{
goto v___jp_1709_;
}
else
{
uint32_t v___x_1714_; uint64_t v___x_1715_; lean_object* v___x_1716_; uint32_t v___x_1717_; lean_object* v___x_1718_; 
lean_inc_n(v_value_1711_, 2);
lean_dec_ref_known(v_d_1685_, 2);
v___x_1714_ = 206;
v___x_1715_ = 0ULL;
v___x_1716_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1716_, 0, v_value_1711_);
lean_ctor_set(v___x_1716_, 1, v___x_1695_);
v___x_1717_ = lasm_js_value_handle(v_value_1711_);
lean_dec(v_value_1711_);
v___x_1718_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1714_, v___x_1715_, v___x_1716_, v___x_1717_);
lean_dec_ref_known(v___x_1716_, 2);
if (lean_obj_tag(v___x_1718_) == 0)
{
lean_object* v_a_1719_; uint8_t v___x_1720_; 
v_a_1719_ = lean_ctor_get(v___x_1718_, 0);
lean_inc(v_a_1719_);
lean_dec_ref_known(v___x_1718_, 1);
v___x_1720_ = lean_string_validate_utf8(v_a_1719_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
lean_dec(v_a_1719_);
v___x_1721_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_1722_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1721_);
v_received_1697_ = v___x_1722_;
goto v___jp_1696_;
}
else
{
lean_object* v___x_1723_; 
v___x_1723_ = lean_string_from_utf8_unchecked(v_a_1719_);
v_received_1697_ = v___x_1723_;
goto v___jp_1696_;
}
}
else
{
lean_object* v___x_1724_; 
lean_dec_ref_known(v___x_1718_, 1);
v___x_1724_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v_received_1697_ = v___x_1724_;
goto v___jp_1696_;
}
}
}
else
{
goto v___jp_1709_;
}
v___jp_1696_:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; uint8_t v___x_1707_; 
v___x_1698_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1699_ = lean_string_append(v___x_1698_, v_context_1684_);
v___x_1700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_1701_ = lean_string_append(v___x_1699_, v___x_1700_);
v___x_1702_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSFile___closed__0));
v___x_1703_ = lean_string_append(v___x_1701_, v___x_1702_);
v___x_1704_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_1705_ = lean_string_append(v___x_1703_, v___x_1704_);
v___x_1706_ = lean_string_append(v___x_1705_, v_received_1697_);
lean_dec_ref(v_received_1697_);
v___x_1707_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4);
if (v___x_1707_ == 0)
{
lean_object* v___x_1708_; 
v___x_1708_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5));
v___y_1688_ = v___x_1706_;
v___y_1689_ = v___x_1708_;
goto v___jp_1687_;
}
else
{
v___y_1688_ = v___x_1706_;
v___y_1689_ = v___x_1695_;
goto v___jp_1687_;
}
}
v___jp_1709_:
{
lean_object* v___x_1710_; 
v___x_1710_ = l_Lasm_JS_Data_describe(v_d_1685_);
v_received_1697_ = v___x_1710_;
goto v___jp_1696_;
}
}
v___jp_1687_:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1690_ = lean_string_append(v___y_1688_, v___y_1689_);
v___x_1691_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
v___x_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1___boxed(lean_object* v_context_1725_, lean_object* v_d_1726_, lean_object* v_a_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(v_context_1725_, v_d_1726_);
lean_dec_ref(v_context_1725_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(lean_object* v_b_1729_, lean_object* v_args_1730_, uint8_t v_await_1731_){
_start:
{
uint64_t v___y_1734_; uint64_t v___y_1735_; uint64_t v___x_1778_; uint64_t v___y_1780_; 
v___x_1778_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1731_ == 0)
{
uint64_t v___x_1785_; 
v___x_1785_ = 0ULL;
v___y_1780_ = v___x_1785_;
goto v___jp_1779_;
}
else
{
uint64_t v___x_1786_; 
v___x_1786_ = 2ULL;
v___y_1780_ = v___x_1786_;
goto v___jp_1779_;
}
v___jp_1733_:
{
uint64_t v_flags_1736_; uint32_t v___x_1737_; lean_object* v___x_1738_; uint32_t v___x_1739_; lean_object* v___x_1740_; 
v_flags_1736_ = lean_uint64_lor(v___y_1734_, v___y_1735_);
v___x_1737_ = 214;
v___x_1738_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1729_, v_args_1730_);
v___x_1739_ = 0;
v___x_1740_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1737_, v_flags_1736_, v___x_1738_, v___x_1739_);
lean_dec(v___x_1738_);
if (lean_obj_tag(v___x_1740_) == 0)
{
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1742_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref_known(v___x_1740_, 1);
v___x_1742_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1741_);
lean_dec(v_a_1741_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1742_, 1);
v___x_1744_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1729_);
v___x_1745_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(v___x_1744_, v_a_1743_);
lean_dec_ref(v___x_1744_);
return v___x_1745_;
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
v_a_1746_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1742_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1742_);
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
v_a_1754_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1740_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1740_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
lean_ctor_set_tag(v___x_1756_, 1);
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
else
{
lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1777_; 
v_a_1762_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1764_ = v___x_1740_;
v_isShared_1765_ = v_isSharedCheck_1777_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_dec(v___x_1740_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1777_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1775_; 
v___x_1766_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1767_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1729_);
v___x_1768_ = lean_string_append(v___x_1766_, v___x_1767_);
lean_dec_ref(v___x_1767_);
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0));
v___x_1770_ = lean_string_append(v___x_1768_, v___x_1769_);
v___x_1771_ = lean_io_error_to_string(v_a_1762_);
v___x_1772_ = lean_string_append(v___x_1770_, v___x_1771_);
lean_dec_ref(v___x_1771_);
v___x_1773_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1772_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v___x_1773_);
v___x_1775_ = v___x_1764_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1773_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
v___jp_1779_:
{
uint8_t v_construct_1781_; uint64_t v___x_1782_; 
v_construct_1781_ = lean_ctor_get_uint8(v_b_1729_, sizeof(void*)*4);
v___x_1782_ = lean_uint64_lor(v___x_1778_, v___y_1780_);
if (v_construct_1781_ == 0)
{
uint64_t v___x_1783_; 
v___x_1783_ = 0ULL;
v___y_1734_ = v___x_1782_;
v___y_1735_ = v___x_1783_;
goto v___jp_1733_;
}
else
{
uint64_t v___x_1784_; 
v___x_1784_ = 4ULL;
v___y_1734_ = v___x_1782_;
v___y_1735_ = v___x_1784_;
goto v___jp_1733_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1___boxed(lean_object* v_b_1787_, lean_object* v_args_1788_, lean_object* v_await_1789_, lean_object* v_a_1790_){
_start:
{
uint8_t v_await_boxed_1791_; lean_object* v_res_1792_; 
v_await_boxed_1791_ = lean_unbox(v_await_1789_);
v_res_1792_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(v_b_1787_, v_args_1788_, v_await_boxed_1791_);
lean_dec_ref(v_b_1787_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new(lean_object* v_fileBits_1801_, lean_object* v_fileName_1802_, lean_object* v_options_1803_){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; size_t v_sz_1807_; size_t v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; uint8_t v___x_1818_; lean_object* v___x_1819_; 
v___x_1805_ = lean_unsigned_to_nat(3u);
v___x_1806_ = ((lean_object*)(l_Lasm_JS_Web_File_new___closed__2));
v_sz_1807_ = lean_array_size(v_fileBits_1801_);
v___x_1808_ = ((size_t)0ULL);
v___x_1809_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_1807_, v___x_1808_, v_fileBits_1801_);
v___x_1810_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
v___x_1811_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1811_, 0, v_fileName_1802_);
v___x_1812_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(v_options_1803_);
v___x_1813_ = lean_mk_empty_array_with_capacity(v___x_1805_);
v___x_1814_ = lean_array_push(v___x_1813_, v___x_1810_);
v___x_1815_ = lean_array_push(v___x_1814_, v___x_1811_);
v___x_1816_ = lean_array_push(v___x_1815_, v___x_1812_);
v___x_1817_ = l_Lasm_JS_Web_Support_args(v___x_1816_);
v___x_1818_ = 0;
v___x_1819_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(v___x_1806_, v___x_1817_, v___x_1818_);
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new___boxed(lean_object* v_fileBits_1820_, lean_object* v_fileName_1821_, lean_object* v_options_1822_, lean_object* v_a_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l_Lasm_JS_Web_File_new(v_fileBits_1820_, v_fileName_1821_, v_options_1822_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name(lean_object* v_self_1826_){
_start:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1828_ = ((lean_object*)(l_Lasm_JS_Web_File_name___closed__0));
v___x_1829_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1826_, v___x_1828_);
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name___boxed(lean_object* v_self_1830_, lean_object* v_a_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_Lasm_JS_Web_File_name(v_self_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(lean_object* v_context_1837_, lean_object* v_d_1838_){
_start:
{
lean_object* v___y_1841_; lean_object* v___y_1842_; lean_object* v___y_1847_; lean_object* v_received_1848_; lean_object* v___y_1867_; lean_object* v_a_1870_; 
switch(lean_obj_tag(v_d_1838_))
{
case 3:
{
double v_n_1894_; lean_object* v___x_1895_; 
v_n_1894_ = lean_ctor_get_float(v_d_1838_, 0);
v___x_1895_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1894_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v___x_1896_; 
v___x_1896_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__3));
v_a_1870_ = v___x_1896_;
goto v___jp_1869_;
}
else
{
lean_object* v_val_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
lean_dec_ref_known(v_d_1838_, 0);
v_val_1897_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___x_1895_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_val_1897_);
lean_dec(v___x_1895_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
lean_ctor_set_tag(v___x_1899_, 0);
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_val_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
case 5:
{
lean_object* v_i_1905_; lean_object* v___x_1906_; 
v_i_1905_ = lean_ctor_get(v_d_1838_, 0);
lean_inc(v_i_1905_);
lean_dec_ref_known(v_d_1838_, 1);
v___x_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1906_, 0, v_i_1905_);
return v___x_1906_;
}
default: 
{
lean_object* v___x_1907_; 
v___x_1907_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v_a_1870_ = v___x_1907_;
goto v___jp_1869_;
}
}
v___jp_1840_:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1843_ = lean_string_append(v___y_1841_, v___y_1842_);
lean_dec_ref(v___y_1842_);
v___x_1844_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
v___x_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
return v___x_1845_;
}
v___jp_1846_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; uint8_t v___x_1860_; 
v___x_1849_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1850_ = lean_string_append(v___x_1849_, v_context_1837_);
v___x_1851_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_1852_ = lean_string_append(v___x_1850_, v___x_1851_);
v___x_1853_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__0));
v___x_1854_ = lean_string_append(v___x_1852_, v___x_1853_);
v___x_1855_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_1856_ = lean_string_append(v___x_1854_, v___x_1855_);
v___x_1857_ = lean_string_append(v___x_1856_, v_received_1848_);
lean_dec_ref(v_received_1848_);
v___x_1858_ = lean_string_utf8_byte_size(v___y_1847_);
v___x_1859_ = lean_unsigned_to_nat(0u);
v___x_1860_ = lean_nat_dec_eq(v___x_1858_, v___x_1859_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1861_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__1));
v___x_1862_ = lean_string_append(v___x_1861_, v___y_1847_);
v___x_1863_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__2));
v___x_1864_ = lean_string_append(v___x_1862_, v___x_1863_);
v___y_1841_ = v___x_1857_;
v___y_1842_ = v___x_1864_;
goto v___jp_1840_;
}
else
{
lean_object* v___x_1865_; 
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___y_1841_ = v___x_1857_;
v___y_1842_ = v___x_1865_;
goto v___jp_1840_;
}
}
v___jp_1866_:
{
lean_object* v___x_1868_; 
v___x_1868_ = l_Lasm_JS_Data_describe(v_d_1838_);
v___y_1847_ = v___y_1867_;
v_received_1848_ = v___x_1868_;
goto v___jp_1846_;
}
v___jp_1869_:
{
if (lean_obj_tag(v_d_1838_) == 9)
{
lean_object* v_value_1871_; lean_object* v_description_1872_; lean_object* v___x_1873_; uint8_t v___x_1874_; 
v_value_1871_ = lean_ctor_get(v_d_1838_, 0);
v_description_1872_ = lean_ctor_get(v_d_1838_, 1);
v___x_1873_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1874_ = lean_string_dec_eq(v_description_1872_, v___x_1873_);
if (v___x_1874_ == 0)
{
v___y_1867_ = v_a_1870_;
goto v___jp_1866_;
}
else
{
lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1891_; 
lean_inc(v_value_1871_);
v_isSharedCheck_1891_ = !lean_is_exclusive(v_d_1838_);
if (v_isSharedCheck_1891_ == 0)
{
lean_object* v_unused_1892_; lean_object* v_unused_1893_; 
v_unused_1892_ = lean_ctor_get(v_d_1838_, 1);
lean_dec(v_unused_1892_);
v_unused_1893_ = lean_ctor_get(v_d_1838_, 0);
lean_dec(v_unused_1893_);
v___x_1876_ = v_d_1838_;
v_isShared_1877_ = v_isSharedCheck_1891_;
goto v_resetjp_1875_;
}
else
{
lean_dec(v_d_1838_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1891_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
uint32_t v___x_1878_; uint64_t v___x_1879_; lean_object* v___x_1881_; 
v___x_1878_ = 206;
v___x_1879_ = 0ULL;
lean_inc(v_value_1871_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 1, v___x_1873_);
v___x_1881_ = v___x_1876_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_value_1871_);
lean_ctor_set(v_reuseFailAlloc_1890_, 1, v___x_1873_);
v___x_1881_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
uint32_t v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = lasm_js_value_handle(v_value_1871_);
lean_dec(v_value_1871_);
v___x_1883_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1878_, v___x_1879_, v___x_1881_, v___x_1882_);
lean_dec_ref(v___x_1881_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; uint8_t v___x_1885_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
v___x_1885_ = lean_string_validate_utf8(v_a_1884_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
lean_dec(v_a_1884_);
v___x_1886_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_1887_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1886_);
v___y_1847_ = v_a_1870_;
v_received_1848_ = v___x_1887_;
goto v___jp_1846_;
}
else
{
lean_object* v___x_1888_; 
v___x_1888_ = lean_string_from_utf8_unchecked(v_a_1884_);
v___y_1847_ = v_a_1870_;
v_received_1848_ = v___x_1888_;
goto v___jp_1846_;
}
}
else
{
lean_object* v___x_1889_; 
lean_dec_ref_known(v___x_1883_, 1);
v___x_1889_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v___y_1847_ = v_a_1870_;
v_received_1848_ = v___x_1889_;
goto v___jp_1846_;
}
}
}
}
}
else
{
v___y_1867_ = v_a_1870_;
goto v___jp_1866_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1908_, lean_object* v_d_1909_, lean_object* v_a_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(v_context_1908_, v_d_1909_);
lean_dec_ref(v_context_1908_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(lean_object* v_context_1912_, lean_object* v_bytes_1913_){
_start:
{
lean_object* v___x_1915_; 
v___x_1915_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1913_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1917_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
v___x_1917_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(v_context_1912_, v_a_1916_);
return v___x_1917_;
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
v_a_1918_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1915_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1915_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0___boxed(lean_object* v_context_1926_, lean_object* v_bytes_1927_, lean_object* v_a_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(v_context_1926_, v_bytes_1927_);
lean_dec_ref(v_bytes_1927_);
lean_dec_ref(v_context_1926_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(lean_object* v_o_1931_, lean_object* v_key_1932_){
_start:
{
lean_object* v_k_1934_; lean_object* v___x_1935_; 
v_k_1934_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1934_, 0, v_key_1932_);
v___x_1935_ = l_Lasm_JS_Wire_encodeIO(v_k_1934_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; uint32_t v___x_1937_; uint32_t v___x_1938_; uint64_t v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
lean_inc(v_a_1936_);
lean_dec_ref_known(v___x_1935_, 1);
v___x_1937_ = 203;
v___x_1938_ = lasm_js_value_handle(v_o_1931_);
v___x_1939_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
v___x_1940_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1941_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1941_, 0, v_o_1931_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
v___x_1942_ = lean_unsigned_to_nat(2u);
v___x_1943_ = lean_mk_empty_array_with_capacity(v___x_1942_);
lean_inc_ref(v_k_1934_);
v___x_1944_ = lean_array_push(v___x_1943_, v_k_1934_);
v___x_1945_ = lean_array_push(v___x_1944_, v___x_1941_);
v___x_1946_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1945_);
v___x_1947_ = lasm_js_call(v___x_1937_, v___x_1938_, v___x_1939_, v_a_1936_, v___x_1946_);
lean_dec_ref_known(v___x_1946_, 1);
lean_dec(v_a_1936_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref_known(v___x_1947_, 1);
v___x_1949_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___closed__0));
v___x_1950_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1934_);
v___x_1951_ = lean_string_append(v___x_1949_, v___x_1950_);
lean_dec_ref(v___x_1950_);
v___x_1952_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(v___x_1951_, v_a_1948_);
lean_dec(v_a_1948_);
lean_dec_ref(v___x_1951_);
return v___x_1952_;
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
lean_dec_ref_known(v_k_1934_, 1);
v_a_1953_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1955_ = v___x_1947_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1947_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_a_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_dec_ref_known(v_k_1934_, 1);
lean_dec(v_o_1931_);
v_a_1961_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1935_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1935_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___boxed(lean_object* v_o_1969_, lean_object* v_key_1970_, lean_object* v_a_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_o_1969_, v_key_1970_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified(lean_object* v_self_1973_){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_1976_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1973_, v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified___boxed(lean_object* v_self_1977_, lean_object* v_a_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l_Lasm_JS_Web_File_lastModified(v_self_1977_);
return v_res_1979_;
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
