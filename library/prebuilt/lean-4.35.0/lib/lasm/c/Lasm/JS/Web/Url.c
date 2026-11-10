// Lean compiler output
// Module: Lasm.JS.Web.Url
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.File
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg(lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSURL___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSURL___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSURL___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSURL___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSURL___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSURL = (const lean_object*)&l_Lasm_JS_Web_instToJSURL___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSURL___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSURL___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSURL___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURL___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURL___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURL___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSURL___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSURL___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURL___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSURL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lasm.JS.Web.URL"};
static const lean_object* l_Lasm_JS_Web_instFromJSURL___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURL___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSURL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSURL___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSURL___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSURL___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURL___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSURL = (const lean_object*)&l_Lasm_JS_Web_instFromJSURL___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSURLSearchParams = (const lean_object*)&l_Lasm_JS_Web_instToJSURL___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSURLSearchParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.URLSearchParams"};
static const lean_object* l_Lasm_JS_Web_instFromJSURLSearchParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLSearchParams___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSURLSearchParams___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSURL___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSURLSearchParams___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSURLSearchParams___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLSearchParams___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSURLSearchParams = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLSearchParams___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSURLPattern = (const lean_object*)&l_Lasm_JS_Web_instToJSURL___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSURLPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.URLPattern"};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPattern___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPattern___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSURLPattern___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSURL___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSURLPattern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPattern___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPattern___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSURLPattern = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPattern___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBlobOrMediaSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobOrMediaSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobOrMediaSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_record_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_record_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__7_value),((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__4_value),((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__5_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__3, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeArrayStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeArrayStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeArrayStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeArrayStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeArrayStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instCoeArrayStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeRecordStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeRecordStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeRecordStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeRecordStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeRecordStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeRecordStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instCoeRecordStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instCoeStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "protocol"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "username"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "password"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pathname"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "search"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hash"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "baseURL"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSURLPatternInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSURLPatternInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSURLPatternInit___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSURLPatternInit = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInit___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1;
static const lean_string_object l_Lasm_JS_Web_instFromJSURLPatternInit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.URLPatternInit"};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_urlPatternInit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_urlPatternInit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternInput___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSURLPatternInput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSURLPatternInput___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternInput___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInput___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSURLPatternInput = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternInput___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringURLPatternInput___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringURLPatternInput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringURLPatternInput___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeStringURLPatternInput___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeStringURLPatternInput___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringURLPatternInput = (const lean_object*)&l_Lasm_JS_Web_instCoeStringURLPatternInput___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeURLPatternInitURLPatternInput___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeURLPatternInitURLPatternInput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeURLPatternInitURLPatternInput___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeURLPatternInitURLPatternInput___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeURLPatternInitURLPatternInput___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeURLPatternInitURLPatternInput = (const lean_object*)&l_Lasm_JS_Web_instCoeURLPatternInitURLPatternInput___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSURL___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSURLPatternInput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternInput___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternInput___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSURLPatternInput___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.URLPatternInput"};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternInput___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternInput___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSURLPatternInput___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternInput___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternInput___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternInput___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternInput___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSURLPatternInput = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternInput___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ignoreCase"};
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSURLPatternOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSURLPatternOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSURLPatternOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSURLPatternOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSURLPatternOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSURLPatternOptions___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "input"};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "groups"};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2;
static const lean_string_object l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.URLPatternComponentResult"};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult;
static const lean_string_object l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inputs"};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3;
static const lean_string_object l_Lasm_JS_Web_instFromJSURLPatternResult___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.URLPatternResult"};
static const lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__4_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Web.URL.new"};
static const lean_object* l_Lasm_JS_Web_URL_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_URL_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_URL_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_URL_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "URL"};
static const lean_object* l_Lasm_JS_Web_URL_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URL_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_URL_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URL_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URL_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_URL_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_new___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_href___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "href"};
static const lean_object* l_Lasm_JS_Web_URL_href___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_href___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_href(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_href___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHref___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toString"};
static const lean_object* l_Lasm_JS_Web_URL_toString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_toString___closed__0_value;
static const lean_array_object l_Lasm_JS_Web_URL_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_URL_toString___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URL_toString___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toString___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_origin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "origin"};
static const lean_object* l_Lasm_JS_Web_URL_origin___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_origin___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_origin(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_origin___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_protocol(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_protocol___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setProtocol(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setProtocol___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_username(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_username___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setUsername(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setUsername___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_password(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_password___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPassword(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPassword___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_host___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l_Lasm_JS_Web_URL_host___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_host___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_host(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_host___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHost(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHost___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hostname(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hostname___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHostname(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHostname___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_port(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_port___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_pathname(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_pathname___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPathname(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPathname___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_search(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_search___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setSearch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setSearch___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_searchParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "searchParams"};
static const lean_object* l_Lasm_JS_Web_URL_searchParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_searchParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_createObjectURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.URL.createObjectURL"};
static const lean_object* l_Lasm_JS_Web_URL_createObjectURL___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_createObjectURL___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_URL_createObjectURL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "URL.createObjectURL"};
static const lean_object* l_Lasm_JS_Web_URL_createObjectURL___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URL_createObjectURL___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_URL_createObjectURL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URL_createObjectURL___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URL_createObjectURL___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URL_createObjectURL___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URL_createObjectURL___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_revokeObjectURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.URL.revokeObjectURL"};
static const lean_object* l_Lasm_JS_Web_URL_revokeObjectURL___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_revokeObjectURL___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_URL_revokeObjectURL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "URL.revokeObjectURL"};
static const lean_object* l_Lasm_JS_Web_URL_revokeObjectURL___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URL_revokeObjectURL___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_URL_revokeObjectURL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URL_revokeObjectURL___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URL_revokeObjectURL___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URL_revokeObjectURL___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URL_revokeObjectURL___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Option (Lasm.JS.Web.URL)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Web.URL.parse"};
static const lean_object* l_Lasm_JS_Web_URL_parse___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_parse___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_URL_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "URL.parse"};
static const lean_object* l_Lasm_JS_Web_URL_parse___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URL_parse___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_URL_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URL_parse___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URL_parse___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URL_parse___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URL_parse___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_canParse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.URL.canParse"};
static const lean_object* l_Lasm_JS_Web_URL_canParse___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_canParse___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_URL_canParse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "URL.canParse"};
static const lean_object* l_Lasm_JS_Web_URL_canParse___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URL_canParse___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_URL_canParse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URL_canParse___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URL_canParse___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URL_canParse___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URL_canParse___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_toJSON___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toJSON"};
static const lean_object* l_Lasm_JS_Web_URL_toJSON___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_toJSON___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Web_URL_toJSON___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_URL_toJSON___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.URLSearchParams.new"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "URLSearchParams"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_URLSearchParams_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLSearchParams_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URLSearchParams_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_size___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_size___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_size___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_append___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_append___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_append___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_delete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_delete___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_delete___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_get___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_get___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSURL___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Array (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "an element is not String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_getAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "getAll"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_getAll___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_getAll___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_has___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "has"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_has___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_has___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_set___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_set___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_set___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_sort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_sort___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_sort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected a two-element array"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 25, .m_data = "Array ((String × String))"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 35, .m_data = "an element is not (String × String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.Support.iterate"};
static const lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Array.from"};
static const lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_entries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entries"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_entries___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_entries___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_keys___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "keys"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_keys___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_keys___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_values___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "values"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_values___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_values___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLPattern_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.URLPattern.new"};
static const lean_object* l_Lasm_JS_Web_URLPattern_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_URLPattern_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "URLPattern"};
static const lean_object* l_Lasm_JS_Web_URLPattern_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_URLPattern_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLPattern_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URLPattern_new___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URLPattern_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLPattern_newWithOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.URLPattern.newWithOptions"};
static const lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_newWithOptions___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_URLPattern_newWithOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLPattern_newWithOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URLPattern_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_newWithOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLPattern_hasRegExpGroups___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "hasRegExpGroups"};
static const lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_hasRegExpGroups___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLPattern_test___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "test"};
static const lean_object* l_Lasm_JS_Web_URLPattern_test___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_test___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Option (Array (Lasm.JS.Web.URLPatternInput))"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "an element is not Lasm.JS.Web.URLPatternInput"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "property "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Option (Lasm.JS.Web.Record (Option (String)))"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Option (Lasm.JS.Web.URLPatternComponentResult)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Option (Lasm.JS.Web.URLPatternResult)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.Support.cloneAs"};
static const lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structuredClone"};
static const lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLPattern_exec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exec"};
static const lean_object* l_Lasm_JS_Web_URLPattern_exec___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_exec___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURL___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURL___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURL___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURL___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSURL___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx(lean_object* v_x_36_){
_start:
{
if (lean_obj_tag(v_x_36_) == 0)
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(0u);
return v___x_37_;
}
else
{
lean_object* v___x_38_; 
v___x_38_ = lean_unsigned_to_nat(1u);
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx___boxed(lean_object* v_x_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx(v_x_39_);
lean_dec_ref(v_x_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(lean_object* v_t_41_, lean_object* v_k_42_){
_start:
{
lean_object* v_value_43_; lean_object* v___x_44_; 
v_value_43_ = lean_ctor_get(v_t_41_, 0);
lean_inc(v_value_43_);
lean_dec_ref(v_t_41_);
v___x_44_ = lean_apply_1(v_k_42_, v_value_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim(lean_object* v_motive_45_, lean_object* v_ctorIdx_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_k_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_47_, v_k_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___boxed(lean_object* v_motive_51_, lean_object* v_ctorIdx_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_k_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim(v_motive_51_, v_ctorIdx_52_, v_t_53_, v_h_54_, v_k_55_);
lean_dec(v_ctorIdx_52_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim___redArg(lean_object* v_t_57_, lean_object* v_blob_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_57_, v_blob_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim(lean_object* v_motive_60_, lean_object* v_t_61_, lean_object* v_h_62_, lean_object* v_blob_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_61_, v_blob_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim___redArg(lean_object* v_t_65_, lean_object* v_mediaSource_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_65_, v_mediaSource_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_mediaSource_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_69_, v_mediaSource_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0(lean_object* v_x_73_){
_start:
{
lean_object* v_value_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v_value_74_ = lean_ctor_get(v_x_73_, 0);
v___x_75_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
lean_inc(v_value_74_);
v___x_76_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_76_, 0, v_value_74_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0___boxed(lean_object* v_x_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0(v_x_77_);
lean_dec_ref(v_x_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___lam__0(lean_object* v_value_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v_value_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx(lean_object* v_x_85_){
_start:
{
switch(lean_obj_tag(v_x_85_))
{
case 0:
{
lean_object* v___x_86_; 
v___x_86_ = lean_unsigned_to_nat(0u);
return v___x_86_;
}
case 1:
{
lean_object* v___x_87_; 
v___x_87_ = lean_unsigned_to_nat(1u);
return v___x_87_;
}
default: 
{
lean_object* v___x_88_; 
v___x_88_ = lean_unsigned_to_nat(2u);
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx___boxed(lean_object* v_x_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx(v_x_89_);
lean_dec_ref(v_x_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(lean_object* v_t_91_, lean_object* v_k_92_){
_start:
{
lean_object* v_value_93_; lean_object* v___x_94_; 
v_value_93_ = lean_ctor_get(v_t_91_, 0);
lean_inc_ref(v_value_93_);
lean_dec_ref(v_t_91_);
v___x_94_ = lean_apply_1(v_k_92_, v_value_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim(lean_object* v_motive_95_, lean_object* v_ctorIdx_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_k_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_97_, v_k_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___boxed(lean_object* v_motive_101_, lean_object* v_ctorIdx_102_, lean_object* v_t_103_, lean_object* v_h_104_, lean_object* v_k_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim(v_motive_101_, v_ctorIdx_102_, v_t_103_, v_h_104_, v_k_105_);
lean_dec(v_ctorIdx_102_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_sequence_elim___redArg(lean_object* v_t_107_, lean_object* v_sequence_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_107_, v_sequence_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_sequence_elim(lean_object* v_motive_110_, lean_object* v_t_111_, lean_object* v_h_112_, lean_object* v_sequence_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_111_, v_sequence_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_record_elim___redArg(lean_object* v_t_115_, lean_object* v_record_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_115_, v_record_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_record_elim(lean_object* v_motive_118_, lean_object* v_t_119_, lean_object* v_h_120_, lean_object* v_record_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_119_, v_record_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_usvString_elim___redArg(lean_object* v_t_123_, lean_object* v_usvString_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_123_, v_usvString_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_usvString_elim(lean_object* v_motive_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_usvString_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_127_, v_usvString_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object* v_x_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_132_, 0, v_x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1(lean_object* v___f_152_, lean_object* v_x_153_){
_start:
{
lean_object* v___x_154_; size_t v_sz_155_; size_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_154_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9));
v_sz_155_ = lean_array_size(v_x_153_);
v___x_156_ = ((size_t)0ULL);
v___x_157_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_154_, v___f_152_, v_sz_155_, v___x_156_, v_x_153_);
v___x_158_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__2(lean_object* v_x_159_){
_start:
{
lean_object* v_fst_160_; lean_object* v_snd_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_fst_160_ = lean_ctor_get(v_x_159_, 0);
v_snd_161_ = lean_ctor_get(v_x_159_, 1);
v_isSharedCheck_169_ = !lean_is_exclusive(v_x_159_);
if (v_isSharedCheck_169_ == 0)
{
v___x_163_ = v_x_159_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_snd_161_);
lean_inc(v_fst_160_);
lean_dec(v_x_159_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_165_; lean_object* v___x_167_; 
v___x_165_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_165_, 0, v_snd_161_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 1, v___x_165_);
v___x_167_ = v___x_163_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_fst_160_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___x_165_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__3(lean_object* v___f_170_, lean_object* v___f_171_, lean_object* v_x_172_){
_start:
{
switch(lean_obj_tag(v_x_172_))
{
case 0:
{
lean_object* v_value_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_184_; 
lean_dec_ref(v___f_171_);
v_value_173_ = lean_ctor_get(v_x_172_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_184_ == 0)
{
v___x_175_ = v_x_172_;
v_isShared_176_ = v_isSharedCheck_184_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_value_173_);
lean_dec(v_x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_184_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; size_t v_sz_178_; size_t v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_177_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9));
v_sz_178_ = lean_array_size(v_value_173_);
v___x_179_ = ((size_t)0ULL);
v___x_180_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_177_, v___f_170_, v_sz_178_, v___x_179_, v_value_173_);
if (v_isShared_176_ == 0)
{
lean_ctor_set_tag(v___x_175_, 7);
lean_ctor_set(v___x_175_, 0, v___x_180_);
v___x_182_ = v___x_175_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
case 1:
{
lean_object* v_value_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_196_; 
lean_dec_ref(v___f_170_);
v_value_185_ = lean_ctor_get(v_x_172_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_196_ == 0)
{
v___x_187_ = v_x_172_;
v_isShared_188_ = v_isSharedCheck_196_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_value_185_);
lean_dec(v_x_172_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_196_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_189_; size_t v_sz_190_; size_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_189_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9));
v_sz_190_ = lean_array_size(v_value_185_);
v___x_191_ = ((size_t)0ULL);
v___x_192_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_189_, v___f_171_, v_sz_190_, v___x_191_, v_value_185_);
if (v_isShared_188_ == 0)
{
lean_ctor_set_tag(v___x_187_, 8);
lean_ctor_set(v___x_187_, 0, v___x_192_);
v___x_194_ = v___x_187_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
default: 
{
lean_object* v_value_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
lean_dec_ref(v___f_171_);
lean_dec_ref(v___f_170_);
v_value_197_ = lean_ctor_get(v_x_172_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v_x_172_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_value_197_);
lean_dec(v_x_172_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set_tag(v___x_199_, 4);
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_value_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object* v_value_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_214_, 0, v_value_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeRecordStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object* v_value_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_218_, 0, v_value_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object* v_value_221_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_222_, 0, v_value_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0(lean_object* v___f_234_, lean_object* v_d_235_){
_start:
{
lean_object* v_protocol_236_; lean_object* v_username_237_; lean_object* v_password_238_; lean_object* v_hostname_239_; lean_object* v_port_240_; lean_object* v_pathname_241_; lean_object* v_search_242_; lean_object* v_hash_243_; lean_object* v_baseURL_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v_protocol_236_ = lean_ctor_get(v_d_235_, 0);
lean_inc(v_protocol_236_);
v_username_237_ = lean_ctor_get(v_d_235_, 1);
lean_inc(v_username_237_);
v_password_238_ = lean_ctor_get(v_d_235_, 2);
lean_inc(v_password_238_);
v_hostname_239_ = lean_ctor_get(v_d_235_, 3);
lean_inc(v_hostname_239_);
v_port_240_ = lean_ctor_get(v_d_235_, 4);
lean_inc(v_port_240_);
v_pathname_241_ = lean_ctor_get(v_d_235_, 5);
lean_inc(v_pathname_241_);
v_search_242_ = lean_ctor_get(v_d_235_, 6);
lean_inc(v_search_242_);
v_hash_243_ = lean_ctor_get(v_d_235_, 7);
lean_inc(v_hash_243_);
v_baseURL_244_ = lean_ctor_get(v_d_235_, 8);
lean_inc(v_baseURL_244_);
lean_dec_ref(v_d_235_);
v___x_245_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref_n(v___f_234_, 8);
v___x_246_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_234_, v_protocol_236_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_249_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_234_, v_username_237_);
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_248_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_252_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_234_, v_password_238_);
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_251_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_255_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_234_, v_hostname_239_);
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_258_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_234_, v_port_240_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_257_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_261_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_234_, v_pathname_241_);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_260_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_264_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_234_, v_search_242_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_267_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_234_, v_hash_243_);
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_266_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_270_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_234_, v_baseURL_244_);
v___x_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = lean_unsigned_to_nat(9u);
v___x_273_ = lean_mk_empty_array_with_capacity(v___x_272_);
v___x_274_ = lean_array_push(v___x_273_, v___x_247_);
v___x_275_ = lean_array_push(v___x_274_, v___x_250_);
v___x_276_ = lean_array_push(v___x_275_, v___x_253_);
v___x_277_ = lean_array_push(v___x_276_, v___x_256_);
v___x_278_ = lean_array_push(v___x_277_, v___x_259_);
v___x_279_ = lean_array_push(v___x_278_, v___x_262_);
v___x_280_ = lean_array_push(v___x_279_, v___x_265_);
v___x_281_ = lean_array_push(v___x_280_, v___x_268_);
v___x_282_ = lean_array_push(v___x_281_, v___x_271_);
v___x_283_ = l_Lasm_JS_Web_Support_fields(v___x_282_);
lean_dec_ref(v___x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0(lean_object* v___x_288_, lean_object* v_d_289_){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v___x_288_);
v___x_291_ = l_Lasm_JS_readField___redArg(v___x_288_, v_d_289_, v___x_290_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
lean_dec_ref(v___x_288_);
v_a_292_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___x_291_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_291_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_a_292_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
else
{
lean_object* v_a_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_a_300_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_a_300_);
lean_dec_ref_known(v___x_291_, 1);
v___x_301_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v___x_288_);
v___x_302_ = l_Lasm_JS_readField___redArg(v___x_288_, v_d_289_, v___x_301_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
lean_dec(v_a_300_);
lean_dec_ref(v___x_288_);
v_a_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
else
{
lean_object* v_a_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_a_311_ = lean_ctor_get(v___x_302_, 0);
lean_inc(v_a_311_);
lean_dec_ref_known(v___x_302_, 1);
v___x_312_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v___x_288_);
v___x_313_ = l_Lasm_JS_readField___redArg(v___x_288_, v_d_289_, v___x_312_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec(v_a_311_);
lean_dec(v_a_300_);
lean_dec_ref(v___x_288_);
v_a_314_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_313_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_313_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
else
{
lean_object* v_a_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_a_322_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_322_);
lean_dec_ref_known(v___x_313_, 1);
v___x_323_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v___x_288_);
v___x_324_ = l_Lasm_JS_readField___redArg(v___x_288_, v_d_289_, v___x_323_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_dec(v_a_322_);
lean_dec(v_a_311_);
lean_dec(v_a_300_);
lean_dec_ref(v___x_288_);
v_a_325_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_324_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
else
{
lean_object* v_a_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_a_333_ = lean_ctor_get(v___x_324_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_324_, 1);
v___x_334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v___x_288_);
v___x_335_ = l_Lasm_JS_readField___redArg(v___x_288_, v_d_289_, v___x_334_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_dec(v_a_333_);
lean_dec(v_a_322_);
lean_dec(v_a_311_);
lean_dec(v_a_300_);
lean_dec_ref(v___x_288_);
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_a_344_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_335_, 1);
v___x_345_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v___x_288_);
v___x_346_ = l_Lasm_JS_readField___redArg(v___x_288_, v_d_289_, v___x_345_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
lean_dec(v_a_344_);
lean_dec(v_a_333_);
lean_dec(v_a_322_);
lean_dec(v_a_311_);
lean_dec(v_a_300_);
lean_dec_ref(v___x_288_);
v_a_347_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_346_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_346_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
else
{
lean_object* v_a_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_a_355_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_346_, 1);
v___x_356_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v___x_288_);
v___x_357_ = l_Lasm_JS_readField___redArg(v___x_288_, v_d_289_, v___x_356_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_365_; 
lean_dec(v_a_355_);
lean_dec(v_a_344_);
lean_dec(v_a_333_);
lean_dec(v_a_322_);
lean_dec(v_a_311_);
lean_dec(v_a_300_);
lean_dec_ref(v___x_288_);
v_a_358_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_365_ == 0)
{
v___x_360_ = v___x_357_;
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_357_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
else
{
lean_object* v_a_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v_a_366_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_366_);
lean_dec_ref_known(v___x_357_, 1);
v___x_367_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc_ref(v___x_288_);
v___x_368_ = l_Lasm_JS_readField___redArg(v___x_288_, v_d_289_, v___x_367_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
lean_dec(v_a_366_);
lean_dec(v_a_355_);
lean_dec(v_a_344_);
lean_dec(v_a_333_);
lean_dec(v_a_322_);
lean_dec(v_a_311_);
lean_dec(v_a_300_);
lean_dec_ref(v___x_288_);
v_a_369_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_376_ == 0)
{
v___x_371_ = v___x_368_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_368_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_369_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v_a_377_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_a_377_);
lean_dec_ref_known(v___x_368_, 1);
v___x_378_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_379_ = l_Lasm_JS_readField___redArg(v___x_288_, v_d_289_, v___x_378_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
lean_dec(v_a_377_);
lean_dec(v_a_366_);
lean_dec(v_a_355_);
lean_dec(v_a_344_);
lean_dec(v_a_333_);
lean_dec(v_a_322_);
lean_dec(v_a_311_);
lean_dec(v_a_300_);
v_a_380_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_379_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_379_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_396_; 
v_a_388_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_396_ == 0)
{
v___x_390_ = v___x_379_;
v_isShared_391_ = v_isSharedCheck_396_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_379_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_396_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_392_; lean_object* v___x_394_; 
v___x_392_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_392_, 0, v_a_300_);
lean_ctor_set(v___x_392_, 1, v_a_311_);
lean_ctor_set(v___x_392_, 2, v_a_322_);
lean_ctor_set(v___x_392_, 3, v_a_333_);
lean_ctor_set(v___x_392_, 4, v_a_344_);
lean_ctor_set(v___x_392_, 5, v_a_355_);
lean_ctor_set(v___x_392_, 6, v_a_366_);
lean_ctor_set(v___x_392_, 7, v_a_377_);
lean_ctor_set(v___x_392_, 8, v_a_388_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v___x_392_);
v___x_394_ = v___x_390_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0___boxed(lean_object* v___x_397_, lean_object* v_d_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0(v___x_397_, v_d_398_);
lean_dec(v_d_398_);
return v_res_399_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = l_Lasm_JS_instFromJSString;
v___x_401_ = l_Lasm_JS_instFromJSOption___redArg(v___x_400_);
return v___x_401_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1(void){
_start:
{
lean_object* v___x_402_; lean_object* v___f_403_; 
v___x_402_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___f_403_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0___boxed), 2, 1);
lean_closure_set(v___f_403_, 0, v___x_402_);
return v___f_403_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3(void){
_start:
{
uint8_t v___x_405_; lean_object* v___x_406_; lean_object* v___f_407_; lean_object* v___x_408_; 
v___x_405_ = 0;
v___x_406_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternInit___closed__2));
v___f_407_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1);
v___x_408_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_408_, 0, v___f_407_);
lean_ctor_set(v___x_408_, 1, v___x_406_);
lean_ctor_set_uint8(v___x_408_, sizeof(void*)*2, v___x_405_);
return v___x_408_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit(void){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx(lean_object* v_x_410_){
_start:
{
if (lean_obj_tag(v_x_410_) == 0)
{
lean_object* v___x_411_; 
v___x_411_ = lean_unsigned_to_nat(0u);
return v___x_411_;
}
else
{
lean_object* v___x_412_; 
v___x_412_ = lean_unsigned_to_nat(1u);
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx___boxed(lean_object* v_x_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lasm_JS_Web_URLPatternInput_ctorIdx(v_x_413_);
lean_dec_ref(v_x_413_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(lean_object* v_t_415_, lean_object* v_k_416_){
_start:
{
lean_object* v_value_417_; lean_object* v___x_418_; 
v_value_417_ = lean_ctor_get(v_t_415_, 0);
lean_inc_ref(v_value_417_);
lean_dec_ref(v_t_415_);
v___x_418_ = lean_apply_1(v_k_416_, v_value_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim(lean_object* v_motive_419_, lean_object* v_ctorIdx_420_, lean_object* v_t_421_, lean_object* v_h_422_, lean_object* v_k_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_421_, v_k_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim___boxed(lean_object* v_motive_425_, lean_object* v_ctorIdx_426_, lean_object* v_t_427_, lean_object* v_h_428_, lean_object* v_k_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lasm_JS_Web_URLPatternInput_ctorElim(v_motive_425_, v_ctorIdx_426_, v_t_427_, v_h_428_, v_k_429_);
lean_dec(v_ctorIdx_426_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_usvString_elim___redArg(lean_object* v_t_431_, lean_object* v_usvString_432_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_431_, v_usvString_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_usvString_elim(lean_object* v_motive_434_, lean_object* v_t_435_, lean_object* v_h_436_, lean_object* v_usvString_437_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_435_, v_usvString_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_urlPatternInit_elim___redArg(lean_object* v_t_439_, lean_object* v_urlPatternInit_440_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_439_, v_urlPatternInit_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_urlPatternInit_elim(lean_object* v_motive_442_, lean_object* v_t_443_, lean_object* v_h_444_, lean_object* v_urlPatternInit_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_443_, v_urlPatternInit_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternInput___lam__0(lean_object* v_x_447_){
_start:
{
if (lean_obj_tag(v_x_447_) == 0)
{
lean_object* v_value_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
v_value_448_ = lean_ctor_get(v_x_447_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_447_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v_x_447_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_value_448_);
lean_dec(v_x_447_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
lean_ctor_set_tag(v___x_450_, 4);
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_value_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
else
{
lean_object* v_value_456_; lean_object* v_protocol_457_; lean_object* v_username_458_; lean_object* v_password_459_; lean_object* v_hostname_460_; lean_object* v_port_461_; lean_object* v_pathname_462_; lean_object* v_search_463_; lean_object* v_hash_464_; lean_object* v_baseURL_465_; lean_object* v___f_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v_value_456_ = lean_ctor_get(v_x_447_, 0);
lean_inc_ref(v_value_456_);
lean_dec_ref_known(v_x_447_, 1);
v_protocol_457_ = lean_ctor_get(v_value_456_, 0);
lean_inc(v_protocol_457_);
v_username_458_ = lean_ctor_get(v_value_456_, 1);
lean_inc(v_username_458_);
v_password_459_ = lean_ctor_get(v_value_456_, 2);
lean_inc(v_password_459_);
v_hostname_460_ = lean_ctor_get(v_value_456_, 3);
lean_inc(v_hostname_460_);
v_port_461_ = lean_ctor_get(v_value_456_, 4);
lean_inc(v_port_461_);
v_pathname_462_ = lean_ctor_get(v_value_456_, 5);
lean_inc(v_pathname_462_);
v_search_463_ = lean_ctor_get(v_value_456_, 6);
lean_inc(v_search_463_);
v_hash_464_ = lean_ctor_get(v_value_456_, 7);
lean_inc(v_hash_464_);
v_baseURL_465_ = lean_ctor_get(v_value_456_, 8);
lean_inc(v_baseURL_465_);
lean_dec_ref(v_value_456_);
v___f_466_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___closed__0));
v___x_467_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_468_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_466_, v_protocol_457_);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_467_);
lean_ctor_set(v___x_469_, 1, v___x_468_);
v___x_470_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_471_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_466_, v_username_458_);
v___x_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_474_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_466_, v_password_459_);
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_473_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v___x_476_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_477_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_466_, v_hostname_460_);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_476_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___x_479_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_480_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_466_, v_port_461_);
v___x_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_483_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_466_, v_pathname_462_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_486_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_466_, v_search_463_);
v___x_487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_489_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_466_, v_hash_464_);
v___x_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_488_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_492_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_466_, v_baseURL_465_);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = lean_unsigned_to_nat(9u);
v___x_495_ = lean_mk_empty_array_with_capacity(v___x_494_);
v___x_496_ = lean_array_push(v___x_495_, v___x_469_);
v___x_497_ = lean_array_push(v___x_496_, v___x_472_);
v___x_498_ = lean_array_push(v___x_497_, v___x_475_);
v___x_499_ = lean_array_push(v___x_498_, v___x_478_);
v___x_500_ = lean_array_push(v___x_499_, v___x_481_);
v___x_501_ = lean_array_push(v___x_500_, v___x_484_);
v___x_502_ = lean_array_push(v___x_501_, v___x_487_);
v___x_503_ = lean_array_push(v___x_502_, v___x_490_);
v___x_504_ = lean_array_push(v___x_503_, v___x_493_);
v___x_505_ = l_Lasm_JS_Web_Support_fields(v___x_504_);
lean_dec_ref(v___x_504_);
return v___x_505_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringURLPatternInput___lam__0(lean_object* v_value_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v_value_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeURLPatternInitURLPatternInput___lam__0(lean_object* v_value_512_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_513_, 0, v_value_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0(lean_object* v_x_518_){
_start:
{
switch(lean_obj_tag(v_x_518_))
{
case 4:
{
lean_object* v_s_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_527_; 
v_s_519_ = lean_ctor_get(v_x_518_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v_x_518_);
if (v_isSharedCheck_527_ == 0)
{
v___x_521_ = v_x_518_;
v_isShared_522_ = v_isSharedCheck_527_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_s_519_);
lean_dec(v_x_518_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_527_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set_tag(v___x_521_, 0);
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_s_519_);
v___x_524_ = v_reuseFailAlloc_526_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_object* v___x_525_; 
v___x_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
return v___x_525_;
}
}
}
case 8:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_528_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___x_529_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_530_ = l_Lasm_JS_readField___redArg(v___x_528_, v_x_518_, v___x_529_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_538_; 
lean_dec_ref_known(v_x_518_, 1);
v_a_531_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_538_ == 0)
{
v___x_533_ = v___x_530_;
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_530_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_536_; 
if (v_isShared_534_ == 0)
{
v___x_536_ = v___x_533_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_531_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
else
{
lean_object* v_a_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v_a_539_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_539_);
lean_dec_ref_known(v___x_530_, 1);
v___x_540_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_541_ = l_Lasm_JS_readField___redArg(v___x_528_, v_x_518_, v___x_540_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec(v_a_539_);
lean_dec_ref_known(v_x_518_, 1);
v_a_542_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_541_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_541_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v_a_550_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v___x_541_, 1);
v___x_551_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_552_ = l_Lasm_JS_readField___redArg(v___x_528_, v_x_518_, v___x_551_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
lean_dec(v_a_550_);
lean_dec(v_a_539_);
lean_dec_ref_known(v_x_518_, 1);
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_a_561_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_552_, 1);
v___x_562_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_563_ = l_Lasm_JS_readField___redArg(v___x_528_, v_x_518_, v___x_562_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
lean_dec(v_a_561_);
lean_dec(v_a_550_);
lean_dec(v_a_539_);
lean_dec_ref_known(v_x_518_, 1);
v_a_564_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_563_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_563_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
else
{
lean_object* v_a_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v_a_572_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_a_572_);
lean_dec_ref_known(v___x_563_, 1);
v___x_573_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_574_ = l_Lasm_JS_readField___redArg(v___x_528_, v_x_518_, v___x_573_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
lean_dec(v_a_572_);
lean_dec(v_a_561_);
lean_dec(v_a_550_);
lean_dec(v_a_539_);
lean_dec_ref_known(v_x_518_, 1);
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
lean_object* v_a_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v_a_583_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_574_, 1);
v___x_584_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_585_ = l_Lasm_JS_readField___redArg(v___x_528_, v_x_518_, v___x_584_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
lean_dec(v_a_583_);
lean_dec(v_a_572_);
lean_dec(v_a_561_);
lean_dec(v_a_550_);
lean_dec(v_a_539_);
lean_dec_ref_known(v_x_518_, 1);
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
lean_object* v_a_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_a_594_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_585_, 1);
v___x_595_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_596_ = l_Lasm_JS_readField___redArg(v___x_528_, v_x_518_, v___x_595_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec(v_a_594_);
lean_dec(v_a_583_);
lean_dec(v_a_572_);
lean_dec(v_a_561_);
lean_dec(v_a_550_);
lean_dec(v_a_539_);
lean_dec_ref_known(v_x_518_, 1);
v_a_597_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_596_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_596_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_a_605_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_596_, 1);
v___x_606_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_607_ = l_Lasm_JS_readField___redArg(v___x_528_, v_x_518_, v___x_606_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
lean_dec(v_a_605_);
lean_dec(v_a_594_);
lean_dec(v_a_583_);
lean_dec(v_a_572_);
lean_dec(v_a_561_);
lean_dec(v_a_550_);
lean_dec(v_a_539_);
lean_dec_ref_known(v_x_518_, 1);
v_a_608_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_607_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_607_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_642_; 
v_a_616_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_616_);
lean_dec_ref_known(v___x_607_, 1);
v___x_617_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_618_ = l_Lasm_JS_readField___redArg(v___x_528_, v_x_518_, v___x_617_);
v_isSharedCheck_642_ = !lean_is_exclusive(v_x_518_);
if (v_isSharedCheck_642_ == 0)
{
lean_object* v_unused_643_; 
v_unused_643_ = lean_ctor_get(v_x_518_, 0);
lean_dec(v_unused_643_);
v___x_620_ = v_x_518_;
v_isShared_621_ = v_isSharedCheck_642_;
goto v_resetjp_619_;
}
else
{
lean_dec(v_x_518_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_642_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
if (lean_obj_tag(v___x_618_) == 0)
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_629_; 
lean_del_object(v___x_620_);
lean_dec(v_a_616_);
lean_dec(v_a_605_);
lean_dec(v_a_594_);
lean_dec(v_a_583_);
lean_dec(v_a_572_);
lean_dec(v_a_561_);
lean_dec(v_a_550_);
lean_dec(v_a_539_);
v_a_622_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_629_ == 0)
{
v___x_624_ = v___x_618_;
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_618_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_622_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_641_; 
v_a_630_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_641_ == 0)
{
v___x_632_ = v___x_618_;
v_isShared_633_ = v_isSharedCheck_641_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_618_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_641_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_634_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_634_, 0, v_a_539_);
lean_ctor_set(v___x_634_, 1, v_a_550_);
lean_ctor_set(v___x_634_, 2, v_a_561_);
lean_ctor_set(v___x_634_, 3, v_a_572_);
lean_ctor_set(v___x_634_, 4, v_a_583_);
lean_ctor_set(v___x_634_, 5, v_a_594_);
lean_ctor_set(v___x_634_, 6, v_a_605_);
lean_ctor_set(v___x_634_, 7, v_a_616_);
lean_ctor_set(v___x_634_, 8, v_a_630_);
if (v_isShared_621_ == 0)
{
lean_ctor_set_tag(v___x_620_, 1);
lean_ctor_set(v___x_620_, 0, v___x_634_);
v___x_636_ = v___x_620_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_634_);
v___x_636_ = v_reuseFailAlloc_640_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_638_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_636_);
v___x_638_ = v___x_632_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_644_; 
lean_dec(v_x_518_);
v___x_644_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0___closed__0));
return v___x_644_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0(lean_object* v___f_653_, lean_object* v_d_654_){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_655_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0));
v___x_656_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_653_, v_d_654_);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_655_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = lean_unsigned_to_nat(1u);
v___x_659_ = lean_mk_empty_array_with_capacity(v___x_658_);
v___x_660_ = lean_array_push(v___x_659_, v___x_657_);
v___x_661_ = l_Lasm_JS_Web_Support_fields(v___x_660_);
lean_dec_ref(v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0(lean_object* v___x_668_, lean_object* v___x_669_, lean_object* v_d_670_){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0));
v___x_672_ = l_Lasm_JS_readField___redArg(v___x_668_, v_d_670_, v___x_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec_ref(v___x_669_);
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
lean_object* v_a_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v_a_681_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_672_, 1);
v___x_682_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1));
v___x_683_ = l_Lasm_JS_readField___redArg(v___x_669_, v_d_670_, v___x_682_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_691_; 
lean_dec(v_a_681_);
v_a_684_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_691_ == 0)
{
v___x_686_ = v___x_683_;
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_683_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_689_; 
if (v_isShared_687_ == 0)
{
v___x_689_ = v___x_686_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_684_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_700_; 
v_a_692_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_700_ == 0)
{
v___x_694_ = v___x_683_;
v_isShared_695_ = v_isSharedCheck_700_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_683_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_700_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_696_; lean_object* v___x_698_; 
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v_a_681_);
lean_ctor_set(v___x_696_, 1, v_a_692_);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 0, v___x_696_);
v___x_698_ = v___x_694_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___boxed(lean_object* v___x_701_, lean_object* v___x_702_, lean_object* v_d_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0(v___x_701_, v___x_702_, v_d_703_);
lean_dec(v_d_703_);
return v_res_704_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0(void){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_705_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___x_706_ = l_Lasm_JS_Web_instFromJSRecord___redArg(v___x_705_);
return v___x_706_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_707_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0);
v___x_708_ = l_Lasm_JS_instFromJSOption___redArg(v___x_707_);
return v___x_708_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2(void){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___f_711_; 
v___x_709_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1);
v___x_710_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___f_711_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_711_, 0, v___x_710_);
lean_closure_set(v___f_711_, 1, v___x_709_);
return v___f_711_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4(void){
_start:
{
uint8_t v___x_713_; lean_object* v___x_714_; lean_object* v___f_715_; lean_object* v___x_716_; 
v___x_713_ = 0;
v___x_714_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__3));
v___f_715_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2);
v___x_716_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_716_, 0, v___f_715_);
lean_ctor_set(v___x_716_, 1, v___x_714_);
lean_ctor_set_uint8(v___x_716_, sizeof(void*)*2, v___x_713_);
return v___x_716_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult(void){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0(lean_object* v___x_719_, lean_object* v___x_720_, lean_object* v_d_721_){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0));
v___x_723_ = l_Lasm_JS_readField___redArg(v___x_719_, v_d_721_, v___x_722_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_dec_ref(v___x_720_);
v_a_724_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_723_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v_a_732_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_723_, 1);
v___x_733_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v___x_720_);
v___x_734_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_721_, v___x_733_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec(v_a_732_);
lean_dec_ref(v___x_720_);
v_a_735_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_734_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_734_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v_a_743_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___x_734_, 1);
v___x_744_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v___x_720_);
v___x_745_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_721_, v___x_744_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
lean_dec(v_a_743_);
lean_dec(v_a_732_);
lean_dec_ref(v___x_720_);
v_a_746_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_745_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_745_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v_a_754_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_754_);
lean_dec_ref_known(v___x_745_, 1);
v___x_755_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v___x_720_);
v___x_756_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_721_, v___x_755_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
lean_dec(v_a_754_);
lean_dec(v_a_743_);
lean_dec(v_a_732_);
lean_dec_ref(v___x_720_);
v_a_757_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_a_765_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v___x_756_, 1);
v___x_766_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v___x_720_);
v___x_767_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_721_, v___x_766_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec(v_a_765_);
lean_dec(v_a_754_);
lean_dec(v_a_743_);
lean_dec(v_a_732_);
lean_dec_ref(v___x_720_);
v_a_768_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_767_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_767_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
else
{
lean_object* v_a_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v_a_776_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_a_776_);
lean_dec_ref_known(v___x_767_, 1);
v___x_777_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v___x_720_);
v___x_778_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_721_, v___x_777_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec(v_a_776_);
lean_dec(v_a_765_);
lean_dec(v_a_754_);
lean_dec(v_a_743_);
lean_dec(v_a_732_);
lean_dec_ref(v___x_720_);
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
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
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v_a_787_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_787_);
lean_dec_ref_known(v___x_778_, 1);
v___x_788_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v___x_720_);
v___x_789_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_721_, v___x_788_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec(v_a_787_);
lean_dec(v_a_776_);
lean_dec(v_a_765_);
lean_dec(v_a_754_);
lean_dec(v_a_743_);
lean_dec(v_a_732_);
lean_dec_ref(v___x_720_);
v_a_790_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_789_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v_a_798_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_798_);
lean_dec_ref_known(v___x_789_, 1);
v___x_799_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v___x_720_);
v___x_800_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_721_, v___x_799_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
lean_dec(v_a_798_);
lean_dec(v_a_787_);
lean_dec(v_a_776_);
lean_dec(v_a_765_);
lean_dec(v_a_754_);
lean_dec(v_a_743_);
lean_dec(v_a_732_);
lean_dec_ref(v___x_720_);
v_a_801_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_800_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
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
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v_a_809_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v___x_800_, 1);
v___x_810_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_811_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_721_, v___x_810_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec(v_a_787_);
lean_dec(v_a_776_);
lean_dec(v_a_765_);
lean_dec(v_a_754_);
lean_dec(v_a_743_);
lean_dec(v_a_732_);
v_a_812_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_811_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_811_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_828_; 
v_a_820_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_828_ == 0)
{
v___x_822_ = v___x_811_;
v_isShared_823_ = v_isSharedCheck_828_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_811_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_828_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_824_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_824_, 0, v_a_732_);
lean_ctor_set(v___x_824_, 1, v_a_743_);
lean_ctor_set(v___x_824_, 2, v_a_754_);
lean_ctor_set(v___x_824_, 3, v_a_765_);
lean_ctor_set(v___x_824_, 4, v_a_776_);
lean_ctor_set(v___x_824_, 5, v_a_787_);
lean_ctor_set(v___x_824_, 6, v_a_798_);
lean_ctor_set(v___x_824_, 7, v_a_809_);
lean_ctor_set(v___x_824_, 8, v_a_820_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_824_);
v___x_826_ = v___x_822_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___boxed(lean_object* v___x_829_, lean_object* v___x_830_, lean_object* v_d_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0(v___x_829_, v___x_830_, v_d_831_);
lean_dec(v_d_831_);
return v_res_832_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternInput));
v___x_834_ = l_Lasm_JS_instFromJSArray___redArg(v___x_833_);
return v___x_834_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0);
v___x_836_ = l_Lasm_JS_instFromJSOption___redArg(v___x_835_);
return v___x_836_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_837_ = l_Lasm_JS_Web_instFromJSURLPatternComponentResult;
v___x_838_ = l_Lasm_JS_instFromJSOption___redArg(v___x_837_);
return v___x_838_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3(void){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___f_841_; 
v___x_839_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2);
v___x_840_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1);
v___f_841_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_841_, 0, v___x_840_);
lean_closure_set(v___f_841_, 1, v___x_839_);
return v___f_841_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5(void){
_start:
{
uint8_t v___x_843_; lean_object* v___x_844_; lean_object* v___f_845_; lean_object* v___x_846_; 
v___x_843_ = 0;
v___x_844_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___closed__4));
v___f_845_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3);
v___x_846_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_846_, 0, v___f_845_);
lean_ctor_set(v___x_846_, 1, v___x_844_);
lean_ctor_set_uint8(v___x_846_, sizeof(void*)*2, v___x_843_);
return v___x_846_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult(void){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5);
return v___x_847_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_851_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_852_ = lean_string_utf8_byte_size(v___x_851_);
return v___x_852_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v___x_853_ = lean_unsigned_to_nat(0u);
v___x_854_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3);
v___x_855_ = lean_nat_dec_eq(v___x_854_, v___x_853_);
return v___x_855_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_860_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__8));
v___x_861_ = lean_unsigned_to_nat(46u);
v___x_862_ = lean_unsigned_to_nat(193u);
v___x_863_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v___x_864_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6));
v___x_865_ = l_mkPanicMessageWithDecl(v___x_864_, v___x_863_, v___x_862_, v___x_861_, v___x_860_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(lean_object* v_context_867_, lean_object* v_d_868_){
_start:
{
lean_object* v___y_871_; lean_object* v___y_872_; 
if (lean_obj_tag(v_d_868_) == 9)
{
lean_object* v_value_876_; lean_object* v___x_877_; 
v_value_876_ = lean_ctor_get(v_d_868_, 0);
lean_inc(v_value_876_);
lean_dec_ref_known(v_d_868_, 2);
v___x_877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_877_, 0, v_value_876_);
return v___x_877_;
}
else
{
lean_object* v___x_878_; lean_object* v_received_880_; 
v___x_878_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_868_) == 9)
{
lean_object* v_value_894_; lean_object* v_description_895_; uint8_t v___x_896_; 
v_value_894_ = lean_ctor_get(v_d_868_, 0);
v_description_895_ = lean_ctor_get(v_d_868_, 1);
v___x_896_ = lean_string_dec_eq(v_description_895_, v___x_878_);
if (v___x_896_ == 0)
{
goto v___jp_892_;
}
else
{
uint32_t v___x_897_; uint64_t v___x_898_; lean_object* v___x_899_; uint32_t v___x_900_; lean_object* v___x_901_; 
lean_inc_n(v_value_894_, 2);
lean_dec_ref_known(v_d_868_, 2);
v___x_897_ = 206;
v___x_898_ = 0ULL;
v___x_899_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_899_, 0, v_value_894_);
lean_ctor_set(v___x_899_, 1, v___x_878_);
v___x_900_ = lasm_js_value_handle(v_value_894_);
lean_dec(v_value_894_);
v___x_901_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_897_, v___x_898_, v___x_899_, v___x_900_);
lean_dec_ref_known(v___x_899_, 2);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; uint8_t v___x_903_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
v___x_903_ = lean_string_validate_utf8(v_a_902_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; lean_object* v___x_905_; 
lean_dec(v_a_902_);
v___x_904_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_905_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_904_);
v_received_880_ = v___x_905_;
goto v___jp_879_;
}
else
{
lean_object* v___x_906_; 
v___x_906_ = lean_string_from_utf8_unchecked(v_a_902_);
v_received_880_ = v___x_906_;
goto v___jp_879_;
}
}
else
{
lean_object* v___x_907_; 
lean_dec_ref_known(v___x_901_, 1);
v___x_907_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_880_ = v___x_907_;
goto v___jp_879_;
}
}
}
else
{
goto v___jp_892_;
}
v___jp_879_:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_882_ = lean_string_append(v___x_881_, v_context_867_);
v___x_883_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_884_ = lean_string_append(v___x_882_, v___x_883_);
v___x_885_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURL___closed__1));
v___x_886_ = lean_string_append(v___x_884_, v___x_885_);
v___x_887_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_888_ = lean_string_append(v___x_886_, v___x_887_);
v___x_889_ = lean_string_append(v___x_888_, v_received_880_);
lean_dec_ref(v_received_880_);
v___x_890_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; 
v___x_891_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_871_ = v___x_889_;
v___y_872_ = v___x_891_;
goto v___jp_870_;
}
else
{
v___y_871_ = v___x_889_;
v___y_872_ = v___x_878_;
goto v___jp_870_;
}
}
v___jp_892_:
{
lean_object* v___x_893_; 
v___x_893_ = l_Lasm_JS_Data_describe(v_d_868_);
v_received_880_ = v___x_893_;
goto v___jp_879_;
}
}
v___jp_870_:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_873_ = lean_string_append(v___y_871_, v___y_872_);
v___x_874_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_874_, 0, v___x_873_);
v___x_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___boxed(lean_object* v_context_908_, lean_object* v_d_909_, lean_object* v_a_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(v_context_908_, v_d_909_);
lean_dec_ref(v_context_908_);
return v_res_911_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_913_; uint64_t v___x_914_; 
v___x_913_ = 0;
v___x_914_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_913_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(lean_object* v_b_915_, lean_object* v_args_916_, uint8_t v_await_917_){
_start:
{
uint64_t v___y_920_; uint64_t v___y_921_; uint64_t v___x_964_; uint64_t v___y_966_; 
v___x_964_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_917_ == 0)
{
uint64_t v___x_971_; 
v___x_971_ = 0ULL;
v___y_966_ = v___x_971_;
goto v___jp_965_;
}
else
{
uint64_t v___x_972_; 
v___x_972_ = 2ULL;
v___y_966_ = v___x_972_;
goto v___jp_965_;
}
v___jp_919_:
{
uint64_t v_flags_922_; uint32_t v___x_923_; lean_object* v___x_924_; uint32_t v___x_925_; lean_object* v___x_926_; 
v_flags_922_ = lean_uint64_lor(v___y_920_, v___y_921_);
v___x_923_ = 214;
v___x_924_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_915_, v_args_916_);
v___x_925_ = 0;
v___x_926_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_923_, v_flags_922_, v___x_924_, v___x_925_);
lean_dec(v___x_924_);
if (lean_obj_tag(v___x_926_) == 0)
{
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; lean_object* v___x_928_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_a_927_);
lean_dec_ref_known(v___x_926_, 1);
v___x_928_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_927_);
lean_dec(v_a_927_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v___x_928_, 1);
v___x_930_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_915_);
v___x_931_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(v___x_930_, v_a_929_);
lean_dec_ref(v___x_930_);
return v___x_931_;
}
else
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_939_; 
v_a_932_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_939_ == 0)
{
v___x_934_ = v___x_928_;
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_928_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_939_;
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
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
v_a_940_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_926_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_926_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
lean_ctor_set_tag(v___x_942_, 1);
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_963_; 
v_a_948_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_963_ == 0)
{
v___x_950_ = v___x_926_;
v_isShared_951_ = v_isSharedCheck_963_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_926_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_963_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_961_; 
v___x_952_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_953_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_915_);
v___x_954_ = lean_string_append(v___x_952_, v___x_953_);
lean_dec_ref(v___x_953_);
v___x_955_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_956_ = lean_string_append(v___x_954_, v___x_955_);
v___x_957_ = lean_io_error_to_string(v_a_948_);
v___x_958_ = lean_string_append(v___x_956_, v___x_957_);
lean_dec_ref(v___x_957_);
v___x_959_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 0, v___x_959_);
v___x_961_ = v___x_950_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_959_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
v___jp_965_:
{
uint8_t v_construct_967_; uint64_t v___x_968_; 
v_construct_967_ = lean_ctor_get_uint8(v_b_915_, sizeof(void*)*4);
v___x_968_ = lean_uint64_lor(v___x_964_, v___y_966_);
if (v_construct_967_ == 0)
{
uint64_t v___x_969_; 
v___x_969_ = 0ULL;
v___y_920_ = v___x_968_;
v___y_921_ = v___x_969_;
goto v___jp_919_;
}
else
{
uint64_t v___x_970_; 
v___x_970_ = 4ULL;
v___y_920_ = v___x_968_;
v___y_921_ = v___x_970_;
goto v___jp_919_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___boxed(lean_object* v_b_973_, lean_object* v_args_974_, lean_object* v_await_975_, lean_object* v_a_976_){
_start:
{
uint8_t v_await_boxed_977_; lean_object* v_res_978_; 
v_await_boxed_977_ = lean_unbox(v_await_975_);
v_res_978_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(v_b_973_, v_args_974_, v_await_boxed_977_);
lean_dec_ref(v_b_973_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_new(lean_object* v_url_988_, lean_object* v_base_989_){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; uint8_t v___x_999_; lean_object* v___x_1000_; 
v___x_991_ = lean_unsigned_to_nat(2u);
v___x_992_ = ((lean_object*)(l_Lasm_JS_Web_URL_new___closed__3));
v___x_993_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_993_, 0, v_url_988_);
v___x_994_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_989_);
v___x_995_ = lean_mk_empty_array_with_capacity(v___x_991_);
v___x_996_ = lean_array_push(v___x_995_, v___x_993_);
v___x_997_ = lean_array_push(v___x_996_, v___x_994_);
v___x_998_ = l_Lasm_JS_Web_Support_args(v___x_997_);
v___x_999_ = 0;
v___x_1000_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(v___x_992_, v___x_998_, v___x_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_new___boxed(lean_object* v_url_1001_, lean_object* v_base_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Lasm_JS_Web_URL_new(v_url_1001_, v_base_1002_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_href(lean_object* v_self_1006_){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = ((lean_object*)(l_Lasm_JS_Web_URL_href___closed__0));
v___x_1009_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1006_, v___x_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_href___boxed(lean_object* v_self_1010_, lean_object* v_a_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Lasm_JS_Web_URL_href(v_self_1010_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHref(lean_object* v_self_1013_, lean_object* v_value_1014_){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1016_ = ((lean_object*)(l_Lasm_JS_Web_URL_href___closed__0));
v___x_1017_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_value_1014_);
v___x_1018_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1013_, v___x_1016_, v___x_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHref___boxed(lean_object* v_self_1019_, lean_object* v_value_1020_, lean_object* v_a_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l_Lasm_JS_Web_URL_setHref(v_self_1019_, v_value_1020_);
return v_res_1022_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1023_; uint8_t v___x_1024_; uint64_t v___x_1025_; 
v___x_1023_ = 8ULL;
v___x_1024_ = 0;
v___x_1025_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v___x_1024_, v___x_1023_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(lean_object* v_o_1027_, lean_object* v_name_1028_, lean_object* v_args_1029_){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint64_t v___x_1034_; lean_object* v___x_1035_; 
v___x_1031_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_1032_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1032_, 0, v_o_1027_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
lean_inc_ref(v_name_1028_);
v___x_1033_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1033_, 0, v_name_1028_);
v___x_1034_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0);
v___x_1035_ = l_Lasm_JS_Value_invokeRaw(v___x_1032_, v___x_1033_, v_args_1029_, v___x_1034_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 1);
v___x_1037_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_1038_ = lean_string_append(v___x_1037_, v_name_1028_);
lean_dec_ref(v_name_1028_);
v___x_1039_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_1038_, v_a_1036_);
lean_dec(v_a_1036_);
lean_dec_ref(v___x_1038_);
return v___x_1039_;
}
else
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_dec_ref(v_name_1028_);
v_a_1040_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_1035_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1035_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___boxed(lean_object* v_o_1048_, lean_object* v_name_1049_, lean_object* v_args_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_o_1048_, v_name_1049_, v_args_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toString(lean_object* v_self_1056_){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__0));
v___x_1059_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1060_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1056_, v___x_1058_, v___x_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toString___boxed(lean_object* v_self_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lasm_JS_Web_URL_toString(v_self_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_origin(lean_object* v_self_1065_){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = ((lean_object*)(l_Lasm_JS_Web_URL_origin___closed__0));
v___x_1068_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1065_, v___x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_origin___boxed(lean_object* v_self_1069_, lean_object* v_a_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Lasm_JS_Web_URL_origin(v_self_1069_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_protocol(lean_object* v_self_1072_){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_1075_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1072_, v___x_1074_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_protocol___boxed(lean_object* v_self_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lasm_JS_Web_URL_protocol(v_self_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setProtocol(lean_object* v_self_1079_, lean_object* v_value_1080_){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_1083_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1083_, 0, v_value_1080_);
v___x_1084_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1079_, v___x_1082_, v___x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setProtocol___boxed(lean_object* v_self_1085_, lean_object* v_value_1086_, lean_object* v_a_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Lasm_JS_Web_URL_setProtocol(v_self_1085_, v_value_1086_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_username(lean_object* v_self_1089_){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_1092_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1089_, v___x_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_username___boxed(lean_object* v_self_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lasm_JS_Web_URL_username(v_self_1093_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setUsername(lean_object* v_self_1096_, lean_object* v_value_1097_){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_1100_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1100_, 0, v_value_1097_);
v___x_1101_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1096_, v___x_1099_, v___x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setUsername___boxed(lean_object* v_self_1102_, lean_object* v_value_1103_, lean_object* v_a_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lasm_JS_Web_URL_setUsername(v_self_1102_, v_value_1103_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_password(lean_object* v_self_1106_){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1108_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_1109_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1106_, v___x_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_password___boxed(lean_object* v_self_1110_, lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lasm_JS_Web_URL_password(v_self_1110_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPassword(lean_object* v_self_1113_, lean_object* v_value_1114_){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_1117_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1117_, 0, v_value_1114_);
v___x_1118_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1113_, v___x_1116_, v___x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPassword___boxed(lean_object* v_self_1119_, lean_object* v_value_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lasm_JS_Web_URL_setPassword(v_self_1119_, v_value_1120_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_host(lean_object* v_self_1124_){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = ((lean_object*)(l_Lasm_JS_Web_URL_host___closed__0));
v___x_1127_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1124_, v___x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_host___boxed(lean_object* v_self_1128_, lean_object* v_a_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lasm_JS_Web_URL_host(v_self_1128_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHost(lean_object* v_self_1131_, lean_object* v_value_1132_){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1134_ = ((lean_object*)(l_Lasm_JS_Web_URL_host___closed__0));
v___x_1135_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1135_, 0, v_value_1132_);
v___x_1136_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1131_, v___x_1134_, v___x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHost___boxed(lean_object* v_self_1137_, lean_object* v_value_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lasm_JS_Web_URL_setHost(v_self_1137_, v_value_1138_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hostname(lean_object* v_self_1141_){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_1144_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1141_, v___x_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hostname___boxed(lean_object* v_self_1145_, lean_object* v_a_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lasm_JS_Web_URL_hostname(v_self_1145_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHostname(lean_object* v_self_1148_, lean_object* v_value_1149_){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1151_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_1152_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1152_, 0, v_value_1149_);
v___x_1153_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1148_, v___x_1151_, v___x_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHostname___boxed(lean_object* v_self_1154_, lean_object* v_value_1155_, lean_object* v_a_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lasm_JS_Web_URL_setHostname(v_self_1154_, v_value_1155_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_port(lean_object* v_self_1158_){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_1161_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1158_, v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_port___boxed(lean_object* v_self_1162_, lean_object* v_a_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lasm_JS_Web_URL_port(v_self_1162_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPort(lean_object* v_self_1165_, lean_object* v_value_1166_){
_start:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1168_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_1169_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1169_, 0, v_value_1166_);
v___x_1170_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1165_, v___x_1168_, v___x_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPort___boxed(lean_object* v_self_1171_, lean_object* v_value_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_Lasm_JS_Web_URL_setPort(v_self_1171_, v_value_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_pathname(lean_object* v_self_1175_){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_1178_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1175_, v___x_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_pathname___boxed(lean_object* v_self_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lasm_JS_Web_URL_pathname(v_self_1179_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPathname(lean_object* v_self_1182_, lean_object* v_value_1183_){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_1186_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1186_, 0, v_value_1183_);
v___x_1187_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1182_, v___x_1185_, v___x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPathname___boxed(lean_object* v_self_1188_, lean_object* v_value_1189_, lean_object* v_a_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lasm_JS_Web_URL_setPathname(v_self_1188_, v_value_1189_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_search(lean_object* v_self_1192_){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_1195_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1192_, v___x_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_search___boxed(lean_object* v_self_1196_, lean_object* v_a_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lasm_JS_Web_URL_search(v_self_1196_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setSearch(lean_object* v_self_1199_, lean_object* v_value_1200_){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1202_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_1203_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1203_, 0, v_value_1200_);
v___x_1204_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1199_, v___x_1202_, v___x_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setSearch___boxed(lean_object* v_self_1205_, lean_object* v_value_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lasm_JS_Web_URL_setSearch(v_self_1205_, v_value_1206_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams(lean_object* v_self_1210_){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1212_ = ((lean_object*)(l_Lasm_JS_Web_URL_searchParams___closed__0));
v___x_1213_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1210_, v___x_1212_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1213_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1213_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
else
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
v_a_1222_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1213_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1213_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams___boxed(lean_object* v_self_1230_, lean_object* v_a_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lasm_JS_Web_URL_searchParams(v_self_1230_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash(lean_object* v_self_1233_){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1235_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_1236_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1233_, v___x_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash___boxed(lean_object* v_self_1237_, lean_object* v_a_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lasm_JS_Web_URL_hash(v_self_1237_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash(lean_object* v_self_1240_, lean_object* v_value_1241_){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1243_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_1244_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1244_, 0, v_value_1241_);
v___x_1245_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1240_, v___x_1243_, v___x_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash___boxed(lean_object* v_self_1246_, lean_object* v_value_1247_, lean_object* v_a_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Lasm_JS_Web_URL_setHash(v_self_1246_, v_value_1247_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(lean_object* v_b_1250_, lean_object* v_args_1251_, uint8_t v_await_1252_){
_start:
{
uint64_t v___y_1255_; uint64_t v___y_1256_; uint64_t v___x_1299_; uint64_t v___y_1301_; 
v___x_1299_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1252_ == 0)
{
uint64_t v___x_1306_; 
v___x_1306_ = 0ULL;
v___y_1301_ = v___x_1306_;
goto v___jp_1300_;
}
else
{
uint64_t v___x_1307_; 
v___x_1307_ = 2ULL;
v___y_1301_ = v___x_1307_;
goto v___jp_1300_;
}
v___jp_1254_:
{
uint64_t v_flags_1257_; uint32_t v___x_1258_; lean_object* v___x_1259_; uint32_t v___x_1260_; lean_object* v___x_1261_; 
v_flags_1257_ = lean_uint64_lor(v___y_1255_, v___y_1256_);
v___x_1258_ = 214;
v___x_1259_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1250_, v_args_1251_);
v___x_1260_ = 0;
v___x_1261_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1258_, v_flags_1257_, v___x_1259_, v___x_1260_);
lean_dec(v___x_1259_);
if (lean_obj_tag(v___x_1261_) == 0)
{
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1263_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_1261_, 1);
v___x_1263_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1262_);
lean_dec(v_a_1262_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_a_1264_);
lean_dec_ref_known(v___x_1263_, 1);
v___x_1265_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1250_);
v___x_1266_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v___x_1265_, v_a_1264_);
lean_dec_ref(v___x_1265_);
return v___x_1266_;
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
v_a_1267_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1263_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1263_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
v_a_1275_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1261_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1261_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
lean_ctor_set_tag(v___x_1277_, 1);
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1298_; 
v_a_1283_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1285_ = v___x_1261_;
v_isShared_1286_ = v_isSharedCheck_1298_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1261_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1298_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1296_; 
v___x_1287_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1288_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1250_);
v___x_1289_ = lean_string_append(v___x_1287_, v___x_1288_);
lean_dec_ref(v___x_1288_);
v___x_1290_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1291_ = lean_string_append(v___x_1289_, v___x_1290_);
v___x_1292_ = lean_io_error_to_string(v_a_1283_);
v___x_1293_ = lean_string_append(v___x_1291_, v___x_1292_);
lean_dec_ref(v___x_1292_);
v___x_1294_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 0, v___x_1294_);
v___x_1296_ = v___x_1285_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
v___jp_1300_:
{
uint8_t v_construct_1302_; uint64_t v___x_1303_; 
v_construct_1302_ = lean_ctor_get_uint8(v_b_1250_, sizeof(void*)*4);
v___x_1303_ = lean_uint64_lor(v___x_1299_, v___y_1301_);
if (v_construct_1302_ == 0)
{
uint64_t v___x_1304_; 
v___x_1304_ = 0ULL;
v___y_1255_ = v___x_1303_;
v___y_1256_ = v___x_1304_;
goto v___jp_1254_;
}
else
{
uint64_t v___x_1305_; 
v___x_1305_ = 4ULL;
v___y_1255_ = v___x_1303_;
v___y_1256_ = v___x_1305_;
goto v___jp_1254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0___boxed(lean_object* v_b_1308_, lean_object* v_args_1309_, lean_object* v_await_1310_, lean_object* v_a_1311_){
_start:
{
uint8_t v_await_boxed_1312_; lean_object* v_res_1313_; 
v_await_boxed_1312_ = lean_unbox(v_await_1310_);
v_res_1313_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v_b_1308_, v_args_1309_, v_await_boxed_1312_);
lean_dec_ref(v_b_1308_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL(lean_object* v_obj_1322_){
_start:
{
uint8_t v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___y_1328_; lean_object* v_value_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1324_ = 0;
v___x_1325_ = lean_unsigned_to_nat(1u);
v___x_1326_ = ((lean_object*)(l_Lasm_JS_Web_URL_createObjectURL___closed__2));
v_value_1333_ = lean_ctor_get(v_obj_1322_, 0);
v___x_1334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
lean_inc(v_value_1333_);
v___x_1335_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1335_, 0, v_value_1333_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___y_1328_ = v___x_1335_;
goto v___jp_1327_;
v___jp_1327_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1329_ = lean_mk_empty_array_with_capacity(v___x_1325_);
v___x_1330_ = lean_array_push(v___x_1329_, v___y_1328_);
v___x_1331_ = l_Lasm_JS_Web_Support_args(v___x_1330_);
v___x_1332_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_1326_, v___x_1331_, v___x_1324_);
return v___x_1332_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL___boxed(lean_object* v_obj_1336_, lean_object* v_a_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Lasm_JS_Web_URL_createObjectURL(v_obj_1336_);
lean_dec_ref(v_obj_1336_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(lean_object* v_b_1339_, lean_object* v_args_1340_, uint8_t v_await_1341_){
_start:
{
uint64_t v___y_1344_; uint64_t v___y_1345_; uint64_t v___x_1386_; uint64_t v___y_1388_; 
v___x_1386_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1341_ == 0)
{
uint64_t v___x_1393_; 
v___x_1393_ = 0ULL;
v___y_1388_ = v___x_1393_;
goto v___jp_1387_;
}
else
{
uint64_t v___x_1394_; 
v___x_1394_ = 2ULL;
v___y_1388_ = v___x_1394_;
goto v___jp_1387_;
}
v___jp_1343_:
{
uint64_t v_flags_1346_; uint32_t v___x_1347_; lean_object* v___x_1348_; uint32_t v___x_1349_; lean_object* v___x_1350_; 
v_flags_1346_ = lean_uint64_lor(v___y_1344_, v___y_1345_);
v___x_1347_ = 214;
v___x_1348_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1339_, v_args_1340_);
v___x_1349_ = 0;
v___x_1350_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1347_, v_flags_1346_, v___x_1348_, v___x_1349_);
lean_dec(v___x_1348_);
if (lean_obj_tag(v___x_1350_) == 0)
{
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1352_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
v___x_1352_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1351_);
lean_dec(v_a_1351_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v___x_1353_; 
lean_dec_ref_known(v___x_1352_, 1);
v___x_1353_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_1353_;
}
else
{
lean_object* v_a_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1361_; 
v_a_1354_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1356_ = v___x_1352_;
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_a_1354_);
lean_dec(v___x_1352_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1359_; 
if (v_isShared_1357_ == 0)
{
v___x_1359_ = v___x_1356_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v_a_1354_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
}
else
{
lean_object* v_a_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1369_; 
v_a_1362_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1364_ = v___x_1350_;
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_a_1362_);
lean_dec(v___x_1350_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
lean_object* v___x_1367_; 
if (v_isShared_1365_ == 0)
{
lean_ctor_set_tag(v___x_1364_, 1);
v___x_1367_ = v___x_1364_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v_a_1362_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
}
else
{
lean_object* v_a_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1385_; 
v_a_1370_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1372_ = v___x_1350_;
v_isShared_1373_ = v_isSharedCheck_1385_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_a_1370_);
lean_dec(v___x_1350_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1385_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1375_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1339_);
v___x_1376_ = lean_string_append(v___x_1374_, v___x_1375_);
lean_dec_ref(v___x_1375_);
v___x_1377_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1378_ = lean_string_append(v___x_1376_, v___x_1377_);
v___x_1379_ = lean_io_error_to_string(v_a_1370_);
v___x_1380_ = lean_string_append(v___x_1378_, v___x_1379_);
lean_dec_ref(v___x_1379_);
v___x_1381_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 0, v___x_1381_);
v___x_1383_ = v___x_1372_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
}
v___jp_1387_:
{
uint8_t v_construct_1389_; uint64_t v___x_1390_; 
v_construct_1389_ = lean_ctor_get_uint8(v_b_1339_, sizeof(void*)*4);
v___x_1390_ = lean_uint64_lor(v___x_1386_, v___y_1388_);
if (v_construct_1389_ == 0)
{
uint64_t v___x_1391_; 
v___x_1391_ = 0ULL;
v___y_1344_ = v___x_1390_;
v___y_1345_ = v___x_1391_;
goto v___jp_1343_;
}
else
{
uint64_t v___x_1392_; 
v___x_1392_ = 4ULL;
v___y_1344_ = v___x_1390_;
v___y_1345_ = v___x_1392_;
goto v___jp_1343_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0___boxed(lean_object* v_b_1395_, lean_object* v_args_1396_, lean_object* v_await_1397_, lean_object* v_a_1398_){
_start:
{
uint8_t v_await_boxed_1399_; lean_object* v_res_1400_; 
v_await_boxed_1399_ = lean_unbox(v_await_1397_);
v_res_1400_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v_b_1395_, v_args_1396_, v_await_boxed_1399_);
lean_dec_ref(v_b_1395_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL(lean_object* v_url_1409_){
_start:
{
uint8_t v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1411_ = 0;
v___x_1412_ = lean_unsigned_to_nat(1u);
v___x_1413_ = ((lean_object*)(l_Lasm_JS_Web_URL_revokeObjectURL___closed__2));
v___x_1414_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1414_, 0, v_url_1409_);
v___x_1415_ = lean_mk_empty_array_with_capacity(v___x_1412_);
v___x_1416_ = lean_array_push(v___x_1415_, v___x_1414_);
v___x_1417_ = l_Lasm_JS_Web_Support_args(v___x_1416_);
v___x_1418_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_1413_, v___x_1417_, v___x_1411_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL___boxed(lean_object* v_url_1419_, lean_object* v_a_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lasm_JS_Web_URL_revokeObjectURL(v_url_1419_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(lean_object* v_context_1423_, lean_object* v_d_1424_){
_start:
{
lean_object* v___y_1430_; lean_object* v___y_1431_; 
switch(lean_obj_tag(v_d_1424_))
{
case 1:
{
goto v___jp_1426_;
}
case 0:
{
goto v___jp_1426_;
}
default: 
{
if (lean_obj_tag(v_d_1424_) == 9)
{
lean_object* v_value_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v_value_1435_ = lean_ctor_get(v_d_1424_, 0);
lean_inc(v_value_1435_);
lean_dec_ref_known(v_d_1424_, 2);
v___x_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1436_, 0, v_value_1435_);
v___x_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
return v___x_1437_;
}
else
{
lean_object* v___x_1438_; lean_object* v_received_1440_; 
v___x_1438_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1424_) == 9)
{
lean_object* v_value_1454_; lean_object* v_description_1455_; uint8_t v___x_1456_; 
v_value_1454_ = lean_ctor_get(v_d_1424_, 0);
v_description_1455_ = lean_ctor_get(v_d_1424_, 1);
v___x_1456_ = lean_string_dec_eq(v_description_1455_, v___x_1438_);
if (v___x_1456_ == 0)
{
goto v___jp_1452_;
}
else
{
uint32_t v___x_1457_; uint64_t v___x_1458_; lean_object* v___x_1459_; uint32_t v___x_1460_; lean_object* v___x_1461_; 
lean_inc_n(v_value_1454_, 2);
lean_dec_ref_known(v_d_1424_, 2);
v___x_1457_ = 206;
v___x_1458_ = 0ULL;
v___x_1459_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1459_, 0, v_value_1454_);
lean_ctor_set(v___x_1459_, 1, v___x_1438_);
v___x_1460_ = lasm_js_value_handle(v_value_1454_);
lean_dec(v_value_1454_);
v___x_1461_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1457_, v___x_1458_, v___x_1459_, v___x_1460_);
lean_dec_ref_known(v___x_1459_, 2);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; uint8_t v___x_1463_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1461_, 1);
v___x_1463_ = lean_string_validate_utf8(v_a_1462_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
lean_dec(v_a_1462_);
v___x_1464_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_1465_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1464_);
v_received_1440_ = v___x_1465_;
goto v___jp_1439_;
}
else
{
lean_object* v___x_1466_; 
v___x_1466_ = lean_string_from_utf8_unchecked(v_a_1462_);
v_received_1440_ = v___x_1466_;
goto v___jp_1439_;
}
}
else
{
lean_object* v___x_1467_; 
lean_dec_ref_known(v___x_1461_, 1);
v___x_1467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1440_ = v___x_1467_;
goto v___jp_1439_;
}
}
}
else
{
goto v___jp_1452_;
}
v___jp_1439_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; uint8_t v___x_1450_; 
v___x_1441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1442_ = lean_string_append(v___x_1441_, v_context_1423_);
v___x_1443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1444_ = lean_string_append(v___x_1442_, v___x_1443_);
v___x_1445_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___closed__0));
v___x_1446_ = lean_string_append(v___x_1444_, v___x_1445_);
v___x_1447_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1448_ = lean_string_append(v___x_1446_, v___x_1447_);
v___x_1449_ = lean_string_append(v___x_1448_, v_received_1440_);
lean_dec_ref(v_received_1440_);
v___x_1450_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1450_ == 0)
{
lean_object* v___x_1451_; 
v___x_1451_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1430_ = v___x_1449_;
v___y_1431_ = v___x_1451_;
goto v___jp_1429_;
}
else
{
v___y_1430_ = v___x_1449_;
v___y_1431_ = v___x_1438_;
goto v___jp_1429_;
}
}
v___jp_1452_:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_Lasm_JS_Data_describe(v_d_1424_);
v_received_1440_ = v___x_1453_;
goto v___jp_1439_;
}
}
}
}
v___jp_1426_:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1427_ = lean_box(0);
v___x_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
return v___x_1428_;
}
v___jp_1429_:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1432_ = lean_string_append(v___y_1430_, v___y_1431_);
v___x_1433_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
v___x_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
return v___x_1434_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___boxed(lean_object* v_context_1468_, lean_object* v_d_1469_, lean_object* v_a_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v_context_1468_, v_d_1469_);
lean_dec_ref(v_context_1468_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(lean_object* v_b_1472_, lean_object* v_args_1473_, uint8_t v_await_1474_){
_start:
{
uint64_t v___y_1477_; uint64_t v___y_1478_; uint64_t v___x_1521_; uint64_t v___y_1523_; 
v___x_1521_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1474_ == 0)
{
uint64_t v___x_1528_; 
v___x_1528_ = 0ULL;
v___y_1523_ = v___x_1528_;
goto v___jp_1522_;
}
else
{
uint64_t v___x_1529_; 
v___x_1529_ = 2ULL;
v___y_1523_ = v___x_1529_;
goto v___jp_1522_;
}
v___jp_1476_:
{
uint64_t v_flags_1479_; uint32_t v___x_1480_; lean_object* v___x_1481_; uint32_t v___x_1482_; lean_object* v___x_1483_; 
v_flags_1479_ = lean_uint64_lor(v___y_1477_, v___y_1478_);
v___x_1480_ = 214;
v___x_1481_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1472_, v_args_1473_);
v___x_1482_ = 0;
v___x_1483_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1480_, v_flags_1479_, v___x_1481_, v___x_1482_);
lean_dec(v___x_1481_);
if (lean_obj_tag(v___x_1483_) == 0)
{
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v_a_1484_; lean_object* v___x_1485_; 
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_a_1484_);
lean_dec_ref_known(v___x_1483_, 1);
v___x_1485_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1484_);
lean_dec(v_a_1484_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1486_);
lean_dec_ref_known(v___x_1485_, 1);
v___x_1487_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1472_);
v___x_1488_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v___x_1487_, v_a_1486_);
lean_dec_ref(v___x_1487_);
return v___x_1488_;
}
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
v_a_1489_ = lean_ctor_get(v___x_1485_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1485_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1485_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
v_a_1497_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1483_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1483_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
lean_ctor_set_tag(v___x_1499_, 1);
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1520_; 
v_a_1505_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1507_ = v___x_1483_;
v_isShared_1508_ = v_isSharedCheck_1520_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1483_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1520_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1518_; 
v___x_1509_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1510_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1472_);
v___x_1511_ = lean_string_append(v___x_1509_, v___x_1510_);
lean_dec_ref(v___x_1510_);
v___x_1512_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1513_ = lean_string_append(v___x_1511_, v___x_1512_);
v___x_1514_ = lean_io_error_to_string(v_a_1505_);
v___x_1515_ = lean_string_append(v___x_1513_, v___x_1514_);
lean_dec_ref(v___x_1514_);
v___x_1516_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v___x_1516_);
v___x_1518_ = v___x_1507_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
v___jp_1522_:
{
uint8_t v_construct_1524_; uint64_t v___x_1525_; 
v_construct_1524_ = lean_ctor_get_uint8(v_b_1472_, sizeof(void*)*4);
v___x_1525_ = lean_uint64_lor(v___x_1521_, v___y_1523_);
if (v_construct_1524_ == 0)
{
uint64_t v___x_1526_; 
v___x_1526_ = 0ULL;
v___y_1477_ = v___x_1525_;
v___y_1478_ = v___x_1526_;
goto v___jp_1476_;
}
else
{
uint64_t v___x_1527_; 
v___x_1527_ = 4ULL;
v___y_1477_ = v___x_1525_;
v___y_1478_ = v___x_1527_;
goto v___jp_1476_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0___boxed(lean_object* v_b_1530_, lean_object* v_args_1531_, lean_object* v_await_1532_, lean_object* v_a_1533_){
_start:
{
uint8_t v_await_boxed_1534_; lean_object* v_res_1535_; 
v_await_boxed_1534_ = lean_unbox(v_await_1532_);
v_res_1535_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v_b_1530_, v_args_1531_, v_await_boxed_1534_);
lean_dec_ref(v_b_1530_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse(lean_object* v_url_1544_, lean_object* v_base_1545_){
_start:
{
uint8_t v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1547_ = 0;
v___x_1548_ = lean_unsigned_to_nat(2u);
v___x_1549_ = ((lean_object*)(l_Lasm_JS_Web_URL_parse___closed__2));
v___x_1550_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1550_, 0, v_url_1544_);
v___x_1551_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1545_);
v___x_1552_ = lean_mk_empty_array_with_capacity(v___x_1548_);
v___x_1553_ = lean_array_push(v___x_1552_, v___x_1550_);
v___x_1554_ = lean_array_push(v___x_1553_, v___x_1551_);
v___x_1555_ = l_Lasm_JS_Web_Support_args(v___x_1554_);
v___x_1556_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v___x_1549_, v___x_1555_, v___x_1547_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse___boxed(lean_object* v_url_1557_, lean_object* v_base_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Lasm_JS_Web_URL_parse(v_url_1557_, v_base_1558_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(lean_object* v_b_1561_, lean_object* v_args_1562_, uint8_t v_await_1563_){
_start:
{
uint64_t v___y_1566_; uint64_t v___y_1567_; uint64_t v___x_1610_; uint64_t v___y_1612_; 
v___x_1610_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1563_ == 0)
{
uint64_t v___x_1617_; 
v___x_1617_ = 0ULL;
v___y_1612_ = v___x_1617_;
goto v___jp_1611_;
}
else
{
uint64_t v___x_1618_; 
v___x_1618_ = 2ULL;
v___y_1612_ = v___x_1618_;
goto v___jp_1611_;
}
v___jp_1565_:
{
uint64_t v_flags_1568_; uint32_t v___x_1569_; lean_object* v___x_1570_; uint32_t v___x_1571_; lean_object* v___x_1572_; 
v_flags_1568_ = lean_uint64_lor(v___y_1566_, v___y_1567_);
v___x_1569_ = 214;
v___x_1570_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1561_, v_args_1562_);
v___x_1571_ = 0;
v___x_1572_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1569_, v_flags_1568_, v___x_1570_, v___x_1571_);
lean_dec(v___x_1570_);
if (lean_obj_tag(v___x_1572_) == 0)
{
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v___x_1574_; 
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v___x_1572_, 1);
v___x_1574_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1573_);
lean_dec(v_a_1573_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1575_);
lean_dec_ref_known(v___x_1574_, 1);
v___x_1576_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1561_);
v___x_1577_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v___x_1576_, v_a_1575_);
lean_dec_ref(v___x_1576_);
return v___x_1577_;
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
v_a_1578_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1574_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1574_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
v_a_1586_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1572_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1572_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
lean_ctor_set_tag(v___x_1588_, 1);
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1609_; 
v_a_1594_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1596_ = v___x_1572_;
v_isShared_1597_ = v_isSharedCheck_1609_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1572_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1609_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1598_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1599_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1561_);
v___x_1600_ = lean_string_append(v___x_1598_, v___x_1599_);
lean_dec_ref(v___x_1599_);
v___x_1601_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1602_ = lean_string_append(v___x_1600_, v___x_1601_);
v___x_1603_ = lean_io_error_to_string(v_a_1594_);
v___x_1604_ = lean_string_append(v___x_1602_, v___x_1603_);
lean_dec_ref(v___x_1603_);
v___x_1605_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1604_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 0, v___x_1605_);
v___x_1607_ = v___x_1596_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
v___jp_1611_:
{
uint8_t v_construct_1613_; uint64_t v___x_1614_; 
v_construct_1613_ = lean_ctor_get_uint8(v_b_1561_, sizeof(void*)*4);
v___x_1614_ = lean_uint64_lor(v___x_1610_, v___y_1612_);
if (v_construct_1613_ == 0)
{
uint64_t v___x_1615_; 
v___x_1615_ = 0ULL;
v___y_1566_ = v___x_1614_;
v___y_1567_ = v___x_1615_;
goto v___jp_1565_;
}
else
{
uint64_t v___x_1616_; 
v___x_1616_ = 4ULL;
v___y_1566_ = v___x_1614_;
v___y_1567_ = v___x_1616_;
goto v___jp_1565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0___boxed(lean_object* v_b_1619_, lean_object* v_args_1620_, lean_object* v_await_1621_, lean_object* v_a_1622_){
_start:
{
uint8_t v_await_boxed_1623_; lean_object* v_res_1624_; 
v_await_boxed_1623_ = lean_unbox(v_await_1621_);
v_res_1624_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v_b_1619_, v_args_1620_, v_await_boxed_1623_);
lean_dec_ref(v_b_1619_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse(lean_object* v_url_1633_, lean_object* v_base_1634_){
_start:
{
uint8_t v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1636_ = 0;
v___x_1637_ = lean_unsigned_to_nat(2u);
v___x_1638_ = ((lean_object*)(l_Lasm_JS_Web_URL_canParse___closed__2));
v___x_1639_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1639_, 0, v_url_1633_);
v___x_1640_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1634_);
v___x_1641_ = lean_mk_empty_array_with_capacity(v___x_1637_);
v___x_1642_ = lean_array_push(v___x_1641_, v___x_1639_);
v___x_1643_ = lean_array_push(v___x_1642_, v___x_1640_);
v___x_1644_ = l_Lasm_JS_Web_Support_args(v___x_1643_);
v___x_1645_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v___x_1638_, v___x_1644_, v___x_1636_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse___boxed(lean_object* v_url_1646_, lean_object* v_base_1647_, lean_object* v_a_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lasm_JS_Web_URL_canParse(v_url_1646_, v_base_1647_);
return v_res_1649_;
}
}
static lean_object* _init_l_Lasm_JS_Web_URL_toJSON___closed__1(void){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1652_ = l_Lasm_JS_Web_Support_args(v___x_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON(lean_object* v_self_1653_){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1655_ = ((lean_object*)(l_Lasm_JS_Web_URL_toJSON___closed__0));
v___x_1656_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_1657_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1653_, v___x_1655_, v___x_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON___boxed(lean_object* v_self_1658_, lean_object* v_a_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_Lasm_JS_Web_URL_toJSON(v_self_1658_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t v_sz_1661_, size_t v_i_1662_, lean_object* v_bs_1663_){
_start:
{
uint8_t v___x_1664_; 
v___x_1664_ = lean_usize_dec_lt(v_i_1662_, v_sz_1661_);
if (v___x_1664_ == 0)
{
return v_bs_1663_;
}
else
{
lean_object* v_v_1665_; lean_object* v___x_1666_; lean_object* v_bs_x27_1667_; lean_object* v___x_1668_; size_t v___x_1669_; size_t v___x_1670_; lean_object* v___x_1671_; 
v_v_1665_ = lean_array_uget(v_bs_1663_, v_i_1662_);
v___x_1666_ = lean_unsigned_to_nat(0u);
v_bs_x27_1667_ = lean_array_uset(v_bs_1663_, v_i_1662_, v___x_1666_);
v___x_1668_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1668_, 0, v_v_1665_);
v___x_1669_ = ((size_t)1ULL);
v___x_1670_ = lean_usize_add(v_i_1662_, v___x_1669_);
v___x_1671_ = lean_array_uset(v_bs_x27_1667_, v_i_1662_, v___x_1668_);
v_i_1662_ = v___x_1670_;
v_bs_1663_ = v___x_1671_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0___boxed(lean_object* v_sz_1673_, lean_object* v_i_1674_, lean_object* v_bs_1675_){
_start:
{
size_t v_sz_boxed_1676_; size_t v_i_boxed_1677_; lean_object* v_res_1678_; 
v_sz_boxed_1676_ = lean_unbox_usize(v_sz_1673_);
lean_dec(v_sz_1673_);
v_i_boxed_1677_ = lean_unbox_usize(v_i_1674_);
lean_dec(v_i_1674_);
v_res_1678_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_boxed_1676_, v_i_boxed_1677_, v_bs_1675_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(size_t v_sz_1679_, size_t v_i_1680_, lean_object* v_bs_1681_){
_start:
{
uint8_t v___x_1682_; 
v___x_1682_ = lean_usize_dec_lt(v_i_1680_, v_sz_1679_);
if (v___x_1682_ == 0)
{
return v_bs_1681_;
}
else
{
lean_object* v_v_1683_; lean_object* v___x_1684_; lean_object* v_bs_x27_1685_; size_t v_sz_1686_; size_t v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; size_t v___x_1690_; size_t v___x_1691_; lean_object* v___x_1692_; 
v_v_1683_ = lean_array_uget(v_bs_1681_, v_i_1680_);
v___x_1684_ = lean_unsigned_to_nat(0u);
v_bs_x27_1685_ = lean_array_uset(v_bs_1681_, v_i_1680_, v___x_1684_);
v_sz_1686_ = lean_array_size(v_v_1683_);
v___x_1687_ = ((size_t)0ULL);
v___x_1688_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_1686_, v___x_1687_, v_v_1683_);
v___x_1689_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
v___x_1690_ = ((size_t)1ULL);
v___x_1691_ = lean_usize_add(v_i_1680_, v___x_1690_);
v___x_1692_ = lean_array_uset(v_bs_x27_1685_, v_i_1680_, v___x_1689_);
v_i_1680_ = v___x_1691_;
v_bs_1681_ = v___x_1692_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1___boxed(lean_object* v_sz_1694_, lean_object* v_i_1695_, lean_object* v_bs_1696_){
_start:
{
size_t v_sz_boxed_1697_; size_t v_i_boxed_1698_; lean_object* v_res_1699_; 
v_sz_boxed_1697_ = lean_unbox_usize(v_sz_1694_);
lean_dec(v_sz_1694_);
v_i_boxed_1698_ = lean_unbox_usize(v_i_1695_);
lean_dec(v_i_1695_);
v_res_1699_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_boxed_1697_, v_i_boxed_1698_, v_bs_1696_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t v_sz_1700_, size_t v_i_1701_, lean_object* v_bs_1702_){
_start:
{
uint8_t v___x_1703_; 
v___x_1703_ = lean_usize_dec_lt(v_i_1701_, v_sz_1700_);
if (v___x_1703_ == 0)
{
return v_bs_1702_;
}
else
{
lean_object* v_v_1704_; lean_object* v_fst_1705_; lean_object* v_snd_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1720_; 
v_v_1704_ = lean_array_uget(v_bs_1702_, v_i_1701_);
v_fst_1705_ = lean_ctor_get(v_v_1704_, 0);
v_snd_1706_ = lean_ctor_get(v_v_1704_, 1);
v_isSharedCheck_1720_ = !lean_is_exclusive(v_v_1704_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1708_ = v_v_1704_;
v_isShared_1709_ = v_isSharedCheck_1720_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_snd_1706_);
lean_inc(v_fst_1705_);
lean_dec(v_v_1704_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1720_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1710_; lean_object* v_bs_x27_1711_; lean_object* v___x_1712_; lean_object* v___x_1714_; 
v___x_1710_ = lean_unsigned_to_nat(0u);
v_bs_x27_1711_ = lean_array_uset(v_bs_1702_, v_i_1701_, v___x_1710_);
v___x_1712_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1712_, 0, v_snd_1706_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v___x_1712_);
v___x_1714_ = v___x_1708_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_fst_1705_);
lean_ctor_set(v_reuseFailAlloc_1719_, 1, v___x_1712_);
v___x_1714_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
size_t v___x_1715_; size_t v___x_1716_; lean_object* v___x_1717_; 
v___x_1715_ = ((size_t)1ULL);
v___x_1716_ = lean_usize_add(v_i_1701_, v___x_1715_);
v___x_1717_ = lean_array_uset(v_bs_x27_1711_, v_i_1701_, v___x_1714_);
v_i_1701_ = v___x_1716_;
v_bs_1702_ = v___x_1717_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2___boxed(lean_object* v_sz_1721_, lean_object* v_i_1722_, lean_object* v_bs_1723_){
_start:
{
size_t v_sz_boxed_1724_; size_t v_i_boxed_1725_; lean_object* v_res_1726_; 
v_sz_boxed_1724_ = lean_unbox_usize(v_sz_1721_);
lean_dec(v_sz_1721_);
v_i_boxed_1725_ = lean_unbox_usize(v_i_1722_);
lean_dec(v_i_1722_);
v_res_1726_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_boxed_1724_, v_i_boxed_1725_, v_bs_1723_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(lean_object* v_x_1727_){
_start:
{
if (lean_obj_tag(v_x_1727_) == 0)
{
lean_object* v___x_1728_; 
v___x_1728_ = lean_box(0);
return v___x_1728_;
}
else
{
lean_object* v_val_1729_; 
v_val_1729_ = lean_ctor_get(v_x_1727_, 0);
lean_inc(v_val_1729_);
lean_dec_ref_known(v_x_1727_, 1);
switch(lean_obj_tag(v_val_1729_))
{
case 0:
{
lean_object* v_value_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1740_; 
v_value_1730_ = lean_ctor_get(v_val_1729_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v_val_1729_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1732_ = v_val_1729_;
v_isShared_1733_ = v_isSharedCheck_1740_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_value_1730_);
lean_dec(v_val_1729_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1740_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
size_t v_sz_1734_; size_t v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1738_; 
v_sz_1734_ = lean_array_size(v_value_1730_);
v___x_1735_ = ((size_t)0ULL);
v___x_1736_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_1734_, v___x_1735_, v_value_1730_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set_tag(v___x_1732_, 7);
lean_ctor_set(v___x_1732_, 0, v___x_1736_);
v___x_1738_ = v___x_1732_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1736_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
case 1:
{
lean_object* v_value_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1751_; 
v_value_1741_ = lean_ctor_get(v_val_1729_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v_val_1729_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1743_ = v_val_1729_;
v_isShared_1744_ = v_isSharedCheck_1751_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_value_1741_);
lean_dec(v_val_1729_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1751_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
size_t v_sz_1745_; size_t v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1749_; 
v_sz_1745_ = lean_array_size(v_value_1741_);
v___x_1746_ = ((size_t)0ULL);
v___x_1747_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_1745_, v___x_1746_, v_value_1741_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set_tag(v___x_1743_, 8);
lean_ctor_set(v___x_1743_, 0, v___x_1747_);
v___x_1749_ = v___x_1743_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v___x_1747_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
default: 
{
lean_object* v_value_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1759_; 
v_value_1752_ = lean_ctor_get(v_val_1729_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v_val_1729_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1754_ = v_val_1729_;
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_value_1752_);
lean_dec(v_val_1729_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
lean_ctor_set_tag(v___x_1754_, 4);
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v_value_1752_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(lean_object* v_context_1760_, lean_object* v_d_1761_){
_start:
{
lean_object* v___y_1764_; lean_object* v___y_1765_; 
if (lean_obj_tag(v_d_1761_) == 9)
{
lean_object* v_value_1769_; lean_object* v___x_1770_; 
v_value_1769_ = lean_ctor_get(v_d_1761_, 0);
lean_inc(v_value_1769_);
lean_dec_ref_known(v_d_1761_, 2);
v___x_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1770_, 0, v_value_1769_);
return v___x_1770_;
}
else
{
lean_object* v___x_1771_; lean_object* v_received_1773_; 
v___x_1771_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1761_) == 9)
{
lean_object* v_value_1787_; lean_object* v_description_1788_; uint8_t v___x_1789_; 
v_value_1787_ = lean_ctor_get(v_d_1761_, 0);
v_description_1788_ = lean_ctor_get(v_d_1761_, 1);
v___x_1789_ = lean_string_dec_eq(v_description_1788_, v___x_1771_);
if (v___x_1789_ == 0)
{
goto v___jp_1785_;
}
else
{
uint32_t v___x_1790_; uint64_t v___x_1791_; lean_object* v___x_1792_; uint32_t v___x_1793_; lean_object* v___x_1794_; 
lean_inc_n(v_value_1787_, 2);
lean_dec_ref_known(v_d_1761_, 2);
v___x_1790_ = 206;
v___x_1791_ = 0ULL;
v___x_1792_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1792_, 0, v_value_1787_);
lean_ctor_set(v___x_1792_, 1, v___x_1771_);
v___x_1793_ = lasm_js_value_handle(v_value_1787_);
lean_dec(v_value_1787_);
v___x_1794_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1790_, v___x_1791_, v___x_1792_, v___x_1793_);
lean_dec_ref_known(v___x_1792_, 2);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; uint8_t v___x_1796_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_a_1795_);
lean_dec_ref_known(v___x_1794_, 1);
v___x_1796_ = lean_string_validate_utf8(v_a_1795_);
if (v___x_1796_ == 0)
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
lean_dec(v_a_1795_);
v___x_1797_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_1798_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1797_);
v_received_1773_ = v___x_1798_;
goto v___jp_1772_;
}
else
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_string_from_utf8_unchecked(v_a_1795_);
v_received_1773_ = v___x_1799_;
goto v___jp_1772_;
}
}
else
{
lean_object* v___x_1800_; 
lean_dec_ref_known(v___x_1794_, 1);
v___x_1800_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1773_ = v___x_1800_;
goto v___jp_1772_;
}
}
}
else
{
goto v___jp_1785_;
}
v___jp_1772_:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; uint8_t v___x_1783_; 
v___x_1774_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1775_ = lean_string_append(v___x_1774_, v_context_1760_);
v___x_1776_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1777_ = lean_string_append(v___x_1775_, v___x_1776_);
v___x_1778_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLSearchParams___closed__0));
v___x_1779_ = lean_string_append(v___x_1777_, v___x_1778_);
v___x_1780_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1781_ = lean_string_append(v___x_1779_, v___x_1780_);
v___x_1782_ = lean_string_append(v___x_1781_, v_received_1773_);
lean_dec_ref(v_received_1773_);
v___x_1783_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; 
v___x_1784_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1764_ = v___x_1782_;
v___y_1765_ = v___x_1784_;
goto v___jp_1763_;
}
else
{
v___y_1764_ = v___x_1782_;
v___y_1765_ = v___x_1771_;
goto v___jp_1763_;
}
}
v___jp_1785_:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lasm_JS_Data_describe(v_d_1761_);
v_received_1773_ = v___x_1786_;
goto v___jp_1772_;
}
}
v___jp_1763_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1766_ = lean_string_append(v___y_1764_, v___y_1765_);
v___x_1767_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
v___x_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1767_);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4___boxed(lean_object* v_context_1801_, lean_object* v_d_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(v_context_1801_, v_d_1802_);
lean_dec_ref(v_context_1801_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(lean_object* v_b_1805_, lean_object* v_args_1806_, uint8_t v_await_1807_){
_start:
{
uint64_t v___y_1810_; uint64_t v___y_1811_; uint64_t v___x_1854_; uint64_t v___y_1856_; 
v___x_1854_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1807_ == 0)
{
uint64_t v___x_1861_; 
v___x_1861_ = 0ULL;
v___y_1856_ = v___x_1861_;
goto v___jp_1855_;
}
else
{
uint64_t v___x_1862_; 
v___x_1862_ = 2ULL;
v___y_1856_ = v___x_1862_;
goto v___jp_1855_;
}
v___jp_1809_:
{
uint64_t v_flags_1812_; uint32_t v___x_1813_; lean_object* v___x_1814_; uint32_t v___x_1815_; lean_object* v___x_1816_; 
v_flags_1812_ = lean_uint64_lor(v___y_1810_, v___y_1811_);
v___x_1813_ = 214;
v___x_1814_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1805_, v_args_1806_);
v___x_1815_ = 0;
v___x_1816_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1813_, v_flags_1812_, v___x_1814_, v___x_1815_);
lean_dec(v___x_1814_);
if (lean_obj_tag(v___x_1816_) == 0)
{
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1818_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
lean_dec_ref_known(v___x_1816_, 1);
v___x_1818_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1817_);
lean_dec(v_a_1817_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
lean_dec_ref_known(v___x_1818_, 1);
v___x_1820_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1805_);
v___x_1821_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(v___x_1820_, v_a_1819_);
lean_dec_ref(v___x_1820_);
return v___x_1821_;
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
v_a_1822_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___x_1818_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1818_);
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
else
{
lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1837_; 
v_a_1830_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1832_ = v___x_1816_;
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_dec(v___x_1816_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1833_ == 0)
{
lean_ctor_set_tag(v___x_1832_, 1);
v___x_1835_ = v___x_1832_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_a_1830_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1853_; 
v_a_1838_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1840_ = v___x_1816_;
v_isShared_1841_ = v_isSharedCheck_1853_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1816_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1853_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1851_; 
v___x_1842_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1843_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1805_);
v___x_1844_ = lean_string_append(v___x_1842_, v___x_1843_);
lean_dec_ref(v___x_1843_);
v___x_1845_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1846_ = lean_string_append(v___x_1844_, v___x_1845_);
v___x_1847_ = lean_io_error_to_string(v_a_1838_);
v___x_1848_ = lean_string_append(v___x_1846_, v___x_1847_);
lean_dec_ref(v___x_1847_);
v___x_1849_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 0, v___x_1849_);
v___x_1851_ = v___x_1840_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v___x_1849_);
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
v___jp_1855_:
{
uint8_t v_construct_1857_; uint64_t v___x_1858_; 
v_construct_1857_ = lean_ctor_get_uint8(v_b_1805_, sizeof(void*)*4);
v___x_1858_ = lean_uint64_lor(v___x_1854_, v___y_1856_);
if (v_construct_1857_ == 0)
{
uint64_t v___x_1859_; 
v___x_1859_ = 0ULL;
v___y_1810_ = v___x_1858_;
v___y_1811_ = v___x_1859_;
goto v___jp_1809_;
}
else
{
uint64_t v___x_1860_; 
v___x_1860_ = 4ULL;
v___y_1810_ = v___x_1858_;
v___y_1811_ = v___x_1860_;
goto v___jp_1809_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1___boxed(lean_object* v_b_1863_, lean_object* v_args_1864_, lean_object* v_await_1865_, lean_object* v_a_1866_){
_start:
{
uint8_t v_await_boxed_1867_; lean_object* v_res_1868_; 
v_await_boxed_1867_ = lean_unbox(v_await_1865_);
v_res_1868_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v_b_1863_, v_args_1864_, v_await_boxed_1867_);
lean_dec_ref(v_b_1863_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new(lean_object* v_init_1877_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; uint8_t v___x_1885_; lean_object* v___x_1886_; 
v___x_1879_ = lean_unsigned_to_nat(1u);
v___x_1880_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_new___closed__2));
v___x_1881_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(v_init_1877_);
v___x_1882_ = lean_mk_empty_array_with_capacity(v___x_1879_);
v___x_1883_ = lean_array_push(v___x_1882_, v___x_1881_);
v___x_1884_ = l_Lasm_JS_Web_Support_args(v___x_1883_);
v___x_1885_ = 0;
v___x_1886_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v___x_1880_, v___x_1884_, v___x_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new___boxed(lean_object* v_init_1887_, lean_object* v_a_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lasm_JS_Web_URLSearchParams_new(v_init_1887_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size(lean_object* v_self_1891_){
_start:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1893_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_size___closed__0));
v___x_1894_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1891_, v___x_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size___boxed(lean_object* v_self_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lasm_JS_Web_URLSearchParams_size(v_self_1895_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString(lean_object* v_self_1898_){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1900_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__0));
v___x_1901_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1902_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1898_, v___x_1900_, v___x_1901_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString___boxed(lean_object* v_self_1903_, lean_object* v_a_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Lasm_JS_Web_URLSearchParams_toString(v_self_1903_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append(lean_object* v_self_1907_, lean_object* v_name_1908_, lean_object* v_value_1909_){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1911_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_append___closed__0));
v___x_1912_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1912_, 0, v_name_1908_);
v___x_1913_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1913_, 0, v_value_1909_);
v___x_1914_ = lean_unsigned_to_nat(2u);
v___x_1915_ = lean_mk_empty_array_with_capacity(v___x_1914_);
v___x_1916_ = lean_array_push(v___x_1915_, v___x_1912_);
v___x_1917_ = lean_array_push(v___x_1916_, v___x_1913_);
v___x_1918_ = l_Lasm_JS_Web_Support_args(v___x_1917_);
v___x_1919_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1907_, v___x_1911_, v___x_1918_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append___boxed(lean_object* v_self_1920_, lean_object* v_name_1921_, lean_object* v_value_1922_, lean_object* v_a_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lasm_JS_Web_URLSearchParams_append(v_self_1920_, v_name_1921_, v_value_1922_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete(lean_object* v_self_1926_, lean_object* v_name_1927_, lean_object* v_value_1928_){
_start:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1930_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_delete___closed__0));
v___x_1931_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1931_, 0, v_name_1927_);
v___x_1932_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_1928_);
v___x_1933_ = lean_unsigned_to_nat(2u);
v___x_1934_ = lean_mk_empty_array_with_capacity(v___x_1933_);
v___x_1935_ = lean_array_push(v___x_1934_, v___x_1931_);
v___x_1936_ = lean_array_push(v___x_1935_, v___x_1932_);
v___x_1937_ = l_Lasm_JS_Web_Support_args(v___x_1936_);
v___x_1938_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1926_, v___x_1930_, v___x_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete___boxed(lean_object* v_self_1939_, lean_object* v_name_1940_, lean_object* v_value_1941_, lean_object* v_a_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_Lasm_JS_Web_URLSearchParams_delete(v_self_1939_, v_name_1940_, v_value_1941_);
return v_res_1943_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(uint8_t v_await_1944_, uint64_t v_extra_1945_){
_start:
{
uint64_t v___x_1946_; uint64_t v___y_1948_; 
v___x_1946_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1944_ == 0)
{
uint64_t v___x_1951_; 
v___x_1951_ = 0ULL;
v___y_1948_ = v___x_1951_;
goto v___jp_1947_;
}
else
{
uint64_t v___x_1952_; 
v___x_1952_ = 2ULL;
v___y_1948_ = v___x_1952_;
goto v___jp_1947_;
}
v___jp_1947_:
{
uint64_t v___x_1949_; uint64_t v___x_1950_; 
v___x_1949_ = lean_uint64_lor(v___x_1946_, v___y_1948_);
v___x_1950_ = lean_uint64_lor(v___x_1949_, v_extra_1945_);
return v___x_1950_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0___boxed(lean_object* v_await_1953_, lean_object* v_extra_1954_){
_start:
{
uint8_t v_await_boxed_1955_; uint64_t v_extra_boxed_1956_; uint64_t v_res_1957_; lean_object* v_r_1958_; 
v_await_boxed_1955_ = lean_unbox(v_await_1953_);
v_extra_boxed_1956_ = lean_unbox_uint64(v_extra_1954_);
lean_dec_ref(v_extra_1954_);
v_res_1957_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v_await_boxed_1955_, v_extra_boxed_1956_);
v_r_1958_ = lean_box_uint64(v_res_1957_);
return v_r_1958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(lean_object* v_context_1960_, lean_object* v_d_1961_){
_start:
{
lean_object* v___y_1967_; lean_object* v___y_1968_; 
switch(lean_obj_tag(v_d_1961_))
{
case 1:
{
goto v___jp_1963_;
}
case 0:
{
goto v___jp_1963_;
}
default: 
{
if (lean_obj_tag(v_d_1961_) == 4)
{
lean_object* v_s_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; 
v_s_1972_ = lean_ctor_get(v_d_1961_, 0);
lean_inc_ref(v_s_1972_);
lean_dec_ref_known(v_d_1961_, 1);
v___x_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1973_, 0, v_s_1972_);
v___x_1974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
return v___x_1974_;
}
else
{
lean_object* v___x_1975_; lean_object* v_received_1977_; 
v___x_1975_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1961_) == 9)
{
lean_object* v_value_1991_; lean_object* v_description_1992_; uint8_t v___x_1993_; 
v_value_1991_ = lean_ctor_get(v_d_1961_, 0);
v_description_1992_ = lean_ctor_get(v_d_1961_, 1);
v___x_1993_ = lean_string_dec_eq(v_description_1992_, v___x_1975_);
if (v___x_1993_ == 0)
{
goto v___jp_1989_;
}
else
{
uint32_t v___x_1994_; uint64_t v___x_1995_; lean_object* v___x_1996_; uint32_t v___x_1997_; lean_object* v___x_1998_; 
lean_inc_n(v_value_1991_, 2);
lean_dec_ref_known(v_d_1961_, 2);
v___x_1994_ = 206;
v___x_1995_ = 0ULL;
v___x_1996_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1996_, 0, v_value_1991_);
lean_ctor_set(v___x_1996_, 1, v___x_1975_);
v___x_1997_ = lasm_js_value_handle(v_value_1991_);
lean_dec(v_value_1991_);
v___x_1998_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1994_, v___x_1995_, v___x_1996_, v___x_1997_);
lean_dec_ref_known(v___x_1996_, 2);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; uint8_t v___x_2000_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1998_, 1);
v___x_2000_ = lean_string_validate_utf8(v_a_1999_);
if (v___x_2000_ == 0)
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
lean_dec(v_a_1999_);
v___x_2001_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2002_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2001_);
v_received_1977_ = v___x_2002_;
goto v___jp_1976_;
}
else
{
lean_object* v___x_2003_; 
v___x_2003_ = lean_string_from_utf8_unchecked(v_a_1999_);
v_received_1977_ = v___x_2003_;
goto v___jp_1976_;
}
}
else
{
lean_object* v___x_2004_; 
lean_dec_ref_known(v___x_1998_, 1);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1977_ = v___x_2004_;
goto v___jp_1976_;
}
}
}
else
{
goto v___jp_1989_;
}
v___jp_1976_:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; uint8_t v___x_1987_; 
v___x_1978_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1979_ = lean_string_append(v___x_1978_, v_context_1960_);
v___x_1980_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1981_ = lean_string_append(v___x_1979_, v___x_1980_);
v___x_1982_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_1983_ = lean_string_append(v___x_1981_, v___x_1982_);
v___x_1984_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1985_ = lean_string_append(v___x_1983_, v___x_1984_);
v___x_1986_ = lean_string_append(v___x_1985_, v_received_1977_);
lean_dec_ref(v_received_1977_);
v___x_1987_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; 
v___x_1988_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1967_ = v___x_1986_;
v___y_1968_ = v___x_1988_;
goto v___jp_1966_;
}
else
{
v___y_1967_ = v___x_1986_;
v___y_1968_ = v___x_1975_;
goto v___jp_1966_;
}
}
v___jp_1989_:
{
lean_object* v___x_1990_; 
v___x_1990_ = l_Lasm_JS_Data_describe(v_d_1961_);
v_received_1977_ = v___x_1990_;
goto v___jp_1976_;
}
}
}
}
v___jp_1963_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = lean_box(0);
v___x_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1964_);
return v___x_1965_;
}
v___jp_1966_:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1969_ = lean_string_append(v___y_1967_, v___y_1968_);
v___x_1970_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1969_);
v___x_1971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
return v___x_1971_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2005_, lean_object* v_d_2006_, lean_object* v_a_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_2005_, v_d_2006_);
lean_dec_ref(v_context_2005_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object* v_context_2009_, lean_object* v_bytes_2010_){
_start:
{
lean_object* v___x_2012_; 
v___x_2012_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2010_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_a_2013_; lean_object* v___x_2014_; 
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_a_2013_);
lean_dec_ref_known(v___x_2012_, 1);
v___x_2014_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_2009_, v_a_2013_);
return v___x_2014_;
}
else
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2022_; 
v_a_2015_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2017_ = v___x_2012_;
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_2012_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1___boxed(lean_object* v_context_2023_, lean_object* v_bytes_2024_, lean_object* v_a_2025_){
_start:
{
lean_object* v_res_2026_; 
v_res_2026_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v_context_2023_, v_bytes_2024_);
lean_dec_ref(v_bytes_2024_);
lean_dec_ref(v_context_2023_);
return v_res_2026_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2027_; uint8_t v___x_2028_; uint64_t v___x_2029_; 
v___x_2027_ = 8ULL;
v___x_2028_ = 0;
v___x_2029_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v___x_2028_, v___x_2027_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(lean_object* v_o_2030_, lean_object* v_name_2031_, lean_object* v_args_2032_){
_start:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; uint64_t v___x_2037_; lean_object* v___x_2038_; 
v___x_2034_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2035_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2035_, 0, v_o_2030_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
lean_inc_ref(v_name_2031_);
v___x_2036_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2036_, 0, v_name_2031_);
v___x_2037_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0);
v___x_2038_ = l_Lasm_JS_Value_invokeRaw(v___x_2035_, v___x_2036_, v_args_2032_, v___x_2037_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2038_, 1);
v___x_2040_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_2041_ = lean_string_append(v___x_2040_, v_name_2031_);
lean_dec_ref(v_name_2031_);
v___x_2042_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_2041_, v_a_2039_);
lean_dec(v_a_2039_);
lean_dec_ref(v___x_2041_);
return v___x_2042_;
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_dec_ref(v_name_2031_);
v_a_2043_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2038_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2038_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___boxed(lean_object* v_o_2051_, lean_object* v_name_2052_, lean_object* v_args_2053_, lean_object* v_a_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_o_2051_, v_name_2052_, v_args_2053_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get(lean_object* v_self_2057_, lean_object* v_name_2058_){
_start:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2060_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_get___closed__0));
v___x_2061_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2061_, 0, v_name_2058_);
v___x_2062_ = lean_unsigned_to_nat(1u);
v___x_2063_ = lean_mk_empty_array_with_capacity(v___x_2062_);
v___x_2064_ = lean_array_push(v___x_2063_, v___x_2061_);
v___x_2065_ = l_Lasm_JS_Web_Support_args(v___x_2064_);
v___x_2066_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_self_2057_, v___x_2060_, v___x_2065_);
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get___boxed(lean_object* v_self_2067_, lean_object* v_name_2068_, lean_object* v_a_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lasm_JS_Web_URLSearchParams_get(v_self_2067_, v_name_2068_);
return v_res_2070_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(uint8_t v_await_2071_, uint64_t v_extra_2072_){
_start:
{
uint64_t v___x_2073_; uint64_t v___y_2075_; 
v___x_2073_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2071_ == 0)
{
uint64_t v___x_2078_; 
v___x_2078_ = 0ULL;
v___y_2075_ = v___x_2078_;
goto v___jp_2074_;
}
else
{
uint64_t v___x_2079_; 
v___x_2079_ = 2ULL;
v___y_2075_ = v___x_2079_;
goto v___jp_2074_;
}
v___jp_2074_:
{
uint64_t v___x_2076_; uint64_t v___x_2077_; 
v___x_2076_ = lean_uint64_lor(v___x_2073_, v___y_2075_);
v___x_2077_ = lean_uint64_lor(v___x_2076_, v_extra_2072_);
return v___x_2077_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0___boxed(lean_object* v_await_2080_, lean_object* v_extra_2081_){
_start:
{
uint8_t v_await_boxed_2082_; uint64_t v_extra_boxed_2083_; uint64_t v_res_2084_; lean_object* v_r_2085_; 
v_await_boxed_2082_ = lean_unbox(v_await_2080_);
v_extra_boxed_2083_ = lean_unbox_uint64(v_extra_2081_);
lean_dec_ref(v_extra_2081_);
v_res_2084_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v_await_boxed_2082_, v_extra_boxed_2083_);
v_r_2085_ = lean_box_uint64(v_res_2084_);
return v_r_2085_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2088_, size_t v_i_2089_, lean_object* v_bs_2090_){
_start:
{
uint8_t v___x_2091_; 
v___x_2091_ = lean_usize_dec_lt(v_i_2089_, v_sz_2088_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2092_; 
v___x_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2092_, 0, v_bs_2090_);
return v___x_2092_;
}
else
{
lean_object* v_v_2093_; 
v_v_2093_ = lean_array_uget_borrowed(v_bs_2090_, v_i_2089_);
if (lean_obj_tag(v_v_2093_) == 4)
{
lean_object* v_s_2094_; lean_object* v___x_2095_; lean_object* v_bs_x27_2096_; size_t v___x_2097_; size_t v___x_2098_; lean_object* v___x_2099_; 
v_s_2094_ = lean_ctor_get(v_v_2093_, 0);
lean_inc_ref(v_s_2094_);
v___x_2095_ = lean_unsigned_to_nat(0u);
v_bs_x27_2096_ = lean_array_uset(v_bs_2090_, v_i_2089_, v___x_2095_);
v___x_2097_ = ((size_t)1ULL);
v___x_2098_ = lean_usize_add(v_i_2089_, v___x_2097_);
v___x_2099_ = lean_array_uset(v_bs_x27_2096_, v_i_2089_, v_s_2094_);
v_i_2089_ = v___x_2098_;
v_bs_2090_ = v___x_2099_;
goto _start;
}
else
{
lean_object* v___x_2101_; 
lean_dec_ref(v_bs_2090_);
v___x_2101_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2101_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2102_, lean_object* v_i_2103_, lean_object* v_bs_2104_){
_start:
{
size_t v_sz_boxed_2105_; size_t v_i_boxed_2106_; lean_object* v_res_2107_; 
v_sz_boxed_2105_ = lean_unbox_usize(v_sz_2102_);
lean_dec(v_sz_2102_);
v_i_boxed_2106_ = lean_unbox_usize(v_i_2103_);
lean_dec(v_i_2103_);
v_res_2107_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2105_, v_i_boxed_2106_, v_bs_2104_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(lean_object* v_context_2112_, lean_object* v_d_2113_){
_start:
{
lean_object* v___y_2116_; lean_object* v___y_2117_; lean_object* v___y_2122_; lean_object* v_received_2123_; lean_object* v___y_2142_; lean_object* v_a_2145_; 
if (lean_obj_tag(v_d_2113_) == 7)
{
lean_object* v_items_2169_; size_t v_sz_2170_; size_t v___x_2171_; lean_object* v___x_2172_; 
v_items_2169_ = lean_ctor_get(v_d_2113_, 0);
v_sz_2170_ = lean_array_size(v_items_2169_);
v___x_2171_ = ((size_t)0ULL);
lean_inc_ref(v_items_2169_);
v___x_2172_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_2170_, v___x_2171_, v_items_2169_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; uint8_t v___x_2177_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref_known(v___x_2172_, 1);
v___x_2174_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__3));
v___x_2175_ = lean_string_utf8_byte_size(v_a_2173_);
v___x_2176_ = lean_unsigned_to_nat(0u);
v___x_2177_ = lean_nat_dec_eq(v___x_2175_, v___x_2176_);
if (v___x_2177_ == 0)
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2178_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2179_ = lean_string_append(v___x_2178_, v_a_2173_);
lean_dec(v_a_2173_);
v___x_2180_ = lean_string_append(v___x_2174_, v___x_2179_);
lean_dec_ref(v___x_2179_);
v_a_2145_ = v___x_2180_;
goto v___jp_2144_;
}
else
{
lean_dec(v_a_2173_);
v_a_2145_ = v___x_2174_;
goto v___jp_2144_;
}
}
else
{
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2181_; 
v_a_2181_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2181_);
lean_dec_ref_known(v___x_2172_, 1);
v_a_2145_ = v_a_2181_;
goto v___jp_2144_;
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_dec_ref_known(v_d_2113_, 1);
v_a_2182_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2172_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2172_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
lean_ctor_set_tag(v___x_2184_, 0);
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
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
else
{
lean_object* v___x_2190_; 
v___x_2190_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2145_ = v___x_2190_;
goto v___jp_2144_;
}
v___jp_2115_:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2118_ = lean_string_append(v___y_2116_, v___y_2117_);
lean_dec_ref(v___y_2117_);
v___x_2119_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
v___x_2120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
return v___x_2120_;
}
v___jp_2121_:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; uint8_t v___x_2135_; 
v___x_2124_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2125_ = lean_string_append(v___x_2124_, v_context_2112_);
v___x_2126_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2127_ = lean_string_append(v___x_2125_, v___x_2126_);
v___x_2128_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__0));
v___x_2129_ = lean_string_append(v___x_2127_, v___x_2128_);
v___x_2130_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2131_ = lean_string_append(v___x_2129_, v___x_2130_);
v___x_2132_ = lean_string_append(v___x_2131_, v_received_2123_);
lean_dec_ref(v_received_2123_);
v___x_2133_ = lean_string_utf8_byte_size(v___y_2122_);
v___x_2134_ = lean_unsigned_to_nat(0u);
v___x_2135_ = lean_nat_dec_eq(v___x_2133_, v___x_2134_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2137_ = lean_string_append(v___x_2136_, v___y_2122_);
lean_dec_ref(v___y_2122_);
v___x_2138_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2139_ = lean_string_append(v___x_2137_, v___x_2138_);
v___y_2116_ = v___x_2132_;
v___y_2117_ = v___x_2139_;
goto v___jp_2115_;
}
else
{
lean_object* v___x_2140_; 
lean_dec_ref(v___y_2122_);
v___x_2140_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2116_ = v___x_2132_;
v___y_2117_ = v___x_2140_;
goto v___jp_2115_;
}
}
v___jp_2141_:
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lasm_JS_Data_describe(v_d_2113_);
v___y_2122_ = v___y_2142_;
v_received_2123_ = v___x_2143_;
goto v___jp_2121_;
}
v___jp_2144_:
{
if (lean_obj_tag(v_d_2113_) == 9)
{
lean_object* v_value_2146_; lean_object* v_description_2147_; lean_object* v___x_2148_; uint8_t v___x_2149_; 
v_value_2146_ = lean_ctor_get(v_d_2113_, 0);
v_description_2147_ = lean_ctor_get(v_d_2113_, 1);
v___x_2148_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2149_ = lean_string_dec_eq(v_description_2147_, v___x_2148_);
if (v___x_2149_ == 0)
{
v___y_2142_ = v_a_2145_;
goto v___jp_2141_;
}
else
{
lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2166_; 
lean_inc(v_value_2146_);
v_isSharedCheck_2166_ = !lean_is_exclusive(v_d_2113_);
if (v_isSharedCheck_2166_ == 0)
{
lean_object* v_unused_2167_; lean_object* v_unused_2168_; 
v_unused_2167_ = lean_ctor_get(v_d_2113_, 1);
lean_dec(v_unused_2167_);
v_unused_2168_ = lean_ctor_get(v_d_2113_, 0);
lean_dec(v_unused_2168_);
v___x_2151_ = v_d_2113_;
v_isShared_2152_ = v_isSharedCheck_2166_;
goto v_resetjp_2150_;
}
else
{
lean_dec(v_d_2113_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2166_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
uint32_t v___x_2153_; uint64_t v___x_2154_; lean_object* v___x_2156_; 
v___x_2153_ = 206;
v___x_2154_ = 0ULL;
lean_inc(v_value_2146_);
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 1, v___x_2148_);
v___x_2156_ = v___x_2151_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_value_2146_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v___x_2148_);
v___x_2156_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
uint32_t v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = lasm_js_value_handle(v_value_2146_);
lean_dec(v_value_2146_);
v___x_2158_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2153_, v___x_2154_, v___x_2156_, v___x_2157_);
lean_dec_ref(v___x_2156_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; uint8_t v___x_2160_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref_known(v___x_2158_, 1);
v___x_2160_ = lean_string_validate_utf8(v_a_2159_);
if (v___x_2160_ == 0)
{
lean_object* v___x_2161_; lean_object* v___x_2162_; 
lean_dec(v_a_2159_);
v___x_2161_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2162_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2161_);
v___y_2122_ = v_a_2145_;
v_received_2123_ = v___x_2162_;
goto v___jp_2121_;
}
else
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_string_from_utf8_unchecked(v_a_2159_);
v___y_2122_ = v_a_2145_;
v_received_2123_ = v___x_2163_;
goto v___jp_2121_;
}
}
else
{
lean_object* v___x_2164_; 
lean_dec_ref_known(v___x_2158_, 1);
v___x_2164_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_2122_ = v_a_2145_;
v_received_2123_ = v___x_2164_;
goto v___jp_2121_;
}
}
}
}
}
else
{
v___y_2142_ = v_a_2145_;
goto v___jp_2141_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2191_, lean_object* v_d_2192_, lean_object* v_a_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2191_, v_d_2192_);
lean_dec_ref(v_context_2191_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(lean_object* v_context_2195_, lean_object* v_bytes_2196_){
_start:
{
lean_object* v___x_2198_; 
v___x_2198_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2196_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; lean_object* v___x_2200_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
lean_inc(v_a_2199_);
lean_dec_ref_known(v___x_2198_, 1);
v___x_2200_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2195_, v_a_2199_);
return v___x_2200_;
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
v_a_2201_ = lean_ctor_get(v___x_2198_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2198_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2198_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_a_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1___boxed(lean_object* v_context_2209_, lean_object* v_bytes_2210_, lean_object* v_a_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v_context_2209_, v_bytes_2210_);
lean_dec_ref(v_bytes_2210_);
lean_dec_ref(v_context_2209_);
return v_res_2212_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2213_; uint8_t v___x_2214_; uint64_t v___x_2215_; 
v___x_2213_ = 8ULL;
v___x_2214_ = 0;
v___x_2215_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v___x_2214_, v___x_2213_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(lean_object* v_o_2216_, lean_object* v_name_2217_, lean_object* v_args_2218_){
_start:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; uint64_t v___x_2223_; lean_object* v___x_2224_; 
v___x_2220_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2221_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2221_, 0, v_o_2216_);
lean_ctor_set(v___x_2221_, 1, v___x_2220_);
lean_inc_ref(v_name_2217_);
v___x_2222_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2222_, 0, v_name_2217_);
v___x_2223_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0);
v___x_2224_ = l_Lasm_JS_Value_invokeRaw(v___x_2221_, v___x_2222_, v_args_2218_, v___x_2223_);
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_object* v_a_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_a_2225_);
lean_dec_ref_known(v___x_2224_, 1);
v___x_2226_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_2227_ = lean_string_append(v___x_2226_, v_name_2217_);
lean_dec_ref(v_name_2217_);
v___x_2228_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v___x_2227_, v_a_2225_);
lean_dec(v_a_2225_);
lean_dec_ref(v___x_2227_);
return v___x_2228_;
}
else
{
lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
lean_dec_ref(v_name_2217_);
v_a_2229_ = lean_ctor_get(v___x_2224_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2224_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2231_ = v___x_2224_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v___x_2224_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___boxed(lean_object* v_o_2237_, lean_object* v_name_2238_, lean_object* v_args_2239_, lean_object* v_a_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_o_2237_, v_name_2238_, v_args_2239_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll(lean_object* v_self_2243_, lean_object* v_name_2244_){
_start:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2246_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_getAll___closed__0));
v___x_2247_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2247_, 0, v_name_2244_);
v___x_2248_ = lean_unsigned_to_nat(1u);
v___x_2249_ = lean_mk_empty_array_with_capacity(v___x_2248_);
v___x_2250_ = lean_array_push(v___x_2249_, v___x_2247_);
v___x_2251_ = l_Lasm_JS_Web_Support_args(v___x_2250_);
v___x_2252_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_self_2243_, v___x_2246_, v___x_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll___boxed(lean_object* v_self_2253_, lean_object* v_name_2254_, lean_object* v_a_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lasm_JS_Web_URLSearchParams_getAll(v_self_2253_, v_name_2254_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has(lean_object* v_self_2258_, lean_object* v_name_2259_, lean_object* v_value_2260_){
_start:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2262_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_has___closed__0));
v___x_2263_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2263_, 0, v_name_2259_);
v___x_2264_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_2260_);
v___x_2265_ = lean_unsigned_to_nat(2u);
v___x_2266_ = lean_mk_empty_array_with_capacity(v___x_2265_);
v___x_2267_ = lean_array_push(v___x_2266_, v___x_2263_);
v___x_2268_ = lean_array_push(v___x_2267_, v___x_2264_);
v___x_2269_ = l_Lasm_JS_Web_Support_args(v___x_2268_);
v___x_2270_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2258_, v___x_2262_, v___x_2269_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has___boxed(lean_object* v_self_2271_, lean_object* v_name_2272_, lean_object* v_value_2273_, lean_object* v_a_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l_Lasm_JS_Web_URLSearchParams_has(v_self_2271_, v_name_2272_, v_value_2273_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set(lean_object* v_self_2277_, lean_object* v_name_2278_, lean_object* v_value_2279_){
_start:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2281_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_set___closed__0));
v___x_2282_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2282_, 0, v_name_2278_);
v___x_2283_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2283_, 0, v_value_2279_);
v___x_2284_ = lean_unsigned_to_nat(2u);
v___x_2285_ = lean_mk_empty_array_with_capacity(v___x_2284_);
v___x_2286_ = lean_array_push(v___x_2285_, v___x_2282_);
v___x_2287_ = lean_array_push(v___x_2286_, v___x_2283_);
v___x_2288_ = l_Lasm_JS_Web_Support_args(v___x_2287_);
v___x_2289_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2277_, v___x_2281_, v___x_2288_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set___boxed(lean_object* v_self_2290_, lean_object* v_name_2291_, lean_object* v_value_2292_, lean_object* v_a_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lasm_JS_Web_URLSearchParams_set(v_self_2290_, v_name_2291_, v_value_2292_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort(lean_object* v_self_2296_){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2298_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_sort___closed__0));
v___x_2299_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_2300_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2296_, v___x_2298_, v___x_2299_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort___boxed(lean_object* v_self_2301_, lean_object* v_a_2302_){
_start:
{
lean_object* v_res_2303_; 
v_res_2303_ = l_Lasm_JS_Web_URLSearchParams_sort(v_self_2301_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(size_t v_sz_2307_, size_t v_i_2308_, lean_object* v_bs_2309_){
_start:
{
uint8_t v___x_2312_; 
v___x_2312_ = lean_usize_dec_lt(v_i_2308_, v_sz_2307_);
if (v___x_2312_ == 0)
{
lean_object* v___x_2313_; 
v___x_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2313_, 0, v_bs_2309_);
return v___x_2313_;
}
else
{
lean_object* v_v_2314_; 
v_v_2314_ = lean_array_uget_borrowed(v_bs_2309_, v_i_2308_);
if (lean_obj_tag(v_v_2314_) == 7)
{
lean_object* v_items_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; uint8_t v___x_2318_; 
v_items_2315_ = lean_ctor_get(v_v_2314_, 0);
v___x_2316_ = lean_array_get_size(v_items_2315_);
v___x_2317_ = lean_unsigned_to_nat(2u);
v___x_2318_ = lean_nat_dec_eq(v___x_2316_, v___x_2317_);
if (v___x_2318_ == 0)
{
lean_dec_ref(v_bs_2309_);
goto v___jp_2310_;
}
else
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = lean_unsigned_to_nat(0u);
v___x_2320_ = lean_array_fget_borrowed(v_items_2315_, v___x_2319_);
if (lean_obj_tag(v___x_2320_) == 4)
{
lean_object* v_s_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v_s_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc_ref(v_s_2321_);
v___x_2322_ = lean_unsigned_to_nat(1u);
v___x_2323_ = lean_array_fget_borrowed(v_items_2315_, v___x_2322_);
if (lean_obj_tag(v___x_2323_) == 4)
{
lean_object* v_s_2324_; lean_object* v_bs_x27_2325_; lean_object* v___x_2326_; size_t v___x_2327_; size_t v___x_2328_; lean_object* v___x_2329_; 
v_s_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc_ref(v_s_2324_);
v_bs_x27_2325_ = lean_array_uset(v_bs_2309_, v_i_2308_, v___x_2319_);
v___x_2326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2326_, 0, v_s_2321_);
lean_ctor_set(v___x_2326_, 1, v_s_2324_);
v___x_2327_ = ((size_t)1ULL);
v___x_2328_ = lean_usize_add(v_i_2308_, v___x_2327_);
v___x_2329_ = lean_array_uset(v_bs_x27_2325_, v_i_2308_, v___x_2326_);
v_i_2308_ = v___x_2328_;
v_bs_2309_ = v___x_2329_;
goto _start;
}
else
{
lean_object* v___x_2331_; 
lean_dec_ref(v_s_2321_);
lean_dec_ref(v_bs_2309_);
v___x_2331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2331_;
}
}
else
{
lean_object* v___x_2332_; 
lean_dec_ref(v_bs_2309_);
v___x_2332_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2332_;
}
}
}
else
{
lean_dec_ref(v_bs_2309_);
goto v___jp_2310_;
}
}
v___jp_2310_:
{
lean_object* v___x_2311_; 
v___x_2311_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__1));
return v___x_2311_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2333_, lean_object* v_i_2334_, lean_object* v_bs_2335_){
_start:
{
size_t v_sz_boxed_2336_; size_t v_i_boxed_2337_; lean_object* v_res_2338_; 
v_sz_boxed_2336_ = lean_unbox_usize(v_sz_2333_);
lean_dec(v_sz_2333_);
v_i_boxed_2337_ = lean_unbox_usize(v_i_2334_);
lean_dec(v_i_2334_);
v_res_2338_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_2336_, v_i_boxed_2337_, v_bs_2335_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(lean_object* v_context_2341_, lean_object* v_d_2342_){
_start:
{
lean_object* v___y_2345_; lean_object* v___y_2346_; lean_object* v___y_2351_; lean_object* v_received_2352_; lean_object* v___y_2371_; lean_object* v_a_2374_; 
if (lean_obj_tag(v_d_2342_) == 7)
{
lean_object* v_items_2398_; size_t v_sz_2399_; size_t v___x_2400_; lean_object* v___x_2401_; 
v_items_2398_ = lean_ctor_get(v_d_2342_, 0);
v_sz_2399_ = lean_array_size(v_items_2398_);
v___x_2400_ = ((size_t)0ULL);
lean_inc_ref(v_items_2398_);
v___x_2401_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_2399_, v___x_2400_, v_items_2398_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; uint8_t v___x_2406_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2401_, 1);
v___x_2403_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__1));
v___x_2404_ = lean_string_utf8_byte_size(v_a_2402_);
v___x_2405_ = lean_unsigned_to_nat(0u);
v___x_2406_ = lean_nat_dec_eq(v___x_2404_, v___x_2405_);
if (v___x_2406_ == 0)
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2407_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2408_ = lean_string_append(v___x_2407_, v_a_2402_);
lean_dec(v_a_2402_);
v___x_2409_ = lean_string_append(v___x_2403_, v___x_2408_);
lean_dec_ref(v___x_2408_);
v_a_2374_ = v___x_2409_;
goto v___jp_2373_;
}
else
{
lean_dec(v_a_2402_);
v_a_2374_ = v___x_2403_;
goto v___jp_2373_;
}
}
else
{
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2410_; 
v_a_2410_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2410_);
lean_dec_ref_known(v___x_2401_, 1);
v_a_2374_ = v_a_2410_;
goto v___jp_2373_;
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_dec_ref_known(v_d_2342_, 1);
v_a_2411_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2401_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2401_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
lean_ctor_set_tag(v___x_2413_, 0);
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
}
}
else
{
lean_object* v___x_2419_; 
v___x_2419_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2374_ = v___x_2419_;
goto v___jp_2373_;
}
v___jp_2344_:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2347_ = lean_string_append(v___y_2345_, v___y_2346_);
lean_dec_ref(v___y_2346_);
v___x_2348_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
v___x_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
return v___x_2349_;
}
v___jp_2350_:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; uint8_t v___x_2364_; 
v___x_2353_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2354_ = lean_string_append(v___x_2353_, v_context_2341_);
v___x_2355_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2356_ = lean_string_append(v___x_2354_, v___x_2355_);
v___x_2357_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__0));
v___x_2358_ = lean_string_append(v___x_2356_, v___x_2357_);
v___x_2359_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2360_ = lean_string_append(v___x_2358_, v___x_2359_);
v___x_2361_ = lean_string_append(v___x_2360_, v_received_2352_);
lean_dec_ref(v_received_2352_);
v___x_2362_ = lean_string_utf8_byte_size(v___y_2351_);
v___x_2363_ = lean_unsigned_to_nat(0u);
v___x_2364_ = lean_nat_dec_eq(v___x_2362_, v___x_2363_);
if (v___x_2364_ == 0)
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2365_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2366_ = lean_string_append(v___x_2365_, v___y_2351_);
lean_dec_ref(v___y_2351_);
v___x_2367_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2368_ = lean_string_append(v___x_2366_, v___x_2367_);
v___y_2345_ = v___x_2361_;
v___y_2346_ = v___x_2368_;
goto v___jp_2344_;
}
else
{
lean_object* v___x_2369_; 
lean_dec_ref(v___y_2351_);
v___x_2369_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2345_ = v___x_2361_;
v___y_2346_ = v___x_2369_;
goto v___jp_2344_;
}
}
v___jp_2370_:
{
lean_object* v___x_2372_; 
v___x_2372_ = l_Lasm_JS_Data_describe(v_d_2342_);
v___y_2351_ = v___y_2371_;
v_received_2352_ = v___x_2372_;
goto v___jp_2350_;
}
v___jp_2373_:
{
if (lean_obj_tag(v_d_2342_) == 9)
{
lean_object* v_value_2375_; lean_object* v_description_2376_; lean_object* v___x_2377_; uint8_t v___x_2378_; 
v_value_2375_ = lean_ctor_get(v_d_2342_, 0);
v_description_2376_ = lean_ctor_get(v_d_2342_, 1);
v___x_2377_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2378_ = lean_string_dec_eq(v_description_2376_, v___x_2377_);
if (v___x_2378_ == 0)
{
v___y_2371_ = v_a_2374_;
goto v___jp_2370_;
}
else
{
lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2395_; 
lean_inc(v_value_2375_);
v_isSharedCheck_2395_ = !lean_is_exclusive(v_d_2342_);
if (v_isSharedCheck_2395_ == 0)
{
lean_object* v_unused_2396_; lean_object* v_unused_2397_; 
v_unused_2396_ = lean_ctor_get(v_d_2342_, 1);
lean_dec(v_unused_2396_);
v_unused_2397_ = lean_ctor_get(v_d_2342_, 0);
lean_dec(v_unused_2397_);
v___x_2380_ = v_d_2342_;
v_isShared_2381_ = v_isSharedCheck_2395_;
goto v_resetjp_2379_;
}
else
{
lean_dec(v_d_2342_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2395_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
uint32_t v___x_2382_; uint64_t v___x_2383_; lean_object* v___x_2385_; 
v___x_2382_ = 206;
v___x_2383_ = 0ULL;
lean_inc(v_value_2375_);
if (v_isShared_2381_ == 0)
{
lean_ctor_set(v___x_2380_, 1, v___x_2377_);
v___x_2385_ = v___x_2380_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_value_2375_);
lean_ctor_set(v_reuseFailAlloc_2394_, 1, v___x_2377_);
v___x_2385_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
uint32_t v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = lasm_js_value_handle(v_value_2375_);
lean_dec(v_value_2375_);
v___x_2387_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2382_, v___x_2383_, v___x_2385_, v___x_2386_);
lean_dec_ref(v___x_2385_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v_a_2388_; uint8_t v___x_2389_; 
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2388_);
lean_dec_ref_known(v___x_2387_, 1);
v___x_2389_ = lean_string_validate_utf8(v_a_2388_);
if (v___x_2389_ == 0)
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
lean_dec(v_a_2388_);
v___x_2390_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2391_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2390_);
v___y_2351_ = v_a_2374_;
v_received_2352_ = v___x_2391_;
goto v___jp_2350_;
}
else
{
lean_object* v___x_2392_; 
v___x_2392_ = lean_string_from_utf8_unchecked(v_a_2388_);
v___y_2351_ = v_a_2374_;
v_received_2352_ = v___x_2392_;
goto v___jp_2350_;
}
}
else
{
lean_object* v___x_2393_; 
lean_dec_ref_known(v___x_2387_, 1);
v___x_2393_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_2351_ = v_a_2374_;
v_received_2352_ = v___x_2393_;
goto v___jp_2350_;
}
}
}
}
}
else
{
v___y_2371_ = v_a_2374_;
goto v___jp_2370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2420_, lean_object* v_d_2421_, lean_object* v_a_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v_context_2420_, v_d_2421_);
lean_dec_ref(v_context_2420_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(lean_object* v_b_2424_, lean_object* v_args_2425_, uint8_t v_await_2426_){
_start:
{
uint64_t v___y_2429_; uint64_t v___y_2430_; uint64_t v___x_2473_; uint64_t v___y_2475_; 
v___x_2473_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2426_ == 0)
{
uint64_t v___x_2480_; 
v___x_2480_ = 0ULL;
v___y_2475_ = v___x_2480_;
goto v___jp_2474_;
}
else
{
uint64_t v___x_2481_; 
v___x_2481_ = 2ULL;
v___y_2475_ = v___x_2481_;
goto v___jp_2474_;
}
v___jp_2428_:
{
uint64_t v_flags_2431_; uint32_t v___x_2432_; lean_object* v___x_2433_; uint32_t v___x_2434_; lean_object* v___x_2435_; 
v_flags_2431_ = lean_uint64_lor(v___y_2429_, v___y_2430_);
v___x_2432_ = 214;
v___x_2433_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2424_, v_args_2425_);
v___x_2434_ = 0;
v___x_2435_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2432_, v_flags_2431_, v___x_2433_, v___x_2434_);
lean_dec(v___x_2433_);
if (lean_obj_tag(v___x_2435_) == 0)
{
if (lean_obj_tag(v___x_2435_) == 0)
{
lean_object* v_a_2436_; lean_object* v___x_2437_; 
v_a_2436_ = lean_ctor_get(v___x_2435_, 0);
lean_inc(v_a_2436_);
lean_dec_ref_known(v___x_2435_, 1);
v___x_2437_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2436_);
lean_dec(v_a_2436_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref_known(v___x_2437_, 1);
v___x_2439_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2424_);
v___x_2440_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v___x_2439_, v_a_2438_);
lean_dec_ref(v___x_2439_);
return v___x_2440_;
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2448_; 
v_a_2441_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2443_ = v___x_2437_;
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2437_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2446_; 
if (v_isShared_2444_ == 0)
{
v___x_2446_ = v___x_2443_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2441_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
v_a_2449_ = lean_ctor_get(v___x_2435_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2435_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2435_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2435_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
lean_ctor_set_tag(v___x_2451_, 1);
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
}
else
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2472_; 
v_a_2457_ = lean_ctor_get(v___x_2435_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2435_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2459_ = v___x_2435_;
v_isShared_2460_ = v_isSharedCheck_2472_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v___x_2435_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2472_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2470_; 
v___x_2461_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2462_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2424_);
v___x_2463_ = lean_string_append(v___x_2461_, v___x_2462_);
lean_dec_ref(v___x_2462_);
v___x_2464_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2465_ = lean_string_append(v___x_2463_, v___x_2464_);
v___x_2466_ = lean_io_error_to_string(v_a_2457_);
v___x_2467_ = lean_string_append(v___x_2465_, v___x_2466_);
lean_dec_ref(v___x_2466_);
v___x_2468_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 0, v___x_2468_);
v___x_2470_ = v___x_2459_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v___x_2468_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
v___jp_2474_:
{
uint8_t v_construct_2476_; uint64_t v___x_2477_; 
v_construct_2476_ = lean_ctor_get_uint8(v_b_2424_, sizeof(void*)*4);
v___x_2477_ = lean_uint64_lor(v___x_2473_, v___y_2475_);
if (v_construct_2476_ == 0)
{
uint64_t v___x_2478_; 
v___x_2478_ = 0ULL;
v___y_2429_ = v___x_2477_;
v___y_2430_ = v___x_2478_;
goto v___jp_2428_;
}
else
{
uint64_t v___x_2479_; 
v___x_2479_ = 4ULL;
v___y_2429_ = v___x_2477_;
v___y_2430_ = v___x_2479_;
goto v___jp_2428_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0___boxed(lean_object* v_b_2482_, lean_object* v_args_2483_, lean_object* v_await_2484_, lean_object* v_a_2485_){
_start:
{
uint8_t v_await_boxed_2486_; lean_object* v_res_2487_; 
v_await_boxed_2486_ = lean_unbox(v_await_2484_);
v_res_2487_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v_b_2482_, v_args_2483_, v_await_boxed_2486_);
lean_dec_ref(v_b_2482_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(lean_object* v_o_2496_, lean_object* v_method_2497_){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_2500_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2496_, v_method_2497_, v___x_2499_);
if (lean_obj_tag(v___x_2500_) == 0)
{
lean_object* v_a_2501_; uint8_t v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
lean_inc(v_a_2501_);
lean_dec_ref_known(v___x_2500_, 1);
v___x_2502_ = 0;
v___x_2503_ = lean_unsigned_to_nat(1u);
v___x_2504_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2));
v___x_2505_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2506_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2506_, 0, v_a_2501_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = lean_mk_empty_array_with_capacity(v___x_2503_);
v___x_2508_ = lean_array_push(v___x_2507_, v___x_2506_);
v___x_2509_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v___x_2504_, v___x_2508_, v___x_2502_);
return v___x_2509_;
}
else
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
v_a_2510_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2500_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2500_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_a_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___boxed(lean_object* v_o_2518_, lean_object* v_method_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_o_2518_, v_method_2519_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries(lean_object* v_self_2523_){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_entries___closed__0));
v___x_2526_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_self_2523_, v___x_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries___boxed(lean_object* v_self_2527_, lean_object* v_a_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l_Lasm_JS_Web_URLSearchParams_entries(v_self_2527_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(lean_object* v_b_2530_, lean_object* v_args_2531_, uint8_t v_await_2532_){
_start:
{
uint64_t v___y_2535_; uint64_t v___y_2536_; uint64_t v___x_2579_; uint64_t v___y_2581_; 
v___x_2579_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2532_ == 0)
{
uint64_t v___x_2586_; 
v___x_2586_ = 0ULL;
v___y_2581_ = v___x_2586_;
goto v___jp_2580_;
}
else
{
uint64_t v___x_2587_; 
v___x_2587_ = 2ULL;
v___y_2581_ = v___x_2587_;
goto v___jp_2580_;
}
v___jp_2534_:
{
uint64_t v_flags_2537_; uint32_t v___x_2538_; lean_object* v___x_2539_; uint32_t v___x_2540_; lean_object* v___x_2541_; 
v_flags_2537_ = lean_uint64_lor(v___y_2535_, v___y_2536_);
v___x_2538_ = 214;
v___x_2539_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2530_, v_args_2531_);
v___x_2540_ = 0;
v___x_2541_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2538_, v_flags_2537_, v___x_2539_, v___x_2540_);
lean_dec(v___x_2539_);
if (lean_obj_tag(v___x_2541_) == 0)
{
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v_a_2542_; lean_object* v___x_2543_; 
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
lean_inc(v_a_2542_);
lean_dec_ref_known(v___x_2541_, 1);
v___x_2543_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2542_);
lean_dec(v_a_2542_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2544_);
lean_dec_ref_known(v___x_2543_, 1);
v___x_2545_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2530_);
v___x_2546_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v___x_2545_, v_a_2544_);
lean_dec_ref(v___x_2545_);
return v___x_2546_;
}
else
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
v_a_2547_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v___x_2543_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___x_2543_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
}
else
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2562_; 
v_a_2555_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2557_ = v___x_2541_;
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v___x_2541_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2560_; 
if (v_isShared_2558_ == 0)
{
lean_ctor_set_tag(v___x_2557_, 1);
v___x_2560_ = v___x_2557_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_a_2555_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
}
else
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2578_; 
v_a_2563_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2565_ = v___x_2541_;
v_isShared_2566_ = v_isSharedCheck_2578_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___x_2541_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2578_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2576_; 
v___x_2567_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2568_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2530_);
v___x_2569_ = lean_string_append(v___x_2567_, v___x_2568_);
lean_dec_ref(v___x_2568_);
v___x_2570_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2571_ = lean_string_append(v___x_2569_, v___x_2570_);
v___x_2572_ = lean_io_error_to_string(v_a_2563_);
v___x_2573_ = lean_string_append(v___x_2571_, v___x_2572_);
lean_dec_ref(v___x_2572_);
v___x_2574_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 0, v___x_2574_);
v___x_2576_ = v___x_2565_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v___x_2574_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
}
v___jp_2580_:
{
uint8_t v_construct_2582_; uint64_t v___x_2583_; 
v_construct_2582_ = lean_ctor_get_uint8(v_b_2530_, sizeof(void*)*4);
v___x_2583_ = lean_uint64_lor(v___x_2579_, v___y_2581_);
if (v_construct_2582_ == 0)
{
uint64_t v___x_2584_; 
v___x_2584_ = 0ULL;
v___y_2535_ = v___x_2583_;
v___y_2536_ = v___x_2584_;
goto v___jp_2534_;
}
else
{
uint64_t v___x_2585_; 
v___x_2585_ = 4ULL;
v___y_2535_ = v___x_2583_;
v___y_2536_ = v___x_2585_;
goto v___jp_2534_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0___boxed(lean_object* v_b_2588_, lean_object* v_args_2589_, lean_object* v_await_2590_, lean_object* v_a_2591_){
_start:
{
uint8_t v_await_boxed_2592_; lean_object* v_res_2593_; 
v_await_boxed_2592_ = lean_unbox(v_await_2590_);
v_res_2593_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v_b_2588_, v_args_2589_, v_await_boxed_2592_);
lean_dec_ref(v_b_2588_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(lean_object* v_o_2594_, lean_object* v_method_2595_){
_start:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2597_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_2598_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2594_, v_method_2595_, v___x_2597_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; uint8_t v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
lean_dec_ref_known(v___x_2598_, 1);
v___x_2600_ = 0;
v___x_2601_ = lean_unsigned_to_nat(1u);
v___x_2602_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2));
v___x_2603_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2604_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2604_, 0, v_a_2599_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = lean_mk_empty_array_with_capacity(v___x_2601_);
v___x_2606_ = lean_array_push(v___x_2605_, v___x_2604_);
v___x_2607_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v___x_2602_, v___x_2606_, v___x_2600_);
return v___x_2607_;
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2615_; 
v_a_2608_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2610_ = v___x_2598_;
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2598_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2613_; 
if (v_isShared_2611_ == 0)
{
v___x_2613_ = v___x_2610_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_a_2608_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0___boxed(lean_object* v_o_2616_, lean_object* v_method_2617_, lean_object* v_a_2618_){
_start:
{
lean_object* v_res_2619_; 
v_res_2619_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_o_2616_, v_method_2617_);
return v_res_2619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys(lean_object* v_self_2621_){
_start:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2623_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_keys___closed__0));
v___x_2624_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2621_, v___x_2623_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys___boxed(lean_object* v_self_2625_, lean_object* v_a_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lasm_JS_Web_URLSearchParams_keys(v_self_2625_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values(lean_object* v_self_2629_){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_values___closed__0));
v___x_2632_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2629_, v___x_2631_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values___boxed(lean_object* v_self_2633_, lean_object* v_a_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_Lasm_JS_Web_URLSearchParams_values(v_self_2633_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(lean_object* v_x_2636_){
_start:
{
if (lean_obj_tag(v_x_2636_) == 0)
{
lean_object* v___x_2637_; 
v___x_2637_ = lean_box(0);
return v___x_2637_;
}
else
{
lean_object* v_val_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v_val_2638_ = lean_ctor_get(v_x_2636_, 0);
v___x_2639_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0));
v___x_2640_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2638_);
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2639_);
lean_ctor_set(v___x_2641_, 1, v___x_2640_);
v___x_2642_ = lean_unsigned_to_nat(1u);
v___x_2643_ = lean_mk_empty_array_with_capacity(v___x_2642_);
v___x_2644_ = lean_array_push(v___x_2643_, v___x_2641_);
v___x_2645_ = l_Lasm_JS_Web_Support_fields(v___x_2644_);
lean_dec_ref(v___x_2644_);
return v___x_2645_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0___boxed(lean_object* v_x_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_x_2646_);
lean_dec(v_x_2646_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(lean_object* v_context_2648_, lean_object* v_d_2649_){
_start:
{
lean_object* v___y_2652_; lean_object* v___y_2653_; 
if (lean_obj_tag(v_d_2649_) == 9)
{
lean_object* v_value_2657_; lean_object* v___x_2658_; 
v_value_2657_ = lean_ctor_get(v_d_2649_, 0);
lean_inc(v_value_2657_);
lean_dec_ref_known(v_d_2649_, 2);
v___x_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2658_, 0, v_value_2657_);
return v___x_2658_;
}
else
{
lean_object* v___x_2659_; lean_object* v_received_2661_; 
v___x_2659_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_2649_) == 9)
{
lean_object* v_value_2675_; lean_object* v_description_2676_; uint8_t v___x_2677_; 
v_value_2675_ = lean_ctor_get(v_d_2649_, 0);
v_description_2676_ = lean_ctor_get(v_d_2649_, 1);
v___x_2677_ = lean_string_dec_eq(v_description_2676_, v___x_2659_);
if (v___x_2677_ == 0)
{
goto v___jp_2673_;
}
else
{
uint32_t v___x_2678_; uint64_t v___x_2679_; lean_object* v___x_2680_; uint32_t v___x_2681_; lean_object* v___x_2682_; 
lean_inc_n(v_value_2675_, 2);
lean_dec_ref_known(v_d_2649_, 2);
v___x_2678_ = 206;
v___x_2679_ = 0ULL;
v___x_2680_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2680_, 0, v_value_2675_);
lean_ctor_set(v___x_2680_, 1, v___x_2659_);
v___x_2681_ = lasm_js_value_handle(v_value_2675_);
lean_dec(v_value_2675_);
v___x_2682_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2678_, v___x_2679_, v___x_2680_, v___x_2681_);
lean_dec_ref_known(v___x_2680_, 2);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; uint8_t v___x_2684_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2684_ = lean_string_validate_utf8(v_a_2683_);
if (v___x_2684_ == 0)
{
lean_object* v___x_2685_; lean_object* v___x_2686_; 
lean_dec(v_a_2683_);
v___x_2685_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2686_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2685_);
v_received_2661_ = v___x_2686_;
goto v___jp_2660_;
}
else
{
lean_object* v___x_2687_; 
v___x_2687_ = lean_string_from_utf8_unchecked(v_a_2683_);
v_received_2661_ = v___x_2687_;
goto v___jp_2660_;
}
}
else
{
lean_object* v___x_2688_; 
lean_dec_ref_known(v___x_2682_, 1);
v___x_2688_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_2661_ = v___x_2688_;
goto v___jp_2660_;
}
}
}
else
{
goto v___jp_2673_;
}
v___jp_2660_:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; uint8_t v___x_2671_; 
v___x_2662_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2663_ = lean_string_append(v___x_2662_, v_context_2648_);
v___x_2664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2665_ = lean_string_append(v___x_2663_, v___x_2664_);
v___x_2666_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPattern___closed__0));
v___x_2667_ = lean_string_append(v___x_2665_, v___x_2666_);
v___x_2668_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2669_ = lean_string_append(v___x_2667_, v___x_2668_);
v___x_2670_ = lean_string_append(v___x_2669_, v_received_2661_);
lean_dec_ref(v_received_2661_);
v___x_2671_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_2671_ == 0)
{
lean_object* v___x_2672_; 
v___x_2672_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_2652_ = v___x_2670_;
v___y_2653_ = v___x_2672_;
goto v___jp_2651_;
}
else
{
v___y_2652_ = v___x_2670_;
v___y_2653_ = v___x_2659_;
goto v___jp_2651_;
}
}
v___jp_2673_:
{
lean_object* v___x_2674_; 
v___x_2674_ = l_Lasm_JS_Data_describe(v_d_2649_);
v_received_2661_ = v___x_2674_;
goto v___jp_2660_;
}
}
v___jp_2651_:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2654_ = lean_string_append(v___y_2652_, v___y_2653_);
v___x_2655_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2654_);
v___x_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
return v___x_2656_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1___boxed(lean_object* v_context_2689_, lean_object* v_d_2690_, lean_object* v_a_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v_context_2689_, v_d_2690_);
lean_dec_ref(v_context_2689_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(lean_object* v_b_2693_, lean_object* v_args_2694_, uint8_t v_await_2695_){
_start:
{
uint64_t v___y_2698_; uint64_t v___y_2699_; uint64_t v___x_2742_; uint64_t v___y_2744_; 
v___x_2742_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2695_ == 0)
{
uint64_t v___x_2749_; 
v___x_2749_ = 0ULL;
v___y_2744_ = v___x_2749_;
goto v___jp_2743_;
}
else
{
uint64_t v___x_2750_; 
v___x_2750_ = 2ULL;
v___y_2744_ = v___x_2750_;
goto v___jp_2743_;
}
v___jp_2697_:
{
uint64_t v_flags_2700_; uint32_t v___x_2701_; lean_object* v___x_2702_; uint32_t v___x_2703_; lean_object* v___x_2704_; 
v_flags_2700_ = lean_uint64_lor(v___y_2698_, v___y_2699_);
v___x_2701_ = 214;
v___x_2702_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2693_, v_args_2694_);
v___x_2703_ = 0;
v___x_2704_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2701_, v_flags_2700_, v___x_2702_, v___x_2703_);
lean_dec(v___x_2702_);
if (lean_obj_tag(v___x_2704_) == 0)
{
if (lean_obj_tag(v___x_2704_) == 0)
{
lean_object* v_a_2705_; lean_object* v___x_2706_; 
v_a_2705_ = lean_ctor_get(v___x_2704_, 0);
lean_inc(v_a_2705_);
lean_dec_ref_known(v___x_2704_, 1);
v___x_2706_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2705_);
lean_dec(v_a_2705_);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v_a_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
lean_inc(v_a_2707_);
lean_dec_ref_known(v___x_2706_, 1);
v___x_2708_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2693_);
v___x_2709_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v___x_2708_, v_a_2707_);
lean_dec_ref(v___x_2708_);
return v___x_2709_;
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
v_a_2710_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___x_2706_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2706_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
v_a_2718_ = lean_ctor_get(v___x_2704_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2704_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___x_2704_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___x_2704_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
lean_ctor_set_tag(v___x_2720_, 1);
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2741_; 
v_a_2726_ = lean_ctor_get(v___x_2704_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2704_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2728_ = v___x_2704_;
v_isShared_2729_ = v_isSharedCheck_2741_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2704_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2741_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2739_; 
v___x_2730_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2731_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2693_);
v___x_2732_ = lean_string_append(v___x_2730_, v___x_2731_);
lean_dec_ref(v___x_2731_);
v___x_2733_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2734_ = lean_string_append(v___x_2732_, v___x_2733_);
v___x_2735_ = lean_io_error_to_string(v_a_2726_);
v___x_2736_ = lean_string_append(v___x_2734_, v___x_2735_);
lean_dec_ref(v___x_2735_);
v___x_2737_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2736_);
if (v_isShared_2729_ == 0)
{
lean_ctor_set(v___x_2728_, 0, v___x_2737_);
v___x_2739_ = v___x_2728_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v___x_2737_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
v___jp_2743_:
{
uint8_t v_construct_2745_; uint64_t v___x_2746_; 
v_construct_2745_ = lean_ctor_get_uint8(v_b_2693_, sizeof(void*)*4);
v___x_2746_ = lean_uint64_lor(v___x_2742_, v___y_2744_);
if (v_construct_2745_ == 0)
{
uint64_t v___x_2747_; 
v___x_2747_ = 0ULL;
v___y_2698_ = v___x_2746_;
v___y_2699_ = v___x_2747_;
goto v___jp_2697_;
}
else
{
uint64_t v___x_2748_; 
v___x_2748_ = 4ULL;
v___y_2698_ = v___x_2746_;
v___y_2699_ = v___x_2748_;
goto v___jp_2697_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1___boxed(lean_object* v_b_2751_, lean_object* v_args_2752_, lean_object* v_await_2753_, lean_object* v_a_2754_){
_start:
{
uint8_t v_await_boxed_2755_; lean_object* v_res_2756_; 
v_await_boxed_2755_ = lean_unbox(v_await_2753_);
v_res_2756_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v_b_2751_, v_args_2752_, v_await_boxed_2755_);
lean_dec_ref(v_b_2751_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new(lean_object* v_input_2765_, lean_object* v_baseURL_2766_, lean_object* v_options_2767_){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___y_2772_; 
v___x_2769_ = lean_unsigned_to_nat(3u);
v___x_2770_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_new___closed__2));
if (lean_obj_tag(v_input_2765_) == 0)
{
lean_object* v_value_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
v_value_2782_ = lean_ctor_get(v_input_2765_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v_input_2765_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v_input_2765_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_value_2782_);
lean_dec(v_input_2765_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
lean_ctor_set_tag(v___x_2784_, 4);
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_value_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
v___y_2772_ = v___x_2787_;
goto v___jp_2771_;
}
}
}
else
{
lean_object* v_value_2790_; lean_object* v_protocol_2791_; lean_object* v_username_2792_; lean_object* v_password_2793_; lean_object* v_hostname_2794_; lean_object* v_port_2795_; lean_object* v_pathname_2796_; lean_object* v_search_2797_; lean_object* v_hash_2798_; lean_object* v_baseURL_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v_value_2790_ = lean_ctor_get(v_input_2765_, 0);
lean_inc_ref(v_value_2790_);
lean_dec_ref_known(v_input_2765_, 1);
v_protocol_2791_ = lean_ctor_get(v_value_2790_, 0);
lean_inc(v_protocol_2791_);
v_username_2792_ = lean_ctor_get(v_value_2790_, 1);
lean_inc(v_username_2792_);
v_password_2793_ = lean_ctor_get(v_value_2790_, 2);
lean_inc(v_password_2793_);
v_hostname_2794_ = lean_ctor_get(v_value_2790_, 3);
lean_inc(v_hostname_2794_);
v_port_2795_ = lean_ctor_get(v_value_2790_, 4);
lean_inc(v_port_2795_);
v_pathname_2796_ = lean_ctor_get(v_value_2790_, 5);
lean_inc(v_pathname_2796_);
v_search_2797_ = lean_ctor_get(v_value_2790_, 6);
lean_inc(v_search_2797_);
v_hash_2798_ = lean_ctor_get(v_value_2790_, 7);
lean_inc(v_hash_2798_);
v_baseURL_2799_ = lean_ctor_get(v_value_2790_, 8);
lean_inc(v_baseURL_2799_);
lean_dec_ref(v_value_2790_);
v___x_2800_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2801_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2791_);
v___x_2802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2800_);
lean_ctor_set(v___x_2802_, 1, v___x_2801_);
v___x_2803_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2804_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2792_);
v___x_2805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2803_);
lean_ctor_set(v___x_2805_, 1, v___x_2804_);
v___x_2806_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2807_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2793_);
v___x_2808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2806_);
lean_ctor_set(v___x_2808_, 1, v___x_2807_);
v___x_2809_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2810_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2794_);
v___x_2811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2809_);
lean_ctor_set(v___x_2811_, 1, v___x_2810_);
v___x_2812_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2813_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2795_);
v___x_2814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2814_, 0, v___x_2812_);
lean_ctor_set(v___x_2814_, 1, v___x_2813_);
v___x_2815_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2816_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2796_);
v___x_2817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2815_);
lean_ctor_set(v___x_2817_, 1, v___x_2816_);
v___x_2818_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2819_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2797_);
v___x_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2818_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
v___x_2821_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2822_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2798_);
v___x_2823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2821_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
v___x_2824_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2825_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2799_);
v___x_2826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2824_);
lean_ctor_set(v___x_2826_, 1, v___x_2825_);
v___x_2827_ = lean_unsigned_to_nat(9u);
v___x_2828_ = lean_mk_empty_array_with_capacity(v___x_2827_);
v___x_2829_ = lean_array_push(v___x_2828_, v___x_2802_);
v___x_2830_ = lean_array_push(v___x_2829_, v___x_2805_);
v___x_2831_ = lean_array_push(v___x_2830_, v___x_2808_);
v___x_2832_ = lean_array_push(v___x_2831_, v___x_2811_);
v___x_2833_ = lean_array_push(v___x_2832_, v___x_2814_);
v___x_2834_ = lean_array_push(v___x_2833_, v___x_2817_);
v___x_2835_ = lean_array_push(v___x_2834_, v___x_2820_);
v___x_2836_ = lean_array_push(v___x_2835_, v___x_2823_);
v___x_2837_ = lean_array_push(v___x_2836_, v___x_2826_);
v___x_2838_ = l_Lasm_JS_Web_Support_fields(v___x_2837_);
lean_dec_ref(v___x_2837_);
v___y_2772_ = v___x_2838_;
goto v___jp_2771_;
}
v___jp_2771_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; uint8_t v___x_2780_; lean_object* v___x_2781_; 
v___x_2773_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2773_, 0, v_baseURL_2766_);
v___x_2774_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_2767_);
v___x_2775_ = lean_mk_empty_array_with_capacity(v___x_2769_);
v___x_2776_ = lean_array_push(v___x_2775_, v___y_2772_);
v___x_2777_ = lean_array_push(v___x_2776_, v___x_2773_);
v___x_2778_ = lean_array_push(v___x_2777_, v___x_2774_);
v___x_2779_ = l_Lasm_JS_Web_Support_args(v___x_2778_);
v___x_2780_ = 0;
v___x_2781_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_2770_, v___x_2779_, v___x_2780_);
return v___x_2781_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new___boxed(lean_object* v_input_2839_, lean_object* v_baseURL_2840_, lean_object* v_options_2841_, lean_object* v_a_2842_){
_start:
{
lean_object* v_res_2843_; 
v_res_2843_ = l_Lasm_JS_Web_URLPattern_new(v_input_2839_, v_baseURL_2840_, v_options_2841_);
lean_dec(v_options_2841_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(lean_object* v_x_2844_){
_start:
{
if (lean_obj_tag(v_x_2844_) == 0)
{
lean_object* v___x_2845_; 
v___x_2845_ = lean_box(0);
return v___x_2845_;
}
else
{
lean_object* v_val_2846_; 
v_val_2846_ = lean_ctor_get(v_x_2844_, 0);
lean_inc(v_val_2846_);
lean_dec_ref_known(v_x_2844_, 1);
if (lean_obj_tag(v_val_2846_) == 0)
{
lean_object* v_value_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2854_; 
v_value_2847_ = lean_ctor_get(v_val_2846_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v_val_2846_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2849_ = v_val_2846_;
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_value_2847_);
lean_dec(v_val_2846_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2852_; 
if (v_isShared_2850_ == 0)
{
lean_ctor_set_tag(v___x_2849_, 4);
v___x_2852_ = v___x_2849_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v_value_2847_);
v___x_2852_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
return v___x_2852_;
}
}
}
else
{
lean_object* v_value_2855_; lean_object* v_protocol_2856_; lean_object* v_username_2857_; lean_object* v_password_2858_; lean_object* v_hostname_2859_; lean_object* v_port_2860_; lean_object* v_pathname_2861_; lean_object* v_search_2862_; lean_object* v_hash_2863_; lean_object* v_baseURL_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v_value_2855_ = lean_ctor_get(v_val_2846_, 0);
lean_inc_ref(v_value_2855_);
lean_dec_ref_known(v_val_2846_, 1);
v_protocol_2856_ = lean_ctor_get(v_value_2855_, 0);
lean_inc(v_protocol_2856_);
v_username_2857_ = lean_ctor_get(v_value_2855_, 1);
lean_inc(v_username_2857_);
v_password_2858_ = lean_ctor_get(v_value_2855_, 2);
lean_inc(v_password_2858_);
v_hostname_2859_ = lean_ctor_get(v_value_2855_, 3);
lean_inc(v_hostname_2859_);
v_port_2860_ = lean_ctor_get(v_value_2855_, 4);
lean_inc(v_port_2860_);
v_pathname_2861_ = lean_ctor_get(v_value_2855_, 5);
lean_inc(v_pathname_2861_);
v_search_2862_ = lean_ctor_get(v_value_2855_, 6);
lean_inc(v_search_2862_);
v_hash_2863_ = lean_ctor_get(v_value_2855_, 7);
lean_inc(v_hash_2863_);
v_baseURL_2864_ = lean_ctor_get(v_value_2855_, 8);
lean_inc(v_baseURL_2864_);
lean_dec_ref(v_value_2855_);
v___x_2865_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2866_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2856_);
v___x_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2865_);
lean_ctor_set(v___x_2867_, 1, v___x_2866_);
v___x_2868_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2869_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2857_);
v___x_2870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2868_);
lean_ctor_set(v___x_2870_, 1, v___x_2869_);
v___x_2871_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2872_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2858_);
v___x_2873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2873_, 0, v___x_2871_);
lean_ctor_set(v___x_2873_, 1, v___x_2872_);
v___x_2874_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2875_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2859_);
v___x_2876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2874_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2878_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2860_);
v___x_2879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2877_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
v___x_2880_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2881_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2861_);
v___x_2882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2880_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
v___x_2883_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2884_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2862_);
v___x_2885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2883_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
v___x_2886_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2887_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2863_);
v___x_2888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2886_);
lean_ctor_set(v___x_2888_, 1, v___x_2887_);
v___x_2889_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2890_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2864_);
v___x_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2889_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
v___x_2892_ = lean_unsigned_to_nat(9u);
v___x_2893_ = lean_mk_empty_array_with_capacity(v___x_2892_);
v___x_2894_ = lean_array_push(v___x_2893_, v___x_2867_);
v___x_2895_ = lean_array_push(v___x_2894_, v___x_2870_);
v___x_2896_ = lean_array_push(v___x_2895_, v___x_2873_);
v___x_2897_ = lean_array_push(v___x_2896_, v___x_2876_);
v___x_2898_ = lean_array_push(v___x_2897_, v___x_2879_);
v___x_2899_ = lean_array_push(v___x_2898_, v___x_2882_);
v___x_2900_ = lean_array_push(v___x_2899_, v___x_2885_);
v___x_2901_ = lean_array_push(v___x_2900_, v___x_2888_);
v___x_2902_ = lean_array_push(v___x_2901_, v___x_2891_);
v___x_2903_ = l_Lasm_JS_Web_Support_fields(v___x_2902_);
lean_dec_ref(v___x_2902_);
return v___x_2903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions(lean_object* v_input_2911_, lean_object* v_options_2912_){
_start:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; uint8_t v___x_2922_; lean_object* v___x_2923_; 
v___x_2914_ = lean_unsigned_to_nat(2u);
v___x_2915_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_newWithOptions___closed__1));
v___x_2916_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_2911_);
v___x_2917_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_2912_);
v___x_2918_ = lean_mk_empty_array_with_capacity(v___x_2914_);
v___x_2919_ = lean_array_push(v___x_2918_, v___x_2916_);
v___x_2920_ = lean_array_push(v___x_2919_, v___x_2917_);
v___x_2921_ = l_Lasm_JS_Web_Support_args(v___x_2920_);
v___x_2922_ = 0;
v___x_2923_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_2915_, v___x_2921_, v___x_2922_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions___boxed(lean_object* v_input_2924_, lean_object* v_options_2925_, lean_object* v_a_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = l_Lasm_JS_Web_URLPattern_newWithOptions(v_input_2924_, v_options_2925_);
lean_dec(v_options_2925_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol(lean_object* v_self_2928_){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2930_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2931_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2928_, v___x_2930_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol___boxed(lean_object* v_self_2932_, lean_object* v_a_2933_){
_start:
{
lean_object* v_res_2934_; 
v_res_2934_ = l_Lasm_JS_Web_URLPattern_protocol(v_self_2932_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username(lean_object* v_self_2935_){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2938_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2935_, v___x_2937_);
return v___x_2938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username___boxed(lean_object* v_self_2939_, lean_object* v_a_2940_){
_start:
{
lean_object* v_res_2941_; 
v_res_2941_ = l_Lasm_JS_Web_URLPattern_username(v_self_2939_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password(lean_object* v_self_2942_){
_start:
{
lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2944_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2945_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2942_, v___x_2944_);
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password___boxed(lean_object* v_self_2946_, lean_object* v_a_2947_){
_start:
{
lean_object* v_res_2948_; 
v_res_2948_ = l_Lasm_JS_Web_URLPattern_password(v_self_2946_);
return v_res_2948_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname(lean_object* v_self_2949_){
_start:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2952_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2949_, v___x_2951_);
return v___x_2952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname___boxed(lean_object* v_self_2953_, lean_object* v_a_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Lasm_JS_Web_URLPattern_hostname(v_self_2953_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port(lean_object* v_self_2956_){
_start:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2958_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2959_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2956_, v___x_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port___boxed(lean_object* v_self_2960_, lean_object* v_a_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l_Lasm_JS_Web_URLPattern_port(v_self_2960_);
return v_res_2962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname(lean_object* v_self_2963_){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2965_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2966_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2963_, v___x_2965_);
return v___x_2966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname___boxed(lean_object* v_self_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lasm_JS_Web_URLPattern_pathname(v_self_2967_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search(lean_object* v_self_2970_){
_start:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2972_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2973_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2970_, v___x_2972_);
return v___x_2973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search___boxed(lean_object* v_self_2974_, lean_object* v_a_2975_){
_start:
{
lean_object* v_res_2976_; 
v_res_2976_ = l_Lasm_JS_Web_URLPattern_search(v_self_2974_);
return v_res_2976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash(lean_object* v_self_2977_){
_start:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2979_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2980_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2977_, v___x_2979_);
return v___x_2980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash___boxed(lean_object* v_self_2981_, lean_object* v_a_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l_Lasm_JS_Web_URLPattern_hash(v_self_2981_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups(lean_object* v_self_2985_){
_start:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2987_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_hasRegExpGroups___closed__0));
v___x_2988_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2985_, v___x_2987_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups___boxed(lean_object* v_self_2989_, lean_object* v_a_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = l_Lasm_JS_Web_URLPattern_hasRegExpGroups(v_self_2989_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test(lean_object* v_self_2993_, lean_object* v_input_2994_, lean_object* v_baseURL_2995_){
_start:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_2997_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_test___closed__0));
v___x_2998_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_2994_);
v___x_2999_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2995_);
v___x_3000_ = lean_unsigned_to_nat(2u);
v___x_3001_ = lean_mk_empty_array_with_capacity(v___x_3000_);
v___x_3002_ = lean_array_push(v___x_3001_, v___x_2998_);
v___x_3003_ = lean_array_push(v___x_3002_, v___x_2999_);
v___x_3004_ = l_Lasm_JS_Web_Support_args(v___x_3003_);
v___x_3005_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2993_, v___x_2997_, v___x_3004_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test___boxed(lean_object* v_self_3006_, lean_object* v_input_3007_, lean_object* v_baseURL_3008_, lean_object* v_a_3009_){
_start:
{
lean_object* v_res_3010_; 
v_res_3010_ = l_Lasm_JS_Web_URLPattern_test(v_self_3006_, v_input_3007_, v_baseURL_3008_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_3019_, lean_object* v_key_3020_){
_start:
{
if (lean_obj_tag(v_d_3019_) == 8)
{
lean_object* v___x_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3051_; 
v___x_3023_ = l_Lasm_JS_Data_field(v_d_3019_, v_key_3020_);
v_isSharedCheck_3051_ = !lean_is_exclusive(v_d_3019_);
if (v_isSharedCheck_3051_ == 0)
{
lean_object* v_unused_3052_; 
v_unused_3052_ = lean_ctor_get(v_d_3019_, 0);
lean_dec(v_unused_3052_);
v___x_3025_ = v_d_3019_;
v_isShared_3026_ = v_isSharedCheck_3051_;
goto v_resetjp_3024_;
}
else
{
lean_dec(v_d_3019_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3051_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
switch(lean_obj_tag(v___x_3023_))
{
case 1:
{
lean_del_object(v___x_3025_);
goto v___jp_3021_;
}
case 0:
{
lean_del_object(v___x_3025_);
goto v___jp_3021_;
}
default: 
{
if (lean_obj_tag(v___x_3023_) == 4)
{
lean_object* v_s_3027_; lean_object* v___x_3029_; 
v_s_3027_ = lean_ctor_get(v___x_3023_, 0);
lean_inc_ref(v_s_3027_);
lean_dec_ref_known(v___x_3023_, 1);
if (v_isShared_3026_ == 0)
{
lean_ctor_set_tag(v___x_3025_, 1);
lean_ctor_set(v___x_3025_, 0, v_s_3027_);
v___x_3029_ = v___x_3025_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_s_3027_);
v___x_3029_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
lean_object* v___x_3030_; 
v___x_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
return v___x_3030_;
}
}
else
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; uint8_t v___x_3042_; 
v___x_3032_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3033_ = lean_string_append(v___x_3032_, v_key_3020_);
v___x_3034_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3035_ = lean_string_append(v___x_3033_, v___x_3034_);
v___x_3036_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_3037_ = lean_string_append(v___x_3035_, v___x_3036_);
v___x_3038_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3039_ = lean_string_append(v___x_3037_, v___x_3038_);
v___x_3040_ = l_Lasm_JS_Data_describe(v___x_3023_);
v___x_3041_ = lean_string_append(v___x_3039_, v___x_3040_);
lean_dec_ref(v___x_3040_);
v___x_3042_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_3042_ == 0)
{
lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3046_; 
v___x_3043_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___x_3044_ = lean_string_append(v___x_3041_, v___x_3043_);
if (v_isShared_3026_ == 0)
{
lean_ctor_set_tag(v___x_3025_, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3044_);
v___x_3046_ = v___x_3025_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v___x_3044_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
}
}
else
{
lean_object* v___x_3049_; 
if (v_isShared_3026_ == 0)
{
lean_ctor_set_tag(v___x_3025_, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3041_);
v___x_3049_ = v___x_3025_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3041_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3053_; 
lean_dec(v_d_3019_);
v___x_3053_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5));
return v___x_3053_;
}
v___jp_3021_:
{
lean_object* v___x_3022_; 
v___x_3022_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3022_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_3054_, lean_object* v_key_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3054_, v_key_3055_);
lean_dec_ref(v_key_3055_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(size_t v_sz_3057_, size_t v_i_3058_, lean_object* v_bs_3059_){
_start:
{
uint8_t v___x_3060_; 
v___x_3060_ = lean_usize_dec_lt(v_i_3058_, v_sz_3057_);
if (v___x_3060_ == 0)
{
lean_object* v___x_3061_; 
v___x_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3061_, 0, v_bs_3059_);
return v___x_3061_;
}
else
{
lean_object* v_v_3062_; lean_object* v___x_3063_; lean_object* v_bs_x27_3064_; lean_object* v_a_3066_; 
v_v_3062_ = lean_array_uget(v_bs_3059_, v_i_3058_);
v___x_3063_ = lean_unsigned_to_nat(0u);
v_bs_x27_3064_ = lean_array_uset(v_bs_3059_, v_i_3058_, v___x_3063_);
switch(lean_obj_tag(v_v_3062_))
{
case 4:
{
lean_object* v_s_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3078_; 
v_s_3071_ = lean_ctor_get(v_v_3062_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v_v_3062_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3073_ = v_v_3062_;
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_s_3071_);
lean_dec(v_v_3062_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
lean_ctor_set_tag(v___x_3073_, 0);
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_s_3071_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
v_a_3066_ = v___x_3076_;
goto v___jp_3065_;
}
}
}
case 8:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
v___x_3079_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v_v_3062_);
v___x_3080_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3062_, v___x_3079_);
if (lean_obj_tag(v___x_3080_) == 0)
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
lean_dec_ref_known(v_v_3062_, 1);
lean_dec_ref(v_bs_x27_3064_);
v_a_3081_ = lean_ctor_get(v___x_3080_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3080_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_3080_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_3080_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
else
{
lean_object* v_a_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v_a_3089_ = lean_ctor_get(v___x_3080_, 0);
lean_inc(v_a_3089_);
lean_dec_ref_known(v___x_3080_, 1);
v___x_3090_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v_v_3062_);
v___x_3091_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3062_, v___x_3090_);
if (lean_obj_tag(v___x_3091_) == 0)
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec(v_a_3089_);
lean_dec_ref_known(v_v_3062_, 1);
lean_dec_ref(v_bs_x27_3064_);
v_a_3092_ = lean_ctor_get(v___x_3091_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3091_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3091_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v_a_3100_ = lean_ctor_get(v___x_3091_, 0);
lean_inc(v_a_3100_);
lean_dec_ref_known(v___x_3091_, 1);
v___x_3101_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v_v_3062_);
v___x_3102_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3062_, v___x_3101_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
lean_dec(v_a_3100_);
lean_dec(v_a_3089_);
lean_dec_ref_known(v_v_3062_, 1);
lean_dec_ref(v_bs_x27_3064_);
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_3102_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_3102_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
else
{
lean_object* v_a_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v_a_3111_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_a_3111_);
lean_dec_ref_known(v___x_3102_, 1);
v___x_3112_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v_v_3062_);
v___x_3113_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3062_, v___x_3112_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3121_; 
lean_dec(v_a_3111_);
lean_dec(v_a_3100_);
lean_dec(v_a_3089_);
lean_dec_ref_known(v_v_3062_, 1);
lean_dec_ref(v_bs_x27_3064_);
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3113_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3116_ = v___x_3113_;
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3113_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3119_; 
if (v_isShared_3117_ == 0)
{
v___x_3119_ = v___x_3116_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_a_3114_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
}
else
{
lean_object* v_a_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v_a_3122_ = lean_ctor_get(v___x_3113_, 0);
lean_inc(v_a_3122_);
lean_dec_ref_known(v___x_3113_, 1);
v___x_3123_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v_v_3062_);
v___x_3124_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3062_, v___x_3123_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
lean_dec(v_a_3122_);
lean_dec(v_a_3111_);
lean_dec(v_a_3100_);
lean_dec(v_a_3089_);
lean_dec_ref_known(v_v_3062_, 1);
lean_dec_ref(v_bs_x27_3064_);
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3124_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3124_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v_a_3133_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_a_3133_);
lean_dec_ref_known(v___x_3124_, 1);
v___x_3134_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v_v_3062_);
v___x_3135_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3062_, v___x_3134_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3143_; 
lean_dec(v_a_3133_);
lean_dec(v_a_3122_);
lean_dec(v_a_3111_);
lean_dec(v_a_3100_);
lean_dec(v_a_3089_);
lean_dec_ref_known(v_v_3062_, 1);
lean_dec_ref(v_bs_x27_3064_);
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3138_ = v___x_3135_;
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3135_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_a_3136_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v_a_3144_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3135_, 1);
v___x_3145_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v_v_3062_);
v___x_3146_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3062_, v___x_3145_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3154_; 
lean_dec(v_a_3144_);
lean_dec(v_a_3133_);
lean_dec(v_a_3122_);
lean_dec(v_a_3111_);
lean_dec(v_a_3100_);
lean_dec(v_a_3089_);
lean_dec_ref_known(v_v_3062_, 1);
lean_dec_ref(v_bs_x27_3064_);
v_a_3147_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3149_ = v___x_3146_;
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3146_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3152_; 
if (v_isShared_3150_ == 0)
{
v___x_3152_ = v___x_3149_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3147_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
else
{
lean_object* v_a_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
v_a_3155_ = lean_ctor_get(v___x_3146_, 0);
lean_inc(v_a_3155_);
lean_dec_ref_known(v___x_3146_, 1);
v___x_3156_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc_ref(v_v_3062_);
v___x_3157_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3062_, v___x_3156_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
lean_dec(v_a_3155_);
lean_dec(v_a_3144_);
lean_dec(v_a_3133_);
lean_dec(v_a_3122_);
lean_dec(v_a_3111_);
lean_dec(v_a_3100_);
lean_dec(v_a_3089_);
lean_dec_ref_known(v_v_3062_, 1);
lean_dec_ref(v_bs_x27_3064_);
v_a_3158_ = lean_ctor_get(v___x_3157_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3160_ = v___x_3157_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3157_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3163_; 
if (v_isShared_3161_ == 0)
{
v___x_3163_ = v___x_3160_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_a_3158_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
else
{
lean_object* v_a_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v_a_3166_ = lean_ctor_get(v___x_3157_, 0);
lean_inc(v_a_3166_);
lean_dec_ref_known(v___x_3157_, 1);
v___x_3167_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_3168_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3062_, v___x_3167_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_dec(v_a_3166_);
lean_dec(v_a_3155_);
lean_dec(v_a_3144_);
lean_dec(v_a_3133_);
lean_dec(v_a_3122_);
lean_dec(v_a_3111_);
lean_dec(v_a_3100_);
lean_dec(v_a_3089_);
lean_dec_ref(v_bs_x27_3064_);
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
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3169_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
else
{
lean_object* v_a_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v_a_3177_ = lean_ctor_get(v___x_3168_, 0);
lean_inc(v_a_3177_);
lean_dec_ref_known(v___x_3168_, 1);
v___x_3178_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3178_, 0, v_a_3089_);
lean_ctor_set(v___x_3178_, 1, v_a_3100_);
lean_ctor_set(v___x_3178_, 2, v_a_3111_);
lean_ctor_set(v___x_3178_, 3, v_a_3122_);
lean_ctor_set(v___x_3178_, 4, v_a_3133_);
lean_ctor_set(v___x_3178_, 5, v_a_3144_);
lean_ctor_set(v___x_3178_, 6, v_a_3155_);
lean_ctor_set(v___x_3178_, 7, v_a_3166_);
lean_ctor_set(v___x_3178_, 8, v_a_3177_);
v___x_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3178_);
v_a_3066_ = v___x_3179_;
goto v___jp_3065_;
}
}
}
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_3180_; 
lean_dec_ref(v_bs_x27_3064_);
lean_dec(v_v_3062_);
v___x_3180_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3180_;
}
}
v___jp_3065_:
{
size_t v___x_3067_; size_t v___x_3068_; lean_object* v___x_3069_; 
v___x_3067_ = ((size_t)1ULL);
v___x_3068_ = lean_usize_add(v_i_3058_, v___x_3067_);
v___x_3069_ = lean_array_uset(v_bs_x27_3064_, v_i_3058_, v_a_3066_);
v_i_3058_ = v___x_3068_;
v_bs_3059_ = v___x_3069_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_sz_3181_, lean_object* v_i_3182_, lean_object* v_bs_3183_){
_start:
{
size_t v_sz_boxed_3184_; size_t v_i_boxed_3185_; lean_object* v_res_3186_; 
v_sz_boxed_3184_ = lean_unbox_usize(v_sz_3181_);
lean_dec(v_sz_3181_);
v_i_boxed_3185_ = lean_unbox_usize(v_i_3182_);
lean_dec(v_i_3182_);
v_res_3186_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(v_sz_boxed_3184_, v_i_boxed_3185_, v_bs_3183_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3193_, lean_object* v_key_3194_){
_start:
{
if (lean_obj_tag(v_d_3193_) == 8)
{
lean_object* v___x_3197_; lean_object* v___x_3199_; uint8_t v_isShared_3200_; uint8_t v_isSharedCheck_3250_; 
v___x_3197_ = l_Lasm_JS_Data_field(v_d_3193_, v_key_3194_);
v_isSharedCheck_3250_ = !lean_is_exclusive(v_d_3193_);
if (v_isSharedCheck_3250_ == 0)
{
lean_object* v_unused_3251_; 
v_unused_3251_ = lean_ctor_get(v_d_3193_, 0);
lean_dec(v_unused_3251_);
v___x_3199_ = v_d_3193_;
v_isShared_3200_ = v_isSharedCheck_3250_;
goto v_resetjp_3198_;
}
else
{
lean_dec(v_d_3193_);
v___x_3199_ = lean_box(0);
v_isShared_3200_ = v_isSharedCheck_3250_;
goto v_resetjp_3198_;
}
v_resetjp_3198_:
{
lean_object* v_a_3202_; 
switch(lean_obj_tag(v___x_3197_))
{
case 1:
{
lean_del_object(v___x_3199_);
goto v___jp_3195_;
}
case 0:
{
lean_del_object(v___x_3199_);
goto v___jp_3195_;
}
default: 
{
if (lean_obj_tag(v___x_3197_) == 7)
{
lean_object* v_items_3227_; size_t v_sz_3228_; size_t v___x_3229_; lean_object* v___x_3230_; 
v_items_3227_ = lean_ctor_get(v___x_3197_, 0);
lean_inc_ref(v_items_3227_);
v_sz_3228_ = lean_array_size(v_items_3227_);
v___x_3229_ = ((size_t)0ULL);
v___x_3230_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(v_sz_3228_, v___x_3229_, v_items_3227_);
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_object* v_a_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; uint8_t v___x_3235_; 
v_a_3231_ = lean_ctor_get(v___x_3230_, 0);
lean_inc(v_a_3231_);
lean_dec_ref_known(v___x_3230_, 1);
v___x_3232_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3233_ = lean_string_utf8_byte_size(v_a_3231_);
v___x_3234_ = lean_unsigned_to_nat(0u);
v___x_3235_ = lean_nat_dec_eq(v___x_3233_, v___x_3234_);
if (v___x_3235_ == 0)
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
v___x_3236_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3237_ = lean_string_append(v___x_3236_, v_a_3231_);
lean_dec(v_a_3231_);
v___x_3238_ = lean_string_append(v___x_3232_, v___x_3237_);
lean_dec_ref(v___x_3237_);
v_a_3202_ = v___x_3238_;
goto v___jp_3201_;
}
else
{
lean_dec(v_a_3231_);
v_a_3202_ = v___x_3232_;
goto v___jp_3201_;
}
}
else
{
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_object* v_a_3239_; 
v_a_3239_ = lean_ctor_get(v___x_3230_, 0);
lean_inc(v_a_3239_);
lean_dec_ref_known(v___x_3230_, 1);
v_a_3202_ = v_a_3239_;
goto v___jp_3201_;
}
else
{
lean_object* v_a_3240_; lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3248_; 
lean_dec_ref_known(v___x_3197_, 1);
lean_del_object(v___x_3199_);
v_a_3240_ = lean_ctor_get(v___x_3230_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3230_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3242_ = v___x_3230_;
v_isShared_3243_ = v_isSharedCheck_3248_;
goto v_resetjp_3241_;
}
else
{
lean_inc(v_a_3240_);
lean_dec(v___x_3230_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3248_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
lean_object* v___x_3244_; lean_object* v___x_3246_; 
v___x_3244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3244_, 0, v_a_3240_);
if (v_isShared_3243_ == 0)
{
lean_ctor_set(v___x_3242_, 0, v___x_3244_);
v___x_3246_ = v___x_3242_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v___x_3244_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
}
}
else
{
lean_object* v___x_3249_; 
v___x_3249_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3202_ = v___x_3249_;
goto v___jp_3201_;
}
}
}
v___jp_3201_:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; uint8_t v___x_3215_; 
v___x_3203_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3204_ = lean_string_append(v___x_3203_, v_key_3194_);
v___x_3205_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3206_ = lean_string_append(v___x_3204_, v___x_3205_);
v___x_3207_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__1));
v___x_3208_ = lean_string_append(v___x_3206_, v___x_3207_);
v___x_3209_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3210_ = lean_string_append(v___x_3208_, v___x_3209_);
v___x_3211_ = l_Lasm_JS_Data_describe(v___x_3197_);
v___x_3212_ = lean_string_append(v___x_3210_, v___x_3211_);
lean_dec_ref(v___x_3211_);
v___x_3213_ = lean_string_utf8_byte_size(v_a_3202_);
v___x_3214_ = lean_unsigned_to_nat(0u);
v___x_3215_ = lean_nat_dec_eq(v___x_3213_, v___x_3214_);
if (v___x_3215_ == 0)
{
lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3222_; 
v___x_3216_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3217_ = lean_string_append(v___x_3216_, v_a_3202_);
lean_dec_ref(v_a_3202_);
v___x_3218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3219_ = lean_string_append(v___x_3217_, v___x_3218_);
v___x_3220_ = lean_string_append(v___x_3212_, v___x_3219_);
lean_dec_ref(v___x_3219_);
if (v_isShared_3200_ == 0)
{
lean_ctor_set_tag(v___x_3199_, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3220_);
v___x_3222_ = v___x_3199_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3220_);
v___x_3222_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
return v___x_3222_;
}
}
else
{
lean_object* v___x_3225_; 
lean_dec_ref(v_a_3202_);
if (v_isShared_3200_ == 0)
{
lean_ctor_set_tag(v___x_3199_, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3212_);
v___x_3225_ = v___x_3199_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v___x_3212_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
}
else
{
lean_object* v___x_3252_; 
lean_dec(v_d_3193_);
v___x_3252_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__3));
return v___x_3252_;
}
v___jp_3195_:
{
lean_object* v___x_3196_; 
v___x_3196_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__0));
return v___x_3196_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3253_, lean_object* v_key_3254_){
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(v_d_3253_, v_key_3254_);
lean_dec_ref(v_key_3254_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(size_t v_sz_3257_, size_t v_i_3258_, lean_object* v_bs_3259_){
_start:
{
uint8_t v___x_3260_; 
v___x_3260_ = lean_usize_dec_lt(v_i_3258_, v_sz_3257_);
if (v___x_3260_ == 0)
{
lean_object* v___x_3261_; 
v___x_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3261_, 0, v_bs_3259_);
return v___x_3261_;
}
else
{
lean_object* v_v_3262_; lean_object* v_fst_3263_; lean_object* v_snd_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3288_; 
v_v_3262_ = lean_array_uget(v_bs_3259_, v_i_3258_);
v_fst_3263_ = lean_ctor_get(v_v_3262_, 0);
v_snd_3264_ = lean_ctor_get(v_v_3262_, 1);
v_isSharedCheck_3288_ = !lean_is_exclusive(v_v_3262_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3266_ = v_v_3262_;
v_isShared_3267_ = v_isSharedCheck_3288_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_snd_3264_);
lean_inc(v_fst_3263_);
lean_dec(v_v_3262_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3288_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3268_; lean_object* v_bs_x27_3269_; lean_object* v_a_3271_; 
v___x_3268_ = lean_unsigned_to_nat(0u);
v_bs_x27_3269_ = lean_array_uset(v_bs_3259_, v_i_3258_, v___x_3268_);
switch(lean_obj_tag(v_snd_3264_))
{
case 1:
{
goto v___jp_3279_;
}
case 0:
{
goto v___jp_3279_;
}
default: 
{
if (lean_obj_tag(v_snd_3264_) == 4)
{
lean_object* v_s_3281_; lean_object* v___x_3282_; 
v_s_3281_ = lean_ctor_get(v_snd_3264_, 0);
lean_inc_ref(v_s_3281_);
lean_dec_ref_known(v_snd_3264_, 1);
v___x_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3282_, 0, v_s_3281_);
v_a_3271_ = v___x_3282_;
goto v___jp_3270_;
}
else
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
lean_dec_ref(v_bs_x27_3269_);
lean_del_object(v___x_3266_);
lean_dec(v_snd_3264_);
v___x_3283_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___closed__0));
v___x_3284_ = lean_string_append(v___x_3283_, v_fst_3263_);
lean_dec(v_fst_3263_);
v___x_3285_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3286_ = lean_string_append(v___x_3284_, v___x_3285_);
v___x_3287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3286_);
return v___x_3287_;
}
}
}
v___jp_3270_:
{
lean_object* v___x_3273_; 
if (v_isShared_3267_ == 0)
{
lean_ctor_set(v___x_3266_, 1, v_a_3271_);
v___x_3273_ = v___x_3266_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_fst_3263_);
lean_ctor_set(v_reuseFailAlloc_3278_, 1, v_a_3271_);
v___x_3273_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
size_t v___x_3274_; size_t v___x_3275_; lean_object* v___x_3276_; 
v___x_3274_ = ((size_t)1ULL);
v___x_3275_ = lean_usize_add(v_i_3258_, v___x_3274_);
v___x_3276_ = lean_array_uset(v_bs_x27_3269_, v_i_3258_, v___x_3273_);
v_i_3258_ = v___x_3275_;
v_bs_3259_ = v___x_3276_;
goto _start;
}
}
v___jp_3279_:
{
lean_object* v___x_3280_; 
v___x_3280_ = lean_box(0);
v_a_3271_ = v___x_3280_;
goto v___jp_3270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___boxed(lean_object* v_sz_3289_, lean_object* v_i_3290_, lean_object* v_bs_3291_){
_start:
{
size_t v_sz_boxed_3292_; size_t v_i_boxed_3293_; lean_object* v_res_3294_; 
v_sz_boxed_3292_ = lean_unbox_usize(v_sz_3289_);
lean_dec(v_sz_3289_);
v_i_boxed_3293_ = lean_unbox_usize(v_i_3290_);
lean_dec(v_i_3290_);
v_res_3294_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(v_sz_boxed_3292_, v_i_boxed_3293_, v_bs_3291_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(lean_object* v_d_3300_, lean_object* v_key_3301_){
_start:
{
if (lean_obj_tag(v_d_3300_) == 8)
{
lean_object* v___x_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3349_; 
v___x_3304_ = l_Lasm_JS_Data_field(v_d_3300_, v_key_3301_);
v_isSharedCheck_3349_ = !lean_is_exclusive(v_d_3300_);
if (v_isSharedCheck_3349_ == 0)
{
lean_object* v_unused_3350_; 
v_unused_3350_ = lean_ctor_get(v_d_3300_, 0);
lean_dec(v_unused_3350_);
v___x_3306_ = v_d_3300_;
v_isShared_3307_ = v_isSharedCheck_3349_;
goto v_resetjp_3305_;
}
else
{
lean_dec(v_d_3300_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3349_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v_a_3309_; 
switch(lean_obj_tag(v___x_3304_))
{
case 1:
{
lean_del_object(v___x_3306_);
goto v___jp_3302_;
}
case 0:
{
lean_del_object(v___x_3306_);
goto v___jp_3302_;
}
default: 
{
if (lean_obj_tag(v___x_3304_) == 8)
{
lean_object* v_fields_3334_; size_t v_sz_3335_; size_t v___x_3336_; lean_object* v___x_3337_; 
v_fields_3334_ = lean_ctor_get(v___x_3304_, 0);
lean_inc_ref(v_fields_3334_);
v_sz_3335_ = lean_array_size(v_fields_3334_);
v___x_3336_ = ((size_t)0ULL);
v___x_3337_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(v_sz_3335_, v___x_3336_, v_fields_3334_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3338_);
lean_dec_ref_known(v___x_3337_, 1);
v_a_3309_ = v_a_3338_;
goto v___jp_3308_;
}
else
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3347_; 
lean_dec_ref_known(v___x_3304_, 1);
lean_del_object(v___x_3306_);
v_a_3339_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3341_ = v___x_3337_;
v_isShared_3342_ = v_isSharedCheck_3347_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v___x_3337_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3347_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3343_; lean_object* v___x_3345_; 
v___x_3343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3343_, 0, v_a_3339_);
if (v_isShared_3342_ == 0)
{
lean_ctor_set(v___x_3341_, 0, v___x_3343_);
v___x_3345_ = v___x_3341_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v___x_3343_);
v___x_3345_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
return v___x_3345_;
}
}
}
}
else
{
lean_object* v___x_3348_; 
v___x_3348_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3309_ = v___x_3348_;
goto v___jp_3308_;
}
}
}
v___jp_3308_:
{
lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; uint8_t v___x_3322_; 
v___x_3310_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3311_ = lean_string_append(v___x_3310_, v_key_3301_);
v___x_3312_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3313_ = lean_string_append(v___x_3311_, v___x_3312_);
v___x_3314_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__1));
v___x_3315_ = lean_string_append(v___x_3313_, v___x_3314_);
v___x_3316_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3317_ = lean_string_append(v___x_3315_, v___x_3316_);
v___x_3318_ = l_Lasm_JS_Data_describe(v___x_3304_);
v___x_3319_ = lean_string_append(v___x_3317_, v___x_3318_);
lean_dec_ref(v___x_3318_);
v___x_3320_ = lean_string_utf8_byte_size(v_a_3309_);
v___x_3321_ = lean_unsigned_to_nat(0u);
v___x_3322_ = lean_nat_dec_eq(v___x_3320_, v___x_3321_);
if (v___x_3322_ == 0)
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3329_; 
v___x_3323_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3324_ = lean_string_append(v___x_3323_, v_a_3309_);
lean_dec_ref(v_a_3309_);
v___x_3325_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3326_ = lean_string_append(v___x_3324_, v___x_3325_);
v___x_3327_ = lean_string_append(v___x_3319_, v___x_3326_);
lean_dec_ref(v___x_3326_);
if (v_isShared_3307_ == 0)
{
lean_ctor_set_tag(v___x_3306_, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3327_);
v___x_3329_ = v___x_3306_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v___x_3327_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
else
{
lean_object* v___x_3332_; 
lean_dec_ref(v_a_3309_);
if (v_isShared_3307_ == 0)
{
lean_ctor_set_tag(v___x_3306_, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3319_);
v___x_3332_ = v___x_3306_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v___x_3319_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
}
}
else
{
lean_object* v___x_3351_; 
lean_dec(v_d_3300_);
v___x_3351_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__2));
return v___x_3351_;
}
v___jp_3302_:
{
lean_object* v___x_3303_; 
v___x_3303_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__0));
return v___x_3303_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___boxed(lean_object* v_d_3352_, lean_object* v_key_3353_){
_start:
{
lean_object* v_res_3354_; 
v_res_3354_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(v_d_3352_, v_key_3353_);
lean_dec_ref(v_key_3353_);
return v_res_3354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_3360_, lean_object* v_key_3361_){
_start:
{
if (lean_obj_tag(v_d_3360_) == 8)
{
lean_object* v___x_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3417_; 
v___x_3364_ = l_Lasm_JS_Data_field(v_d_3360_, v_key_3361_);
v_isSharedCheck_3417_ = !lean_is_exclusive(v_d_3360_);
if (v_isSharedCheck_3417_ == 0)
{
lean_object* v_unused_3418_; 
v_unused_3418_ = lean_ctor_get(v_d_3360_, 0);
lean_dec(v_unused_3418_);
v___x_3366_ = v_d_3360_;
v_isShared_3367_ = v_isSharedCheck_3417_;
goto v_resetjp_3365_;
}
else
{
lean_dec(v_d_3360_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3417_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v_a_3369_; 
switch(lean_obj_tag(v___x_3364_))
{
case 1:
{
lean_del_object(v___x_3366_);
goto v___jp_3362_;
}
case 0:
{
lean_del_object(v___x_3366_);
goto v___jp_3362_;
}
default: 
{
lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3394_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0));
lean_inc(v___x_3364_);
v___x_3395_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_3364_, v___x_3394_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_object* v_a_3396_; 
v_a_3396_ = lean_ctor_get(v___x_3395_, 0);
lean_inc(v_a_3396_);
lean_dec_ref_known(v___x_3395_, 1);
v_a_3369_ = v_a_3396_;
goto v___jp_3368_;
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3416_; 
v_a_3397_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3416_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3416_ == 0)
{
v___x_3399_ = v___x_3395_;
v_isShared_3400_ = v_isSharedCheck_3416_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3395_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3416_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3401_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1));
lean_inc(v___x_3364_);
v___x_3402_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(v___x_3364_, v___x_3401_);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_object* v_a_3403_; 
lean_del_object(v___x_3399_);
lean_dec(v_a_3397_);
v_a_3403_ = lean_ctor_get(v___x_3402_, 0);
lean_inc(v_a_3403_);
lean_dec_ref_known(v___x_3402_, 1);
v_a_3369_ = v_a_3403_;
goto v___jp_3368_;
}
else
{
lean_object* v_a_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3415_; 
lean_del_object(v___x_3366_);
lean_dec(v___x_3364_);
v_a_3404_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3415_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3415_ == 0)
{
v___x_3406_ = v___x_3402_;
v_isShared_3407_ = v_isSharedCheck_3415_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_a_3404_);
lean_dec(v___x_3402_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3415_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3408_; lean_object* v___x_3410_; 
v___x_3408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3408_, 0, v_a_3397_);
lean_ctor_set(v___x_3408_, 1, v_a_3404_);
if (v_isShared_3400_ == 0)
{
lean_ctor_set(v___x_3399_, 0, v___x_3408_);
v___x_3410_ = v___x_3399_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
lean_object* v___x_3412_; 
if (v_isShared_3407_ == 0)
{
lean_ctor_set(v___x_3406_, 0, v___x_3410_);
v___x_3412_ = v___x_3406_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3410_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
}
}
}
}
}
}
v___jp_3368_:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; uint8_t v___x_3382_; 
v___x_3370_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3371_ = lean_string_append(v___x_3370_, v_key_3361_);
v___x_3372_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3373_ = lean_string_append(v___x_3371_, v___x_3372_);
v___x_3374_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3375_ = lean_string_append(v___x_3373_, v___x_3374_);
v___x_3376_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3377_ = lean_string_append(v___x_3375_, v___x_3376_);
v___x_3378_ = l_Lasm_JS_Data_describe(v___x_3364_);
v___x_3379_ = lean_string_append(v___x_3377_, v___x_3378_);
lean_dec_ref(v___x_3378_);
v___x_3380_ = lean_string_utf8_byte_size(v_a_3369_);
v___x_3381_ = lean_unsigned_to_nat(0u);
v___x_3382_ = lean_nat_dec_eq(v___x_3380_, v___x_3381_);
if (v___x_3382_ == 0)
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3389_; 
v___x_3383_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3384_ = lean_string_append(v___x_3383_, v_a_3369_);
lean_dec_ref(v_a_3369_);
v___x_3385_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3386_ = lean_string_append(v___x_3384_, v___x_3385_);
v___x_3387_ = lean_string_append(v___x_3379_, v___x_3386_);
lean_dec_ref(v___x_3386_);
if (v_isShared_3367_ == 0)
{
lean_ctor_set_tag(v___x_3366_, 0);
lean_ctor_set(v___x_3366_, 0, v___x_3387_);
v___x_3389_ = v___x_3366_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v___x_3387_);
v___x_3389_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
return v___x_3389_;
}
}
else
{
lean_object* v___x_3392_; 
lean_dec_ref(v_a_3369_);
if (v_isShared_3367_ == 0)
{
lean_ctor_set_tag(v___x_3366_, 0);
lean_ctor_set(v___x_3366_, 0, v___x_3379_);
v___x_3392_ = v___x_3366_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v___x_3379_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
}
}
}
else
{
lean_object* v___x_3419_; 
lean_dec(v_d_3360_);
v___x_3419_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__2));
return v___x_3419_;
}
v___jp_3362_:
{
lean_object* v___x_3363_; 
v___x_3363_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_3363_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_3420_, lean_object* v_key_3421_){
_start:
{
lean_object* v_res_3422_; 
v_res_3422_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3420_, v_key_3421_);
lean_dec_ref(v_key_3421_);
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(lean_object* v_context_3424_, lean_object* v_d_3425_){
_start:
{
lean_object* v___y_3431_; lean_object* v___y_3432_; lean_object* v___y_3437_; lean_object* v_received_3438_; lean_object* v___y_3457_; lean_object* v_a_3460_; 
switch(lean_obj_tag(v_d_3425_))
{
case 1:
{
goto v___jp_3427_;
}
case 0:
{
goto v___jp_3427_;
}
default: 
{
lean_object* v___x_3484_; lean_object* v___x_3485_; 
v___x_3484_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0));
lean_inc(v_d_3425_);
v___x_3485_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(v_d_3425_, v___x_3484_);
if (lean_obj_tag(v___x_3485_) == 0)
{
lean_object* v_a_3486_; 
v_a_3486_ = lean_ctor_get(v___x_3485_, 0);
lean_inc(v_a_3486_);
lean_dec_ref_known(v___x_3485_, 1);
v_a_3460_ = v_a_3486_;
goto v___jp_3459_;
}
else
{
lean_object* v_a_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v_a_3487_ = lean_ctor_get(v___x_3485_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___x_3485_, 1);
v___x_3488_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc(v_d_3425_);
v___x_3489_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3425_, v___x_3488_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; 
lean_dec(v_a_3487_);
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3489_, 1);
v_a_3460_ = v_a_3490_;
goto v___jp_3459_;
}
else
{
lean_object* v_a_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; 
v_a_3491_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3491_);
lean_dec_ref_known(v___x_3489_, 1);
v___x_3492_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc(v_d_3425_);
v___x_3493_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3425_, v___x_3492_);
if (lean_obj_tag(v___x_3493_) == 0)
{
lean_object* v_a_3494_; 
lean_dec(v_a_3491_);
lean_dec(v_a_3487_);
v_a_3494_ = lean_ctor_get(v___x_3493_, 0);
lean_inc(v_a_3494_);
lean_dec_ref_known(v___x_3493_, 1);
v_a_3460_ = v_a_3494_;
goto v___jp_3459_;
}
else
{
lean_object* v_a_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v_a_3495_ = lean_ctor_get(v___x_3493_, 0);
lean_inc(v_a_3495_);
lean_dec_ref_known(v___x_3493_, 1);
v___x_3496_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc(v_d_3425_);
v___x_3497_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3425_, v___x_3496_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v_a_3498_; 
lean_dec(v_a_3495_);
lean_dec(v_a_3491_);
lean_dec(v_a_3487_);
v_a_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_a_3498_);
lean_dec_ref_known(v___x_3497_, 1);
v_a_3460_ = v_a_3498_;
goto v___jp_3459_;
}
else
{
lean_object* v_a_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v_a_3499_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3497_, 1);
v___x_3500_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc(v_d_3425_);
v___x_3501_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3425_, v___x_3500_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_object* v_a_3502_; 
lean_dec(v_a_3499_);
lean_dec(v_a_3495_);
lean_dec(v_a_3491_);
lean_dec(v_a_3487_);
v_a_3502_ = lean_ctor_get(v___x_3501_, 0);
lean_inc(v_a_3502_);
lean_dec_ref_known(v___x_3501_, 1);
v_a_3460_ = v_a_3502_;
goto v___jp_3459_;
}
else
{
lean_object* v_a_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
v_a_3503_ = lean_ctor_get(v___x_3501_, 0);
lean_inc(v_a_3503_);
lean_dec_ref_known(v___x_3501_, 1);
v___x_3504_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc(v_d_3425_);
v___x_3505_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3425_, v___x_3504_);
if (lean_obj_tag(v___x_3505_) == 0)
{
lean_object* v_a_3506_; 
lean_dec(v_a_3503_);
lean_dec(v_a_3499_);
lean_dec(v_a_3495_);
lean_dec(v_a_3491_);
lean_dec(v_a_3487_);
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3505_, 1);
v_a_3460_ = v_a_3506_;
goto v___jp_3459_;
}
else
{
lean_object* v_a_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; 
v_a_3507_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3507_);
lean_dec_ref_known(v___x_3505_, 1);
v___x_3508_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc(v_d_3425_);
v___x_3509_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3425_, v___x_3508_);
if (lean_obj_tag(v___x_3509_) == 0)
{
lean_object* v_a_3510_; 
lean_dec(v_a_3507_);
lean_dec(v_a_3503_);
lean_dec(v_a_3499_);
lean_dec(v_a_3495_);
lean_dec(v_a_3491_);
lean_dec(v_a_3487_);
v_a_3510_ = lean_ctor_get(v___x_3509_, 0);
lean_inc(v_a_3510_);
lean_dec_ref_known(v___x_3509_, 1);
v_a_3460_ = v_a_3510_;
goto v___jp_3459_;
}
else
{
lean_object* v_a_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v_a_3511_ = lean_ctor_get(v___x_3509_, 0);
lean_inc(v_a_3511_);
lean_dec_ref_known(v___x_3509_, 1);
v___x_3512_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc(v_d_3425_);
v___x_3513_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3425_, v___x_3512_);
if (lean_obj_tag(v___x_3513_) == 0)
{
lean_object* v_a_3514_; 
lean_dec(v_a_3511_);
lean_dec(v_a_3507_);
lean_dec(v_a_3503_);
lean_dec(v_a_3499_);
lean_dec(v_a_3495_);
lean_dec(v_a_3491_);
lean_dec(v_a_3487_);
v_a_3514_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_a_3514_);
lean_dec_ref_known(v___x_3513_, 1);
v_a_3460_ = v_a_3514_;
goto v___jp_3459_;
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3534_; 
v_a_3515_ = lean_ctor_get(v___x_3513_, 0);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3513_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3517_ = v___x_3513_;
v_isShared_3518_ = v_isSharedCheck_3534_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3513_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3534_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc(v_d_3425_);
v___x_3520_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3425_, v___x_3519_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v_a_3521_; 
lean_del_object(v___x_3517_);
lean_dec(v_a_3515_);
lean_dec(v_a_3511_);
lean_dec(v_a_3507_);
lean_dec(v_a_3503_);
lean_dec(v_a_3499_);
lean_dec(v_a_3495_);
lean_dec(v_a_3491_);
lean_dec(v_a_3487_);
v_a_3521_ = lean_ctor_get(v___x_3520_, 0);
lean_inc(v_a_3521_);
lean_dec_ref_known(v___x_3520_, 1);
v_a_3460_ = v_a_3521_;
goto v___jp_3459_;
}
else
{
lean_object* v_a_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3533_; 
lean_dec(v_d_3425_);
v_a_3522_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3524_ = v___x_3520_;
v_isShared_3525_ = v_isSharedCheck_3533_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_a_3522_);
lean_dec(v___x_3520_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3533_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
lean_object* v___x_3526_; lean_object* v___x_3528_; 
v___x_3526_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3526_, 0, v_a_3487_);
lean_ctor_set(v___x_3526_, 1, v_a_3491_);
lean_ctor_set(v___x_3526_, 2, v_a_3495_);
lean_ctor_set(v___x_3526_, 3, v_a_3499_);
lean_ctor_set(v___x_3526_, 4, v_a_3503_);
lean_ctor_set(v___x_3526_, 5, v_a_3507_);
lean_ctor_set(v___x_3526_, 6, v_a_3511_);
lean_ctor_set(v___x_3526_, 7, v_a_3515_);
lean_ctor_set(v___x_3526_, 8, v_a_3522_);
if (v_isShared_3525_ == 0)
{
lean_ctor_set(v___x_3524_, 0, v___x_3526_);
v___x_3528_ = v___x_3524_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v___x_3526_);
v___x_3528_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
lean_object* v___x_3530_; 
if (v_isShared_3518_ == 0)
{
lean_ctor_set_tag(v___x_3517_, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3528_);
v___x_3530_ = v___x_3517_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_3427_:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3428_ = lean_box(0);
v___x_3429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3428_);
return v___x_3429_;
}
v___jp_3430_:
{
lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3433_ = lean_string_append(v___y_3431_, v___y_3432_);
lean_dec_ref(v___y_3432_);
v___x_3434_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3433_);
v___x_3435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3434_);
return v___x_3435_;
}
v___jp_3436_:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; uint8_t v___x_3450_; 
v___x_3439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_3440_ = lean_string_append(v___x_3439_, v_context_3424_);
v___x_3441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_3442_ = lean_string_append(v___x_3440_, v___x_3441_);
v___x_3443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___closed__0));
v___x_3444_ = lean_string_append(v___x_3442_, v___x_3443_);
v___x_3445_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_3446_ = lean_string_append(v___x_3444_, v___x_3445_);
v___x_3447_ = lean_string_append(v___x_3446_, v_received_3438_);
lean_dec_ref(v_received_3438_);
v___x_3448_ = lean_string_utf8_byte_size(v___y_3437_);
v___x_3449_ = lean_unsigned_to_nat(0u);
v___x_3450_ = lean_nat_dec_eq(v___x_3448_, v___x_3449_);
if (v___x_3450_ == 0)
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
v___x_3451_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3452_ = lean_string_append(v___x_3451_, v___y_3437_);
lean_dec_ref(v___y_3437_);
v___x_3453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3454_ = lean_string_append(v___x_3452_, v___x_3453_);
v___y_3431_ = v___x_3447_;
v___y_3432_ = v___x_3454_;
goto v___jp_3430_;
}
else
{
lean_object* v___x_3455_; 
lean_dec_ref(v___y_3437_);
v___x_3455_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_3431_ = v___x_3447_;
v___y_3432_ = v___x_3455_;
goto v___jp_3430_;
}
}
v___jp_3456_:
{
lean_object* v___x_3458_; 
v___x_3458_ = l_Lasm_JS_Data_describe(v_d_3425_);
v___y_3437_ = v___y_3457_;
v_received_3438_ = v___x_3458_;
goto v___jp_3436_;
}
v___jp_3459_:
{
if (lean_obj_tag(v_d_3425_) == 9)
{
lean_object* v_value_3461_; lean_object* v_description_3462_; lean_object* v___x_3463_; uint8_t v___x_3464_; 
v_value_3461_ = lean_ctor_get(v_d_3425_, 0);
v_description_3462_ = lean_ctor_get(v_d_3425_, 1);
v___x_3463_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3464_ = lean_string_dec_eq(v_description_3462_, v___x_3463_);
if (v___x_3464_ == 0)
{
v___y_3457_ = v_a_3460_;
goto v___jp_3456_;
}
else
{
lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3481_; 
lean_inc(v_value_3461_);
v_isSharedCheck_3481_ = !lean_is_exclusive(v_d_3425_);
if (v_isSharedCheck_3481_ == 0)
{
lean_object* v_unused_3482_; lean_object* v_unused_3483_; 
v_unused_3482_ = lean_ctor_get(v_d_3425_, 1);
lean_dec(v_unused_3482_);
v_unused_3483_ = lean_ctor_get(v_d_3425_, 0);
lean_dec(v_unused_3483_);
v___x_3466_ = v_d_3425_;
v_isShared_3467_ = v_isSharedCheck_3481_;
goto v_resetjp_3465_;
}
else
{
lean_dec(v_d_3425_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3481_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
uint32_t v___x_3468_; uint64_t v___x_3469_; lean_object* v___x_3471_; 
v___x_3468_ = 206;
v___x_3469_ = 0ULL;
lean_inc(v_value_3461_);
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 1, v___x_3463_);
v___x_3471_ = v___x_3466_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_value_3461_);
lean_ctor_set(v_reuseFailAlloc_3480_, 1, v___x_3463_);
v___x_3471_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
uint32_t v___x_3472_; lean_object* v___x_3473_; 
v___x_3472_ = lasm_js_value_handle(v_value_3461_);
lean_dec(v_value_3461_);
v___x_3473_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3468_, v___x_3469_, v___x_3471_, v___x_3472_);
lean_dec_ref(v___x_3471_);
if (lean_obj_tag(v___x_3473_) == 0)
{
lean_object* v_a_3474_; uint8_t v___x_3475_; 
v_a_3474_ = lean_ctor_get(v___x_3473_, 0);
lean_inc(v_a_3474_);
lean_dec_ref_known(v___x_3473_, 1);
v___x_3475_ = lean_string_validate_utf8(v_a_3474_);
if (v___x_3475_ == 0)
{
lean_object* v___x_3476_; lean_object* v___x_3477_; 
lean_dec(v_a_3474_);
v___x_3476_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_3477_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3476_);
v___y_3437_ = v_a_3460_;
v_received_3438_ = v___x_3477_;
goto v___jp_3436_;
}
else
{
lean_object* v___x_3478_; 
v___x_3478_ = lean_string_from_utf8_unchecked(v_a_3474_);
v___y_3437_ = v_a_3460_;
v_received_3438_ = v___x_3478_;
goto v___jp_3436_;
}
}
else
{
lean_object* v___x_3479_; 
lean_dec_ref_known(v___x_3473_, 1);
v___x_3479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_3437_ = v_a_3460_;
v_received_3438_ = v___x_3479_;
goto v___jp_3436_;
}
}
}
}
}
else
{
v___y_3457_ = v_a_3460_;
goto v___jp_3456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3535_, lean_object* v_d_3536_, lean_object* v_a_3537_){
_start:
{
lean_object* v_res_3538_; 
v_res_3538_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(v_context_3535_, v_d_3536_);
lean_dec_ref(v_context_3535_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(lean_object* v_b_3539_, lean_object* v_args_3540_, uint8_t v_await_3541_){
_start:
{
uint64_t v___y_3544_; uint64_t v___y_3545_; uint64_t v___x_3588_; uint64_t v___y_3590_; 
v___x_3588_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_3541_ == 0)
{
uint64_t v___x_3595_; 
v___x_3595_ = 0ULL;
v___y_3590_ = v___x_3595_;
goto v___jp_3589_;
}
else
{
uint64_t v___x_3596_; 
v___x_3596_ = 2ULL;
v___y_3590_ = v___x_3596_;
goto v___jp_3589_;
}
v___jp_3543_:
{
uint64_t v_flags_3546_; uint32_t v___x_3547_; lean_object* v___x_3548_; uint32_t v___x_3549_; lean_object* v___x_3550_; 
v_flags_3546_ = lean_uint64_lor(v___y_3544_, v___y_3545_);
v___x_3547_ = 214;
v___x_3548_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3539_, v_args_3540_);
v___x_3549_ = 0;
v___x_3550_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3547_, v_flags_3546_, v___x_3548_, v___x_3549_);
lean_dec(v___x_3548_);
if (lean_obj_tag(v___x_3550_) == 0)
{
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v_a_3551_; lean_object* v___x_3552_; 
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
lean_inc(v_a_3551_);
lean_dec_ref_known(v___x_3550_, 1);
v___x_3552_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3551_);
lean_dec(v_a_3551_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v_a_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
lean_inc(v_a_3553_);
lean_dec_ref_known(v___x_3552_, 1);
v___x_3554_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3539_);
v___x_3555_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(v___x_3554_, v_a_3553_);
lean_dec_ref(v___x_3554_);
return v___x_3555_;
}
else
{
lean_object* v_a_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3563_; 
v_a_3556_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3563_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3558_ = v___x_3552_;
v_isShared_3559_ = v_isSharedCheck_3563_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_a_3556_);
lean_dec(v___x_3552_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3563_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3561_; 
if (v_isShared_3559_ == 0)
{
v___x_3561_ = v___x_3558_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v_a_3556_);
v___x_3561_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
return v___x_3561_;
}
}
}
}
else
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3571_; 
v_a_3564_ = lean_ctor_get(v___x_3550_, 0);
v_isSharedCheck_3571_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3566_ = v___x_3550_;
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3550_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3569_; 
if (v_isShared_3567_ == 0)
{
lean_ctor_set_tag(v___x_3566_, 1);
v___x_3569_ = v___x_3566_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_a_3564_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
}
else
{
lean_object* v_a_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3587_; 
v_a_3572_ = lean_ctor_get(v___x_3550_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3574_ = v___x_3550_;
v_isShared_3575_ = v_isSharedCheck_3587_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_a_3572_);
lean_dec(v___x_3550_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3587_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3585_; 
v___x_3576_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_3577_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3539_);
v___x_3578_ = lean_string_append(v___x_3576_, v___x_3577_);
lean_dec_ref(v___x_3577_);
v___x_3579_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3580_ = lean_string_append(v___x_3578_, v___x_3579_);
v___x_3581_ = lean_io_error_to_string(v_a_3572_);
v___x_3582_ = lean_string_append(v___x_3580_, v___x_3581_);
lean_dec_ref(v___x_3581_);
v___x_3583_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 0, v___x_3583_);
v___x_3585_ = v___x_3574_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v___x_3583_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
v___jp_3589_:
{
uint8_t v_construct_3591_; uint64_t v___x_3592_; 
v_construct_3591_ = lean_ctor_get_uint8(v_b_3539_, sizeof(void*)*4);
v___x_3592_ = lean_uint64_lor(v___x_3588_, v___y_3590_);
if (v_construct_3591_ == 0)
{
uint64_t v___x_3593_; 
v___x_3593_ = 0ULL;
v___y_3544_ = v___x_3592_;
v___y_3545_ = v___x_3593_;
goto v___jp_3543_;
}
else
{
uint64_t v___x_3594_; 
v___x_3594_ = 4ULL;
v___y_3544_ = v___x_3592_;
v___y_3545_ = v___x_3594_;
goto v___jp_3543_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0___boxed(lean_object* v_b_3597_, lean_object* v_args_3598_, lean_object* v_await_3599_, lean_object* v_a_3600_){
_start:
{
uint8_t v_await_boxed_3601_; lean_object* v_res_3602_; 
v_await_boxed_3601_ = lean_unbox(v_await_3599_);
v_res_3602_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v_b_3597_, v_args_3598_, v_await_boxed_3601_);
lean_dec_ref(v_b_3597_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(lean_object* v_v_3611_){
_start:
{
uint8_t v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; 
v___x_3613_ = 0;
v___x_3614_ = lean_unsigned_to_nat(1u);
v___x_3615_ = ((lean_object*)(l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__2));
v___x_3616_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3617_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3617_, 0, v_v_3611_);
lean_ctor_set(v___x_3617_, 1, v___x_3616_);
v___x_3618_ = lean_mk_empty_array_with_capacity(v___x_3614_);
v___x_3619_ = lean_array_push(v___x_3618_, v___x_3617_);
v___x_3620_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v___x_3615_, v___x_3619_, v___x_3613_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___boxed(lean_object* v_v_3621_, lean_object* v_a_3622_){
_start:
{
lean_object* v_res_3623_; 
v_res_3623_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_v_3621_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec(lean_object* v_self_3625_, lean_object* v_input_3626_, lean_object* v_baseURL_3627_){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3629_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_exec___closed__0));
v___x_3630_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_3626_);
v___x_3631_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_3627_);
v___x_3632_ = lean_unsigned_to_nat(2u);
v___x_3633_ = lean_mk_empty_array_with_capacity(v___x_3632_);
v___x_3634_ = lean_array_push(v___x_3633_, v___x_3630_);
v___x_3635_ = lean_array_push(v___x_3634_, v___x_3631_);
v___x_3636_ = l_Lasm_JS_Web_Support_args(v___x_3635_);
v___x_3637_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3625_, v___x_3629_, v___x_3636_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v_a_3638_; lean_object* v___x_3639_; 
v_a_3638_ = lean_ctor_get(v___x_3637_, 0);
lean_inc(v_a_3638_);
lean_dec_ref_known(v___x_3637_, 1);
v___x_3639_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_a_3638_);
return v___x_3639_;
}
else
{
lean_object* v_a_3640_; lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3647_; 
v_a_3640_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3642_ = v___x_3637_;
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
else
{
lean_inc(v_a_3640_);
lean_dec(v___x_3637_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v___x_3645_; 
if (v_isShared_3643_ == 0)
{
v___x_3645_ = v___x_3642_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v_a_3640_);
v___x_3645_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
return v___x_3645_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec___boxed(lean_object* v_self_3648_, lean_object* v_input_3649_, lean_object* v_baseURL_3650_, lean_object* v_a_3651_){
_start:
{
lean_object* v_res_3652_; 
v_res_3652_ = l_Lasm_JS_Web_URLPattern_exec(v_self_3648_, v_input_3649_, v_baseURL_3650_);
return v_res_3652_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_File(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Url(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_File(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instFromJSURLPatternInit = _init_l_Lasm_JS_Web_instFromJSURLPatternInit();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSURLPatternInit);
l_Lasm_JS_Web_instFromJSURLPatternComponentResult = _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSURLPatternComponentResult);
l_Lasm_JS_Web_instFromJSURLPatternResult = _init_l_Lasm_JS_Web_instFromJSURLPatternResult();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSURLPatternResult);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
