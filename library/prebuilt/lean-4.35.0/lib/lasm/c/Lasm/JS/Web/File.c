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
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_cast_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_cast_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Blob_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Blob"};
static const lean_object* l_Lasm_JS_Web_Blob_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Blob_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Blob_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Blob_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_Blob_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Blob_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_Blob_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_Blob_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Blob_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_Blob_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Blob_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Web_Blob_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Blob_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Blob_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Blob_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Blob_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Blob_new___closed__2_value;
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
static const lean_string_object l_Lasm_JS_Web_File_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "File"};
static const lean_object* l_Lasm_JS_Web_File_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_File_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_File_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_File_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_File_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_File_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_File_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_Blob_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_File_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_File_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_File_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_File_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Web.File.new"};
static const lean_object* l_Lasm_JS_Web_File_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_File_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_File_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_File_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Blob_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_File_cast_x3f___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_File_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_File_new___closed__1_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_cast_x3f___lam__0(lean_object* v___x_318_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_318_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_cast_x3f___lam__0___boxed(lean_object* v___x_321_, lean_object* v___y_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lasm_JS_Web_Blob_cast_x3f___lam__0(v___x_321_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_cast_x3f(lean_object* v_v_330_){
_start:
{
lean_object* v___f_332_; lean_object* v___x_333_; 
v___f_332_ = ((lean_object*)(l_Lasm_JS_Web_Blob_cast_x3f___closed__2));
lean_inc(v_v_330_);
v___x_333_ = l_Lasm_JS_Web_Support_isInstance(v___f_332_, v_v_330_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_347_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_347_ == 0)
{
v___x_336_ = v___x_333_;
v_isShared_337_ = v_isSharedCheck_347_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_333_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_347_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
uint8_t v___x_338_; 
v___x_338_ = lean_unbox(v_a_334_);
lean_dec(v_a_334_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; lean_object* v___x_341_; 
lean_dec(v_v_330_);
v___x_339_ = lean_box(0);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_339_);
v___x_341_ = v___x_336_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
else
{
lean_object* v___x_343_; lean_object* v___x_345_; 
v___x_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_343_, 0, v_v_330_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_343_);
v___x_345_ = v___x_336_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_343_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_v_330_);
v_a_348_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_333_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_333_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_cast_x3f___boxed(lean_object* v_v_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lasm_JS_Web_Blob_cast_x3f(v_v_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(lean_object* v_x_359_){
_start:
{
if (lean_obj_tag(v_x_359_) == 0)
{
lean_object* v___x_360_; 
v___x_360_ = lean_box(0);
return v___x_360_;
}
else
{
lean_object* v_val_361_; uint8_t v___x_362_; 
v_val_361_ = lean_ctor_get(v_x_359_, 0);
v___x_362_ = lean_unbox(v_val_361_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; 
v___x_363_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__1));
return v___x_363_;
}
else
{
lean_object* v___x_364_; 
v___x_364_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__3));
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2___boxed(lean_object* v_x_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_x_365_);
lean_dec(v_x_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1(lean_object* v_x_367_){
_start:
{
if (lean_obj_tag(v_x_367_) == 0)
{
lean_object* v___x_368_; 
v___x_368_ = lean_box(0);
return v___x_368_;
}
else
{
lean_object* v_val_369_; lean_object* v_type_370_; lean_object* v_endings_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_388_; 
v_val_369_ = lean_ctor_get(v_x_367_, 0);
lean_inc(v_val_369_);
lean_dec_ref_known(v_x_367_, 1);
v_type_370_ = lean_ctor_get(v_val_369_, 0);
v_endings_371_ = lean_ctor_get(v_val_369_, 1);
v_isSharedCheck_388_ = !lean_is_exclusive(v_val_369_);
if (v_isSharedCheck_388_ == 0)
{
v___x_373_ = v_val_369_;
v_isShared_374_ = v_isSharedCheck_388_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_endings_371_);
lean_inc(v_type_370_);
lean_dec(v_val_369_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_388_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_376_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_370_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v___x_376_);
lean_ctor_set(v___x_373_, 0, v___x_375_);
v___x_378_ = v___x_373_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v___x_376_);
v___x_378_ = v_reuseFailAlloc_387_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_379_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_380_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_endings_371_);
lean_dec(v_endings_371_);
v___x_381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_379_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = lean_unsigned_to_nat(2u);
v___x_383_ = lean_mk_empty_array_with_capacity(v___x_382_);
v___x_384_ = lean_array_push(v___x_383_, v___x_378_);
v___x_385_ = lean_array_push(v___x_384_, v___x_381_);
v___x_386_ = l_Lasm_JS_Web_Support_fields(v___x_385_);
lean_dec_ref(v___x_385_);
return v___x_386_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_393_ = lean_string_utf8_byte_size(v___x_392_);
return v___x_393_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3);
v___x_396_ = lean_nat_dec_eq(v___x_395_, v___x_394_);
return v___x_396_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_401_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__8));
v___x_402_ = lean_unsigned_to_nat(46u);
v___x_403_ = lean_unsigned_to_nat(193u);
v___x_404_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__7));
v___x_405_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__6));
v___x_406_ = l_mkPanicMessageWithDecl(v___x_405_, v___x_404_, v___x_403_, v___x_402_, v___x_401_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(lean_object* v_context_408_, lean_object* v_d_409_){
_start:
{
lean_object* v___y_412_; lean_object* v___y_413_; 
if (lean_obj_tag(v_d_409_) == 9)
{
lean_object* v_value_417_; lean_object* v___x_418_; 
v_value_417_ = lean_ctor_get(v_d_409_, 0);
lean_inc(v_value_417_);
lean_dec_ref_known(v_d_409_, 2);
v___x_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_418_, 0, v_value_417_);
return v___x_418_;
}
else
{
lean_object* v___x_419_; lean_object* v_received_421_; 
v___x_419_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
if (lean_obj_tag(v_d_409_) == 9)
{
lean_object* v_value_435_; lean_object* v_description_436_; uint8_t v___x_437_; 
v_value_435_ = lean_ctor_get(v_d_409_, 0);
v_description_436_ = lean_ctor_get(v_d_409_, 1);
v___x_437_ = lean_string_dec_eq(v_description_436_, v___x_419_);
if (v___x_437_ == 0)
{
goto v___jp_433_;
}
else
{
uint32_t v___x_438_; uint64_t v___x_439_; lean_object* v___x_440_; uint32_t v___x_441_; lean_object* v___x_442_; 
lean_inc_n(v_value_435_, 2);
lean_dec_ref_known(v_d_409_, 2);
v___x_438_ = 206;
v___x_439_ = 0ULL;
v___x_440_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_440_, 0, v_value_435_);
lean_ctor_set(v___x_440_, 1, v___x_419_);
v___x_441_ = lasm_js_value_handle(v_value_435_);
lean_dec(v_value_435_);
v___x_442_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_438_, v___x_439_, v___x_440_, v___x_441_);
lean_dec_ref_known(v___x_440_, 2);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; uint8_t v___x_444_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_442_, 1);
v___x_444_ = lean_string_validate_utf8(v_a_443_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_dec(v_a_443_);
v___x_445_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_446_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_445_);
v_received_421_ = v___x_446_;
goto v___jp_420_;
}
else
{
lean_object* v___x_447_; 
v___x_447_ = lean_string_from_utf8_unchecked(v_a_443_);
v_received_421_ = v___x_447_;
goto v___jp_420_;
}
}
else
{
lean_object* v___x_448_; 
lean_dec_ref_known(v___x_442_, 1);
v___x_448_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v_received_421_ = v___x_448_;
goto v___jp_420_;
}
}
}
else
{
goto v___jp_433_;
}
v___jp_420_:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_422_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_423_ = lean_string_append(v___x_422_, v_context_408_);
v___x_424_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_425_ = lean_string_append(v___x_423_, v___x_424_);
v___x_426_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBlob___closed__1));
v___x_427_ = lean_string_append(v___x_425_, v___x_426_);
v___x_428_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_429_ = lean_string_append(v___x_427_, v___x_428_);
v___x_430_ = lean_string_append(v___x_429_, v_received_421_);
lean_dec_ref(v_received_421_);
v___x_431_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
v___x_432_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5));
v___y_412_ = v___x_430_;
v___y_413_ = v___x_432_;
goto v___jp_411_;
}
else
{
v___y_412_ = v___x_430_;
v___y_413_ = v___x_419_;
goto v___jp_411_;
}
}
v___jp_433_:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lasm_JS_Data_describe(v_d_409_);
v_received_421_ = v___x_434_;
goto v___jp_420_;
}
}
v___jp_411_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = lean_string_append(v___y_412_, v___y_413_);
v___x_415_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
v___x_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___boxed(lean_object* v_context_449_, lean_object* v_d_450_, lean_object* v_a_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(v_context_449_, v_d_450_);
lean_dec_ref(v_context_449_);
return v_res_452_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1(void){
_start:
{
uint8_t v___x_454_; uint64_t v___x_455_; 
v___x_454_ = 0;
v___x_455_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(lean_object* v_b_456_, lean_object* v_args_457_, uint8_t v_await_458_){
_start:
{
uint64_t v___y_461_; uint64_t v___y_462_; uint64_t v___x_505_; uint64_t v___y_507_; 
v___x_505_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_458_ == 0)
{
uint64_t v___x_512_; 
v___x_512_ = 0ULL;
v___y_507_ = v___x_512_;
goto v___jp_506_;
}
else
{
uint64_t v___x_513_; 
v___x_513_ = 2ULL;
v___y_507_ = v___x_513_;
goto v___jp_506_;
}
v___jp_460_:
{
uint64_t v_flags_463_; uint32_t v___x_464_; lean_object* v___x_465_; uint32_t v___x_466_; lean_object* v___x_467_; 
v_flags_463_ = lean_uint64_lor(v___y_461_, v___y_462_);
v___x_464_ = 214;
v___x_465_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_456_, v_args_457_);
v___x_466_ = 0;
v___x_467_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_464_, v_flags_463_, v___x_465_, v___x_466_);
lean_dec(v___x_465_);
if (lean_obj_tag(v___x_467_) == 0)
{
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v___x_469_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref_known(v___x_467_, 1);
v___x_469_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_468_);
lean_dec(v_a_468_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_a_470_);
lean_dec_ref_known(v___x_469_, 1);
v___x_471_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_456_);
v___x_472_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(v___x_471_, v_a_470_);
lean_dec_ref(v___x_471_);
return v___x_472_;
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
v_a_473_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_469_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_469_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
v_a_481_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_467_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_467_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
lean_ctor_set_tag(v___x_483_, 1);
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_481_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
else
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_504_; 
v_a_489_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_504_ == 0)
{
v___x_491_ = v___x_467_;
v_isShared_492_ = v_isSharedCheck_504_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_467_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_504_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_502_; 
v___x_493_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_494_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_456_);
v___x_495_ = lean_string_append(v___x_493_, v___x_494_);
lean_dec_ref(v___x_494_);
v___x_496_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0));
v___x_497_ = lean_string_append(v___x_495_, v___x_496_);
v___x_498_ = lean_io_error_to_string(v_a_489_);
v___x_499_ = lean_string_append(v___x_497_, v___x_498_);
lean_dec_ref(v___x_498_);
v___x_500_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 0, v___x_500_);
v___x_502_ = v___x_491_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v___x_500_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
v___jp_506_:
{
uint8_t v_construct_508_; uint64_t v___x_509_; 
v_construct_508_ = lean_ctor_get_uint8(v_b_456_, sizeof(void*)*4);
v___x_509_ = lean_uint64_lor(v___x_505_, v___y_507_);
if (v_construct_508_ == 0)
{
uint64_t v___x_510_; 
v___x_510_ = 0ULL;
v___y_461_ = v___x_509_;
v___y_462_ = v___x_510_;
goto v___jp_460_;
}
else
{
uint64_t v___x_511_; 
v___x_511_ = 4ULL;
v___y_461_ = v___x_509_;
v___y_462_ = v___x_511_;
goto v___jp_460_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___boxed(lean_object* v_b_514_, lean_object* v_args_515_, lean_object* v_await_516_, lean_object* v_a_517_){
_start:
{
uint8_t v_await_boxed_518_; lean_object* v_res_519_; 
v_await_boxed_518_ = lean_unbox(v_await_516_);
v_res_519_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(v_b_514_, v_args_515_, v_await_boxed_518_);
lean_dec_ref(v_b_514_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(size_t v_sz_520_, size_t v_i_521_, lean_object* v_bs_522_){
_start:
{
uint8_t v___x_523_; 
v___x_523_ = lean_usize_dec_lt(v_i_521_, v_sz_520_);
if (v___x_523_ == 0)
{
return v_bs_522_;
}
else
{
lean_object* v_v_524_; lean_object* v___x_525_; lean_object* v_bs_x27_526_; lean_object* v___y_528_; 
v_v_524_ = lean_array_uget(v_bs_522_, v_i_521_);
v___x_525_ = lean_unsigned_to_nat(0u);
v_bs_x27_526_ = lean_array_uset(v_bs_522_, v_i_521_, v___x_525_);
switch(lean_obj_tag(v_v_524_))
{
case 0:
{
lean_object* v_value_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
v_value_533_ = lean_ctor_get(v_v_524_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v_v_524_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v_v_524_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_value_533_);
lean_dec(v_v_524_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
lean_ctor_set_tag(v___x_535_, 6);
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_value_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
v___y_528_ = v___x_538_;
goto v___jp_527_;
}
}
}
case 1:
{
lean_object* v_value_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v_value_541_ = lean_ctor_get(v_v_524_, 0);
lean_inc(v_value_541_);
lean_dec_ref_known(v_v_524_, 1);
v___x_542_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_543_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_543_, 0, v_value_541_);
lean_ctor_set(v___x_543_, 1, v___x_542_);
v___y_528_ = v___x_543_;
goto v___jp_527_;
}
default: 
{
lean_object* v_value_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
v_value_544_ = lean_ctor_get(v_v_524_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v_v_524_);
if (v_isSharedCheck_551_ == 0)
{
v___x_546_ = v_v_524_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_value_544_);
lean_dec(v_v_524_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
lean_ctor_set_tag(v___x_546_, 4);
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_value_544_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
v___y_528_ = v___x_549_;
goto v___jp_527_;
}
}
}
}
v___jp_527_:
{
size_t v___x_529_; size_t v___x_530_; lean_object* v___x_531_; 
v___x_529_ = ((size_t)1ULL);
v___x_530_ = lean_usize_add(v_i_521_, v___x_529_);
v___x_531_ = lean_array_uset(v_bs_x27_526_, v_i_521_, v___y_528_);
v_i_521_ = v___x_530_;
v_bs_522_ = v___x_531_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0___boxed(lean_object* v_sz_552_, lean_object* v_i_553_, lean_object* v_bs_554_){
_start:
{
size_t v_sz_boxed_555_; size_t v_i_boxed_556_; lean_object* v_res_557_; 
v_sz_boxed_555_ = lean_unbox_usize(v_sz_552_);
lean_dec(v_sz_552_);
v_i_boxed_556_ = lean_unbox_usize(v_i_553_);
lean_dec(v_i_553_);
v_res_557_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_boxed_555_, v_i_boxed_556_, v_bs_554_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0(lean_object* v_x_558_){
_start:
{
if (lean_obj_tag(v_x_558_) == 0)
{
lean_object* v___x_559_; 
v___x_559_ = lean_box(0);
return v___x_559_;
}
else
{
lean_object* v_val_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_570_; 
v_val_560_ = lean_ctor_get(v_x_558_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v_x_558_);
if (v_isSharedCheck_570_ == 0)
{
v___x_562_ = v_x_558_;
v_isShared_563_ = v_isSharedCheck_570_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_val_560_);
lean_dec(v_x_558_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_570_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
size_t v_sz_564_; size_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_568_; 
v_sz_564_ = lean_array_size(v_val_560_);
v___x_565_ = ((size_t)0ULL);
v___x_566_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_564_, v___x_565_, v_val_560_);
if (v_isShared_563_ == 0)
{
lean_ctor_set_tag(v___x_562_, 7);
lean_ctor_set(v___x_562_, 0, v___x_566_);
v___x_568_ = v___x_562_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v___x_566_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_new(lean_object* v_blobParts_579_, lean_object* v_options_580_){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; lean_object* v___x_591_; 
v___x_582_ = lean_unsigned_to_nat(2u);
v___x_583_ = ((lean_object*)(l_Lasm_JS_Web_Blob_new___closed__2));
v___x_584_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0(v_blobParts_579_);
v___x_585_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1(v_options_580_);
v___x_586_ = lean_mk_empty_array_with_capacity(v___x_582_);
v___x_587_ = lean_array_push(v___x_586_, v___x_584_);
v___x_588_ = lean_array_push(v___x_587_, v___x_585_);
v___x_589_ = l_Lasm_JS_Web_Support_args(v___x_588_);
v___x_590_ = 0;
v___x_591_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(v___x_583_, v___x_589_, v___x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_new___boxed(lean_object* v_blobParts_592_, lean_object* v_options_593_, lean_object* v_a_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lasm_JS_Web_Blob_new(v_blobParts_592_, v_options_593_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_size(lean_object* v_self_597_){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = ((lean_object*)(l_Lasm_JS_Web_Blob_size___closed__0));
v___x_600_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_597_, v___x_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_size___boxed(lean_object* v_self_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lasm_JS_Web_Blob_size(v_self_601_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_type(lean_object* v_self_604_){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_607_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_604_, v___x_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_type___boxed(lean_object* v_self_608_, lean_object* v_a_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lasm_JS_Web_Blob_type(v_self_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
lean_object* v___x_612_; 
v___x_612_ = lean_box(0);
return v___x_612_;
}
else
{
lean_object* v_val_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_625_; 
v_val_613_ = lean_ctor_get(v_x_611_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v_x_611_);
if (v_isSharedCheck_625_ == 0)
{
v___x_615_ = v_x_611_;
v_isShared_616_ = v_isSharedCheck_625_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_val_613_);
lean_dec(v_x_611_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_625_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v___x_618_; uint8_t v___x_619_; 
v___x_617_ = lean_nat_abs(v_val_613_);
v___x_618_ = lean_cstr_to_nat("9007199254740991");
v___x_619_ = lean_nat_dec_le(v___x_617_, v___x_618_);
lean_dec(v___x_617_);
if (v___x_619_ == 0)
{
lean_object* v___x_621_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 5);
v___x_621_ = v___x_615_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_val_613_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
else
{
double v___x_623_; lean_object* v___x_624_; 
lean_del_object(v___x_615_);
v___x_623_ = l_Float_ofInt(v_val_613_);
lean_dec(v_val_613_);
v___x_624_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_624_, 0, v___x_623_);
return v___x_624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice(lean_object* v_self_627_, lean_object* v_start_628_, lean_object* v_end_629_, lean_object* v_contentType_630_){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_632_ = ((lean_object*)(l_Lasm_JS_Web_Blob_slice___closed__0));
v___x_633_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_628_);
v___x_634_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_629_);
v___x_635_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentType_630_);
v___x_636_ = lean_unsigned_to_nat(3u);
v___x_637_ = lean_mk_empty_array_with_capacity(v___x_636_);
v___x_638_ = lean_array_push(v___x_637_, v___x_633_);
v___x_639_ = lean_array_push(v___x_638_, v___x_634_);
v___x_640_ = lean_array_push(v___x_639_, v___x_635_);
v___x_641_ = l_Lasm_JS_Web_Support_args(v___x_640_);
v___x_642_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_627_, v___x_632_, v___x_641_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_642_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_642_);
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
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
v_a_651_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_642_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_642_);
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
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice___boxed(lean_object* v_self_659_, lean_object* v_start_660_, lean_object* v_end_661_, lean_object* v_contentType_662_, lean_object* v_a_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lasm_JS_Web_Blob_slice(v_self_659_, v_start_660_, v_end_661_, v_contentType_662_);
return v_res_664_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Blob_stream___closed__2(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = ((lean_object*)(l_Lasm_JS_Web_Blob_stream___closed__1));
v___x_669_ = l_Lasm_JS_Web_Support_args(v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream(lean_object* v_self_670_){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_672_ = ((lean_object*)(l_Lasm_JS_Web_Blob_stream___closed__0));
v___x_673_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_674_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_670_, v___x_672_, v___x_673_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_674_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_674_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
else
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
v_a_683_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_674_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_674_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream___boxed(lean_object* v_self_691_, lean_object* v_a_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lasm_JS_Web_Blob_stream(v_self_691_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3(lean_object* v_a_694_, lean_object* v_x_695_){
_start:
{
if (lean_obj_tag(v_x_695_) == 0)
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_705_; 
v_a_697_ = lean_ctor_get(v_x_695_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v_x_695_);
if (v_isSharedCheck_705_ == 0)
{
v___x_699_ = v_x_695_;
v_isShared_700_ = v_isSharedCheck_705_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v_x_695_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_705_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_704_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
lean_object* v___x_703_; 
v___x_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
return v___x_703_;
}
}
}
else
{
lean_object* v___x_706_; 
lean_dec_ref_known(v_x_695_, 1);
v___x_706_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_694_);
return v___x_706_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed(lean_object* v_a_707_, lean_object* v_x_708_, lean_object* v___y_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3(v_a_707_, v_x_708_);
lean_dec(v_a_707_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7(lean_object* v___f_711_, lean_object* v_a_712_, uint32_t v_op_713_, uint64_t v_flags_714_, lean_object* v_payload_715_, lean_object* v_x_716_){
_start:
{
if (lean_obj_tag(v_x_716_) == 0)
{
lean_object* v___x_718_; 
lean_dec_ref(v___f_711_);
v___x_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_718_, 0, v_x_716_);
return v___x_718_;
}
else
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_739_; 
v_a_719_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_739_ == 0)
{
v___x_721_ = v_x_716_;
v_isShared_722_ = v_isSharedCheck_739_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v_x_716_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_739_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
uint32_t v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; lean_object* v_val_727_; lean_object* v___x_730_; 
v___x_723_ = 0;
v___x_724_ = lean_unsigned_to_nat(0u);
v___x_725_ = 0;
v___x_730_ = lasm_js_call_into(v_a_712_, v_op_713_, v___x_723_, v_flags_714_, v_a_719_, v_payload_715_);
lean_dec(v_a_719_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_733_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_a_731_);
lean_dec_ref_known(v___x_730_, 1);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v_a_731_);
v___x_733_ = v___x_721_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
v_val_727_ = v___x_733_;
goto v___jp_726_;
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; 
v_a_735_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v___x_730_, 1);
if (v_isShared_722_ == 0)
{
lean_ctor_set_tag(v___x_721_, 0);
lean_ctor_set(v___x_721_, 0, v_a_735_);
v___x_737_ = v___x_721_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_735_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
v_val_727_ = v___x_737_;
goto v___jp_726_;
}
}
v___jp_726_:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v_val_727_);
v___x_729_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_724_, v___x_725_, v___x_728_, v___f_711_);
return v___x_729_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed(lean_object* v___f_740_, lean_object* v_a_741_, lean_object* v_op_742_, lean_object* v_flags_743_, lean_object* v_payload_744_, lean_object* v_x_745_, lean_object* v___y_746_){
_start:
{
uint32_t v_op_boxed_747_; uint64_t v_flags_boxed_748_; lean_object* v_res_749_; 
v_op_boxed_747_ = lean_unbox_uint32(v_op_742_);
lean_dec(v_op_742_);
v_flags_boxed_748_ = lean_unbox_uint64(v_flags_743_);
lean_dec_ref(v_flags_743_);
v_res_749_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7(v___f_740_, v_a_741_, v_op_boxed_747_, v_flags_boxed_748_, v_payload_744_, v_x_745_);
lean_dec(v_payload_744_);
lean_dec(v_a_741_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5(lean_object* v___x_750_, uint8_t v___x_751_, lean_object* v___f_752_, lean_object* v_a_753_, uint32_t v_op_754_, uint64_t v_flags_755_, lean_object* v_payload_756_, lean_object* v_x_757_){
_start:
{
lean_object* v_val_760_; 
if (lean_obj_tag(v_x_757_) == 0)
{
lean_object* v___x_763_; 
lean_dec_ref(v___f_752_);
lean_dec(v___x_750_);
v___x_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_763_, 0, v_x_757_);
return v___x_763_;
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_778_; 
v_a_764_ = lean_ctor_get(v_x_757_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v_x_757_);
if (v_isSharedCheck_778_ == 0)
{
v___x_766_ = v_x_757_;
v_isShared_767_ = v_isSharedCheck_778_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v_x_757_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_778_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
uint32_t v___x_768_; lean_object* v___x_769_; 
v___x_768_ = 0;
v___x_769_ = lasm_js_call_into(v_a_753_, v_op_754_, v___x_768_, v_flags_755_, v_a_764_, v_payload_756_);
lean_dec(v_a_764_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_772_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v___x_769_, 1);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v_a_770_);
v___x_772_ = v___x_766_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
v_val_760_ = v___x_772_;
goto v___jp_759_;
}
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; 
v_a_774_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_774_);
lean_dec_ref_known(v___x_769_, 1);
if (v_isShared_767_ == 0)
{
lean_ctor_set_tag(v___x_766_, 0);
lean_ctor_set(v___x_766_, 0, v_a_774_);
v___x_776_ = v___x_766_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
v_val_760_ = v___x_776_;
goto v___jp_759_;
}
}
}
}
v___jp_759_:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v_val_760_);
v___x_762_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_750_, v___x_751_, v___x_761_, v___f_752_);
return v___x_762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed(lean_object* v___x_779_, lean_object* v___x_780_, lean_object* v___f_781_, lean_object* v_a_782_, lean_object* v_op_783_, lean_object* v_flags_784_, lean_object* v_payload_785_, lean_object* v_x_786_, lean_object* v___y_787_){
_start:
{
uint8_t v___x_827__boxed_788_; uint32_t v_op_boxed_789_; uint64_t v_flags_boxed_790_; lean_object* v_res_791_; 
v___x_827__boxed_788_ = lean_unbox(v___x_780_);
v_op_boxed_789_ = lean_unbox_uint32(v_op_783_);
lean_dec(v_op_783_);
v_flags_boxed_790_ = lean_unbox_uint64(v_flags_784_);
lean_dec_ref(v_flags_784_);
v_res_791_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5(v___x_779_, v___x_827__boxed_788_, v___f_781_, v_a_782_, v_op_boxed_789_, v_flags_boxed_790_, v_payload_785_, v_x_786_);
lean_dec(v_payload_785_);
lean_dec(v_a_782_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_792_, uint32_t v_op_793_, uint64_t v_flags_794_, lean_object* v_payload_795_, lean_object* v___f_796_, lean_object* v___f_797_, lean_object* v___f_798_, lean_object* v_x_799_){
_start:
{
if (lean_obj_tag(v_x_799_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_809_; 
lean_dec_ref(v___f_798_);
lean_dec_ref(v___f_797_);
lean_dec_ref(v___f_796_);
lean_dec(v_payload_795_);
v_a_801_ = lean_ctor_get(v_x_799_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v_x_799_);
if (v_isSharedCheck_809_ == 0)
{
v___x_803_ = v_x_799_;
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v_x_799_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_808_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
lean_object* v___x_807_; 
v___x_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
return v___x_807_;
}
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_856_; 
v_a_810_ = lean_ctor_get(v_x_799_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v_x_799_);
if (v_isSharedCheck_856_ == 0)
{
v___x_812_ = v_x_799_;
v_isShared_813_ = v_isSharedCheck_856_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v_x_799_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_856_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_814_; lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_814_ = lean_string_utf8_byte_size(v_failurePrefix_792_);
v___x_815_ = lean_unsigned_to_nat(0u);
v___x_816_ = lean_nat_dec_eq(v___x_814_, v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___f_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___f_821_; lean_object* v_val_823_; lean_object* v___x_828_; 
lean_dec_ref(v___f_798_);
lean_inc(v_a_810_);
v___f_817_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_817_, 0, v_a_810_);
v___x_818_ = lean_box(v___x_816_);
v___x_819_ = lean_box_uint32(v_op_793_);
v___x_820_ = lean_box_uint64(v_flags_794_);
lean_inc(v_payload_795_);
v___f_821_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_821_, 0, v___x_815_);
lean_closure_set(v___f_821_, 1, v___x_818_);
lean_closure_set(v___f_821_, 2, v___f_817_);
lean_closure_set(v___f_821_, 3, v_a_810_);
lean_closure_set(v___f_821_, 4, v___x_819_);
lean_closure_set(v___f_821_, 5, v___x_820_);
lean_closure_set(v___f_821_, 6, v_payload_795_);
v___x_828_ = l_Lasm_JS_Wire_encodeIO(v_payload_795_);
lean_dec(v_payload_795_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_829_);
lean_dec_ref_known(v___x_828_, 1);
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 0, v_a_829_);
v___x_831_ = v___x_812_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
v_val_823_ = v___x_831_;
goto v___jp_822_;
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; 
v_a_833_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_833_);
lean_dec_ref_known(v___x_828_, 1);
if (v_isShared_813_ == 0)
{
lean_ctor_set_tag(v___x_812_, 0);
lean_ctor_set(v___x_812_, 0, v_a_833_);
v___x_835_ = v___x_812_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_833_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
v_val_823_ = v___x_835_;
goto v___jp_822_;
}
}
v___jp_822_:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_824_, 0, v_val_823_);
v___x_825_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_815_, v___x_816_, v___x_824_, v___f_821_);
v___x_826_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_815_, v___x_816_, v___x_825_, v___f_796_);
v___x_827_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_815_, v___x_816_, v___x_826_, v___f_797_);
return v___x_827_;
}
}
else
{
lean_object* v___f_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___f_840_; uint8_t v___x_841_; lean_object* v_val_843_; lean_object* v___x_847_; 
lean_dec_ref(v___f_797_);
lean_dec_ref(v___f_796_);
lean_inc(v_a_810_);
v___f_837_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_837_, 0, v_a_810_);
v___x_838_ = lean_box_uint32(v_op_793_);
v___x_839_ = lean_box_uint64(v_flags_794_);
lean_inc(v_payload_795_);
v___f_840_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_840_, 0, v___f_837_);
lean_closure_set(v___f_840_, 1, v_a_810_);
lean_closure_set(v___f_840_, 2, v___x_838_);
lean_closure_set(v___f_840_, 3, v___x_839_);
lean_closure_set(v___f_840_, 4, v_payload_795_);
v___x_841_ = 0;
v___x_847_ = l_Lasm_JS_Wire_encodeIO(v_payload_795_);
lean_dec(v_payload_795_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
lean_dec_ref_known(v___x_847_, 1);
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 0, v_a_848_);
v___x_850_ = v___x_812_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_848_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
v_val_843_ = v___x_850_;
goto v___jp_842_;
}
}
else
{
lean_object* v_a_852_; lean_object* v___x_854_; 
v_a_852_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_847_, 1);
if (v_isShared_813_ == 0)
{
lean_ctor_set_tag(v___x_812_, 0);
lean_ctor_set(v___x_812_, 0, v_a_852_);
v___x_854_ = v___x_812_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_852_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
v_val_843_ = v___x_854_;
goto v___jp_842_;
}
}
v___jp_842_:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_844_, 0, v_val_843_);
v___x_845_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_815_, v___x_841_, v___x_844_, v___f_840_);
v___x_846_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_815_, v___x_841_, v___x_845_, v___f_798_);
return v___x_846_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_857_, lean_object* v_op_858_, lean_object* v_flags_859_, lean_object* v_payload_860_, lean_object* v___f_861_, lean_object* v___f_862_, lean_object* v___f_863_, lean_object* v_x_864_, lean_object* v___y_865_){
_start:
{
uint32_t v_op_boxed_866_; uint64_t v_flags_boxed_867_; lean_object* v_res_868_; 
v_op_boxed_866_ = lean_unbox_uint32(v_op_858_);
lean_dec(v_op_858_);
v_flags_boxed_867_ = lean_unbox_uint64(v_flags_859_);
lean_dec_ref(v_flags_859_);
v_res_868_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6(v_failurePrefix_857_, v_op_boxed_866_, v_flags_boxed_867_, v_payload_860_, v___f_861_, v___f_862_, v___f_863_, v_x_864_);
lean_dec_ref(v_failurePrefix_857_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2(lean_object* v___f_869_, lean_object* v_x_870_){
_start:
{
if (lean_obj_tag(v_x_870_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_880_; 
lean_dec_ref(v___f_869_);
v_a_872_ = lean_ctor_get(v_x_870_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v_x_870_);
if (v_isSharedCheck_880_ == 0)
{
v___x_874_ = v_x_870_;
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v_x_870_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_879_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
lean_object* v___x_878_; 
v___x_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
return v___x_878_;
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_882_; 
v_a_881_ = lean_ctor_get(v_x_870_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v_x_870_, 1);
v___x_882_ = lean_apply_2(v___f_869_, v_a_881_, lean_box(0));
return v___x_882_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2___boxed(lean_object* v___f_883_, lean_object* v_x_884_, lean_object* v___y_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2(v___f_883_, v_x_884_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1(lean_object* v___f_887_, lean_object* v_bytes_888_){
_start:
{
lean_object* v___x_890_; uint8_t v___x_891_; lean_object* v_val_893_; lean_object* v___x_896_; 
v___x_890_ = lean_unsigned_to_nat(0u);
v___x_891_ = 0;
v___x_896_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_888_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_896_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_896_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
lean_ctor_set_tag(v___x_899_, 1);
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
v_val_893_ = v___x_902_;
goto v___jp_892_;
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
v_a_905_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_896_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_896_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
lean_ctor_set_tag(v___x_907_, 0);
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
v_val_893_ = v___x_910_;
goto v___jp_892_;
}
}
}
v___jp_892_:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_894_, 0, v_val_893_);
v___x_895_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_890_, v___x_891_, v___x_894_, v___f_887_);
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1___boxed(lean_object* v___f_913_, lean_object* v_bytes_914_, lean_object* v___y_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1(v___f_913_, v_bytes_914_);
lean_dec_ref(v_bytes_914_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_917_, lean_object* v_x_918_){
_start:
{
if (lean_obj_tag(v_x_918_) == 0)
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_931_; 
v_a_920_ = lean_ctor_get(v_x_918_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v_x_918_);
if (v_isSharedCheck_931_ == 0)
{
v___x_922_ = v_x_918_;
v_isShared_923_ = v_isSharedCheck_931_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v_x_918_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_931_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_924_ = lean_io_error_to_string(v_a_920_);
v___x_925_ = lean_string_append(v_failurePrefix_917_, v___x_924_);
lean_dec_ref(v___x_924_);
v___x_926_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 0, v___x_926_);
v___x_928_ = v___x_922_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_926_);
v___x_928_ = v_reuseFailAlloc_930_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v___x_929_; 
v___x_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_929_, 0, v___x_928_);
return v___x_929_;
}
}
}
else
{
lean_object* v___x_932_; 
lean_dec_ref(v_failurePrefix_917_);
v___x_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_932_, 0, v_x_918_);
return v___x_932_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_933_, lean_object* v_x_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4(v_failurePrefix_933_, v_x_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8(lean_object* v___f_937_, lean_object* v_x_938_){
_start:
{
if (lean_obj_tag(v_x_938_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_948_; 
lean_dec_ref(v___f_937_);
v_a_940_ = lean_ctor_get(v_x_938_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v_x_938_);
if (v_isSharedCheck_948_ == 0)
{
v___x_942_ = v_x_938_;
v_isShared_943_ = v_isSharedCheck_948_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v_x_938_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_948_;
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
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_947_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; 
v___x_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
return v___x_946_;
}
}
}
else
{
lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_960_; 
v_isSharedCheck_960_ = !lean_is_exclusive(v_x_938_);
if (v_isSharedCheck_960_ == 0)
{
lean_object* v_unused_961_; 
v_unused_961_ = lean_ctor_get(v_x_938_, 0);
lean_dec(v_unused_961_);
v___x_950_ = v_x_938_;
v_isShared_951_ = v_isSharedCheck_960_;
goto v_resetjp_949_;
}
else
{
lean_dec(v_x_938_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_960_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_952_; uint8_t v___x_953_; lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = 0;
v___x_954_ = lean_io_promise_new();
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 0, v___x_954_);
v___x_956_ = v___x_950_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_954_);
v___x_956_ = v_reuseFailAlloc_959_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
v___x_958_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_952_, v___x_953_, v___x_957_, v___f_937_);
return v___x_958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8___boxed(lean_object* v___f_962_, lean_object* v_x_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8(v___f_962_, v_x_963_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0(lean_object* v_context_966_, lean_object* v_x_967_){
_start:
{
lean_object* v_val_970_; 
if (lean_obj_tag(v_x_967_) == 0)
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_980_; 
v_a_972_ = lean_ctor_get(v_x_967_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v_x_967_);
if (v_isSharedCheck_980_ == 0)
{
v___x_974_ = v_x_967_;
v_isShared_975_ = v_isSharedCheck_980_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v_x_967_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_980_;
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
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_979_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
lean_object* v___x_978_; 
v___x_978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
return v___x_978_;
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_994_; 
v_a_981_ = lean_ctor_get(v_x_967_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v_x_967_);
if (v_isSharedCheck_994_ == 0)
{
v___x_983_ = v_x_967_;
v_isShared_984_ = v_isSharedCheck_994_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v_x_967_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_994_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_985_; 
v___x_985_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v_context_966_, v_a_981_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v___x_988_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_985_, 1);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v_a_986_);
v___x_988_ = v___x_983_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
v_val_970_ = v___x_988_;
goto v___jp_969_;
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; 
v_a_990_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_985_, 1);
if (v_isShared_984_ == 0)
{
lean_ctor_set_tag(v___x_983_, 0);
lean_ctor_set(v___x_983_, 0, v_a_990_);
v___x_992_ = v___x_983_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_990_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
v_val_970_ = v___x_992_;
goto v___jp_969_;
}
}
}
}
v___jp_969_:
{
lean_object* v___x_971_; 
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v_val_970_);
return v___x_971_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0___boxed(lean_object* v_context_995_, lean_object* v_x_996_, lean_object* v___y_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0(v_context_995_, v_x_996_);
lean_dec_ref(v_context_995_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(lean_object* v_context_999_, uint32_t v_op_1000_, uint64_t v_flags_1001_, lean_object* v_payload_1002_, lean_object* v_failurePrefix_1003_){
_start:
{
lean_object* v___f_1005_; lean_object* v___f_1006_; lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___f_1011_; lean_object* v___f_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; lean_object* v_val_1016_; lean_object* v___x_1019_; 
v___f_1005_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1005_, 0, v_context_999_);
v___f_1006_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1006_, 0, v___f_1005_);
v___f_1007_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1007_, 0, v___f_1006_);
lean_inc_ref(v_failurePrefix_1003_);
v___f_1008_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1008_, 0, v_failurePrefix_1003_);
v___x_1009_ = lean_box_uint32(v_op_1000_);
v___x_1010_ = lean_box_uint64(v_flags_1001_);
lean_inc_ref(v___f_1007_);
v___f_1011_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1011_, 0, v_failurePrefix_1003_);
lean_closure_set(v___f_1011_, 1, v___x_1009_);
lean_closure_set(v___f_1011_, 2, v___x_1010_);
lean_closure_set(v___f_1011_, 3, v_payload_1002_);
lean_closure_set(v___f_1011_, 4, v___f_1008_);
lean_closure_set(v___f_1011_, 5, v___f_1007_);
lean_closure_set(v___f_1011_, 6, v___f_1007_);
v___f_1012_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1012_, 0, v___f_1011_);
v___x_1013_ = lean_unsigned_to_nat(0u);
v___x_1014_ = 0;
v___x_1019_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
lean_ctor_set_tag(v___x_1022_, 1);
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
v_val_1016_ = v___x_1025_;
goto v___jp_1015_;
}
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
v_a_1028_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_1019_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1019_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
lean_ctor_set_tag(v___x_1030_, 0);
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
v_val_1016_ = v___x_1033_;
goto v___jp_1015_;
}
}
}
v___jp_1015_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_val_1016_);
v___x_1018_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1013_, v___x_1014_, v___x_1017_, v___f_1012_);
return v___x_1018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___boxed(lean_object* v_context_1036_, lean_object* v_op_1037_, lean_object* v_flags_1038_, lean_object* v_payload_1039_, lean_object* v_failurePrefix_1040_, lean_object* v_a_1041_){
_start:
{
uint32_t v_op_boxed_1042_; uint64_t v_flags_boxed_1043_; lean_object* v_res_1044_; 
v_op_boxed_1042_ = lean_unbox_uint32(v_op_1037_);
lean_dec(v_op_1037_);
v_flags_boxed_1043_ = lean_unbox_uint64(v_flags_1038_);
lean_dec_ref(v_flags_1038_);
v_res_1044_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v_context_1036_, v_op_boxed_1042_, v_flags_boxed_1043_, v_payload_1039_, v_failurePrefix_1040_);
return v_res_1044_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(uint8_t v_await_1045_, uint64_t v_extra_1046_){
_start:
{
uint64_t v___x_1047_; uint64_t v___y_1049_; 
v___x_1047_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1045_ == 0)
{
uint64_t v___x_1052_; 
v___x_1052_ = 0ULL;
v___y_1049_ = v___x_1052_;
goto v___jp_1048_;
}
else
{
uint64_t v___x_1053_; 
v___x_1053_ = 2ULL;
v___y_1049_ = v___x_1053_;
goto v___jp_1048_;
}
v___jp_1048_:
{
uint64_t v___x_1050_; uint64_t v___x_1051_; 
v___x_1050_ = lean_uint64_lor(v___x_1047_, v___y_1049_);
v___x_1051_ = lean_uint64_lor(v___x_1050_, v_extra_1046_);
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0___boxed(lean_object* v_await_1054_, lean_object* v_extra_1055_){
_start:
{
uint8_t v_await_boxed_1056_; uint64_t v_extra_boxed_1057_; uint64_t v_res_1058_; lean_object* v_r_1059_; 
v_await_boxed_1056_ = lean_unbox(v_await_1054_);
v_extra_boxed_1057_ = lean_unbox_uint64(v_extra_1055_);
lean_dec_ref(v_extra_1055_);
v_res_1058_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v_await_boxed_1056_, v_extra_boxed_1057_);
v_r_1059_ = lean_box_uint64(v_res_1058_);
return v_r_1059_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1(void){
_start:
{
uint64_t v___x_1061_; uint8_t v___x_1062_; uint64_t v___x_1063_; 
v___x_1061_ = 8ULL;
v___x_1062_ = 0;
v___x_1063_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v___x_1062_, v___x_1061_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object* v_o_1064_, lean_object* v_name_1065_, lean_object* v_args_1066_){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; uint32_t v___x_1073_; uint64_t v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1069_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1069_, 0, v_o_1064_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
lean_inc_ref(v_name_1065_);
v___x_1070_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1070_, 0, v_name_1065_);
v___x_1071_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0));
v___x_1072_ = lean_string_append(v___x_1071_, v_name_1065_);
lean_dec_ref(v_name_1065_);
v___x_1073_ = 205;
v___x_1074_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1);
v___x_1075_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1075_, 0, v_args_1066_);
v___x_1076_ = lean_unsigned_to_nat(3u);
v___x_1077_ = lean_mk_empty_array_with_capacity(v___x_1076_);
v___x_1078_ = lean_array_push(v___x_1077_, v___x_1069_);
v___x_1079_ = lean_array_push(v___x_1078_, v___x_1070_);
v___x_1080_ = lean_array_push(v___x_1079_, v___x_1075_);
v___x_1081_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
v___x_1082_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v___x_1072_, v___x_1073_, v___x_1074_, v___x_1081_, v___x_1068_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___boxed(lean_object* v_o_1083_, lean_object* v_name_1084_, lean_object* v_args_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_o_1083_, v_name_1084_, v_args_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text(lean_object* v_self_1089_){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1091_ = ((lean_object*)(l_Lasm_JS_Web_Blob_text___closed__0));
v___x_1092_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1093_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_1089_, v___x_1091_, v___x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text___boxed(lean_object* v_self_1094_, lean_object* v_a_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lasm_JS_Web_Blob_text(v_self_1094_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0(lean_object* v_x_1097_){
_start:
{
lean_object* v_val_1100_; 
if (lean_obj_tag(v_x_1097_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1110_; 
v_a_1102_ = lean_ctor_get(v_x_1097_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_x_1097_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1104_ = v_x_1097_;
v_isShared_1105_ = v_isSharedCheck_1110_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v_x_1097_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1110_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1107_);
return v___x_1108_;
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1124_; 
v_a_1111_ = lean_ctor_get(v_x_1097_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_x_1097_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1113_ = v_x_1097_;
v_isShared_1114_ = v_isSharedCheck_1124_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v_x_1097_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1124_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_1111_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v_a_1116_; lean_object* v___x_1118_; 
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_a_1116_);
lean_dec_ref_known(v___x_1115_, 1);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 0, v_a_1116_);
v___x_1118_ = v___x_1113_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
v_val_1100_ = v___x_1118_;
goto v___jp_1099_;
}
}
else
{
lean_object* v_a_1120_; lean_object* v___x_1122_; 
v_a_1120_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_a_1120_);
lean_dec_ref_known(v___x_1115_, 1);
if (v_isShared_1114_ == 0)
{
lean_ctor_set_tag(v___x_1113_, 0);
lean_ctor_set(v___x_1113_, 0, v_a_1120_);
v___x_1122_ = v___x_1113_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1120_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
v_val_1100_ = v___x_1122_;
goto v___jp_1099_;
}
}
}
}
v___jp_1099_:
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_val_1100_);
return v___x_1101_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0___boxed(lean_object* v_x_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lasm_JS_Web_Blob_arrayBuffer___lam__0(v_x_1125_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2(lean_object* v___f_1128_, lean_object* v_x_1129_){
_start:
{
if (lean_obj_tag(v_x_1129_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1139_; 
lean_dec_ref(v___f_1128_);
v_a_1131_ = lean_ctor_get(v_x_1129_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_x_1129_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1133_ = v_x_1129_;
v_isShared_1134_ = v_isSharedCheck_1139_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v_x_1129_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1139_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1137_; 
v___x_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
return v___x_1137_;
}
}
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1141_; 
v_a_1140_ = lean_ctor_get(v_x_1129_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v_x_1129_, 1);
v___x_1141_ = lean_apply_2(v___f_1128_, v_a_1140_, lean_box(0));
return v___x_1141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2___boxed(lean_object* v___f_1142_, lean_object* v_x_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2(v___f_1142_, v_x_1143_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1(lean_object* v___f_1146_, lean_object* v_bytes_1147_){
_start:
{
lean_object* v___x_1149_; uint8_t v___x_1150_; lean_object* v_val_1152_; lean_object* v___x_1155_; 
v___x_1149_ = lean_unsigned_to_nat(0u);
v___x_1150_ = 0;
v___x_1155_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1147_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1155_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1155_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
lean_ctor_set_tag(v___x_1158_, 1);
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
v_val_1152_ = v___x_1161_;
goto v___jp_1151_;
}
}
}
else
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
v_a_1164_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1155_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1155_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
lean_ctor_set_tag(v___x_1166_, 0);
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
v_val_1152_ = v___x_1169_;
goto v___jp_1151_;
}
}
}
v___jp_1151_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1153_, 0, v_val_1152_);
v___x_1154_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1149_, v___x_1150_, v___x_1153_, v___f_1146_);
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1___boxed(lean_object* v___f_1172_, lean_object* v_bytes_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1(v___f_1172_, v_bytes_1173_);
lean_dec_ref(v_bytes_1173_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_1176_, uint32_t v_op_1177_, uint64_t v_flags_1178_, lean_object* v_payload_1179_, lean_object* v___f_1180_, lean_object* v___f_1181_, lean_object* v___f_1182_, lean_object* v_x_1183_){
_start:
{
if (lean_obj_tag(v_x_1183_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1193_; 
lean_dec_ref(v___f_1182_);
lean_dec_ref(v___f_1181_);
lean_dec_ref(v___f_1180_);
lean_dec(v_payload_1179_);
v_a_1185_ = lean_ctor_get(v_x_1183_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v_x_1183_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1187_ = v_x_1183_;
v_isShared_1188_ = v_isSharedCheck_1193_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v_x_1183_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1193_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
return v___x_1191_;
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1240_; 
v_a_1194_ = lean_ctor_get(v_x_1183_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_x_1183_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1196_ = v_x_1183_;
v_isShared_1197_ = v_isSharedCheck_1240_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v_x_1183_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1240_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1198_ = lean_string_utf8_byte_size(v_failurePrefix_1176_);
v___x_1199_ = lean_unsigned_to_nat(0u);
v___x_1200_ = lean_nat_dec_eq(v___x_1198_, v___x_1199_);
if (v___x_1200_ == 0)
{
lean_object* v___f_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___f_1205_; lean_object* v_val_1207_; lean_object* v___x_1212_; 
lean_dec_ref(v___f_1182_);
lean_inc(v_a_1194_);
v___f_1201_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1201_, 0, v_a_1194_);
v___x_1202_ = lean_box(v___x_1200_);
v___x_1203_ = lean_box_uint32(v_op_1177_);
v___x_1204_ = lean_box_uint64(v_flags_1178_);
lean_inc(v_payload_1179_);
v___f_1205_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1205_, 0, v___x_1199_);
lean_closure_set(v___f_1205_, 1, v___x_1202_);
lean_closure_set(v___f_1205_, 2, v___f_1201_);
lean_closure_set(v___f_1205_, 3, v_a_1194_);
lean_closure_set(v___f_1205_, 4, v___x_1203_);
lean_closure_set(v___f_1205_, 5, v___x_1204_);
lean_closure_set(v___f_1205_, 6, v_payload_1179_);
v___x_1212_ = l_Lasm_JS_Wire_encodeIO(v_payload_1179_);
lean_dec(v_payload_1179_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; lean_object* v___x_1215_; 
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1213_);
lean_dec_ref_known(v___x_1212_, 1);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v_a_1213_);
v___x_1215_ = v___x_1196_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1213_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
v_val_1207_ = v___x_1215_;
goto v___jp_1206_;
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; 
v_a_1217_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1217_);
lean_dec_ref_known(v___x_1212_, 1);
if (v_isShared_1197_ == 0)
{
lean_ctor_set_tag(v___x_1196_, 0);
lean_ctor_set(v___x_1196_, 0, v_a_1217_);
v___x_1219_ = v___x_1196_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1217_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
v_val_1207_ = v___x_1219_;
goto v___jp_1206_;
}
}
v___jp_1206_:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v_val_1207_);
v___x_1209_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1199_, v___x_1200_, v___x_1208_, v___f_1205_);
v___x_1210_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1199_, v___x_1200_, v___x_1209_, v___f_1180_);
v___x_1211_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1199_, v___x_1200_, v___x_1210_, v___f_1181_);
return v___x_1211_;
}
}
else
{
lean_object* v___f_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___f_1224_; uint8_t v___x_1225_; lean_object* v_val_1227_; lean_object* v___x_1231_; 
lean_dec_ref(v___f_1181_);
lean_dec_ref(v___f_1180_);
lean_inc(v_a_1194_);
v___f_1221_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1221_, 0, v_a_1194_);
v___x_1222_ = lean_box_uint32(v_op_1177_);
v___x_1223_ = lean_box_uint64(v_flags_1178_);
lean_inc(v_payload_1179_);
v___f_1224_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1224_, 0, v___f_1221_);
lean_closure_set(v___f_1224_, 1, v_a_1194_);
lean_closure_set(v___f_1224_, 2, v___x_1222_);
lean_closure_set(v___f_1224_, 3, v___x_1223_);
lean_closure_set(v___f_1224_, 4, v_payload_1179_);
v___x_1225_ = 0;
v___x_1231_ = l_Lasm_JS_Wire_encodeIO(v_payload_1179_);
lean_dec(v_payload_1179_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_a_1232_);
lean_dec_ref_known(v___x_1231_, 1);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v_a_1232_);
v___x_1234_ = v___x_1196_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
v_val_1227_ = v___x_1234_;
goto v___jp_1226_;
}
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; 
v_a_1236_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1231_, 1);
if (v_isShared_1197_ == 0)
{
lean_ctor_set_tag(v___x_1196_, 0);
lean_ctor_set(v___x_1196_, 0, v_a_1236_);
v___x_1238_ = v___x_1196_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1236_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
v_val_1227_ = v___x_1238_;
goto v___jp_1226_;
}
}
v___jp_1226_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1228_, 0, v_val_1227_);
v___x_1229_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1199_, v___x_1225_, v___x_1228_, v___f_1224_);
v___x_1230_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1199_, v___x_1225_, v___x_1229_, v___f_1182_);
return v___x_1230_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_1241_, lean_object* v_op_1242_, lean_object* v_flags_1243_, lean_object* v_payload_1244_, lean_object* v___f_1245_, lean_object* v___f_1246_, lean_object* v___f_1247_, lean_object* v_x_1248_, lean_object* v___y_1249_){
_start:
{
uint32_t v_op_boxed_1250_; uint64_t v_flags_boxed_1251_; lean_object* v_res_1252_; 
v_op_boxed_1250_ = lean_unbox_uint32(v_op_1242_);
lean_dec(v_op_1242_);
v_flags_boxed_1251_ = lean_unbox_uint64(v_flags_1243_);
lean_dec_ref(v_flags_1243_);
v_res_1252_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9(v_failurePrefix_1241_, v_op_boxed_1250_, v_flags_boxed_1251_, v_payload_1244_, v___f_1245_, v___f_1246_, v___f_1247_, v_x_1248_);
lean_dec_ref(v_failurePrefix_1241_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0(lean_object* v_context_1253_, lean_object* v_x_1254_){
_start:
{
lean_object* v_val_1257_; 
if (lean_obj_tag(v_x_1254_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1267_; 
v_a_1259_ = lean_ctor_get(v_x_1254_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_x_1254_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1261_ = v_x_1254_;
v_isShared_1262_ = v_isSharedCheck_1267_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v_x_1254_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1267_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
return v___x_1265_;
}
}
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1281_; 
v_a_1268_ = lean_ctor_get(v_x_1254_, 0);
v_isSharedCheck_1281_ = !lean_is_exclusive(v_x_1254_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1270_ = v_x_1254_;
v_isShared_1271_ = v_isSharedCheck_1281_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v_x_1254_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1281_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1272_; 
v___x_1272_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_1253_, v_a_1268_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref_known(v___x_1272_, 1);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 0, v_a_1273_);
v___x_1275_ = v___x_1270_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1273_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
v_val_1257_ = v___x_1275_;
goto v___jp_1256_;
}
}
else
{
lean_object* v_a_1277_; lean_object* v___x_1279_; 
v_a_1277_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1277_);
lean_dec_ref_known(v___x_1272_, 1);
if (v_isShared_1271_ == 0)
{
lean_ctor_set_tag(v___x_1270_, 0);
lean_ctor_set(v___x_1270_, 0, v_a_1277_);
v___x_1279_ = v___x_1270_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_a_1277_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
v_val_1257_ = v___x_1279_;
goto v___jp_1256_;
}
}
}
}
v___jp_1256_:
{
lean_object* v___x_1258_; 
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v_val_1257_);
return v___x_1258_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0___boxed(lean_object* v_context_1282_, lean_object* v_x_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0(v_context_1282_, v_x_1283_);
lean_dec_ref(v_context_1282_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3(lean_object* v___f_1286_, lean_object* v_x_1287_){
_start:
{
if (lean_obj_tag(v_x_1287_) == 0)
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1297_; 
lean_dec_ref(v___f_1286_);
v_a_1289_ = lean_ctor_get(v_x_1287_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_x_1287_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1291_ = v_x_1287_;
v_isShared_1292_ = v_isSharedCheck_1297_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v_x_1287_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1297_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
}
}
else
{
lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1309_; 
v_isSharedCheck_1309_ = !lean_is_exclusive(v_x_1287_);
if (v_isSharedCheck_1309_ == 0)
{
lean_object* v_unused_1310_; 
v_unused_1310_ = lean_ctor_get(v_x_1287_, 0);
lean_dec(v_unused_1310_);
v___x_1299_ = v_x_1287_;
v_isShared_1300_ = v_isSharedCheck_1309_;
goto v_resetjp_1298_;
}
else
{
lean_dec(v_x_1287_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1309_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1301_; uint8_t v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1301_ = lean_unsigned_to_nat(0u);
v___x_1302_ = 0;
v___x_1303_ = lean_io_promise_new();
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v___x_1303_);
v___x_1305_ = v___x_1299_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
v___x_1307_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1301_, v___x_1302_, v___x_1306_, v___f_1286_);
return v___x_1307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3___boxed(lean_object* v___f_1311_, lean_object* v_x_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3(v___f_1311_, v_x_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(lean_object* v_context_1315_, uint32_t v_op_1316_, uint64_t v_flags_1317_, lean_object* v_payload_1318_, lean_object* v_failurePrefix_1319_){
_start:
{
lean_object* v___f_1321_; lean_object* v___f_1322_; lean_object* v___f_1323_; lean_object* v___f_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___f_1327_; lean_object* v___f_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; lean_object* v_val_1332_; lean_object* v___x_1335_; 
v___f_1321_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1321_, 0, v_context_1315_);
v___f_1322_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1322_, 0, v___f_1321_);
v___f_1323_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1323_, 0, v___f_1322_);
lean_inc_ref(v_failurePrefix_1319_);
v___f_1324_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1324_, 0, v_failurePrefix_1319_);
v___x_1325_ = lean_box_uint32(v_op_1316_);
v___x_1326_ = lean_box_uint64(v_flags_1317_);
lean_inc_ref(v___f_1323_);
v___f_1327_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1327_, 0, v_failurePrefix_1319_);
lean_closure_set(v___f_1327_, 1, v___x_1325_);
lean_closure_set(v___f_1327_, 2, v___x_1326_);
lean_closure_set(v___f_1327_, 3, v_payload_1318_);
lean_closure_set(v___f_1327_, 4, v___f_1324_);
lean_closure_set(v___f_1327_, 5, v___f_1323_);
lean_closure_set(v___f_1327_, 6, v___f_1323_);
v___f_1328_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1328_, 0, v___f_1327_);
v___x_1329_ = lean_unsigned_to_nat(0u);
v___x_1330_ = 0;
v___x_1335_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1343_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1338_ = v___x_1335_;
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1335_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
lean_ctor_set_tag(v___x_1338_, 1);
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1336_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
v_val_1332_ = v___x_1341_;
goto v___jp_1331_;
}
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1351_; 
v_a_1344_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1346_ = v___x_1335_;
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1335_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
lean_ctor_set_tag(v___x_1346_, 0);
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1344_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
v_val_1332_ = v___x_1349_;
goto v___jp_1331_;
}
}
}
v___jp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1333_, 0, v_val_1332_);
v___x_1334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1329_, v___x_1330_, v___x_1333_, v___f_1328_);
return v___x_1334_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___boxed(lean_object* v_context_1352_, lean_object* v_op_1353_, lean_object* v_flags_1354_, lean_object* v_payload_1355_, lean_object* v_failurePrefix_1356_, lean_object* v_a_1357_){
_start:
{
uint32_t v_op_boxed_1358_; uint64_t v_flags_boxed_1359_; lean_object* v_res_1360_; 
v_op_boxed_1358_ = lean_unbox_uint32(v_op_1353_);
lean_dec(v_op_1353_);
v_flags_boxed_1359_ = lean_unbox_uint64(v_flags_1354_);
lean_dec_ref(v_flags_1354_);
v_res_1360_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v_context_1352_, v_op_boxed_1358_, v_flags_boxed_1359_, v_payload_1355_, v_failurePrefix_1356_);
return v_res_1360_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1361_; uint8_t v___x_1362_; uint64_t v___x_1363_; 
v___x_1361_ = 8ULL;
v___x_1362_ = 0;
v___x_1363_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_1362_, v___x_1361_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object* v_o_1364_, lean_object* v_name_1365_, lean_object* v_args_1366_){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; uint32_t v___x_1373_; uint64_t v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1368_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1369_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1369_, 0, v_o_1364_);
lean_ctor_set(v___x_1369_, 1, v___x_1368_);
lean_inc_ref(v_name_1365_);
v___x_1370_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1370_, 0, v_name_1365_);
v___x_1371_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0));
v___x_1372_ = lean_string_append(v___x_1371_, v_name_1365_);
lean_dec_ref(v_name_1365_);
v___x_1373_ = 205;
v___x_1374_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0);
v___x_1375_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1375_, 0, v_args_1366_);
v___x_1376_ = lean_unsigned_to_nat(3u);
v___x_1377_ = lean_mk_empty_array_with_capacity(v___x_1376_);
v___x_1378_ = lean_array_push(v___x_1377_, v___x_1369_);
v___x_1379_ = lean_array_push(v___x_1378_, v___x_1370_);
v___x_1380_ = lean_array_push(v___x_1379_, v___x_1375_);
v___x_1381_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
v___x_1382_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v___x_1372_, v___x_1373_, v___x_1374_, v___x_1381_, v___x_1368_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___boxed(lean_object* v_o_1383_, lean_object* v_name_1384_, lean_object* v_args_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_o_1383_, v_name_1384_, v_args_1385_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer(lean_object* v_self_1390_){
_start:
{
lean_object* v___f_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___f_1392_ = ((lean_object*)(l_Lasm_JS_Web_Blob_arrayBuffer___closed__0));
v___x_1393_ = ((lean_object*)(l_Lasm_JS_Web_Blob_arrayBuffer___closed__1));
v___x_1394_ = lean_unsigned_to_nat(0u);
v___x_1395_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1396_ = 0;
v___x_1397_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_1390_, v___x_1393_, v___x_1395_);
v___x_1398_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1394_, v___x_1396_, v___x_1397_, v___f_1392_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___boxed(lean_object* v_self_1399_, lean_object* v_a_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Lasm_JS_Web_Blob_arrayBuffer(v_self_1399_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream(lean_object* v_self_1403_){
_start:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1405_ = ((lean_object*)(l_Lasm_JS_Web_Blob_textStream___closed__0));
v___x_1406_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1407_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1403_, v___x_1405_, v___x_1406_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1415_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1410_ = v___x_1407_;
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1407_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1408_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
else
{
lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1423_; 
v_a_1416_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1418_ = v___x_1407_;
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_dec(v___x_1407_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1421_; 
if (v_isShared_1419_ == 0)
{
v___x_1421_ = v___x_1418_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_a_1416_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream___boxed(lean_object* v_self_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lasm_JS_Web_Blob_textStream(v_self_1424_);
return v_res_1426_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(uint8_t v_await_1427_, uint64_t v_extra_1428_){
_start:
{
uint64_t v___x_1429_; uint64_t v___y_1431_; 
v___x_1429_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1427_ == 0)
{
uint64_t v___x_1434_; 
v___x_1434_ = 0ULL;
v___y_1431_ = v___x_1434_;
goto v___jp_1430_;
}
else
{
uint64_t v___x_1435_; 
v___x_1435_ = 2ULL;
v___y_1431_ = v___x_1435_;
goto v___jp_1430_;
}
v___jp_1430_:
{
uint64_t v___x_1432_; uint64_t v___x_1433_; 
v___x_1432_ = lean_uint64_lor(v___x_1429_, v___y_1431_);
v___x_1433_ = lean_uint64_lor(v___x_1432_, v_extra_1428_);
return v___x_1433_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0___boxed(lean_object* v_await_1436_, lean_object* v_extra_1437_){
_start:
{
uint8_t v_await_boxed_1438_; uint64_t v_extra_boxed_1439_; uint64_t v_res_1440_; lean_object* v_r_1441_; 
v_await_boxed_1438_ = lean_unbox(v_await_1436_);
v_extra_boxed_1439_ = lean_unbox_uint64(v_extra_1437_);
lean_dec_ref(v_extra_1437_);
v_res_1440_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(v_await_boxed_1438_, v_extra_boxed_1439_);
v_r_1441_ = lean_box_uint64(v_res_1440_);
return v_r_1441_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2(lean_object* v___f_1442_, lean_object* v_x_1443_){
_start:
{
if (lean_obj_tag(v_x_1443_) == 0)
{
lean_object* v___x_1445_; 
lean_dec_ref(v___f_1442_);
v___x_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1445_, 0, v_x_1443_);
return v___x_1445_;
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1447_; 
v_a_1446_ = lean_ctor_get(v_x_1443_, 0);
lean_inc(v_a_1446_);
lean_dec_ref_known(v_x_1443_, 1);
v___x_1447_ = lean_apply_2(v___f_1442_, v_a_1446_, lean_box(0));
return v___x_1447_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1448_, lean_object* v_x_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2(v___f_1448_, v_x_1449_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0(lean_object* v_context_1452_, lean_object* v_x_1453_){
_start:
{
lean_object* v_val_1456_; 
if (lean_obj_tag(v_x_1453_) == 0)
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1466_; 
v_a_1458_ = lean_ctor_get(v_x_1453_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_x_1453_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1460_ = v_x_1453_;
v_isShared_1461_ = v_isSharedCheck_1466_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v_x_1453_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1466_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1463_);
return v___x_1464_;
}
}
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1480_; 
v_a_1467_ = lean_ctor_get(v_x_1453_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_x_1453_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1469_ = v_x_1453_;
v_isShared_1470_ = v_isSharedCheck_1480_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v_x_1453_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1480_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1471_; 
v___x_1471_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_1452_, v_a_1467_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1474_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_a_1472_);
lean_dec_ref_known(v___x_1471_, 1);
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 0, v_a_1472_);
v___x_1474_ = v___x_1469_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1472_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
v_val_1456_ = v___x_1474_;
goto v___jp_1455_;
}
}
else
{
lean_object* v_a_1476_; lean_object* v___x_1478_; 
v_a_1476_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1471_, 1);
if (v_isShared_1470_ == 0)
{
lean_ctor_set_tag(v___x_1469_, 0);
lean_ctor_set(v___x_1469_, 0, v_a_1476_);
v___x_1478_ = v___x_1469_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
v_val_1456_ = v___x_1478_;
goto v___jp_1455_;
}
}
}
}
v___jp_1455_:
{
lean_object* v___x_1457_; 
v___x_1457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1457_, 0, v_val_1456_);
return v___x_1457_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1481_, lean_object* v_x_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0(v_context_1481_, v_x_1482_);
lean_dec_ref(v_context_1481_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1(lean_object* v___f_1485_, lean_object* v_bytes_1486_){
_start:
{
lean_object* v___x_1488_; uint8_t v___x_1489_; lean_object* v_val_1491_; lean_object* v___x_1494_; 
v___x_1488_ = lean_unsigned_to_nat(0u);
v___x_1489_ = 0;
v___x_1494_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1486_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1494_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1494_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
lean_ctor_set_tag(v___x_1497_, 1);
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
v_val_1491_ = v___x_1500_;
goto v___jp_1490_;
}
}
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
v_a_1503_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1494_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1494_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
lean_ctor_set_tag(v___x_1505_, 0);
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
v_val_1491_ = v___x_1508_;
goto v___jp_1490_;
}
}
}
v___jp_1490_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1492_, 0, v_val_1491_);
v___x_1493_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1488_, v___x_1489_, v___x_1492_, v___f_1485_);
return v___x_1493_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1511_, lean_object* v_bytes_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1(v___f_1511_, v_bytes_1512_);
lean_dec_ref(v_bytes_1512_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3(lean_object* v___f_1515_, lean_object* v_x_1516_){
_start:
{
if (lean_obj_tag(v_x_1516_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1526_; 
lean_dec_ref(v___f_1515_);
v_a_1518_ = lean_ctor_get(v_x_1516_, 0);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_x_1516_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1520_ = v_x_1516_;
v_isShared_1521_ = v_isSharedCheck_1526_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v_x_1516_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1526_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
return v___x_1524_;
}
}
}
else
{
lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1538_; 
v_isSharedCheck_1538_ = !lean_is_exclusive(v_x_1516_);
if (v_isSharedCheck_1538_ == 0)
{
lean_object* v_unused_1539_; 
v_unused_1539_ = lean_ctor_get(v_x_1516_, 0);
lean_dec(v_unused_1539_);
v___x_1528_ = v_x_1516_;
v_isShared_1529_ = v_isSharedCheck_1538_;
goto v_resetjp_1527_;
}
else
{
lean_dec(v_x_1516_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1538_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1530_; uint8_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1530_ = lean_unsigned_to_nat(0u);
v___x_1531_ = 0;
v___x_1532_ = lean_io_promise_new();
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v___x_1532_);
v___x_1534_ = v___x_1528_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1534_);
v___x_1536_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1530_, v___x_1531_, v___x_1535_, v___f_1515_);
return v___x_1536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3___boxed(lean_object* v___f_1540_, lean_object* v_x_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3(v___f_1540_, v_x_1541_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_1544_, uint32_t v_op_1545_, uint64_t v_flags_1546_, lean_object* v_payload_1547_, lean_object* v___f_1548_, lean_object* v___f_1549_, lean_object* v___f_1550_, lean_object* v_x_1551_){
_start:
{
if (lean_obj_tag(v_x_1551_) == 0)
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1561_; 
lean_dec_ref(v___f_1550_);
lean_dec_ref(v___f_1549_);
lean_dec_ref(v___f_1548_);
lean_dec(v_payload_1547_);
v_a_1553_ = lean_ctor_get(v_x_1551_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v_x_1551_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1555_ = v_x_1551_;
v_isShared_1556_ = v_isSharedCheck_1561_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v_x_1551_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1561_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
return v___x_1559_;
}
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1608_; 
v_a_1562_ = lean_ctor_get(v_x_1551_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v_x_1551_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1564_ = v_x_1551_;
v_isShared_1565_ = v_isSharedCheck_1608_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v_x_1551_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1608_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; uint8_t v___x_1568_; 
v___x_1566_ = lean_string_utf8_byte_size(v_failurePrefix_1544_);
v___x_1567_ = lean_unsigned_to_nat(0u);
v___x_1568_ = lean_nat_dec_eq(v___x_1566_, v___x_1567_);
if (v___x_1568_ == 0)
{
lean_object* v___f_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___f_1573_; lean_object* v_val_1575_; lean_object* v___x_1580_; 
lean_dec_ref(v___f_1550_);
lean_inc(v_a_1562_);
v___f_1569_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1569_, 0, v_a_1562_);
v___x_1570_ = lean_box(v___x_1568_);
v___x_1571_ = lean_box_uint32(v_op_1545_);
v___x_1572_ = lean_box_uint64(v_flags_1546_);
lean_inc(v_payload_1547_);
v___f_1573_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1573_, 0, v___x_1567_);
lean_closure_set(v___f_1573_, 1, v___x_1570_);
lean_closure_set(v___f_1573_, 2, v___f_1569_);
lean_closure_set(v___f_1573_, 3, v_a_1562_);
lean_closure_set(v___f_1573_, 4, v___x_1571_);
lean_closure_set(v___f_1573_, 5, v___x_1572_);
lean_closure_set(v___f_1573_, 6, v_payload_1547_);
v___x_1580_ = l_Lasm_JS_Wire_encodeIO(v_payload_1547_);
lean_dec(v_payload_1547_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1583_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v___x_1580_, 1);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v_a_1581_);
v___x_1583_ = v___x_1564_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
v_val_1575_ = v___x_1583_;
goto v___jp_1574_;
}
}
else
{
lean_object* v_a_1585_; lean_object* v___x_1587_; 
v_a_1585_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v___x_1580_, 1);
if (v_isShared_1565_ == 0)
{
lean_ctor_set_tag(v___x_1564_, 0);
lean_ctor_set(v___x_1564_, 0, v_a_1585_);
v___x_1587_ = v___x_1564_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1585_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
v_val_1575_ = v___x_1587_;
goto v___jp_1574_;
}
}
v___jp_1574_:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1576_, 0, v_val_1575_);
v___x_1577_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1567_, v___x_1568_, v___x_1576_, v___f_1573_);
v___x_1578_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1567_, v___x_1568_, v___x_1577_, v___f_1548_);
v___x_1579_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1567_, v___x_1568_, v___x_1578_, v___f_1549_);
return v___x_1579_;
}
}
else
{
lean_object* v___f_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___f_1592_; uint8_t v___x_1593_; lean_object* v_val_1595_; lean_object* v___x_1599_; 
lean_dec_ref(v___f_1549_);
lean_dec_ref(v___f_1548_);
lean_inc(v_a_1562_);
v___f_1589_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1589_, 0, v_a_1562_);
v___x_1590_ = lean_box_uint32(v_op_1545_);
v___x_1591_ = lean_box_uint64(v_flags_1546_);
lean_inc(v_payload_1547_);
v___f_1592_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1592_, 0, v___f_1589_);
lean_closure_set(v___f_1592_, 1, v_a_1562_);
lean_closure_set(v___f_1592_, 2, v___x_1590_);
lean_closure_set(v___f_1592_, 3, v___x_1591_);
lean_closure_set(v___f_1592_, 4, v_payload_1547_);
v___x_1593_ = 0;
v___x_1599_ = l_Lasm_JS_Wire_encodeIO(v_payload_1547_);
lean_dec(v_payload_1547_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1602_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1600_);
lean_dec_ref_known(v___x_1599_, 1);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v_a_1600_);
v___x_1602_ = v___x_1564_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_a_1600_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
v_val_1595_ = v___x_1602_;
goto v___jp_1594_;
}
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1606_; 
v_a_1604_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v___x_1599_, 1);
if (v_isShared_1565_ == 0)
{
lean_ctor_set_tag(v___x_1564_, 0);
lean_ctor_set(v___x_1564_, 0, v_a_1604_);
v___x_1606_ = v___x_1564_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v_a_1604_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
v_val_1595_ = v___x_1606_;
goto v___jp_1594_;
}
}
v___jp_1594_:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1596_, 0, v_val_1595_);
v___x_1597_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1567_, v___x_1593_, v___x_1596_, v___f_1592_);
v___x_1598_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1567_, v___x_1593_, v___x_1597_, v___f_1550_);
return v___x_1598_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_1609_, lean_object* v_op_1610_, lean_object* v_flags_1611_, lean_object* v_payload_1612_, lean_object* v___f_1613_, lean_object* v___f_1614_, lean_object* v___f_1615_, lean_object* v_x_1616_, lean_object* v___y_1617_){
_start:
{
uint32_t v_op_boxed_1618_; uint64_t v_flags_boxed_1619_; lean_object* v_res_1620_; 
v_op_boxed_1618_ = lean_unbox_uint32(v_op_1610_);
lean_dec(v_op_1610_);
v_flags_boxed_1619_ = lean_unbox_uint64(v_flags_1611_);
lean_dec_ref(v_flags_1611_);
v_res_1620_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9(v_failurePrefix_1609_, v_op_boxed_1618_, v_flags_boxed_1619_, v_payload_1612_, v___f_1613_, v___f_1614_, v___f_1615_, v_x_1616_);
lean_dec_ref(v_failurePrefix_1609_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(lean_object* v_context_1621_, uint32_t v_op_1622_, uint64_t v_flags_1623_, lean_object* v_payload_1624_, lean_object* v_failurePrefix_1625_){
_start:
{
lean_object* v___f_1627_; lean_object* v___f_1628_; lean_object* v___f_1629_; lean_object* v___f_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___f_1633_; lean_object* v___f_1634_; lean_object* v___x_1635_; uint8_t v___x_1636_; lean_object* v_val_1638_; lean_object* v___x_1641_; 
v___f_1627_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1627_, 0, v_context_1621_);
v___f_1628_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1628_, 0, v___f_1627_);
v___f_1629_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1629_, 0, v___f_1628_);
lean_inc_ref(v_failurePrefix_1625_);
v___f_1630_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1630_, 0, v_failurePrefix_1625_);
v___x_1631_ = lean_box_uint32(v_op_1622_);
v___x_1632_ = lean_box_uint64(v_flags_1623_);
lean_inc_ref(v___f_1629_);
v___f_1633_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1633_, 0, v_failurePrefix_1625_);
lean_closure_set(v___f_1633_, 1, v___x_1631_);
lean_closure_set(v___f_1633_, 2, v___x_1632_);
lean_closure_set(v___f_1633_, 3, v_payload_1624_);
lean_closure_set(v___f_1633_, 4, v___f_1630_);
lean_closure_set(v___f_1633_, 5, v___f_1629_);
lean_closure_set(v___f_1633_, 6, v___f_1629_);
v___f_1634_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1634_, 0, v___f_1633_);
v___x_1635_ = lean_unsigned_to_nat(0u);
v___x_1636_ = 0;
v___x_1641_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1641_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1641_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 1);
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
v_val_1638_ = v___x_1647_;
goto v___jp_1637_;
}
}
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1657_; 
v_a_1650_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1652_ = v___x_1641_;
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1641_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
lean_ctor_set_tag(v___x_1652_, 0);
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
v_val_1638_ = v___x_1655_;
goto v___jp_1637_;
}
}
}
v___jp_1637_:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1639_, 0, v_val_1638_);
v___x_1640_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1635_, v___x_1636_, v___x_1639_, v___f_1634_);
return v___x_1640_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___boxed(lean_object* v_context_1658_, lean_object* v_op_1659_, lean_object* v_flags_1660_, lean_object* v_payload_1661_, lean_object* v_failurePrefix_1662_, lean_object* v_a_1663_){
_start:
{
uint32_t v_op_boxed_1664_; uint64_t v_flags_boxed_1665_; lean_object* v_res_1666_; 
v_op_boxed_1664_ = lean_unbox_uint32(v_op_1659_);
lean_dec(v_op_1659_);
v_flags_boxed_1665_ = lean_unbox_uint64(v_flags_1660_);
lean_dec_ref(v_flags_1660_);
v_res_1666_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v_context_1658_, v_op_boxed_1664_, v_flags_boxed_1665_, v_payload_1661_, v_failurePrefix_1662_);
return v_res_1666_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1667_; uint8_t v___x_1668_; uint64_t v___x_1669_; 
v___x_1667_ = 8ULL;
v___x_1668_ = 0;
v___x_1669_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(v___x_1668_, v___x_1667_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(lean_object* v_o_1670_, lean_object* v_name_1671_, lean_object* v_args_1672_){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; uint32_t v___x_1679_; uint64_t v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1674_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1675_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1675_, 0, v_o_1670_);
lean_ctor_set(v___x_1675_, 1, v___x_1674_);
lean_inc_ref(v_name_1671_);
v___x_1676_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1676_, 0, v_name_1671_);
v___x_1677_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0));
v___x_1678_ = lean_string_append(v___x_1677_, v_name_1671_);
lean_dec_ref(v_name_1671_);
v___x_1679_ = 205;
v___x_1680_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0);
v___x_1681_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1681_, 0, v_args_1672_);
v___x_1682_ = lean_unsigned_to_nat(3u);
v___x_1683_ = lean_mk_empty_array_with_capacity(v___x_1682_);
v___x_1684_ = lean_array_push(v___x_1683_, v___x_1675_);
v___x_1685_ = lean_array_push(v___x_1684_, v___x_1676_);
v___x_1686_ = lean_array_push(v___x_1685_, v___x_1681_);
v___x_1687_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1686_);
v___x_1688_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v___x_1678_, v___x_1679_, v___x_1680_, v___x_1687_, v___x_1674_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___boxed(lean_object* v_o_1689_, lean_object* v_name_1690_, lean_object* v_args_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_o_1689_, v_name_1690_, v_args_1691_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes(lean_object* v_self_1695_){
_start:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1697_ = ((lean_object*)(l_Lasm_JS_Web_Blob_bytes___closed__0));
v___x_1698_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1699_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_self_1695_, v___x_1697_, v___x_1698_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes___boxed(lean_object* v_self_1700_, lean_object* v_a_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Lasm_JS_Web_Blob_bytes(v_self_1700_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_cast_x3f(lean_object* v_v_1709_){
_start:
{
lean_object* v___f_1711_; lean_object* v___x_1712_; 
v___f_1711_ = ((lean_object*)(l_Lasm_JS_Web_File_cast_x3f___closed__2));
lean_inc(v_v_1709_);
v___x_1712_ = l_Lasm_JS_Web_Support_isInstance(v___f_1711_, v_v_1709_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1726_; 
v_a_1713_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1715_ = v___x_1712_;
v_isShared_1716_ = v_isSharedCheck_1726_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1712_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1726_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
uint8_t v___x_1717_; 
v___x_1717_ = lean_unbox(v_a_1713_);
lean_dec(v_a_1713_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; lean_object* v___x_1720_; 
lean_dec(v_v_1709_);
v___x_1718_ = lean_box(0);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 0, v___x_1718_);
v___x_1720_ = v___x_1715_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1718_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
else
{
lean_object* v___x_1722_; lean_object* v___x_1724_; 
v___x_1722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1722_, 0, v_v_1709_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 0, v___x_1722_);
v___x_1724_ = v___x_1715_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1722_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
}
else
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1734_; 
lean_dec(v_v_1709_);
v_a_1727_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1729_ = v___x_1712_;
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v___x_1712_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1732_; 
if (v_isShared_1730_ == 0)
{
v___x_1732_ = v___x_1729_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_a_1727_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_cast_x3f___boxed(lean_object* v_v_1735_, lean_object* v_a_1736_){
_start:
{
lean_object* v_res_1737_; 
v_res_1737_ = l_Lasm_JS_Web_File_cast_x3f(v_v_1735_);
return v_res_1737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(lean_object* v_x_1738_){
_start:
{
if (lean_obj_tag(v_x_1738_) == 0)
{
lean_object* v___x_1739_; 
v___x_1739_ = lean_box(0);
return v___x_1739_;
}
else
{
lean_object* v_val_1740_; lean_object* v_type_1741_; lean_object* v_endings_1742_; lean_object* v_lastModified_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v_val_1740_ = lean_ctor_get(v_x_1738_, 0);
lean_inc(v_val_1740_);
lean_dec_ref_known(v_x_1738_, 1);
v_type_1741_ = lean_ctor_get(v_val_1740_, 0);
lean_inc(v_type_1741_);
v_endings_1742_ = lean_ctor_get(v_val_1740_, 1);
lean_inc(v_endings_1742_);
v_lastModified_1743_ = lean_ctor_get(v_val_1740_, 2);
lean_inc(v_lastModified_1743_);
lean_dec(v_val_1740_);
v___x_1744_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_1745_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_1741_);
v___x_1746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1746_, 0, v___x_1744_);
lean_ctor_set(v___x_1746_, 1, v___x_1745_);
v___x_1747_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_1748_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_endings_1742_);
lean_dec(v_endings_1742_);
v___x_1749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1747_);
lean_ctor_set(v___x_1749_, 1, v___x_1748_);
v___x_1750_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_1751_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_lastModified_1743_);
v___x_1752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1750_);
lean_ctor_set(v___x_1752_, 1, v___x_1751_);
v___x_1753_ = lean_unsigned_to_nat(3u);
v___x_1754_ = lean_mk_empty_array_with_capacity(v___x_1753_);
v___x_1755_ = lean_array_push(v___x_1754_, v___x_1746_);
v___x_1756_ = lean_array_push(v___x_1755_, v___x_1749_);
v___x_1757_ = lean_array_push(v___x_1756_, v___x_1752_);
v___x_1758_ = l_Lasm_JS_Web_Support_fields(v___x_1757_);
lean_dec_ref(v___x_1757_);
return v___x_1758_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(lean_object* v_context_1759_, lean_object* v_d_1760_){
_start:
{
lean_object* v___y_1763_; lean_object* v___y_1764_; 
if (lean_obj_tag(v_d_1760_) == 9)
{
lean_object* v_value_1768_; lean_object* v___x_1769_; 
v_value_1768_ = lean_ctor_get(v_d_1760_, 0);
lean_inc(v_value_1768_);
lean_dec_ref_known(v_d_1760_, 2);
v___x_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1769_, 0, v_value_1768_);
return v___x_1769_;
}
else
{
lean_object* v___x_1770_; lean_object* v_received_1772_; 
v___x_1770_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
if (lean_obj_tag(v_d_1760_) == 9)
{
lean_object* v_value_1786_; lean_object* v_description_1787_; uint8_t v___x_1788_; 
v_value_1786_ = lean_ctor_get(v_d_1760_, 0);
v_description_1787_ = lean_ctor_get(v_d_1760_, 1);
v___x_1788_ = lean_string_dec_eq(v_description_1787_, v___x_1770_);
if (v___x_1788_ == 0)
{
goto v___jp_1784_;
}
else
{
uint32_t v___x_1789_; uint64_t v___x_1790_; lean_object* v___x_1791_; uint32_t v___x_1792_; lean_object* v___x_1793_; 
lean_inc_n(v_value_1786_, 2);
lean_dec_ref_known(v_d_1760_, 2);
v___x_1789_ = 206;
v___x_1790_ = 0ULL;
v___x_1791_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1791_, 0, v_value_1786_);
lean_ctor_set(v___x_1791_, 1, v___x_1770_);
v___x_1792_ = lasm_js_value_handle(v_value_1786_);
lean_dec(v_value_1786_);
v___x_1793_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1789_, v___x_1790_, v___x_1791_, v___x_1792_);
lean_dec_ref_known(v___x_1791_, 2);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; uint8_t v___x_1795_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1794_);
lean_dec_ref_known(v___x_1793_, 1);
v___x_1795_ = lean_string_validate_utf8(v_a_1794_);
if (v___x_1795_ == 0)
{
lean_object* v___x_1796_; lean_object* v___x_1797_; 
lean_dec(v_a_1794_);
v___x_1796_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_1797_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1796_);
v_received_1772_ = v___x_1797_;
goto v___jp_1771_;
}
else
{
lean_object* v___x_1798_; 
v___x_1798_ = lean_string_from_utf8_unchecked(v_a_1794_);
v_received_1772_ = v___x_1798_;
goto v___jp_1771_;
}
}
else
{
lean_object* v___x_1799_; 
lean_dec_ref_known(v___x_1793_, 1);
v___x_1799_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v_received_1772_ = v___x_1799_;
goto v___jp_1771_;
}
}
}
else
{
goto v___jp_1784_;
}
v___jp_1771_:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; uint8_t v___x_1782_; 
v___x_1773_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1774_ = lean_string_append(v___x_1773_, v_context_1759_);
v___x_1775_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_1776_ = lean_string_append(v___x_1774_, v___x_1775_);
v___x_1777_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSFile___closed__0));
v___x_1778_ = lean_string_append(v___x_1776_, v___x_1777_);
v___x_1779_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_1780_ = lean_string_append(v___x_1778_, v___x_1779_);
v___x_1781_ = lean_string_append(v___x_1780_, v_received_1772_);
lean_dec_ref(v_received_1772_);
v___x_1782_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4);
if (v___x_1782_ == 0)
{
lean_object* v___x_1783_; 
v___x_1783_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5));
v___y_1763_ = v___x_1781_;
v___y_1764_ = v___x_1783_;
goto v___jp_1762_;
}
else
{
v___y_1763_ = v___x_1781_;
v___y_1764_ = v___x_1770_;
goto v___jp_1762_;
}
}
v___jp_1784_:
{
lean_object* v___x_1785_; 
v___x_1785_ = l_Lasm_JS_Data_describe(v_d_1760_);
v_received_1772_ = v___x_1785_;
goto v___jp_1771_;
}
}
v___jp_1762_:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1765_ = lean_string_append(v___y_1763_, v___y_1764_);
v___x_1766_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1765_);
v___x_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
return v___x_1767_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1___boxed(lean_object* v_context_1800_, lean_object* v_d_1801_, lean_object* v_a_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(v_context_1800_, v_d_1801_);
lean_dec_ref(v_context_1800_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(lean_object* v_b_1804_, lean_object* v_args_1805_, uint8_t v_await_1806_){
_start:
{
uint64_t v___y_1809_; uint64_t v___y_1810_; uint64_t v___x_1853_; uint64_t v___y_1855_; 
v___x_1853_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1806_ == 0)
{
uint64_t v___x_1860_; 
v___x_1860_ = 0ULL;
v___y_1855_ = v___x_1860_;
goto v___jp_1854_;
}
else
{
uint64_t v___x_1861_; 
v___x_1861_ = 2ULL;
v___y_1855_ = v___x_1861_;
goto v___jp_1854_;
}
v___jp_1808_:
{
uint64_t v_flags_1811_; uint32_t v___x_1812_; lean_object* v___x_1813_; uint32_t v___x_1814_; lean_object* v___x_1815_; 
v_flags_1811_ = lean_uint64_lor(v___y_1809_, v___y_1810_);
v___x_1812_ = 214;
v___x_1813_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1804_, v_args_1805_);
v___x_1814_ = 0;
v___x_1815_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1812_, v_flags_1811_, v___x_1813_, v___x_1814_);
lean_dec(v___x_1813_);
if (lean_obj_tag(v___x_1815_) == 0)
{
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_a_1816_; lean_object* v___x_1817_; 
v_a_1816_ = lean_ctor_get(v___x_1815_, 0);
lean_inc(v_a_1816_);
lean_dec_ref_known(v___x_1815_, 1);
v___x_1817_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1816_);
lean_dec(v_a_1816_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
lean_inc(v_a_1818_);
lean_dec_ref_known(v___x_1817_, 1);
v___x_1819_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1804_);
v___x_1820_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(v___x_1819_, v_a_1818_);
lean_dec_ref(v___x_1819_);
return v___x_1820_;
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
v_a_1821_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1817_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1817_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
v_a_1829_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1815_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1815_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set_tag(v___x_1831_, 1);
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1852_; 
v_a_1837_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1839_ = v___x_1815_;
v_isShared_1840_ = v_isSharedCheck_1852_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1815_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1852_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1850_; 
v___x_1841_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1842_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1804_);
v___x_1843_ = lean_string_append(v___x_1841_, v___x_1842_);
lean_dec_ref(v___x_1842_);
v___x_1844_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0));
v___x_1845_ = lean_string_append(v___x_1843_, v___x_1844_);
v___x_1846_ = lean_io_error_to_string(v_a_1837_);
v___x_1847_ = lean_string_append(v___x_1845_, v___x_1846_);
lean_dec_ref(v___x_1846_);
v___x_1848_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v___x_1848_);
v___x_1850_ = v___x_1839_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
v___jp_1854_:
{
uint8_t v_construct_1856_; uint64_t v___x_1857_; 
v_construct_1856_ = lean_ctor_get_uint8(v_b_1804_, sizeof(void*)*4);
v___x_1857_ = lean_uint64_lor(v___x_1853_, v___y_1855_);
if (v_construct_1856_ == 0)
{
uint64_t v___x_1858_; 
v___x_1858_ = 0ULL;
v___y_1809_ = v___x_1857_;
v___y_1810_ = v___x_1858_;
goto v___jp_1808_;
}
else
{
uint64_t v___x_1859_; 
v___x_1859_ = 4ULL;
v___y_1809_ = v___x_1857_;
v___y_1810_ = v___x_1859_;
goto v___jp_1808_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1___boxed(lean_object* v_b_1862_, lean_object* v_args_1863_, lean_object* v_await_1864_, lean_object* v_a_1865_){
_start:
{
uint8_t v_await_boxed_1866_; lean_object* v_res_1867_; 
v_await_boxed_1866_ = lean_unbox(v_await_1864_);
v_res_1867_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(v_b_1862_, v_args_1863_, v_await_boxed_1866_);
lean_dec_ref(v_b_1862_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new(lean_object* v_fileBits_1875_, lean_object* v_fileName_1876_, lean_object* v_options_1877_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; size_t v_sz_1881_; size_t v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; uint8_t v___x_1892_; lean_object* v___x_1893_; 
v___x_1879_ = lean_unsigned_to_nat(3u);
v___x_1880_ = ((lean_object*)(l_Lasm_JS_Web_File_new___closed__1));
v_sz_1881_ = lean_array_size(v_fileBits_1875_);
v___x_1882_ = ((size_t)0ULL);
v___x_1883_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_1881_, v___x_1882_, v_fileBits_1875_);
v___x_1884_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1883_);
v___x_1885_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1885_, 0, v_fileName_1876_);
v___x_1886_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(v_options_1877_);
v___x_1887_ = lean_mk_empty_array_with_capacity(v___x_1879_);
v___x_1888_ = lean_array_push(v___x_1887_, v___x_1884_);
v___x_1889_ = lean_array_push(v___x_1888_, v___x_1885_);
v___x_1890_ = lean_array_push(v___x_1889_, v___x_1886_);
v___x_1891_ = l_Lasm_JS_Web_Support_args(v___x_1890_);
v___x_1892_ = 0;
v___x_1893_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(v___x_1880_, v___x_1891_, v___x_1892_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new___boxed(lean_object* v_fileBits_1894_, lean_object* v_fileName_1895_, lean_object* v_options_1896_, lean_object* v_a_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_Lasm_JS_Web_File_new(v_fileBits_1894_, v_fileName_1895_, v_options_1896_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name(lean_object* v_self_1900_){
_start:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = ((lean_object*)(l_Lasm_JS_Web_File_name___closed__0));
v___x_1903_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1900_, v___x_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name___boxed(lean_object* v_self_1904_, lean_object* v_a_1905_){
_start:
{
lean_object* v_res_1906_; 
v_res_1906_ = l_Lasm_JS_Web_File_name(v_self_1904_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(lean_object* v_context_1911_, lean_object* v_d_1912_){
_start:
{
lean_object* v___y_1915_; lean_object* v___y_1916_; lean_object* v___y_1921_; lean_object* v_received_1922_; lean_object* v___y_1941_; lean_object* v_a_1944_; 
switch(lean_obj_tag(v_d_1912_))
{
case 3:
{
double v_n_1968_; lean_object* v___x_1969_; 
v_n_1968_ = lean_ctor_get_float(v_d_1912_, 0);
v___x_1969_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1968_);
if (lean_obj_tag(v___x_1969_) == 0)
{
lean_object* v___x_1970_; 
v___x_1970_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__3));
v_a_1944_ = v___x_1970_;
goto v___jp_1943_;
}
else
{
lean_object* v_val_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1978_; 
lean_dec_ref_known(v_d_1912_, 0);
v_val_1971_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_1978_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1973_ = v___x_1969_;
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_val_1971_);
lean_dec(v___x_1969_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1976_; 
if (v_isShared_1974_ == 0)
{
lean_ctor_set_tag(v___x_1973_, 0);
v___x_1976_ = v___x_1973_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_val_1971_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
}
case 5:
{
lean_object* v_i_1979_; lean_object* v___x_1980_; 
v_i_1979_ = lean_ctor_get(v_d_1912_, 0);
lean_inc(v_i_1979_);
lean_dec_ref_known(v_d_1912_, 1);
v___x_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1980_, 0, v_i_1979_);
return v___x_1980_;
}
default: 
{
lean_object* v___x_1981_; 
v___x_1981_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v_a_1944_ = v___x_1981_;
goto v___jp_1943_;
}
}
v___jp_1914_:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1917_ = lean_string_append(v___y_1915_, v___y_1916_);
lean_dec_ref(v___y_1916_);
v___x_1918_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1917_);
v___x_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1918_);
return v___x_1919_;
}
v___jp_1920_:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; uint8_t v___x_1934_; 
v___x_1923_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1924_ = lean_string_append(v___x_1923_, v_context_1911_);
v___x_1925_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_1926_ = lean_string_append(v___x_1924_, v___x_1925_);
v___x_1927_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__0));
v___x_1928_ = lean_string_append(v___x_1926_, v___x_1927_);
v___x_1929_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_1930_ = lean_string_append(v___x_1928_, v___x_1929_);
v___x_1931_ = lean_string_append(v___x_1930_, v_received_1922_);
lean_dec_ref(v_received_1922_);
v___x_1932_ = lean_string_utf8_byte_size(v___y_1921_);
v___x_1933_ = lean_unsigned_to_nat(0u);
v___x_1934_ = lean_nat_dec_eq(v___x_1932_, v___x_1933_);
if (v___x_1934_ == 0)
{
lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1935_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__1));
v___x_1936_ = lean_string_append(v___x_1935_, v___y_1921_);
v___x_1937_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__2));
v___x_1938_ = lean_string_append(v___x_1936_, v___x_1937_);
v___y_1915_ = v___x_1931_;
v___y_1916_ = v___x_1938_;
goto v___jp_1914_;
}
else
{
lean_object* v___x_1939_; 
v___x_1939_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___y_1915_ = v___x_1931_;
v___y_1916_ = v___x_1939_;
goto v___jp_1914_;
}
}
v___jp_1940_:
{
lean_object* v___x_1942_; 
v___x_1942_ = l_Lasm_JS_Data_describe(v_d_1912_);
v___y_1921_ = v___y_1941_;
v_received_1922_ = v___x_1942_;
goto v___jp_1920_;
}
v___jp_1943_:
{
if (lean_obj_tag(v_d_1912_) == 9)
{
lean_object* v_value_1945_; lean_object* v_description_1946_; lean_object* v___x_1947_; uint8_t v___x_1948_; 
v_value_1945_ = lean_ctor_get(v_d_1912_, 0);
v_description_1946_ = lean_ctor_get(v_d_1912_, 1);
v___x_1947_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1948_ = lean_string_dec_eq(v_description_1946_, v___x_1947_);
if (v___x_1948_ == 0)
{
v___y_1941_ = v_a_1944_;
goto v___jp_1940_;
}
else
{
lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1965_; 
lean_inc(v_value_1945_);
v_isSharedCheck_1965_ = !lean_is_exclusive(v_d_1912_);
if (v_isSharedCheck_1965_ == 0)
{
lean_object* v_unused_1966_; lean_object* v_unused_1967_; 
v_unused_1966_ = lean_ctor_get(v_d_1912_, 1);
lean_dec(v_unused_1966_);
v_unused_1967_ = lean_ctor_get(v_d_1912_, 0);
lean_dec(v_unused_1967_);
v___x_1950_ = v_d_1912_;
v_isShared_1951_ = v_isSharedCheck_1965_;
goto v_resetjp_1949_;
}
else
{
lean_dec(v_d_1912_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1965_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
uint32_t v___x_1952_; uint64_t v___x_1953_; lean_object* v___x_1955_; 
v___x_1952_ = 206;
v___x_1953_ = 0ULL;
lean_inc(v_value_1945_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 1, v___x_1947_);
v___x_1955_ = v___x_1950_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_value_1945_);
lean_ctor_set(v_reuseFailAlloc_1964_, 1, v___x_1947_);
v___x_1955_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
uint32_t v___x_1956_; lean_object* v___x_1957_; 
v___x_1956_ = lasm_js_value_handle(v_value_1945_);
lean_dec(v_value_1945_);
v___x_1957_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1952_, v___x_1953_, v___x_1955_, v___x_1956_);
lean_dec_ref(v___x_1955_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; uint8_t v___x_1959_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
v___x_1959_ = lean_string_validate_utf8(v_a_1958_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
lean_dec(v_a_1958_);
v___x_1960_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_1961_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1960_);
v___y_1921_ = v_a_1944_;
v_received_1922_ = v___x_1961_;
goto v___jp_1920_;
}
else
{
lean_object* v___x_1962_; 
v___x_1962_ = lean_string_from_utf8_unchecked(v_a_1958_);
v___y_1921_ = v_a_1944_;
v_received_1922_ = v___x_1962_;
goto v___jp_1920_;
}
}
else
{
lean_object* v___x_1963_; 
lean_dec_ref_known(v___x_1957_, 1);
v___x_1963_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v___y_1921_ = v_a_1944_;
v_received_1922_ = v___x_1963_;
goto v___jp_1920_;
}
}
}
}
}
else
{
v___y_1941_ = v_a_1944_;
goto v___jp_1940_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1982_, lean_object* v_d_1983_, lean_object* v_a_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(v_context_1982_, v_d_1983_);
lean_dec_ref(v_context_1982_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(lean_object* v_context_1986_, lean_object* v_bytes_1987_){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1987_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1991_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v___x_1991_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(v_context_1986_, v_a_1990_);
return v___x_1991_;
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
v_a_1992_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1994_ = v___x_1989_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1989_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_a_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0___boxed(lean_object* v_context_2000_, lean_object* v_bytes_2001_, lean_object* v_a_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(v_context_2000_, v_bytes_2001_);
lean_dec_ref(v_bytes_2001_);
lean_dec_ref(v_context_2000_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(lean_object* v_o_2005_, lean_object* v_key_2006_){
_start:
{
lean_object* v_k_2008_; lean_object* v___x_2009_; 
v_k_2008_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2008_, 0, v_key_2006_);
v___x_2009_ = l_Lasm_JS_Wire_encodeIO(v_k_2008_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; uint32_t v___x_2011_; uint32_t v___x_2012_; uint64_t v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2010_);
lean_dec_ref_known(v___x_2009_, 1);
v___x_2011_ = 203;
v___x_2012_ = lasm_js_value_handle(v_o_2005_);
v___x_2013_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
v___x_2014_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_2015_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2015_, 0, v_o_2005_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = lean_unsigned_to_nat(2u);
v___x_2017_ = lean_mk_empty_array_with_capacity(v___x_2016_);
lean_inc_ref(v_k_2008_);
v___x_2018_ = lean_array_push(v___x_2017_, v_k_2008_);
v___x_2019_ = lean_array_push(v___x_2018_, v___x_2015_);
v___x_2020_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
v___x_2021_ = lasm_js_call(v___x_2011_, v___x_2012_, v___x_2013_, v_a_2010_, v___x_2020_);
lean_dec_ref_known(v___x_2020_, 1);
lean_dec(v_a_2010_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2022_);
lean_dec_ref_known(v___x_2021_, 1);
v___x_2023_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___closed__0));
v___x_2024_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2008_);
v___x_2025_ = lean_string_append(v___x_2023_, v___x_2024_);
lean_dec_ref(v___x_2024_);
v___x_2026_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(v___x_2025_, v_a_2022_);
lean_dec(v_a_2022_);
lean_dec_ref(v___x_2025_);
return v___x_2026_;
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
lean_dec_ref_known(v_k_2008_, 1);
v_a_2027_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___x_2021_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v___x_2021_);
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
else
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
lean_dec_ref_known(v_k_2008_, 1);
lean_dec(v_o_2005_);
v_a_2035_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2037_ = v___x_2009_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_2009_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2035_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___boxed(lean_object* v_o_2043_, lean_object* v_key_2044_, lean_object* v_a_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_o_2043_, v_key_2044_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified(lean_object* v_self_2047_){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_2050_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_2047_, v___x_2049_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified___boxed(lean_object* v_self_2051_, lean_object* v_a_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Lasm_JS_Web_File_lastModified(v_self_2051_);
return v_res_2053_;
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
