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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
lean_object* lean_obj_tag_nat(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx___impl___boxed(lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx___impl(lean_object* v_x_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_obj_tag_nat(v_x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx___impl___boxed(lean_object* v_x_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx___impl(v_x_38_);
lean_dec_ref(v_x_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(lean_object* v_t_40_, lean_object* v_k_41_){
_start:
{
lean_object* v_value_42_; lean_object* v___x_43_; 
v_value_42_ = lean_ctor_get(v_t_40_, 0);
lean_inc(v_value_42_);
lean_dec_ref(v_t_40_);
v___x_43_ = lean_apply_1(v_k_41_, v_value_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim(lean_object* v_motive_44_, lean_object* v_ctorIdx_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_k_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_46_, v_k_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___boxed(lean_object* v_motive_50_, lean_object* v_ctorIdx_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_k_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim(v_motive_50_, v_ctorIdx_51_, v_t_52_, v_h_53_, v_k_54_);
lean_dec(v_ctorIdx_51_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim___redArg(lean_object* v_t_56_, lean_object* v_blob_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_56_, v_blob_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim(lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_blob_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_60_, v_blob_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim___redArg(lean_object* v_t_64_, lean_object* v_mediaSource_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_64_, v_mediaSource_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim(lean_object* v_motive_67_, lean_object* v_t_68_, lean_object* v_h_69_, lean_object* v_mediaSource_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_68_, v_mediaSource_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0(lean_object* v_x_72_){
_start:
{
lean_object* v_value_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_value_73_ = lean_ctor_get(v_x_72_, 0);
v___x_74_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
lean_inc(v_value_73_);
v___x_75_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_75_, 0, v_value_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0___boxed(lean_object* v_x_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0(v_x_76_);
lean_dec_ref(v_x_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___lam__0(lean_object* v_value_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_81_, 0, v_value_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx___impl(lean_object* v_x_84_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_obj_tag_nat(v_x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx___impl___boxed(lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx___impl(v_x_86_);
lean_dec_ref(v_x_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(lean_object* v_t_88_, lean_object* v_k_89_){
_start:
{
lean_object* v_value_90_; lean_object* v___x_91_; 
v_value_90_ = lean_ctor_get(v_t_88_, 0);
lean_inc_ref(v_value_90_);
lean_dec_ref(v_t_88_);
v___x_91_ = lean_apply_1(v_k_89_, v_value_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim(lean_object* v_motive_92_, lean_object* v_ctorIdx_93_, lean_object* v_t_94_, lean_object* v_h_95_, lean_object* v_k_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_94_, v_k_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___boxed(lean_object* v_motive_98_, lean_object* v_ctorIdx_99_, lean_object* v_t_100_, lean_object* v_h_101_, lean_object* v_k_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim(v_motive_98_, v_ctorIdx_99_, v_t_100_, v_h_101_, v_k_102_);
lean_dec(v_ctorIdx_99_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_sequence_elim___redArg(lean_object* v_t_104_, lean_object* v_sequence_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_104_, v_sequence_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_sequence_elim(lean_object* v_motive_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_sequence_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_108_, v_sequence_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_record_elim___redArg(lean_object* v_t_112_, lean_object* v_record_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_112_, v_record_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_record_elim(lean_object* v_motive_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_record_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_116_, v_record_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_usvString_elim___redArg(lean_object* v_t_120_, lean_object* v_usvString_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_120_, v_usvString_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_usvString_elim(lean_object* v_motive_123_, lean_object* v_t_124_, lean_object* v_h_125_, lean_object* v_usvString_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_124_, v_usvString_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object* v_x_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_129_, 0, v_x_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1(lean_object* v___f_149_, lean_object* v_x_150_){
_start:
{
lean_object* v___x_151_; size_t v_sz_152_; size_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_151_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9));
v_sz_152_ = lean_array_size(v_x_150_);
v___x_153_ = ((size_t)0ULL);
v___x_154_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_151_, v___f_149_, v_sz_152_, v___x_153_, v_x_150_);
v___x_155_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__2(lean_object* v_x_156_){
_start:
{
lean_object* v_fst_157_; lean_object* v_snd_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_166_; 
v_fst_157_ = lean_ctor_get(v_x_156_, 0);
v_snd_158_ = lean_ctor_get(v_x_156_, 1);
v_isSharedCheck_166_ = !lean_is_exclusive(v_x_156_);
if (v_isSharedCheck_166_ == 0)
{
v___x_160_ = v_x_156_;
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_snd_158_);
lean_inc(v_fst_157_);
lean_dec(v_x_156_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_162_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_162_, 0, v_snd_158_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v___x_162_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_fst_157_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v___x_162_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__3(lean_object* v___f_167_, lean_object* v___f_168_, lean_object* v_x_169_){
_start:
{
switch(lean_obj_tag(v_x_169_))
{
case 0:
{
lean_object* v_value_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_181_; 
lean_dec_ref(v___f_168_);
v_value_170_ = lean_ctor_get(v_x_169_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v_x_169_);
if (v_isSharedCheck_181_ == 0)
{
v___x_172_ = v_x_169_;
v_isShared_173_ = v_isSharedCheck_181_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_value_170_);
lean_dec(v_x_169_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_181_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_174_; size_t v_sz_175_; size_t v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_174_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9));
v_sz_175_ = lean_array_size(v_value_170_);
v___x_176_ = ((size_t)0ULL);
v___x_177_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_174_, v___f_167_, v_sz_175_, v___x_176_, v_value_170_);
if (v_isShared_173_ == 0)
{
lean_ctor_set_tag(v___x_172_, 7);
lean_ctor_set(v___x_172_, 0, v___x_177_);
v___x_179_ = v___x_172_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_177_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
case 1:
{
lean_object* v_value_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_193_; 
lean_dec_ref(v___f_167_);
v_value_182_ = lean_ctor_get(v_x_169_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v_x_169_);
if (v_isSharedCheck_193_ == 0)
{
v___x_184_ = v_x_169_;
v_isShared_185_ = v_isSharedCheck_193_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_value_182_);
lean_dec(v_x_169_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_193_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_186_; size_t v_sz_187_; size_t v___x_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
v___x_186_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9));
v_sz_187_ = lean_array_size(v_value_182_);
v___x_188_ = ((size_t)0ULL);
v___x_189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_186_, v___f_168_, v_sz_187_, v___x_188_, v_value_182_);
if (v_isShared_185_ == 0)
{
lean_ctor_set_tag(v___x_184_, 8);
lean_ctor_set(v___x_184_, 0, v___x_189_);
v___x_191_ = v___x_184_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
default: 
{
lean_object* v_value_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_201_; 
lean_dec_ref(v___f_168_);
lean_dec_ref(v___f_167_);
v_value_194_ = lean_ctor_get(v_x_169_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v_x_169_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v_x_169_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_value_194_);
lean_dec(v_x_169_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_199_; 
if (v_isShared_197_ == 0)
{
lean_ctor_set_tag(v___x_196_, 4);
v___x_199_ = v___x_196_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_value_194_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object* v_value_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_211_, 0, v_value_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeRecordStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object* v_value_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v_value_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object* v_value_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_219_, 0, v_value_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0(lean_object* v___f_231_, lean_object* v_d_232_){
_start:
{
lean_object* v_protocol_233_; lean_object* v_username_234_; lean_object* v_password_235_; lean_object* v_hostname_236_; lean_object* v_port_237_; lean_object* v_pathname_238_; lean_object* v_search_239_; lean_object* v_hash_240_; lean_object* v_baseURL_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_protocol_233_ = lean_ctor_get(v_d_232_, 0);
lean_inc(v_protocol_233_);
v_username_234_ = lean_ctor_get(v_d_232_, 1);
lean_inc(v_username_234_);
v_password_235_ = lean_ctor_get(v_d_232_, 2);
lean_inc(v_password_235_);
v_hostname_236_ = lean_ctor_get(v_d_232_, 3);
lean_inc(v_hostname_236_);
v_port_237_ = lean_ctor_get(v_d_232_, 4);
lean_inc(v_port_237_);
v_pathname_238_ = lean_ctor_get(v_d_232_, 5);
lean_inc(v_pathname_238_);
v_search_239_ = lean_ctor_get(v_d_232_, 6);
lean_inc(v_search_239_);
v_hash_240_ = lean_ctor_get(v_d_232_, 7);
lean_inc(v_hash_240_);
v_baseURL_241_ = lean_ctor_get(v_d_232_, 8);
lean_inc(v_baseURL_241_);
lean_dec_ref(v_d_232_);
v___x_242_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref_n(v___f_231_, 8);
v___x_243_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_231_, v_protocol_233_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_246_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_231_, v_username_234_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_249_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_231_, v_password_235_);
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_248_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_252_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_231_, v_hostname_236_);
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_251_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_255_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_231_, v_port_237_);
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_258_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_231_, v_pathname_238_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_257_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_261_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_231_, v_search_239_);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_260_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_264_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_231_, v_hash_240_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_267_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_231_, v_baseURL_241_);
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_266_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = lean_unsigned_to_nat(9u);
v___x_270_ = lean_mk_empty_array_with_capacity(v___x_269_);
v___x_271_ = lean_array_push(v___x_270_, v___x_244_);
v___x_272_ = lean_array_push(v___x_271_, v___x_247_);
v___x_273_ = lean_array_push(v___x_272_, v___x_250_);
v___x_274_ = lean_array_push(v___x_273_, v___x_253_);
v___x_275_ = lean_array_push(v___x_274_, v___x_256_);
v___x_276_ = lean_array_push(v___x_275_, v___x_259_);
v___x_277_ = lean_array_push(v___x_276_, v___x_262_);
v___x_278_ = lean_array_push(v___x_277_, v___x_265_);
v___x_279_ = lean_array_push(v___x_278_, v___x_268_);
v___x_280_ = l_Lasm_JS_Web_Support_fields(v___x_279_);
lean_dec_ref(v___x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0(lean_object* v___x_285_, lean_object* v_d_286_){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v___x_285_);
v___x_288_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_287_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v___x_285_);
v_a_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_a_297_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_288_, 1);
v___x_298_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v___x_285_);
v___x_299_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_298_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec(v_a_297_);
lean_dec_ref(v___x_285_);
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_a_308_ = lean_ctor_get(v___x_299_, 0);
lean_inc(v_a_308_);
lean_dec_ref_known(v___x_299_, 1);
v___x_309_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v___x_285_);
v___x_310_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_309_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_318_; 
lean_dec(v_a_308_);
lean_dec(v_a_297_);
lean_dec_ref(v___x_285_);
v_a_311_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_318_ == 0)
{
v___x_313_ = v___x_310_;
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_310_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_a_311_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
else
{
lean_object* v_a_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v_a_319_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_a_319_);
lean_dec_ref_known(v___x_310_, 1);
v___x_320_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v___x_285_);
v___x_321_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_320_);
if (lean_obj_tag(v___x_321_) == 0)
{
lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_329_; 
lean_dec(v_a_319_);
lean_dec(v_a_308_);
lean_dec(v_a_297_);
lean_dec_ref(v___x_285_);
v_a_322_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_329_ == 0)
{
v___x_324_ = v___x_321_;
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v___x_321_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_a_322_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
else
{
lean_object* v_a_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v_a_330_ = lean_ctor_get(v___x_321_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v___x_321_, 1);
v___x_331_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v___x_285_);
v___x_332_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_331_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_340_; 
lean_dec(v_a_330_);
lean_dec(v_a_319_);
lean_dec(v_a_308_);
lean_dec(v_a_297_);
lean_dec_ref(v___x_285_);
v_a_333_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_340_ == 0)
{
v___x_335_ = v___x_332_;
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_332_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_333_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
else
{
lean_object* v_a_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_a_341_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v___x_332_, 1);
v___x_342_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v___x_285_);
v___x_343_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_342_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v_a_341_);
lean_dec(v_a_330_);
lean_dec(v_a_319_);
lean_dec(v_a_308_);
lean_dec(v_a_297_);
lean_dec_ref(v___x_285_);
v_a_344_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_343_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_343_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
else
{
lean_object* v_a_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_a_352_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v___x_343_, 1);
v___x_353_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v___x_285_);
v___x_354_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_353_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_362_; 
lean_dec(v_a_352_);
lean_dec(v_a_341_);
lean_dec(v_a_330_);
lean_dec(v_a_319_);
lean_dec(v_a_308_);
lean_dec(v_a_297_);
lean_dec_ref(v___x_285_);
v_a_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_362_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_355_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
else
{
lean_object* v_a_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v_a_363_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_363_);
lean_dec_ref_known(v___x_354_, 1);
v___x_364_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc_ref(v___x_285_);
v___x_365_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_364_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_373_; 
lean_dec(v_a_363_);
lean_dec(v_a_352_);
lean_dec(v_a_341_);
lean_dec(v_a_330_);
lean_dec(v_a_319_);
lean_dec(v_a_308_);
lean_dec(v_a_297_);
lean_dec_ref(v___x_285_);
v_a_366_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_373_ == 0)
{
v___x_368_ = v___x_365_;
v_isShared_369_ = v_isSharedCheck_373_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v___x_365_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_373_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_371_; 
if (v_isShared_369_ == 0)
{
v___x_371_ = v___x_368_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_a_366_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
else
{
lean_object* v_a_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v_a_374_ = lean_ctor_get(v___x_365_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_365_, 1);
v___x_375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_376_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_375_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec(v_a_374_);
lean_dec(v_a_363_);
lean_dec(v_a_352_);
lean_dec(v_a_341_);
lean_dec(v_a_330_);
lean_dec(v_a_319_);
lean_dec(v_a_308_);
lean_dec(v_a_297_);
v_a_377_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_376_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_393_; 
v_a_385_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_393_ == 0)
{
v___x_387_ = v___x_376_;
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_376_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_389_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_389_, 0, v_a_297_);
lean_ctor_set(v___x_389_, 1, v_a_308_);
lean_ctor_set(v___x_389_, 2, v_a_319_);
lean_ctor_set(v___x_389_, 3, v_a_330_);
lean_ctor_set(v___x_389_, 4, v_a_341_);
lean_ctor_set(v___x_389_, 5, v_a_352_);
lean_ctor_set(v___x_389_, 6, v_a_363_);
lean_ctor_set(v___x_389_, 7, v_a_374_);
lean_ctor_set(v___x_389_, 8, v_a_385_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_389_);
v___x_391_ = v___x_387_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0___boxed(lean_object* v___x_394_, lean_object* v_d_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0(v___x_394_, v_d_395_);
lean_dec(v_d_395_);
return v_res_396_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = l_Lasm_JS_instFromJSString;
v___x_398_ = l_Lasm_JS_instFromJSOption___redArg(v___x_397_);
return v___x_398_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1(void){
_start:
{
lean_object* v___x_399_; lean_object* v___f_400_; 
v___x_399_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___f_400_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0___boxed), 2, 1);
lean_closure_set(v___f_400_, 0, v___x_399_);
return v___f_400_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3(void){
_start:
{
uint8_t v___x_402_; lean_object* v___x_403_; lean_object* v___f_404_; lean_object* v___x_405_; 
v___x_402_ = 0;
v___x_403_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternInit___closed__2));
v___f_404_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1);
v___x_405_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_405_, 0, v___f_404_);
lean_ctor_set(v___x_405_, 1, v___x_403_);
lean_ctor_set_uint8(v___x_405_, sizeof(void*)*2, v___x_402_);
return v___x_405_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit(void){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx___impl(lean_object* v_x_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = lean_obj_tag_nat(v_x_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx___impl___boxed(lean_object* v_x_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lasm_JS_Web_URLPatternInput_ctorIdx___impl(v_x_409_);
lean_dec_ref(v_x_409_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(lean_object* v_t_411_, lean_object* v_k_412_){
_start:
{
lean_object* v_value_413_; lean_object* v___x_414_; 
v_value_413_ = lean_ctor_get(v_t_411_, 0);
lean_inc_ref(v_value_413_);
lean_dec_ref(v_t_411_);
v___x_414_ = lean_apply_1(v_k_412_, v_value_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim(lean_object* v_motive_415_, lean_object* v_ctorIdx_416_, lean_object* v_t_417_, lean_object* v_h_418_, lean_object* v_k_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_417_, v_k_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim___boxed(lean_object* v_motive_421_, lean_object* v_ctorIdx_422_, lean_object* v_t_423_, lean_object* v_h_424_, lean_object* v_k_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lasm_JS_Web_URLPatternInput_ctorElim(v_motive_421_, v_ctorIdx_422_, v_t_423_, v_h_424_, v_k_425_);
lean_dec(v_ctorIdx_422_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_usvString_elim___redArg(lean_object* v_t_427_, lean_object* v_usvString_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_427_, v_usvString_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_usvString_elim(lean_object* v_motive_430_, lean_object* v_t_431_, lean_object* v_h_432_, lean_object* v_usvString_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_431_, v_usvString_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_urlPatternInit_elim___redArg(lean_object* v_t_435_, lean_object* v_urlPatternInit_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_435_, v_urlPatternInit_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_urlPatternInit_elim(lean_object* v_motive_438_, lean_object* v_t_439_, lean_object* v_h_440_, lean_object* v_urlPatternInit_441_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_439_, v_urlPatternInit_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternInput___lam__0(lean_object* v_x_443_){
_start:
{
if (lean_obj_tag(v_x_443_) == 0)
{
lean_object* v_value_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
v_value_444_ = lean_ctor_get(v_x_443_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v_x_443_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v_x_443_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_value_444_);
lean_dec(v_x_443_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
lean_ctor_set_tag(v___x_446_, 4);
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_value_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
else
{
lean_object* v_value_452_; lean_object* v_protocol_453_; lean_object* v_username_454_; lean_object* v_password_455_; lean_object* v_hostname_456_; lean_object* v_port_457_; lean_object* v_pathname_458_; lean_object* v_search_459_; lean_object* v_hash_460_; lean_object* v_baseURL_461_; lean_object* v___f_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v_value_452_ = lean_ctor_get(v_x_443_, 0);
lean_inc_ref(v_value_452_);
lean_dec_ref_known(v_x_443_, 1);
v_protocol_453_ = lean_ctor_get(v_value_452_, 0);
lean_inc(v_protocol_453_);
v_username_454_ = lean_ctor_get(v_value_452_, 1);
lean_inc(v_username_454_);
v_password_455_ = lean_ctor_get(v_value_452_, 2);
lean_inc(v_password_455_);
v_hostname_456_ = lean_ctor_get(v_value_452_, 3);
lean_inc(v_hostname_456_);
v_port_457_ = lean_ctor_get(v_value_452_, 4);
lean_inc(v_port_457_);
v_pathname_458_ = lean_ctor_get(v_value_452_, 5);
lean_inc(v_pathname_458_);
v_search_459_ = lean_ctor_get(v_value_452_, 6);
lean_inc(v_search_459_);
v_hash_460_ = lean_ctor_get(v_value_452_, 7);
lean_inc(v_hash_460_);
v_baseURL_461_ = lean_ctor_get(v_value_452_, 8);
lean_inc(v_baseURL_461_);
lean_dec_ref(v_value_452_);
v___f_462_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___closed__0));
v___x_463_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_464_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_462_, v_protocol_453_);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
v___x_466_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_467_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_462_, v_username_454_);
v___x_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_466_);
lean_ctor_set(v___x_468_, 1, v___x_467_);
v___x_469_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_470_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_462_, v_password_455_);
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_473_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_462_, v_hostname_456_);
v___x_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v___x_475_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_476_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_462_, v_port_457_);
v___x_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_479_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_462_, v_pathname_458_);
v___x_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_478_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_482_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_462_, v_search_459_);
v___x_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_481_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
v___x_484_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_485_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_462_, v_hash_460_);
v___x_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_486_, 0, v___x_484_);
lean_ctor_set(v___x_486_, 1, v___x_485_);
v___x_487_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_488_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_462_, v_baseURL_461_);
v___x_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = lean_unsigned_to_nat(9u);
v___x_491_ = lean_mk_empty_array_with_capacity(v___x_490_);
v___x_492_ = lean_array_push(v___x_491_, v___x_465_);
v___x_493_ = lean_array_push(v___x_492_, v___x_468_);
v___x_494_ = lean_array_push(v___x_493_, v___x_471_);
v___x_495_ = lean_array_push(v___x_494_, v___x_474_);
v___x_496_ = lean_array_push(v___x_495_, v___x_477_);
v___x_497_ = lean_array_push(v___x_496_, v___x_480_);
v___x_498_ = lean_array_push(v___x_497_, v___x_483_);
v___x_499_ = lean_array_push(v___x_498_, v___x_486_);
v___x_500_ = lean_array_push(v___x_499_, v___x_489_);
v___x_501_ = l_Lasm_JS_Web_Support_fields(v___x_500_);
lean_dec_ref(v___x_500_);
return v___x_501_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringURLPatternInput___lam__0(lean_object* v_value_504_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v_value_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeURLPatternInitURLPatternInput___lam__0(lean_object* v_value_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_509_, 0, v_value_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0(lean_object* v_x_514_){
_start:
{
switch(lean_obj_tag(v_x_514_))
{
case 4:
{
lean_object* v_s_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
v_s_515_ = lean_ctor_get(v_x_514_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_523_ == 0)
{
v___x_517_ = v_x_514_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_s_515_);
lean_dec(v_x_514_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
lean_ctor_set_tag(v___x_517_, 0);
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_s_515_);
v___x_520_ = v_reuseFailAlloc_522_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
lean_object* v___x_521_; 
v___x_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
return v___x_521_;
}
}
}
case 8:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_524_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___x_525_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_526_ = l_Lasm_JS_readField___redArg(v___x_524_, v_x_514_, v___x_525_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_dec_ref_known(v_x_514_, 1);
v_a_527_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_526_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v_a_535_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_535_);
lean_dec_ref_known(v___x_526_, 1);
v___x_536_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_537_ = l_Lasm_JS_readField___redArg(v___x_524_, v_x_514_, v___x_536_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
lean_dec(v_a_535_);
lean_dec_ref_known(v_x_514_, 1);
v_a_538_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_545_ == 0)
{
v___x_540_ = v___x_537_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_537_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_a_546_ = lean_ctor_get(v___x_537_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v___x_537_, 1);
v___x_547_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_548_ = l_Lasm_JS_readField___redArg(v___x_524_, v_x_514_, v___x_547_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec(v_a_546_);
lean_dec(v_a_535_);
lean_dec_ref_known(v_x_514_, 1);
v_a_549_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_548_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_548_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v_a_557_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_a_557_);
lean_dec_ref_known(v___x_548_, 1);
v___x_558_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_559_ = l_Lasm_JS_readField___redArg(v___x_524_, v_x_514_, v___x_558_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
lean_dec(v_a_557_);
lean_dec(v_a_546_);
lean_dec(v_a_535_);
lean_dec_ref_known(v_x_514_, 1);
v_a_560_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_559_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
else
{
lean_object* v_a_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v_a_568_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_559_, 1);
v___x_569_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_570_ = l_Lasm_JS_readField___redArg(v___x_524_, v_x_514_, v___x_569_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
lean_dec(v_a_568_);
lean_dec(v_a_557_);
lean_dec(v_a_546_);
lean_dec(v_a_535_);
lean_dec_ref_known(v_x_514_, 1);
v_a_571_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_570_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v_a_579_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_570_, 1);
v___x_580_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_581_ = l_Lasm_JS_readField___redArg(v___x_524_, v_x_514_, v___x_580_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
lean_dec(v_a_579_);
lean_dec(v_a_568_);
lean_dec(v_a_557_);
lean_dec(v_a_546_);
lean_dec(v_a_535_);
lean_dec_ref_known(v_x_514_, 1);
v_a_582_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_581_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_581_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
else
{
lean_object* v_a_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v_a_590_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_581_, 1);
v___x_591_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_592_ = l_Lasm_JS_readField___redArg(v___x_524_, v_x_514_, v___x_591_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
lean_dec(v_a_590_);
lean_dec(v_a_579_);
lean_dec(v_a_568_);
lean_dec(v_a_557_);
lean_dec(v_a_546_);
lean_dec(v_a_535_);
lean_dec_ref_known(v_x_514_, 1);
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_a_601_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_601_);
lean_dec_ref_known(v___x_592_, 1);
v___x_602_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_603_ = l_Lasm_JS_readField___redArg(v___x_524_, v_x_514_, v___x_602_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_611_; 
lean_dec(v_a_601_);
lean_dec(v_a_590_);
lean_dec(v_a_579_);
lean_dec(v_a_568_);
lean_dec(v_a_557_);
lean_dec(v_a_546_);
lean_dec(v_a_535_);
lean_dec_ref_known(v_x_514_, 1);
v_a_604_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_611_ == 0)
{
v___x_606_ = v___x_603_;
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_609_; 
if (v_isShared_607_ == 0)
{
v___x_609_ = v___x_606_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_604_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
else
{
lean_object* v_a_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_638_; 
v_a_612_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_603_, 1);
v___x_613_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_614_ = l_Lasm_JS_readField___redArg(v___x_524_, v_x_514_, v___x_613_);
v_isSharedCheck_638_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_638_ == 0)
{
lean_object* v_unused_639_; 
v_unused_639_ = lean_ctor_get(v_x_514_, 0);
lean_dec(v_unused_639_);
v___x_616_ = v_x_514_;
v_isShared_617_ = v_isSharedCheck_638_;
goto v_resetjp_615_;
}
else
{
lean_dec(v_x_514_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_638_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_del_object(v___x_616_);
lean_dec(v_a_612_);
lean_dec(v_a_601_);
lean_dec(v_a_590_);
lean_dec(v_a_579_);
lean_dec(v_a_568_);
lean_dec(v_a_557_);
lean_dec(v_a_546_);
lean_dec(v_a_535_);
v_a_618_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_614_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_614_);
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
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_637_; 
v_a_626_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_637_ == 0)
{
v___x_628_ = v___x_614_;
v_isShared_629_ = v_isSharedCheck_637_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_614_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_637_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_630_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_630_, 0, v_a_535_);
lean_ctor_set(v___x_630_, 1, v_a_546_);
lean_ctor_set(v___x_630_, 2, v_a_557_);
lean_ctor_set(v___x_630_, 3, v_a_568_);
lean_ctor_set(v___x_630_, 4, v_a_579_);
lean_ctor_set(v___x_630_, 5, v_a_590_);
lean_ctor_set(v___x_630_, 6, v_a_601_);
lean_ctor_set(v___x_630_, 7, v_a_612_);
lean_ctor_set(v___x_630_, 8, v_a_626_);
if (v_isShared_617_ == 0)
{
lean_ctor_set_tag(v___x_616_, 1);
lean_ctor_set(v___x_616_, 0, v___x_630_);
v___x_632_ = v___x_616_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_630_);
v___x_632_ = v_reuseFailAlloc_636_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_634_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v___x_632_);
v___x_634_ = v___x_628_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_632_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
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
lean_object* v___x_640_; 
lean_dec(v_x_514_);
v___x_640_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0___closed__0));
return v___x_640_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0(lean_object* v___f_649_, lean_object* v_d_650_){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_651_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0));
v___x_652_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_649_, v_d_650_);
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_651_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = lean_mk_empty_array_with_capacity(v___x_654_);
v___x_656_ = lean_array_push(v___x_655_, v___x_653_);
v___x_657_ = l_Lasm_JS_Web_Support_fields(v___x_656_);
lean_dec_ref(v___x_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0(lean_object* v___x_664_, lean_object* v___x_665_, lean_object* v_d_666_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0));
v___x_668_ = l_Lasm_JS_readField___redArg(v___x_664_, v_d_666_, v___x_667_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec_ref(v___x_665_);
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v_a_677_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_a_677_);
lean_dec_ref_known(v___x_668_, 1);
v___x_678_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1));
v___x_679_ = l_Lasm_JS_readField___redArg(v___x_665_, v_d_666_, v___x_678_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec(v_a_677_);
v_a_680_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_679_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_696_; 
v_a_688_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_696_ == 0)
{
v___x_690_ = v___x_679_;
v_isShared_691_ = v_isSharedCheck_696_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_679_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_696_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v_a_677_);
lean_ctor_set(v___x_692_, 1, v_a_688_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v___x_692_);
v___x_694_ = v___x_690_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___boxed(lean_object* v___x_697_, lean_object* v___x_698_, lean_object* v_d_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0(v___x_697_, v___x_698_, v_d_699_);
lean_dec(v_d_699_);
return v_res_700_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___x_702_ = l_Lasm_JS_Web_instFromJSRecord___redArg(v___x_701_);
return v___x_702_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0);
v___x_704_ = l_Lasm_JS_instFromJSOption___redArg(v___x_703_);
return v___x_704_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2(void){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___f_707_; 
v___x_705_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1);
v___x_706_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___f_707_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_707_, 0, v___x_706_);
lean_closure_set(v___f_707_, 1, v___x_705_);
return v___f_707_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4(void){
_start:
{
uint8_t v___x_709_; lean_object* v___x_710_; lean_object* v___f_711_; lean_object* v___x_712_; 
v___x_709_ = 0;
v___x_710_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__3));
v___f_711_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2);
v___x_712_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_712_, 0, v___f_711_);
lean_ctor_set(v___x_712_, 1, v___x_710_);
lean_ctor_set_uint8(v___x_712_, sizeof(void*)*2, v___x_709_);
return v___x_712_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult(void){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0(lean_object* v___x_715_, lean_object* v___x_716_, lean_object* v_d_717_){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0));
v___x_719_ = l_Lasm_JS_readField___redArg(v___x_715_, v_d_717_, v___x_718_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
lean_dec_ref(v___x_716_);
v_a_720_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_719_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_719_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v_a_728_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_728_);
lean_dec_ref_known(v___x_719_, 1);
v___x_729_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v___x_716_);
v___x_730_ = l_Lasm_JS_readField___redArg(v___x_716_, v_d_717_, v___x_729_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_dec(v_a_728_);
lean_dec_ref(v___x_716_);
v_a_731_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_730_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_730_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
else
{
lean_object* v_a_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_a_739_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_730_, 1);
v___x_740_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v___x_716_);
v___x_741_ = l_Lasm_JS_readField___redArg(v___x_716_, v_d_717_, v___x_740_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_dec(v_a_739_);
lean_dec(v_a_728_);
lean_dec_ref(v___x_716_);
v_a_742_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_741_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
else
{
lean_object* v_a_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v_a_750_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_750_);
lean_dec_ref_known(v___x_741_, 1);
v___x_751_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v___x_716_);
v___x_752_ = l_Lasm_JS_readField___redArg(v___x_716_, v_d_717_, v___x_751_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec(v_a_750_);
lean_dec(v_a_739_);
lean_dec(v_a_728_);
lean_dec_ref(v___x_716_);
v_a_753_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_752_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_752_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_a_761_ = lean_ctor_get(v___x_752_, 0);
lean_inc(v_a_761_);
lean_dec_ref_known(v___x_752_, 1);
v___x_762_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v___x_716_);
v___x_763_ = l_Lasm_JS_readField___redArg(v___x_716_, v_d_717_, v___x_762_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec(v_a_761_);
lean_dec(v_a_750_);
lean_dec(v_a_739_);
lean_dec(v_a_728_);
lean_dec_ref(v___x_716_);
v_a_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
else
{
lean_object* v_a_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v_a_772_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_763_, 1);
v___x_773_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v___x_716_);
v___x_774_ = l_Lasm_JS_readField___redArg(v___x_716_, v_d_717_, v___x_773_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_dec(v_a_772_);
lean_dec(v_a_761_);
lean_dec(v_a_750_);
lean_dec(v_a_739_);
lean_dec(v_a_728_);
lean_dec_ref(v___x_716_);
v_a_775_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_774_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_774_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
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
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_a_783_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_774_, 1);
v___x_784_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v___x_716_);
v___x_785_ = l_Lasm_JS_readField___redArg(v___x_716_, v_d_717_, v___x_784_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec(v_a_783_);
lean_dec(v_a_772_);
lean_dec(v_a_761_);
lean_dec(v_a_750_);
lean_dec(v_a_739_);
lean_dec(v_a_728_);
lean_dec_ref(v___x_716_);
v_a_786_ = lean_ctor_get(v___x_785_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_785_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_785_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v_a_794_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_a_794_);
lean_dec_ref_known(v___x_785_, 1);
v___x_795_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v___x_716_);
v___x_796_ = l_Lasm_JS_readField___redArg(v___x_716_, v_d_717_, v___x_795_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
lean_dec(v_a_794_);
lean_dec(v_a_783_);
lean_dec(v_a_772_);
lean_dec(v_a_761_);
lean_dec(v_a_750_);
lean_dec(v_a_739_);
lean_dec(v_a_728_);
lean_dec_ref(v___x_716_);
v_a_797_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_796_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_796_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_797_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v_a_805_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v___x_796_, 1);
v___x_806_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_807_ = l_Lasm_JS_readField___redArg(v___x_716_, v_d_717_, v___x_806_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
lean_dec(v_a_805_);
lean_dec(v_a_794_);
lean_dec(v_a_783_);
lean_dec(v_a_772_);
lean_dec(v_a_761_);
lean_dec(v_a_750_);
lean_dec(v_a_739_);
lean_dec(v_a_728_);
v_a_808_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_807_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
else
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_824_; 
v_a_816_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_824_ == 0)
{
v___x_818_ = v___x_807_;
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_807_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_820_; lean_object* v___x_822_; 
v___x_820_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_820_, 0, v_a_728_);
lean_ctor_set(v___x_820_, 1, v_a_739_);
lean_ctor_set(v___x_820_, 2, v_a_750_);
lean_ctor_set(v___x_820_, 3, v_a_761_);
lean_ctor_set(v___x_820_, 4, v_a_772_);
lean_ctor_set(v___x_820_, 5, v_a_783_);
lean_ctor_set(v___x_820_, 6, v_a_794_);
lean_ctor_set(v___x_820_, 7, v_a_805_);
lean_ctor_set(v___x_820_, 8, v_a_816_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_820_);
v___x_822_ = v___x_818_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___boxed(lean_object* v___x_825_, lean_object* v___x_826_, lean_object* v_d_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0(v___x_825_, v___x_826_, v_d_827_);
lean_dec(v_d_827_);
return v_res_828_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternInput));
v___x_830_ = l_Lasm_JS_instFromJSArray___redArg(v___x_829_);
return v___x_830_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0);
v___x_832_ = l_Lasm_JS_instFromJSOption___redArg(v___x_831_);
return v___x_832_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = l_Lasm_JS_Web_instFromJSURLPatternComponentResult;
v___x_834_ = l_Lasm_JS_instFromJSOption___redArg(v___x_833_);
return v___x_834_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___f_837_; 
v___x_835_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2);
v___x_836_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1);
v___f_837_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_837_, 0, v___x_836_);
lean_closure_set(v___f_837_, 1, v___x_835_);
return v___f_837_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5(void){
_start:
{
uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v___f_841_; lean_object* v___x_842_; 
v___x_839_ = 0;
v___x_840_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___closed__4));
v___f_841_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3);
v___x_842_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_842_, 0, v___f_841_);
lean_ctor_set(v___x_842_, 1, v___x_840_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*2, v___x_839_);
return v___x_842_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult(void){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5);
return v___x_843_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_850_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___x_851_ = lean_unsigned_to_nat(46u);
v___x_852_ = lean_unsigned_to_nat(193u);
v___x_853_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4));
v___x_854_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3));
v___x_855_ = l_mkPanicMessageWithDecl(v___x_854_, v___x_853_, v___x_852_, v___x_851_, v___x_850_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(lean_object* v_context_857_, lean_object* v_d_858_){
_start:
{
lean_object* v_received_861_; 
if (lean_obj_tag(v_d_858_) == 9)
{
lean_object* v_value_875_; lean_object* v___x_876_; 
v_value_875_ = lean_ctor_get(v_d_858_, 0);
lean_inc(v_value_875_);
lean_dec_ref_known(v_d_858_, 2);
v___x_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_876_, 0, v_value_875_);
return v___x_876_;
}
else
{
if (lean_obj_tag(v_d_858_) == 9)
{
lean_object* v_value_877_; lean_object* v_description_878_; lean_object* v___x_879_; uint8_t v___x_880_; 
v_value_877_ = lean_ctor_get(v_d_858_, 0);
v_description_878_ = lean_ctor_get(v_d_858_, 1);
v___x_879_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_880_ = lean_string_dec_eq(v_description_878_, v___x_879_);
if (v___x_880_ == 0)
{
goto v___jp_873_;
}
else
{
uint32_t v___x_881_; uint64_t v___x_882_; lean_object* v___x_883_; uint32_t v___x_884_; lean_object* v___x_885_; 
lean_inc_n(v_value_877_, 2);
lean_dec_ref_known(v_d_858_, 2);
v___x_881_ = 206;
v___x_882_ = 0ULL;
v___x_883_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_883_, 0, v_value_877_);
lean_ctor_set(v___x_883_, 1, v___x_879_);
v___x_884_ = lasm_js_value_handle(v_value_877_);
lean_dec(v_value_877_);
v___x_885_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_881_, v___x_882_, v___x_883_, v___x_884_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; uint8_t v___x_887_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = lean_string_validate_utf8(v_a_886_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; lean_object* v___x_889_; 
lean_dec(v_a_886_);
v___x_888_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6);
v___x_889_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_888_);
v_received_861_ = v___x_889_;
goto v___jp_860_;
}
else
{
lean_object* v___x_890_; 
v___x_890_ = lean_string_from_utf8_unchecked(v_a_886_);
v_received_861_ = v___x_890_;
goto v___jp_860_;
}
}
else
{
lean_object* v___x_891_; 
lean_dec_ref_known(v___x_885_, 1);
v___x_891_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v_received_861_ = v___x_891_;
goto v___jp_860_;
}
}
}
else
{
goto v___jp_873_;
}
}
v___jp_860_:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_862_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_863_ = lean_string_append(v___x_862_, v_context_857_);
v___x_864_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_865_ = lean_string_append(v___x_863_, v___x_864_);
v___x_866_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURL___closed__1));
v___x_867_ = lean_string_append(v___x_865_, v___x_866_);
v___x_868_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_869_ = lean_string_append(v___x_867_, v___x_868_);
v___x_870_ = lean_string_append(v___x_869_, v_received_861_);
lean_dec_ref(v_received_861_);
v___x_871_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
v___x_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
return v___x_872_;
}
v___jp_873_:
{
lean_object* v___x_874_; 
v___x_874_ = l_Lasm_JS_Data_describe(v_d_858_);
v_received_861_ = v___x_874_;
goto v___jp_860_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___boxed(lean_object* v_context_892_, lean_object* v_d_893_, lean_object* v_a_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(v_context_892_, v_d_893_);
lean_dec_ref(v_context_892_);
return v_res_895_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_897_; uint64_t v___x_898_; 
v___x_897_ = 0;
v___x_898_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_897_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(lean_object* v_b_899_, lean_object* v_args_900_, uint8_t v_await_901_){
_start:
{
uint64_t v___y_904_; uint64_t v___y_905_; uint64_t v___x_940_; uint64_t v___y_942_; 
v___x_940_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_901_ == 0)
{
uint64_t v___x_947_; 
v___x_947_ = 0ULL;
v___y_942_ = v___x_947_;
goto v___jp_941_;
}
else
{
uint64_t v___x_948_; 
v___x_948_ = 2ULL;
v___y_942_ = v___x_948_;
goto v___jp_941_;
}
v___jp_903_:
{
uint64_t v_flags_906_; uint32_t v___x_907_; lean_object* v___x_908_; uint32_t v___x_909_; lean_object* v___x_910_; 
v_flags_906_ = lean_uint64_lor(v___y_904_, v___y_905_);
v___x_907_ = 214;
v___x_908_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_899_, v_args_900_);
v___x_909_ = 0;
v___x_910_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_907_, v_flags_906_, v___x_908_, v___x_909_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; lean_object* v___x_912_; 
v_a_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_910_, 1);
v___x_912_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_911_);
lean_dec(v_a_911_);
if (lean_obj_tag(v___x_912_) == 0)
{
lean_object* v_a_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v_a_913_ = lean_ctor_get(v___x_912_, 0);
lean_inc(v_a_913_);
lean_dec_ref_known(v___x_912_, 1);
v___x_914_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_899_);
v___x_915_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(v___x_914_, v_a_913_);
lean_dec_ref(v___x_914_);
return v___x_915_;
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
v_a_916_ = lean_ctor_get(v___x_912_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_912_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_912_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_939_; 
v_a_924_ = lean_ctor_get(v___x_910_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_939_ == 0)
{
v___x_926_ = v___x_910_;
v_isShared_927_ = v_isSharedCheck_939_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_910_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_939_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_928_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_929_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_899_);
v___x_930_ = lean_string_append(v___x_928_, v___x_929_);
lean_dec_ref(v___x_929_);
v___x_931_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_932_ = lean_string_append(v___x_930_, v___x_931_);
v___x_933_ = lean_io_error_to_string(v_a_924_);
v___x_934_ = lean_string_append(v___x_932_, v___x_933_);
lean_dec_ref(v___x_933_);
v___x_935_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v___x_935_);
v___x_937_ = v___x_926_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
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
v___jp_941_:
{
uint8_t v_construct_943_; uint64_t v___x_944_; 
v_construct_943_ = lean_ctor_get_uint8(v_b_899_, sizeof(void*)*4);
v___x_944_ = lean_uint64_lor(v___x_940_, v___y_942_);
if (v_construct_943_ == 0)
{
uint64_t v___x_945_; 
v___x_945_ = 0ULL;
v___y_904_ = v___x_944_;
v___y_905_ = v___x_945_;
goto v___jp_903_;
}
else
{
uint64_t v___x_946_; 
v___x_946_ = 4ULL;
v___y_904_ = v___x_944_;
v___y_905_ = v___x_946_;
goto v___jp_903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___boxed(lean_object* v_b_949_, lean_object* v_args_950_, lean_object* v_await_951_, lean_object* v_a_952_){
_start:
{
uint8_t v_await_boxed_953_; lean_object* v_res_954_; 
v_await_boxed_953_ = lean_unbox(v_await_951_);
v_res_954_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(v_b_949_, v_args_950_, v_await_boxed_953_);
lean_dec_ref(v_b_949_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_new(lean_object* v_url_964_, lean_object* v_base_965_){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; uint8_t v___x_975_; lean_object* v___x_976_; 
v___x_967_ = lean_unsigned_to_nat(2u);
v___x_968_ = ((lean_object*)(l_Lasm_JS_Web_URL_new___closed__3));
v___x_969_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_969_, 0, v_url_964_);
v___x_970_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_965_);
v___x_971_ = lean_mk_empty_array_with_capacity(v___x_967_);
v___x_972_ = lean_array_push(v___x_971_, v___x_969_);
v___x_973_ = lean_array_push(v___x_972_, v___x_970_);
v___x_974_ = l_Lasm_JS_Web_Support_args(v___x_973_);
v___x_975_ = 0;
v___x_976_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(v___x_968_, v___x_974_, v___x_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_new___boxed(lean_object* v_url_977_, lean_object* v_base_978_, lean_object* v_a_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lasm_JS_Web_URL_new(v_url_977_, v_base_978_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_href(lean_object* v_self_982_){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_984_ = ((lean_object*)(l_Lasm_JS_Web_URL_href___closed__0));
v___x_985_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_982_, v___x_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_href___boxed(lean_object* v_self_986_, lean_object* v_a_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_Lasm_JS_Web_URL_href(v_self_986_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHref(lean_object* v_self_989_, lean_object* v_value_990_){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_992_ = ((lean_object*)(l_Lasm_JS_Web_URL_href___closed__0));
v___x_993_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_993_, 0, v_value_990_);
v___x_994_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_989_, v___x_992_, v___x_993_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHref___boxed(lean_object* v_self_995_, lean_object* v_value_996_, lean_object* v_a_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lasm_JS_Web_URL_setHref(v_self_995_, v_value_996_);
return v_res_998_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0(void){
_start:
{
uint64_t v___x_999_; uint8_t v___x_1000_; uint64_t v___x_1001_; 
v___x_999_ = 8ULL;
v___x_1000_ = 0;
v___x_1001_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v___x_1000_, v___x_999_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(lean_object* v_o_1003_, lean_object* v_name_1004_, lean_object* v_args_1005_){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; uint64_t v___x_1010_; lean_object* v___x_1011_; 
v___x_1007_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_1008_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1008_, 0, v_o_1003_);
lean_ctor_set(v___x_1008_, 1, v___x_1007_);
lean_inc_ref(v_name_1004_);
v___x_1009_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1009_, 0, v_name_1004_);
v___x_1010_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0);
v___x_1011_ = l_Lasm_JS_Value_invokeRaw(v___x_1008_, v___x_1009_, v_args_1005_, v___x_1010_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_a_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_a_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_a_1012_);
lean_dec_ref_known(v___x_1011_, 1);
v___x_1013_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_1014_ = lean_string_append(v___x_1013_, v_name_1004_);
lean_dec_ref(v_name_1004_);
v___x_1015_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_1014_, v_a_1012_);
lean_dec(v_a_1012_);
lean_dec_ref(v___x_1014_);
return v___x_1015_;
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec_ref(v_name_1004_);
v_a_1016_ = lean_ctor_get(v___x_1011_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1011_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1011_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___boxed(lean_object* v_o_1024_, lean_object* v_name_1025_, lean_object* v_args_1026_, lean_object* v_a_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_o_1024_, v_name_1025_, v_args_1026_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toString(lean_object* v_self_1032_){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1034_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__0));
v___x_1035_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1036_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1032_, v___x_1034_, v___x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toString___boxed(lean_object* v_self_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lasm_JS_Web_URL_toString(v_self_1037_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_origin(lean_object* v_self_1041_){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = ((lean_object*)(l_Lasm_JS_Web_URL_origin___closed__0));
v___x_1044_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1041_, v___x_1043_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_origin___boxed(lean_object* v_self_1045_, lean_object* v_a_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lasm_JS_Web_URL_origin(v_self_1045_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_protocol(lean_object* v_self_1048_){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_1051_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1048_, v___x_1050_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_protocol___boxed(lean_object* v_self_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lasm_JS_Web_URL_protocol(v_self_1052_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setProtocol(lean_object* v_self_1055_, lean_object* v_value_1056_){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_1059_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1059_, 0, v_value_1056_);
v___x_1060_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1055_, v___x_1058_, v___x_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setProtocol___boxed(lean_object* v_self_1061_, lean_object* v_value_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lasm_JS_Web_URL_setProtocol(v_self_1061_, v_value_1062_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_username(lean_object* v_self_1065_){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_1068_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1065_, v___x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_username___boxed(lean_object* v_self_1069_, lean_object* v_a_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Lasm_JS_Web_URL_username(v_self_1069_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setUsername(lean_object* v_self_1072_, lean_object* v_value_1073_){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1075_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_1076_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1076_, 0, v_value_1073_);
v___x_1077_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1072_, v___x_1075_, v___x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setUsername___boxed(lean_object* v_self_1078_, lean_object* v_value_1079_, lean_object* v_a_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Lasm_JS_Web_URL_setUsername(v_self_1078_, v_value_1079_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_password(lean_object* v_self_1082_){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_1085_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1082_, v___x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_password___boxed(lean_object* v_self_1086_, lean_object* v_a_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Lasm_JS_Web_URL_password(v_self_1086_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPassword(lean_object* v_self_1089_, lean_object* v_value_1090_){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1092_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_1093_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1093_, 0, v_value_1090_);
v___x_1094_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1089_, v___x_1092_, v___x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPassword___boxed(lean_object* v_self_1095_, lean_object* v_value_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lasm_JS_Web_URL_setPassword(v_self_1095_, v_value_1096_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_host(lean_object* v_self_1100_){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1102_ = ((lean_object*)(l_Lasm_JS_Web_URL_host___closed__0));
v___x_1103_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1100_, v___x_1102_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_host___boxed(lean_object* v_self_1104_, lean_object* v_a_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Lasm_JS_Web_URL_host(v_self_1104_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHost(lean_object* v_self_1107_, lean_object* v_value_1108_){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1110_ = ((lean_object*)(l_Lasm_JS_Web_URL_host___closed__0));
v___x_1111_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1111_, 0, v_value_1108_);
v___x_1112_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1107_, v___x_1110_, v___x_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHost___boxed(lean_object* v_self_1113_, lean_object* v_value_1114_, lean_object* v_a_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Lasm_JS_Web_URL_setHost(v_self_1113_, v_value_1114_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hostname(lean_object* v_self_1117_){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_1120_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1117_, v___x_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hostname___boxed(lean_object* v_self_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lasm_JS_Web_URL_hostname(v_self_1121_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHostname(lean_object* v_self_1124_, lean_object* v_value_1125_){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1127_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_1128_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1128_, 0, v_value_1125_);
v___x_1129_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1124_, v___x_1127_, v___x_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHostname___boxed(lean_object* v_self_1130_, lean_object* v_value_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lasm_JS_Web_URL_setHostname(v_self_1130_, v_value_1131_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_port(lean_object* v_self_1134_){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_1137_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1134_, v___x_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_port___boxed(lean_object* v_self_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lasm_JS_Web_URL_port(v_self_1138_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPort(lean_object* v_self_1141_, lean_object* v_value_1142_){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_1145_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1145_, 0, v_value_1142_);
v___x_1146_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1141_, v___x_1144_, v___x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPort___boxed(lean_object* v_self_1147_, lean_object* v_value_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lasm_JS_Web_URL_setPort(v_self_1147_, v_value_1148_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_pathname(lean_object* v_self_1151_){
_start:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_1154_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1151_, v___x_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_pathname___boxed(lean_object* v_self_1155_, lean_object* v_a_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lasm_JS_Web_URL_pathname(v_self_1155_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPathname(lean_object* v_self_1158_, lean_object* v_value_1159_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1161_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_1162_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1162_, 0, v_value_1159_);
v___x_1163_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1158_, v___x_1161_, v___x_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPathname___boxed(lean_object* v_self_1164_, lean_object* v_value_1165_, lean_object* v_a_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lasm_JS_Web_URL_setPathname(v_self_1164_, v_value_1165_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_search(lean_object* v_self_1168_){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_1171_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1168_, v___x_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_search___boxed(lean_object* v_self_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_Lasm_JS_Web_URL_search(v_self_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setSearch(lean_object* v_self_1175_, lean_object* v_value_1176_){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_1179_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1179_, 0, v_value_1176_);
v___x_1180_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1175_, v___x_1178_, v___x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setSearch___boxed(lean_object* v_self_1181_, lean_object* v_value_1182_, lean_object* v_a_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lasm_JS_Web_URL_setSearch(v_self_1181_, v_value_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams(lean_object* v_self_1186_){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = ((lean_object*)(l_Lasm_JS_Web_URL_searchParams___closed__0));
v___x_1189_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1186_, v___x_1188_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
v_a_1190_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1192_ = v___x_1189_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1189_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
v_a_1198_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1189_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1189_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams___boxed(lean_object* v_self_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lasm_JS_Web_URL_searchParams(v_self_1206_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash(lean_object* v_self_1209_){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_1212_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1209_, v___x_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash___boxed(lean_object* v_self_1213_, lean_object* v_a_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lasm_JS_Web_URL_hash(v_self_1213_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash(lean_object* v_self_1216_, lean_object* v_value_1217_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1219_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_1220_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1220_, 0, v_value_1217_);
v___x_1221_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1216_, v___x_1219_, v___x_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash___boxed(lean_object* v_self_1222_, lean_object* v_value_1223_, lean_object* v_a_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Lasm_JS_Web_URL_setHash(v_self_1222_, v_value_1223_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(lean_object* v_b_1226_, lean_object* v_args_1227_, uint8_t v_await_1228_){
_start:
{
uint64_t v___y_1231_; uint64_t v___y_1232_; uint64_t v___x_1267_; uint64_t v___y_1269_; 
v___x_1267_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1228_ == 0)
{
uint64_t v___x_1274_; 
v___x_1274_ = 0ULL;
v___y_1269_ = v___x_1274_;
goto v___jp_1268_;
}
else
{
uint64_t v___x_1275_; 
v___x_1275_ = 2ULL;
v___y_1269_ = v___x_1275_;
goto v___jp_1268_;
}
v___jp_1230_:
{
uint64_t v_flags_1233_; uint32_t v___x_1234_; lean_object* v___x_1235_; uint32_t v___x_1236_; lean_object* v___x_1237_; 
v_flags_1233_ = lean_uint64_lor(v___y_1231_, v___y_1232_);
v___x_1234_ = 214;
v___x_1235_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1226_, v_args_1227_);
v___x_1236_ = 0;
v___x_1237_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1234_, v_flags_1233_, v___x_1235_, v___x_1236_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v___x_1239_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
lean_inc(v_a_1238_);
lean_dec_ref_known(v___x_1237_, 1);
v___x_1239_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1238_);
lean_dec(v_a_1238_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v_a_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v_a_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_a_1240_);
lean_dec_ref_known(v___x_1239_, 1);
v___x_1241_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1226_);
v___x_1242_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v___x_1241_, v_a_1240_);
lean_dec_ref(v___x_1241_);
return v___x_1242_;
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
v_a_1243_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v___x_1239_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1239_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1243_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1266_; 
v_a_1251_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1253_ = v___x_1237_;
v_isShared_1254_ = v_isSharedCheck_1266_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1237_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1266_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
v___x_1255_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1256_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1226_);
v___x_1257_ = lean_string_append(v___x_1255_, v___x_1256_);
lean_dec_ref(v___x_1256_);
v___x_1258_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1259_ = lean_string_append(v___x_1257_, v___x_1258_);
v___x_1260_ = lean_io_error_to_string(v_a_1251_);
v___x_1261_ = lean_string_append(v___x_1259_, v___x_1260_);
lean_dec_ref(v___x_1260_);
v___x_1262_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1262_);
v___x_1264_ = v___x_1253_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1262_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
v___jp_1268_:
{
uint8_t v_construct_1270_; uint64_t v___x_1271_; 
v_construct_1270_ = lean_ctor_get_uint8(v_b_1226_, sizeof(void*)*4);
v___x_1271_ = lean_uint64_lor(v___x_1267_, v___y_1269_);
if (v_construct_1270_ == 0)
{
uint64_t v___x_1272_; 
v___x_1272_ = 0ULL;
v___y_1231_ = v___x_1271_;
v___y_1232_ = v___x_1272_;
goto v___jp_1230_;
}
else
{
uint64_t v___x_1273_; 
v___x_1273_ = 4ULL;
v___y_1231_ = v___x_1271_;
v___y_1232_ = v___x_1273_;
goto v___jp_1230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0___boxed(lean_object* v_b_1276_, lean_object* v_args_1277_, lean_object* v_await_1278_, lean_object* v_a_1279_){
_start:
{
uint8_t v_await_boxed_1280_; lean_object* v_res_1281_; 
v_await_boxed_1280_ = lean_unbox(v_await_1278_);
v_res_1281_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v_b_1276_, v_args_1277_, v_await_boxed_1280_);
lean_dec_ref(v_b_1276_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL(lean_object* v_obj_1290_){
_start:
{
uint8_t v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___y_1296_; lean_object* v_value_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1292_ = 0;
v___x_1293_ = lean_unsigned_to_nat(1u);
v___x_1294_ = ((lean_object*)(l_Lasm_JS_Web_URL_createObjectURL___closed__2));
v_value_1301_ = lean_ctor_get(v_obj_1290_, 0);
v___x_1302_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
lean_inc(v_value_1301_);
v___x_1303_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1303_, 0, v_value_1301_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___y_1296_ = v___x_1303_;
goto v___jp_1295_;
v___jp_1295_:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1297_ = lean_mk_empty_array_with_capacity(v___x_1293_);
v___x_1298_ = lean_array_push(v___x_1297_, v___y_1296_);
v___x_1299_ = l_Lasm_JS_Web_Support_args(v___x_1298_);
v___x_1300_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_1294_, v___x_1299_, v___x_1292_);
return v___x_1300_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL___boxed(lean_object* v_obj_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lasm_JS_Web_URL_createObjectURL(v_obj_1304_);
lean_dec_ref(v_obj_1304_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(lean_object* v_b_1307_, lean_object* v_args_1308_, uint8_t v_await_1309_){
_start:
{
uint64_t v___y_1312_; uint64_t v___y_1313_; uint64_t v___x_1346_; uint64_t v___y_1348_; 
v___x_1346_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1309_ == 0)
{
uint64_t v___x_1353_; 
v___x_1353_ = 0ULL;
v___y_1348_ = v___x_1353_;
goto v___jp_1347_;
}
else
{
uint64_t v___x_1354_; 
v___x_1354_ = 2ULL;
v___y_1348_ = v___x_1354_;
goto v___jp_1347_;
}
v___jp_1311_:
{
uint64_t v_flags_1314_; uint32_t v___x_1315_; lean_object* v___x_1316_; uint32_t v___x_1317_; lean_object* v___x_1318_; 
v_flags_1314_ = lean_uint64_lor(v___y_1312_, v___y_1313_);
v___x_1315_ = 214;
v___x_1316_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1307_, v_args_1308_);
v___x_1317_ = 0;
v___x_1318_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1315_, v_flags_1314_, v___x_1316_, v___x_1317_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v_a_1319_; lean_object* v___x_1320_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc(v_a_1319_);
lean_dec_ref_known(v___x_1318_, 1);
v___x_1320_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1319_);
lean_dec(v_a_1319_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v___x_1321_; 
lean_dec_ref_known(v___x_1320_, 1);
v___x_1321_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_1321_;
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1329_; 
v_a_1322_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1324_ = v___x_1320_;
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v___x_1320_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1327_; 
if (v_isShared_1325_ == 0)
{
v___x_1327_ = v___x_1324_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_a_1322_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1345_; 
v_a_1330_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1332_ = v___x_1318_;
v_isShared_1333_ = v_isSharedCheck_1345_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1318_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1345_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1343_; 
v___x_1334_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1335_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1307_);
v___x_1336_ = lean_string_append(v___x_1334_, v___x_1335_);
lean_dec_ref(v___x_1335_);
v___x_1337_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1338_ = lean_string_append(v___x_1336_, v___x_1337_);
v___x_1339_ = lean_io_error_to_string(v_a_1330_);
v___x_1340_ = lean_string_append(v___x_1338_, v___x_1339_);
lean_dec_ref(v___x_1339_);
v___x_1341_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 0, v___x_1341_);
v___x_1343_ = v___x_1332_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v___x_1341_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
}
v___jp_1347_:
{
uint8_t v_construct_1349_; uint64_t v___x_1350_; 
v_construct_1349_ = lean_ctor_get_uint8(v_b_1307_, sizeof(void*)*4);
v___x_1350_ = lean_uint64_lor(v___x_1346_, v___y_1348_);
if (v_construct_1349_ == 0)
{
uint64_t v___x_1351_; 
v___x_1351_ = 0ULL;
v___y_1312_ = v___x_1350_;
v___y_1313_ = v___x_1351_;
goto v___jp_1311_;
}
else
{
uint64_t v___x_1352_; 
v___x_1352_ = 4ULL;
v___y_1312_ = v___x_1350_;
v___y_1313_ = v___x_1352_;
goto v___jp_1311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0___boxed(lean_object* v_b_1355_, lean_object* v_args_1356_, lean_object* v_await_1357_, lean_object* v_a_1358_){
_start:
{
uint8_t v_await_boxed_1359_; lean_object* v_res_1360_; 
v_await_boxed_1359_ = lean_unbox(v_await_1357_);
v_res_1360_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v_b_1355_, v_args_1356_, v_await_boxed_1359_);
lean_dec_ref(v_b_1355_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL(lean_object* v_url_1369_){
_start:
{
uint8_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1371_ = 0;
v___x_1372_ = lean_unsigned_to_nat(1u);
v___x_1373_ = ((lean_object*)(l_Lasm_JS_Web_URL_revokeObjectURL___closed__2));
v___x_1374_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1374_, 0, v_url_1369_);
v___x_1375_ = lean_mk_empty_array_with_capacity(v___x_1372_);
v___x_1376_ = lean_array_push(v___x_1375_, v___x_1374_);
v___x_1377_ = l_Lasm_JS_Web_Support_args(v___x_1376_);
v___x_1378_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_1373_, v___x_1377_, v___x_1371_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL___boxed(lean_object* v_url_1379_, lean_object* v_a_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_Lasm_JS_Web_URL_revokeObjectURL(v_url_1379_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(lean_object* v_context_1383_, lean_object* v_d_1384_){
_start:
{
lean_object* v_received_1390_; 
switch(lean_obj_tag(v_d_1384_))
{
case 1:
{
goto v___jp_1386_;
}
case 0:
{
goto v___jp_1386_;
}
default: 
{
if (lean_obj_tag(v_d_1384_) == 9)
{
lean_object* v_value_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v_value_1404_ = lean_ctor_get(v_d_1384_, 0);
lean_inc(v_value_1404_);
lean_dec_ref_known(v_d_1384_, 2);
v___x_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1405_, 0, v_value_1404_);
v___x_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
return v___x_1406_;
}
else
{
if (lean_obj_tag(v_d_1384_) == 9)
{
lean_object* v_value_1407_; lean_object* v_description_1408_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v_value_1407_ = lean_ctor_get(v_d_1384_, 0);
v_description_1408_ = lean_ctor_get(v_d_1384_, 1);
v___x_1409_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_1410_ = lean_string_dec_eq(v_description_1408_, v___x_1409_);
if (v___x_1410_ == 0)
{
goto v___jp_1402_;
}
else
{
uint32_t v___x_1411_; uint64_t v___x_1412_; lean_object* v___x_1413_; uint32_t v___x_1414_; lean_object* v___x_1415_; 
lean_inc_n(v_value_1407_, 2);
lean_dec_ref_known(v_d_1384_, 2);
v___x_1411_ = 206;
v___x_1412_ = 0ULL;
v___x_1413_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1413_, 0, v_value_1407_);
lean_ctor_set(v___x_1413_, 1, v___x_1409_);
v___x_1414_ = lasm_js_value_handle(v_value_1407_);
lean_dec(v_value_1407_);
v___x_1415_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1411_, v___x_1412_, v___x_1413_, v___x_1414_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v_a_1416_; uint8_t v___x_1417_; 
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
lean_inc(v_a_1416_);
lean_dec_ref_known(v___x_1415_, 1);
v___x_1417_ = lean_string_validate_utf8(v_a_1416_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_dec(v_a_1416_);
v___x_1418_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6);
v___x_1419_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1418_);
v_received_1390_ = v___x_1419_;
goto v___jp_1389_;
}
else
{
lean_object* v___x_1420_; 
v___x_1420_ = lean_string_from_utf8_unchecked(v_a_1416_);
v_received_1390_ = v___x_1420_;
goto v___jp_1389_;
}
}
else
{
lean_object* v___x_1421_; 
lean_dec_ref_known(v___x_1415_, 1);
v___x_1421_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v_received_1390_ = v___x_1421_;
goto v___jp_1389_;
}
}
}
else
{
goto v___jp_1402_;
}
}
}
}
v___jp_1386_:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = lean_box(0);
v___x_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
return v___x_1388_;
}
v___jp_1389_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1391_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1392_ = lean_string_append(v___x_1391_, v_context_1383_);
v___x_1393_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1394_ = lean_string_append(v___x_1392_, v___x_1393_);
v___x_1395_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___closed__0));
v___x_1396_ = lean_string_append(v___x_1394_, v___x_1395_);
v___x_1397_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1398_ = lean_string_append(v___x_1396_, v___x_1397_);
v___x_1399_ = lean_string_append(v___x_1398_, v_received_1390_);
lean_dec_ref(v_received_1390_);
v___x_1400_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
v___x_1401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
return v___x_1401_;
}
v___jp_1402_:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lasm_JS_Data_describe(v_d_1384_);
v_received_1390_ = v___x_1403_;
goto v___jp_1389_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___boxed(lean_object* v_context_1422_, lean_object* v_d_1423_, lean_object* v_a_1424_){
_start:
{
lean_object* v_res_1425_; 
v_res_1425_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v_context_1422_, v_d_1423_);
lean_dec_ref(v_context_1422_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(lean_object* v_b_1426_, lean_object* v_args_1427_, uint8_t v_await_1428_){
_start:
{
uint64_t v___y_1431_; uint64_t v___y_1432_; uint64_t v___x_1467_; uint64_t v___y_1469_; 
v___x_1467_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1428_ == 0)
{
uint64_t v___x_1474_; 
v___x_1474_ = 0ULL;
v___y_1469_ = v___x_1474_;
goto v___jp_1468_;
}
else
{
uint64_t v___x_1475_; 
v___x_1475_ = 2ULL;
v___y_1469_ = v___x_1475_;
goto v___jp_1468_;
}
v___jp_1430_:
{
uint64_t v_flags_1433_; uint32_t v___x_1434_; lean_object* v___x_1435_; uint32_t v___x_1436_; lean_object* v___x_1437_; 
v_flags_1433_ = lean_uint64_lor(v___y_1431_, v___y_1432_);
v___x_1434_ = 214;
v___x_1435_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1426_, v_args_1427_);
v___x_1436_ = 0;
v___x_1437_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1434_, v_flags_1433_, v___x_1435_, v___x_1436_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1439_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1438_);
lean_dec(v_a_1438_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v___x_1441_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1426_);
v___x_1442_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v___x_1441_, v_a_1440_);
lean_dec_ref(v___x_1441_);
return v___x_1442_;
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
v_a_1443_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1439_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1439_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1466_; 
v_a_1451_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1453_ = v___x_1437_;
v_isShared_1454_ = v_isSharedCheck_1466_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1437_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1466_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1464_; 
v___x_1455_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1456_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1426_);
v___x_1457_ = lean_string_append(v___x_1455_, v___x_1456_);
lean_dec_ref(v___x_1456_);
v___x_1458_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1459_ = lean_string_append(v___x_1457_, v___x_1458_);
v___x_1460_ = lean_io_error_to_string(v_a_1451_);
v___x_1461_ = lean_string_append(v___x_1459_, v___x_1460_);
lean_dec_ref(v___x_1460_);
v___x_1462_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
if (v_isShared_1454_ == 0)
{
lean_ctor_set(v___x_1453_, 0, v___x_1462_);
v___x_1464_ = v___x_1453_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v___x_1462_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
v___jp_1468_:
{
uint8_t v_construct_1470_; uint64_t v___x_1471_; 
v_construct_1470_ = lean_ctor_get_uint8(v_b_1426_, sizeof(void*)*4);
v___x_1471_ = lean_uint64_lor(v___x_1467_, v___y_1469_);
if (v_construct_1470_ == 0)
{
uint64_t v___x_1472_; 
v___x_1472_ = 0ULL;
v___y_1431_ = v___x_1471_;
v___y_1432_ = v___x_1472_;
goto v___jp_1430_;
}
else
{
uint64_t v___x_1473_; 
v___x_1473_ = 4ULL;
v___y_1431_ = v___x_1471_;
v___y_1432_ = v___x_1473_;
goto v___jp_1430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0___boxed(lean_object* v_b_1476_, lean_object* v_args_1477_, lean_object* v_await_1478_, lean_object* v_a_1479_){
_start:
{
uint8_t v_await_boxed_1480_; lean_object* v_res_1481_; 
v_await_boxed_1480_ = lean_unbox(v_await_1478_);
v_res_1481_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v_b_1476_, v_args_1477_, v_await_boxed_1480_);
lean_dec_ref(v_b_1476_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse(lean_object* v_url_1490_, lean_object* v_base_1491_){
_start:
{
uint8_t v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1493_ = 0;
v___x_1494_ = lean_unsigned_to_nat(2u);
v___x_1495_ = ((lean_object*)(l_Lasm_JS_Web_URL_parse___closed__2));
v___x_1496_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1496_, 0, v_url_1490_);
v___x_1497_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1491_);
v___x_1498_ = lean_mk_empty_array_with_capacity(v___x_1494_);
v___x_1499_ = lean_array_push(v___x_1498_, v___x_1496_);
v___x_1500_ = lean_array_push(v___x_1499_, v___x_1497_);
v___x_1501_ = l_Lasm_JS_Web_Support_args(v___x_1500_);
v___x_1502_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v___x_1495_, v___x_1501_, v___x_1493_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse___boxed(lean_object* v_url_1503_, lean_object* v_base_1504_, lean_object* v_a_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lasm_JS_Web_URL_parse(v_url_1503_, v_base_1504_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(lean_object* v_b_1507_, lean_object* v_args_1508_, uint8_t v_await_1509_){
_start:
{
uint64_t v___y_1512_; uint64_t v___y_1513_; uint64_t v___x_1548_; uint64_t v___y_1550_; 
v___x_1548_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1509_ == 0)
{
uint64_t v___x_1555_; 
v___x_1555_ = 0ULL;
v___y_1550_ = v___x_1555_;
goto v___jp_1549_;
}
else
{
uint64_t v___x_1556_; 
v___x_1556_ = 2ULL;
v___y_1550_ = v___x_1556_;
goto v___jp_1549_;
}
v___jp_1511_:
{
uint64_t v_flags_1514_; uint32_t v___x_1515_; lean_object* v___x_1516_; uint32_t v___x_1517_; lean_object* v___x_1518_; 
v_flags_1514_ = lean_uint64_lor(v___y_1512_, v___y_1513_);
v___x_1515_ = 214;
v___x_1516_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1507_, v_args_1508_);
v___x_1517_ = 0;
v___x_1518_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1515_, v_flags_1514_, v___x_1516_, v___x_1517_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_object* v_a_1519_; lean_object* v___x_1520_; 
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1519_);
lean_dec_ref_known(v___x_1518_, 1);
v___x_1520_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1519_);
lean_dec(v_a_1519_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1521_);
lean_dec_ref_known(v___x_1520_, 1);
v___x_1522_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1507_);
v___x_1523_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v___x_1522_, v_a_1521_);
lean_dec_ref(v___x_1522_);
return v___x_1523_;
}
else
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
v_a_1524_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v___x_1520_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1520_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1547_; 
v_a_1532_ = lean_ctor_get(v___x_1518_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1534_ = v___x_1518_;
v_isShared_1535_ = v_isSharedCheck_1547_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1518_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1547_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1545_; 
v___x_1536_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1537_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1507_);
v___x_1538_ = lean_string_append(v___x_1536_, v___x_1537_);
lean_dec_ref(v___x_1537_);
v___x_1539_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1540_ = lean_string_append(v___x_1538_, v___x_1539_);
v___x_1541_ = lean_io_error_to_string(v_a_1532_);
v___x_1542_ = lean_string_append(v___x_1540_, v___x_1541_);
lean_dec_ref(v___x_1541_);
v___x_1543_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1542_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v___x_1543_);
v___x_1545_ = v___x_1534_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v___x_1543_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
v___jp_1549_:
{
uint8_t v_construct_1551_; uint64_t v___x_1552_; 
v_construct_1551_ = lean_ctor_get_uint8(v_b_1507_, sizeof(void*)*4);
v___x_1552_ = lean_uint64_lor(v___x_1548_, v___y_1550_);
if (v_construct_1551_ == 0)
{
uint64_t v___x_1553_; 
v___x_1553_ = 0ULL;
v___y_1512_ = v___x_1552_;
v___y_1513_ = v___x_1553_;
goto v___jp_1511_;
}
else
{
uint64_t v___x_1554_; 
v___x_1554_ = 4ULL;
v___y_1512_ = v___x_1552_;
v___y_1513_ = v___x_1554_;
goto v___jp_1511_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0___boxed(lean_object* v_b_1557_, lean_object* v_args_1558_, lean_object* v_await_1559_, lean_object* v_a_1560_){
_start:
{
uint8_t v_await_boxed_1561_; lean_object* v_res_1562_; 
v_await_boxed_1561_ = lean_unbox(v_await_1559_);
v_res_1562_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v_b_1557_, v_args_1558_, v_await_boxed_1561_);
lean_dec_ref(v_b_1557_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse(lean_object* v_url_1571_, lean_object* v_base_1572_){
_start:
{
uint8_t v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1574_ = 0;
v___x_1575_ = lean_unsigned_to_nat(2u);
v___x_1576_ = ((lean_object*)(l_Lasm_JS_Web_URL_canParse___closed__2));
v___x_1577_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1577_, 0, v_url_1571_);
v___x_1578_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1572_);
v___x_1579_ = lean_mk_empty_array_with_capacity(v___x_1575_);
v___x_1580_ = lean_array_push(v___x_1579_, v___x_1577_);
v___x_1581_ = lean_array_push(v___x_1580_, v___x_1578_);
v___x_1582_ = l_Lasm_JS_Web_Support_args(v___x_1581_);
v___x_1583_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v___x_1576_, v___x_1582_, v___x_1574_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse___boxed(lean_object* v_url_1584_, lean_object* v_base_1585_, lean_object* v_a_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l_Lasm_JS_Web_URL_canParse(v_url_1584_, v_base_1585_);
return v_res_1587_;
}
}
static lean_object* _init_l_Lasm_JS_Web_URL_toJSON___closed__1(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1590_ = l_Lasm_JS_Web_Support_args(v___x_1589_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON(lean_object* v_self_1591_){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1593_ = ((lean_object*)(l_Lasm_JS_Web_URL_toJSON___closed__0));
v___x_1594_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_1595_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1591_, v___x_1593_, v___x_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON___boxed(lean_object* v_self_1596_, lean_object* v_a_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Lasm_JS_Web_URL_toJSON(v_self_1596_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t v_sz_1599_, size_t v_i_1600_, lean_object* v_bs_1601_){
_start:
{
uint8_t v___x_1602_; 
v___x_1602_ = lean_usize_dec_lt(v_i_1600_, v_sz_1599_);
if (v___x_1602_ == 0)
{
return v_bs_1601_;
}
else
{
lean_object* v_v_1603_; lean_object* v___x_1604_; lean_object* v_bs_x27_1605_; lean_object* v___x_1606_; size_t v___x_1607_; size_t v___x_1608_; lean_object* v___x_1609_; 
v_v_1603_ = lean_array_uget(v_bs_1601_, v_i_1600_);
v___x_1604_ = lean_unsigned_to_nat(0u);
v_bs_x27_1605_ = lean_array_uset(v_bs_1601_, v_i_1600_, v___x_1604_);
v___x_1606_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1606_, 0, v_v_1603_);
v___x_1607_ = ((size_t)1ULL);
v___x_1608_ = lean_usize_add(v_i_1600_, v___x_1607_);
v___x_1609_ = lean_array_uset(v_bs_x27_1605_, v_i_1600_, v___x_1606_);
v_i_1600_ = v___x_1608_;
v_bs_1601_ = v___x_1609_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0___boxed(lean_object* v_sz_1611_, lean_object* v_i_1612_, lean_object* v_bs_1613_){
_start:
{
size_t v_sz_boxed_1614_; size_t v_i_boxed_1615_; lean_object* v_res_1616_; 
v_sz_boxed_1614_ = lean_unbox_usize(v_sz_1611_);
lean_dec(v_sz_1611_);
v_i_boxed_1615_ = lean_unbox_usize(v_i_1612_);
lean_dec(v_i_1612_);
v_res_1616_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_boxed_1614_, v_i_boxed_1615_, v_bs_1613_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(size_t v_sz_1617_, size_t v_i_1618_, lean_object* v_bs_1619_){
_start:
{
uint8_t v___x_1620_; 
v___x_1620_ = lean_usize_dec_lt(v_i_1618_, v_sz_1617_);
if (v___x_1620_ == 0)
{
return v_bs_1619_;
}
else
{
lean_object* v_v_1621_; lean_object* v___x_1622_; lean_object* v_bs_x27_1623_; size_t v_sz_1624_; size_t v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; size_t v___x_1628_; size_t v___x_1629_; lean_object* v___x_1630_; 
v_v_1621_ = lean_array_uget(v_bs_1619_, v_i_1618_);
v___x_1622_ = lean_unsigned_to_nat(0u);
v_bs_x27_1623_ = lean_array_uset(v_bs_1619_, v_i_1618_, v___x_1622_);
v_sz_1624_ = lean_array_size(v_v_1621_);
v___x_1625_ = ((size_t)0ULL);
v___x_1626_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_1624_, v___x_1625_, v_v_1621_);
v___x_1627_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
v___x_1628_ = ((size_t)1ULL);
v___x_1629_ = lean_usize_add(v_i_1618_, v___x_1628_);
v___x_1630_ = lean_array_uset(v_bs_x27_1623_, v_i_1618_, v___x_1627_);
v_i_1618_ = v___x_1629_;
v_bs_1619_ = v___x_1630_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1___boxed(lean_object* v_sz_1632_, lean_object* v_i_1633_, lean_object* v_bs_1634_){
_start:
{
size_t v_sz_boxed_1635_; size_t v_i_boxed_1636_; lean_object* v_res_1637_; 
v_sz_boxed_1635_ = lean_unbox_usize(v_sz_1632_);
lean_dec(v_sz_1632_);
v_i_boxed_1636_ = lean_unbox_usize(v_i_1633_);
lean_dec(v_i_1633_);
v_res_1637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_boxed_1635_, v_i_boxed_1636_, v_bs_1634_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t v_sz_1638_, size_t v_i_1639_, lean_object* v_bs_1640_){
_start:
{
uint8_t v___x_1641_; 
v___x_1641_ = lean_usize_dec_lt(v_i_1639_, v_sz_1638_);
if (v___x_1641_ == 0)
{
return v_bs_1640_;
}
else
{
lean_object* v_v_1642_; lean_object* v_fst_1643_; lean_object* v_snd_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1658_; 
v_v_1642_ = lean_array_uget(v_bs_1640_, v_i_1639_);
v_fst_1643_ = lean_ctor_get(v_v_1642_, 0);
v_snd_1644_ = lean_ctor_get(v_v_1642_, 1);
v_isSharedCheck_1658_ = !lean_is_exclusive(v_v_1642_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1646_ = v_v_1642_;
v_isShared_1647_ = v_isSharedCheck_1658_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_snd_1644_);
lean_inc(v_fst_1643_);
lean_dec(v_v_1642_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1658_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1648_; lean_object* v_bs_x27_1649_; lean_object* v___x_1650_; lean_object* v___x_1652_; 
v___x_1648_ = lean_unsigned_to_nat(0u);
v_bs_x27_1649_ = lean_array_uset(v_bs_1640_, v_i_1639_, v___x_1648_);
v___x_1650_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1650_, 0, v_snd_1644_);
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 1, v___x_1650_);
v___x_1652_ = v___x_1646_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_fst_1643_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
size_t v___x_1653_; size_t v___x_1654_; lean_object* v___x_1655_; 
v___x_1653_ = ((size_t)1ULL);
v___x_1654_ = lean_usize_add(v_i_1639_, v___x_1653_);
v___x_1655_ = lean_array_uset(v_bs_x27_1649_, v_i_1639_, v___x_1652_);
v_i_1639_ = v___x_1654_;
v_bs_1640_ = v___x_1655_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2___boxed(lean_object* v_sz_1659_, lean_object* v_i_1660_, lean_object* v_bs_1661_){
_start:
{
size_t v_sz_boxed_1662_; size_t v_i_boxed_1663_; lean_object* v_res_1664_; 
v_sz_boxed_1662_ = lean_unbox_usize(v_sz_1659_);
lean_dec(v_sz_1659_);
v_i_boxed_1663_ = lean_unbox_usize(v_i_1660_);
lean_dec(v_i_1660_);
v_res_1664_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_boxed_1662_, v_i_boxed_1663_, v_bs_1661_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(lean_object* v_x_1665_){
_start:
{
if (lean_obj_tag(v_x_1665_) == 0)
{
lean_object* v___x_1666_; 
v___x_1666_ = lean_box(0);
return v___x_1666_;
}
else
{
lean_object* v_val_1667_; 
v_val_1667_ = lean_ctor_get(v_x_1665_, 0);
lean_inc(v_val_1667_);
lean_dec_ref_known(v_x_1665_, 1);
switch(lean_obj_tag(v_val_1667_))
{
case 0:
{
lean_object* v_value_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1678_; 
v_value_1668_ = lean_ctor_get(v_val_1667_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_val_1667_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1670_ = v_val_1667_;
v_isShared_1671_ = v_isSharedCheck_1678_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_value_1668_);
lean_dec(v_val_1667_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1678_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
size_t v_sz_1672_; size_t v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1676_; 
v_sz_1672_ = lean_array_size(v_value_1668_);
v___x_1673_ = ((size_t)0ULL);
v___x_1674_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_1672_, v___x_1673_, v_value_1668_);
if (v_isShared_1671_ == 0)
{
lean_ctor_set_tag(v___x_1670_, 7);
lean_ctor_set(v___x_1670_, 0, v___x_1674_);
v___x_1676_ = v___x_1670_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v___x_1674_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
case 1:
{
lean_object* v_value_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1689_; 
v_value_1679_ = lean_ctor_get(v_val_1667_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v_val_1667_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1681_ = v_val_1667_;
v_isShared_1682_ = v_isSharedCheck_1689_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_value_1679_);
lean_dec(v_val_1667_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1689_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
size_t v_sz_1683_; size_t v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1687_; 
v_sz_1683_ = lean_array_size(v_value_1679_);
v___x_1684_ = ((size_t)0ULL);
v___x_1685_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_1683_, v___x_1684_, v_value_1679_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set_tag(v___x_1681_, 8);
lean_ctor_set(v___x_1681_, 0, v___x_1685_);
v___x_1687_ = v___x_1681_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1685_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
default: 
{
lean_object* v_value_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
v_value_1690_ = lean_ctor_get(v_val_1667_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v_val_1667_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v_val_1667_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_value_1690_);
lean_dec(v_val_1667_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
lean_ctor_set_tag(v___x_1692_, 4);
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_value_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(lean_object* v_context_1698_, lean_object* v_d_1699_){
_start:
{
lean_object* v_received_1702_; 
if (lean_obj_tag(v_d_1699_) == 9)
{
lean_object* v_value_1716_; lean_object* v___x_1717_; 
v_value_1716_ = lean_ctor_get(v_d_1699_, 0);
lean_inc(v_value_1716_);
lean_dec_ref_known(v_d_1699_, 2);
v___x_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1717_, 0, v_value_1716_);
return v___x_1717_;
}
else
{
if (lean_obj_tag(v_d_1699_) == 9)
{
lean_object* v_value_1718_; lean_object* v_description_1719_; lean_object* v___x_1720_; uint8_t v___x_1721_; 
v_value_1718_ = lean_ctor_get(v_d_1699_, 0);
v_description_1719_ = lean_ctor_get(v_d_1699_, 1);
v___x_1720_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_1721_ = lean_string_dec_eq(v_description_1719_, v___x_1720_);
if (v___x_1721_ == 0)
{
goto v___jp_1714_;
}
else
{
uint32_t v___x_1722_; uint64_t v___x_1723_; lean_object* v___x_1724_; uint32_t v___x_1725_; lean_object* v___x_1726_; 
lean_inc_n(v_value_1718_, 2);
lean_dec_ref_known(v_d_1699_, 2);
v___x_1722_ = 206;
v___x_1723_ = 0ULL;
v___x_1724_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1724_, 0, v_value_1718_);
lean_ctor_set(v___x_1724_, 1, v___x_1720_);
v___x_1725_ = lasm_js_value_handle(v_value_1718_);
lean_dec(v_value_1718_);
v___x_1726_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1722_, v___x_1723_, v___x_1724_, v___x_1725_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; uint8_t v___x_1728_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1726_, 1);
v___x_1728_ = lean_string_validate_utf8(v_a_1727_);
if (v___x_1728_ == 0)
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
lean_dec(v_a_1727_);
v___x_1729_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6);
v___x_1730_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1729_);
v_received_1702_ = v___x_1730_;
goto v___jp_1701_;
}
else
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_string_from_utf8_unchecked(v_a_1727_);
v_received_1702_ = v___x_1731_;
goto v___jp_1701_;
}
}
else
{
lean_object* v___x_1732_; 
lean_dec_ref_known(v___x_1726_, 1);
v___x_1732_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v_received_1702_ = v___x_1732_;
goto v___jp_1701_;
}
}
}
else
{
goto v___jp_1714_;
}
}
v___jp_1701_:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1703_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1704_ = lean_string_append(v___x_1703_, v_context_1698_);
v___x_1705_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1706_ = lean_string_append(v___x_1704_, v___x_1705_);
v___x_1707_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLSearchParams___closed__0));
v___x_1708_ = lean_string_append(v___x_1706_, v___x_1707_);
v___x_1709_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1710_ = lean_string_append(v___x_1708_, v___x_1709_);
v___x_1711_ = lean_string_append(v___x_1710_, v_received_1702_);
lean_dec_ref(v_received_1702_);
v___x_1712_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1711_);
v___x_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1712_);
return v___x_1713_;
}
v___jp_1714_:
{
lean_object* v___x_1715_; 
v___x_1715_ = l_Lasm_JS_Data_describe(v_d_1699_);
v_received_1702_ = v___x_1715_;
goto v___jp_1701_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4___boxed(lean_object* v_context_1733_, lean_object* v_d_1734_, lean_object* v_a_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(v_context_1733_, v_d_1734_);
lean_dec_ref(v_context_1733_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(lean_object* v_b_1737_, lean_object* v_args_1738_, uint8_t v_await_1739_){
_start:
{
uint64_t v___y_1742_; uint64_t v___y_1743_; uint64_t v___x_1778_; uint64_t v___y_1780_; 
v___x_1778_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1739_ == 0)
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
v___jp_1741_:
{
uint64_t v_flags_1744_; uint32_t v___x_1745_; lean_object* v___x_1746_; uint32_t v___x_1747_; lean_object* v___x_1748_; 
v_flags_1744_ = lean_uint64_lor(v___y_1742_, v___y_1743_);
v___x_1745_ = 214;
v___x_1746_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1737_, v_args_1738_);
v___x_1747_ = 0;
v___x_1748_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1745_, v_flags_1744_, v___x_1746_, v___x_1747_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1749_);
lean_dec(v_a_1749_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_a_1751_);
lean_dec_ref_known(v___x_1750_, 1);
v___x_1752_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1737_);
v___x_1753_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(v___x_1752_, v_a_1751_);
lean_dec_ref(v___x_1752_);
return v___x_1753_;
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
v_a_1754_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1750_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1750_);
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
else
{
lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1777_; 
v_a_1762_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1764_ = v___x_1748_;
v_isShared_1765_ = v_isSharedCheck_1777_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_dec(v___x_1748_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1777_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1775_; 
v___x_1766_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1767_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1737_);
v___x_1768_ = lean_string_append(v___x_1766_, v___x_1767_);
lean_dec_ref(v___x_1767_);
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
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
v_construct_1781_ = lean_ctor_get_uint8(v_b_1737_, sizeof(void*)*4);
v___x_1782_ = lean_uint64_lor(v___x_1778_, v___y_1780_);
if (v_construct_1781_ == 0)
{
uint64_t v___x_1783_; 
v___x_1783_ = 0ULL;
v___y_1742_ = v___x_1782_;
v___y_1743_ = v___x_1783_;
goto v___jp_1741_;
}
else
{
uint64_t v___x_1784_; 
v___x_1784_ = 4ULL;
v___y_1742_ = v___x_1782_;
v___y_1743_ = v___x_1784_;
goto v___jp_1741_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1___boxed(lean_object* v_b_1787_, lean_object* v_args_1788_, lean_object* v_await_1789_, lean_object* v_a_1790_){
_start:
{
uint8_t v_await_boxed_1791_; lean_object* v_res_1792_; 
v_await_boxed_1791_ = lean_unbox(v_await_1789_);
v_res_1792_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v_b_1787_, v_args_1788_, v_await_boxed_1791_);
lean_dec_ref(v_b_1787_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new(lean_object* v_init_1801_){
_start:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; uint8_t v___x_1809_; lean_object* v___x_1810_; 
v___x_1803_ = lean_unsigned_to_nat(1u);
v___x_1804_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_new___closed__2));
v___x_1805_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(v_init_1801_);
v___x_1806_ = lean_mk_empty_array_with_capacity(v___x_1803_);
v___x_1807_ = lean_array_push(v___x_1806_, v___x_1805_);
v___x_1808_ = l_Lasm_JS_Web_Support_args(v___x_1807_);
v___x_1809_ = 0;
v___x_1810_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v___x_1804_, v___x_1808_, v___x_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new___boxed(lean_object* v_init_1811_, lean_object* v_a_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l_Lasm_JS_Web_URLSearchParams_new(v_init_1811_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size(lean_object* v_self_1815_){
_start:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1817_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_size___closed__0));
v___x_1818_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1815_, v___x_1817_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size___boxed(lean_object* v_self_1819_, lean_object* v_a_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Lasm_JS_Web_URLSearchParams_size(v_self_1819_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString(lean_object* v_self_1822_){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1824_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__0));
v___x_1825_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1826_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1822_, v___x_1824_, v___x_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString___boxed(lean_object* v_self_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lasm_JS_Web_URLSearchParams_toString(v_self_1827_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append(lean_object* v_self_1831_, lean_object* v_name_1832_, lean_object* v_value_1833_){
_start:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1835_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_append___closed__0));
v___x_1836_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1836_, 0, v_name_1832_);
v___x_1837_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1837_, 0, v_value_1833_);
v___x_1838_ = lean_unsigned_to_nat(2u);
v___x_1839_ = lean_mk_empty_array_with_capacity(v___x_1838_);
v___x_1840_ = lean_array_push(v___x_1839_, v___x_1836_);
v___x_1841_ = lean_array_push(v___x_1840_, v___x_1837_);
v___x_1842_ = l_Lasm_JS_Web_Support_args(v___x_1841_);
v___x_1843_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1831_, v___x_1835_, v___x_1842_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append___boxed(lean_object* v_self_1844_, lean_object* v_name_1845_, lean_object* v_value_1846_, lean_object* v_a_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lasm_JS_Web_URLSearchParams_append(v_self_1844_, v_name_1845_, v_value_1846_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete(lean_object* v_self_1850_, lean_object* v_name_1851_, lean_object* v_value_1852_){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1854_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_delete___closed__0));
v___x_1855_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1855_, 0, v_name_1851_);
v___x_1856_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_1852_);
v___x_1857_ = lean_unsigned_to_nat(2u);
v___x_1858_ = lean_mk_empty_array_with_capacity(v___x_1857_);
v___x_1859_ = lean_array_push(v___x_1858_, v___x_1855_);
v___x_1860_ = lean_array_push(v___x_1859_, v___x_1856_);
v___x_1861_ = l_Lasm_JS_Web_Support_args(v___x_1860_);
v___x_1862_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1850_, v___x_1854_, v___x_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete___boxed(lean_object* v_self_1863_, lean_object* v_name_1864_, lean_object* v_value_1865_, lean_object* v_a_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_Lasm_JS_Web_URLSearchParams_delete(v_self_1863_, v_name_1864_, v_value_1865_);
return v_res_1867_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(uint8_t v_await_1868_, uint64_t v_extra_1869_){
_start:
{
uint64_t v___x_1870_; uint64_t v___y_1872_; 
v___x_1870_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1868_ == 0)
{
uint64_t v___x_1875_; 
v___x_1875_ = 0ULL;
v___y_1872_ = v___x_1875_;
goto v___jp_1871_;
}
else
{
uint64_t v___x_1876_; 
v___x_1876_ = 2ULL;
v___y_1872_ = v___x_1876_;
goto v___jp_1871_;
}
v___jp_1871_:
{
uint64_t v___x_1873_; uint64_t v___x_1874_; 
v___x_1873_ = lean_uint64_lor(v___x_1870_, v___y_1872_);
v___x_1874_ = lean_uint64_lor(v___x_1873_, v_extra_1869_);
return v___x_1874_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0___boxed(lean_object* v_await_1877_, lean_object* v_extra_1878_){
_start:
{
uint8_t v_await_boxed_1879_; uint64_t v_extra_boxed_1880_; uint64_t v_res_1881_; lean_object* v_r_1882_; 
v_await_boxed_1879_ = lean_unbox(v_await_1877_);
v_extra_boxed_1880_ = lean_unbox_uint64(v_extra_1878_);
lean_dec_ref(v_extra_1878_);
v_res_1881_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v_await_boxed_1879_, v_extra_boxed_1880_);
v_r_1882_ = lean_box_uint64(v_res_1881_);
return v_r_1882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(lean_object* v_context_1884_, lean_object* v_d_1885_){
_start:
{
lean_object* v_received_1891_; 
switch(lean_obj_tag(v_d_1885_))
{
case 1:
{
goto v___jp_1887_;
}
case 0:
{
goto v___jp_1887_;
}
default: 
{
if (lean_obj_tag(v_d_1885_) == 4)
{
lean_object* v_s_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v_s_1905_ = lean_ctor_get(v_d_1885_, 0);
lean_inc_ref(v_s_1905_);
lean_dec_ref_known(v_d_1885_, 1);
v___x_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1906_, 0, v_s_1905_);
v___x_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
return v___x_1907_;
}
else
{
if (lean_obj_tag(v_d_1885_) == 9)
{
lean_object* v_value_1908_; lean_object* v_description_1909_; lean_object* v___x_1910_; uint8_t v___x_1911_; 
v_value_1908_ = lean_ctor_get(v_d_1885_, 0);
v_description_1909_ = lean_ctor_get(v_d_1885_, 1);
v___x_1910_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_1911_ = lean_string_dec_eq(v_description_1909_, v___x_1910_);
if (v___x_1911_ == 0)
{
goto v___jp_1903_;
}
else
{
uint32_t v___x_1912_; uint64_t v___x_1913_; lean_object* v___x_1914_; uint32_t v___x_1915_; lean_object* v___x_1916_; 
lean_inc_n(v_value_1908_, 2);
lean_dec_ref_known(v_d_1885_, 2);
v___x_1912_ = 206;
v___x_1913_ = 0ULL;
v___x_1914_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1914_, 0, v_value_1908_);
lean_ctor_set(v___x_1914_, 1, v___x_1910_);
v___x_1915_ = lasm_js_value_handle(v_value_1908_);
lean_dec(v_value_1908_);
v___x_1916_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1912_, v___x_1913_, v___x_1914_, v___x_1915_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; uint8_t v___x_1918_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref_known(v___x_1916_, 1);
v___x_1918_ = lean_string_validate_utf8(v_a_1917_);
if (v___x_1918_ == 0)
{
lean_object* v___x_1919_; lean_object* v___x_1920_; 
lean_dec(v_a_1917_);
v___x_1919_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6);
v___x_1920_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1919_);
v_received_1891_ = v___x_1920_;
goto v___jp_1890_;
}
else
{
lean_object* v___x_1921_; 
v___x_1921_ = lean_string_from_utf8_unchecked(v_a_1917_);
v_received_1891_ = v___x_1921_;
goto v___jp_1890_;
}
}
else
{
lean_object* v___x_1922_; 
lean_dec_ref_known(v___x_1916_, 1);
v___x_1922_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v_received_1891_ = v___x_1922_;
goto v___jp_1890_;
}
}
}
else
{
goto v___jp_1903_;
}
}
}
}
v___jp_1887_:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1888_ = lean_box(0);
v___x_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
return v___x_1889_;
}
v___jp_1890_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1892_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1893_ = lean_string_append(v___x_1892_, v_context_1884_);
v___x_1894_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1895_ = lean_string_append(v___x_1893_, v___x_1894_);
v___x_1896_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_1897_ = lean_string_append(v___x_1895_, v___x_1896_);
v___x_1898_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1899_ = lean_string_append(v___x_1897_, v___x_1898_);
v___x_1900_ = lean_string_append(v___x_1899_, v_received_1891_);
lean_dec_ref(v_received_1891_);
v___x_1901_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
v___x_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
return v___x_1902_;
}
v___jp_1903_:
{
lean_object* v___x_1904_; 
v___x_1904_ = l_Lasm_JS_Data_describe(v_d_1885_);
v_received_1891_ = v___x_1904_;
goto v___jp_1890_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1923_, lean_object* v_d_1924_, lean_object* v_a_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_1923_, v_d_1924_);
lean_dec_ref(v_context_1923_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object* v_context_1927_, lean_object* v_bytes_1928_){
_start:
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1928_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1932_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v___x_1932_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_1927_, v_a_1931_);
return v___x_1932_;
}
else
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
v_a_1933_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1935_ = v___x_1930_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1930_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1933_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1___boxed(lean_object* v_context_1941_, lean_object* v_bytes_1942_, lean_object* v_a_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v_context_1941_, v_bytes_1942_);
lean_dec_ref(v_bytes_1942_);
lean_dec_ref(v_context_1941_);
return v_res_1944_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1945_; uint8_t v___x_1946_; uint64_t v___x_1947_; 
v___x_1945_ = 8ULL;
v___x_1946_ = 0;
v___x_1947_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v___x_1946_, v___x_1945_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(lean_object* v_o_1948_, lean_object* v_name_1949_, lean_object* v_args_1950_){
_start:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; uint64_t v___x_1955_; lean_object* v___x_1956_; 
v___x_1952_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_1953_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1953_, 0, v_o_1948_);
lean_ctor_set(v___x_1953_, 1, v___x_1952_);
lean_inc_ref(v_name_1949_);
v___x_1954_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1954_, 0, v_name_1949_);
v___x_1955_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0);
v___x_1956_ = l_Lasm_JS_Value_invokeRaw(v___x_1953_, v___x_1954_, v_args_1950_, v___x_1955_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v_a_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
lean_inc(v_a_1957_);
lean_dec_ref_known(v___x_1956_, 1);
v___x_1958_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_1959_ = lean_string_append(v___x_1958_, v_name_1949_);
lean_dec_ref(v_name_1949_);
v___x_1960_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1959_, v_a_1957_);
lean_dec(v_a_1957_);
lean_dec_ref(v___x_1959_);
return v___x_1960_;
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_dec_ref(v_name_1949_);
v_a_1961_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1956_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1956_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___boxed(lean_object* v_o_1969_, lean_object* v_name_1970_, lean_object* v_args_1971_, lean_object* v_a_1972_){
_start:
{
lean_object* v_res_1973_; 
v_res_1973_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_o_1969_, v_name_1970_, v_args_1971_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get(lean_object* v_self_1975_, lean_object* v_name_1976_){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_get___closed__0));
v___x_1979_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1979_, 0, v_name_1976_);
v___x_1980_ = lean_unsigned_to_nat(1u);
v___x_1981_ = lean_mk_empty_array_with_capacity(v___x_1980_);
v___x_1982_ = lean_array_push(v___x_1981_, v___x_1979_);
v___x_1983_ = l_Lasm_JS_Web_Support_args(v___x_1982_);
v___x_1984_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_self_1975_, v___x_1978_, v___x_1983_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get___boxed(lean_object* v_self_1985_, lean_object* v_name_1986_, lean_object* v_a_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_Lasm_JS_Web_URLSearchParams_get(v_self_1985_, v_name_1986_);
return v_res_1988_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(uint8_t v_await_1989_, uint64_t v_extra_1990_){
_start:
{
uint64_t v___x_1991_; uint64_t v___y_1993_; 
v___x_1991_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1989_ == 0)
{
uint64_t v___x_1996_; 
v___x_1996_ = 0ULL;
v___y_1993_ = v___x_1996_;
goto v___jp_1992_;
}
else
{
uint64_t v___x_1997_; 
v___x_1997_ = 2ULL;
v___y_1993_ = v___x_1997_;
goto v___jp_1992_;
}
v___jp_1992_:
{
uint64_t v___x_1994_; uint64_t v___x_1995_; 
v___x_1994_ = lean_uint64_lor(v___x_1991_, v___y_1993_);
v___x_1995_ = lean_uint64_lor(v___x_1994_, v_extra_1990_);
return v___x_1995_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0___boxed(lean_object* v_await_1998_, lean_object* v_extra_1999_){
_start:
{
uint8_t v_await_boxed_2000_; uint64_t v_extra_boxed_2001_; uint64_t v_res_2002_; lean_object* v_r_2003_; 
v_await_boxed_2000_ = lean_unbox(v_await_1998_);
v_extra_boxed_2001_ = lean_unbox_uint64(v_extra_1999_);
lean_dec_ref(v_extra_1999_);
v_res_2002_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v_await_boxed_2000_, v_extra_boxed_2001_);
v_r_2003_ = lean_box_uint64(v_res_2002_);
return v_r_2003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2006_, size_t v_i_2007_, lean_object* v_bs_2008_){
_start:
{
uint8_t v___x_2009_; 
v___x_2009_ = lean_usize_dec_lt(v_i_2007_, v_sz_2006_);
if (v___x_2009_ == 0)
{
lean_object* v___x_2010_; 
v___x_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2010_, 0, v_bs_2008_);
return v___x_2010_;
}
else
{
lean_object* v_v_2011_; 
v_v_2011_ = lean_array_uget_borrowed(v_bs_2008_, v_i_2007_);
if (lean_obj_tag(v_v_2011_) == 4)
{
lean_object* v_s_2012_; lean_object* v___x_2013_; lean_object* v_bs_x27_2014_; size_t v___x_2015_; size_t v___x_2016_; lean_object* v___x_2017_; 
v_s_2012_ = lean_ctor_get(v_v_2011_, 0);
lean_inc_ref(v_s_2012_);
v___x_2013_ = lean_unsigned_to_nat(0u);
v_bs_x27_2014_ = lean_array_uset(v_bs_2008_, v_i_2007_, v___x_2013_);
v___x_2015_ = ((size_t)1ULL);
v___x_2016_ = lean_usize_add(v_i_2007_, v___x_2015_);
v___x_2017_ = lean_array_uset(v_bs_x27_2014_, v_i_2007_, v_s_2012_);
v_i_2007_ = v___x_2016_;
v_bs_2008_ = v___x_2017_;
goto _start;
}
else
{
lean_object* v___x_2019_; 
lean_dec_ref(v_bs_2008_);
v___x_2019_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2019_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2020_, lean_object* v_i_2021_, lean_object* v_bs_2022_){
_start:
{
size_t v_sz_boxed_2023_; size_t v_i_boxed_2024_; lean_object* v_res_2025_; 
v_sz_boxed_2023_ = lean_unbox_usize(v_sz_2020_);
lean_dec(v_sz_2020_);
v_i_boxed_2024_ = lean_unbox_usize(v_i_2021_);
lean_dec(v_i_2021_);
v_res_2025_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2023_, v_i_boxed_2024_, v_bs_2022_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(lean_object* v_context_2030_, lean_object* v_d_2031_){
_start:
{
lean_object* v___y_2034_; lean_object* v___y_2035_; lean_object* v___y_2040_; lean_object* v_received_2041_; lean_object* v___y_2060_; lean_object* v_a_2063_; 
if (lean_obj_tag(v_d_2031_) == 7)
{
lean_object* v_items_2087_; size_t v_sz_2088_; size_t v___x_2089_; lean_object* v___x_2090_; 
v_items_2087_ = lean_ctor_get(v_d_2031_, 0);
v_sz_2088_ = lean_array_size(v_items_2087_);
v___x_2089_ = ((size_t)0ULL);
lean_inc_ref(v_items_2087_);
v___x_2090_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_2088_, v___x_2089_, v_items_2087_);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v_a_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; uint8_t v___x_2095_; 
v_a_2091_ = lean_ctor_get(v___x_2090_, 0);
lean_inc(v_a_2091_);
lean_dec_ref_known(v___x_2090_, 1);
v___x_2092_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__3));
v___x_2093_ = lean_string_utf8_byte_size(v_a_2091_);
v___x_2094_ = lean_unsigned_to_nat(0u);
v___x_2095_ = lean_nat_dec_eq(v___x_2093_, v___x_2094_);
if (v___x_2095_ == 0)
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2096_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2097_ = lean_string_append(v___x_2096_, v_a_2091_);
lean_dec(v_a_2091_);
v___x_2098_ = lean_string_append(v___x_2092_, v___x_2097_);
lean_dec_ref(v___x_2097_);
v_a_2063_ = v___x_2098_;
goto v___jp_2062_;
}
else
{
lean_dec(v_a_2091_);
v_a_2063_ = v___x_2092_;
goto v___jp_2062_;
}
}
else
{
lean_object* v_a_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2106_; 
lean_dec_ref_known(v_d_2031_, 1);
v_a_2099_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2101_ = v___x_2090_;
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_a_2099_);
lean_dec(v___x_2090_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2104_; 
if (v_isShared_2102_ == 0)
{
lean_ctor_set_tag(v___x_2101_, 0);
v___x_2104_ = v___x_2101_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_a_2099_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
}
else
{
lean_object* v___x_2107_; 
v___x_2107_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2063_ = v___x_2107_;
goto v___jp_2062_;
}
v___jp_2033_:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___x_2036_ = lean_string_append(v___y_2034_, v___y_2035_);
lean_dec_ref(v___y_2035_);
v___x_2037_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2036_);
v___x_2038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2037_);
return v___x_2038_;
}
v___jp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; 
v___x_2042_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2043_ = lean_string_append(v___x_2042_, v_context_2030_);
v___x_2044_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2045_ = lean_string_append(v___x_2043_, v___x_2044_);
v___x_2046_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__0));
v___x_2047_ = lean_string_append(v___x_2045_, v___x_2046_);
v___x_2048_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2049_ = lean_string_append(v___x_2047_, v___x_2048_);
v___x_2050_ = lean_string_append(v___x_2049_, v_received_2041_);
lean_dec_ref(v_received_2041_);
v___x_2051_ = lean_string_utf8_byte_size(v___y_2040_);
v___x_2052_ = lean_unsigned_to_nat(0u);
v___x_2053_ = lean_nat_dec_eq(v___x_2051_, v___x_2052_);
if (v___x_2053_ == 0)
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2054_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2055_ = lean_string_append(v___x_2054_, v___y_2040_);
lean_dec_ref(v___y_2040_);
v___x_2056_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2057_ = lean_string_append(v___x_2055_, v___x_2056_);
v___y_2034_ = v___x_2050_;
v___y_2035_ = v___x_2057_;
goto v___jp_2033_;
}
else
{
lean_object* v___x_2058_; 
lean_dec_ref(v___y_2040_);
v___x_2058_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2034_ = v___x_2050_;
v___y_2035_ = v___x_2058_;
goto v___jp_2033_;
}
}
v___jp_2059_:
{
lean_object* v___x_2061_; 
v___x_2061_ = l_Lasm_JS_Data_describe(v_d_2031_);
v___y_2040_ = v___y_2060_;
v_received_2041_ = v___x_2061_;
goto v___jp_2039_;
}
v___jp_2062_:
{
if (lean_obj_tag(v_d_2031_) == 9)
{
lean_object* v_value_2064_; lean_object* v_description_2065_; lean_object* v___x_2066_; uint8_t v___x_2067_; 
v_value_2064_ = lean_ctor_get(v_d_2031_, 0);
v_description_2065_ = lean_ctor_get(v_d_2031_, 1);
v___x_2066_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2067_ = lean_string_dec_eq(v_description_2065_, v___x_2066_);
if (v___x_2067_ == 0)
{
v___y_2060_ = v_a_2063_;
goto v___jp_2059_;
}
else
{
lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2084_; 
lean_inc(v_value_2064_);
v_isSharedCheck_2084_ = !lean_is_exclusive(v_d_2031_);
if (v_isSharedCheck_2084_ == 0)
{
lean_object* v_unused_2085_; lean_object* v_unused_2086_; 
v_unused_2085_ = lean_ctor_get(v_d_2031_, 1);
lean_dec(v_unused_2085_);
v_unused_2086_ = lean_ctor_get(v_d_2031_, 0);
lean_dec(v_unused_2086_);
v___x_2069_ = v_d_2031_;
v_isShared_2070_ = v_isSharedCheck_2084_;
goto v_resetjp_2068_;
}
else
{
lean_dec(v_d_2031_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2084_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
uint32_t v___x_2071_; uint64_t v___x_2072_; lean_object* v___x_2074_; 
v___x_2071_ = 206;
v___x_2072_ = 0ULL;
lean_inc(v_value_2064_);
if (v_isShared_2070_ == 0)
{
lean_ctor_set(v___x_2069_, 1, v___x_2066_);
v___x_2074_ = v___x_2069_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_value_2064_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v___x_2066_);
v___x_2074_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
uint32_t v___x_2075_; lean_object* v___x_2076_; 
v___x_2075_ = lasm_js_value_handle(v_value_2064_);
lean_dec(v_value_2064_);
v___x_2076_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2071_, v___x_2072_, v___x_2074_, v___x_2075_);
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_object* v_a_2077_; uint8_t v___x_2078_; 
v_a_2077_ = lean_ctor_get(v___x_2076_, 0);
lean_inc(v_a_2077_);
lean_dec_ref_known(v___x_2076_, 1);
v___x_2078_ = lean_string_validate_utf8(v_a_2077_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; lean_object* v___x_2080_; 
lean_dec(v_a_2077_);
v___x_2079_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6);
v___x_2080_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2079_);
v___y_2040_ = v_a_2063_;
v_received_2041_ = v___x_2080_;
goto v___jp_2039_;
}
else
{
lean_object* v___x_2081_; 
v___x_2081_ = lean_string_from_utf8_unchecked(v_a_2077_);
v___y_2040_ = v_a_2063_;
v_received_2041_ = v___x_2081_;
goto v___jp_2039_;
}
}
else
{
lean_object* v___x_2082_; 
lean_dec_ref_known(v___x_2076_, 1);
v___x_2082_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v___y_2040_ = v_a_2063_;
v_received_2041_ = v___x_2082_;
goto v___jp_2039_;
}
}
}
}
}
else
{
v___y_2060_ = v_a_2063_;
goto v___jp_2059_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2108_, lean_object* v_d_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2108_, v_d_2109_);
lean_dec_ref(v_context_2108_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(lean_object* v_context_2112_, lean_object* v_bytes_2113_){
_start:
{
lean_object* v___x_2115_; 
v___x_2115_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2113_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2117_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2115_, 1);
v___x_2117_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2112_, v_a_2116_);
return v___x_2117_;
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
v_a_2118_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2120_ = v___x_2115_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2115_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2118_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1___boxed(lean_object* v_context_2126_, lean_object* v_bytes_2127_, lean_object* v_a_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v_context_2126_, v_bytes_2127_);
lean_dec_ref(v_bytes_2127_);
lean_dec_ref(v_context_2126_);
return v_res_2129_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2130_; uint8_t v___x_2131_; uint64_t v___x_2132_; 
v___x_2130_ = 8ULL;
v___x_2131_ = 0;
v___x_2132_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v___x_2131_, v___x_2130_);
return v___x_2132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(lean_object* v_o_2133_, lean_object* v_name_2134_, lean_object* v_args_2135_){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; uint64_t v___x_2140_; lean_object* v___x_2141_; 
v___x_2137_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2138_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2138_, 0, v_o_2133_);
lean_ctor_set(v___x_2138_, 1, v___x_2137_);
lean_inc_ref(v_name_2134_);
v___x_2139_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2139_, 0, v_name_2134_);
v___x_2140_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0);
v___x_2141_ = l_Lasm_JS_Value_invokeRaw(v___x_2138_, v___x_2139_, v_args_2135_, v___x_2140_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2141_, 1);
v___x_2143_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_2144_ = lean_string_append(v___x_2143_, v_name_2134_);
lean_dec_ref(v_name_2134_);
v___x_2145_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v___x_2144_, v_a_2142_);
lean_dec(v_a_2142_);
lean_dec_ref(v___x_2144_);
return v___x_2145_;
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
lean_dec_ref(v_name_2134_);
v_a_2146_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2141_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2141_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___boxed(lean_object* v_o_2154_, lean_object* v_name_2155_, lean_object* v_args_2156_, lean_object* v_a_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_o_2154_, v_name_2155_, v_args_2156_);
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll(lean_object* v_self_2160_, lean_object* v_name_2161_){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2163_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_getAll___closed__0));
v___x_2164_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2164_, 0, v_name_2161_);
v___x_2165_ = lean_unsigned_to_nat(1u);
v___x_2166_ = lean_mk_empty_array_with_capacity(v___x_2165_);
v___x_2167_ = lean_array_push(v___x_2166_, v___x_2164_);
v___x_2168_ = l_Lasm_JS_Web_Support_args(v___x_2167_);
v___x_2169_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_self_2160_, v___x_2163_, v___x_2168_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll___boxed(lean_object* v_self_2170_, lean_object* v_name_2171_, lean_object* v_a_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = l_Lasm_JS_Web_URLSearchParams_getAll(v_self_2170_, v_name_2171_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has(lean_object* v_self_2175_, lean_object* v_name_2176_, lean_object* v_value_2177_){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2179_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_has___closed__0));
v___x_2180_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2180_, 0, v_name_2176_);
v___x_2181_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_2177_);
v___x_2182_ = lean_unsigned_to_nat(2u);
v___x_2183_ = lean_mk_empty_array_with_capacity(v___x_2182_);
v___x_2184_ = lean_array_push(v___x_2183_, v___x_2180_);
v___x_2185_ = lean_array_push(v___x_2184_, v___x_2181_);
v___x_2186_ = l_Lasm_JS_Web_Support_args(v___x_2185_);
v___x_2187_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2175_, v___x_2179_, v___x_2186_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has___boxed(lean_object* v_self_2188_, lean_object* v_name_2189_, lean_object* v_value_2190_, lean_object* v_a_2191_){
_start:
{
lean_object* v_res_2192_; 
v_res_2192_ = l_Lasm_JS_Web_URLSearchParams_has(v_self_2188_, v_name_2189_, v_value_2190_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set(lean_object* v_self_2194_, lean_object* v_name_2195_, lean_object* v_value_2196_){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
v___x_2198_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_set___closed__0));
v___x_2199_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2199_, 0, v_name_2195_);
v___x_2200_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2200_, 0, v_value_2196_);
v___x_2201_ = lean_unsigned_to_nat(2u);
v___x_2202_ = lean_mk_empty_array_with_capacity(v___x_2201_);
v___x_2203_ = lean_array_push(v___x_2202_, v___x_2199_);
v___x_2204_ = lean_array_push(v___x_2203_, v___x_2200_);
v___x_2205_ = l_Lasm_JS_Web_Support_args(v___x_2204_);
v___x_2206_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2194_, v___x_2198_, v___x_2205_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set___boxed(lean_object* v_self_2207_, lean_object* v_name_2208_, lean_object* v_value_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lasm_JS_Web_URLSearchParams_set(v_self_2207_, v_name_2208_, v_value_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort(lean_object* v_self_2213_){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2215_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_sort___closed__0));
v___x_2216_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_2217_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2213_, v___x_2215_, v___x_2216_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort___boxed(lean_object* v_self_2218_, lean_object* v_a_2219_){
_start:
{
lean_object* v_res_2220_; 
v_res_2220_ = l_Lasm_JS_Web_URLSearchParams_sort(v_self_2218_);
return v_res_2220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(size_t v_sz_2224_, size_t v_i_2225_, lean_object* v_bs_2226_){
_start:
{
uint8_t v___x_2229_; 
v___x_2229_ = lean_usize_dec_lt(v_i_2225_, v_sz_2224_);
if (v___x_2229_ == 0)
{
lean_object* v___x_2230_; 
v___x_2230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2230_, 0, v_bs_2226_);
return v___x_2230_;
}
else
{
lean_object* v_v_2231_; 
v_v_2231_ = lean_array_uget_borrowed(v_bs_2226_, v_i_2225_);
if (lean_obj_tag(v_v_2231_) == 7)
{
lean_object* v_items_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; uint8_t v___x_2235_; 
v_items_2232_ = lean_ctor_get(v_v_2231_, 0);
v___x_2233_ = lean_array_get_size(v_items_2232_);
v___x_2234_ = lean_unsigned_to_nat(2u);
v___x_2235_ = lean_nat_dec_eq(v___x_2233_, v___x_2234_);
if (v___x_2235_ == 0)
{
lean_dec_ref(v_bs_2226_);
goto v___jp_2227_;
}
else
{
lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2236_ = lean_unsigned_to_nat(0u);
v___x_2237_ = lean_array_fget_borrowed(v_items_2232_, v___x_2236_);
if (lean_obj_tag(v___x_2237_) == 4)
{
lean_object* v_s_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v_s_2238_ = lean_ctor_get(v___x_2237_, 0);
lean_inc_ref(v_s_2238_);
v___x_2239_ = lean_unsigned_to_nat(1u);
v___x_2240_ = lean_array_fget_borrowed(v_items_2232_, v___x_2239_);
if (lean_obj_tag(v___x_2240_) == 4)
{
lean_object* v_s_2241_; lean_object* v_bs_x27_2242_; lean_object* v___x_2243_; size_t v___x_2244_; size_t v___x_2245_; lean_object* v___x_2246_; 
v_s_2241_ = lean_ctor_get(v___x_2240_, 0);
lean_inc_ref(v_s_2241_);
v_bs_x27_2242_ = lean_array_uset(v_bs_2226_, v_i_2225_, v___x_2236_);
v___x_2243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2243_, 0, v_s_2238_);
lean_ctor_set(v___x_2243_, 1, v_s_2241_);
v___x_2244_ = ((size_t)1ULL);
v___x_2245_ = lean_usize_add(v_i_2225_, v___x_2244_);
v___x_2246_ = lean_array_uset(v_bs_x27_2242_, v_i_2225_, v___x_2243_);
v_i_2225_ = v___x_2245_;
v_bs_2226_ = v___x_2246_;
goto _start;
}
else
{
lean_object* v___x_2248_; 
lean_dec_ref(v_s_2238_);
lean_dec_ref(v_bs_2226_);
v___x_2248_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2248_;
}
}
else
{
lean_object* v___x_2249_; 
lean_dec_ref(v_bs_2226_);
v___x_2249_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2249_;
}
}
}
else
{
lean_dec_ref(v_bs_2226_);
goto v___jp_2227_;
}
}
v___jp_2227_:
{
lean_object* v___x_2228_; 
v___x_2228_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__1));
return v___x_2228_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2250_, lean_object* v_i_2251_, lean_object* v_bs_2252_){
_start:
{
size_t v_sz_boxed_2253_; size_t v_i_boxed_2254_; lean_object* v_res_2255_; 
v_sz_boxed_2253_ = lean_unbox_usize(v_sz_2250_);
lean_dec(v_sz_2250_);
v_i_boxed_2254_ = lean_unbox_usize(v_i_2251_);
lean_dec(v_i_2251_);
v_res_2255_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_2253_, v_i_boxed_2254_, v_bs_2252_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(lean_object* v_context_2258_, lean_object* v_d_2259_){
_start:
{
lean_object* v___y_2262_; lean_object* v___y_2263_; lean_object* v___y_2268_; lean_object* v_received_2269_; lean_object* v___y_2288_; lean_object* v_a_2291_; 
if (lean_obj_tag(v_d_2259_) == 7)
{
lean_object* v_items_2315_; size_t v_sz_2316_; size_t v___x_2317_; lean_object* v___x_2318_; 
v_items_2315_ = lean_ctor_get(v_d_2259_, 0);
v_sz_2316_ = lean_array_size(v_items_2315_);
v___x_2317_ = ((size_t)0ULL);
lean_inc_ref(v_items_2315_);
v___x_2318_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_2316_, v___x_2317_, v_items_2315_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; uint8_t v___x_2323_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc(v_a_2319_);
lean_dec_ref_known(v___x_2318_, 1);
v___x_2320_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__1));
v___x_2321_ = lean_string_utf8_byte_size(v_a_2319_);
v___x_2322_ = lean_unsigned_to_nat(0u);
v___x_2323_ = lean_nat_dec_eq(v___x_2321_, v___x_2322_);
if (v___x_2323_ == 0)
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2324_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2325_ = lean_string_append(v___x_2324_, v_a_2319_);
lean_dec(v_a_2319_);
v___x_2326_ = lean_string_append(v___x_2320_, v___x_2325_);
lean_dec_ref(v___x_2325_);
v_a_2291_ = v___x_2326_;
goto v___jp_2290_;
}
else
{
lean_dec(v_a_2319_);
v_a_2291_ = v___x_2320_;
goto v___jp_2290_;
}
}
else
{
lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2334_; 
lean_dec_ref_known(v_d_2259_, 1);
v_a_2327_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2329_ = v___x_2318_;
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2318_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2332_; 
if (v_isShared_2330_ == 0)
{
lean_ctor_set_tag(v___x_2329_, 0);
v___x_2332_ = v___x_2329_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_a_2327_);
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
else
{
lean_object* v___x_2335_; 
v___x_2335_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2291_ = v___x_2335_;
goto v___jp_2290_;
}
v___jp_2261_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2264_ = lean_string_append(v___y_2262_, v___y_2263_);
lean_dec_ref(v___y_2263_);
v___x_2265_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2264_);
v___x_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
return v___x_2266_;
}
v___jp_2267_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; uint8_t v___x_2281_; 
v___x_2270_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2271_ = lean_string_append(v___x_2270_, v_context_2258_);
v___x_2272_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2273_ = lean_string_append(v___x_2271_, v___x_2272_);
v___x_2274_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__0));
v___x_2275_ = lean_string_append(v___x_2273_, v___x_2274_);
v___x_2276_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2277_ = lean_string_append(v___x_2275_, v___x_2276_);
v___x_2278_ = lean_string_append(v___x_2277_, v_received_2269_);
lean_dec_ref(v_received_2269_);
v___x_2279_ = lean_string_utf8_byte_size(v___y_2268_);
v___x_2280_ = lean_unsigned_to_nat(0u);
v___x_2281_ = lean_nat_dec_eq(v___x_2279_, v___x_2280_);
if (v___x_2281_ == 0)
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2282_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2283_ = lean_string_append(v___x_2282_, v___y_2268_);
lean_dec_ref(v___y_2268_);
v___x_2284_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2285_ = lean_string_append(v___x_2283_, v___x_2284_);
v___y_2262_ = v___x_2278_;
v___y_2263_ = v___x_2285_;
goto v___jp_2261_;
}
else
{
lean_object* v___x_2286_; 
lean_dec_ref(v___y_2268_);
v___x_2286_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2262_ = v___x_2278_;
v___y_2263_ = v___x_2286_;
goto v___jp_2261_;
}
}
v___jp_2287_:
{
lean_object* v___x_2289_; 
v___x_2289_ = l_Lasm_JS_Data_describe(v_d_2259_);
v___y_2268_ = v___y_2288_;
v_received_2269_ = v___x_2289_;
goto v___jp_2267_;
}
v___jp_2290_:
{
if (lean_obj_tag(v_d_2259_) == 9)
{
lean_object* v_value_2292_; lean_object* v_description_2293_; lean_object* v___x_2294_; uint8_t v___x_2295_; 
v_value_2292_ = lean_ctor_get(v_d_2259_, 0);
v_description_2293_ = lean_ctor_get(v_d_2259_, 1);
v___x_2294_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2295_ = lean_string_dec_eq(v_description_2293_, v___x_2294_);
if (v___x_2295_ == 0)
{
v___y_2288_ = v_a_2291_;
goto v___jp_2287_;
}
else
{
lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2312_; 
lean_inc(v_value_2292_);
v_isSharedCheck_2312_ = !lean_is_exclusive(v_d_2259_);
if (v_isSharedCheck_2312_ == 0)
{
lean_object* v_unused_2313_; lean_object* v_unused_2314_; 
v_unused_2313_ = lean_ctor_get(v_d_2259_, 1);
lean_dec(v_unused_2313_);
v_unused_2314_ = lean_ctor_get(v_d_2259_, 0);
lean_dec(v_unused_2314_);
v___x_2297_ = v_d_2259_;
v_isShared_2298_ = v_isSharedCheck_2312_;
goto v_resetjp_2296_;
}
else
{
lean_dec(v_d_2259_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2312_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
uint32_t v___x_2299_; uint64_t v___x_2300_; lean_object* v___x_2302_; 
v___x_2299_ = 206;
v___x_2300_ = 0ULL;
lean_inc(v_value_2292_);
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 1, v___x_2294_);
v___x_2302_ = v___x_2297_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_value_2292_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v___x_2294_);
v___x_2302_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
uint32_t v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = lasm_js_value_handle(v_value_2292_);
lean_dec(v_value_2292_);
v___x_2304_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2299_, v___x_2300_, v___x_2302_, v___x_2303_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_object* v_a_2305_; uint8_t v___x_2306_; 
v_a_2305_ = lean_ctor_get(v___x_2304_, 0);
lean_inc(v_a_2305_);
lean_dec_ref_known(v___x_2304_, 1);
v___x_2306_ = lean_string_validate_utf8(v_a_2305_);
if (v___x_2306_ == 0)
{
lean_object* v___x_2307_; lean_object* v___x_2308_; 
lean_dec(v_a_2305_);
v___x_2307_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6);
v___x_2308_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2307_);
v___y_2268_ = v_a_2291_;
v_received_2269_ = v___x_2308_;
goto v___jp_2267_;
}
else
{
lean_object* v___x_2309_; 
v___x_2309_ = lean_string_from_utf8_unchecked(v_a_2305_);
v___y_2268_ = v_a_2291_;
v_received_2269_ = v___x_2309_;
goto v___jp_2267_;
}
}
else
{
lean_object* v___x_2310_; 
lean_dec_ref_known(v___x_2304_, 1);
v___x_2310_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v___y_2268_ = v_a_2291_;
v_received_2269_ = v___x_2310_;
goto v___jp_2267_;
}
}
}
}
}
else
{
v___y_2288_ = v_a_2291_;
goto v___jp_2287_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2336_, lean_object* v_d_2337_, lean_object* v_a_2338_){
_start:
{
lean_object* v_res_2339_; 
v_res_2339_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v_context_2336_, v_d_2337_);
lean_dec_ref(v_context_2336_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(lean_object* v_b_2340_, lean_object* v_args_2341_, uint8_t v_await_2342_){
_start:
{
uint64_t v___y_2345_; uint64_t v___y_2346_; uint64_t v___x_2381_; uint64_t v___y_2383_; 
v___x_2381_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2342_ == 0)
{
uint64_t v___x_2388_; 
v___x_2388_ = 0ULL;
v___y_2383_ = v___x_2388_;
goto v___jp_2382_;
}
else
{
uint64_t v___x_2389_; 
v___x_2389_ = 2ULL;
v___y_2383_ = v___x_2389_;
goto v___jp_2382_;
}
v___jp_2344_:
{
uint64_t v_flags_2347_; uint32_t v___x_2348_; lean_object* v___x_2349_; uint32_t v___x_2350_; lean_object* v___x_2351_; 
v_flags_2347_ = lean_uint64_lor(v___y_2345_, v___y_2346_);
v___x_2348_ = 214;
v___x_2349_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2340_, v_args_2341_);
v___x_2350_ = 0;
v___x_2351_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2348_, v_flags_2347_, v___x_2349_, v___x_2350_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2353_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
v___x_2353_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2352_);
lean_dec(v_a_2352_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref_known(v___x_2353_, 1);
v___x_2355_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2340_);
v___x_2356_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v___x_2355_, v_a_2354_);
lean_dec_ref(v___x_2355_);
return v___x_2356_;
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
v_a_2357_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2353_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2353_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2380_; 
v_a_2365_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2367_ = v___x_2351_;
v_isShared_2368_ = v_isSharedCheck_2380_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2351_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2380_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2378_; 
v___x_2369_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2370_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2340_);
v___x_2371_ = lean_string_append(v___x_2369_, v___x_2370_);
lean_dec_ref(v___x_2370_);
v___x_2372_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2373_ = lean_string_append(v___x_2371_, v___x_2372_);
v___x_2374_ = lean_io_error_to_string(v_a_2365_);
v___x_2375_ = lean_string_append(v___x_2373_, v___x_2374_);
lean_dec_ref(v___x_2374_);
v___x_2376_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 0, v___x_2376_);
v___x_2378_ = v___x_2367_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2376_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
}
v___jp_2382_:
{
uint8_t v_construct_2384_; uint64_t v___x_2385_; 
v_construct_2384_ = lean_ctor_get_uint8(v_b_2340_, sizeof(void*)*4);
v___x_2385_ = lean_uint64_lor(v___x_2381_, v___y_2383_);
if (v_construct_2384_ == 0)
{
uint64_t v___x_2386_; 
v___x_2386_ = 0ULL;
v___y_2345_ = v___x_2385_;
v___y_2346_ = v___x_2386_;
goto v___jp_2344_;
}
else
{
uint64_t v___x_2387_; 
v___x_2387_ = 4ULL;
v___y_2345_ = v___x_2385_;
v___y_2346_ = v___x_2387_;
goto v___jp_2344_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0___boxed(lean_object* v_b_2390_, lean_object* v_args_2391_, lean_object* v_await_2392_, lean_object* v_a_2393_){
_start:
{
uint8_t v_await_boxed_2394_; lean_object* v_res_2395_; 
v_await_boxed_2394_ = lean_unbox(v_await_2392_);
v_res_2395_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v_b_2390_, v_args_2391_, v_await_boxed_2394_);
lean_dec_ref(v_b_2390_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(lean_object* v_o_2404_, lean_object* v_method_2405_){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_2408_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2404_, v_method_2405_, v___x_2407_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_object* v_a_2409_; uint8_t v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v_a_2409_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_a_2409_);
lean_dec_ref_known(v___x_2408_, 1);
v___x_2410_ = 0;
v___x_2411_ = lean_unsigned_to_nat(1u);
v___x_2412_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2));
v___x_2413_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2414_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2414_, 0, v_a_2409_);
lean_ctor_set(v___x_2414_, 1, v___x_2413_);
v___x_2415_ = lean_mk_empty_array_with_capacity(v___x_2411_);
v___x_2416_ = lean_array_push(v___x_2415_, v___x_2414_);
v___x_2417_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v___x_2412_, v___x_2416_, v___x_2410_);
return v___x_2417_;
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
v_a_2418_ = lean_ctor_get(v___x_2408_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2408_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2408_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2408_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___boxed(lean_object* v_o_2426_, lean_object* v_method_2427_, lean_object* v_a_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_o_2426_, v_method_2427_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries(lean_object* v_self_2431_){
_start:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2433_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_entries___closed__0));
v___x_2434_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_self_2431_, v___x_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries___boxed(lean_object* v_self_2435_, lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lasm_JS_Web_URLSearchParams_entries(v_self_2435_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(lean_object* v_b_2438_, lean_object* v_args_2439_, uint8_t v_await_2440_){
_start:
{
uint64_t v___y_2443_; uint64_t v___y_2444_; uint64_t v___x_2479_; uint64_t v___y_2481_; 
v___x_2479_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2440_ == 0)
{
uint64_t v___x_2486_; 
v___x_2486_ = 0ULL;
v___y_2481_ = v___x_2486_;
goto v___jp_2480_;
}
else
{
uint64_t v___x_2487_; 
v___x_2487_ = 2ULL;
v___y_2481_ = v___x_2487_;
goto v___jp_2480_;
}
v___jp_2442_:
{
uint64_t v_flags_2445_; uint32_t v___x_2446_; lean_object* v___x_2447_; uint32_t v___x_2448_; lean_object* v___x_2449_; 
v_flags_2445_ = lean_uint64_lor(v___y_2443_, v___y_2444_);
v___x_2446_ = 214;
v___x_2447_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2438_, v_args_2439_);
v___x_2448_ = 0;
v___x_2449_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2446_, v_flags_2445_, v___x_2447_, v___x_2448_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v_a_2450_; lean_object* v___x_2451_; 
v_a_2450_ = lean_ctor_get(v___x_2449_, 0);
lean_inc(v_a_2450_);
lean_dec_ref_known(v___x_2449_, 1);
v___x_2451_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2450_);
lean_dec(v_a_2450_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_a_2452_);
lean_dec_ref_known(v___x_2451_, 1);
v___x_2453_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2438_);
v___x_2454_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v___x_2453_, v_a_2452_);
lean_dec_ref(v___x_2453_);
return v___x_2454_;
}
else
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2462_; 
v_a_2455_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2462_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2462_ == 0)
{
v___x_2457_ = v___x_2451_;
v_isShared_2458_ = v_isSharedCheck_2462_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v___x_2451_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2462_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
lean_object* v___x_2460_; 
if (v_isShared_2458_ == 0)
{
v___x_2460_ = v___x_2457_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v_a_2455_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
}
}
else
{
lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2478_; 
v_a_2463_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2465_ = v___x_2449_;
v_isShared_2466_ = v_isSharedCheck_2478_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2449_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2478_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2476_; 
v___x_2467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2468_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2438_);
v___x_2469_ = lean_string_append(v___x_2467_, v___x_2468_);
lean_dec_ref(v___x_2468_);
v___x_2470_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2471_ = lean_string_append(v___x_2469_, v___x_2470_);
v___x_2472_ = lean_io_error_to_string(v_a_2463_);
v___x_2473_ = lean_string_append(v___x_2471_, v___x_2472_);
lean_dec_ref(v___x_2472_);
v___x_2474_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2473_);
if (v_isShared_2466_ == 0)
{
lean_ctor_set(v___x_2465_, 0, v___x_2474_);
v___x_2476_ = v___x_2465_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v___x_2474_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
}
v___jp_2480_:
{
uint8_t v_construct_2482_; uint64_t v___x_2483_; 
v_construct_2482_ = lean_ctor_get_uint8(v_b_2438_, sizeof(void*)*4);
v___x_2483_ = lean_uint64_lor(v___x_2479_, v___y_2481_);
if (v_construct_2482_ == 0)
{
uint64_t v___x_2484_; 
v___x_2484_ = 0ULL;
v___y_2443_ = v___x_2483_;
v___y_2444_ = v___x_2484_;
goto v___jp_2442_;
}
else
{
uint64_t v___x_2485_; 
v___x_2485_ = 4ULL;
v___y_2443_ = v___x_2483_;
v___y_2444_ = v___x_2485_;
goto v___jp_2442_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0___boxed(lean_object* v_b_2488_, lean_object* v_args_2489_, lean_object* v_await_2490_, lean_object* v_a_2491_){
_start:
{
uint8_t v_await_boxed_2492_; lean_object* v_res_2493_; 
v_await_boxed_2492_ = lean_unbox(v_await_2490_);
v_res_2493_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v_b_2488_, v_args_2489_, v_await_boxed_2492_);
lean_dec_ref(v_b_2488_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(lean_object* v_o_2494_, lean_object* v_method_2495_){
_start:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2497_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_2498_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2494_, v_method_2495_, v___x_2497_);
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_object* v_a_2499_; uint8_t v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v_a_2499_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_a_2499_);
lean_dec_ref_known(v___x_2498_, 1);
v___x_2500_ = 0;
v___x_2501_ = lean_unsigned_to_nat(1u);
v___x_2502_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2));
v___x_2503_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2504_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2504_, 0, v_a_2499_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
v___x_2505_ = lean_mk_empty_array_with_capacity(v___x_2501_);
v___x_2506_ = lean_array_push(v___x_2505_, v___x_2504_);
v___x_2507_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v___x_2502_, v___x_2506_, v___x_2500_);
return v___x_2507_;
}
else
{
lean_object* v_a_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2515_; 
v_a_2508_ = lean_ctor_get(v___x_2498_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2510_ = v___x_2498_;
v_isShared_2511_ = v_isSharedCheck_2515_;
goto v_resetjp_2509_;
}
else
{
lean_inc(v_a_2508_);
lean_dec(v___x_2498_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2515_;
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
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_a_2508_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0___boxed(lean_object* v_o_2516_, lean_object* v_method_2517_, lean_object* v_a_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_o_2516_, v_method_2517_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys(lean_object* v_self_2521_){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2523_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_keys___closed__0));
v___x_2524_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2521_, v___x_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys___boxed(lean_object* v_self_2525_, lean_object* v_a_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Lasm_JS_Web_URLSearchParams_keys(v_self_2525_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values(lean_object* v_self_2529_){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_values___closed__0));
v___x_2532_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2529_, v___x_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values___boxed(lean_object* v_self_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lasm_JS_Web_URLSearchParams_values(v_self_2533_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(lean_object* v_x_2536_){
_start:
{
if (lean_obj_tag(v_x_2536_) == 0)
{
lean_object* v___x_2537_; 
v___x_2537_ = lean_box(0);
return v___x_2537_;
}
else
{
lean_object* v_val_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
v_val_2538_ = lean_ctor_get(v_x_2536_, 0);
v___x_2539_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0));
v___x_2540_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2538_);
v___x_2541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2539_);
lean_ctor_set(v___x_2541_, 1, v___x_2540_);
v___x_2542_ = lean_unsigned_to_nat(1u);
v___x_2543_ = lean_mk_empty_array_with_capacity(v___x_2542_);
v___x_2544_ = lean_array_push(v___x_2543_, v___x_2541_);
v___x_2545_ = l_Lasm_JS_Web_Support_fields(v___x_2544_);
lean_dec_ref(v___x_2544_);
return v___x_2545_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0___boxed(lean_object* v_x_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_x_2546_);
lean_dec(v_x_2546_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(lean_object* v_context_2548_, lean_object* v_d_2549_){
_start:
{
lean_object* v_received_2552_; 
if (lean_obj_tag(v_d_2549_) == 9)
{
lean_object* v_value_2566_; lean_object* v___x_2567_; 
v_value_2566_ = lean_ctor_get(v_d_2549_, 0);
lean_inc(v_value_2566_);
lean_dec_ref_known(v_d_2549_, 2);
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v_value_2566_);
return v___x_2567_;
}
else
{
if (lean_obj_tag(v_d_2549_) == 9)
{
lean_object* v_value_2568_; lean_object* v_description_2569_; lean_object* v___x_2570_; uint8_t v___x_2571_; 
v_value_2568_ = lean_ctor_get(v_d_2549_, 0);
v_description_2569_ = lean_ctor_get(v_d_2549_, 1);
v___x_2570_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2571_ = lean_string_dec_eq(v_description_2569_, v___x_2570_);
if (v___x_2571_ == 0)
{
goto v___jp_2564_;
}
else
{
uint32_t v___x_2572_; uint64_t v___x_2573_; lean_object* v___x_2574_; uint32_t v___x_2575_; lean_object* v___x_2576_; 
lean_inc_n(v_value_2568_, 2);
lean_dec_ref_known(v_d_2549_, 2);
v___x_2572_ = 206;
v___x_2573_ = 0ULL;
v___x_2574_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2574_, 0, v_value_2568_);
lean_ctor_set(v___x_2574_, 1, v___x_2570_);
v___x_2575_ = lasm_js_value_handle(v_value_2568_);
lean_dec(v_value_2568_);
v___x_2576_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2572_, v___x_2573_, v___x_2574_, v___x_2575_);
if (lean_obj_tag(v___x_2576_) == 0)
{
lean_object* v_a_2577_; uint8_t v___x_2578_; 
v_a_2577_ = lean_ctor_get(v___x_2576_, 0);
lean_inc(v_a_2577_);
lean_dec_ref_known(v___x_2576_, 1);
v___x_2578_ = lean_string_validate_utf8(v_a_2577_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; lean_object* v___x_2580_; 
lean_dec(v_a_2577_);
v___x_2579_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6);
v___x_2580_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2579_);
v_received_2552_ = v___x_2580_;
goto v___jp_2551_;
}
else
{
lean_object* v___x_2581_; 
v___x_2581_ = lean_string_from_utf8_unchecked(v_a_2577_);
v_received_2552_ = v___x_2581_;
goto v___jp_2551_;
}
}
else
{
lean_object* v___x_2582_; 
lean_dec_ref_known(v___x_2576_, 1);
v___x_2582_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v_received_2552_ = v___x_2582_;
goto v___jp_2551_;
}
}
}
else
{
goto v___jp_2564_;
}
}
v___jp_2551_:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2553_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2554_ = lean_string_append(v___x_2553_, v_context_2548_);
v___x_2555_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2556_ = lean_string_append(v___x_2554_, v___x_2555_);
v___x_2557_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPattern___closed__0));
v___x_2558_ = lean_string_append(v___x_2556_, v___x_2557_);
v___x_2559_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2560_ = lean_string_append(v___x_2558_, v___x_2559_);
v___x_2561_ = lean_string_append(v___x_2560_, v_received_2552_);
lean_dec_ref(v_received_2552_);
v___x_2562_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
v___x_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2562_);
return v___x_2563_;
}
v___jp_2564_:
{
lean_object* v___x_2565_; 
v___x_2565_ = l_Lasm_JS_Data_describe(v_d_2549_);
v_received_2552_ = v___x_2565_;
goto v___jp_2551_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1___boxed(lean_object* v_context_2583_, lean_object* v_d_2584_, lean_object* v_a_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v_context_2583_, v_d_2584_);
lean_dec_ref(v_context_2583_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(lean_object* v_b_2587_, lean_object* v_args_2588_, uint8_t v_await_2589_){
_start:
{
uint64_t v___y_2592_; uint64_t v___y_2593_; uint64_t v___x_2628_; uint64_t v___y_2630_; 
v___x_2628_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2589_ == 0)
{
uint64_t v___x_2635_; 
v___x_2635_ = 0ULL;
v___y_2630_ = v___x_2635_;
goto v___jp_2629_;
}
else
{
uint64_t v___x_2636_; 
v___x_2636_ = 2ULL;
v___y_2630_ = v___x_2636_;
goto v___jp_2629_;
}
v___jp_2591_:
{
uint64_t v_flags_2594_; uint32_t v___x_2595_; lean_object* v___x_2596_; uint32_t v___x_2597_; lean_object* v___x_2598_; 
v_flags_2594_ = lean_uint64_lor(v___y_2592_, v___y_2593_);
v___x_2595_ = 214;
v___x_2596_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2587_, v_args_2588_);
v___x_2597_ = 0;
v___x_2598_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2595_, v_flags_2594_, v___x_2596_, v___x_2597_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; lean_object* v___x_2600_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
lean_dec_ref_known(v___x_2598_, 1);
v___x_2600_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2599_);
lean_dec(v_a_2599_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v___x_2600_, 1);
v___x_2602_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2587_);
v___x_2603_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v___x_2602_, v_a_2601_);
lean_dec_ref(v___x_2602_);
return v___x_2603_;
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2611_; 
v_a_2604_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2606_ = v___x_2600_;
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_a_2604_);
lean_dec(v___x_2600_);
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
else
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2627_; 
v_a_2612_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2614_ = v___x_2598_;
v_isShared_2615_ = v_isSharedCheck_2627_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2598_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2627_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2625_; 
v___x_2616_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2617_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2587_);
v___x_2618_ = lean_string_append(v___x_2616_, v___x_2617_);
lean_dec_ref(v___x_2617_);
v___x_2619_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2620_ = lean_string_append(v___x_2618_, v___x_2619_);
v___x_2621_ = lean_io_error_to_string(v_a_2612_);
v___x_2622_ = lean_string_append(v___x_2620_, v___x_2621_);
lean_dec_ref(v___x_2621_);
v___x_2623_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 0, v___x_2623_);
v___x_2625_ = v___x_2614_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v___x_2623_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
v___jp_2629_:
{
uint8_t v_construct_2631_; uint64_t v___x_2632_; 
v_construct_2631_ = lean_ctor_get_uint8(v_b_2587_, sizeof(void*)*4);
v___x_2632_ = lean_uint64_lor(v___x_2628_, v___y_2630_);
if (v_construct_2631_ == 0)
{
uint64_t v___x_2633_; 
v___x_2633_ = 0ULL;
v___y_2592_ = v___x_2632_;
v___y_2593_ = v___x_2633_;
goto v___jp_2591_;
}
else
{
uint64_t v___x_2634_; 
v___x_2634_ = 4ULL;
v___y_2592_ = v___x_2632_;
v___y_2593_ = v___x_2634_;
goto v___jp_2591_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1___boxed(lean_object* v_b_2637_, lean_object* v_args_2638_, lean_object* v_await_2639_, lean_object* v_a_2640_){
_start:
{
uint8_t v_await_boxed_2641_; lean_object* v_res_2642_; 
v_await_boxed_2641_ = lean_unbox(v_await_2639_);
v_res_2642_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v_b_2637_, v_args_2638_, v_await_boxed_2641_);
lean_dec_ref(v_b_2637_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new(lean_object* v_input_2651_, lean_object* v_baseURL_2652_, lean_object* v_options_2653_){
_start:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___y_2658_; 
v___x_2655_ = lean_unsigned_to_nat(3u);
v___x_2656_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_new___closed__2));
if (lean_obj_tag(v_input_2651_) == 0)
{
lean_object* v_value_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
v_value_2668_ = lean_ctor_get(v_input_2651_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v_input_2651_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v_input_2651_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_value_2668_);
lean_dec(v_input_2651_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
lean_ctor_set_tag(v___x_2670_, 4);
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_value_2668_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
v___y_2658_ = v___x_2673_;
goto v___jp_2657_;
}
}
}
else
{
lean_object* v_value_2676_; lean_object* v_protocol_2677_; lean_object* v_username_2678_; lean_object* v_password_2679_; lean_object* v_hostname_2680_; lean_object* v_port_2681_; lean_object* v_pathname_2682_; lean_object* v_search_2683_; lean_object* v_hash_2684_; lean_object* v_baseURL_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v_value_2676_ = lean_ctor_get(v_input_2651_, 0);
lean_inc_ref(v_value_2676_);
lean_dec_ref_known(v_input_2651_, 1);
v_protocol_2677_ = lean_ctor_get(v_value_2676_, 0);
lean_inc(v_protocol_2677_);
v_username_2678_ = lean_ctor_get(v_value_2676_, 1);
lean_inc(v_username_2678_);
v_password_2679_ = lean_ctor_get(v_value_2676_, 2);
lean_inc(v_password_2679_);
v_hostname_2680_ = lean_ctor_get(v_value_2676_, 3);
lean_inc(v_hostname_2680_);
v_port_2681_ = lean_ctor_get(v_value_2676_, 4);
lean_inc(v_port_2681_);
v_pathname_2682_ = lean_ctor_get(v_value_2676_, 5);
lean_inc(v_pathname_2682_);
v_search_2683_ = lean_ctor_get(v_value_2676_, 6);
lean_inc(v_search_2683_);
v_hash_2684_ = lean_ctor_get(v_value_2676_, 7);
lean_inc(v_hash_2684_);
v_baseURL_2685_ = lean_ctor_get(v_value_2676_, 8);
lean_inc(v_baseURL_2685_);
lean_dec_ref(v_value_2676_);
v___x_2686_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2687_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2677_);
v___x_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2686_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
v___x_2689_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2690_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2678_);
v___x_2691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2689_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2693_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2679_);
v___x_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2692_);
lean_ctor_set(v___x_2694_, 1, v___x_2693_);
v___x_2695_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2696_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2680_);
v___x_2697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2699_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2681_);
v___x_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2698_);
lean_ctor_set(v___x_2700_, 1, v___x_2699_);
v___x_2701_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2702_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2682_);
v___x_2703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2705_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2683_);
v___x_2706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2704_);
lean_ctor_set(v___x_2706_, 1, v___x_2705_);
v___x_2707_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2708_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2684_);
v___x_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2707_);
lean_ctor_set(v___x_2709_, 1, v___x_2708_);
v___x_2710_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2711_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2685_);
v___x_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2710_);
lean_ctor_set(v___x_2712_, 1, v___x_2711_);
v___x_2713_ = lean_unsigned_to_nat(9u);
v___x_2714_ = lean_mk_empty_array_with_capacity(v___x_2713_);
v___x_2715_ = lean_array_push(v___x_2714_, v___x_2688_);
v___x_2716_ = lean_array_push(v___x_2715_, v___x_2691_);
v___x_2717_ = lean_array_push(v___x_2716_, v___x_2694_);
v___x_2718_ = lean_array_push(v___x_2717_, v___x_2697_);
v___x_2719_ = lean_array_push(v___x_2718_, v___x_2700_);
v___x_2720_ = lean_array_push(v___x_2719_, v___x_2703_);
v___x_2721_ = lean_array_push(v___x_2720_, v___x_2706_);
v___x_2722_ = lean_array_push(v___x_2721_, v___x_2709_);
v___x_2723_ = lean_array_push(v___x_2722_, v___x_2712_);
v___x_2724_ = l_Lasm_JS_Web_Support_fields(v___x_2723_);
lean_dec_ref(v___x_2723_);
v___y_2658_ = v___x_2724_;
goto v___jp_2657_;
}
v___jp_2657_:
{
lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; uint8_t v___x_2666_; lean_object* v___x_2667_; 
v___x_2659_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2659_, 0, v_baseURL_2652_);
v___x_2660_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_2653_);
v___x_2661_ = lean_mk_empty_array_with_capacity(v___x_2655_);
v___x_2662_ = lean_array_push(v___x_2661_, v___y_2658_);
v___x_2663_ = lean_array_push(v___x_2662_, v___x_2659_);
v___x_2664_ = lean_array_push(v___x_2663_, v___x_2660_);
v___x_2665_ = l_Lasm_JS_Web_Support_args(v___x_2664_);
v___x_2666_ = 0;
v___x_2667_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_2656_, v___x_2665_, v___x_2666_);
return v___x_2667_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new___boxed(lean_object* v_input_2725_, lean_object* v_baseURL_2726_, lean_object* v_options_2727_, lean_object* v_a_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l_Lasm_JS_Web_URLPattern_new(v_input_2725_, v_baseURL_2726_, v_options_2727_);
lean_dec(v_options_2727_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(lean_object* v_x_2730_){
_start:
{
if (lean_obj_tag(v_x_2730_) == 0)
{
lean_object* v___x_2731_; 
v___x_2731_ = lean_box(0);
return v___x_2731_;
}
else
{
lean_object* v_val_2732_; 
v_val_2732_ = lean_ctor_get(v_x_2730_, 0);
lean_inc(v_val_2732_);
lean_dec_ref_known(v_x_2730_, 1);
if (lean_obj_tag(v_val_2732_) == 0)
{
lean_object* v_value_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2740_; 
v_value_2733_ = lean_ctor_get(v_val_2732_, 0);
v_isSharedCheck_2740_ = !lean_is_exclusive(v_val_2732_);
if (v_isSharedCheck_2740_ == 0)
{
v___x_2735_ = v_val_2732_;
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_value_2733_);
lean_dec(v_val_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2738_; 
if (v_isShared_2736_ == 0)
{
lean_ctor_set_tag(v___x_2735_, 4);
v___x_2738_ = v___x_2735_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v_value_2733_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
else
{
lean_object* v_value_2741_; lean_object* v_protocol_2742_; lean_object* v_username_2743_; lean_object* v_password_2744_; lean_object* v_hostname_2745_; lean_object* v_port_2746_; lean_object* v_pathname_2747_; lean_object* v_search_2748_; lean_object* v_hash_2749_; lean_object* v_baseURL_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v_value_2741_ = lean_ctor_get(v_val_2732_, 0);
lean_inc_ref(v_value_2741_);
lean_dec_ref_known(v_val_2732_, 1);
v_protocol_2742_ = lean_ctor_get(v_value_2741_, 0);
lean_inc(v_protocol_2742_);
v_username_2743_ = lean_ctor_get(v_value_2741_, 1);
lean_inc(v_username_2743_);
v_password_2744_ = lean_ctor_get(v_value_2741_, 2);
lean_inc(v_password_2744_);
v_hostname_2745_ = lean_ctor_get(v_value_2741_, 3);
lean_inc(v_hostname_2745_);
v_port_2746_ = lean_ctor_get(v_value_2741_, 4);
lean_inc(v_port_2746_);
v_pathname_2747_ = lean_ctor_get(v_value_2741_, 5);
lean_inc(v_pathname_2747_);
v_search_2748_ = lean_ctor_get(v_value_2741_, 6);
lean_inc(v_search_2748_);
v_hash_2749_ = lean_ctor_get(v_value_2741_, 7);
lean_inc(v_hash_2749_);
v_baseURL_2750_ = lean_ctor_get(v_value_2741_, 8);
lean_inc(v_baseURL_2750_);
lean_dec_ref(v_value_2741_);
v___x_2751_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2752_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2742_);
v___x_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2751_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
v___x_2754_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2755_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2743_);
v___x_2756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2754_);
lean_ctor_set(v___x_2756_, 1, v___x_2755_);
v___x_2757_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2758_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2744_);
v___x_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2757_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
v___x_2760_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2761_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2745_);
v___x_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2760_);
lean_ctor_set(v___x_2762_, 1, v___x_2761_);
v___x_2763_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2764_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2746_);
v___x_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2763_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2767_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2747_);
v___x_2768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2768_, 0, v___x_2766_);
lean_ctor_set(v___x_2768_, 1, v___x_2767_);
v___x_2769_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2770_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2748_);
v___x_2771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2769_);
lean_ctor_set(v___x_2771_, 1, v___x_2770_);
v___x_2772_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2773_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2749_);
v___x_2774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2772_);
lean_ctor_set(v___x_2774_, 1, v___x_2773_);
v___x_2775_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2776_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2750_);
v___x_2777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2775_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
v___x_2778_ = lean_unsigned_to_nat(9u);
v___x_2779_ = lean_mk_empty_array_with_capacity(v___x_2778_);
v___x_2780_ = lean_array_push(v___x_2779_, v___x_2753_);
v___x_2781_ = lean_array_push(v___x_2780_, v___x_2756_);
v___x_2782_ = lean_array_push(v___x_2781_, v___x_2759_);
v___x_2783_ = lean_array_push(v___x_2782_, v___x_2762_);
v___x_2784_ = lean_array_push(v___x_2783_, v___x_2765_);
v___x_2785_ = lean_array_push(v___x_2784_, v___x_2768_);
v___x_2786_ = lean_array_push(v___x_2785_, v___x_2771_);
v___x_2787_ = lean_array_push(v___x_2786_, v___x_2774_);
v___x_2788_ = lean_array_push(v___x_2787_, v___x_2777_);
v___x_2789_ = l_Lasm_JS_Web_Support_fields(v___x_2788_);
lean_dec_ref(v___x_2788_);
return v___x_2789_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions(lean_object* v_input_2797_, lean_object* v_options_2798_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; lean_object* v___x_2809_; 
v___x_2800_ = lean_unsigned_to_nat(2u);
v___x_2801_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_newWithOptions___closed__1));
v___x_2802_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_2797_);
v___x_2803_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_2798_);
v___x_2804_ = lean_mk_empty_array_with_capacity(v___x_2800_);
v___x_2805_ = lean_array_push(v___x_2804_, v___x_2802_);
v___x_2806_ = lean_array_push(v___x_2805_, v___x_2803_);
v___x_2807_ = l_Lasm_JS_Web_Support_args(v___x_2806_);
v___x_2808_ = 0;
v___x_2809_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_2801_, v___x_2807_, v___x_2808_);
return v___x_2809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions___boxed(lean_object* v_input_2810_, lean_object* v_options_2811_, lean_object* v_a_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l_Lasm_JS_Web_URLPattern_newWithOptions(v_input_2810_, v_options_2811_);
lean_dec(v_options_2811_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol(lean_object* v_self_2814_){
_start:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2816_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2817_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2814_, v___x_2816_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol___boxed(lean_object* v_self_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v_res_2820_; 
v_res_2820_ = l_Lasm_JS_Web_URLPattern_protocol(v_self_2818_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username(lean_object* v_self_2821_){
_start:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2824_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2821_, v___x_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username___boxed(lean_object* v_self_2825_, lean_object* v_a_2826_){
_start:
{
lean_object* v_res_2827_; 
v_res_2827_ = l_Lasm_JS_Web_URLPattern_username(v_self_2825_);
return v_res_2827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password(lean_object* v_self_2828_){
_start:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2830_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2831_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2828_, v___x_2830_);
return v___x_2831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password___boxed(lean_object* v_self_2832_, lean_object* v_a_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l_Lasm_JS_Web_URLPattern_password(v_self_2832_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname(lean_object* v_self_2835_){
_start:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2837_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2838_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2835_, v___x_2837_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname___boxed(lean_object* v_self_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l_Lasm_JS_Web_URLPattern_hostname(v_self_2839_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port(lean_object* v_self_2842_){
_start:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2844_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2845_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2842_, v___x_2844_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port___boxed(lean_object* v_self_2846_, lean_object* v_a_2847_){
_start:
{
lean_object* v_res_2848_; 
v_res_2848_ = l_Lasm_JS_Web_URLPattern_port(v_self_2846_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname(lean_object* v_self_2849_){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2852_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2849_, v___x_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname___boxed(lean_object* v_self_2853_, lean_object* v_a_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Lasm_JS_Web_URLPattern_pathname(v_self_2853_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search(lean_object* v_self_2856_){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2859_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2856_, v___x_2858_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search___boxed(lean_object* v_self_2860_, lean_object* v_a_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_Lasm_JS_Web_URLPattern_search(v_self_2860_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash(lean_object* v_self_2863_){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2866_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2863_, v___x_2865_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash___boxed(lean_object* v_self_2867_, lean_object* v_a_2868_){
_start:
{
lean_object* v_res_2869_; 
v_res_2869_ = l_Lasm_JS_Web_URLPattern_hash(v_self_2867_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups(lean_object* v_self_2871_){
_start:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; 
v___x_2873_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_hasRegExpGroups___closed__0));
v___x_2874_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2871_, v___x_2873_);
return v___x_2874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups___boxed(lean_object* v_self_2875_, lean_object* v_a_2876_){
_start:
{
lean_object* v_res_2877_; 
v_res_2877_ = l_Lasm_JS_Web_URLPattern_hasRegExpGroups(v_self_2875_);
return v_res_2877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test(lean_object* v_self_2879_, lean_object* v_input_2880_, lean_object* v_baseURL_2881_){
_start:
{
lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2883_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_test___closed__0));
v___x_2884_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_2880_);
v___x_2885_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2881_);
v___x_2886_ = lean_unsigned_to_nat(2u);
v___x_2887_ = lean_mk_empty_array_with_capacity(v___x_2886_);
v___x_2888_ = lean_array_push(v___x_2887_, v___x_2884_);
v___x_2889_ = lean_array_push(v___x_2888_, v___x_2885_);
v___x_2890_ = l_Lasm_JS_Web_Support_args(v___x_2889_);
v___x_2891_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2879_, v___x_2883_, v___x_2890_);
return v___x_2891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test___boxed(lean_object* v_self_2892_, lean_object* v_input_2893_, lean_object* v_baseURL_2894_, lean_object* v_a_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = l_Lasm_JS_Web_URLPattern_test(v_self_2892_, v_input_2893_, v_baseURL_2894_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_2905_, lean_object* v_key_2906_){
_start:
{
if (lean_obj_tag(v_d_2905_) == 8)
{
lean_object* v___x_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2931_; 
v___x_2909_ = l_Lasm_JS_Data_field(v_d_2905_, v_key_2906_);
v_isSharedCheck_2931_ = !lean_is_exclusive(v_d_2905_);
if (v_isSharedCheck_2931_ == 0)
{
lean_object* v_unused_2932_; 
v_unused_2932_ = lean_ctor_get(v_d_2905_, 0);
lean_dec(v_unused_2932_);
v___x_2911_ = v_d_2905_;
v_isShared_2912_ = v_isSharedCheck_2931_;
goto v_resetjp_2910_;
}
else
{
lean_dec(v_d_2905_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2931_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
switch(lean_obj_tag(v___x_2909_))
{
case 1:
{
lean_del_object(v___x_2911_);
goto v___jp_2907_;
}
case 0:
{
lean_del_object(v___x_2911_);
goto v___jp_2907_;
}
default: 
{
if (lean_obj_tag(v___x_2909_) == 4)
{
lean_object* v_s_2913_; lean_object* v___x_2915_; 
v_s_2913_ = lean_ctor_get(v___x_2909_, 0);
lean_inc_ref(v_s_2913_);
lean_dec_ref_known(v___x_2909_, 1);
if (v_isShared_2912_ == 0)
{
lean_ctor_set_tag(v___x_2911_, 1);
lean_ctor_set(v___x_2911_, 0, v_s_2913_);
v___x_2915_ = v___x_2911_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_s_2913_);
v___x_2915_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
lean_object* v___x_2916_; 
v___x_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
return v___x_2916_;
}
}
else
{
lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2929_; 
v___x_2918_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_2919_ = lean_string_append(v___x_2918_, v_key_2906_);
v___x_2920_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_2921_ = lean_string_append(v___x_2919_, v___x_2920_);
v___x_2922_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_2923_ = lean_string_append(v___x_2921_, v___x_2922_);
v___x_2924_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_2925_ = lean_string_append(v___x_2923_, v___x_2924_);
v___x_2926_ = l_Lasm_JS_Data_describe(v___x_2909_);
v___x_2927_ = lean_string_append(v___x_2925_, v___x_2926_);
lean_dec_ref(v___x_2926_);
if (v_isShared_2912_ == 0)
{
lean_ctor_set_tag(v___x_2911_, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2927_);
v___x_2929_ = v___x_2911_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v___x_2927_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
}
}
}
else
{
lean_object* v___x_2933_; 
lean_dec(v_d_2905_);
v___x_2933_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5));
return v___x_2933_;
}
v___jp_2907_:
{
lean_object* v___x_2908_; 
v___x_2908_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2908_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_2934_, lean_object* v_key_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_2934_, v_key_2935_);
lean_dec_ref(v_key_2935_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(size_t v_sz_2937_, size_t v_i_2938_, lean_object* v_bs_2939_){
_start:
{
uint8_t v___x_2940_; 
v___x_2940_ = lean_usize_dec_lt(v_i_2938_, v_sz_2937_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; 
v___x_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2941_, 0, v_bs_2939_);
return v___x_2941_;
}
else
{
lean_object* v_v_2942_; lean_object* v___x_2943_; lean_object* v_bs_x27_2944_; lean_object* v_a_2946_; 
v_v_2942_ = lean_array_uget(v_bs_2939_, v_i_2938_);
v___x_2943_ = lean_unsigned_to_nat(0u);
v_bs_x27_2944_ = lean_array_uset(v_bs_2939_, v_i_2938_, v___x_2943_);
switch(lean_obj_tag(v_v_2942_))
{
case 4:
{
lean_object* v_s_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2958_; 
v_s_2951_ = lean_ctor_get(v_v_2942_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v_v_2942_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2953_ = v_v_2942_;
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_s_2951_);
lean_dec(v_v_2942_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2954_ == 0)
{
lean_ctor_set_tag(v___x_2953_, 0);
v___x_2956_ = v___x_2953_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_s_2951_);
v___x_2956_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
v_a_2946_ = v___x_2956_;
goto v___jp_2945_;
}
}
}
case 8:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2959_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v_v_2942_);
v___x_2960_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2942_, v___x_2959_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_object* v_a_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2968_; 
lean_dec_ref_known(v_v_2942_, 1);
lean_dec_ref(v_bs_x27_2944_);
v_a_2961_ = lean_ctor_get(v___x_2960_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2963_ = v___x_2960_;
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_a_2961_);
lean_dec(v___x_2960_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2961_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v_a_2969_ = lean_ctor_get(v___x_2960_, 0);
lean_inc(v_a_2969_);
lean_dec_ref_known(v___x_2960_, 1);
v___x_2970_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v_v_2942_);
v___x_2971_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2942_, v___x_2970_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2979_; 
lean_dec(v_a_2969_);
lean_dec_ref_known(v_v_2942_, 1);
lean_dec_ref(v_bs_x27_2944_);
v_a_2972_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_2979_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_2979_ == 0)
{
v___x_2974_ = v___x_2971_;
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_dec(v___x_2971_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2977_; 
if (v_isShared_2975_ == 0)
{
v___x_2977_ = v___x_2974_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v_a_2972_);
v___x_2977_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
return v___x_2977_;
}
}
}
else
{
lean_object* v_a_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v_a_2980_ = lean_ctor_get(v___x_2971_, 0);
lean_inc(v_a_2980_);
lean_dec_ref_known(v___x_2971_, 1);
v___x_2981_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v_v_2942_);
v___x_2982_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2942_, v___x_2981_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2990_; 
lean_dec(v_a_2980_);
lean_dec(v_a_2969_);
lean_dec_ref_known(v_v_2942_, 1);
lean_dec_ref(v_bs_x27_2944_);
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2985_ = v___x_2982_;
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2982_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2988_; 
if (v_isShared_2986_ == 0)
{
v___x_2988_ = v___x_2985_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2983_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
}
else
{
lean_object* v_a_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; 
v_a_2991_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2991_);
lean_dec_ref_known(v___x_2982_, 1);
v___x_2992_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v_v_2942_);
v___x_2993_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2942_, v___x_2992_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3001_; 
lean_dec(v_a_2991_);
lean_dec(v_a_2980_);
lean_dec(v_a_2969_);
lean_dec_ref_known(v_v_2942_, 1);
lean_dec_ref(v_bs_x27_2944_);
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2996_ = v___x_2993_;
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2993_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2999_; 
if (v_isShared_2997_ == 0)
{
v___x_2999_ = v___x_2996_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v_a_2994_);
v___x_2999_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
return v___x_2999_;
}
}
}
else
{
lean_object* v_a_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v_a_3002_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_a_3002_);
lean_dec_ref_known(v___x_2993_, 1);
v___x_3003_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v_v_2942_);
v___x_3004_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2942_, v___x_3003_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3012_; 
lean_dec(v_a_3002_);
lean_dec(v_a_2991_);
lean_dec(v_a_2980_);
lean_dec(v_a_2969_);
lean_dec_ref_known(v_v_2942_, 1);
lean_dec_ref(v_bs_x27_2944_);
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3007_ = v___x_3004_;
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_dec(v___x_3004_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3010_; 
if (v_isShared_3008_ == 0)
{
v___x_3010_ = v___x_3007_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3005_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
return v___x_3010_;
}
}
}
else
{
lean_object* v_a_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v_a_3013_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_a_3013_);
lean_dec_ref_known(v___x_3004_, 1);
v___x_3014_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v_v_2942_);
v___x_3015_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2942_, v___x_3014_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
lean_dec(v_a_3013_);
lean_dec(v_a_3002_);
lean_dec(v_a_2991_);
lean_dec(v_a_2980_);
lean_dec(v_a_2969_);
lean_dec_ref_known(v_v_2942_, 1);
lean_dec_ref(v_bs_x27_2944_);
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_3015_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_3015_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3021_; 
if (v_isShared_3019_ == 0)
{
v___x_3021_ = v___x_3018_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3016_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; 
v_a_3024_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_a_3024_);
lean_dec_ref_known(v___x_3015_, 1);
v___x_3025_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v_v_2942_);
v___x_3026_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2942_, v___x_3025_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3034_; 
lean_dec(v_a_3024_);
lean_dec(v_a_3013_);
lean_dec(v_a_3002_);
lean_dec(v_a_2991_);
lean_dec(v_a_2980_);
lean_dec(v_a_2969_);
lean_dec_ref_known(v_v_2942_, 1);
lean_dec_ref(v_bs_x27_2944_);
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3029_ = v___x_3026_;
v_isShared_3030_ = v_isSharedCheck_3034_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_a_3027_);
lean_dec(v___x_3026_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3034_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
lean_object* v___x_3032_; 
if (v_isShared_3030_ == 0)
{
v___x_3032_ = v___x_3029_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_a_3027_);
v___x_3032_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
return v___x_3032_;
}
}
}
else
{
lean_object* v_a_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; 
v_a_3035_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3035_);
lean_dec_ref_known(v___x_3026_, 1);
v___x_3036_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc_ref(v_v_2942_);
v___x_3037_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2942_, v___x_3036_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec(v_a_3035_);
lean_dec(v_a_3024_);
lean_dec(v_a_3013_);
lean_dec(v_a_3002_);
lean_dec(v_a_2991_);
lean_dec(v_a_2980_);
lean_dec(v_a_2969_);
lean_dec_ref_known(v_v_2942_, 1);
lean_dec_ref(v_bs_x27_2944_);
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_3037_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3037_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; 
v_a_3046_ = lean_ctor_get(v___x_3037_, 0);
lean_inc(v_a_3046_);
lean_dec_ref_known(v___x_3037_, 1);
v___x_3047_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_3048_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2942_, v___x_3047_);
if (lean_obj_tag(v___x_3048_) == 0)
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3056_; 
lean_dec(v_a_3046_);
lean_dec(v_a_3035_);
lean_dec(v_a_3024_);
lean_dec(v_a_3013_);
lean_dec(v_a_3002_);
lean_dec(v_a_2991_);
lean_dec(v_a_2980_);
lean_dec(v_a_2969_);
lean_dec_ref(v_bs_x27_2944_);
v_a_3049_ = lean_ctor_get(v___x_3048_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_3048_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3051_ = v___x_3048_;
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_3048_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_a_3049_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
}
}
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v_a_3057_ = lean_ctor_get(v___x_3048_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___x_3048_, 1);
v___x_3058_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3058_, 0, v_a_2969_);
lean_ctor_set(v___x_3058_, 1, v_a_2980_);
lean_ctor_set(v___x_3058_, 2, v_a_2991_);
lean_ctor_set(v___x_3058_, 3, v_a_3002_);
lean_ctor_set(v___x_3058_, 4, v_a_3013_);
lean_ctor_set(v___x_3058_, 5, v_a_3024_);
lean_ctor_set(v___x_3058_, 6, v_a_3035_);
lean_ctor_set(v___x_3058_, 7, v_a_3046_);
lean_ctor_set(v___x_3058_, 8, v_a_3057_);
v___x_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3058_);
v_a_2946_ = v___x_3059_;
goto v___jp_2945_;
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
lean_object* v___x_3060_; 
lean_dec_ref(v_bs_x27_2944_);
lean_dec(v_v_2942_);
v___x_3060_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3060_;
}
}
v___jp_2945_:
{
size_t v___x_2947_; size_t v___x_2948_; lean_object* v___x_2949_; 
v___x_2947_ = ((size_t)1ULL);
v___x_2948_ = lean_usize_add(v_i_2938_, v___x_2947_);
v___x_2949_ = lean_array_uset(v_bs_x27_2944_, v_i_2938_, v_a_2946_);
v_i_2938_ = v___x_2948_;
v_bs_2939_ = v___x_2949_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_sz_3061_, lean_object* v_i_3062_, lean_object* v_bs_3063_){
_start:
{
size_t v_sz_boxed_3064_; size_t v_i_boxed_3065_; lean_object* v_res_3066_; 
v_sz_boxed_3064_ = lean_unbox_usize(v_sz_3061_);
lean_dec(v_sz_3061_);
v_i_boxed_3065_ = lean_unbox_usize(v_i_3062_);
lean_dec(v_i_3062_);
v_res_3066_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(v_sz_boxed_3064_, v_i_boxed_3065_, v_bs_3063_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3073_, lean_object* v_key_3074_){
_start:
{
if (lean_obj_tag(v_d_3073_) == 8)
{
lean_object* v___x_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3129_; 
v___x_3077_ = l_Lasm_JS_Data_field(v_d_3073_, v_key_3074_);
v_isSharedCheck_3129_ = !lean_is_exclusive(v_d_3073_);
if (v_isSharedCheck_3129_ == 0)
{
lean_object* v_unused_3130_; 
v_unused_3130_ = lean_ctor_get(v_d_3073_, 0);
lean_dec(v_unused_3130_);
v___x_3079_ = v_d_3073_;
v_isShared_3080_ = v_isSharedCheck_3129_;
goto v_resetjp_3078_;
}
else
{
lean_dec(v_d_3073_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3129_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v_a_3082_; 
switch(lean_obj_tag(v___x_3077_))
{
case 1:
{
lean_del_object(v___x_3079_);
goto v___jp_3075_;
}
case 0:
{
lean_del_object(v___x_3079_);
goto v___jp_3075_;
}
default: 
{
if (lean_obj_tag(v___x_3077_) == 7)
{
lean_object* v_items_3107_; size_t v_sz_3108_; size_t v___x_3109_; lean_object* v___x_3110_; 
v_items_3107_ = lean_ctor_get(v___x_3077_, 0);
v_sz_3108_ = lean_array_size(v_items_3107_);
v___x_3109_ = ((size_t)0ULL);
lean_inc_ref(v_items_3107_);
v___x_3110_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(v_sz_3108_, v___x_3109_, v_items_3107_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_a_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; uint8_t v___x_3115_; 
v_a_3111_ = lean_ctor_get(v___x_3110_, 0);
lean_inc(v_a_3111_);
lean_dec_ref_known(v___x_3110_, 1);
v___x_3112_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3113_ = lean_string_utf8_byte_size(v_a_3111_);
v___x_3114_ = lean_unsigned_to_nat(0u);
v___x_3115_ = lean_nat_dec_eq(v___x_3113_, v___x_3114_);
if (v___x_3115_ == 0)
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3116_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3117_ = lean_string_append(v___x_3116_, v_a_3111_);
lean_dec(v_a_3111_);
v___x_3118_ = lean_string_append(v___x_3112_, v___x_3117_);
lean_dec_ref(v___x_3117_);
v_a_3082_ = v___x_3118_;
goto v___jp_3081_;
}
else
{
lean_dec(v_a_3111_);
v_a_3082_ = v___x_3112_;
goto v___jp_3081_;
}
}
else
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3127_; 
lean_dec_ref_known(v___x_3077_, 1);
lean_del_object(v___x_3079_);
v_a_3119_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3121_ = v___x_3110_;
v_isShared_3122_ = v_isSharedCheck_3127_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3110_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3127_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3123_; lean_object* v___x_3125_; 
v___x_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3123_, 0, v_a_3119_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 0, v___x_3123_);
v___x_3125_ = v___x_3121_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3123_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
}
else
{
lean_object* v___x_3128_; 
v___x_3128_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3082_ = v___x_3128_;
goto v___jp_3081_;
}
}
}
v___jp_3081_:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; uint8_t v___x_3095_; 
v___x_3083_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3084_ = lean_string_append(v___x_3083_, v_key_3074_);
v___x_3085_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3086_ = lean_string_append(v___x_3084_, v___x_3085_);
v___x_3087_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__1));
v___x_3088_ = lean_string_append(v___x_3086_, v___x_3087_);
v___x_3089_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3090_ = lean_string_append(v___x_3088_, v___x_3089_);
v___x_3091_ = l_Lasm_JS_Data_describe(v___x_3077_);
v___x_3092_ = lean_string_append(v___x_3090_, v___x_3091_);
lean_dec_ref(v___x_3091_);
v___x_3093_ = lean_string_utf8_byte_size(v_a_3082_);
v___x_3094_ = lean_unsigned_to_nat(0u);
v___x_3095_ = lean_nat_dec_eq(v___x_3093_, v___x_3094_);
if (v___x_3095_ == 0)
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3102_; 
v___x_3096_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3097_ = lean_string_append(v___x_3096_, v_a_3082_);
lean_dec_ref(v_a_3082_);
v___x_3098_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3099_ = lean_string_append(v___x_3097_, v___x_3098_);
v___x_3100_ = lean_string_append(v___x_3092_, v___x_3099_);
lean_dec_ref(v___x_3099_);
if (v_isShared_3080_ == 0)
{
lean_ctor_set_tag(v___x_3079_, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3100_);
v___x_3102_ = v___x_3079_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v___x_3100_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
else
{
lean_object* v___x_3105_; 
lean_dec_ref(v_a_3082_);
if (v_isShared_3080_ == 0)
{
lean_ctor_set_tag(v___x_3079_, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3092_);
v___x_3105_ = v___x_3079_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v___x_3092_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
}
else
{
lean_object* v___x_3131_; 
lean_dec(v_d_3073_);
v___x_3131_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__3));
return v___x_3131_;
}
v___jp_3075_:
{
lean_object* v___x_3076_; 
v___x_3076_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__0));
return v___x_3076_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3132_, lean_object* v_key_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(v_d_3132_, v_key_3133_);
lean_dec_ref(v_key_3133_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(size_t v_sz_3136_, size_t v_i_3137_, lean_object* v_bs_3138_){
_start:
{
uint8_t v___x_3139_; 
v___x_3139_ = lean_usize_dec_lt(v_i_3137_, v_sz_3136_);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; 
v___x_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3140_, 0, v_bs_3138_);
return v___x_3140_;
}
else
{
lean_object* v_v_3141_; lean_object* v_fst_3142_; lean_object* v_snd_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3167_; 
v_v_3141_ = lean_array_uget(v_bs_3138_, v_i_3137_);
v_fst_3142_ = lean_ctor_get(v_v_3141_, 0);
v_snd_3143_ = lean_ctor_get(v_v_3141_, 1);
v_isSharedCheck_3167_ = !lean_is_exclusive(v_v_3141_);
if (v_isSharedCheck_3167_ == 0)
{
v___x_3145_ = v_v_3141_;
v_isShared_3146_ = v_isSharedCheck_3167_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_snd_3143_);
lean_inc(v_fst_3142_);
lean_dec(v_v_3141_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3167_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3147_; lean_object* v_bs_x27_3148_; lean_object* v_a_3150_; 
v___x_3147_ = lean_unsigned_to_nat(0u);
v_bs_x27_3148_ = lean_array_uset(v_bs_3138_, v_i_3137_, v___x_3147_);
switch(lean_obj_tag(v_snd_3143_))
{
case 1:
{
goto v___jp_3158_;
}
case 0:
{
goto v___jp_3158_;
}
default: 
{
if (lean_obj_tag(v_snd_3143_) == 4)
{
lean_object* v_s_3160_; lean_object* v___x_3161_; 
v_s_3160_ = lean_ctor_get(v_snd_3143_, 0);
lean_inc_ref(v_s_3160_);
lean_dec_ref_known(v_snd_3143_, 1);
v___x_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3161_, 0, v_s_3160_);
v_a_3150_ = v___x_3161_;
goto v___jp_3149_;
}
else
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; 
lean_dec_ref(v_bs_x27_3148_);
lean_del_object(v___x_3145_);
lean_dec(v_snd_3143_);
v___x_3162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___closed__0));
v___x_3163_ = lean_string_append(v___x_3162_, v_fst_3142_);
lean_dec(v_fst_3142_);
v___x_3164_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3165_ = lean_string_append(v___x_3163_, v___x_3164_);
v___x_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3165_);
return v___x_3166_;
}
}
}
v___jp_3149_:
{
lean_object* v___x_3152_; 
if (v_isShared_3146_ == 0)
{
lean_ctor_set(v___x_3145_, 1, v_a_3150_);
v___x_3152_ = v___x_3145_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_fst_3142_);
lean_ctor_set(v_reuseFailAlloc_3157_, 1, v_a_3150_);
v___x_3152_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
size_t v___x_3153_; size_t v___x_3154_; lean_object* v___x_3155_; 
v___x_3153_ = ((size_t)1ULL);
v___x_3154_ = lean_usize_add(v_i_3137_, v___x_3153_);
v___x_3155_ = lean_array_uset(v_bs_x27_3148_, v_i_3137_, v___x_3152_);
v_i_3137_ = v___x_3154_;
v_bs_3138_ = v___x_3155_;
goto _start;
}
}
v___jp_3158_:
{
lean_object* v___x_3159_; 
v___x_3159_ = lean_box(0);
v_a_3150_ = v___x_3159_;
goto v___jp_3149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___boxed(lean_object* v_sz_3168_, lean_object* v_i_3169_, lean_object* v_bs_3170_){
_start:
{
size_t v_sz_boxed_3171_; size_t v_i_boxed_3172_; lean_object* v_res_3173_; 
v_sz_boxed_3171_ = lean_unbox_usize(v_sz_3168_);
lean_dec(v_sz_3168_);
v_i_boxed_3172_ = lean_unbox_usize(v_i_3169_);
lean_dec(v_i_3169_);
v_res_3173_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(v_sz_boxed_3171_, v_i_boxed_3172_, v_bs_3170_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(lean_object* v_d_3179_, lean_object* v_key_3180_){
_start:
{
if (lean_obj_tag(v_d_3179_) == 8)
{
lean_object* v___x_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3228_; 
v___x_3183_ = l_Lasm_JS_Data_field(v_d_3179_, v_key_3180_);
v_isSharedCheck_3228_ = !lean_is_exclusive(v_d_3179_);
if (v_isSharedCheck_3228_ == 0)
{
lean_object* v_unused_3229_; 
v_unused_3229_ = lean_ctor_get(v_d_3179_, 0);
lean_dec(v_unused_3229_);
v___x_3185_ = v_d_3179_;
v_isShared_3186_ = v_isSharedCheck_3228_;
goto v_resetjp_3184_;
}
else
{
lean_dec(v_d_3179_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3228_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v_a_3188_; 
switch(lean_obj_tag(v___x_3183_))
{
case 1:
{
lean_del_object(v___x_3185_);
goto v___jp_3181_;
}
case 0:
{
lean_del_object(v___x_3185_);
goto v___jp_3181_;
}
default: 
{
if (lean_obj_tag(v___x_3183_) == 8)
{
lean_object* v_fields_3213_; size_t v_sz_3214_; size_t v___x_3215_; lean_object* v___x_3216_; 
v_fields_3213_ = lean_ctor_get(v___x_3183_, 0);
v_sz_3214_ = lean_array_size(v_fields_3213_);
v___x_3215_ = ((size_t)0ULL);
lean_inc_ref(v_fields_3213_);
v___x_3216_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(v_sz_3214_, v___x_3215_, v_fields_3213_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref_known(v___x_3216_, 1);
v_a_3188_ = v_a_3217_;
goto v___jp_3187_;
}
else
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3226_; 
lean_dec_ref_known(v___x_3183_, 1);
lean_del_object(v___x_3185_);
v_a_3218_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3220_ = v___x_3216_;
v_isShared_3221_ = v_isSharedCheck_3226_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3216_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3226_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3222_; lean_object* v___x_3224_; 
v___x_3222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3222_, 0, v_a_3218_);
if (v_isShared_3221_ == 0)
{
lean_ctor_set(v___x_3220_, 0, v___x_3222_);
v___x_3224_ = v___x_3220_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v___x_3222_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
}
else
{
lean_object* v___x_3227_; 
v___x_3227_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3188_ = v___x_3227_;
goto v___jp_3187_;
}
}
}
v___jp_3187_:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; uint8_t v___x_3201_; 
v___x_3189_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3190_ = lean_string_append(v___x_3189_, v_key_3180_);
v___x_3191_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3192_ = lean_string_append(v___x_3190_, v___x_3191_);
v___x_3193_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__1));
v___x_3194_ = lean_string_append(v___x_3192_, v___x_3193_);
v___x_3195_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3196_ = lean_string_append(v___x_3194_, v___x_3195_);
v___x_3197_ = l_Lasm_JS_Data_describe(v___x_3183_);
v___x_3198_ = lean_string_append(v___x_3196_, v___x_3197_);
lean_dec_ref(v___x_3197_);
v___x_3199_ = lean_string_utf8_byte_size(v_a_3188_);
v___x_3200_ = lean_unsigned_to_nat(0u);
v___x_3201_ = lean_nat_dec_eq(v___x_3199_, v___x_3200_);
if (v___x_3201_ == 0)
{
lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3208_; 
v___x_3202_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3203_ = lean_string_append(v___x_3202_, v_a_3188_);
lean_dec_ref(v_a_3188_);
v___x_3204_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3205_ = lean_string_append(v___x_3203_, v___x_3204_);
v___x_3206_ = lean_string_append(v___x_3198_, v___x_3205_);
lean_dec_ref(v___x_3205_);
if (v_isShared_3186_ == 0)
{
lean_ctor_set_tag(v___x_3185_, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3206_);
v___x_3208_ = v___x_3185_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v___x_3206_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
else
{
lean_object* v___x_3211_; 
lean_dec_ref(v_a_3188_);
if (v_isShared_3186_ == 0)
{
lean_ctor_set_tag(v___x_3185_, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3198_);
v___x_3211_ = v___x_3185_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v___x_3198_);
v___x_3211_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
return v___x_3211_;
}
}
}
}
}
else
{
lean_object* v___x_3230_; 
lean_dec(v_d_3179_);
v___x_3230_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__2));
return v___x_3230_;
}
v___jp_3181_:
{
lean_object* v___x_3182_; 
v___x_3182_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__0));
return v___x_3182_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___boxed(lean_object* v_d_3231_, lean_object* v_key_3232_){
_start:
{
lean_object* v_res_3233_; 
v_res_3233_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(v_d_3231_, v_key_3232_);
lean_dec_ref(v_key_3232_);
return v_res_3233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_3239_, lean_object* v_key_3240_){
_start:
{
if (lean_obj_tag(v_d_3239_) == 8)
{
lean_object* v___x_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3296_; 
v___x_3243_ = l_Lasm_JS_Data_field(v_d_3239_, v_key_3240_);
v_isSharedCheck_3296_ = !lean_is_exclusive(v_d_3239_);
if (v_isSharedCheck_3296_ == 0)
{
lean_object* v_unused_3297_; 
v_unused_3297_ = lean_ctor_get(v_d_3239_, 0);
lean_dec(v_unused_3297_);
v___x_3245_ = v_d_3239_;
v_isShared_3246_ = v_isSharedCheck_3296_;
goto v_resetjp_3244_;
}
else
{
lean_dec(v_d_3239_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3296_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v_a_3248_; 
switch(lean_obj_tag(v___x_3243_))
{
case 1:
{
lean_del_object(v___x_3245_);
goto v___jp_3241_;
}
case 0:
{
lean_del_object(v___x_3245_);
goto v___jp_3241_;
}
default: 
{
lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3273_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0));
lean_inc(v___x_3243_);
v___x_3274_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_3243_, v___x_3273_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3275_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3275_);
lean_dec_ref_known(v___x_3274_, 1);
v_a_3248_ = v_a_3275_;
goto v___jp_3247_;
}
else
{
lean_object* v_a_3276_; lean_object* v___x_3278_; uint8_t v_isShared_3279_; uint8_t v_isSharedCheck_3295_; 
v_a_3276_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3278_ = v___x_3274_;
v_isShared_3279_ = v_isSharedCheck_3295_;
goto v_resetjp_3277_;
}
else
{
lean_inc(v_a_3276_);
lean_dec(v___x_3274_);
v___x_3278_ = lean_box(0);
v_isShared_3279_ = v_isSharedCheck_3295_;
goto v_resetjp_3277_;
}
v_resetjp_3277_:
{
lean_object* v___x_3280_; lean_object* v___x_3281_; 
v___x_3280_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1));
lean_inc(v___x_3243_);
v___x_3281_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(v___x_3243_, v___x_3280_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v_a_3282_; 
lean_del_object(v___x_3278_);
lean_dec(v_a_3276_);
v_a_3282_ = lean_ctor_get(v___x_3281_, 0);
lean_inc(v_a_3282_);
lean_dec_ref_known(v___x_3281_, 1);
v_a_3248_ = v_a_3282_;
goto v___jp_3247_;
}
else
{
lean_object* v_a_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3294_; 
lean_del_object(v___x_3245_);
lean_dec(v___x_3243_);
v_a_3283_ = lean_ctor_get(v___x_3281_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3285_ = v___x_3281_;
v_isShared_3286_ = v_isSharedCheck_3294_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_a_3283_);
lean_dec(v___x_3281_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3294_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3287_; lean_object* v___x_3289_; 
v___x_3287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3287_, 0, v_a_3276_);
lean_ctor_set(v___x_3287_, 1, v_a_3283_);
if (v_isShared_3279_ == 0)
{
lean_ctor_set(v___x_3278_, 0, v___x_3287_);
v___x_3289_ = v___x_3278_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v___x_3287_);
v___x_3289_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
lean_object* v___x_3291_; 
if (v_isShared_3286_ == 0)
{
lean_ctor_set(v___x_3285_, 0, v___x_3289_);
v___x_3291_ = v___x_3285_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3289_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
}
}
}
}
}
v___jp_3247_:
{
lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; uint8_t v___x_3261_; 
v___x_3249_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3250_ = lean_string_append(v___x_3249_, v_key_3240_);
v___x_3251_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3252_ = lean_string_append(v___x_3250_, v___x_3251_);
v___x_3253_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3254_ = lean_string_append(v___x_3252_, v___x_3253_);
v___x_3255_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3256_ = lean_string_append(v___x_3254_, v___x_3255_);
v___x_3257_ = l_Lasm_JS_Data_describe(v___x_3243_);
v___x_3258_ = lean_string_append(v___x_3256_, v___x_3257_);
lean_dec_ref(v___x_3257_);
v___x_3259_ = lean_string_utf8_byte_size(v_a_3248_);
v___x_3260_ = lean_unsigned_to_nat(0u);
v___x_3261_ = lean_nat_dec_eq(v___x_3259_, v___x_3260_);
if (v___x_3261_ == 0)
{
lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3268_; 
v___x_3262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3263_ = lean_string_append(v___x_3262_, v_a_3248_);
lean_dec_ref(v_a_3248_);
v___x_3264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3265_ = lean_string_append(v___x_3263_, v___x_3264_);
v___x_3266_ = lean_string_append(v___x_3258_, v___x_3265_);
lean_dec_ref(v___x_3265_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set_tag(v___x_3245_, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3266_);
v___x_3268_ = v___x_3245_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v___x_3266_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
else
{
lean_object* v___x_3271_; 
lean_dec_ref(v_a_3248_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set_tag(v___x_3245_, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3258_);
v___x_3271_ = v___x_3245_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v___x_3258_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
}
}
else
{
lean_object* v___x_3298_; 
lean_dec(v_d_3239_);
v___x_3298_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__2));
return v___x_3298_;
}
v___jp_3241_:
{
lean_object* v___x_3242_; 
v___x_3242_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_3242_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_3299_, lean_object* v_key_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3299_, v_key_3300_);
lean_dec_ref(v_key_3300_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(lean_object* v_context_3303_, lean_object* v_d_3304_){
_start:
{
lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3316_; lean_object* v_received_3317_; lean_object* v___y_3336_; lean_object* v_a_3339_; 
switch(lean_obj_tag(v_d_3304_))
{
case 1:
{
goto v___jp_3306_;
}
case 0:
{
goto v___jp_3306_;
}
default: 
{
lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3363_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0));
lean_inc(v_d_3304_);
v___x_3364_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(v_d_3304_, v___x_3363_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v_a_3365_; 
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_a_3365_);
lean_dec_ref_known(v___x_3364_, 1);
v_a_3339_ = v_a_3365_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v_a_3366_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_a_3366_);
lean_dec_ref_known(v___x_3364_, 1);
v___x_3367_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc(v_d_3304_);
v___x_3368_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3304_, v___x_3367_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_a_3369_; 
lean_dec(v_a_3366_);
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3369_);
lean_dec_ref_known(v___x_3368_, 1);
v_a_3339_ = v_a_3369_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v_a_3370_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3370_);
lean_dec_ref_known(v___x_3368_, 1);
v___x_3371_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc(v_d_3304_);
v___x_3372_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3304_, v___x_3371_);
if (lean_obj_tag(v___x_3372_) == 0)
{
lean_object* v_a_3373_; 
lean_dec(v_a_3370_);
lean_dec(v_a_3366_);
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3373_);
lean_dec_ref_known(v___x_3372_, 1);
v_a_3339_ = v_a_3373_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
v_a_3374_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3374_);
lean_dec_ref_known(v___x_3372_, 1);
v___x_3375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc(v_d_3304_);
v___x_3376_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3304_, v___x_3375_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; 
lean_dec(v_a_3374_);
lean_dec(v_a_3370_);
lean_dec(v_a_3366_);
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_a_3377_);
lean_dec_ref_known(v___x_3376_, 1);
v_a_3339_ = v_a_3377_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v_a_3378_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_a_3378_);
lean_dec_ref_known(v___x_3376_, 1);
v___x_3379_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc(v_d_3304_);
v___x_3380_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3304_, v___x_3379_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; 
lean_dec(v_a_3378_);
lean_dec(v_a_3374_);
lean_dec(v_a_3370_);
lean_dec(v_a_3366_);
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3381_);
lean_dec_ref_known(v___x_3380_, 1);
v_a_3339_ = v_a_3381_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v_a_3382_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3382_);
lean_dec_ref_known(v___x_3380_, 1);
v___x_3383_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc(v_d_3304_);
v___x_3384_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3304_, v___x_3383_);
if (lean_obj_tag(v___x_3384_) == 0)
{
lean_object* v_a_3385_; 
lean_dec(v_a_3382_);
lean_dec(v_a_3378_);
lean_dec(v_a_3374_);
lean_dec(v_a_3370_);
lean_dec(v_a_3366_);
v_a_3385_ = lean_ctor_get(v___x_3384_, 0);
lean_inc(v_a_3385_);
lean_dec_ref_known(v___x_3384_, 1);
v_a_3339_ = v_a_3385_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; 
v_a_3386_ = lean_ctor_get(v___x_3384_, 0);
lean_inc(v_a_3386_);
lean_dec_ref_known(v___x_3384_, 1);
v___x_3387_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc(v_d_3304_);
v___x_3388_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3304_, v___x_3387_);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_a_3389_; 
lean_dec(v_a_3386_);
lean_dec(v_a_3382_);
lean_dec(v_a_3378_);
lean_dec(v_a_3374_);
lean_dec(v_a_3370_);
lean_dec(v_a_3366_);
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
lean_inc(v_a_3389_);
lean_dec_ref_known(v___x_3388_, 1);
v_a_3339_ = v_a_3389_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; 
v_a_3390_ = lean_ctor_get(v___x_3388_, 0);
lean_inc(v_a_3390_);
lean_dec_ref_known(v___x_3388_, 1);
v___x_3391_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc(v_d_3304_);
v___x_3392_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3304_, v___x_3391_);
if (lean_obj_tag(v___x_3392_) == 0)
{
lean_object* v_a_3393_; 
lean_dec(v_a_3390_);
lean_dec(v_a_3386_);
lean_dec(v_a_3382_);
lean_dec(v_a_3378_);
lean_dec(v_a_3374_);
lean_dec(v_a_3370_);
lean_dec(v_a_3366_);
v_a_3393_ = lean_ctor_get(v___x_3392_, 0);
lean_inc(v_a_3393_);
lean_dec_ref_known(v___x_3392_, 1);
v_a_3339_ = v_a_3393_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3413_; 
v_a_3394_ = lean_ctor_get(v___x_3392_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3396_ = v___x_3392_;
v_isShared_3397_ = v_isSharedCheck_3413_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3392_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3413_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3398_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc(v_d_3304_);
v___x_3399_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3304_, v___x_3398_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; 
lean_del_object(v___x_3396_);
lean_dec(v_a_3394_);
lean_dec(v_a_3390_);
lean_dec(v_a_3386_);
lean_dec(v_a_3382_);
lean_dec(v_a_3378_);
lean_dec(v_a_3374_);
lean_dec(v_a_3370_);
lean_dec(v_a_3366_);
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_a_3400_);
lean_dec_ref_known(v___x_3399_, 1);
v_a_3339_ = v_a_3400_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3412_; 
lean_dec(v_d_3304_);
v_a_3401_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3403_ = v___x_3399_;
v_isShared_3404_ = v_isSharedCheck_3412_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_a_3401_);
lean_dec(v___x_3399_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3412_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; lean_object* v___x_3407_; 
v___x_3405_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3405_, 0, v_a_3366_);
lean_ctor_set(v___x_3405_, 1, v_a_3370_);
lean_ctor_set(v___x_3405_, 2, v_a_3374_);
lean_ctor_set(v___x_3405_, 3, v_a_3378_);
lean_ctor_set(v___x_3405_, 4, v_a_3382_);
lean_ctor_set(v___x_3405_, 5, v_a_3386_);
lean_ctor_set(v___x_3405_, 6, v_a_3390_);
lean_ctor_set(v___x_3405_, 7, v_a_3394_);
lean_ctor_set(v___x_3405_, 8, v_a_3401_);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 0, v___x_3405_);
v___x_3407_ = v___x_3403_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
lean_object* v___x_3409_; 
if (v_isShared_3397_ == 0)
{
lean_ctor_set_tag(v___x_3396_, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3407_);
v___x_3409_ = v___x_3396_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v___x_3407_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
return v___x_3409_;
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
v___jp_3306_:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3307_ = lean_box(0);
v___x_3308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3308_, 0, v___x_3307_);
return v___x_3308_;
}
v___jp_3309_:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v___x_3312_ = lean_string_append(v___y_3310_, v___y_3311_);
lean_dec_ref(v___y_3311_);
v___x_3313_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3313_, 0, v___x_3312_);
v___x_3314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
return v___x_3314_;
}
v___jp_3315_:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; uint8_t v___x_3329_; 
v___x_3318_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_3319_ = lean_string_append(v___x_3318_, v_context_3303_);
v___x_3320_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_3321_ = lean_string_append(v___x_3319_, v___x_3320_);
v___x_3322_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___closed__0));
v___x_3323_ = lean_string_append(v___x_3321_, v___x_3322_);
v___x_3324_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_3325_ = lean_string_append(v___x_3323_, v___x_3324_);
v___x_3326_ = lean_string_append(v___x_3325_, v_received_3317_);
lean_dec_ref(v_received_3317_);
v___x_3327_ = lean_string_utf8_byte_size(v___y_3316_);
v___x_3328_ = lean_unsigned_to_nat(0u);
v___x_3329_ = lean_nat_dec_eq(v___x_3327_, v___x_3328_);
if (v___x_3329_ == 0)
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; 
v___x_3330_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3331_ = lean_string_append(v___x_3330_, v___y_3316_);
lean_dec_ref(v___y_3316_);
v___x_3332_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3333_ = lean_string_append(v___x_3331_, v___x_3332_);
v___y_3310_ = v___x_3326_;
v___y_3311_ = v___x_3333_;
goto v___jp_3309_;
}
else
{
lean_object* v___x_3334_; 
lean_dec_ref(v___y_3316_);
v___x_3334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_3310_ = v___x_3326_;
v___y_3311_ = v___x_3334_;
goto v___jp_3309_;
}
}
v___jp_3335_:
{
lean_object* v___x_3337_; 
v___x_3337_ = l_Lasm_JS_Data_describe(v_d_3304_);
v___y_3316_ = v___y_3336_;
v_received_3317_ = v___x_3337_;
goto v___jp_3315_;
}
v___jp_3338_:
{
if (lean_obj_tag(v_d_3304_) == 9)
{
lean_object* v_value_3340_; lean_object* v_description_3341_; lean_object* v___x_3342_; uint8_t v___x_3343_; 
v_value_3340_ = lean_ctor_get(v_d_3304_, 0);
v_description_3341_ = lean_ctor_get(v_d_3304_, 1);
v___x_3342_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3343_ = lean_string_dec_eq(v_description_3341_, v___x_3342_);
if (v___x_3343_ == 0)
{
v___y_3336_ = v_a_3339_;
goto v___jp_3335_;
}
else
{
lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3360_; 
lean_inc(v_value_3340_);
v_isSharedCheck_3360_ = !lean_is_exclusive(v_d_3304_);
if (v_isSharedCheck_3360_ == 0)
{
lean_object* v_unused_3361_; lean_object* v_unused_3362_; 
v_unused_3361_ = lean_ctor_get(v_d_3304_, 1);
lean_dec(v_unused_3361_);
v_unused_3362_ = lean_ctor_get(v_d_3304_, 0);
lean_dec(v_unused_3362_);
v___x_3345_ = v_d_3304_;
v_isShared_3346_ = v_isSharedCheck_3360_;
goto v_resetjp_3344_;
}
else
{
lean_dec(v_d_3304_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3360_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
uint32_t v___x_3347_; uint64_t v___x_3348_; lean_object* v___x_3350_; 
v___x_3347_ = 206;
v___x_3348_ = 0ULL;
lean_inc(v_value_3340_);
if (v_isShared_3346_ == 0)
{
lean_ctor_set(v___x_3345_, 1, v___x_3342_);
v___x_3350_ = v___x_3345_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_value_3340_);
lean_ctor_set(v_reuseFailAlloc_3359_, 1, v___x_3342_);
v___x_3350_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
uint32_t v___x_3351_; lean_object* v___x_3352_; 
v___x_3351_ = lasm_js_value_handle(v_value_3340_);
lean_dec(v_value_3340_);
v___x_3352_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3347_, v___x_3348_, v___x_3350_, v___x_3351_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v_a_3353_; uint8_t v___x_3354_; 
v_a_3353_ = lean_ctor_get(v___x_3352_, 0);
lean_inc(v_a_3353_);
lean_dec_ref_known(v___x_3352_, 1);
v___x_3354_ = lean_string_validate_utf8(v_a_3353_);
if (v___x_3354_ == 0)
{
lean_object* v___x_3355_; lean_object* v___x_3356_; 
lean_dec(v_a_3353_);
v___x_3355_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6);
v___x_3356_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3355_);
v___y_3316_ = v_a_3339_;
v_received_3317_ = v___x_3356_;
goto v___jp_3315_;
}
else
{
lean_object* v___x_3357_; 
v___x_3357_ = lean_string_from_utf8_unchecked(v_a_3353_);
v___y_3316_ = v_a_3339_;
v_received_3317_ = v___x_3357_;
goto v___jp_3315_;
}
}
else
{
lean_object* v___x_3358_; 
lean_dec_ref_known(v___x_3352_, 1);
v___x_3358_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v___y_3316_ = v_a_3339_;
v_received_3317_ = v___x_3358_;
goto v___jp_3315_;
}
}
}
}
}
else
{
v___y_3336_ = v_a_3339_;
goto v___jp_3335_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3414_, lean_object* v_d_3415_, lean_object* v_a_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(v_context_3414_, v_d_3415_);
lean_dec_ref(v_context_3414_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(lean_object* v_b_3418_, lean_object* v_args_3419_, uint8_t v_await_3420_){
_start:
{
uint64_t v___y_3423_; uint64_t v___y_3424_; uint64_t v___x_3459_; uint64_t v___y_3461_; 
v___x_3459_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_3420_ == 0)
{
uint64_t v___x_3466_; 
v___x_3466_ = 0ULL;
v___y_3461_ = v___x_3466_;
goto v___jp_3460_;
}
else
{
uint64_t v___x_3467_; 
v___x_3467_ = 2ULL;
v___y_3461_ = v___x_3467_;
goto v___jp_3460_;
}
v___jp_3422_:
{
uint64_t v_flags_3425_; uint32_t v___x_3426_; lean_object* v___x_3427_; uint32_t v___x_3428_; lean_object* v___x_3429_; 
v_flags_3425_ = lean_uint64_lor(v___y_3423_, v___y_3424_);
v___x_3426_ = 214;
v___x_3427_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3418_, v_args_3419_);
v___x_3428_ = 0;
v___x_3429_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3426_, v_flags_3425_, v___x_3427_, v___x_3428_);
if (lean_obj_tag(v___x_3429_) == 0)
{
lean_object* v_a_3430_; lean_object* v___x_3431_; 
v_a_3430_ = lean_ctor_get(v___x_3429_, 0);
lean_inc(v_a_3430_);
lean_dec_ref_known(v___x_3429_, 1);
v___x_3431_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3430_);
lean_dec(v_a_3430_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_a_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
lean_inc(v_a_3432_);
lean_dec_ref_known(v___x_3431_, 1);
v___x_3433_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3418_);
v___x_3434_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(v___x_3433_, v_a_3432_);
lean_dec_ref(v___x_3433_);
return v___x_3434_;
}
else
{
lean_object* v_a_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3442_; 
v_a_3435_ = lean_ctor_get(v___x_3431_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3437_ = v___x_3431_;
v_isShared_3438_ = v_isSharedCheck_3442_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_a_3435_);
lean_dec(v___x_3431_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3442_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
lean_object* v___x_3440_; 
if (v_isShared_3438_ == 0)
{
v___x_3440_ = v___x_3437_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_a_3435_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
return v___x_3440_;
}
}
}
}
else
{
lean_object* v_a_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3458_; 
v_a_3443_ = lean_ctor_get(v___x_3429_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3445_ = v___x_3429_;
v_isShared_3446_ = v_isSharedCheck_3458_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_a_3443_);
lean_dec(v___x_3429_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3458_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3456_; 
v___x_3447_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_3448_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3418_);
v___x_3449_ = lean_string_append(v___x_3447_, v___x_3448_);
lean_dec_ref(v___x_3448_);
v___x_3450_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3451_ = lean_string_append(v___x_3449_, v___x_3450_);
v___x_3452_ = lean_io_error_to_string(v_a_3443_);
v___x_3453_ = lean_string_append(v___x_3451_, v___x_3452_);
lean_dec_ref(v___x_3452_);
v___x_3454_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
if (v_isShared_3446_ == 0)
{
lean_ctor_set(v___x_3445_, 0, v___x_3454_);
v___x_3456_ = v___x_3445_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v___x_3454_);
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
v___jp_3460_:
{
uint8_t v_construct_3462_; uint64_t v___x_3463_; 
v_construct_3462_ = lean_ctor_get_uint8(v_b_3418_, sizeof(void*)*4);
v___x_3463_ = lean_uint64_lor(v___x_3459_, v___y_3461_);
if (v_construct_3462_ == 0)
{
uint64_t v___x_3464_; 
v___x_3464_ = 0ULL;
v___y_3423_ = v___x_3463_;
v___y_3424_ = v___x_3464_;
goto v___jp_3422_;
}
else
{
uint64_t v___x_3465_; 
v___x_3465_ = 4ULL;
v___y_3423_ = v___x_3463_;
v___y_3424_ = v___x_3465_;
goto v___jp_3422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0___boxed(lean_object* v_b_3468_, lean_object* v_args_3469_, lean_object* v_await_3470_, lean_object* v_a_3471_){
_start:
{
uint8_t v_await_boxed_3472_; lean_object* v_res_3473_; 
v_await_boxed_3472_ = lean_unbox(v_await_3470_);
v_res_3473_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v_b_3468_, v_args_3469_, v_await_boxed_3472_);
lean_dec_ref(v_b_3468_);
return v_res_3473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(lean_object* v_v_3482_){
_start:
{
uint8_t v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v___x_3484_ = 0;
v___x_3485_ = lean_unsigned_to_nat(1u);
v___x_3486_ = ((lean_object*)(l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__2));
v___x_3487_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3488_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3488_, 0, v_v_3482_);
lean_ctor_set(v___x_3488_, 1, v___x_3487_);
v___x_3489_ = lean_mk_empty_array_with_capacity(v___x_3485_);
v___x_3490_ = lean_array_push(v___x_3489_, v___x_3488_);
v___x_3491_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v___x_3486_, v___x_3490_, v___x_3484_);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___boxed(lean_object* v_v_3492_, lean_object* v_a_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_v_3492_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec(lean_object* v_self_3496_, lean_object* v_input_3497_, lean_object* v_baseURL_3498_){
_start:
{
lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3500_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_exec___closed__0));
v___x_3501_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_3497_);
v___x_3502_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_3498_);
v___x_3503_ = lean_unsigned_to_nat(2u);
v___x_3504_ = lean_mk_empty_array_with_capacity(v___x_3503_);
v___x_3505_ = lean_array_push(v___x_3504_, v___x_3501_);
v___x_3506_ = lean_array_push(v___x_3505_, v___x_3502_);
v___x_3507_ = l_Lasm_JS_Web_Support_args(v___x_3506_);
v___x_3508_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3496_, v___x_3500_, v___x_3507_);
if (lean_obj_tag(v___x_3508_) == 0)
{
lean_object* v_a_3509_; lean_object* v___x_3510_; 
v_a_3509_ = lean_ctor_get(v___x_3508_, 0);
lean_inc(v_a_3509_);
lean_dec_ref_known(v___x_3508_, 1);
v___x_3510_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_a_3509_);
return v___x_3510_;
}
else
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3518_; 
v_a_3511_ = lean_ctor_get(v___x_3508_, 0);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___x_3508_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3513_ = v___x_3508_;
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3508_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3516_; 
if (v_isShared_3514_ == 0)
{
v___x_3516_ = v___x_3513_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v_a_3511_);
v___x_3516_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
return v___x_3516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec___boxed(lean_object* v_self_3519_, lean_object* v_input_3520_, lean_object* v_baseURL_3521_, lean_object* v_a_3522_){
_start:
{
lean_object* v_res_3523_; 
v_res_3523_ = l_Lasm_JS_Web_URLPattern_exec(v_self_3519_, v_input_3520_, v_baseURL_3521_);
return v_res_3523_;
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
