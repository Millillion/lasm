// Lean compiler output
// Module: Lasm.JS.Node.Buffer
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.File
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
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(uint8_t, uint64_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
static const lean_string_object l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSlowBuffer___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSSlowBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSSlowBuffer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSSlowBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSSlowBuffer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSSlowBuffer = (const lean_object*)&l_Lasm_JS_Node_instToJSSlowBuffer___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSSlowBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSSlowBuffer___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSSlowBuffer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Node.SlowBuffer"};
static const lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSSlowBuffer___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSSlowBuffer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSSlowBuffer___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSSlowBuffer___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSSlowBuffer___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer = (const lean_object*)&l_Lasm_JS_Node_instFromJSSlowBuffer___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.DOMStringOrUint8Array"};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSLongLongOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSLongLongOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSLongLongOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.LongLongOrDOMString"};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "node:buffer"};
static const lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "SlowBuffer"};
static const lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_SlowBuffer_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "call"};
static const lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_compare___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Buffer.prototype.compare"};
static const lean_object* l_Lasm_JS_Node_Buffer_compare___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_copy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Buffer.prototype.copy"};
static const lean_object* l_Lasm_JS_Node_Buffer_copy___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_copy___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_copy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_copy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_entries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Buffer.prototype.entries"};
static const lean_object* l_Lasm_JS_Node_Buffer_entries___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_entries___closed__0_value;
static const lean_array_object l_Lasm_JS_Node_Buffer_entries___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_Buffer_entries___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_entries___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_Buffer_entries___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_Buffer_entries___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_entries(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_entries___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_equals___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Buffer.prototype.equals"};
static const lean_object* l_Lasm_JS_Node_Buffer_equals___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_equals___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_fill___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Buffer.prototype.fill"};
static const lean_object* l_Lasm_JS_Node_Buffer_fill___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_fill___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fill(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fill___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_includes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Buffer.prototype.includes"};
static const lean_object* l_Lasm_JS_Node_Buffer_includes___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_includes___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_includes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_includes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_indexOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Buffer.prototype.indexOf"};
static const lean_object* l_Lasm_JS_Node_Buffer_indexOf___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_indexOf___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_indexOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_indexOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_keys___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Buffer.prototype.keys"};
static const lean_object* l_Lasm_JS_Node_Buffer_keys___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_keys___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_keys(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_keys___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_lastIndexOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Buffer.prototype.lastIndexOf"};
static const lean_object* l_Lasm_JS_Node_Buffer_lastIndexOf___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_lastIndexOf___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_lastIndexOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_lastIndexOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readBigInt64BE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Buffer.prototype.readBigInt64BE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readBigInt64BE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readBigInt64BE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigInt64BE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigInt64BE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readBigInt64LE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Buffer.prototype.readBigInt64LE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readBigInt64LE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readBigInt64LE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigInt64LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigInt64LE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readBigUInt64BE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Buffer.prototype.readBigUInt64BE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64BE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readBigUInt64BE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64BE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64BE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readBigUInt64LE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Buffer.prototype.readBigUInt64LE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64LE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readBigUInt64LE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64LE___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readDoubleBE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Buffer.prototype.readDoubleBE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readDoubleBE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readDoubleBE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readDoubleBE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readDoubleBE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readDoubleLE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Buffer.prototype.readDoubleLE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readDoubleLE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readDoubleLE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readDoubleLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readDoubleLE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readFloatBE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Buffer.prototype.readFloatBE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readFloatBE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readFloatBE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readFloatBE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readFloatBE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readFloatLE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Buffer.prototype.readFloatLE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readFloatLE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readFloatLE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readFloatLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readFloatLE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readInt8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Buffer.prototype.readInt8"};
static const lean_object* l_Lasm_JS_Node_Buffer_readInt8___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readInt8___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readInt16BE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Buffer.prototype.readInt16BE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readInt16BE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readInt16BE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt16BE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt16BE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readInt16LE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Buffer.prototype.readInt16LE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readInt16LE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readInt16LE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt16LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt16LE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readInt32BE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Buffer.prototype.readInt32BE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readInt32BE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readInt32BE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt32BE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt32BE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readInt32LE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Buffer.prototype.readInt32LE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readInt32LE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readInt32LE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt32LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt32LE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readIntBE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Buffer.prototype.readIntBE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readIntBE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readIntBE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readIntBE(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readIntBE___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readIntLE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Buffer.prototype.readIntLE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readIntLE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readIntLE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readIntLE(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readIntLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readUInt8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Buffer.prototype.readUInt8"};
static const lean_object* l_Lasm_JS_Node_Buffer_readUInt8___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readUInt8___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readUInt16BE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Buffer.prototype.readUInt16BE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readUInt16BE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readUInt16BE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt16BE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt16BE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readUInt16LE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Buffer.prototype.readUInt16LE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readUInt16LE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readUInt16LE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt16LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt16LE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readUInt32BE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Buffer.prototype.readUInt32BE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readUInt32BE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readUInt32BE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt32BE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt32BE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readUInt32LE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Buffer.prototype.readUInt32LE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readUInt32LE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readUInt32LE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt32LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt32LE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readUIntBE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Buffer.prototype.readUIntBE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readUIntBE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readUIntBE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUIntBE(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUIntBE___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_readUIntLE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Buffer.prototype.readUIntLE"};
static const lean_object* l_Lasm_JS_Node_Buffer_readUIntLE___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_readUIntLE___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUIntLE(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUIntLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_subarray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Buffer.prototype.subarray"};
static const lean_object* l_Lasm_JS_Node_Buffer_subarray___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_subarray___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_subarray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_subarray___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_slice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Buffer.prototype.slice"};
static const lean_object* l_Lasm_JS_Node_Buffer_slice___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_slice___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_slice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_slice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_swap16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Buffer.prototype.swap16"};
static const lean_object* l_Lasm_JS_Node_Buffer_swap16___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_swap16___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap16(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap16___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_swap32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Buffer.prototype.swap32"};
static const lean_object* l_Lasm_JS_Node_Buffer_swap32___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_swap32___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap32(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap32___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_swap64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Buffer.prototype.swap64"};
static const lean_object* l_Lasm_JS_Node_Buffer_swap64___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_swap64___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap64(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap64___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_toJSON___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Buffer.prototype.toJSON"};
static const lean_object* l_Lasm_JS_Node_Buffer_toJSON___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_toJSON___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toJSON(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toJSON___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Buffer.prototype.toString"};
static const lean_object* l_Lasm_JS_Node_Buffer_toString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_values___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Buffer.prototype.values"};
static const lean_object* l_Lasm_JS_Node_Buffer_values___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_values___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_values(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_values___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_alloc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.Buffer.alloc"};
static const lean_object* l_Lasm_JS_Node_Buffer_alloc___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_alloc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Buffer.alloc"};
static const lean_object* l_Lasm_JS_Node_Buffer_alloc___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_alloc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_alloc___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_allocUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Node.Buffer.allocUnsafe"};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafe___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafe___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_allocUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Buffer.allocUnsafe"};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafe___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafe___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_allocUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafe___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafe___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafe___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafe___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafe___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Node.Buffer.allocUnsafeWithAlignment"};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafe___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Node.Buffer.allocUnsafeSlow"};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Buffer.allocUnsafeSlow"};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlow(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlow___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Node.Buffer.allocUnsafeSlowWithAlignment"};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_byteLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.Buffer.byteLength"};
static const lean_object* l_Lasm_JS_Node_Buffer_byteLength___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_byteLength___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Buffer.byteLength"};
static const lean_object* l_Lasm_JS_Node_Buffer_byteLength___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_byteLength___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_byteLength___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_staticCompare___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Node.Buffer.staticCompare"};
static const lean_object* l_Lasm_JS_Node_Buffer_staticCompare___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_staticCompare___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Buffer.compare"};
static const lean_object* l_Lasm_JS_Node_Buffer_staticCompare___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_staticCompare___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_staticCompare___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_concat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.Buffer.concat"};
static const lean_object* l_Lasm_JS_Node_Buffer_concat___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_concat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Buffer.concat"};
static const lean_object* l_Lasm_JS_Node_Buffer_concat___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_concat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_concat___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Node.Buffer.copyBytesFrom"};
static const lean_object* l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Buffer.copyBytesFrom"};
static const lean_object* l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_copyBytesFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_copyBytesFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_from_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_from_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_from___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.Buffer.from"};
static const lean_object* l_Lasm_JS_Node_Buffer_from___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_from___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Buffer.from"};
static const lean_object* l_Lasm_JS_Node_Buffer_from___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_from___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_from___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Node.Buffer.fromWithArrayBuffer"};
static const lean_object* l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithArrayBuffer(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_fromWithBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.Buffer.fromWithBuffer"};
static const lean_object* l_Lasm_JS_Node_Buffer_fromWithBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_fromWithBuffer___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_fromWithBuffer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_fromWithBuffer___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_fromWithBuffer___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_fromWithBuffer___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithBuffer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithBuffer___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_fromWithObject_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_fromWithObject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.Buffer.fromWithObject"};
static const lean_object* l_Lasm_JS_Node_Buffer_fromWithObject___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_fromWithObject___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_fromWithObject___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_fromWithObject___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_fromWithObject___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_fromWithObject___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithObject(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithObject___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_fromWithString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.Buffer.fromWithString"};
static const lean_object* l_Lasm_JS_Node_Buffer_fromWithString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_fromWithString___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_fromWithString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_fromWithString___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_fromWithString___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_fromWithString___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_isBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.Buffer.isBuffer"};
static const lean_object* l_Lasm_JS_Node_Buffer_isBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_isBuffer___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_isBuffer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Buffer.isBuffer"};
static const lean_object* l_Lasm_JS_Node_Buffer_isBuffer___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_isBuffer___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_isBuffer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_isBuffer___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_isBuffer___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_isBuffer___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_isBuffer___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isBuffer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isBuffer___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_isEncoding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.Buffer.isEncoding"};
static const lean_object* l_Lasm_JS_Node_Buffer_isEncoding___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_isEncoding___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Buffer.isEncoding"};
static const lean_object* l_Lasm_JS_Node_Buffer_isEncoding___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_isEncoding___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_isEncoding___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_stringLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.Buffer.stringLength"};
static const lean_object* l_Lasm_JS_Node_Buffer_stringLength___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_stringLength___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_stringLength___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Buffer.stringLength"};
static const lean_object* l_Lasm_JS_Node_Buffer_stringLength___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_stringLength___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_stringLength___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_stringLength___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_stringLength___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_stringLength___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_stringLength___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_stringLength(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_stringLength___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "INSPECT_MAX_BYTES"};
static const lean_object* l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_kMaxLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "kMaxLength"};
static const lean_object* l_Lasm_JS_Node_buffer_kMaxLength___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_kMaxLength___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_kMaxLength___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_kMaxLength___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_buffer_kMaxLength___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_kMaxLength___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_kStringMaxLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "kStringMaxLength"};
static const lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_kStringMaxLength___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_kStringMaxLength___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_atob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.buffer.atob"};
static const lean_object* l_Lasm_JS_Node_buffer_atob___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_atob___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_atob___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "atob"};
static const lean_object* l_Lasm_JS_Node_buffer_atob___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_atob___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_atob___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_atob___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_atob___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_atob___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_atob___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_atob(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_atob___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_btoa___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.buffer.btoa"};
static const lean_object* l_Lasm_JS_Node_buffer_btoa___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_btoa___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_btoa___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "btoa"};
static const lean_object* l_Lasm_JS_Node_buffer_btoa___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_btoa___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_btoa___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_btoa___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_btoa___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_btoa___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_btoa___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_btoa(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_btoa___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_isAscii___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.buffer.isAscii"};
static const lean_object* l_Lasm_JS_Node_buffer_isAscii___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_isAscii___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isAscii"};
static const lean_object* l_Lasm_JS_Node_buffer_isAscii___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_isAscii___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_isAscii___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_isUtf8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.buffer.isUtf8"};
static const lean_object* l_Lasm_JS_Node_buffer_isUtf8___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_isUtf8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isUtf8"};
static const lean_object* l_Lasm_JS_Node_buffer_isUtf8___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_isUtf8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_isUtf8___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_resolveObjectURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Node.buffer.resolveObjectURL"};
static const lean_object* l_Lasm_JS_Node_buffer_resolveObjectURL___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_resolveObjectURL___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_resolveObjectURL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "resolveObjectURL"};
static const lean_object* l_Lasm_JS_Node_buffer_resolveObjectURL___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_resolveObjectURL___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_resolveObjectURL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_resolveObjectURL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_resolveObjectURL___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_resolveObjectURL___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_resolveObjectURL___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_resolveObjectURL(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_resolveObjectURL___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_transcode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Node.buffer.transcode"};
static const lean_object* l_Lasm_JS_Node_buffer_transcode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_transcode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transcode"};
static const lean_object* l_Lasm_JS_Node_buffer_transcode___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_transcode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_transcode___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_isLatin1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.buffer.isLatin1"};
static const lean_object* l_Lasm_JS_Node_buffer_isLatin1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_isLatin1___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_isLatin1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isLatin1"};
static const lean_object* l_Lasm_JS_Node_buffer_isLatin1___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_isLatin1___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_isLatin1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_isLatin1___closed__0_value),((lean_object*)&l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_isLatin1___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_isLatin1___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_isLatin1___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isLatin1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isLatin1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSlowBuffer___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx(lean_object* v_x_22_){
_start:
{
switch(lean_obj_tag(v_x_22_))
{
case 0:
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(0u);
return v___x_23_;
}
case 1:
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(1u);
return v___x_24_;
}
default: 
{
lean_object* v___x_25_; 
v___x_25_ = lean_unsigned_to_nat(2u);
return v___x_25_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___boxed(lean_object* v_x_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx(v_x_26_);
lean_dec_ref(v_x_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(lean_object* v_t_28_, lean_object* v_k_29_){
_start:
{
if (lean_obj_tag(v_t_28_) == 2)
{
lean_object* v_value_30_; lean_object* v___x_31_; 
v_value_30_ = lean_ctor_get(v_t_28_, 0);
lean_inc(v_value_30_);
lean_dec_ref_known(v_t_28_, 1);
v___x_31_ = lean_apply_1(v_k_29_, v_value_30_);
return v___x_31_;
}
else
{
lean_object* v_value_32_; lean_object* v___x_33_; 
v_value_32_ = lean_ctor_get(v_t_28_, 0);
lean_inc_ref(v_value_32_);
lean_dec_ref(v_t_28_);
v___x_33_ = lean_apply_1(v_k_29_, v_value_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(lean_object* v_motive_34_, lean_object* v_ctorIdx_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_k_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_36_, v_k_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___boxed(lean_object* v_motive_40_, lean_object* v_ctorIdx_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_k_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(v_motive_40_, v_ctorIdx_41_, v_t_42_, v_h_43_, v_k_44_);
lean_dec(v_ctorIdx_41_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim___redArg(lean_object* v_t_46_, lean_object* v_domString_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_46_, v_domString_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim(lean_object* v_motive_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_domString_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_50_, v_domString_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim___redArg(lean_object* v_t_54_, lean_object* v_uint8Array_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_54_, v_uint8Array_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_uint8Array_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_58_, v_uint8Array_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim___redArg(lean_object* v_t_62_, lean_object* v_longLong_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_62_, v_longLong_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_longLong_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_66_, v_longLong_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_x_70_){
_start:
{
switch(lean_obj_tag(v_x_70_))
{
case 0:
{
lean_object* v_value_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_78_; 
v_value_71_ = lean_ctor_get(v_x_70_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_78_ == 0)
{
v___x_73_ = v_x_70_;
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_value_71_);
lean_dec(v_x_70_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_76_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set_tag(v___x_73_, 4);
v___x_76_ = v___x_73_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_value_71_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
case 1:
{
lean_object* v_value_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_86_; 
v_value_79_ = lean_ctor_get(v_x_70_, 0);
v_isSharedCheck_86_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_86_ == 0)
{
v___x_81_ = v_x_70_;
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_value_79_);
lean_dec(v_x_70_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_84_; 
if (v_isShared_82_ == 0)
{
lean_ctor_set_tag(v___x_81_, 6);
v___x_84_ = v___x_81_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_value_79_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
default: 
{
lean_object* v_value_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_99_; 
v_value_87_ = lean_ctor_get(v_x_70_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_99_ == 0)
{
v___x_89_ = v_x_70_;
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_value_87_);
lean_dec(v_x_70_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_91_ = lean_nat_abs(v_value_87_);
v___x_92_ = lean_cstr_to_nat("9007199254740991");
v___x_93_ = lean_nat_dec_le(v___x_91_, v___x_92_);
lean_dec(v___x_91_);
if (v___x_93_ == 0)
{
lean_object* v___x_95_; 
if (v_isShared_90_ == 0)
{
lean_ctor_set_tag(v___x_89_, 5);
v___x_95_ = v___x_89_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_value_87_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
else
{
double v___x_97_; lean_object* v___x_98_; 
lean_del_object(v___x_89_);
v___x_97_ = l_Float_ofInt(v_value_87_);
lean_dec(v_value_87_);
v___x_98_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_98_, 0, v___x_97_);
return v___x_98_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v_value_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_107_, 0, v_value_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_111_, 0, v_value_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx(lean_object* v_x_114_){
_start:
{
if (lean_obj_tag(v_x_114_) == 0)
{
lean_object* v___x_115_; 
v___x_115_ = lean_unsigned_to_nat(0u);
return v___x_115_;
}
else
{
lean_object* v___x_116_; 
v___x_116_ = lean_unsigned_to_nat(1u);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___boxed(lean_object* v_x_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx(v_x_117_);
lean_dec_ref(v_x_117_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(lean_object* v_t_119_, lean_object* v_k_120_){
_start:
{
lean_object* v_value_121_; lean_object* v___x_122_; 
v_value_121_ = lean_ctor_get(v_t_119_, 0);
lean_inc_ref(v_value_121_);
lean_dec_ref(v_t_119_);
v___x_122_ = lean_apply_1(v_k_120_, v_value_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(lean_object* v_motive_123_, lean_object* v_ctorIdx_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_k_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_125_, v_k_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___boxed(lean_object* v_motive_129_, lean_object* v_ctorIdx_130_, lean_object* v_t_131_, lean_object* v_h_132_, lean_object* v_k_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(v_motive_129_, v_ctorIdx_130_, v_t_131_, v_h_132_, v_k_133_);
lean_dec(v_ctorIdx_130_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim___redArg(lean_object* v_t_135_, lean_object* v_domString_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_135_, v_domString_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim(lean_object* v_motive_138_, lean_object* v_t_139_, lean_object* v_h_140_, lean_object* v_domString_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_139_, v_domString_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim___redArg(lean_object* v_t_143_, lean_object* v_uint8Array_144_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_143_, v_uint8Array_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim(lean_object* v_motive_146_, lean_object* v_t_147_, lean_object* v_h_148_, lean_object* v_uint8Array_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_147_, v_uint8Array_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0(lean_object* v_x_151_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
lean_object* v_value_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_159_; 
v_value_152_ = lean_ctor_get(v_x_151_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v_x_151_);
if (v_isSharedCheck_159_ == 0)
{
v___x_154_ = v_x_151_;
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_value_152_);
lean_dec(v_x_151_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
lean_ctor_set_tag(v___x_154_, 4);
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_value_152_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
else
{
lean_object* v_value_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
v_value_160_ = lean_ctor_get(v_x_151_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v_x_151_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v_x_151_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_value_160_);
lean_dec(v_x_151_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
lean_ctor_set_tag(v___x_162_, 6);
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_value_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0(lean_object* v_value_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v_value_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0(lean_object* v_value_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_175_, 0, v_value_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0(lean_object* v_x_180_){
_start:
{
switch(lean_obj_tag(v_x_180_))
{
case 4:
{
lean_object* v_s_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_189_; 
v_s_181_ = lean_ctor_get(v_x_180_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v_x_180_);
if (v_isSharedCheck_189_ == 0)
{
v___x_183_ = v_x_180_;
v_isShared_184_ = v_isSharedCheck_189_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_s_181_);
lean_dec(v_x_180_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_189_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
lean_ctor_set_tag(v___x_183_, 0);
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_s_181_);
v___x_186_ = v_reuseFailAlloc_188_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
lean_object* v___x_187_; 
v___x_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
return v___x_187_;
}
}
}
case 6:
{
lean_object* v_b_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_198_; 
v_b_190_ = lean_ctor_get(v_x_180_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v_x_180_);
if (v_isSharedCheck_198_ == 0)
{
v___x_192_ = v_x_180_;
v_isShared_193_ = v_isSharedCheck_198_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_b_190_);
lean_dec(v_x_180_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_198_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
lean_ctor_set_tag(v___x_192_, 1);
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_b_190_);
v___x_195_ = v_reuseFailAlloc_197_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_196_; 
v___x_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
return v___x_196_;
}
}
}
default: 
{
lean_object* v___x_199_; 
lean_dec(v_x_180_);
v___x_199_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
return v___x_199_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(lean_object* v_x_207_){
_start:
{
if (lean_obj_tag(v_x_207_) == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_unsigned_to_nat(0u);
return v___x_208_;
}
else
{
lean_object* v___x_209_; 
v___x_209_ = lean_unsigned_to_nat(1u);
return v___x_209_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___boxed(lean_object* v_x_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(v_x_210_);
lean_dec_ref(v_x_210_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(lean_object* v_t_212_, lean_object* v_k_213_){
_start:
{
if (lean_obj_tag(v_t_212_) == 0)
{
lean_object* v_value_214_; lean_object* v___x_215_; 
v_value_214_ = lean_ctor_get(v_t_212_, 0);
lean_inc(v_value_214_);
lean_dec_ref_known(v_t_212_, 1);
v___x_215_ = lean_apply_1(v_k_213_, v_value_214_);
return v___x_215_;
}
else
{
lean_object* v_value_216_; lean_object* v___x_217_; 
v_value_216_ = lean_ctor_get(v_t_212_, 0);
lean_inc_ref(v_value_216_);
lean_dec_ref_known(v_t_212_, 1);
v___x_217_ = lean_apply_1(v_k_213_, v_value_216_);
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(lean_object* v_motive_218_, lean_object* v_ctorIdx_219_, lean_object* v_t_220_, lean_object* v_h_221_, lean_object* v_k_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_220_, v_k_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___boxed(lean_object* v_motive_224_, lean_object* v_ctorIdx_225_, lean_object* v_t_226_, lean_object* v_h_227_, lean_object* v_k_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(v_motive_224_, v_ctorIdx_225_, v_t_226_, v_h_227_, v_k_228_);
lean_dec(v_ctorIdx_225_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim___redArg(lean_object* v_t_230_, lean_object* v_longLong_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_230_, v_longLong_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim(lean_object* v_motive_233_, lean_object* v_t_234_, lean_object* v_h_235_, lean_object* v_longLong_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_234_, v_longLong_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim___redArg(lean_object* v_t_238_, lean_object* v_domString_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_238_, v_domString_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim(lean_object* v_motive_241_, lean_object* v_t_242_, lean_object* v_h_243_, lean_object* v_domString_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_242_, v_domString_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0(lean_object* v_x_246_){
_start:
{
if (lean_obj_tag(v_x_246_) == 0)
{
lean_object* v_value_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_259_; 
v_value_247_ = lean_ctor_get(v_x_246_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v_x_246_);
if (v_isSharedCheck_259_ == 0)
{
v___x_249_ = v_x_246_;
v_isShared_250_ = v_isSharedCheck_259_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_value_247_);
lean_dec(v_x_246_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_259_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_251_ = lean_nat_abs(v_value_247_);
v___x_252_ = lean_cstr_to_nat("9007199254740991");
v___x_253_ = lean_nat_dec_le(v___x_251_, v___x_252_);
lean_dec(v___x_251_);
if (v___x_253_ == 0)
{
lean_object* v___x_255_; 
if (v_isShared_250_ == 0)
{
lean_ctor_set_tag(v___x_249_, 5);
v___x_255_ = v___x_249_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_value_247_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
else
{
double v___x_257_; lean_object* v___x_258_; 
lean_del_object(v___x_249_);
v___x_257_ = l_Float_ofInt(v_value_247_);
lean_dec(v_value_247_);
v___x_258_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
}
}
else
{
lean_object* v_value_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_267_; 
v_value_260_ = lean_ctor_get(v_x_246_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v_x_246_);
if (v_isSharedCheck_267_ == 0)
{
v___x_262_ = v_x_246_;
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_value_260_);
lean_dec(v_x_246_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_265_; 
if (v_isShared_263_ == 0)
{
lean_ctor_set_tag(v___x_262_, 4);
v___x_265_ = v___x_262_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_value_260_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0(lean_object* v_value_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_271_, 0, v_value_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0(lean_object* v_value_274_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_275_, 0, v_value_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0(lean_object* v_x_283_){
_start:
{
switch(lean_obj_tag(v_x_283_))
{
case 3:
{
double v_n_284_; lean_object* v___x_285_; 
v_n_284_ = lean_ctor_get_float(v_x_283_, 0);
lean_dec_ref_known(v_x_283_, 0);
v___x_285_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_284_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v___x_286_; 
v___x_286_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__1));
return v___x_286_;
}
else
{
lean_object* v_val_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_295_; 
v_val_287_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_295_ == 0)
{
v___x_289_ = v___x_285_;
v_isShared_290_ = v_isSharedCheck_295_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_val_287_);
lean_dec(v___x_285_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_295_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set_tag(v___x_289_, 0);
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_val_287_);
v___x_292_ = v_reuseFailAlloc_294_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v___x_293_; 
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
return v___x_293_;
}
}
}
}
case 4:
{
lean_object* v_s_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_304_; 
v_s_296_ = lean_ctor_get(v_x_283_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_304_ == 0)
{
v___x_298_ = v_x_283_;
v_isShared_299_ = v_isSharedCheck_304_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_s_296_);
lean_dec(v_x_283_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_304_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
lean_ctor_set_tag(v___x_298_, 1);
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_s_296_);
v___x_301_ = v_reuseFailAlloc_303_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; 
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
}
default: 
{
lean_object* v___x_305_; 
lean_dec(v_x_283_);
v___x_305_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
return v___x_305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1(lean_object* v_module_314_, lean_object* v_o_315_, lean_object* v_a_316_){
_start:
{
if (lean_obj_tag(v_a_316_) == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
lean_dec(v_o_315_);
v___x_318_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1___closed__0));
v___x_319_ = lean_string_append(v___x_318_, v_module_314_);
v___x_320_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
v___x_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
else
{
lean_object* v_tail_322_; 
v_tail_322_ = lean_ctor_get(v_a_316_, 1);
if (lean_obj_tag(v_tail_322_) == 0)
{
lean_object* v_head_323_; lean_object* v___x_324_; 
v_head_323_ = lean_ctor_get(v_a_316_, 0);
lean_inc(v_head_323_);
lean_dec_ref_known(v_a_316_, 2);
v___x_324_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_315_, v_head_323_);
return v___x_324_;
}
else
{
lean_object* v_head_325_; lean_object* v___x_326_; 
lean_inc(v_tail_322_);
v_head_325_ = lean_ctor_get(v_a_316_, 0);
lean_inc(v_head_325_);
lean_dec_ref_known(v_a_316_, 2);
v___x_326_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_315_, v_head_325_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v___x_326_, 1);
v_o_315_ = v_a_327_;
v_a_316_ = v_tail_322_;
goto _start;
}
else
{
lean_dec(v_tail_322_);
return v___x_326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1___boxed(lean_object* v_module_329_, lean_object* v_o_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1(v_module_329_, v_o_330_, v_a_331_);
lean_dec_ref(v_module_329_);
return v_res_333_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_334_; uint64_t v___x_335_; 
v___x_334_ = 1;
v___x_335_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(lean_object* v_specifier_337_){
_start:
{
uint32_t v___x_339_; uint32_t v___x_340_; uint64_t v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_339_ = 201;
v___x_340_ = 0;
v___x_341_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__0);
v___x_342_ = lean_string_to_utf8(v_specifier_337_);
v___x_343_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_339_, v___x_340_, v___x_341_, v___x_342_);
lean_dec_ref(v___x_342_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___closed__1));
v___x_346_ = l_String_quote(v_specifier_337_);
v___x_347_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
v___x_348_ = lean_unsigned_to_nat(120u);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = l_Std_Format_pretty(v___x_347_, v___x_348_, v___x_349_, v___x_349_);
v___x_351_ = lean_string_append(v___x_345_, v___x_350_);
lean_dec_ref(v___x_350_);
v___x_352_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_351_, v_a_344_);
lean_dec(v_a_344_);
lean_dec_ref(v___x_351_);
return v___x_352_;
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_dec_ref(v_specifier_337_);
v_a_353_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_343_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_343_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0___boxed(lean_object* v_specifier_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(v_specifier_361_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(lean_object* v_module_364_, lean_object* v_path_365_){
_start:
{
lean_object* v___x_367_; 
lean_inc_ref(v_module_364_);
v___x_367_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(v_module_364_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_369_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_368_);
lean_dec_ref_known(v___x_367_, 1);
v___x_369_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1(v_module_364_, v_a_368_, v_path_365_);
lean_dec_ref(v_module_364_);
return v___x_369_;
}
else
{
lean_dec(v_path_365_);
lean_dec_ref(v_module_364_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0___boxed(lean_object* v_module_370_, lean_object* v_path_371_, lean_object* v_a_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v_module_370_, v_path_371_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___lam__0(lean_object* v___x_374_, lean_object* v___x_375_){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_374_, v___x_375_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___lam__0___boxed(lean_object* v___x_378_, lean_object* v___x_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lasm_JS_Node_SlowBuffer_cast_x3f___lam__0(v___x_378_, v___x_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f(lean_object* v_v_390_){
_start:
{
lean_object* v___f_392_; lean_object* v___x_393_; 
v___f_392_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__3));
lean_inc(v_v_390_);
v___x_393_ = l_Lasm_JS_Web_Support_isInstance(v___f_392_, v_v_390_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_407_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_407_ == 0)
{
v___x_396_ = v___x_393_;
v_isShared_397_ = v_isSharedCheck_407_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_407_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
uint8_t v___x_398_; 
v___x_398_ = lean_unbox(v_a_394_);
lean_dec(v_a_394_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; lean_object* v___x_401_; 
lean_dec(v_v_390_);
v___x_399_ = lean_box(0);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v___x_399_);
v___x_401_ = v___x_396_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_399_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
else
{
lean_object* v___x_403_; lean_object* v___x_405_; 
v___x_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_403_, 0, v_v_390_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v___x_403_);
v___x_405_ = v___x_396_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_403_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
lean_dec(v_v_390_);
v_a_408_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_393_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_393_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SlowBuffer_cast_x3f___boxed(lean_object* v_v_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lasm_JS_Node_SlowBuffer_cast_x3f(v_v_416_);
return v_res_418_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
uint8_t v___x_419_; uint64_t v___x_420_; 
v___x_419_ = 0;
v___x_420_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1(uint8_t v_await_421_, uint64_t v_extra_422_){
_start:
{
uint64_t v___x_423_; uint64_t v___y_425_; 
v___x_423_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0);
if (v_await_421_ == 0)
{
uint64_t v___x_428_; 
v___x_428_ = 0ULL;
v___y_425_ = v___x_428_;
goto v___jp_424_;
}
else
{
uint64_t v___x_429_; 
v___x_429_ = 2ULL;
v___y_425_ = v___x_429_;
goto v___jp_424_;
}
v___jp_424_:
{
uint64_t v___x_426_; uint64_t v___x_427_; 
v___x_426_ = lean_uint64_lor(v___x_423_, v___y_425_);
v___x_427_ = lean_uint64_lor(v___x_426_, v_extra_422_);
return v___x_427_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___boxed(lean_object* v_await_430_, lean_object* v_extra_431_){
_start:
{
uint8_t v_await_boxed_432_; uint64_t v_extra_boxed_433_; uint64_t v_res_434_; lean_object* v_r_435_; 
v_await_boxed_432_ = lean_unbox(v_await_430_);
v_extra_boxed_433_ = lean_unbox_uint64(v_extra_431_);
lean_dec_ref(v_extra_431_);
v_res_434_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1(v_await_boxed_432_, v_extra_boxed_433_);
v_r_435_ = lean_box_uint64(v_res_434_);
return v_r_435_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__0(void){
_start:
{
uint64_t v___x_436_; uint8_t v___x_437_; uint64_t v___x_438_; 
v___x_436_ = 0ULL;
v___x_437_ = 0;
v___x_438_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1(v___x_437_, v___x_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0(lean_object* v_f_440_, lean_object* v_args_441_, lean_object* v_this_442_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; uint64_t v___x_446_; lean_object* v___x_447_; 
v___x_444_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0));
v___x_445_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_445_, 0, v_f_440_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v___x_446_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__0);
v___x_447_ = l_Lasm_JS_Value_invokeRaw(v___x_445_, v_this_442_, v_args_441_, v___x_446_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v_a_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_a_448_ = lean_ctor_get(v___x_447_, 0);
lean_inc(v_a_448_);
lean_dec_ref_known(v___x_447_, 1);
v___x_449_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__1));
v___x_450_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(v___x_449_, v_a_448_);
lean_dec(v_a_448_);
return v___x_450_;
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_a_451_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_447_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_447_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___boxed(lean_object* v_f_459_, lean_object* v_args_460_, lean_object* v_this_461_, lean_object* v_a_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0(v_f_459_, v_args_460_, v_this_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(lean_object* v_module_465_, lean_object* v_path_466_, lean_object* v_self_467_, lean_object* v_args_468_){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_470_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___closed__0));
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = lean_box(0);
v___x_473_ = l_String_splitOnAux(v_path_466_, v___x_470_, v___x_471_, v___x_471_, v___x_471_, v___x_472_);
v___x_474_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v_module_465_, v___x_473_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v___x_476_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_476_, 0, v_self_467_);
v___x_477_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0(v_a_475_, v_args_468_, v___x_476_);
return v___x_477_;
}
else
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_485_; 
lean_dec_ref(v_args_468_);
lean_dec_ref(v_self_467_);
v_a_478_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_485_ == 0)
{
v___x_480_ = v___x_474_;
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_474_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_478_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___boxed(lean_object* v_module_486_, lean_object* v_path_487_, lean_object* v_self_488_, lean_object* v_args_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_module_486_, v_path_487_, v_self_488_, v_args_489_);
lean_dec_ref(v_path_487_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare(lean_object* v_self_493_, lean_object* v_target_494_, lean_object* v_targetStart_495_, lean_object* v_targetEnd_496_, lean_object* v_sourceStart_497_, lean_object* v_sourceEnd_498_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_500_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_501_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_502_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_502_, 0, v_target_494_);
v___x_503_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_targetStart_495_);
v___x_504_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_targetEnd_496_);
v___x_505_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_sourceStart_497_);
v___x_506_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_sourceEnd_498_);
v___x_507_ = lean_unsigned_to_nat(5u);
v___x_508_ = lean_mk_empty_array_with_capacity(v___x_507_);
v___x_509_ = lean_array_push(v___x_508_, v___x_502_);
v___x_510_ = lean_array_push(v___x_509_, v___x_503_);
v___x_511_ = lean_array_push(v___x_510_, v___x_504_);
v___x_512_ = lean_array_push(v___x_511_, v___x_505_);
v___x_513_ = lean_array_push(v___x_512_, v___x_506_);
v___x_514_ = l_Lasm_JS_Web_Support_args(v___x_513_);
v___x_515_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_500_, v___x_501_, v_self_493_, v___x_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare___boxed(lean_object* v_self_516_, lean_object* v_target_517_, lean_object* v_targetStart_518_, lean_object* v_targetEnd_519_, lean_object* v_sourceStart_520_, lean_object* v_sourceEnd_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lasm_JS_Node_Buffer_compare(v_self_516_, v_target_517_, v_targetStart_518_, v_targetEnd_519_, v_sourceStart_520_, v_sourceEnd_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_copy(lean_object* v_self_525_, lean_object* v_target_526_, lean_object* v_targetStart_527_, lean_object* v_sourceStart_528_, lean_object* v_sourceEnd_529_){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_531_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_532_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_copy___closed__0));
v___x_533_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_533_, 0, v_target_526_);
v___x_534_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_targetStart_527_);
v___x_535_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_sourceStart_528_);
v___x_536_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_sourceEnd_529_);
v___x_537_ = lean_unsigned_to_nat(4u);
v___x_538_ = lean_mk_empty_array_with_capacity(v___x_537_);
v___x_539_ = lean_array_push(v___x_538_, v___x_533_);
v___x_540_ = lean_array_push(v___x_539_, v___x_534_);
v___x_541_ = lean_array_push(v___x_540_, v___x_535_);
v___x_542_ = lean_array_push(v___x_541_, v___x_536_);
v___x_543_ = l_Lasm_JS_Web_Support_args(v___x_542_);
v___x_544_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_531_, v___x_532_, v_self_525_, v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_copy___boxed(lean_object* v_self_545_, lean_object* v_target_546_, lean_object* v_targetStart_547_, lean_object* v_sourceStart_548_, lean_object* v_sourceEnd_549_, lean_object* v_a_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lasm_JS_Node_Buffer_copy(v_self_545_, v_target_546_, v_targetStart_547_, v_sourceStart_548_, v_sourceEnd_549_);
return v_res_551_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0_spec__1(uint8_t v_await_552_, uint64_t v_extra_553_){
_start:
{
uint64_t v___x_554_; uint64_t v___y_556_; 
v___x_554_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0);
if (v_await_552_ == 0)
{
uint64_t v___x_559_; 
v___x_559_ = 0ULL;
v___y_556_ = v___x_559_;
goto v___jp_555_;
}
else
{
uint64_t v___x_560_; 
v___x_560_ = 2ULL;
v___y_556_ = v___x_560_;
goto v___jp_555_;
}
v___jp_555_:
{
uint64_t v___x_557_; uint64_t v___x_558_; 
v___x_557_ = lean_uint64_lor(v___x_554_, v___y_556_);
v___x_558_ = lean_uint64_lor(v___x_557_, v_extra_553_);
return v___x_558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0_spec__1___boxed(lean_object* v_await_561_, lean_object* v_extra_562_){
_start:
{
uint8_t v_await_boxed_563_; uint64_t v_extra_boxed_564_; uint64_t v_res_565_; lean_object* v_r_566_; 
v_await_boxed_563_ = lean_unbox(v_await_561_);
v_extra_boxed_564_ = lean_unbox_uint64(v_extra_562_);
lean_dec_ref(v_extra_562_);
v_res_565_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0_spec__1(v_await_boxed_563_, v_extra_boxed_564_);
v_r_566_ = lean_box_uint64(v_res_565_);
return v_r_566_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0___closed__0(void){
_start:
{
uint64_t v___x_567_; uint8_t v___x_568_; uint64_t v___x_569_; 
v___x_567_ = 0ULL;
v___x_568_ = 0;
v___x_569_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0_spec__1(v___x_568_, v___x_567_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0(lean_object* v_f_570_, lean_object* v_args_571_, lean_object* v_this_572_){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; uint64_t v___x_576_; lean_object* v___x_577_; 
v___x_574_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0));
v___x_575_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_575_, 0, v_f_570_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0___closed__0);
v___x_577_ = l_Lasm_JS_Value_invokeRaw(v___x_575_, v_this_572_, v_args_571_, v___x_576_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_578_);
lean_dec(v_a_578_);
return v___x_579_;
}
else
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
v_a_580_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_587_ == 0)
{
v___x_582_ = v___x_577_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_577_);
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
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0___boxed(lean_object* v_f_588_, lean_object* v_args_589_, lean_object* v_this_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0(v_f_588_, v_args_589_, v_this_590_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0(lean_object* v_module_593_, lean_object* v_path_594_, lean_object* v_self_595_, lean_object* v_args_596_){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_598_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___closed__0));
v___x_599_ = lean_unsigned_to_nat(0u);
v___x_600_ = lean_box(0);
v___x_601_ = l_String_splitOnAux(v_path_594_, v___x_598_, v___x_599_, v___x_599_, v___x_599_, v___x_600_);
v___x_602_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v_module_593_, v___x_601_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 1);
v___x_604_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_604_, 0, v_self_595_);
v___x_605_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0_spec__0(v_a_603_, v_args_596_, v___x_604_);
return v___x_605_;
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_dec_ref(v_args_596_);
lean_dec_ref(v_self_595_);
v_a_606_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_602_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_602_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0___boxed(lean_object* v_module_614_, lean_object* v_path_615_, lean_object* v_self_616_, lean_object* v_args_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0(v_module_614_, v_path_615_, v_self_616_, v_args_617_);
lean_dec_ref(v_path_615_);
return v_res_619_;
}
}
static lean_object* _init_l_Lasm_JS_Node_Buffer_entries___closed__2(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_entries___closed__1));
v___x_624_ = l_Lasm_JS_Web_Support_args(v___x_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_entries(lean_object* v_self_625_){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_627_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_628_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_entries___closed__0));
v___x_629_ = lean_obj_once(&l_Lasm_JS_Node_Buffer_entries___closed__2, &l_Lasm_JS_Node_Buffer_entries___closed__2_once, _init_l_Lasm_JS_Node_Buffer_entries___closed__2);
v___x_630_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0(v___x_627_, v___x_628_, v_self_625_, v___x_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_entries___boxed(lean_object* v_self_631_, lean_object* v_a_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Lasm_JS_Node_Buffer_entries(v_self_631_);
return v_res_633_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0(void){
_start:
{
uint64_t v___x_634_; uint8_t v___x_635_; uint64_t v___x_636_; 
v___x_634_ = 0ULL;
v___x_635_ = 0;
v___x_636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__0(v___x_635_, v___x_634_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(lean_object* v_f_637_, lean_object* v_args_638_, lean_object* v_this_639_){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; uint64_t v___x_643_; lean_object* v___x_644_; 
v___x_641_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0));
v___x_642_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_642_, 0, v_f_637_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0);
v___x_644_ = l_Lasm_JS_Value_invokeRaw(v___x_642_, v_this_639_, v_args_638_, v___x_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
v___x_646_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__1));
v___x_647_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1(v___x_646_, v_a_645_);
lean_dec(v_a_645_);
return v___x_647_;
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
v_a_648_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_644_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_644_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
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
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___boxed(lean_object* v_f_656_, lean_object* v_args_657_, lean_object* v_this_658_, lean_object* v_a_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(v_f_656_, v_args_657_, v_this_658_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(lean_object* v_module_661_, lean_object* v_path_662_, lean_object* v_self_663_, lean_object* v_args_664_){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_666_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___closed__0));
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = lean_box(0);
v___x_669_ = l_String_splitOnAux(v_path_662_, v___x_666_, v___x_667_, v___x_667_, v___x_667_, v___x_668_);
v___x_670_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v_module_661_, v___x_669_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v___x_670_, 1);
v___x_672_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_672_, 0, v_self_663_);
v___x_673_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(v_a_671_, v_args_664_, v___x_672_);
return v___x_673_;
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec_ref(v_args_664_);
lean_dec_ref(v_self_663_);
v_a_674_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_670_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_670_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0___boxed(lean_object* v_module_682_, lean_object* v_path_683_, lean_object* v_self_684_, lean_object* v_args_685_, lean_object* v_a_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(v_module_682_, v_path_683_, v_self_684_, v_args_685_);
lean_dec_ref(v_path_683_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals(lean_object* v_self_689_, lean_object* v_otherBuffer_690_){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_692_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_693_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_equals___closed__0));
v___x_694_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_694_, 0, v_otherBuffer_690_);
v___x_695_ = lean_unsigned_to_nat(1u);
v___x_696_ = lean_mk_empty_array_with_capacity(v___x_695_);
v___x_697_ = lean_array_push(v___x_696_, v___x_694_);
v___x_698_ = l_Lasm_JS_Web_Support_args(v___x_697_);
v___x_699_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(v___x_692_, v___x_693_, v_self_689_, v___x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals___boxed(lean_object* v_self_700_, lean_object* v_otherBuffer_701_, lean_object* v_a_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Lasm_JS_Node_Buffer_equals(v_self_700_, v_otherBuffer_701_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0_spec__1(lean_object* v_context_704_, lean_object* v_bytes_705_){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_705_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_a_708_; lean_object* v___x_709_; 
v_a_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_707_, 1);
v___x_709_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_704_, v_a_708_);
return v___x_709_;
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
v_a_710_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_707_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_707_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0_spec__1___boxed(lean_object* v_context_718_, lean_object* v_bytes_719_, lean_object* v_a_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0_spec__1(v_context_718_, v_bytes_719_);
lean_dec_ref(v_bytes_719_);
lean_dec_ref(v_context_718_);
return v_res_721_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0___closed__0(void){
_start:
{
uint64_t v___x_722_; uint8_t v___x_723_; uint64_t v___x_724_; 
v___x_722_ = 0ULL;
v___x_723_ = 0;
v___x_724_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(v___x_723_, v___x_722_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0(lean_object* v_f_725_, lean_object* v_args_726_, lean_object* v_this_727_){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; uint64_t v___x_731_; lean_object* v___x_732_; 
v___x_729_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0));
v___x_730_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_730_, 0, v_f_725_);
lean_ctor_set(v___x_730_, 1, v___x_729_);
v___x_731_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0___closed__0);
v___x_732_ = l_Lasm_JS_Value_invokeRaw(v___x_730_, v_this_727_, v_args_726_, v___x_731_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_732_, 1);
v___x_734_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__1));
v___x_735_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0_spec__1(v___x_734_, v_a_733_);
lean_dec(v_a_733_);
return v___x_735_;
}
else
{
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0___boxed(lean_object* v_f_736_, lean_object* v_args_737_, lean_object* v_this_738_, lean_object* v_a_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0(v_f_736_, v_args_737_, v_this_738_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0(lean_object* v_module_741_, lean_object* v_path_742_, lean_object* v_self_743_, lean_object* v_args_744_){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_746_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___closed__0));
v___x_747_ = lean_unsigned_to_nat(0u);
v___x_748_ = lean_box(0);
v___x_749_ = l_String_splitOnAux(v_path_742_, v___x_746_, v___x_747_, v___x_747_, v___x_747_, v___x_748_);
v___x_750_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v_module_741_, v___x_749_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
lean_dec_ref_known(v___x_750_, 1);
v___x_752_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_752_, 0, v_self_743_);
v___x_753_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0_spec__0(v_a_751_, v_args_744_, v___x_752_);
return v___x_753_;
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec_ref(v_args_744_);
lean_dec_ref(v_self_743_);
v_a_754_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_750_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_750_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0___boxed(lean_object* v_module_762_, lean_object* v_path_763_, lean_object* v_self_764_, lean_object* v_args_765_, lean_object* v_a_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0(v_module_762_, v_path_763_, v_self_764_, v_args_765_);
lean_dec_ref(v_path_763_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fill(lean_object* v_self_769_, lean_object* v_value_770_, lean_object* v_offset_771_, lean_object* v_end_772_, lean_object* v_encoding_773_){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___y_778_; 
v___x_775_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_776_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_fill___closed__0));
switch(lean_obj_tag(v_value_770_))
{
case 0:
{
lean_object* v_value_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
v_value_790_ = lean_ctor_get(v_value_770_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v_value_770_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v_value_770_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_value_790_);
lean_dec(v_value_770_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
lean_ctor_set_tag(v___x_792_, 4);
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_value_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
v___y_778_ = v___x_795_;
goto v___jp_777_;
}
}
}
case 1:
{
lean_object* v_value_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
v_value_798_ = lean_ctor_get(v_value_770_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v_value_770_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v_value_770_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_value_798_);
lean_dec(v_value_770_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
lean_ctor_set_tag(v___x_800_, 6);
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_value_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
v___y_778_ = v___x_803_;
goto v___jp_777_;
}
}
}
default: 
{
lean_object* v_value_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_818_; 
v_value_806_ = lean_ctor_get(v_value_770_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v_value_770_);
if (v_isSharedCheck_818_ == 0)
{
v___x_808_ = v_value_770_;
v_isShared_809_ = v_isSharedCheck_818_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_value_806_);
lean_dec(v_value_770_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_818_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_810_ = lean_nat_abs(v_value_806_);
v___x_811_ = lean_cstr_to_nat("9007199254740991");
v___x_812_ = lean_nat_dec_le(v___x_810_, v___x_811_);
lean_dec(v___x_810_);
if (v___x_812_ == 0)
{
lean_object* v___x_814_; 
if (v_isShared_809_ == 0)
{
lean_ctor_set_tag(v___x_808_, 5);
v___x_814_ = v___x_808_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_value_806_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
v___y_778_ = v___x_814_;
goto v___jp_777_;
}
}
else
{
double v___x_816_; lean_object* v___x_817_; 
lean_del_object(v___x_808_);
v___x_816_ = l_Float_ofInt(v_value_806_);
lean_dec(v_value_806_);
v___x_817_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_817_, 0, v___x_816_);
v___y_778_ = v___x_817_;
goto v___jp_777_;
}
}
}
}
v___jp_777_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_779_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_771_);
v___x_780_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_772_);
v___x_781_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_773_);
v___x_782_ = lean_unsigned_to_nat(4u);
v___x_783_ = lean_mk_empty_array_with_capacity(v___x_782_);
v___x_784_ = lean_array_push(v___x_783_, v___y_778_);
v___x_785_ = lean_array_push(v___x_784_, v___x_779_);
v___x_786_ = lean_array_push(v___x_785_, v___x_780_);
v___x_787_ = lean_array_push(v___x_786_, v___x_781_);
v___x_788_ = l_Lasm_JS_Web_Support_args(v___x_787_);
v___x_789_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0(v___x_775_, v___x_776_, v_self_769_, v___x_788_);
return v___x_789_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fill___boxed(lean_object* v_self_819_, lean_object* v_value_820_, lean_object* v_offset_821_, lean_object* v_end_822_, lean_object* v_encoding_823_, lean_object* v_a_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lasm_JS_Node_Buffer_fill(v_self_819_, v_value_820_, v_offset_821_, v_end_822_, v_encoding_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_includes(lean_object* v_self_827_, lean_object* v_value_828_, lean_object* v_start_829_, lean_object* v_end_830_, lean_object* v_encoding_831_){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___y_836_; 
v___x_833_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_834_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_includes___closed__0));
switch(lean_obj_tag(v_value_828_))
{
case 0:
{
lean_object* v_value_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
v_value_848_ = lean_ctor_get(v_value_828_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v_value_828_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v_value_828_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_value_848_);
lean_dec(v_value_828_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
lean_ctor_set_tag(v___x_850_, 4);
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_value_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
v___y_836_ = v___x_853_;
goto v___jp_835_;
}
}
}
case 1:
{
lean_object* v_value_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
v_value_856_ = lean_ctor_get(v_value_828_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v_value_828_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v_value_828_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_value_856_);
lean_dec(v_value_828_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
lean_ctor_set_tag(v___x_858_, 6);
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_value_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
v___y_836_ = v___x_861_;
goto v___jp_835_;
}
}
}
default: 
{
lean_object* v_value_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_876_; 
v_value_864_ = lean_ctor_get(v_value_828_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v_value_828_);
if (v_isSharedCheck_876_ == 0)
{
v___x_866_ = v_value_828_;
v_isShared_867_ = v_isSharedCheck_876_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_value_864_);
lean_dec(v_value_828_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_876_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_868_; lean_object* v___x_869_; uint8_t v___x_870_; 
v___x_868_ = lean_nat_abs(v_value_864_);
v___x_869_ = lean_cstr_to_nat("9007199254740991");
v___x_870_ = lean_nat_dec_le(v___x_868_, v___x_869_);
lean_dec(v___x_868_);
if (v___x_870_ == 0)
{
lean_object* v___x_872_; 
if (v_isShared_867_ == 0)
{
lean_ctor_set_tag(v___x_866_, 5);
v___x_872_ = v___x_866_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_value_864_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
v___y_836_ = v___x_872_;
goto v___jp_835_;
}
}
else
{
double v___x_874_; lean_object* v___x_875_; 
lean_del_object(v___x_866_);
v___x_874_ = l_Float_ofInt(v_value_864_);
lean_dec(v_value_864_);
v___x_875_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_875_, 0, v___x_874_);
v___y_836_ = v___x_875_;
goto v___jp_835_;
}
}
}
}
v___jp_835_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_837_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_829_);
v___x_838_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_830_);
v___x_839_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_831_);
v___x_840_ = lean_unsigned_to_nat(4u);
v___x_841_ = lean_mk_empty_array_with_capacity(v___x_840_);
v___x_842_ = lean_array_push(v___x_841_, v___y_836_);
v___x_843_ = lean_array_push(v___x_842_, v___x_837_);
v___x_844_ = lean_array_push(v___x_843_, v___x_838_);
v___x_845_ = lean_array_push(v___x_844_, v___x_839_);
v___x_846_ = l_Lasm_JS_Web_Support_args(v___x_845_);
v___x_847_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(v___x_833_, v___x_834_, v_self_827_, v___x_846_);
return v___x_847_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_includes___boxed(lean_object* v_self_877_, lean_object* v_value_878_, lean_object* v_start_879_, lean_object* v_end_880_, lean_object* v_encoding_881_, lean_object* v_a_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lasm_JS_Node_Buffer_includes(v_self_877_, v_value_878_, v_start_879_, v_end_880_, v_encoding_881_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_indexOf(lean_object* v_self_885_, lean_object* v_value_886_, lean_object* v_start_887_, lean_object* v_end_888_, lean_object* v_encoding_889_){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___y_894_; 
v___x_891_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_892_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_indexOf___closed__0));
switch(lean_obj_tag(v_value_886_))
{
case 0:
{
lean_object* v_value_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
v_value_906_ = lean_ctor_get(v_value_886_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v_value_886_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v_value_886_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_value_906_);
lean_dec(v_value_886_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
lean_ctor_set_tag(v___x_908_, 4);
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_value_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
v___y_894_ = v___x_911_;
goto v___jp_893_;
}
}
}
case 1:
{
lean_object* v_value_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
v_value_914_ = lean_ctor_get(v_value_886_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v_value_886_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v_value_886_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_value_914_);
lean_dec(v_value_886_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
lean_ctor_set_tag(v___x_916_, 6);
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_value_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
v___y_894_ = v___x_919_;
goto v___jp_893_;
}
}
}
default: 
{
lean_object* v_value_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_934_; 
v_value_922_ = lean_ctor_get(v_value_886_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v_value_886_);
if (v_isSharedCheck_934_ == 0)
{
v___x_924_ = v_value_886_;
v_isShared_925_ = v_isSharedCheck_934_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_value_922_);
lean_dec(v_value_886_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_934_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; lean_object* v___x_927_; uint8_t v___x_928_; 
v___x_926_ = lean_nat_abs(v_value_922_);
v___x_927_ = lean_cstr_to_nat("9007199254740991");
v___x_928_ = lean_nat_dec_le(v___x_926_, v___x_927_);
lean_dec(v___x_926_);
if (v___x_928_ == 0)
{
lean_object* v___x_930_; 
if (v_isShared_925_ == 0)
{
lean_ctor_set_tag(v___x_924_, 5);
v___x_930_ = v___x_924_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_value_922_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
v___y_894_ = v___x_930_;
goto v___jp_893_;
}
}
else
{
double v___x_932_; lean_object* v___x_933_; 
lean_del_object(v___x_924_);
v___x_932_ = l_Float_ofInt(v_value_922_);
lean_dec(v_value_922_);
v___x_933_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_933_, 0, v___x_932_);
v___y_894_ = v___x_933_;
goto v___jp_893_;
}
}
}
}
v___jp_893_:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_895_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_887_);
v___x_896_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_888_);
v___x_897_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_889_);
v___x_898_ = lean_unsigned_to_nat(4u);
v___x_899_ = lean_mk_empty_array_with_capacity(v___x_898_);
v___x_900_ = lean_array_push(v___x_899_, v___y_894_);
v___x_901_ = lean_array_push(v___x_900_, v___x_895_);
v___x_902_ = lean_array_push(v___x_901_, v___x_896_);
v___x_903_ = lean_array_push(v___x_902_, v___x_897_);
v___x_904_ = l_Lasm_JS_Web_Support_args(v___x_903_);
v___x_905_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_891_, v___x_892_, v_self_885_, v___x_904_);
return v___x_905_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_indexOf___boxed(lean_object* v_self_935_, lean_object* v_value_936_, lean_object* v_start_937_, lean_object* v_end_938_, lean_object* v_encoding_939_, lean_object* v_a_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lasm_JS_Node_Buffer_indexOf(v_self_935_, v_value_936_, v_start_937_, v_end_938_, v_encoding_939_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_keys(lean_object* v_self_943_){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_945_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_946_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_keys___closed__0));
v___x_947_ = lean_obj_once(&l_Lasm_JS_Node_Buffer_entries___closed__2, &l_Lasm_JS_Node_Buffer_entries___closed__2_once, _init_l_Lasm_JS_Node_Buffer_entries___closed__2);
v___x_948_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0(v___x_945_, v___x_946_, v_self_943_, v___x_947_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_keys___boxed(lean_object* v_self_949_, lean_object* v_a_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Lasm_JS_Node_Buffer_keys(v_self_949_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_lastIndexOf(lean_object* v_self_953_, lean_object* v_value_954_, lean_object* v_start_955_, lean_object* v_end_956_, lean_object* v_encoding_957_){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___y_962_; 
v___x_959_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_960_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_lastIndexOf___closed__0));
switch(lean_obj_tag(v_value_954_))
{
case 0:
{
lean_object* v_value_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
v_value_974_ = lean_ctor_get(v_value_954_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v_value_954_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v_value_954_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_value_974_);
lean_dec(v_value_954_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
lean_ctor_set_tag(v___x_976_, 4);
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_value_974_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
v___y_962_ = v___x_979_;
goto v___jp_961_;
}
}
}
case 1:
{
lean_object* v_value_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
v_value_982_ = lean_ctor_get(v_value_954_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v_value_954_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v_value_954_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_value_982_);
lean_dec(v_value_954_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
lean_ctor_set_tag(v___x_984_, 6);
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_value_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
v___y_962_ = v___x_987_;
goto v___jp_961_;
}
}
}
default: 
{
lean_object* v_value_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1002_; 
v_value_990_ = lean_ctor_get(v_value_954_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v_value_954_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_992_ = v_value_954_;
v_isShared_993_ = v_isSharedCheck_1002_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_value_990_);
lean_dec(v_value_954_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1002_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_994_ = lean_nat_abs(v_value_990_);
v___x_995_ = lean_cstr_to_nat("9007199254740991");
v___x_996_ = lean_nat_dec_le(v___x_994_, v___x_995_);
lean_dec(v___x_994_);
if (v___x_996_ == 0)
{
lean_object* v___x_998_; 
if (v_isShared_993_ == 0)
{
lean_ctor_set_tag(v___x_992_, 5);
v___x_998_ = v___x_992_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_value_990_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
v___y_962_ = v___x_998_;
goto v___jp_961_;
}
}
else
{
double v___x_1000_; lean_object* v___x_1001_; 
lean_del_object(v___x_992_);
v___x_1000_ = l_Float_ofInt(v_value_990_);
lean_dec(v_value_990_);
v___x_1001_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1001_, 0, v___x_1000_);
v___y_962_ = v___x_1001_;
goto v___jp_961_;
}
}
}
}
v___jp_961_:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_963_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_955_);
v___x_964_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_956_);
v___x_965_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_957_);
v___x_966_ = lean_unsigned_to_nat(4u);
v___x_967_ = lean_mk_empty_array_with_capacity(v___x_966_);
v___x_968_ = lean_array_push(v___x_967_, v___y_962_);
v___x_969_ = lean_array_push(v___x_968_, v___x_963_);
v___x_970_ = lean_array_push(v___x_969_, v___x_964_);
v___x_971_ = lean_array_push(v___x_970_, v___x_965_);
v___x_972_ = l_Lasm_JS_Web_Support_args(v___x_971_);
v___x_973_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_959_, v___x_960_, v_self_953_, v___x_972_);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_lastIndexOf___boxed(lean_object* v_self_1003_, lean_object* v_value_1004_, lean_object* v_start_1005_, lean_object* v_end_1006_, lean_object* v_encoding_1007_, lean_object* v_a_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lasm_JS_Node_Buffer_lastIndexOf(v_self_1003_, v_value_1004_, v_start_1005_, v_end_1006_, v_encoding_1007_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigInt64BE(lean_object* v_self_1011_, lean_object* v_offset_1012_){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1014_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1015_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readBigInt64BE___closed__0));
v___x_1016_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1012_);
v___x_1017_ = lean_unsigned_to_nat(1u);
v___x_1018_ = lean_mk_empty_array_with_capacity(v___x_1017_);
v___x_1019_ = lean_array_push(v___x_1018_, v___x_1016_);
v___x_1020_ = l_Lasm_JS_Web_Support_args(v___x_1019_);
v___x_1021_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1014_, v___x_1015_, v_self_1011_, v___x_1020_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigInt64BE___boxed(lean_object* v_self_1022_, lean_object* v_offset_1023_, lean_object* v_a_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lasm_JS_Node_Buffer_readBigInt64BE(v_self_1022_, v_offset_1023_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigInt64LE(lean_object* v_self_1027_, lean_object* v_offset_1028_){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1030_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1031_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readBigInt64LE___closed__0));
v___x_1032_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1028_);
v___x_1033_ = lean_unsigned_to_nat(1u);
v___x_1034_ = lean_mk_empty_array_with_capacity(v___x_1033_);
v___x_1035_ = lean_array_push(v___x_1034_, v___x_1032_);
v___x_1036_ = l_Lasm_JS_Web_Support_args(v___x_1035_);
v___x_1037_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1030_, v___x_1031_, v_self_1027_, v___x_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigInt64LE___boxed(lean_object* v_self_1038_, lean_object* v_offset_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lasm_JS_Node_Buffer_readBigInt64LE(v_self_1038_, v_offset_1039_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64BE(lean_object* v_self_1043_, lean_object* v_offset_1044_){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1046_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1047_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readBigUInt64BE___closed__0));
v___x_1048_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1044_);
v___x_1049_ = lean_unsigned_to_nat(1u);
v___x_1050_ = lean_mk_empty_array_with_capacity(v___x_1049_);
v___x_1051_ = lean_array_push(v___x_1050_, v___x_1048_);
v___x_1052_ = l_Lasm_JS_Web_Support_args(v___x_1051_);
v___x_1053_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1046_, v___x_1047_, v_self_1043_, v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64BE___boxed(lean_object* v_self_1054_, lean_object* v_offset_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lasm_JS_Node_Buffer_readBigUInt64BE(v_self_1054_, v_offset_1055_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64LE(lean_object* v_self_1059_, lean_object* v_offset_1060_){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1062_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1063_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readBigUInt64LE___closed__0));
v___x_1064_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1060_);
v___x_1065_ = lean_unsigned_to_nat(1u);
v___x_1066_ = lean_mk_empty_array_with_capacity(v___x_1065_);
v___x_1067_ = lean_array_push(v___x_1066_, v___x_1064_);
v___x_1068_ = l_Lasm_JS_Web_Support_args(v___x_1067_);
v___x_1069_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1062_, v___x_1063_, v_self_1059_, v___x_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readBigUInt64LE___boxed(lean_object* v_self_1070_, lean_object* v_offset_1071_, lean_object* v_a_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lasm_JS_Node_Buffer_readBigUInt64LE(v_self_1070_, v_offset_1071_);
return v_res_1073_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0_spec__1(uint8_t v_await_1074_, uint64_t v_extra_1075_){
_start:
{
uint64_t v___x_1076_; uint64_t v___y_1078_; 
v___x_1076_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0);
if (v_await_1074_ == 0)
{
uint64_t v___x_1081_; 
v___x_1081_ = 0ULL;
v___y_1078_ = v___x_1081_;
goto v___jp_1077_;
}
else
{
uint64_t v___x_1082_; 
v___x_1082_ = 2ULL;
v___y_1078_ = v___x_1082_;
goto v___jp_1077_;
}
v___jp_1077_:
{
uint64_t v___x_1079_; uint64_t v___x_1080_; 
v___x_1079_ = lean_uint64_lor(v___x_1076_, v___y_1078_);
v___x_1080_ = lean_uint64_lor(v___x_1079_, v_extra_1075_);
return v___x_1080_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0_spec__1___boxed(lean_object* v_await_1083_, lean_object* v_extra_1084_){
_start:
{
uint8_t v_await_boxed_1085_; uint64_t v_extra_boxed_1086_; uint64_t v_res_1087_; lean_object* v_r_1088_; 
v_await_boxed_1085_ = lean_unbox(v_await_1083_);
v_extra_boxed_1086_ = lean_unbox_uint64(v_extra_1084_);
lean_dec_ref(v_extra_1084_);
v_res_1087_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0_spec__1(v_await_boxed_1085_, v_extra_boxed_1086_);
v_r_1088_ = lean_box_uint64(v_res_1087_);
return v_r_1088_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1089_; uint8_t v___x_1090_; uint64_t v___x_1091_; 
v___x_1089_ = 0ULL;
v___x_1090_ = 0;
v___x_1091_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0_spec__1(v___x_1090_, v___x_1089_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0(lean_object* v_f_1092_, lean_object* v_args_1093_, lean_object* v_this_1094_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; uint64_t v___x_1098_; lean_object* v___x_1099_; 
v___x_1096_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0));
v___x_1097_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1097_, 0, v_f_1092_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0___closed__0);
v___x_1099_ = l_Lasm_JS_Value_invokeRaw(v___x_1097_, v_this_1094_, v_args_1093_, v___x_1098_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v___x_1099_, 1);
v___x_1101_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__1));
v___x_1102_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(v___x_1101_, v_a_1100_);
lean_dec(v_a_1100_);
return v___x_1102_;
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_a_1103_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1099_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1099_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0___boxed(lean_object* v_f_1111_, lean_object* v_args_1112_, lean_object* v_this_1113_, lean_object* v_a_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0(v_f_1111_, v_args_1112_, v_this_1113_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0(lean_object* v_module_1116_, lean_object* v_path_1117_, lean_object* v_self_1118_, lean_object* v_args_1119_){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1121_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___closed__0));
v___x_1122_ = lean_unsigned_to_nat(0u);
v___x_1123_ = lean_box(0);
v___x_1124_ = l_String_splitOnAux(v_path_1117_, v___x_1121_, v___x_1122_, v___x_1122_, v___x_1122_, v___x_1123_);
v___x_1125_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v_module_1116_, v___x_1124_);
if (lean_obj_tag(v___x_1125_) == 0)
{
lean_object* v_a_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc(v_a_1126_);
lean_dec_ref_known(v___x_1125_, 1);
v___x_1127_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1127_, 0, v_self_1118_);
v___x_1128_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0_spec__0(v_a_1126_, v_args_1119_, v___x_1127_);
return v___x_1128_;
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_dec_ref(v_args_1119_);
lean_dec_ref(v_self_1118_);
v_a_1129_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1125_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1125_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
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
return v___x_1134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0___boxed(lean_object* v_module_1137_, lean_object* v_path_1138_, lean_object* v_self_1139_, lean_object* v_args_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0(v_module_1137_, v_path_1138_, v_self_1139_, v_args_1140_);
lean_dec_ref(v_path_1138_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readDoubleBE(lean_object* v_self_1144_, lean_object* v_offset_1145_){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1147_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1148_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readDoubleBE___closed__0));
v___x_1149_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1145_);
v___x_1150_ = lean_unsigned_to_nat(1u);
v___x_1151_ = lean_mk_empty_array_with_capacity(v___x_1150_);
v___x_1152_ = lean_array_push(v___x_1151_, v___x_1149_);
v___x_1153_ = l_Lasm_JS_Web_Support_args(v___x_1152_);
v___x_1154_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0(v___x_1147_, v___x_1148_, v_self_1144_, v___x_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readDoubleBE___boxed(lean_object* v_self_1155_, lean_object* v_offset_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l_Lasm_JS_Node_Buffer_readDoubleBE(v_self_1155_, v_offset_1156_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readDoubleLE(lean_object* v_self_1160_, lean_object* v_offset_1161_){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1163_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1164_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readDoubleLE___closed__0));
v___x_1165_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1161_);
v___x_1166_ = lean_unsigned_to_nat(1u);
v___x_1167_ = lean_mk_empty_array_with_capacity(v___x_1166_);
v___x_1168_ = lean_array_push(v___x_1167_, v___x_1165_);
v___x_1169_ = l_Lasm_JS_Web_Support_args(v___x_1168_);
v___x_1170_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0(v___x_1163_, v___x_1164_, v_self_1160_, v___x_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readDoubleLE___boxed(lean_object* v_self_1171_, lean_object* v_offset_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_Lasm_JS_Node_Buffer_readDoubleLE(v_self_1171_, v_offset_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readFloatBE(lean_object* v_self_1176_, lean_object* v_offset_1177_){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1179_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1180_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readFloatBE___closed__0));
v___x_1181_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1177_);
v___x_1182_ = lean_unsigned_to_nat(1u);
v___x_1183_ = lean_mk_empty_array_with_capacity(v___x_1182_);
v___x_1184_ = lean_array_push(v___x_1183_, v___x_1181_);
v___x_1185_ = l_Lasm_JS_Web_Support_args(v___x_1184_);
v___x_1186_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0(v___x_1179_, v___x_1180_, v_self_1176_, v___x_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readFloatBE___boxed(lean_object* v_self_1187_, lean_object* v_offset_1188_, lean_object* v_a_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lasm_JS_Node_Buffer_readFloatBE(v_self_1187_, v_offset_1188_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readFloatLE(lean_object* v_self_1192_, lean_object* v_offset_1193_){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1195_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1196_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readFloatLE___closed__0));
v___x_1197_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1193_);
v___x_1198_ = lean_unsigned_to_nat(1u);
v___x_1199_ = lean_mk_empty_array_with_capacity(v___x_1198_);
v___x_1200_ = lean_array_push(v___x_1199_, v___x_1197_);
v___x_1201_ = l_Lasm_JS_Web_Support_args(v___x_1200_);
v___x_1202_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_readDoubleBE_spec__0(v___x_1195_, v___x_1196_, v_self_1192_, v___x_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readFloatLE___boxed(lean_object* v_self_1203_, lean_object* v_offset_1204_, lean_object* v_a_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lasm_JS_Node_Buffer_readFloatLE(v_self_1203_, v_offset_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt8(lean_object* v_self_1208_, lean_object* v_offset_1209_){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1211_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1212_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readInt8___closed__0));
v___x_1213_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1209_);
v___x_1214_ = lean_unsigned_to_nat(1u);
v___x_1215_ = lean_mk_empty_array_with_capacity(v___x_1214_);
v___x_1216_ = lean_array_push(v___x_1215_, v___x_1213_);
v___x_1217_ = l_Lasm_JS_Web_Support_args(v___x_1216_);
v___x_1218_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1211_, v___x_1212_, v_self_1208_, v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt8___boxed(lean_object* v_self_1219_, lean_object* v_offset_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l_Lasm_JS_Node_Buffer_readInt8(v_self_1219_, v_offset_1220_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt16BE(lean_object* v_self_1224_, lean_object* v_offset_1225_){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1227_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1228_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readInt16BE___closed__0));
v___x_1229_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1225_);
v___x_1230_ = lean_unsigned_to_nat(1u);
v___x_1231_ = lean_mk_empty_array_with_capacity(v___x_1230_);
v___x_1232_ = lean_array_push(v___x_1231_, v___x_1229_);
v___x_1233_ = l_Lasm_JS_Web_Support_args(v___x_1232_);
v___x_1234_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1227_, v___x_1228_, v_self_1224_, v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt16BE___boxed(lean_object* v_self_1235_, lean_object* v_offset_1236_, lean_object* v_a_1237_){
_start:
{
lean_object* v_res_1238_; 
v_res_1238_ = l_Lasm_JS_Node_Buffer_readInt16BE(v_self_1235_, v_offset_1236_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt16LE(lean_object* v_self_1240_, lean_object* v_offset_1241_){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1243_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1244_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readInt16LE___closed__0));
v___x_1245_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1241_);
v___x_1246_ = lean_unsigned_to_nat(1u);
v___x_1247_ = lean_mk_empty_array_with_capacity(v___x_1246_);
v___x_1248_ = lean_array_push(v___x_1247_, v___x_1245_);
v___x_1249_ = l_Lasm_JS_Web_Support_args(v___x_1248_);
v___x_1250_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1243_, v___x_1244_, v_self_1240_, v___x_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt16LE___boxed(lean_object* v_self_1251_, lean_object* v_offset_1252_, lean_object* v_a_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lasm_JS_Node_Buffer_readInt16LE(v_self_1251_, v_offset_1252_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt32BE(lean_object* v_self_1256_, lean_object* v_offset_1257_){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1259_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1260_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readInt32BE___closed__0));
v___x_1261_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1257_);
v___x_1262_ = lean_unsigned_to_nat(1u);
v___x_1263_ = lean_mk_empty_array_with_capacity(v___x_1262_);
v___x_1264_ = lean_array_push(v___x_1263_, v___x_1261_);
v___x_1265_ = l_Lasm_JS_Web_Support_args(v___x_1264_);
v___x_1266_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1259_, v___x_1260_, v_self_1256_, v___x_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt32BE___boxed(lean_object* v_self_1267_, lean_object* v_offset_1268_, lean_object* v_a_1269_){
_start:
{
lean_object* v_res_1270_; 
v_res_1270_ = l_Lasm_JS_Node_Buffer_readInt32BE(v_self_1267_, v_offset_1268_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt32LE(lean_object* v_self_1272_, lean_object* v_offset_1273_){
_start:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1275_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1276_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readInt32LE___closed__0));
v___x_1277_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1273_);
v___x_1278_ = lean_unsigned_to_nat(1u);
v___x_1279_ = lean_mk_empty_array_with_capacity(v___x_1278_);
v___x_1280_ = lean_array_push(v___x_1279_, v___x_1277_);
v___x_1281_ = l_Lasm_JS_Web_Support_args(v___x_1280_);
v___x_1282_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1275_, v___x_1276_, v_self_1272_, v___x_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readInt32LE___boxed(lean_object* v_self_1283_, lean_object* v_offset_1284_, lean_object* v_a_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_Lasm_JS_Node_Buffer_readInt32LE(v_self_1283_, v_offset_1284_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readIntBE(lean_object* v_self_1288_, lean_object* v_offset_1289_, lean_object* v_byteLength_1290_){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1304_; lean_object* v___x_1311_; lean_object* v___x_1312_; uint8_t v___x_1313_; 
v___x_1292_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1293_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readIntBE___closed__0));
v___x_1311_ = lean_nat_abs(v_offset_1289_);
v___x_1312_ = lean_cstr_to_nat("9007199254740991");
v___x_1313_ = lean_nat_dec_le(v___x_1311_, v___x_1312_);
lean_dec(v___x_1311_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1314_, 0, v_offset_1289_);
v___y_1304_ = v___x_1314_;
goto v___jp_1303_;
}
else
{
double v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = l_Float_ofInt(v_offset_1289_);
lean_dec(v_offset_1289_);
v___x_1316_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1316_, 0, v___x_1315_);
v___y_1304_ = v___x_1316_;
goto v___jp_1303_;
}
v___jp_1294_:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1297_ = lean_unsigned_to_nat(2u);
v___x_1298_ = lean_mk_empty_array_with_capacity(v___x_1297_);
v___x_1299_ = lean_array_push(v___x_1298_, v___y_1295_);
v___x_1300_ = lean_array_push(v___x_1299_, v___y_1296_);
v___x_1301_ = l_Lasm_JS_Web_Support_args(v___x_1300_);
v___x_1302_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1292_, v___x_1293_, v_self_1288_, v___x_1301_);
return v___x_1302_;
}
v___jp_1303_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1305_ = lean_nat_abs(v_byteLength_1290_);
v___x_1306_ = lean_cstr_to_nat("9007199254740991");
v___x_1307_ = lean_nat_dec_le(v___x_1305_, v___x_1306_);
lean_dec(v___x_1305_);
if (v___x_1307_ == 0)
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1308_, 0, v_byteLength_1290_);
v___y_1295_ = v___y_1304_;
v___y_1296_ = v___x_1308_;
goto v___jp_1294_;
}
else
{
double v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = l_Float_ofInt(v_byteLength_1290_);
lean_dec(v_byteLength_1290_);
v___x_1310_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1310_, 0, v___x_1309_);
v___y_1295_ = v___y_1304_;
v___y_1296_ = v___x_1310_;
goto v___jp_1294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readIntBE___boxed(lean_object* v_self_1317_, lean_object* v_offset_1318_, lean_object* v_byteLength_1319_, lean_object* v_a_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Lasm_JS_Node_Buffer_readIntBE(v_self_1317_, v_offset_1318_, v_byteLength_1319_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readIntLE(lean_object* v_self_1323_, lean_object* v_offset_1324_, lean_object* v_byteLength_1325_){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___y_1330_; lean_object* v___y_1331_; lean_object* v___y_1339_; lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v___x_1327_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1328_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readIntLE___closed__0));
v___x_1346_ = lean_nat_abs(v_offset_1324_);
v___x_1347_ = lean_cstr_to_nat("9007199254740991");
v___x_1348_ = lean_nat_dec_le(v___x_1346_, v___x_1347_);
lean_dec(v___x_1346_);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1349_, 0, v_offset_1324_);
v___y_1339_ = v___x_1349_;
goto v___jp_1338_;
}
else
{
double v___x_1350_; lean_object* v___x_1351_; 
v___x_1350_ = l_Float_ofInt(v_offset_1324_);
lean_dec(v_offset_1324_);
v___x_1351_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1351_, 0, v___x_1350_);
v___y_1339_ = v___x_1351_;
goto v___jp_1338_;
}
v___jp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1332_ = lean_unsigned_to_nat(2u);
v___x_1333_ = lean_mk_empty_array_with_capacity(v___x_1332_);
v___x_1334_ = lean_array_push(v___x_1333_, v___y_1330_);
v___x_1335_ = lean_array_push(v___x_1334_, v___y_1331_);
v___x_1336_ = l_Lasm_JS_Web_Support_args(v___x_1335_);
v___x_1337_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1327_, v___x_1328_, v_self_1323_, v___x_1336_);
return v___x_1337_;
}
v___jp_1338_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v___x_1340_ = lean_nat_abs(v_byteLength_1325_);
v___x_1341_ = lean_cstr_to_nat("9007199254740991");
v___x_1342_ = lean_nat_dec_le(v___x_1340_, v___x_1341_);
lean_dec(v___x_1340_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; 
v___x_1343_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1343_, 0, v_byteLength_1325_);
v___y_1330_ = v___y_1339_;
v___y_1331_ = v___x_1343_;
goto v___jp_1329_;
}
else
{
double v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = l_Float_ofInt(v_byteLength_1325_);
lean_dec(v_byteLength_1325_);
v___x_1345_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1345_, 0, v___x_1344_);
v___y_1330_ = v___y_1339_;
v___y_1331_ = v___x_1345_;
goto v___jp_1329_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readIntLE___boxed(lean_object* v_self_1352_, lean_object* v_offset_1353_, lean_object* v_byteLength_1354_, lean_object* v_a_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Lasm_JS_Node_Buffer_readIntLE(v_self_1352_, v_offset_1353_, v_byteLength_1354_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt8(lean_object* v_self_1358_, lean_object* v_offset_1359_){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1361_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1362_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readUInt8___closed__0));
v___x_1363_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1359_);
v___x_1364_ = lean_unsigned_to_nat(1u);
v___x_1365_ = lean_mk_empty_array_with_capacity(v___x_1364_);
v___x_1366_ = lean_array_push(v___x_1365_, v___x_1363_);
v___x_1367_ = l_Lasm_JS_Web_Support_args(v___x_1366_);
v___x_1368_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1361_, v___x_1362_, v_self_1358_, v___x_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt8___boxed(lean_object* v_self_1369_, lean_object* v_offset_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lasm_JS_Node_Buffer_readUInt8(v_self_1369_, v_offset_1370_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt16BE(lean_object* v_self_1374_, lean_object* v_offset_1375_){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1377_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1378_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readUInt16BE___closed__0));
v___x_1379_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1375_);
v___x_1380_ = lean_unsigned_to_nat(1u);
v___x_1381_ = lean_mk_empty_array_with_capacity(v___x_1380_);
v___x_1382_ = lean_array_push(v___x_1381_, v___x_1379_);
v___x_1383_ = l_Lasm_JS_Web_Support_args(v___x_1382_);
v___x_1384_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1377_, v___x_1378_, v_self_1374_, v___x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt16BE___boxed(lean_object* v_self_1385_, lean_object* v_offset_1386_, lean_object* v_a_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_Lasm_JS_Node_Buffer_readUInt16BE(v_self_1385_, v_offset_1386_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt16LE(lean_object* v_self_1390_, lean_object* v_offset_1391_){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1393_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1394_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readUInt16LE___closed__0));
v___x_1395_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1391_);
v___x_1396_ = lean_unsigned_to_nat(1u);
v___x_1397_ = lean_mk_empty_array_with_capacity(v___x_1396_);
v___x_1398_ = lean_array_push(v___x_1397_, v___x_1395_);
v___x_1399_ = l_Lasm_JS_Web_Support_args(v___x_1398_);
v___x_1400_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1393_, v___x_1394_, v_self_1390_, v___x_1399_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt16LE___boxed(lean_object* v_self_1401_, lean_object* v_offset_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Lasm_JS_Node_Buffer_readUInt16LE(v_self_1401_, v_offset_1402_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt32BE(lean_object* v_self_1406_, lean_object* v_offset_1407_){
_start:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1409_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1410_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readUInt32BE___closed__0));
v___x_1411_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1407_);
v___x_1412_ = lean_unsigned_to_nat(1u);
v___x_1413_ = lean_mk_empty_array_with_capacity(v___x_1412_);
v___x_1414_ = lean_array_push(v___x_1413_, v___x_1411_);
v___x_1415_ = l_Lasm_JS_Web_Support_args(v___x_1414_);
v___x_1416_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1409_, v___x_1410_, v_self_1406_, v___x_1415_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt32BE___boxed(lean_object* v_self_1417_, lean_object* v_offset_1418_, lean_object* v_a_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lasm_JS_Node_Buffer_readUInt32BE(v_self_1417_, v_offset_1418_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt32LE(lean_object* v_self_1422_, lean_object* v_offset_1423_){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1425_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1426_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readUInt32LE___closed__0));
v___x_1427_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_1423_);
v___x_1428_ = lean_unsigned_to_nat(1u);
v___x_1429_ = lean_mk_empty_array_with_capacity(v___x_1428_);
v___x_1430_ = lean_array_push(v___x_1429_, v___x_1427_);
v___x_1431_ = l_Lasm_JS_Web_Support_args(v___x_1430_);
v___x_1432_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1425_, v___x_1426_, v_self_1422_, v___x_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUInt32LE___boxed(lean_object* v_self_1433_, lean_object* v_offset_1434_, lean_object* v_a_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lasm_JS_Node_Buffer_readUInt32LE(v_self_1433_, v_offset_1434_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUIntBE(lean_object* v_self_1438_, lean_object* v_offset_1439_, lean_object* v_byteLength_1440_){
_start:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1454_; lean_object* v___x_1461_; lean_object* v___x_1462_; uint8_t v___x_1463_; 
v___x_1442_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1443_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readUIntBE___closed__0));
v___x_1461_ = lean_nat_abs(v_offset_1439_);
v___x_1462_ = lean_cstr_to_nat("9007199254740991");
v___x_1463_ = lean_nat_dec_le(v___x_1461_, v___x_1462_);
lean_dec(v___x_1461_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1464_, 0, v_offset_1439_);
v___y_1454_ = v___x_1464_;
goto v___jp_1453_;
}
else
{
double v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = l_Float_ofInt(v_offset_1439_);
lean_dec(v_offset_1439_);
v___x_1466_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1466_, 0, v___x_1465_);
v___y_1454_ = v___x_1466_;
goto v___jp_1453_;
}
v___jp_1444_:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1447_ = lean_unsigned_to_nat(2u);
v___x_1448_ = lean_mk_empty_array_with_capacity(v___x_1447_);
v___x_1449_ = lean_array_push(v___x_1448_, v___y_1445_);
v___x_1450_ = lean_array_push(v___x_1449_, v___y_1446_);
v___x_1451_ = l_Lasm_JS_Web_Support_args(v___x_1450_);
v___x_1452_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1442_, v___x_1443_, v_self_1438_, v___x_1451_);
return v___x_1452_;
}
v___jp_1453_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; 
v___x_1455_ = lean_nat_abs(v_byteLength_1440_);
v___x_1456_ = lean_cstr_to_nat("9007199254740991");
v___x_1457_ = lean_nat_dec_le(v___x_1455_, v___x_1456_);
lean_dec(v___x_1455_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1458_, 0, v_byteLength_1440_);
v___y_1445_ = v___y_1454_;
v___y_1446_ = v___x_1458_;
goto v___jp_1444_;
}
else
{
double v___x_1459_; lean_object* v___x_1460_; 
v___x_1459_ = l_Float_ofInt(v_byteLength_1440_);
lean_dec(v_byteLength_1440_);
v___x_1460_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1460_, 0, v___x_1459_);
v___y_1445_ = v___y_1454_;
v___y_1446_ = v___x_1460_;
goto v___jp_1444_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUIntBE___boxed(lean_object* v_self_1467_, lean_object* v_offset_1468_, lean_object* v_byteLength_1469_, lean_object* v_a_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lasm_JS_Node_Buffer_readUIntBE(v_self_1467_, v_offset_1468_, v_byteLength_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUIntLE(lean_object* v_self_1473_, lean_object* v_offset_1474_, lean_object* v_byteLength_1475_){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1489_; lean_object* v___x_1496_; lean_object* v___x_1497_; uint8_t v___x_1498_; 
v___x_1477_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1478_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_readUIntLE___closed__0));
v___x_1496_ = lean_nat_abs(v_offset_1474_);
v___x_1497_ = lean_cstr_to_nat("9007199254740991");
v___x_1498_ = lean_nat_dec_le(v___x_1496_, v___x_1497_);
lean_dec(v___x_1496_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1499_; 
v___x_1499_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1499_, 0, v_offset_1474_);
v___y_1489_ = v___x_1499_;
goto v___jp_1488_;
}
else
{
double v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = l_Float_ofInt(v_offset_1474_);
lean_dec(v_offset_1474_);
v___x_1501_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1501_, 0, v___x_1500_);
v___y_1489_ = v___x_1501_;
goto v___jp_1488_;
}
v___jp_1479_:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1482_ = lean_unsigned_to_nat(2u);
v___x_1483_ = lean_mk_empty_array_with_capacity(v___x_1482_);
v___x_1484_ = lean_array_push(v___x_1483_, v___y_1480_);
v___x_1485_ = lean_array_push(v___x_1484_, v___y_1481_);
v___x_1486_ = l_Lasm_JS_Web_Support_args(v___x_1485_);
v___x_1487_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0(v___x_1477_, v___x_1478_, v_self_1473_, v___x_1486_);
return v___x_1487_;
}
v___jp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; uint8_t v___x_1492_; 
v___x_1490_ = lean_nat_abs(v_byteLength_1475_);
v___x_1491_ = lean_cstr_to_nat("9007199254740991");
v___x_1492_ = lean_nat_dec_le(v___x_1490_, v___x_1491_);
lean_dec(v___x_1490_);
if (v___x_1492_ == 0)
{
lean_object* v___x_1493_; 
v___x_1493_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1493_, 0, v_byteLength_1475_);
v___y_1480_ = v___y_1489_;
v___y_1481_ = v___x_1493_;
goto v___jp_1479_;
}
else
{
double v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = l_Float_ofInt(v_byteLength_1475_);
lean_dec(v_byteLength_1475_);
v___x_1495_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1495_, 0, v___x_1494_);
v___y_1480_ = v___y_1489_;
v___y_1481_ = v___x_1495_;
goto v___jp_1479_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_readUIntLE___boxed(lean_object* v_self_1502_, lean_object* v_offset_1503_, lean_object* v_byteLength_1504_, lean_object* v_a_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lasm_JS_Node_Buffer_readUIntLE(v_self_1502_, v_offset_1503_, v_byteLength_1504_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_subarray(lean_object* v_self_1508_, lean_object* v_start_1509_, lean_object* v_end_1510_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1512_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1513_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_subarray___closed__0));
v___x_1514_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_1509_);
v___x_1515_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_1510_);
v___x_1516_ = lean_unsigned_to_nat(2u);
v___x_1517_ = lean_mk_empty_array_with_capacity(v___x_1516_);
v___x_1518_ = lean_array_push(v___x_1517_, v___x_1514_);
v___x_1519_ = lean_array_push(v___x_1518_, v___x_1515_);
v___x_1520_ = l_Lasm_JS_Web_Support_args(v___x_1519_);
v___x_1521_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0(v___x_1512_, v___x_1513_, v_self_1508_, v___x_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_subarray___boxed(lean_object* v_self_1522_, lean_object* v_start_1523_, lean_object* v_end_1524_, lean_object* v_a_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lasm_JS_Node_Buffer_subarray(v_self_1522_, v_start_1523_, v_end_1524_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_slice(lean_object* v_self_1528_, lean_object* v_start_1529_, lean_object* v_end_1530_){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1532_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1533_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_slice___closed__0));
v___x_1534_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_1529_);
v___x_1535_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_1530_);
v___x_1536_ = lean_unsigned_to_nat(2u);
v___x_1537_ = lean_mk_empty_array_with_capacity(v___x_1536_);
v___x_1538_ = lean_array_push(v___x_1537_, v___x_1534_);
v___x_1539_ = lean_array_push(v___x_1538_, v___x_1535_);
v___x_1540_ = l_Lasm_JS_Web_Support_args(v___x_1539_);
v___x_1541_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0(v___x_1532_, v___x_1533_, v_self_1528_, v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_slice___boxed(lean_object* v_self_1542_, lean_object* v_start_1543_, lean_object* v_end_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lasm_JS_Node_Buffer_slice(v_self_1542_, v_start_1543_, v_end_1544_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap16(lean_object* v_self_1548_){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1550_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1551_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_swap16___closed__0));
v___x_1552_ = lean_obj_once(&l_Lasm_JS_Node_Buffer_entries___closed__2, &l_Lasm_JS_Node_Buffer_entries___closed__2_once, _init_l_Lasm_JS_Node_Buffer_entries___closed__2);
v___x_1553_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0(v___x_1550_, v___x_1551_, v_self_1548_, v___x_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap16___boxed(lean_object* v_self_1554_, lean_object* v_a_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Lasm_JS_Node_Buffer_swap16(v_self_1554_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap32(lean_object* v_self_1558_){
_start:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1560_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1561_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_swap32___closed__0));
v___x_1562_ = lean_obj_once(&l_Lasm_JS_Node_Buffer_entries___closed__2, &l_Lasm_JS_Node_Buffer_entries___closed__2_once, _init_l_Lasm_JS_Node_Buffer_entries___closed__2);
v___x_1563_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0(v___x_1560_, v___x_1561_, v_self_1558_, v___x_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap32___boxed(lean_object* v_self_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Lasm_JS_Node_Buffer_swap32(v_self_1564_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap64(lean_object* v_self_1568_){
_start:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1570_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1571_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_swap64___closed__0));
v___x_1572_ = lean_obj_once(&l_Lasm_JS_Node_Buffer_entries___closed__2, &l_Lasm_JS_Node_Buffer_entries___closed__2_once, _init_l_Lasm_JS_Node_Buffer_entries___closed__2);
v___x_1573_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_fill_spec__0(v___x_1570_, v___x_1571_, v_self_1568_, v___x_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_swap64___boxed(lean_object* v_self_1574_, lean_object* v_a_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lasm_JS_Node_Buffer_swap64(v_self_1574_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toJSON(lean_object* v_self_1578_){
_start:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1580_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1581_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_toJSON___closed__0));
v___x_1582_ = lean_obj_once(&l_Lasm_JS_Node_Buffer_entries___closed__2, &l_Lasm_JS_Node_Buffer_entries___closed__2_once, _init_l_Lasm_JS_Node_Buffer_entries___closed__2);
v___x_1583_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0(v___x_1580_, v___x_1581_, v_self_1578_, v___x_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toJSON___boxed(lean_object* v_self_1584_, lean_object* v_a_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lasm_JS_Node_Buffer_toJSON(v_self_1584_);
return v_res_1586_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1587_; uint8_t v___x_1588_; uint64_t v___x_1589_; 
v___x_1587_ = 0ULL;
v___x_1588_ = 0;
v___x_1589_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v___x_1588_, v___x_1587_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0(lean_object* v_f_1590_, lean_object* v_args_1591_, lean_object* v_this_1592_){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; uint64_t v___x_1596_; lean_object* v___x_1597_; 
v___x_1594_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSlowBuffer___lam__0___closed__0));
v___x_1595_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1595_, 0, v_f_1590_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
v___x_1596_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0___closed__0);
v___x_1597_ = l_Lasm_JS_Value_invokeRaw(v___x_1595_, v_this_1592_, v_args_1591_, v___x_1596_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1598_);
lean_dec_ref_known(v___x_1597_, 1);
v___x_1599_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0___closed__1));
v___x_1600_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_1599_, v_a_1598_);
lean_dec(v_a_1598_);
return v___x_1600_;
}
else
{
lean_object* v_a_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1608_; 
v_a_1601_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1603_ = v___x_1597_;
v_isShared_1604_ = v_isSharedCheck_1608_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_a_1601_);
lean_dec(v___x_1597_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1608_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v___x_1606_; 
if (v_isShared_1604_ == 0)
{
v___x_1606_ = v___x_1603_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v_a_1601_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
return v___x_1606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0___boxed(lean_object* v_f_1609_, lean_object* v_args_1610_, lean_object* v_this_1611_, lean_object* v_a_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0(v_f_1609_, v_args_1610_, v_this_1611_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0(lean_object* v_module_1614_, lean_object* v_path_1615_, lean_object* v_self_1616_, lean_object* v_args_1617_){
_start:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1619_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0___closed__0));
v___x_1620_ = lean_unsigned_to_nat(0u);
v___x_1621_ = lean_box(0);
v___x_1622_ = l_String_splitOnAux(v_path_1615_, v___x_1619_, v___x_1620_, v___x_1620_, v___x_1620_, v___x_1621_);
v___x_1623_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v_module_1614_, v___x_1622_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1625_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1625_, 0, v_self_1616_);
v___x_1626_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0_spec__0(v_a_1624_, v_args_1617_, v___x_1625_);
return v___x_1626_;
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_dec_ref(v_args_1617_);
lean_dec_ref(v_self_1616_);
v_a_1627_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1623_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1623_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0___boxed(lean_object* v_module_1635_, lean_object* v_path_1636_, lean_object* v_self_1637_, lean_object* v_args_1638_, lean_object* v_a_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_module_1635_, v_path_1636_, v_self_1637_, v_args_1638_);
lean_dec_ref(v_path_1636_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString(lean_object* v_self_1642_, lean_object* v_encoding_1643_, lean_object* v_start_1644_, lean_object* v_end_1645_){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1647_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1648_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_toString___closed__0));
v___x_1649_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_1643_);
v___x_1650_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_1644_);
v___x_1651_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_1645_);
v___x_1652_ = lean_unsigned_to_nat(3u);
v___x_1653_ = lean_mk_empty_array_with_capacity(v___x_1652_);
v___x_1654_ = lean_array_push(v___x_1653_, v___x_1649_);
v___x_1655_ = lean_array_push(v___x_1654_, v___x_1650_);
v___x_1656_ = lean_array_push(v___x_1655_, v___x_1651_);
v___x_1657_ = l_Lasm_JS_Web_Support_args(v___x_1656_);
v___x_1658_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__0(v___x_1647_, v___x_1648_, v_self_1642_, v___x_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString___boxed(lean_object* v_self_1659_, lean_object* v_encoding_1660_, lean_object* v_start_1661_, lean_object* v_end_1662_, lean_object* v_a_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lasm_JS_Node_Buffer_toString(v_self_1659_, v_encoding_1660_, v_start_1661_, v_end_1662_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_values(lean_object* v_self_1666_){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1668_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_values___closed__0));
v___x_1670_ = lean_obj_once(&l_Lasm_JS_Node_Buffer_entries___closed__2, &l_Lasm_JS_Node_Buffer_entries___closed__2_once, _init_l_Lasm_JS_Node_Buffer_entries___closed__2);
v___x_1671_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_entries_spec__0(v___x_1668_, v___x_1669_, v_self_1666_, v___x_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_values___boxed(lean_object* v_self_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lasm_JS_Node_Buffer_values(v_self_1672_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(lean_object* v_x_1675_){
_start:
{
if (lean_obj_tag(v_x_1675_) == 0)
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_box(0);
return v___x_1676_;
}
else
{
lean_object* v_val_1677_; 
v_val_1677_ = lean_ctor_get(v_x_1675_, 0);
lean_inc(v_val_1677_);
lean_dec_ref_known(v_x_1675_, 1);
switch(lean_obj_tag(v_val_1677_))
{
case 0:
{
lean_object* v_value_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
v_value_1678_ = lean_ctor_get(v_val_1677_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v_val_1677_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v_val_1677_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_value_1678_);
lean_dec(v_val_1677_);
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
case 1:
{
lean_object* v_value_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
v_value_1686_ = lean_ctor_get(v_val_1677_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_val_1677_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v_val_1677_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_value_1686_);
lean_dec(v_val_1677_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
lean_ctor_set_tag(v___x_1688_, 6);
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_value_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
default: 
{
lean_object* v_value_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1706_; 
v_value_1694_ = lean_ctor_get(v_val_1677_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_val_1677_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1696_ = v_val_1677_;
v_isShared_1697_ = v_isSharedCheck_1706_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_value_1694_);
lean_dec(v_val_1677_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1706_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; uint8_t v___x_1700_; 
v___x_1698_ = lean_nat_abs(v_value_1694_);
v___x_1699_ = lean_cstr_to_nat("9007199254740991");
v___x_1700_ = lean_nat_dec_le(v___x_1698_, v___x_1699_);
lean_dec(v___x_1698_);
if (v___x_1700_ == 0)
{
lean_object* v___x_1702_; 
if (v_isShared_1697_ == 0)
{
lean_ctor_set_tag(v___x_1696_, 5);
v___x_1702_ = v___x_1696_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_value_1694_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
else
{
double v___x_1704_; lean_object* v___x_1705_; 
lean_del_object(v___x_1696_);
v___x_1704_ = l_Float_ofInt(v_value_1694_);
lean_dec(v_value_1694_);
v___x_1705_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1705_, 0, v___x_1704_);
return v___x_1705_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc(lean_object* v_size_1715_, lean_object* v_fill_1716_, lean_object* v_encoding_1717_){
_start:
{
uint8_t v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___y_1723_; lean_object* v___x_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1719_ = 0;
v___x_1720_ = lean_unsigned_to_nat(3u);
v___x_1721_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_alloc___closed__2));
v___x_1732_ = lean_nat_abs(v_size_1715_);
v___x_1733_ = lean_cstr_to_nat("9007199254740991");
v___x_1734_ = lean_nat_dec_le(v___x_1732_, v___x_1733_);
lean_dec(v___x_1732_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; 
v___x_1735_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1735_, 0, v_size_1715_);
v___y_1723_ = v___x_1735_;
goto v___jp_1722_;
}
else
{
double v___x_1736_; lean_object* v___x_1737_; 
v___x_1736_ = l_Float_ofInt(v_size_1715_);
lean_dec(v_size_1715_);
v___x_1737_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1737_, 0, v___x_1736_);
v___y_1723_ = v___x_1737_;
goto v___jp_1722_;
}
v___jp_1722_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1724_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(v_fill_1716_);
v___x_1725_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_1717_);
v___x_1726_ = lean_mk_empty_array_with_capacity(v___x_1720_);
v___x_1727_ = lean_array_push(v___x_1726_, v___y_1723_);
v___x_1728_ = lean_array_push(v___x_1727_, v___x_1724_);
v___x_1729_ = lean_array_push(v___x_1728_, v___x_1725_);
v___x_1730_ = l_Lasm_JS_Web_Support_args(v___x_1729_);
v___x_1731_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1721_, v___x_1730_, v___x_1719_);
return v___x_1731_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc___boxed(lean_object* v_size_1738_, lean_object* v_fill_1739_, lean_object* v_encoding_1740_, lean_object* v_a_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Lasm_JS_Node_Buffer_alloc(v_size_1738_, v_fill_1739_, v_encoding_1740_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafe(lean_object* v_size_1751_){
_start:
{
uint8_t v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___y_1757_; lean_object* v___x_1762_; lean_object* v___x_1763_; uint8_t v___x_1764_; 
v___x_1753_ = 0;
v___x_1754_ = lean_unsigned_to_nat(1u);
v___x_1755_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_allocUnsafe___closed__2));
v___x_1762_ = lean_nat_abs(v_size_1751_);
v___x_1763_ = lean_cstr_to_nat("9007199254740991");
v___x_1764_ = lean_nat_dec_le(v___x_1762_, v___x_1763_);
lean_dec(v___x_1762_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1765_, 0, v_size_1751_);
v___y_1757_ = v___x_1765_;
goto v___jp_1756_;
}
else
{
double v___x_1766_; lean_object* v___x_1767_; 
v___x_1766_ = l_Float_ofInt(v_size_1751_);
lean_dec(v_size_1751_);
v___x_1767_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1767_, 0, v___x_1766_);
v___y_1757_ = v___x_1767_;
goto v___jp_1756_;
}
v___jp_1756_:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1758_ = lean_mk_empty_array_with_capacity(v___x_1754_);
v___x_1759_ = lean_array_push(v___x_1758_, v___y_1757_);
v___x_1760_ = l_Lasm_JS_Web_Support_args(v___x_1759_);
v___x_1761_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1755_, v___x_1760_, v___x_1753_);
return v___x_1761_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafe___boxed(lean_object* v_size_1768_, lean_object* v_a_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l_Lasm_JS_Node_Buffer_allocUnsafe(v_size_1768_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment(lean_object* v_size_1778_, lean_object* v_alignment_1779_){
_start:
{
uint8_t v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___y_1785_; lean_object* v___x_1792_; lean_object* v___x_1793_; uint8_t v___x_1794_; 
v___x_1781_ = 0;
v___x_1782_ = lean_unsigned_to_nat(2u);
v___x_1783_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___closed__1));
v___x_1792_ = lean_nat_abs(v_size_1778_);
v___x_1793_ = lean_cstr_to_nat("9007199254740991");
v___x_1794_ = lean_nat_dec_le(v___x_1792_, v___x_1793_);
lean_dec(v___x_1792_);
if (v___x_1794_ == 0)
{
lean_object* v___x_1795_; 
v___x_1795_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1795_, 0, v_size_1778_);
v___y_1785_ = v___x_1795_;
goto v___jp_1784_;
}
else
{
double v___x_1796_; lean_object* v___x_1797_; 
v___x_1796_ = l_Float_ofInt(v_size_1778_);
lean_dec(v_size_1778_);
v___x_1797_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1797_, 0, v___x_1796_);
v___y_1785_ = v___x_1797_;
goto v___jp_1784_;
}
v___jp_1784_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1786_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_alignment_1779_);
v___x_1787_ = lean_mk_empty_array_with_capacity(v___x_1782_);
v___x_1788_ = lean_array_push(v___x_1787_, v___y_1785_);
v___x_1789_ = lean_array_push(v___x_1788_, v___x_1786_);
v___x_1790_ = l_Lasm_JS_Web_Support_args(v___x_1789_);
v___x_1791_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1783_, v___x_1790_, v___x_1781_);
return v___x_1791_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment___boxed(lean_object* v_size_1798_, lean_object* v_alignment_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Lasm_JS_Node_Buffer_allocUnsafeWithAlignment(v_size_1798_, v_alignment_1799_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlow(lean_object* v_size_1810_){
_start:
{
uint8_t v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___y_1816_; lean_object* v___x_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; 
v___x_1812_ = 0;
v___x_1813_ = lean_unsigned_to_nat(1u);
v___x_1814_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_allocUnsafeSlow___closed__2));
v___x_1821_ = lean_nat_abs(v_size_1810_);
v___x_1822_ = lean_cstr_to_nat("9007199254740991");
v___x_1823_ = lean_nat_dec_le(v___x_1821_, v___x_1822_);
lean_dec(v___x_1821_);
if (v___x_1823_ == 0)
{
lean_object* v___x_1824_; 
v___x_1824_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1824_, 0, v_size_1810_);
v___y_1816_ = v___x_1824_;
goto v___jp_1815_;
}
else
{
double v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = l_Float_ofInt(v_size_1810_);
lean_dec(v_size_1810_);
v___x_1826_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1826_, 0, v___x_1825_);
v___y_1816_ = v___x_1826_;
goto v___jp_1815_;
}
v___jp_1815_:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1817_ = lean_mk_empty_array_with_capacity(v___x_1813_);
v___x_1818_ = lean_array_push(v___x_1817_, v___y_1816_);
v___x_1819_ = l_Lasm_JS_Web_Support_args(v___x_1818_);
v___x_1820_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1814_, v___x_1819_, v___x_1812_);
return v___x_1820_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlow___boxed(lean_object* v_size_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lasm_JS_Node_Buffer_allocUnsafeSlow(v_size_1827_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment(lean_object* v_size_1837_, lean_object* v_alignment_1838_){
_start:
{
uint8_t v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___y_1844_; lean_object* v___x_1851_; lean_object* v___x_1852_; uint8_t v___x_1853_; 
v___x_1840_ = 0;
v___x_1841_ = lean_unsigned_to_nat(2u);
v___x_1842_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___closed__1));
v___x_1851_ = lean_nat_abs(v_size_1837_);
v___x_1852_ = lean_cstr_to_nat("9007199254740991");
v___x_1853_ = lean_nat_dec_le(v___x_1851_, v___x_1852_);
lean_dec(v___x_1851_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1854_; 
v___x_1854_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1854_, 0, v_size_1837_);
v___y_1844_ = v___x_1854_;
goto v___jp_1843_;
}
else
{
double v___x_1855_; lean_object* v___x_1856_; 
v___x_1855_ = l_Float_ofInt(v_size_1837_);
lean_dec(v_size_1837_);
v___x_1856_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1856_, 0, v___x_1855_);
v___y_1844_ = v___x_1856_;
goto v___jp_1843_;
}
v___jp_1843_:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1845_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_alignment_1838_);
v___x_1846_ = lean_mk_empty_array_with_capacity(v___x_1841_);
v___x_1847_ = lean_array_push(v___x_1846_, v___y_1844_);
v___x_1848_ = lean_array_push(v___x_1847_, v___x_1845_);
v___x_1849_ = l_Lasm_JS_Web_Support_args(v___x_1848_);
v___x_1850_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1842_, v___x_1849_, v___x_1840_);
return v___x_1850_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment___boxed(lean_object* v_size_1857_, lean_object* v_alignment_1858_, lean_object* v_a_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = l_Lasm_JS_Node_Buffer_allocUnsafeSlowWithAlignment(v_size_1857_, v_alignment_1858_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(lean_object* v_b_1863_, lean_object* v_args_1864_, uint8_t v_await_1865_){
_start:
{
uint64_t v___y_1868_; uint64_t v___y_1869_; uint64_t v___x_1912_; uint64_t v___y_1914_; 
v___x_1912_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0);
if (v_await_1865_ == 0)
{
uint64_t v___x_1919_; 
v___x_1919_ = 0ULL;
v___y_1914_ = v___x_1919_;
goto v___jp_1913_;
}
else
{
uint64_t v___x_1920_; 
v___x_1920_ = 2ULL;
v___y_1914_ = v___x_1920_;
goto v___jp_1913_;
}
v___jp_1867_:
{
uint64_t v_flags_1870_; uint32_t v___x_1871_; lean_object* v___x_1872_; uint32_t v___x_1873_; lean_object* v___x_1874_; 
v_flags_1870_ = lean_uint64_lor(v___y_1868_, v___y_1869_);
v___x_1871_ = 214;
v___x_1872_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1863_, v_args_1864_);
v___x_1873_ = 0;
v___x_1874_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1871_, v_flags_1870_, v___x_1872_, v___x_1873_);
lean_dec(v___x_1872_);
if (lean_obj_tag(v___x_1874_) == 0)
{
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v___x_1876_; 
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
lean_inc(v_a_1875_);
lean_dec_ref_known(v___x_1874_, 1);
v___x_1876_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1875_);
lean_dec(v_a_1875_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc(v_a_1877_);
lean_dec_ref_known(v___x_1876_, 1);
v___x_1878_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1863_);
v___x_1879_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(v___x_1878_, v_a_1877_);
lean_dec_ref(v___x_1878_);
return v___x_1879_;
}
else
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
v_a_1880_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1876_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1876_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1880_);
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
else
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
v_a_1888_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1890_ = v___x_1874_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1874_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
lean_ctor_set_tag(v___x_1890_, 1);
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
else
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1911_; 
v_a_1896_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1898_ = v___x_1874_;
v_isShared_1899_ = v_isSharedCheck_1911_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1874_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1911_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1909_; 
v___x_1900_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0));
v___x_1901_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1863_);
v___x_1902_ = lean_string_append(v___x_1900_, v___x_1901_);
lean_dec_ref(v___x_1901_);
v___x_1903_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__1));
v___x_1904_ = lean_string_append(v___x_1902_, v___x_1903_);
v___x_1905_ = lean_io_error_to_string(v_a_1896_);
v___x_1906_ = lean_string_append(v___x_1904_, v___x_1905_);
lean_dec_ref(v___x_1905_);
v___x_1907_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 0, v___x_1907_);
v___x_1909_ = v___x_1898_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1907_);
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
v___jp_1913_:
{
uint8_t v_construct_1915_; uint64_t v___x_1916_; 
v_construct_1915_ = lean_ctor_get_uint8(v_b_1863_, sizeof(void*)*4);
v___x_1916_ = lean_uint64_lor(v___x_1912_, v___y_1914_);
if (v_construct_1915_ == 0)
{
uint64_t v___x_1917_; 
v___x_1917_ = 0ULL;
v___y_1868_ = v___x_1916_;
v___y_1869_ = v___x_1917_;
goto v___jp_1867_;
}
else
{
uint64_t v___x_1918_; 
v___x_1918_ = 4ULL;
v___y_1868_ = v___x_1916_;
v___y_1869_ = v___x_1918_;
goto v___jp_1867_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___boxed(lean_object* v_b_1921_, lean_object* v_args_1922_, lean_object* v_await_1923_, lean_object* v_a_1924_){
_start:
{
uint8_t v_await_boxed_1925_; lean_object* v_res_1926_; 
v_await_boxed_1925_ = lean_unbox(v_await_1923_);
v_res_1926_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v_b_1921_, v_args_1922_, v_await_boxed_1925_);
lean_dec_ref(v_b_1921_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength(lean_object* v_string_1935_, lean_object* v_encoding_1936_){
_start:
{
uint8_t v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___y_1942_; 
v___x_1938_ = 0;
v___x_1939_ = lean_unsigned_to_nat(2u);
v___x_1940_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_byteLength___closed__2));
if (lean_obj_tag(v_string_1935_) == 0)
{
lean_object* v_value_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1956_; 
v_value_1949_ = lean_ctor_get(v_string_1935_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v_string_1935_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1951_ = v_string_1935_;
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_value_1949_);
lean_dec(v_string_1935_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1954_; 
if (v_isShared_1952_ == 0)
{
lean_ctor_set_tag(v___x_1951_, 4);
v___x_1954_ = v___x_1951_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_value_1949_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
v___y_1942_ = v___x_1954_;
goto v___jp_1941_;
}
}
}
else
{
lean_object* v_value_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1964_; 
v_value_1957_ = lean_ctor_get(v_string_1935_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v_string_1935_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1959_ = v_string_1935_;
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_value_1957_);
lean_dec(v_string_1935_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set_tag(v___x_1959_, 6);
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_value_1957_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
v___y_1942_ = v___x_1962_;
goto v___jp_1941_;
}
}
}
v___jp_1941_:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v___x_1943_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_1936_);
v___x_1944_ = lean_mk_empty_array_with_capacity(v___x_1939_);
v___x_1945_ = lean_array_push(v___x_1944_, v___y_1942_);
v___x_1946_ = lean_array_push(v___x_1945_, v___x_1943_);
v___x_1947_ = l_Lasm_JS_Web_Support_args(v___x_1946_);
v___x_1948_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_1940_, v___x_1947_, v___x_1938_);
return v___x_1948_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength___boxed(lean_object* v_string_1965_, lean_object* v_encoding_1966_, lean_object* v_a_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_Lasm_JS_Node_Buffer_byteLength(v_string_1965_, v_encoding_1966_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare(lean_object* v_buf1_1977_, lean_object* v_buf2_1978_){
_start:
{
uint8_t v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1980_ = 0;
v___x_1981_ = lean_unsigned_to_nat(2u);
v___x_1982_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_staticCompare___closed__2));
v___x_1983_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1983_, 0, v_buf1_1977_);
v___x_1984_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1984_, 0, v_buf2_1978_);
v___x_1985_ = lean_mk_empty_array_with_capacity(v___x_1981_);
v___x_1986_ = lean_array_push(v___x_1985_, v___x_1983_);
v___x_1987_ = lean_array_push(v___x_1986_, v___x_1984_);
v___x_1988_ = l_Lasm_JS_Web_Support_args(v___x_1987_);
v___x_1989_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_1982_, v___x_1988_, v___x_1980_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare___boxed(lean_object* v_buf1_1990_, lean_object* v_buf2_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_Lasm_JS_Node_Buffer_staticCompare(v_buf1_1990_, v_buf2_1991_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(size_t v_sz_1994_, size_t v_i_1995_, lean_object* v_bs_1996_){
_start:
{
uint8_t v___x_1997_; 
v___x_1997_ = lean_usize_dec_lt(v_i_1995_, v_sz_1994_);
if (v___x_1997_ == 0)
{
return v_bs_1996_;
}
else
{
lean_object* v_v_1998_; lean_object* v___x_1999_; lean_object* v_bs_x27_2000_; lean_object* v___x_2001_; size_t v___x_2002_; size_t v___x_2003_; lean_object* v___x_2004_; 
v_v_1998_ = lean_array_uget(v_bs_1996_, v_i_1995_);
v___x_1999_ = lean_unsigned_to_nat(0u);
v_bs_x27_2000_ = lean_array_uset(v_bs_1996_, v_i_1995_, v___x_1999_);
v___x_2001_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2001_, 0, v_v_1998_);
v___x_2002_ = ((size_t)1ULL);
v___x_2003_ = lean_usize_add(v_i_1995_, v___x_2002_);
v___x_2004_ = lean_array_uset(v_bs_x27_2000_, v_i_1995_, v___x_2001_);
v_i_1995_ = v___x_2003_;
v_bs_1996_ = v___x_2004_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0___boxed(lean_object* v_sz_2006_, lean_object* v_i_2007_, lean_object* v_bs_2008_){
_start:
{
size_t v_sz_boxed_2009_; size_t v_i_boxed_2010_; lean_object* v_res_2011_; 
v_sz_boxed_2009_ = lean_unbox_usize(v_sz_2006_);
lean_dec(v_sz_2006_);
v_i_boxed_2010_ = lean_unbox_usize(v_i_2007_);
lean_dec(v_i_2007_);
v_res_2011_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(v_sz_boxed_2009_, v_i_boxed_2010_, v_bs_2008_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat(lean_object* v_list_2020_, lean_object* v_totalLength_2021_){
_start:
{
uint8_t v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; size_t v_sz_2026_; size_t v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2023_ = 0;
v___x_2024_ = lean_unsigned_to_nat(2u);
v___x_2025_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_concat___closed__2));
v_sz_2026_ = lean_array_size(v_list_2020_);
v___x_2027_ = ((size_t)0ULL);
v___x_2028_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(v_sz_2026_, v___x_2027_, v_list_2020_);
v___x_2029_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2028_);
v___x_2030_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_totalLength_2021_);
v___x_2031_ = lean_mk_empty_array_with_capacity(v___x_2024_);
v___x_2032_ = lean_array_push(v___x_2031_, v___x_2029_);
v___x_2033_ = lean_array_push(v___x_2032_, v___x_2030_);
v___x_2034_ = l_Lasm_JS_Web_Support_args(v___x_2033_);
v___x_2035_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_2025_, v___x_2034_, v___x_2023_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat___boxed(lean_object* v_list_2036_, lean_object* v_totalLength_2037_, lean_object* v_a_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l_Lasm_JS_Node_Buffer_concat(v_list_2036_, v_totalLength_2037_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_copyBytesFrom(lean_object* v_view_2048_, lean_object* v_offset_2049_, lean_object* v_length_2050_){
_start:
{
uint8_t v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2052_ = 0;
v___x_2053_ = lean_unsigned_to_nat(3u);
v___x_2054_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_copyBytesFrom___closed__2));
v___x_2055_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2055_, 0, v_view_2048_);
v___x_2056_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_offset_2049_);
v___x_2057_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_length_2050_);
v___x_2058_ = lean_mk_empty_array_with_capacity(v___x_2053_);
v___x_2059_ = lean_array_push(v___x_2058_, v___x_2055_);
v___x_2060_ = lean_array_push(v___x_2059_, v___x_2056_);
v___x_2061_ = lean_array_push(v___x_2060_, v___x_2057_);
v___x_2062_ = l_Lasm_JS_Web_Support_args(v___x_2061_);
v___x_2063_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_2054_, v___x_2062_, v___x_2052_);
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_copyBytesFrom___boxed(lean_object* v_view_2064_, lean_object* v_offset_2065_, lean_object* v_length_2066_, lean_object* v_a_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_Lasm_JS_Node_Buffer_copyBytesFrom(v_view_2064_, v_offset_2065_, v_length_2066_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_from_spec__0(size_t v_sz_2069_, size_t v_i_2070_, lean_object* v_bs_2071_){
_start:
{
uint8_t v___x_2072_; 
v___x_2072_ = lean_usize_dec_lt(v_i_2070_, v_sz_2069_);
if (v___x_2072_ == 0)
{
return v_bs_2071_;
}
else
{
lean_object* v_v_2073_; lean_object* v___x_2074_; lean_object* v_bs_x27_2075_; lean_object* v___y_2077_; lean_object* v___x_2082_; lean_object* v___x_2083_; uint8_t v___x_2084_; 
v_v_2073_ = lean_array_uget(v_bs_2071_, v_i_2070_);
v___x_2074_ = lean_unsigned_to_nat(0u);
v_bs_x27_2075_ = lean_array_uset(v_bs_2071_, v_i_2070_, v___x_2074_);
v___x_2082_ = lean_nat_abs(v_v_2073_);
v___x_2083_ = lean_cstr_to_nat("9007199254740991");
v___x_2084_ = lean_nat_dec_le(v___x_2082_, v___x_2083_);
lean_dec(v___x_2082_);
if (v___x_2084_ == 0)
{
lean_object* v___x_2085_; 
v___x_2085_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2085_, 0, v_v_2073_);
v___y_2077_ = v___x_2085_;
goto v___jp_2076_;
}
else
{
double v___x_2086_; lean_object* v___x_2087_; 
v___x_2086_ = l_Float_ofInt(v_v_2073_);
lean_dec(v_v_2073_);
v___x_2087_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2087_, 0, v___x_2086_);
v___y_2077_ = v___x_2087_;
goto v___jp_2076_;
}
v___jp_2076_:
{
size_t v___x_2078_; size_t v___x_2079_; lean_object* v___x_2080_; 
v___x_2078_ = ((size_t)1ULL);
v___x_2079_ = lean_usize_add(v_i_2070_, v___x_2078_);
v___x_2080_ = lean_array_uset(v_bs_x27_2075_, v_i_2070_, v___y_2077_);
v_i_2070_ = v___x_2079_;
v_bs_2071_ = v___x_2080_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_from_spec__0___boxed(lean_object* v_sz_2088_, lean_object* v_i_2089_, lean_object* v_bs_2090_){
_start:
{
size_t v_sz_boxed_2091_; size_t v_i_boxed_2092_; lean_object* v_res_2093_; 
v_sz_boxed_2091_ = lean_unbox_usize(v_sz_2088_);
lean_dec(v_sz_2088_);
v_i_boxed_2092_ = lean_unbox_usize(v_i_2089_);
lean_dec(v_i_2089_);
v_res_2093_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_from_spec__0(v_sz_boxed_2091_, v_i_boxed_2092_, v_bs_2090_);
return v_res_2093_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from(lean_object* v_array_2102_){
_start:
{
uint8_t v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; size_t v_sz_2107_; size_t v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2104_ = 0;
v___x_2105_ = lean_unsigned_to_nat(1u);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_from___closed__2));
v_sz_2107_ = lean_array_size(v_array_2102_);
v___x_2108_ = ((size_t)0ULL);
v___x_2109_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_from_spec__0(v_sz_2107_, v___x_2108_, v_array_2102_);
v___x_2110_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2109_);
v___x_2111_ = lean_mk_empty_array_with_capacity(v___x_2105_);
v___x_2112_ = lean_array_push(v___x_2111_, v___x_2110_);
v___x_2113_ = l_Lasm_JS_Web_Support_args(v___x_2112_);
v___x_2114_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_2106_, v___x_2113_, v___x_2104_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from___boxed(lean_object* v_array_2115_, lean_object* v_a_2116_){
_start:
{
lean_object* v_res_2117_; 
v_res_2117_ = l_Lasm_JS_Node_Buffer_from(v_array_2115_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithArrayBuffer(lean_object* v_arrayBuffer_2125_, lean_object* v_byteOffset_2126_, lean_object* v_length_2127_){
_start:
{
uint8_t v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2129_ = 0;
v___x_2130_ = lean_unsigned_to_nat(3u);
v___x_2131_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___closed__1));
v___x_2132_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2132_, 0, v_arrayBuffer_2125_);
v___x_2133_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_byteOffset_2126_);
v___x_2134_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_length_2127_);
v___x_2135_ = lean_mk_empty_array_with_capacity(v___x_2130_);
v___x_2136_ = lean_array_push(v___x_2135_, v___x_2132_);
v___x_2137_ = lean_array_push(v___x_2136_, v___x_2133_);
v___x_2138_ = lean_array_push(v___x_2137_, v___x_2134_);
v___x_2139_ = l_Lasm_JS_Web_Support_args(v___x_2138_);
v___x_2140_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_2131_, v___x_2139_, v___x_2129_);
return v___x_2140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithArrayBuffer___boxed(lean_object* v_arrayBuffer_2141_, lean_object* v_byteOffset_2142_, lean_object* v_length_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_Lasm_JS_Node_Buffer_fromWithArrayBuffer(v_arrayBuffer_2141_, v_byteOffset_2142_, v_length_2143_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithBuffer(lean_object* v_buffer___2153_){
_start:
{
uint8_t v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2155_ = 0;
v___x_2156_ = lean_unsigned_to_nat(1u);
v___x_2157_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_fromWithBuffer___closed__1));
v___x_2158_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2158_, 0, v_buffer___2153_);
v___x_2159_ = lean_mk_empty_array_with_capacity(v___x_2156_);
v___x_2160_ = lean_array_push(v___x_2159_, v___x_2158_);
v___x_2161_ = l_Lasm_JS_Web_Support_args(v___x_2160_);
v___x_2162_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_2157_, v___x_2161_, v___x_2155_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithBuffer___boxed(lean_object* v_buffer___2163_, lean_object* v_a_2164_){
_start:
{
lean_object* v_res_2165_; 
v_res_2165_ = l_Lasm_JS_Node_Buffer_fromWithBuffer(v_buffer___2163_);
return v_res_2165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_fromWithObject_spec__0(lean_object* v_x_2166_){
_start:
{
if (lean_obj_tag(v_x_2166_) == 0)
{
lean_object* v___x_2167_; 
v___x_2167_ = lean_box(0);
return v___x_2167_;
}
else
{
lean_object* v_val_2168_; 
v_val_2168_ = lean_ctor_get(v_x_2166_, 0);
lean_inc(v_val_2168_);
lean_dec_ref_known(v_x_2166_, 1);
if (lean_obj_tag(v_val_2168_) == 0)
{
lean_object* v_value_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2181_; 
v_value_2169_ = lean_ctor_get(v_val_2168_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v_val_2168_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2171_ = v_val_2168_;
v_isShared_2172_ = v_isSharedCheck_2181_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_value_2169_);
lean_dec(v_val_2168_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2181_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; uint8_t v___x_2175_; 
v___x_2173_ = lean_nat_abs(v_value_2169_);
v___x_2174_ = lean_cstr_to_nat("9007199254740991");
v___x_2175_ = lean_nat_dec_le(v___x_2173_, v___x_2174_);
lean_dec(v___x_2173_);
if (v___x_2175_ == 0)
{
lean_object* v___x_2177_; 
if (v_isShared_2172_ == 0)
{
lean_ctor_set_tag(v___x_2171_, 5);
v___x_2177_ = v___x_2171_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_value_2169_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
else
{
double v___x_2179_; lean_object* v___x_2180_; 
lean_del_object(v___x_2171_);
v___x_2179_ = l_Float_ofInt(v_value_2169_);
lean_dec(v_value_2169_);
v___x_2180_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2180_, 0, v___x_2179_);
return v___x_2180_;
}
}
}
else
{
lean_object* v_value_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
v_value_2182_ = lean_ctor_get(v_val_2168_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v_val_2168_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v_val_2168_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_value_2182_);
lean_dec(v_val_2168_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
lean_ctor_set_tag(v___x_2184_, 4);
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_value_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithObject(lean_object* v_object_2197_, lean_object* v_offsetOrEncoding_2198_, lean_object* v_length_2199_){
_start:
{
uint8_t v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2201_ = 0;
v___x_2202_ = lean_unsigned_to_nat(3u);
v___x_2203_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_fromWithObject___closed__1));
v___x_2204_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_fromWithObject_spec__0(v_offsetOrEncoding_2198_);
v___x_2205_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_length_2199_);
v___x_2206_ = lean_mk_empty_array_with_capacity(v___x_2202_);
v___x_2207_ = lean_array_push(v___x_2206_, v_object_2197_);
v___x_2208_ = lean_array_push(v___x_2207_, v___x_2204_);
v___x_2209_ = lean_array_push(v___x_2208_, v___x_2205_);
v___x_2210_ = l_Lasm_JS_Web_Support_args(v___x_2209_);
v___x_2211_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_2203_, v___x_2210_, v___x_2201_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithObject___boxed(lean_object* v_object_2212_, lean_object* v_offsetOrEncoding_2213_, lean_object* v_length_2214_, lean_object* v_a_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l_Lasm_JS_Node_Buffer_fromWithObject(v_object_2212_, v_offsetOrEncoding_2213_, v_length_2214_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithString(lean_object* v_string_2224_, lean_object* v_encoding_2225_){
_start:
{
uint8_t v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2227_ = 0;
v___x_2228_ = lean_unsigned_to_nat(2u);
v___x_2229_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_fromWithString___closed__1));
v___x_2230_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2230_, 0, v_string_2224_);
v___x_2231_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_2225_);
v___x_2232_ = lean_mk_empty_array_with_capacity(v___x_2228_);
v___x_2233_ = lean_array_push(v___x_2232_, v___x_2230_);
v___x_2234_ = lean_array_push(v___x_2233_, v___x_2231_);
v___x_2235_ = l_Lasm_JS_Web_Support_args(v___x_2234_);
v___x_2236_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_2229_, v___x_2235_, v___x_2227_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_fromWithString___boxed(lean_object* v_string_2237_, lean_object* v_encoding_2238_, lean_object* v_a_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l_Lasm_JS_Node_Buffer_fromWithString(v_string_2237_, v_encoding_2238_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0(lean_object* v_b_2241_, lean_object* v_args_2242_, uint8_t v_await_2243_){
_start:
{
uint64_t v___y_2246_; uint64_t v___y_2247_; uint64_t v___x_2290_; uint64_t v___y_2292_; 
v___x_2290_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0);
if (v_await_2243_ == 0)
{
uint64_t v___x_2297_; 
v___x_2297_ = 0ULL;
v___y_2292_ = v___x_2297_;
goto v___jp_2291_;
}
else
{
uint64_t v___x_2298_; 
v___x_2298_ = 2ULL;
v___y_2292_ = v___x_2298_;
goto v___jp_2291_;
}
v___jp_2245_:
{
uint64_t v_flags_2248_; uint32_t v___x_2249_; lean_object* v___x_2250_; uint32_t v___x_2251_; lean_object* v___x_2252_; 
v_flags_2248_ = lean_uint64_lor(v___y_2246_, v___y_2247_);
v___x_2249_ = 214;
v___x_2250_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2241_, v_args_2242_);
v___x_2251_ = 0;
v___x_2252_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2249_, v_flags_2248_, v___x_2250_, v___x_2251_);
lean_dec(v___x_2250_);
if (lean_obj_tag(v___x_2252_) == 0)
{
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2254_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2252_, 1);
v___x_2254_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2253_);
lean_dec(v_a_2253_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v_a_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
lean_inc(v_a_2255_);
lean_dec_ref_known(v___x_2254_, 1);
v___x_2256_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2241_);
v___x_2257_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(v___x_2256_, v_a_2255_);
lean_dec_ref(v___x_2256_);
return v___x_2257_;
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
v_a_2258_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___x_2254_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2254_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
}
else
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2273_; 
v_a_2266_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2268_ = v___x_2252_;
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2252_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
lean_ctor_set_tag(v___x_2268_, 1);
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_a_2266_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2289_; 
v_a_2274_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2276_ = v___x_2252_;
v_isShared_2277_ = v_isSharedCheck_2289_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2252_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2289_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2287_; 
v___x_2278_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0));
v___x_2279_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2241_);
v___x_2280_ = lean_string_append(v___x_2278_, v___x_2279_);
lean_dec_ref(v___x_2279_);
v___x_2281_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__1));
v___x_2282_ = lean_string_append(v___x_2280_, v___x_2281_);
v___x_2283_ = lean_io_error_to_string(v_a_2274_);
v___x_2284_ = lean_string_append(v___x_2282_, v___x_2283_);
lean_dec_ref(v___x_2283_);
v___x_2285_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 0, v___x_2285_);
v___x_2287_ = v___x_2276_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v___x_2285_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
v___jp_2291_:
{
uint8_t v_construct_2293_; uint64_t v___x_2294_; 
v_construct_2293_ = lean_ctor_get_uint8(v_b_2241_, sizeof(void*)*4);
v___x_2294_ = lean_uint64_lor(v___x_2290_, v___y_2292_);
if (v_construct_2293_ == 0)
{
uint64_t v___x_2295_; 
v___x_2295_ = 0ULL;
v___y_2246_ = v___x_2294_;
v___y_2247_ = v___x_2295_;
goto v___jp_2245_;
}
else
{
uint64_t v___x_2296_; 
v___x_2296_ = 4ULL;
v___y_2246_ = v___x_2294_;
v___y_2247_ = v___x_2296_;
goto v___jp_2245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0___boxed(lean_object* v_b_2299_, lean_object* v_args_2300_, lean_object* v_await_2301_, lean_object* v_a_2302_){
_start:
{
uint8_t v_await_boxed_2303_; lean_object* v_res_2304_; 
v_await_boxed_2303_ = lean_unbox(v_await_2301_);
v_res_2304_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0(v_b_2299_, v_args_2300_, v_await_boxed_2303_);
lean_dec_ref(v_b_2299_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isBuffer(lean_object* v_obj_2313_){
_start:
{
uint8_t v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2315_ = 0;
v___x_2316_ = lean_unsigned_to_nat(1u);
v___x_2317_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_isBuffer___closed__2));
v___x_2318_ = lean_mk_empty_array_with_capacity(v___x_2316_);
v___x_2319_ = lean_array_push(v___x_2318_, v_obj_2313_);
v___x_2320_ = l_Lasm_JS_Web_Support_args(v___x_2319_);
v___x_2321_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0(v___x_2317_, v___x_2320_, v___x_2315_);
return v___x_2321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isBuffer___boxed(lean_object* v_obj_2322_, lean_object* v_a_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l_Lasm_JS_Node_Buffer_isBuffer(v_obj_2322_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding(lean_object* v_encoding_2333_){
_start:
{
uint8_t v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2335_ = 0;
v___x_2336_ = lean_unsigned_to_nat(1u);
v___x_2337_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_isEncoding___closed__2));
v___x_2338_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2338_, 0, v_encoding_2333_);
v___x_2339_ = lean_mk_empty_array_with_capacity(v___x_2336_);
v___x_2340_ = lean_array_push(v___x_2339_, v___x_2338_);
v___x_2341_ = l_Lasm_JS_Web_Support_args(v___x_2340_);
v___x_2342_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0(v___x_2337_, v___x_2341_, v___x_2335_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding___boxed(lean_object* v_encoding_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lasm_JS_Node_Buffer_isEncoding(v_encoding_2343_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_stringLength(lean_object* v_input_2354_, lean_object* v_encoding_2355_){
_start:
{
uint8_t v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2357_ = 0;
v___x_2358_ = lean_unsigned_to_nat(2u);
v___x_2359_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_stringLength___closed__2));
v___x_2360_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2360_, 0, v_input_2354_);
v___x_2361_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_2355_);
v___x_2362_ = lean_mk_empty_array_with_capacity(v___x_2358_);
v___x_2363_ = lean_array_push(v___x_2362_, v___x_2360_);
v___x_2364_ = lean_array_push(v___x_2363_, v___x_2361_);
v___x_2365_ = l_Lasm_JS_Web_Support_args(v___x_2364_);
v___x_2366_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_2359_, v___x_2365_, v___x_2357_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_stringLength___boxed(lean_object* v_input_2367_, lean_object* v_encoding_2368_, lean_object* v_a_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lasm_JS_Node_Buffer_stringLength(v_input_2367_, v_encoding_2368_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0_spec__0(lean_object* v_module_2371_, lean_object* v_o_2372_, lean_object* v_a_2373_){
_start:
{
if (lean_obj_tag(v_a_2373_) == 0)
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
lean_dec(v_o_2372_);
v___x_2375_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__1___closed__0));
v___x_2376_ = lean_string_append(v___x_2375_, v_module_2371_);
v___x_2377_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
v___x_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2377_);
return v___x_2378_;
}
else
{
lean_object* v_tail_2379_; 
v_tail_2379_ = lean_ctor_get(v_a_2373_, 1);
if (lean_obj_tag(v_tail_2379_) == 0)
{
lean_object* v_head_2380_; lean_object* v___x_2381_; 
v_head_2380_ = lean_ctor_get(v_a_2373_, 0);
lean_inc(v_head_2380_);
lean_dec_ref_known(v_a_2373_, 2);
v___x_2381_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_o_2372_, v_head_2380_);
return v___x_2381_;
}
else
{
lean_object* v_head_2382_; lean_object* v___x_2383_; 
lean_inc(v_tail_2379_);
v_head_2382_ = lean_ctor_get(v_a_2373_, 0);
lean_inc(v_head_2382_);
lean_dec_ref_known(v_a_2373_, 2);
v___x_2383_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_2372_, v_head_2382_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v_a_2384_; 
v_a_2384_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v___x_2383_, 1);
v_o_2372_ = v_a_2384_;
v_a_2373_ = v_tail_2379_;
goto _start;
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec(v_tail_2379_);
v_a_2386_ = lean_ctor_get(v___x_2383_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2383_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2383_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2383_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0_spec__0___boxed(lean_object* v_module_2394_, lean_object* v_o_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_){
_start:
{
lean_object* v_res_2398_; 
v_res_2398_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0_spec__0(v_module_2394_, v_o_2395_, v_a_2396_);
lean_dec_ref(v_module_2394_);
return v_res_2398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(lean_object* v_module_2399_, lean_object* v_path_2400_){
_start:
{
lean_object* v___x_2402_; 
lean_inc_ref(v_module_2399_);
v___x_2402_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(v_module_2399_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; lean_object* v___x_2404_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2403_);
lean_dec_ref_known(v___x_2402_, 1);
v___x_2404_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0_spec__0(v_module_2399_, v_a_2403_, v_path_2400_);
lean_dec_ref(v_module_2399_);
return v___x_2404_;
}
else
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2412_; 
lean_dec(v_path_2400_);
lean_dec_ref(v_module_2399_);
v_a_2405_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2407_ = v___x_2402_;
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2402_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2410_; 
if (v_isShared_2408_ == 0)
{
v___x_2410_ = v___x_2407_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_a_2405_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
return v___x_2410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0___boxed(lean_object* v_module_2413_, lean_object* v_path_2414_, lean_object* v_a_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v_module_2413_, v_path_2414_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES(){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_2423_ = ((lean_object*)(l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___closed__1));
v___x_2424_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_2422_, v___x_2423_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES___boxed(lean_object* v_a_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_Lasm_JS_Node_buffer_INSPECT__MAX__BYTES();
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength(){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2432_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_2433_ = ((lean_object*)(l_Lasm_JS_Node_buffer_kMaxLength___closed__1));
v___x_2434_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_2432_, v___x_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength___boxed(lean_object* v_a_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = l_Lasm_JS_Node_buffer_kMaxLength();
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength(){
_start:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2442_ = ((lean_object*)(l_Lasm_JS_Node_SlowBuffer_cast_x3f___closed__0));
v___x_2443_ = ((lean_object*)(l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1));
v___x_2444_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_2442_, v___x_2443_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___boxed(lean_object* v_a_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l_Lasm_JS_Node_buffer_kStringMaxLength();
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0(lean_object* v_b_2447_, lean_object* v_args_2448_, uint8_t v_await_2449_){
_start:
{
uint64_t v___y_2452_; uint64_t v___y_2453_; uint64_t v___x_2496_; uint64_t v___y_2498_; 
v___x_2496_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__0_spec__0_spec__1___closed__0);
if (v_await_2449_ == 0)
{
uint64_t v___x_2503_; 
v___x_2503_ = 0ULL;
v___y_2498_ = v___x_2503_;
goto v___jp_2497_;
}
else
{
uint64_t v___x_2504_; 
v___x_2504_ = 2ULL;
v___y_2498_ = v___x_2504_;
goto v___jp_2497_;
}
v___jp_2451_:
{
uint64_t v_flags_2454_; uint32_t v___x_2455_; lean_object* v___x_2456_; uint32_t v___x_2457_; lean_object* v___x_2458_; 
v_flags_2454_ = lean_uint64_lor(v___y_2452_, v___y_2453_);
v___x_2455_ = 214;
v___x_2456_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2447_, v_args_2448_);
v___x_2457_ = 0;
v___x_2458_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2455_, v_flags_2454_, v___x_2456_, v___x_2457_);
lean_dec(v___x_2456_);
if (lean_obj_tag(v___x_2458_) == 0)
{
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; lean_object* v___x_2460_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2459_);
lean_dec_ref_known(v___x_2458_, 1);
v___x_2460_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2459_);
lean_dec(v_a_2459_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2460_, 1);
v___x_2462_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2447_);
v___x_2463_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v___x_2462_, v_a_2461_);
lean_dec_ref(v___x_2462_);
return v___x_2463_;
}
else
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2471_; 
v_a_2464_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2466_ = v___x_2460_;
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v___x_2460_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
if (v_isShared_2467_ == 0)
{
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_a_2464_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
v_a_2472_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2458_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2458_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
lean_ctor_set_tag(v___x_2474_, 1);
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2495_; 
v_a_2480_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2482_ = v___x_2458_;
v_isShared_2483_ = v_isSharedCheck_2495_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2458_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2495_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2493_; 
v___x_2484_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0));
v___x_2485_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2447_);
v___x_2486_ = lean_string_append(v___x_2484_, v___x_2485_);
lean_dec_ref(v___x_2485_);
v___x_2487_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__1));
v___x_2488_ = lean_string_append(v___x_2486_, v___x_2487_);
v___x_2489_ = lean_io_error_to_string(v_a_2480_);
v___x_2490_ = lean_string_append(v___x_2488_, v___x_2489_);
lean_dec_ref(v___x_2489_);
v___x_2491_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2490_);
if (v_isShared_2483_ == 0)
{
lean_ctor_set(v___x_2482_, 0, v___x_2491_);
v___x_2493_ = v___x_2482_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v___x_2491_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
v___jp_2497_:
{
uint8_t v_construct_2499_; uint64_t v___x_2500_; 
v_construct_2499_ = lean_ctor_get_uint8(v_b_2447_, sizeof(void*)*4);
v___x_2500_ = lean_uint64_lor(v___x_2496_, v___y_2498_);
if (v_construct_2499_ == 0)
{
uint64_t v___x_2501_; 
v___x_2501_ = 0ULL;
v___y_2452_ = v___x_2500_;
v___y_2453_ = v___x_2501_;
goto v___jp_2451_;
}
else
{
uint64_t v___x_2502_; 
v___x_2502_ = 4ULL;
v___y_2452_ = v___x_2500_;
v___y_2453_ = v___x_2502_;
goto v___jp_2451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0___boxed(lean_object* v_b_2505_, lean_object* v_args_2506_, lean_object* v_await_2507_, lean_object* v_a_2508_){
_start:
{
uint8_t v_await_boxed_2509_; lean_object* v_res_2510_; 
v_await_boxed_2509_ = lean_unbox(v_await_2507_);
v_res_2510_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0(v_b_2505_, v_args_2506_, v_await_boxed_2509_);
lean_dec_ref(v_b_2505_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_atob(lean_object* v_data_2519_){
_start:
{
uint8_t v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2521_ = 0;
v___x_2522_ = lean_unsigned_to_nat(1u);
v___x_2523_ = ((lean_object*)(l_Lasm_JS_Node_buffer_atob___closed__2));
v___x_2524_ = lean_mk_empty_array_with_capacity(v___x_2522_);
v___x_2525_ = lean_array_push(v___x_2524_, v_data_2519_);
v___x_2526_ = l_Lasm_JS_Web_Support_args(v___x_2525_);
v___x_2527_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0(v___x_2523_, v___x_2526_, v___x_2521_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_atob___boxed(lean_object* v_data_2528_, lean_object* v_a_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Lasm_JS_Node_buffer_atob(v_data_2528_);
return v_res_2530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_btoa(lean_object* v_data_2539_){
_start:
{
uint8_t v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2541_ = 0;
v___x_2542_ = lean_unsigned_to_nat(1u);
v___x_2543_ = ((lean_object*)(l_Lasm_JS_Node_buffer_btoa___closed__2));
v___x_2544_ = lean_mk_empty_array_with_capacity(v___x_2542_);
v___x_2545_ = lean_array_push(v___x_2544_, v_data_2539_);
v___x_2546_ = l_Lasm_JS_Web_Support_args(v___x_2545_);
v___x_2547_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0(v___x_2543_, v___x_2546_, v___x_2541_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_btoa___boxed(lean_object* v_data_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Lasm_JS_Node_buffer_btoa(v_data_2548_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii(lean_object* v_input_2559_){
_start:
{
uint8_t v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2561_ = 0;
v___x_2562_ = lean_unsigned_to_nat(1u);
v___x_2563_ = ((lean_object*)(l_Lasm_JS_Node_buffer_isAscii___closed__2));
v___x_2564_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2564_, 0, v_input_2559_);
v___x_2565_ = lean_mk_empty_array_with_capacity(v___x_2562_);
v___x_2566_ = lean_array_push(v___x_2565_, v___x_2564_);
v___x_2567_ = l_Lasm_JS_Web_Support_args(v___x_2566_);
v___x_2568_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0(v___x_2563_, v___x_2567_, v___x_2561_);
return v___x_2568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii___boxed(lean_object* v_input_2569_, lean_object* v_a_2570_){
_start:
{
lean_object* v_res_2571_; 
v_res_2571_ = l_Lasm_JS_Node_buffer_isAscii(v_input_2569_);
return v_res_2571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8(lean_object* v_input_2580_){
_start:
{
uint8_t v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2582_ = 0;
v___x_2583_ = lean_unsigned_to_nat(1u);
v___x_2584_ = ((lean_object*)(l_Lasm_JS_Node_buffer_isUtf8___closed__2));
v___x_2585_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2585_, 0, v_input_2580_);
v___x_2586_ = lean_mk_empty_array_with_capacity(v___x_2583_);
v___x_2587_ = lean_array_push(v___x_2586_, v___x_2585_);
v___x_2588_ = l_Lasm_JS_Web_Support_args(v___x_2587_);
v___x_2589_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0(v___x_2584_, v___x_2588_, v___x_2582_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8___boxed(lean_object* v_input_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l_Lasm_JS_Node_buffer_isUtf8(v_input_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_resolveObjectURL(lean_object* v_id_2601_){
_start:
{
uint8_t v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2603_ = 0;
v___x_2604_ = lean_unsigned_to_nat(1u);
v___x_2605_ = ((lean_object*)(l_Lasm_JS_Node_buffer_resolveObjectURL___closed__2));
v___x_2606_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2606_, 0, v_id_2601_);
v___x_2607_ = lean_mk_empty_array_with_capacity(v___x_2604_);
v___x_2608_ = lean_array_push(v___x_2607_, v___x_2606_);
v___x_2609_ = l_Lasm_JS_Web_Support_args(v___x_2608_);
v___x_2610_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2605_, v___x_2609_, v___x_2603_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2610_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2610_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
v_a_2619_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2610_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2610_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_resolveObjectURL___boxed(lean_object* v_id_2627_, lean_object* v_a_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lasm_JS_Node_buffer_resolveObjectURL(v_id_2627_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode(lean_object* v_source_2638_, lean_object* v_fromEnc_2639_, lean_object* v_toEnc_2640_){
_start:
{
uint8_t v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2642_ = 0;
v___x_2643_ = lean_unsigned_to_nat(3u);
v___x_2644_ = ((lean_object*)(l_Lasm_JS_Node_buffer_transcode___closed__2));
v___x_2645_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2645_, 0, v_source_2638_);
v___x_2646_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2646_, 0, v_fromEnc_2639_);
v___x_2647_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2647_, 0, v_toEnc_2640_);
v___x_2648_ = lean_mk_empty_array_with_capacity(v___x_2643_);
v___x_2649_ = lean_array_push(v___x_2648_, v___x_2645_);
v___x_2650_ = lean_array_push(v___x_2649_, v___x_2646_);
v___x_2651_ = lean_array_push(v___x_2650_, v___x_2647_);
v___x_2652_ = l_Lasm_JS_Web_Support_args(v___x_2651_);
v___x_2653_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_2644_, v___x_2652_, v___x_2642_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode___boxed(lean_object* v_source_2654_, lean_object* v_fromEnc_2655_, lean_object* v_toEnc_2656_, lean_object* v_a_2657_){
_start:
{
lean_object* v_res_2658_; 
v_res_2658_ = l_Lasm_JS_Node_buffer_transcode(v_source_2654_, v_fromEnc_2655_, v_toEnc_2656_);
return v_res_2658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isLatin1(lean_object* v_input_2667_){
_start:
{
uint8_t v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2669_ = 0;
v___x_2670_ = lean_unsigned_to_nat(1u);
v___x_2671_ = ((lean_object*)(l_Lasm_JS_Node_buffer_isLatin1___closed__2));
v___x_2672_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2672_, 0, v_input_2667_);
v___x_2673_ = lean_mk_empty_array_with_capacity(v___x_2670_);
v___x_2674_ = lean_array_push(v___x_2673_, v___x_2672_);
v___x_2675_ = l_Lasm_JS_Web_Support_args(v___x_2674_);
v___x_2676_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isBuffer_spec__0(v___x_2671_, v___x_2675_, v___x_2669_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isLatin1___boxed(lean_object* v_input_2677_, lean_object* v_a_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Lasm_JS_Node_buffer_isLatin1(v_input_2677_);
return v_res_2679_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_File(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin) {
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
res = initialize_Lasm_JS_Node_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_File(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
