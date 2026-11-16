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
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_cast_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_cast_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URL_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "URL"};
static const lean_object* l_Lasm_JS_Web_URL_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URL_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_URL_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URL_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_URL_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URL_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_URL_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_URL_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URL_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_URL_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URL_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Web_URL_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URL_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URL_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URL_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URL_new___closed__2_value;
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
static const lean_string_object l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "URLSearchParams"};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_URL_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Web_URLSearchParams_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLSearchParams_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URLSearchParams_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URLSearchParams_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_URLPattern_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "URLPattern"};
static const lean_object* l_Lasm_JS_Web_URLPattern_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_URLPattern_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLPattern_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_URLPattern_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_URLPattern_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_URL_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLPattern_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_URLPattern_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLPattern_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.URLPattern.new"};
static const lean_object* l_Lasm_JS_Web_URLPattern_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_URLPattern_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLPattern_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URLPattern_cast_x3f___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_URLPattern_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_URLPattern_newWithOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.URLPattern.newWithOptions"};
static const lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_URLPattern_newWithOptions___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_URLPattern_newWithOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_URLPattern_newWithOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Web_URL_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_URLPattern_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_cast_x3f___lam__0(lean_object* v___x_848_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_848_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_cast_x3f___lam__0___boxed(lean_object* v___x_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lasm_JS_Web_URL_cast_x3f___lam__0(v___x_851_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_cast_x3f(lean_object* v_v_860_){
_start:
{
lean_object* v___f_862_; lean_object* v___x_863_; 
v___f_862_ = ((lean_object*)(l_Lasm_JS_Web_URL_cast_x3f___closed__2));
lean_inc(v_v_860_);
v___x_863_ = l_Lasm_JS_Web_Support_isInstance(v___f_862_, v_v_860_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_877_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_877_ == 0)
{
v___x_866_ = v___x_863_;
v_isShared_867_ = v_isSharedCheck_877_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_863_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_877_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
uint8_t v___x_868_; 
v___x_868_ = lean_unbox(v_a_864_);
lean_dec(v_a_864_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; lean_object* v___x_871_; 
lean_dec(v_v_860_);
v___x_869_ = lean_box(0);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_869_);
v___x_871_ = v___x_866_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_869_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
else
{
lean_object* v___x_873_; lean_object* v___x_875_; 
v___x_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_873_, 0, v_v_860_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_873_);
v___x_875_ = v___x_866_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v___x_873_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
else
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
lean_dec(v_v_860_);
v_a_878_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_863_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_863_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_cast_x3f___boxed(lean_object* v_v_886_, lean_object* v_a_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lasm_JS_Web_URL_cast_x3f(v_v_886_);
return v_res_888_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_892_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_893_ = lean_string_utf8_byte_size(v___x_892_);
return v___x_893_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
v___x_894_ = lean_unsigned_to_nat(0u);
v___x_895_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3);
v___x_896_ = lean_nat_dec_eq(v___x_895_, v___x_894_);
return v___x_896_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_901_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__8));
v___x_902_ = lean_unsigned_to_nat(46u);
v___x_903_ = lean_unsigned_to_nat(193u);
v___x_904_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v___x_905_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6));
v___x_906_ = l_mkPanicMessageWithDecl(v___x_905_, v___x_904_, v___x_903_, v___x_902_, v___x_901_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(lean_object* v_context_908_, lean_object* v_d_909_){
_start:
{
lean_object* v___y_912_; lean_object* v___y_913_; 
if (lean_obj_tag(v_d_909_) == 9)
{
lean_object* v_value_917_; lean_object* v___x_918_; 
v_value_917_ = lean_ctor_get(v_d_909_, 0);
lean_inc(v_value_917_);
lean_dec_ref_known(v_d_909_, 2);
v___x_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_918_, 0, v_value_917_);
return v___x_918_;
}
else
{
lean_object* v___x_919_; lean_object* v_received_921_; 
v___x_919_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_909_) == 9)
{
lean_object* v_value_935_; lean_object* v_description_936_; uint8_t v___x_937_; 
v_value_935_ = lean_ctor_get(v_d_909_, 0);
v_description_936_ = lean_ctor_get(v_d_909_, 1);
v___x_937_ = lean_string_dec_eq(v_description_936_, v___x_919_);
if (v___x_937_ == 0)
{
goto v___jp_933_;
}
else
{
uint32_t v___x_938_; uint64_t v___x_939_; lean_object* v___x_940_; uint32_t v___x_941_; lean_object* v___x_942_; 
lean_inc_n(v_value_935_, 2);
lean_dec_ref_known(v_d_909_, 2);
v___x_938_ = 206;
v___x_939_ = 0ULL;
v___x_940_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_940_, 0, v_value_935_);
lean_ctor_set(v___x_940_, 1, v___x_919_);
v___x_941_ = lasm_js_value_handle(v_value_935_);
lean_dec(v_value_935_);
v___x_942_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_938_, v___x_939_, v___x_940_, v___x_941_);
lean_dec_ref_known(v___x_940_, 2);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; uint8_t v___x_944_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc(v_a_943_);
lean_dec_ref_known(v___x_942_, 1);
v___x_944_ = lean_string_validate_utf8(v_a_943_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; 
lean_dec(v_a_943_);
v___x_945_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_946_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_945_);
v_received_921_ = v___x_946_;
goto v___jp_920_;
}
else
{
lean_object* v___x_947_; 
v___x_947_ = lean_string_from_utf8_unchecked(v_a_943_);
v_received_921_ = v___x_947_;
goto v___jp_920_;
}
}
else
{
lean_object* v___x_948_; 
lean_dec_ref_known(v___x_942_, 1);
v___x_948_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_921_ = v___x_948_;
goto v___jp_920_;
}
}
}
else
{
goto v___jp_933_;
}
v___jp_920_:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; uint8_t v___x_931_; 
v___x_922_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_923_ = lean_string_append(v___x_922_, v_context_908_);
v___x_924_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_925_ = lean_string_append(v___x_923_, v___x_924_);
v___x_926_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURL___closed__1));
v___x_927_ = lean_string_append(v___x_925_, v___x_926_);
v___x_928_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_929_ = lean_string_append(v___x_927_, v___x_928_);
v___x_930_ = lean_string_append(v___x_929_, v_received_921_);
lean_dec_ref(v_received_921_);
v___x_931_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; 
v___x_932_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_912_ = v___x_930_;
v___y_913_ = v___x_932_;
goto v___jp_911_;
}
else
{
v___y_912_ = v___x_930_;
v___y_913_ = v___x_919_;
goto v___jp_911_;
}
}
v___jp_933_:
{
lean_object* v___x_934_; 
v___x_934_ = l_Lasm_JS_Data_describe(v_d_909_);
v_received_921_ = v___x_934_;
goto v___jp_920_;
}
}
v___jp_911_:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_914_ = lean_string_append(v___y_912_, v___y_913_);
v___x_915_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
v___x_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
return v___x_916_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___boxed(lean_object* v_context_949_, lean_object* v_d_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(v_context_949_, v_d_950_);
lean_dec_ref(v_context_949_);
return v_res_952_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_954_; uint64_t v___x_955_; 
v___x_954_ = 0;
v___x_955_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(lean_object* v_b_956_, lean_object* v_args_957_, uint8_t v_await_958_){
_start:
{
uint64_t v___y_961_; uint64_t v___y_962_; uint64_t v___x_1005_; uint64_t v___y_1007_; 
v___x_1005_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_958_ == 0)
{
uint64_t v___x_1012_; 
v___x_1012_ = 0ULL;
v___y_1007_ = v___x_1012_;
goto v___jp_1006_;
}
else
{
uint64_t v___x_1013_; 
v___x_1013_ = 2ULL;
v___y_1007_ = v___x_1013_;
goto v___jp_1006_;
}
v___jp_960_:
{
uint64_t v_flags_963_; uint32_t v___x_964_; lean_object* v___x_965_; uint32_t v___x_966_; lean_object* v___x_967_; 
v_flags_963_ = lean_uint64_lor(v___y_961_, v___y_962_);
v___x_964_ = 214;
v___x_965_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_956_, v_args_957_);
v___x_966_ = 0;
v___x_967_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_964_, v_flags_963_, v___x_965_, v___x_966_);
lean_dec(v___x_965_);
if (lean_obj_tag(v___x_967_) == 0)
{
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; lean_object* v___x_969_; 
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_967_, 1);
v___x_969_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_968_);
lean_dec(v_a_968_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v___x_971_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_956_);
v___x_972_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(v___x_971_, v_a_970_);
lean_dec_ref(v___x_971_);
return v___x_972_;
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
v_a_973_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_969_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_969_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
v_a_981_ = lean_ctor_get(v___x_967_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_967_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_967_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_967_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
lean_ctor_set_tag(v___x_983_, 1);
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1004_; 
v_a_989_ = lean_ctor_get(v___x_967_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_967_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_991_ = v___x_967_;
v_isShared_992_ = v_isSharedCheck_1004_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_967_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1004_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_993_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_994_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_956_);
v___x_995_ = lean_string_append(v___x_993_, v___x_994_);
lean_dec_ref(v___x_994_);
v___x_996_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_997_ = lean_string_append(v___x_995_, v___x_996_);
v___x_998_ = lean_io_error_to_string(v_a_989_);
v___x_999_ = lean_string_append(v___x_997_, v___x_998_);
lean_dec_ref(v___x_998_);
v___x_1000_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 0, v___x_1000_);
v___x_1002_ = v___x_991_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_1000_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
v___jp_1006_:
{
uint8_t v_construct_1008_; uint64_t v___x_1009_; 
v_construct_1008_ = lean_ctor_get_uint8(v_b_956_, sizeof(void*)*4);
v___x_1009_ = lean_uint64_lor(v___x_1005_, v___y_1007_);
if (v_construct_1008_ == 0)
{
uint64_t v___x_1010_; 
v___x_1010_ = 0ULL;
v___y_961_ = v___x_1009_;
v___y_962_ = v___x_1010_;
goto v___jp_960_;
}
else
{
uint64_t v___x_1011_; 
v___x_1011_ = 4ULL;
v___y_961_ = v___x_1009_;
v___y_962_ = v___x_1011_;
goto v___jp_960_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___boxed(lean_object* v_b_1014_, lean_object* v_args_1015_, lean_object* v_await_1016_, lean_object* v_a_1017_){
_start:
{
uint8_t v_await_boxed_1018_; lean_object* v_res_1019_; 
v_await_boxed_1018_ = lean_unbox(v_await_1016_);
v_res_1019_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(v_b_1014_, v_args_1015_, v_await_boxed_1018_);
lean_dec_ref(v_b_1014_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_new(lean_object* v_url_1028_, lean_object* v_base_1029_){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; lean_object* v___x_1040_; 
v___x_1031_ = lean_unsigned_to_nat(2u);
v___x_1032_ = ((lean_object*)(l_Lasm_JS_Web_URL_new___closed__2));
v___x_1033_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1033_, 0, v_url_1028_);
v___x_1034_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1029_);
v___x_1035_ = lean_mk_empty_array_with_capacity(v___x_1031_);
v___x_1036_ = lean_array_push(v___x_1035_, v___x_1033_);
v___x_1037_ = lean_array_push(v___x_1036_, v___x_1034_);
v___x_1038_ = l_Lasm_JS_Web_Support_args(v___x_1037_);
v___x_1039_ = 0;
v___x_1040_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(v___x_1032_, v___x_1038_, v___x_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_new___boxed(lean_object* v_url_1041_, lean_object* v_base_1042_, lean_object* v_a_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Lasm_JS_Web_URL_new(v_url_1041_, v_base_1042_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_href(lean_object* v_self_1046_){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l_Lasm_JS_Web_URL_href___closed__0));
v___x_1049_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1046_, v___x_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_href___boxed(lean_object* v_self_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lasm_JS_Web_URL_href(v_self_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHref(lean_object* v_self_1053_, lean_object* v_value_1054_){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1056_ = ((lean_object*)(l_Lasm_JS_Web_URL_href___closed__0));
v___x_1057_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1057_, 0, v_value_1054_);
v___x_1058_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1053_, v___x_1056_, v___x_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHref___boxed(lean_object* v_self_1059_, lean_object* v_value_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lasm_JS_Web_URL_setHref(v_self_1059_, v_value_1060_);
return v_res_1062_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1063_; uint8_t v___x_1064_; uint64_t v___x_1065_; 
v___x_1063_ = 8ULL;
v___x_1064_ = 0;
v___x_1065_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v___x_1064_, v___x_1063_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(lean_object* v_o_1067_, lean_object* v_name_1068_, lean_object* v_args_1069_){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; uint64_t v___x_1074_; lean_object* v___x_1075_; 
v___x_1071_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_1072_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1072_, 0, v_o_1067_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
lean_inc_ref(v_name_1068_);
v___x_1073_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1073_, 0, v_name_1068_);
v___x_1074_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__0);
v___x_1075_ = l_Lasm_JS_Value_invokeRaw(v___x_1072_, v___x_1073_, v_args_1069_, v___x_1074_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_1078_ = lean_string_append(v___x_1077_, v_name_1068_);
lean_dec_ref(v_name_1068_);
v___x_1079_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_1078_, v_a_1076_);
lean_dec(v_a_1076_);
lean_dec_ref(v___x_1078_);
return v___x_1079_;
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_dec_ref(v_name_1068_);
v_a_1080_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1075_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1075_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___boxed(lean_object* v_o_1088_, lean_object* v_name_1089_, lean_object* v_args_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_o_1088_, v_name_1089_, v_args_1090_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toString(lean_object* v_self_1096_){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1098_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__0));
v___x_1099_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1100_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1096_, v___x_1098_, v___x_1099_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toString___boxed(lean_object* v_self_1101_, lean_object* v_a_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_Lasm_JS_Web_URL_toString(v_self_1101_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_origin(lean_object* v_self_1105_){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = ((lean_object*)(l_Lasm_JS_Web_URL_origin___closed__0));
v___x_1108_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1105_, v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_origin___boxed(lean_object* v_self_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lasm_JS_Web_URL_origin(v_self_1109_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_protocol(lean_object* v_self_1112_){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_1115_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1112_, v___x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_protocol___boxed(lean_object* v_self_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lasm_JS_Web_URL_protocol(v_self_1116_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setProtocol(lean_object* v_self_1119_, lean_object* v_value_1120_){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1122_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_1123_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1123_, 0, v_value_1120_);
v___x_1124_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1119_, v___x_1122_, v___x_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setProtocol___boxed(lean_object* v_self_1125_, lean_object* v_value_1126_, lean_object* v_a_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lasm_JS_Web_URL_setProtocol(v_self_1125_, v_value_1126_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_username(lean_object* v_self_1129_){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_1132_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1129_, v___x_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_username___boxed(lean_object* v_self_1133_, lean_object* v_a_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Lasm_JS_Web_URL_username(v_self_1133_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setUsername(lean_object* v_self_1136_, lean_object* v_value_1137_){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1139_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_1140_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1140_, 0, v_value_1137_);
v___x_1141_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1136_, v___x_1139_, v___x_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setUsername___boxed(lean_object* v_self_1142_, lean_object* v_value_1143_, lean_object* v_a_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Lasm_JS_Web_URL_setUsername(v_self_1142_, v_value_1143_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_password(lean_object* v_self_1146_){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1148_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_1149_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1146_, v___x_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_password___boxed(lean_object* v_self_1150_, lean_object* v_a_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l_Lasm_JS_Web_URL_password(v_self_1150_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPassword(lean_object* v_self_1153_, lean_object* v_value_1154_){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1156_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_1157_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1157_, 0, v_value_1154_);
v___x_1158_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1153_, v___x_1156_, v___x_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPassword___boxed(lean_object* v_self_1159_, lean_object* v_value_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lasm_JS_Web_URL_setPassword(v_self_1159_, v_value_1160_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_host(lean_object* v_self_1164_){
_start:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1166_ = ((lean_object*)(l_Lasm_JS_Web_URL_host___closed__0));
v___x_1167_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1164_, v___x_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_host___boxed(lean_object* v_self_1168_, lean_object* v_a_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lasm_JS_Web_URL_host(v_self_1168_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHost(lean_object* v_self_1171_, lean_object* v_value_1172_){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1174_ = ((lean_object*)(l_Lasm_JS_Web_URL_host___closed__0));
v___x_1175_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1175_, 0, v_value_1172_);
v___x_1176_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1171_, v___x_1174_, v___x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHost___boxed(lean_object* v_self_1177_, lean_object* v_value_1178_, lean_object* v_a_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Lasm_JS_Web_URL_setHost(v_self_1177_, v_value_1178_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hostname(lean_object* v_self_1181_){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_1184_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1181_, v___x_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hostname___boxed(lean_object* v_self_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lasm_JS_Web_URL_hostname(v_self_1185_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHostname(lean_object* v_self_1188_, lean_object* v_value_1189_){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1191_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_1192_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_value_1189_);
v___x_1193_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1188_, v___x_1191_, v___x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHostname___boxed(lean_object* v_self_1194_, lean_object* v_value_1195_, lean_object* v_a_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lasm_JS_Web_URL_setHostname(v_self_1194_, v_value_1195_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_port(lean_object* v_self_1198_){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_1201_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1198_, v___x_1200_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_port___boxed(lean_object* v_self_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lasm_JS_Web_URL_port(v_self_1202_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPort(lean_object* v_self_1205_, lean_object* v_value_1206_){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_1209_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1209_, 0, v_value_1206_);
v___x_1210_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1205_, v___x_1208_, v___x_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPort___boxed(lean_object* v_self_1211_, lean_object* v_value_1212_, lean_object* v_a_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lasm_JS_Web_URL_setPort(v_self_1211_, v_value_1212_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_pathname(lean_object* v_self_1215_){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_1218_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1215_, v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_pathname___boxed(lean_object* v_self_1219_, lean_object* v_a_1220_){
_start:
{
lean_object* v_res_1221_; 
v_res_1221_ = l_Lasm_JS_Web_URL_pathname(v_self_1219_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPathname(lean_object* v_self_1222_, lean_object* v_value_1223_){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1225_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_1226_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_value_1223_);
v___x_1227_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1222_, v___x_1225_, v___x_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setPathname___boxed(lean_object* v_self_1228_, lean_object* v_value_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lasm_JS_Web_URL_setPathname(v_self_1228_, v_value_1229_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_search(lean_object* v_self_1232_){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_1235_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1232_, v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_search___boxed(lean_object* v_self_1236_, lean_object* v_a_1237_){
_start:
{
lean_object* v_res_1238_; 
v_res_1238_ = l_Lasm_JS_Web_URL_search(v_self_1236_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setSearch(lean_object* v_self_1239_, lean_object* v_value_1240_){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1242_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_1243_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1243_, 0, v_value_1240_);
v___x_1244_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1239_, v___x_1242_, v___x_1243_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setSearch___boxed(lean_object* v_self_1245_, lean_object* v_value_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lasm_JS_Web_URL_setSearch(v_self_1245_, v_value_1246_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams(lean_object* v_self_1250_){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = ((lean_object*)(l_Lasm_JS_Web_URL_searchParams___closed__0));
v___x_1253_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1250_, v___x_1252_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1261_; 
v_a_1254_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1256_ = v___x_1253_;
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v___x_1253_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1259_; 
if (v_isShared_1257_ == 0)
{
v___x_1259_ = v___x_1256_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_a_1254_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1269_; 
v_a_1262_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1264_ = v___x_1253_;
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1253_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1269_;
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
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_a_1262_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams___boxed(lean_object* v_self_1270_, lean_object* v_a_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lasm_JS_Web_URL_searchParams(v_self_1270_);
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash(lean_object* v_self_1273_){
_start:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_1276_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1273_, v___x_1275_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash___boxed(lean_object* v_self_1277_, lean_object* v_a_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Lasm_JS_Web_URL_hash(v_self_1277_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash(lean_object* v_self_1280_, lean_object* v_value_1281_){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1283_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_1284_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1284_, 0, v_value_1281_);
v___x_1285_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1280_, v___x_1283_, v___x_1284_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash___boxed(lean_object* v_self_1286_, lean_object* v_value_1287_, lean_object* v_a_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lasm_JS_Web_URL_setHash(v_self_1286_, v_value_1287_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(lean_object* v_b_1290_, lean_object* v_args_1291_, uint8_t v_await_1292_){
_start:
{
uint64_t v___y_1295_; uint64_t v___y_1296_; uint64_t v___x_1339_; uint64_t v___y_1341_; 
v___x_1339_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1292_ == 0)
{
uint64_t v___x_1346_; 
v___x_1346_ = 0ULL;
v___y_1341_ = v___x_1346_;
goto v___jp_1340_;
}
else
{
uint64_t v___x_1347_; 
v___x_1347_ = 2ULL;
v___y_1341_ = v___x_1347_;
goto v___jp_1340_;
}
v___jp_1294_:
{
uint64_t v_flags_1297_; uint32_t v___x_1298_; lean_object* v___x_1299_; uint32_t v___x_1300_; lean_object* v___x_1301_; 
v_flags_1297_ = lean_uint64_lor(v___y_1295_, v___y_1296_);
v___x_1298_ = 214;
v___x_1299_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1290_, v_args_1291_);
v___x_1300_ = 0;
v___x_1301_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1298_, v_flags_1297_, v___x_1299_, v___x_1300_);
lean_dec(v___x_1299_);
if (lean_obj_tag(v___x_1301_) == 0)
{
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v_a_1302_; lean_object* v___x_1303_; 
v_a_1302_ = lean_ctor_get(v___x_1301_, 0);
lean_inc(v_a_1302_);
lean_dec_ref_known(v___x_1301_, 1);
v___x_1303_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1302_);
lean_dec(v_a_1302_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1303_, 1);
v___x_1305_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1290_);
v___x_1306_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v___x_1305_, v_a_1304_);
lean_dec_ref(v___x_1305_);
return v___x_1306_;
}
else
{
lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1314_; 
v_a_1307_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1309_ = v___x_1303_;
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_dec(v___x_1303_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1312_; 
if (v_isShared_1310_ == 0)
{
v___x_1312_ = v___x_1309_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1307_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
}
else
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1322_; 
v_a_1315_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1317_ = v___x_1301_;
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v___x_1301_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
lean_ctor_set_tag(v___x_1317_, 1);
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_a_1315_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
}
else
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1338_; 
v_a_1323_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1325_ = v___x_1301_;
v_isShared_1326_ = v_isSharedCheck_1338_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1301_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1338_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1336_; 
v___x_1327_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1328_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1290_);
v___x_1329_ = lean_string_append(v___x_1327_, v___x_1328_);
lean_dec_ref(v___x_1328_);
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1331_ = lean_string_append(v___x_1329_, v___x_1330_);
v___x_1332_ = lean_io_error_to_string(v_a_1323_);
v___x_1333_ = lean_string_append(v___x_1331_, v___x_1332_);
lean_dec_ref(v___x_1332_);
v___x_1334_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 0, v___x_1334_);
v___x_1336_ = v___x_1325_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
}
v___jp_1340_:
{
uint8_t v_construct_1342_; uint64_t v___x_1343_; 
v_construct_1342_ = lean_ctor_get_uint8(v_b_1290_, sizeof(void*)*4);
v___x_1343_ = lean_uint64_lor(v___x_1339_, v___y_1341_);
if (v_construct_1342_ == 0)
{
uint64_t v___x_1344_; 
v___x_1344_ = 0ULL;
v___y_1295_ = v___x_1343_;
v___y_1296_ = v___x_1344_;
goto v___jp_1294_;
}
else
{
uint64_t v___x_1345_; 
v___x_1345_ = 4ULL;
v___y_1295_ = v___x_1343_;
v___y_1296_ = v___x_1345_;
goto v___jp_1294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0___boxed(lean_object* v_b_1348_, lean_object* v_args_1349_, lean_object* v_await_1350_, lean_object* v_a_1351_){
_start:
{
uint8_t v_await_boxed_1352_; lean_object* v_res_1353_; 
v_await_boxed_1352_ = lean_unbox(v_await_1350_);
v_res_1353_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v_b_1348_, v_args_1349_, v_await_boxed_1352_);
lean_dec_ref(v_b_1348_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL(lean_object* v_obj_1362_){
_start:
{
uint8_t v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___y_1368_; lean_object* v_value_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1364_ = 0;
v___x_1365_ = lean_unsigned_to_nat(1u);
v___x_1366_ = ((lean_object*)(l_Lasm_JS_Web_URL_createObjectURL___closed__2));
v_value_1373_ = lean_ctor_get(v_obj_1362_, 0);
v___x_1374_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
lean_inc(v_value_1373_);
v___x_1375_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1375_, 0, v_value_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
v___y_1368_ = v___x_1375_;
goto v___jp_1367_;
v___jp_1367_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1369_ = lean_mk_empty_array_with_capacity(v___x_1365_);
v___x_1370_ = lean_array_push(v___x_1369_, v___y_1368_);
v___x_1371_ = l_Lasm_JS_Web_Support_args(v___x_1370_);
v___x_1372_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_1366_, v___x_1371_, v___x_1364_);
return v___x_1372_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL___boxed(lean_object* v_obj_1376_, lean_object* v_a_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Lasm_JS_Web_URL_createObjectURL(v_obj_1376_);
lean_dec_ref(v_obj_1376_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(lean_object* v_b_1379_, lean_object* v_args_1380_, uint8_t v_await_1381_){
_start:
{
uint64_t v___y_1384_; uint64_t v___y_1385_; uint64_t v___x_1426_; uint64_t v___y_1428_; 
v___x_1426_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1381_ == 0)
{
uint64_t v___x_1433_; 
v___x_1433_ = 0ULL;
v___y_1428_ = v___x_1433_;
goto v___jp_1427_;
}
else
{
uint64_t v___x_1434_; 
v___x_1434_ = 2ULL;
v___y_1428_ = v___x_1434_;
goto v___jp_1427_;
}
v___jp_1383_:
{
uint64_t v_flags_1386_; uint32_t v___x_1387_; lean_object* v___x_1388_; uint32_t v___x_1389_; lean_object* v___x_1390_; 
v_flags_1386_ = lean_uint64_lor(v___y_1384_, v___y_1385_);
v___x_1387_ = 214;
v___x_1388_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1379_, v_args_1380_);
v___x_1389_ = 0;
v___x_1390_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1387_, v_flags_1386_, v___x_1388_, v___x_1389_);
lean_dec(v___x_1388_);
if (lean_obj_tag(v___x_1390_) == 0)
{
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1392_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
v___x_1392_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1391_);
lean_dec(v_a_1391_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v___x_1393_; 
lean_dec_ref_known(v___x_1392_, 1);
v___x_1393_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_1393_;
}
else
{
lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1401_; 
v_a_1394_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1401_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1396_ = v___x_1392_;
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v___x_1392_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_a_1394_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
}
}
else
{
lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1409_; 
v_a_1402_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1404_ = v___x_1390_;
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_dec(v___x_1390_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1407_; 
if (v_isShared_1405_ == 0)
{
lean_ctor_set_tag(v___x_1404_, 1);
v___x_1407_ = v___x_1404_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_a_1402_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1425_; 
v_a_1410_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1412_ = v___x_1390_;
v_isShared_1413_ = v_isSharedCheck_1425_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1390_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1425_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1423_; 
v___x_1414_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1415_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1379_);
v___x_1416_ = lean_string_append(v___x_1414_, v___x_1415_);
lean_dec_ref(v___x_1415_);
v___x_1417_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1418_ = lean_string_append(v___x_1416_, v___x_1417_);
v___x_1419_ = lean_io_error_to_string(v_a_1410_);
v___x_1420_ = lean_string_append(v___x_1418_, v___x_1419_);
lean_dec_ref(v___x_1419_);
v___x_1421_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v___x_1421_);
v___x_1423_ = v___x_1412_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
}
v___jp_1427_:
{
uint8_t v_construct_1429_; uint64_t v___x_1430_; 
v_construct_1429_ = lean_ctor_get_uint8(v_b_1379_, sizeof(void*)*4);
v___x_1430_ = lean_uint64_lor(v___x_1426_, v___y_1428_);
if (v_construct_1429_ == 0)
{
uint64_t v___x_1431_; 
v___x_1431_ = 0ULL;
v___y_1384_ = v___x_1430_;
v___y_1385_ = v___x_1431_;
goto v___jp_1383_;
}
else
{
uint64_t v___x_1432_; 
v___x_1432_ = 4ULL;
v___y_1384_ = v___x_1430_;
v___y_1385_ = v___x_1432_;
goto v___jp_1383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0___boxed(lean_object* v_b_1435_, lean_object* v_args_1436_, lean_object* v_await_1437_, lean_object* v_a_1438_){
_start:
{
uint8_t v_await_boxed_1439_; lean_object* v_res_1440_; 
v_await_boxed_1439_ = lean_unbox(v_await_1437_);
v_res_1440_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v_b_1435_, v_args_1436_, v_await_boxed_1439_);
lean_dec_ref(v_b_1435_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL(lean_object* v_url_1449_){
_start:
{
uint8_t v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1451_ = 0;
v___x_1452_ = lean_unsigned_to_nat(1u);
v___x_1453_ = ((lean_object*)(l_Lasm_JS_Web_URL_revokeObjectURL___closed__2));
v___x_1454_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_url_1449_);
v___x_1455_ = lean_mk_empty_array_with_capacity(v___x_1452_);
v___x_1456_ = lean_array_push(v___x_1455_, v___x_1454_);
v___x_1457_ = l_Lasm_JS_Web_Support_args(v___x_1456_);
v___x_1458_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_1453_, v___x_1457_, v___x_1451_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL___boxed(lean_object* v_url_1459_, lean_object* v_a_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lasm_JS_Web_URL_revokeObjectURL(v_url_1459_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(lean_object* v_context_1463_, lean_object* v_d_1464_){
_start:
{
lean_object* v___y_1470_; lean_object* v___y_1471_; 
switch(lean_obj_tag(v_d_1464_))
{
case 1:
{
goto v___jp_1466_;
}
case 0:
{
goto v___jp_1466_;
}
default: 
{
if (lean_obj_tag(v_d_1464_) == 9)
{
lean_object* v_value_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v_value_1475_ = lean_ctor_get(v_d_1464_, 0);
lean_inc(v_value_1475_);
lean_dec_ref_known(v_d_1464_, 2);
v___x_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1476_, 0, v_value_1475_);
v___x_1477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1476_);
return v___x_1477_;
}
else
{
lean_object* v___x_1478_; lean_object* v_received_1480_; 
v___x_1478_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1464_) == 9)
{
lean_object* v_value_1494_; lean_object* v_description_1495_; uint8_t v___x_1496_; 
v_value_1494_ = lean_ctor_get(v_d_1464_, 0);
v_description_1495_ = lean_ctor_get(v_d_1464_, 1);
v___x_1496_ = lean_string_dec_eq(v_description_1495_, v___x_1478_);
if (v___x_1496_ == 0)
{
goto v___jp_1492_;
}
else
{
uint32_t v___x_1497_; uint64_t v___x_1498_; lean_object* v___x_1499_; uint32_t v___x_1500_; lean_object* v___x_1501_; 
lean_inc_n(v_value_1494_, 2);
lean_dec_ref_known(v_d_1464_, 2);
v___x_1497_ = 206;
v___x_1498_ = 0ULL;
v___x_1499_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1499_, 0, v_value_1494_);
lean_ctor_set(v___x_1499_, 1, v___x_1478_);
v___x_1500_ = lasm_js_value_handle(v_value_1494_);
lean_dec(v_value_1494_);
v___x_1501_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1497_, v___x_1498_, v___x_1499_, v___x_1500_);
lean_dec_ref_known(v___x_1499_, 2);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; uint8_t v___x_1503_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = lean_string_validate_utf8(v_a_1502_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1504_; lean_object* v___x_1505_; 
lean_dec(v_a_1502_);
v___x_1504_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_1505_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1504_);
v_received_1480_ = v___x_1505_;
goto v___jp_1479_;
}
else
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_string_from_utf8_unchecked(v_a_1502_);
v_received_1480_ = v___x_1506_;
goto v___jp_1479_;
}
}
else
{
lean_object* v___x_1507_; 
lean_dec_ref_known(v___x_1501_, 1);
v___x_1507_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1480_ = v___x_1507_;
goto v___jp_1479_;
}
}
}
else
{
goto v___jp_1492_;
}
v___jp_1479_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; uint8_t v___x_1490_; 
v___x_1481_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1482_ = lean_string_append(v___x_1481_, v_context_1463_);
v___x_1483_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1484_ = lean_string_append(v___x_1482_, v___x_1483_);
v___x_1485_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___closed__0));
v___x_1486_ = lean_string_append(v___x_1484_, v___x_1485_);
v___x_1487_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1488_ = lean_string_append(v___x_1486_, v___x_1487_);
v___x_1489_ = lean_string_append(v___x_1488_, v_received_1480_);
lean_dec_ref(v_received_1480_);
v___x_1490_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1490_ == 0)
{
lean_object* v___x_1491_; 
v___x_1491_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1470_ = v___x_1489_;
v___y_1471_ = v___x_1491_;
goto v___jp_1469_;
}
else
{
v___y_1470_ = v___x_1489_;
v___y_1471_ = v___x_1478_;
goto v___jp_1469_;
}
}
v___jp_1492_:
{
lean_object* v___x_1493_; 
v___x_1493_ = l_Lasm_JS_Data_describe(v_d_1464_);
v_received_1480_ = v___x_1493_;
goto v___jp_1479_;
}
}
}
}
v___jp_1466_:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1467_ = lean_box(0);
v___x_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1467_);
return v___x_1468_;
}
v___jp_1469_:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1472_ = lean_string_append(v___y_1470_, v___y_1471_);
v___x_1473_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
v___x_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
return v___x_1474_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___boxed(lean_object* v_context_1508_, lean_object* v_d_1509_, lean_object* v_a_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v_context_1508_, v_d_1509_);
lean_dec_ref(v_context_1508_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(lean_object* v_b_1512_, lean_object* v_args_1513_, uint8_t v_await_1514_){
_start:
{
uint64_t v___y_1517_; uint64_t v___y_1518_; uint64_t v___x_1561_; uint64_t v___y_1563_; 
v___x_1561_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1514_ == 0)
{
uint64_t v___x_1568_; 
v___x_1568_ = 0ULL;
v___y_1563_ = v___x_1568_;
goto v___jp_1562_;
}
else
{
uint64_t v___x_1569_; 
v___x_1569_ = 2ULL;
v___y_1563_ = v___x_1569_;
goto v___jp_1562_;
}
v___jp_1516_:
{
uint64_t v_flags_1519_; uint32_t v___x_1520_; lean_object* v___x_1521_; uint32_t v___x_1522_; lean_object* v___x_1523_; 
v_flags_1519_ = lean_uint64_lor(v___y_1517_, v___y_1518_);
v___x_1520_ = 214;
v___x_1521_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1512_, v_args_1513_);
v___x_1522_ = 0;
v___x_1523_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1520_, v_flags_1519_, v___x_1521_, v___x_1522_);
lean_dec(v___x_1521_);
if (lean_obj_tag(v___x_1523_) == 0)
{
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1525_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
v___x_1525_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1524_);
lean_dec(v_a_1524_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref_known(v___x_1525_, 1);
v___x_1527_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1512_);
v___x_1528_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v___x_1527_, v_a_1526_);
lean_dec_ref(v___x_1527_);
return v___x_1528_;
}
else
{
lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1536_; 
v_a_1529_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1531_ = v___x_1525_;
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_dec(v___x_1525_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
if (v_isShared_1532_ == 0)
{
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_a_1529_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
else
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
v_a_1537_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1539_ = v___x_1523_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v___x_1523_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
lean_ctor_set_tag(v___x_1539_, 1);
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1537_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1560_; 
v_a_1545_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1547_ = v___x_1523_;
v_isShared_1548_ = v_isSharedCheck_1560_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1523_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1560_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1558_; 
v___x_1549_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1550_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1512_);
v___x_1551_ = lean_string_append(v___x_1549_, v___x_1550_);
lean_dec_ref(v___x_1550_);
v___x_1552_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1553_ = lean_string_append(v___x_1551_, v___x_1552_);
v___x_1554_ = lean_io_error_to_string(v_a_1545_);
v___x_1555_ = lean_string_append(v___x_1553_, v___x_1554_);
lean_dec_ref(v___x_1554_);
v___x_1556_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 0, v___x_1556_);
v___x_1558_ = v___x_1547_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1556_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
v___jp_1562_:
{
uint8_t v_construct_1564_; uint64_t v___x_1565_; 
v_construct_1564_ = lean_ctor_get_uint8(v_b_1512_, sizeof(void*)*4);
v___x_1565_ = lean_uint64_lor(v___x_1561_, v___y_1563_);
if (v_construct_1564_ == 0)
{
uint64_t v___x_1566_; 
v___x_1566_ = 0ULL;
v___y_1517_ = v___x_1565_;
v___y_1518_ = v___x_1566_;
goto v___jp_1516_;
}
else
{
uint64_t v___x_1567_; 
v___x_1567_ = 4ULL;
v___y_1517_ = v___x_1565_;
v___y_1518_ = v___x_1567_;
goto v___jp_1516_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0___boxed(lean_object* v_b_1570_, lean_object* v_args_1571_, lean_object* v_await_1572_, lean_object* v_a_1573_){
_start:
{
uint8_t v_await_boxed_1574_; lean_object* v_res_1575_; 
v_await_boxed_1574_ = lean_unbox(v_await_1572_);
v_res_1575_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v_b_1570_, v_args_1571_, v_await_boxed_1574_);
lean_dec_ref(v_b_1570_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse(lean_object* v_url_1584_, lean_object* v_base_1585_){
_start:
{
uint8_t v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1587_ = 0;
v___x_1588_ = lean_unsigned_to_nat(2u);
v___x_1589_ = ((lean_object*)(l_Lasm_JS_Web_URL_parse___closed__2));
v___x_1590_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1590_, 0, v_url_1584_);
v___x_1591_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1585_);
v___x_1592_ = lean_mk_empty_array_with_capacity(v___x_1588_);
v___x_1593_ = lean_array_push(v___x_1592_, v___x_1590_);
v___x_1594_ = lean_array_push(v___x_1593_, v___x_1591_);
v___x_1595_ = l_Lasm_JS_Web_Support_args(v___x_1594_);
v___x_1596_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v___x_1589_, v___x_1595_, v___x_1587_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse___boxed(lean_object* v_url_1597_, lean_object* v_base_1598_, lean_object* v_a_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Lasm_JS_Web_URL_parse(v_url_1597_, v_base_1598_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(lean_object* v_b_1601_, lean_object* v_args_1602_, uint8_t v_await_1603_){
_start:
{
uint64_t v___y_1606_; uint64_t v___y_1607_; uint64_t v___x_1650_; uint64_t v___y_1652_; 
v___x_1650_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1603_ == 0)
{
uint64_t v___x_1657_; 
v___x_1657_ = 0ULL;
v___y_1652_ = v___x_1657_;
goto v___jp_1651_;
}
else
{
uint64_t v___x_1658_; 
v___x_1658_ = 2ULL;
v___y_1652_ = v___x_1658_;
goto v___jp_1651_;
}
v___jp_1605_:
{
uint64_t v_flags_1608_; uint32_t v___x_1609_; lean_object* v___x_1610_; uint32_t v___x_1611_; lean_object* v___x_1612_; 
v_flags_1608_ = lean_uint64_lor(v___y_1606_, v___y_1607_);
v___x_1609_ = 214;
v___x_1610_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1601_, v_args_1602_);
v___x_1611_ = 0;
v___x_1612_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1609_, v_flags_1608_, v___x_1610_, v___x_1611_);
lean_dec(v___x_1610_);
if (lean_obj_tag(v___x_1612_) == 0)
{
if (lean_obj_tag(v___x_1612_) == 0)
{
lean_object* v_a_1613_; lean_object* v___x_1614_; 
v_a_1613_ = lean_ctor_get(v___x_1612_, 0);
lean_inc(v_a_1613_);
lean_dec_ref_known(v___x_1612_, 1);
v___x_1614_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1613_);
lean_dec(v_a_1613_);
if (lean_obj_tag(v___x_1614_) == 0)
{
lean_object* v_a_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v_a_1615_ = lean_ctor_get(v___x_1614_, 0);
lean_inc(v_a_1615_);
lean_dec_ref_known(v___x_1614_, 1);
v___x_1616_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1601_);
v___x_1617_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(v___x_1616_, v_a_1615_);
lean_dec_ref(v___x_1616_);
return v___x_1617_;
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
v_a_1618_ = lean_ctor_get(v___x_1614_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1614_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1614_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1614_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
else
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
v_a_1626_ = lean_ctor_get(v___x_1612_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1612_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1628_ = v___x_1612_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1612_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
lean_ctor_set_tag(v___x_1628_, 1);
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1649_; 
v_a_1634_ = lean_ctor_get(v___x_1612_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1612_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1636_ = v___x_1612_;
v_isShared_1637_ = v_isSharedCheck_1649_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1612_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1649_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1647_; 
v___x_1638_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1639_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1601_);
v___x_1640_ = lean_string_append(v___x_1638_, v___x_1639_);
lean_dec_ref(v___x_1639_);
v___x_1641_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1642_ = lean_string_append(v___x_1640_, v___x_1641_);
v___x_1643_ = lean_io_error_to_string(v_a_1634_);
v___x_1644_ = lean_string_append(v___x_1642_, v___x_1643_);
lean_dec_ref(v___x_1643_);
v___x_1645_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 0, v___x_1645_);
v___x_1647_ = v___x_1636_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v___x_1645_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
v___jp_1651_:
{
uint8_t v_construct_1653_; uint64_t v___x_1654_; 
v_construct_1653_ = lean_ctor_get_uint8(v_b_1601_, sizeof(void*)*4);
v___x_1654_ = lean_uint64_lor(v___x_1650_, v___y_1652_);
if (v_construct_1653_ == 0)
{
uint64_t v___x_1655_; 
v___x_1655_ = 0ULL;
v___y_1606_ = v___x_1654_;
v___y_1607_ = v___x_1655_;
goto v___jp_1605_;
}
else
{
uint64_t v___x_1656_; 
v___x_1656_ = 4ULL;
v___y_1606_ = v___x_1654_;
v___y_1607_ = v___x_1656_;
goto v___jp_1605_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0___boxed(lean_object* v_b_1659_, lean_object* v_args_1660_, lean_object* v_await_1661_, lean_object* v_a_1662_){
_start:
{
uint8_t v_await_boxed_1663_; lean_object* v_res_1664_; 
v_await_boxed_1663_ = lean_unbox(v_await_1661_);
v_res_1664_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v_b_1659_, v_args_1660_, v_await_boxed_1663_);
lean_dec_ref(v_b_1659_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse(lean_object* v_url_1673_, lean_object* v_base_1674_){
_start:
{
uint8_t v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___x_1676_ = 0;
v___x_1677_ = lean_unsigned_to_nat(2u);
v___x_1678_ = ((lean_object*)(l_Lasm_JS_Web_URL_canParse___closed__2));
v___x_1679_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1679_, 0, v_url_1673_);
v___x_1680_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1674_);
v___x_1681_ = lean_mk_empty_array_with_capacity(v___x_1677_);
v___x_1682_ = lean_array_push(v___x_1681_, v___x_1679_);
v___x_1683_ = lean_array_push(v___x_1682_, v___x_1680_);
v___x_1684_ = l_Lasm_JS_Web_Support_args(v___x_1683_);
v___x_1685_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v___x_1678_, v___x_1684_, v___x_1676_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse___boxed(lean_object* v_url_1686_, lean_object* v_base_1687_, lean_object* v_a_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l_Lasm_JS_Web_URL_canParse(v_url_1686_, v_base_1687_);
return v_res_1689_;
}
}
static lean_object* _init_l_Lasm_JS_Web_URL_toJSON___closed__1(void){
_start:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1691_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1692_ = l_Lasm_JS_Web_Support_args(v___x_1691_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON(lean_object* v_self_1693_){
_start:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1695_ = ((lean_object*)(l_Lasm_JS_Web_URL_toJSON___closed__0));
v___x_1696_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_1697_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1693_, v___x_1695_, v___x_1696_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON___boxed(lean_object* v_self_1698_, lean_object* v_a_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Lasm_JS_Web_URL_toJSON(v_self_1698_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_cast_x3f(lean_object* v_v_1707_){
_start:
{
lean_object* v___f_1709_; lean_object* v___x_1710_; 
v___f_1709_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_cast_x3f___closed__2));
lean_inc(v_v_1707_);
v___x_1710_ = l_Lasm_JS_Web_Support_isInstance(v___f_1709_, v_v_1707_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1724_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1713_ = v___x_1710_;
v_isShared_1714_ = v_isSharedCheck_1724_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1710_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1724_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
uint8_t v___x_1715_; 
v___x_1715_ = lean_unbox(v_a_1711_);
lean_dec(v_a_1711_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; lean_object* v___x_1718_; 
lean_dec(v_v_1707_);
v___x_1716_ = lean_box(0);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1716_);
v___x_1718_ = v___x_1713_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v___x_1716_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
else
{
lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1720_, 0, v_v_1707_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1720_);
v___x_1722_ = v___x_1713_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_dec(v_v_1707_);
v_a_1725_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1710_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1710_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_cast_x3f___boxed(lean_object* v_v_1733_, lean_object* v_a_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_Lasm_JS_Web_URLSearchParams_cast_x3f(v_v_1733_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t v_sz_1736_, size_t v_i_1737_, lean_object* v_bs_1738_){
_start:
{
uint8_t v___x_1739_; 
v___x_1739_ = lean_usize_dec_lt(v_i_1737_, v_sz_1736_);
if (v___x_1739_ == 0)
{
return v_bs_1738_;
}
else
{
lean_object* v_v_1740_; lean_object* v___x_1741_; lean_object* v_bs_x27_1742_; lean_object* v___x_1743_; size_t v___x_1744_; size_t v___x_1745_; lean_object* v___x_1746_; 
v_v_1740_ = lean_array_uget(v_bs_1738_, v_i_1737_);
v___x_1741_ = lean_unsigned_to_nat(0u);
v_bs_x27_1742_ = lean_array_uset(v_bs_1738_, v_i_1737_, v___x_1741_);
v___x_1743_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1743_, 0, v_v_1740_);
v___x_1744_ = ((size_t)1ULL);
v___x_1745_ = lean_usize_add(v_i_1737_, v___x_1744_);
v___x_1746_ = lean_array_uset(v_bs_x27_1742_, v_i_1737_, v___x_1743_);
v_i_1737_ = v___x_1745_;
v_bs_1738_ = v___x_1746_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0___boxed(lean_object* v_sz_1748_, lean_object* v_i_1749_, lean_object* v_bs_1750_){
_start:
{
size_t v_sz_boxed_1751_; size_t v_i_boxed_1752_; lean_object* v_res_1753_; 
v_sz_boxed_1751_ = lean_unbox_usize(v_sz_1748_);
lean_dec(v_sz_1748_);
v_i_boxed_1752_ = lean_unbox_usize(v_i_1749_);
lean_dec(v_i_1749_);
v_res_1753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_boxed_1751_, v_i_boxed_1752_, v_bs_1750_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(size_t v_sz_1754_, size_t v_i_1755_, lean_object* v_bs_1756_){
_start:
{
uint8_t v___x_1757_; 
v___x_1757_ = lean_usize_dec_lt(v_i_1755_, v_sz_1754_);
if (v___x_1757_ == 0)
{
return v_bs_1756_;
}
else
{
lean_object* v_v_1758_; lean_object* v___x_1759_; lean_object* v_bs_x27_1760_; size_t v_sz_1761_; size_t v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; size_t v___x_1765_; size_t v___x_1766_; lean_object* v___x_1767_; 
v_v_1758_ = lean_array_uget(v_bs_1756_, v_i_1755_);
v___x_1759_ = lean_unsigned_to_nat(0u);
v_bs_x27_1760_ = lean_array_uset(v_bs_1756_, v_i_1755_, v___x_1759_);
v_sz_1761_ = lean_array_size(v_v_1758_);
v___x_1762_ = ((size_t)0ULL);
v___x_1763_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_1761_, v___x_1762_, v_v_1758_);
v___x_1764_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
v___x_1765_ = ((size_t)1ULL);
v___x_1766_ = lean_usize_add(v_i_1755_, v___x_1765_);
v___x_1767_ = lean_array_uset(v_bs_x27_1760_, v_i_1755_, v___x_1764_);
v_i_1755_ = v___x_1766_;
v_bs_1756_ = v___x_1767_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1___boxed(lean_object* v_sz_1769_, lean_object* v_i_1770_, lean_object* v_bs_1771_){
_start:
{
size_t v_sz_boxed_1772_; size_t v_i_boxed_1773_; lean_object* v_res_1774_; 
v_sz_boxed_1772_ = lean_unbox_usize(v_sz_1769_);
lean_dec(v_sz_1769_);
v_i_boxed_1773_ = lean_unbox_usize(v_i_1770_);
lean_dec(v_i_1770_);
v_res_1774_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_boxed_1772_, v_i_boxed_1773_, v_bs_1771_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t v_sz_1775_, size_t v_i_1776_, lean_object* v_bs_1777_){
_start:
{
uint8_t v___x_1778_; 
v___x_1778_ = lean_usize_dec_lt(v_i_1776_, v_sz_1775_);
if (v___x_1778_ == 0)
{
return v_bs_1777_;
}
else
{
lean_object* v_v_1779_; lean_object* v_fst_1780_; lean_object* v_snd_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1795_; 
v_v_1779_ = lean_array_uget(v_bs_1777_, v_i_1776_);
v_fst_1780_ = lean_ctor_get(v_v_1779_, 0);
v_snd_1781_ = lean_ctor_get(v_v_1779_, 1);
v_isSharedCheck_1795_ = !lean_is_exclusive(v_v_1779_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1783_ = v_v_1779_;
v_isShared_1784_ = v_isSharedCheck_1795_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_snd_1781_);
lean_inc(v_fst_1780_);
lean_dec(v_v_1779_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1795_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1785_; lean_object* v_bs_x27_1786_; lean_object* v___x_1787_; lean_object* v___x_1789_; 
v___x_1785_ = lean_unsigned_to_nat(0u);
v_bs_x27_1786_ = lean_array_uset(v_bs_1777_, v_i_1776_, v___x_1785_);
v___x_1787_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1787_, 0, v_snd_1781_);
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 1, v___x_1787_);
v___x_1789_ = v___x_1783_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_fst_1780_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v___x_1787_);
v___x_1789_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
size_t v___x_1790_; size_t v___x_1791_; lean_object* v___x_1792_; 
v___x_1790_ = ((size_t)1ULL);
v___x_1791_ = lean_usize_add(v_i_1776_, v___x_1790_);
v___x_1792_ = lean_array_uset(v_bs_x27_1786_, v_i_1776_, v___x_1789_);
v_i_1776_ = v___x_1791_;
v_bs_1777_ = v___x_1792_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2___boxed(lean_object* v_sz_1796_, lean_object* v_i_1797_, lean_object* v_bs_1798_){
_start:
{
size_t v_sz_boxed_1799_; size_t v_i_boxed_1800_; lean_object* v_res_1801_; 
v_sz_boxed_1799_ = lean_unbox_usize(v_sz_1796_);
lean_dec(v_sz_1796_);
v_i_boxed_1800_ = lean_unbox_usize(v_i_1797_);
lean_dec(v_i_1797_);
v_res_1801_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_boxed_1799_, v_i_boxed_1800_, v_bs_1798_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(lean_object* v_x_1802_){
_start:
{
if (lean_obj_tag(v_x_1802_) == 0)
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_box(0);
return v___x_1803_;
}
else
{
lean_object* v_val_1804_; 
v_val_1804_ = lean_ctor_get(v_x_1802_, 0);
lean_inc(v_val_1804_);
lean_dec_ref_known(v_x_1802_, 1);
switch(lean_obj_tag(v_val_1804_))
{
case 0:
{
lean_object* v_value_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1815_; 
v_value_1805_ = lean_ctor_get(v_val_1804_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v_val_1804_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1807_ = v_val_1804_;
v_isShared_1808_ = v_isSharedCheck_1815_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_value_1805_);
lean_dec(v_val_1804_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1815_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
size_t v_sz_1809_; size_t v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1813_; 
v_sz_1809_ = lean_array_size(v_value_1805_);
v___x_1810_ = ((size_t)0ULL);
v___x_1811_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_1809_, v___x_1810_, v_value_1805_);
if (v_isShared_1808_ == 0)
{
lean_ctor_set_tag(v___x_1807_, 7);
lean_ctor_set(v___x_1807_, 0, v___x_1811_);
v___x_1813_ = v___x_1807_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v___x_1811_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
case 1:
{
lean_object* v_value_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1826_; 
v_value_1816_ = lean_ctor_get(v_val_1804_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v_val_1804_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1818_ = v_val_1804_;
v_isShared_1819_ = v_isSharedCheck_1826_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_value_1816_);
lean_dec(v_val_1804_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1826_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
size_t v_sz_1820_; size_t v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1824_; 
v_sz_1820_ = lean_array_size(v_value_1816_);
v___x_1821_ = ((size_t)0ULL);
v___x_1822_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_1820_, v___x_1821_, v_value_1816_);
if (v_isShared_1819_ == 0)
{
lean_ctor_set_tag(v___x_1818_, 8);
lean_ctor_set(v___x_1818_, 0, v___x_1822_);
v___x_1824_ = v___x_1818_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
default: 
{
lean_object* v_value_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
v_value_1827_ = lean_ctor_get(v_val_1804_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v_val_1804_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v_val_1804_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_value_1827_);
lean_dec(v_val_1804_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
lean_ctor_set_tag(v___x_1829_, 4);
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_value_1827_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(lean_object* v_context_1835_, lean_object* v_d_1836_){
_start:
{
lean_object* v___y_1839_; lean_object* v___y_1840_; 
if (lean_obj_tag(v_d_1836_) == 9)
{
lean_object* v_value_1844_; lean_object* v___x_1845_; 
v_value_1844_ = lean_ctor_get(v_d_1836_, 0);
lean_inc(v_value_1844_);
lean_dec_ref_known(v_d_1836_, 2);
v___x_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1845_, 0, v_value_1844_);
return v___x_1845_;
}
else
{
lean_object* v___x_1846_; lean_object* v_received_1848_; 
v___x_1846_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1836_) == 9)
{
lean_object* v_value_1862_; lean_object* v_description_1863_; uint8_t v___x_1864_; 
v_value_1862_ = lean_ctor_get(v_d_1836_, 0);
v_description_1863_ = lean_ctor_get(v_d_1836_, 1);
v___x_1864_ = lean_string_dec_eq(v_description_1863_, v___x_1846_);
if (v___x_1864_ == 0)
{
goto v___jp_1860_;
}
else
{
uint32_t v___x_1865_; uint64_t v___x_1866_; lean_object* v___x_1867_; uint32_t v___x_1868_; lean_object* v___x_1869_; 
lean_inc_n(v_value_1862_, 2);
lean_dec_ref_known(v_d_1836_, 2);
v___x_1865_ = 206;
v___x_1866_ = 0ULL;
v___x_1867_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1867_, 0, v_value_1862_);
lean_ctor_set(v___x_1867_, 1, v___x_1846_);
v___x_1868_ = lasm_js_value_handle(v_value_1862_);
lean_dec(v_value_1862_);
v___x_1869_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1865_, v___x_1866_, v___x_1867_, v___x_1868_);
lean_dec_ref_known(v___x_1867_, 2);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; uint8_t v___x_1871_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc(v_a_1870_);
lean_dec_ref_known(v___x_1869_, 1);
v___x_1871_ = lean_string_validate_utf8(v_a_1870_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
lean_dec(v_a_1870_);
v___x_1872_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_1873_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1872_);
v_received_1848_ = v___x_1873_;
goto v___jp_1847_;
}
else
{
lean_object* v___x_1874_; 
v___x_1874_ = lean_string_from_utf8_unchecked(v_a_1870_);
v_received_1848_ = v___x_1874_;
goto v___jp_1847_;
}
}
else
{
lean_object* v___x_1875_; 
lean_dec_ref_known(v___x_1869_, 1);
v___x_1875_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1848_ = v___x_1875_;
goto v___jp_1847_;
}
}
}
else
{
goto v___jp_1860_;
}
v___jp_1847_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; uint8_t v___x_1858_; 
v___x_1849_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1850_ = lean_string_append(v___x_1849_, v_context_1835_);
v___x_1851_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1852_ = lean_string_append(v___x_1850_, v___x_1851_);
v___x_1853_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLSearchParams___closed__0));
v___x_1854_ = lean_string_append(v___x_1852_, v___x_1853_);
v___x_1855_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1856_ = lean_string_append(v___x_1854_, v___x_1855_);
v___x_1857_ = lean_string_append(v___x_1856_, v_received_1848_);
lean_dec_ref(v_received_1848_);
v___x_1858_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1858_ == 0)
{
lean_object* v___x_1859_; 
v___x_1859_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1839_ = v___x_1857_;
v___y_1840_ = v___x_1859_;
goto v___jp_1838_;
}
else
{
v___y_1839_ = v___x_1857_;
v___y_1840_ = v___x_1846_;
goto v___jp_1838_;
}
}
v___jp_1860_:
{
lean_object* v___x_1861_; 
v___x_1861_ = l_Lasm_JS_Data_describe(v_d_1836_);
v_received_1848_ = v___x_1861_;
goto v___jp_1847_;
}
}
v___jp_1838_:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1841_ = lean_string_append(v___y_1839_, v___y_1840_);
v___x_1842_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1841_);
v___x_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1842_);
return v___x_1843_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4___boxed(lean_object* v_context_1876_, lean_object* v_d_1877_, lean_object* v_a_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(v_context_1876_, v_d_1877_);
lean_dec_ref(v_context_1876_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(lean_object* v_b_1880_, lean_object* v_args_1881_, uint8_t v_await_1882_){
_start:
{
uint64_t v___y_1885_; uint64_t v___y_1886_; uint64_t v___x_1929_; uint64_t v___y_1931_; 
v___x_1929_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1882_ == 0)
{
uint64_t v___x_1936_; 
v___x_1936_ = 0ULL;
v___y_1931_ = v___x_1936_;
goto v___jp_1930_;
}
else
{
uint64_t v___x_1937_; 
v___x_1937_ = 2ULL;
v___y_1931_ = v___x_1937_;
goto v___jp_1930_;
}
v___jp_1884_:
{
uint64_t v_flags_1887_; uint32_t v___x_1888_; lean_object* v___x_1889_; uint32_t v___x_1890_; lean_object* v___x_1891_; 
v_flags_1887_ = lean_uint64_lor(v___y_1885_, v___y_1886_);
v___x_1888_ = 214;
v___x_1889_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1880_, v_args_1881_);
v___x_1890_ = 0;
v___x_1891_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1888_, v_flags_1887_, v___x_1889_, v___x_1890_);
lean_dec(v___x_1889_);
if (lean_obj_tag(v___x_1891_) == 0)
{
if (lean_obj_tag(v___x_1891_) == 0)
{
lean_object* v_a_1892_; lean_object* v___x_1893_; 
v_a_1892_ = lean_ctor_get(v___x_1891_, 0);
lean_inc(v_a_1892_);
lean_dec_ref_known(v___x_1891_, 1);
v___x_1893_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1892_);
lean_dec(v_a_1892_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_object* v_a_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v_a_1894_ = lean_ctor_get(v___x_1893_, 0);
lean_inc(v_a_1894_);
lean_dec_ref_known(v___x_1893_, 1);
v___x_1895_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1880_);
v___x_1896_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(v___x_1895_, v_a_1894_);
lean_dec_ref(v___x_1895_);
return v___x_1896_;
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
v_a_1897_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___x_1893_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1893_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
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
else
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1912_; 
v_a_1905_ = lean_ctor_get(v___x_1891_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1907_ = v___x_1891_;
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1891_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1910_; 
if (v_isShared_1908_ == 0)
{
lean_ctor_set_tag(v___x_1907_, 1);
v___x_1910_ = v___x_1907_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_a_1905_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
}
else
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1928_; 
v_a_1913_ = lean_ctor_get(v___x_1891_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1915_ = v___x_1891_;
v_isShared_1916_ = v_isSharedCheck_1928_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v___x_1891_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1928_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1926_; 
v___x_1917_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1918_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1880_);
v___x_1919_ = lean_string_append(v___x_1917_, v___x_1918_);
lean_dec_ref(v___x_1918_);
v___x_1920_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1921_ = lean_string_append(v___x_1919_, v___x_1920_);
v___x_1922_ = lean_io_error_to_string(v_a_1913_);
v___x_1923_ = lean_string_append(v___x_1921_, v___x_1922_);
lean_dec_ref(v___x_1922_);
v___x_1924_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1923_);
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 0, v___x_1924_);
v___x_1926_ = v___x_1915_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1924_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
v___jp_1930_:
{
uint8_t v_construct_1932_; uint64_t v___x_1933_; 
v_construct_1932_ = lean_ctor_get_uint8(v_b_1880_, sizeof(void*)*4);
v___x_1933_ = lean_uint64_lor(v___x_1929_, v___y_1931_);
if (v_construct_1932_ == 0)
{
uint64_t v___x_1934_; 
v___x_1934_ = 0ULL;
v___y_1885_ = v___x_1933_;
v___y_1886_ = v___x_1934_;
goto v___jp_1884_;
}
else
{
uint64_t v___x_1935_; 
v___x_1935_ = 4ULL;
v___y_1885_ = v___x_1933_;
v___y_1886_ = v___x_1935_;
goto v___jp_1884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1___boxed(lean_object* v_b_1938_, lean_object* v_args_1939_, lean_object* v_await_1940_, lean_object* v_a_1941_){
_start:
{
uint8_t v_await_boxed_1942_; lean_object* v_res_1943_; 
v_await_boxed_1942_ = lean_unbox(v_await_1940_);
v_res_1943_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v_b_1938_, v_args_1939_, v_await_boxed_1942_);
lean_dec_ref(v_b_1938_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new(lean_object* v_init_1951_){
_start:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; uint8_t v___x_1959_; lean_object* v___x_1960_; 
v___x_1953_ = lean_unsigned_to_nat(1u);
v___x_1954_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_new___closed__1));
v___x_1955_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(v_init_1951_);
v___x_1956_ = lean_mk_empty_array_with_capacity(v___x_1953_);
v___x_1957_ = lean_array_push(v___x_1956_, v___x_1955_);
v___x_1958_ = l_Lasm_JS_Web_Support_args(v___x_1957_);
v___x_1959_ = 0;
v___x_1960_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v___x_1954_, v___x_1958_, v___x_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new___boxed(lean_object* v_init_1961_, lean_object* v_a_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lasm_JS_Web_URLSearchParams_new(v_init_1961_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size(lean_object* v_self_1965_){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_size___closed__0));
v___x_1968_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1965_, v___x_1967_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size___boxed(lean_object* v_self_1969_, lean_object* v_a_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_Lasm_JS_Web_URLSearchParams_size(v_self_1969_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString(lean_object* v_self_1972_){
_start:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1974_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__0));
v___x_1975_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1976_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1972_, v___x_1974_, v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString___boxed(lean_object* v_self_1977_, lean_object* v_a_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l_Lasm_JS_Web_URLSearchParams_toString(v_self_1977_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append(lean_object* v_self_1981_, lean_object* v_name_1982_, lean_object* v_value_1983_){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1985_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_append___closed__0));
v___x_1986_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1986_, 0, v_name_1982_);
v___x_1987_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1987_, 0, v_value_1983_);
v___x_1988_ = lean_unsigned_to_nat(2u);
v___x_1989_ = lean_mk_empty_array_with_capacity(v___x_1988_);
v___x_1990_ = lean_array_push(v___x_1989_, v___x_1986_);
v___x_1991_ = lean_array_push(v___x_1990_, v___x_1987_);
v___x_1992_ = l_Lasm_JS_Web_Support_args(v___x_1991_);
v___x_1993_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1981_, v___x_1985_, v___x_1992_);
return v___x_1993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append___boxed(lean_object* v_self_1994_, lean_object* v_name_1995_, lean_object* v_value_1996_, lean_object* v_a_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Lasm_JS_Web_URLSearchParams_append(v_self_1994_, v_name_1995_, v_value_1996_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete(lean_object* v_self_2000_, lean_object* v_name_2001_, lean_object* v_value_2002_){
_start:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2004_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_delete___closed__0));
v___x_2005_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2005_, 0, v_name_2001_);
v___x_2006_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_2002_);
v___x_2007_ = lean_unsigned_to_nat(2u);
v___x_2008_ = lean_mk_empty_array_with_capacity(v___x_2007_);
v___x_2009_ = lean_array_push(v___x_2008_, v___x_2005_);
v___x_2010_ = lean_array_push(v___x_2009_, v___x_2006_);
v___x_2011_ = l_Lasm_JS_Web_Support_args(v___x_2010_);
v___x_2012_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2000_, v___x_2004_, v___x_2011_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete___boxed(lean_object* v_self_2013_, lean_object* v_name_2014_, lean_object* v_value_2015_, lean_object* v_a_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_Lasm_JS_Web_URLSearchParams_delete(v_self_2013_, v_name_2014_, v_value_2015_);
return v_res_2017_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(uint8_t v_await_2018_, uint64_t v_extra_2019_){
_start:
{
uint64_t v___x_2020_; uint64_t v___y_2022_; 
v___x_2020_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2018_ == 0)
{
uint64_t v___x_2025_; 
v___x_2025_ = 0ULL;
v___y_2022_ = v___x_2025_;
goto v___jp_2021_;
}
else
{
uint64_t v___x_2026_; 
v___x_2026_ = 2ULL;
v___y_2022_ = v___x_2026_;
goto v___jp_2021_;
}
v___jp_2021_:
{
uint64_t v___x_2023_; uint64_t v___x_2024_; 
v___x_2023_ = lean_uint64_lor(v___x_2020_, v___y_2022_);
v___x_2024_ = lean_uint64_lor(v___x_2023_, v_extra_2019_);
return v___x_2024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0___boxed(lean_object* v_await_2027_, lean_object* v_extra_2028_){
_start:
{
uint8_t v_await_boxed_2029_; uint64_t v_extra_boxed_2030_; uint64_t v_res_2031_; lean_object* v_r_2032_; 
v_await_boxed_2029_ = lean_unbox(v_await_2027_);
v_extra_boxed_2030_ = lean_unbox_uint64(v_extra_2028_);
lean_dec_ref(v_extra_2028_);
v_res_2031_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v_await_boxed_2029_, v_extra_boxed_2030_);
v_r_2032_ = lean_box_uint64(v_res_2031_);
return v_r_2032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(lean_object* v_context_2034_, lean_object* v_d_2035_){
_start:
{
lean_object* v___y_2041_; lean_object* v___y_2042_; 
switch(lean_obj_tag(v_d_2035_))
{
case 1:
{
goto v___jp_2037_;
}
case 0:
{
goto v___jp_2037_;
}
default: 
{
if (lean_obj_tag(v_d_2035_) == 4)
{
lean_object* v_s_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v_s_2046_ = lean_ctor_get(v_d_2035_, 0);
lean_inc_ref(v_s_2046_);
lean_dec_ref_known(v_d_2035_, 1);
v___x_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2047_, 0, v_s_2046_);
v___x_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
return v___x_2048_;
}
else
{
lean_object* v___x_2049_; lean_object* v_received_2051_; 
v___x_2049_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_2035_) == 9)
{
lean_object* v_value_2065_; lean_object* v_description_2066_; uint8_t v___x_2067_; 
v_value_2065_ = lean_ctor_get(v_d_2035_, 0);
v_description_2066_ = lean_ctor_get(v_d_2035_, 1);
v___x_2067_ = lean_string_dec_eq(v_description_2066_, v___x_2049_);
if (v___x_2067_ == 0)
{
goto v___jp_2063_;
}
else
{
uint32_t v___x_2068_; uint64_t v___x_2069_; lean_object* v___x_2070_; uint32_t v___x_2071_; lean_object* v___x_2072_; 
lean_inc_n(v_value_2065_, 2);
lean_dec_ref_known(v_d_2035_, 2);
v___x_2068_ = 206;
v___x_2069_ = 0ULL;
v___x_2070_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2070_, 0, v_value_2065_);
lean_ctor_set(v___x_2070_, 1, v___x_2049_);
v___x_2071_ = lasm_js_value_handle(v_value_2065_);
lean_dec(v_value_2065_);
v___x_2072_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2068_, v___x_2069_, v___x_2070_, v___x_2071_);
lean_dec_ref_known(v___x_2070_, 2);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_object* v_a_2073_; uint8_t v___x_2074_; 
v_a_2073_ = lean_ctor_get(v___x_2072_, 0);
lean_inc(v_a_2073_);
lean_dec_ref_known(v___x_2072_, 1);
v___x_2074_ = lean_string_validate_utf8(v_a_2073_);
if (v___x_2074_ == 0)
{
lean_object* v___x_2075_; lean_object* v___x_2076_; 
lean_dec(v_a_2073_);
v___x_2075_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2076_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2075_);
v_received_2051_ = v___x_2076_;
goto v___jp_2050_;
}
else
{
lean_object* v___x_2077_; 
v___x_2077_ = lean_string_from_utf8_unchecked(v_a_2073_);
v_received_2051_ = v___x_2077_;
goto v___jp_2050_;
}
}
else
{
lean_object* v___x_2078_; 
lean_dec_ref_known(v___x_2072_, 1);
v___x_2078_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_2051_ = v___x_2078_;
goto v___jp_2050_;
}
}
}
else
{
goto v___jp_2063_;
}
v___jp_2050_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; 
v___x_2052_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2053_ = lean_string_append(v___x_2052_, v_context_2034_);
v___x_2054_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2055_ = lean_string_append(v___x_2053_, v___x_2054_);
v___x_2056_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_2057_ = lean_string_append(v___x_2055_, v___x_2056_);
v___x_2058_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2059_ = lean_string_append(v___x_2057_, v___x_2058_);
v___x_2060_ = lean_string_append(v___x_2059_, v_received_2051_);
lean_dec_ref(v_received_2051_);
v___x_2061_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_2061_ == 0)
{
lean_object* v___x_2062_; 
v___x_2062_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_2041_ = v___x_2060_;
v___y_2042_ = v___x_2062_;
goto v___jp_2040_;
}
else
{
v___y_2041_ = v___x_2060_;
v___y_2042_ = v___x_2049_;
goto v___jp_2040_;
}
}
v___jp_2063_:
{
lean_object* v___x_2064_; 
v___x_2064_ = l_Lasm_JS_Data_describe(v_d_2035_);
v_received_2051_ = v___x_2064_;
goto v___jp_2050_;
}
}
}
}
v___jp_2037_:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = lean_box(0);
v___x_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2038_);
return v___x_2039_;
}
v___jp_2040_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = lean_string_append(v___y_2041_, v___y_2042_);
v___x_2044_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
v___x_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
return v___x_2045_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2079_, lean_object* v_d_2080_, lean_object* v_a_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_2079_, v_d_2080_);
lean_dec_ref(v_context_2079_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object* v_context_2083_, lean_object* v_bytes_2084_){
_start:
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2084_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2088_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2087_);
lean_dec_ref_known(v___x_2086_, 1);
v___x_2088_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_2083_, v_a_2087_);
return v___x_2088_;
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
v_a_2089_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2086_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2086_);
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
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1___boxed(lean_object* v_context_2097_, lean_object* v_bytes_2098_, lean_object* v_a_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v_context_2097_, v_bytes_2098_);
lean_dec_ref(v_bytes_2098_);
lean_dec_ref(v_context_2097_);
return v_res_2100_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2101_; uint8_t v___x_2102_; uint64_t v___x_2103_; 
v___x_2101_ = 8ULL;
v___x_2102_ = 0;
v___x_2103_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v___x_2102_, v___x_2101_);
return v___x_2103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(lean_object* v_o_2104_, lean_object* v_name_2105_, lean_object* v_args_2106_){
_start:
{
lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; uint64_t v___x_2111_; lean_object* v___x_2112_; 
v___x_2108_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2109_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2109_, 0, v_o_2104_);
lean_ctor_set(v___x_2109_, 1, v___x_2108_);
lean_inc_ref(v_name_2105_);
v___x_2110_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2110_, 0, v_name_2105_);
v___x_2111_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0);
v___x_2112_ = l_Lasm_JS_Value_invokeRaw(v___x_2109_, v___x_2110_, v_args_2106_, v___x_2111_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_2115_ = lean_string_append(v___x_2114_, v_name_2105_);
lean_dec_ref(v_name_2105_);
v___x_2116_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_2115_, v_a_2113_);
lean_dec(v_a_2113_);
lean_dec_ref(v___x_2115_);
return v___x_2116_;
}
else
{
lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2124_; 
lean_dec_ref(v_name_2105_);
v_a_2117_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2119_ = v___x_2112_;
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v___x_2112_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2122_; 
if (v_isShared_2120_ == 0)
{
v___x_2122_ = v___x_2119_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2117_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
return v___x_2122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___boxed(lean_object* v_o_2125_, lean_object* v_name_2126_, lean_object* v_args_2127_, lean_object* v_a_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_o_2125_, v_name_2126_, v_args_2127_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get(lean_object* v_self_2131_, lean_object* v_name_2132_){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2134_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_get___closed__0));
v___x_2135_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2135_, 0, v_name_2132_);
v___x_2136_ = lean_unsigned_to_nat(1u);
v___x_2137_ = lean_mk_empty_array_with_capacity(v___x_2136_);
v___x_2138_ = lean_array_push(v___x_2137_, v___x_2135_);
v___x_2139_ = l_Lasm_JS_Web_Support_args(v___x_2138_);
v___x_2140_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_self_2131_, v___x_2134_, v___x_2139_);
return v___x_2140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get___boxed(lean_object* v_self_2141_, lean_object* v_name_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lasm_JS_Web_URLSearchParams_get(v_self_2141_, v_name_2142_);
return v_res_2144_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(uint8_t v_await_2145_, uint64_t v_extra_2146_){
_start:
{
uint64_t v___x_2147_; uint64_t v___y_2149_; 
v___x_2147_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2145_ == 0)
{
uint64_t v___x_2152_; 
v___x_2152_ = 0ULL;
v___y_2149_ = v___x_2152_;
goto v___jp_2148_;
}
else
{
uint64_t v___x_2153_; 
v___x_2153_ = 2ULL;
v___y_2149_ = v___x_2153_;
goto v___jp_2148_;
}
v___jp_2148_:
{
uint64_t v___x_2150_; uint64_t v___x_2151_; 
v___x_2150_ = lean_uint64_lor(v___x_2147_, v___y_2149_);
v___x_2151_ = lean_uint64_lor(v___x_2150_, v_extra_2146_);
return v___x_2151_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0___boxed(lean_object* v_await_2154_, lean_object* v_extra_2155_){
_start:
{
uint8_t v_await_boxed_2156_; uint64_t v_extra_boxed_2157_; uint64_t v_res_2158_; lean_object* v_r_2159_; 
v_await_boxed_2156_ = lean_unbox(v_await_2154_);
v_extra_boxed_2157_ = lean_unbox_uint64(v_extra_2155_);
lean_dec_ref(v_extra_2155_);
v_res_2158_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v_await_boxed_2156_, v_extra_boxed_2157_);
v_r_2159_ = lean_box_uint64(v_res_2158_);
return v_r_2159_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2162_, size_t v_i_2163_, lean_object* v_bs_2164_){
_start:
{
uint8_t v___x_2165_; 
v___x_2165_ = lean_usize_dec_lt(v_i_2163_, v_sz_2162_);
if (v___x_2165_ == 0)
{
lean_object* v___x_2166_; 
v___x_2166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2166_, 0, v_bs_2164_);
return v___x_2166_;
}
else
{
lean_object* v_v_2167_; 
v_v_2167_ = lean_array_uget_borrowed(v_bs_2164_, v_i_2163_);
if (lean_obj_tag(v_v_2167_) == 4)
{
lean_object* v_s_2168_; lean_object* v___x_2169_; lean_object* v_bs_x27_2170_; size_t v___x_2171_; size_t v___x_2172_; lean_object* v___x_2173_; 
v_s_2168_ = lean_ctor_get(v_v_2167_, 0);
lean_inc_ref(v_s_2168_);
v___x_2169_ = lean_unsigned_to_nat(0u);
v_bs_x27_2170_ = lean_array_uset(v_bs_2164_, v_i_2163_, v___x_2169_);
v___x_2171_ = ((size_t)1ULL);
v___x_2172_ = lean_usize_add(v_i_2163_, v___x_2171_);
v___x_2173_ = lean_array_uset(v_bs_x27_2170_, v_i_2163_, v_s_2168_);
v_i_2163_ = v___x_2172_;
v_bs_2164_ = v___x_2173_;
goto _start;
}
else
{
lean_object* v___x_2175_; 
lean_dec_ref(v_bs_2164_);
v___x_2175_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2175_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2176_, lean_object* v_i_2177_, lean_object* v_bs_2178_){
_start:
{
size_t v_sz_boxed_2179_; size_t v_i_boxed_2180_; lean_object* v_res_2181_; 
v_sz_boxed_2179_ = lean_unbox_usize(v_sz_2176_);
lean_dec(v_sz_2176_);
v_i_boxed_2180_ = lean_unbox_usize(v_i_2177_);
lean_dec(v_i_2177_);
v_res_2181_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2179_, v_i_boxed_2180_, v_bs_2178_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(lean_object* v_context_2186_, lean_object* v_d_2187_){
_start:
{
lean_object* v___y_2190_; lean_object* v___y_2191_; lean_object* v___y_2196_; lean_object* v_received_2197_; lean_object* v___y_2216_; lean_object* v_a_2219_; 
if (lean_obj_tag(v_d_2187_) == 7)
{
lean_object* v_items_2243_; size_t v_sz_2244_; size_t v___x_2245_; lean_object* v___x_2246_; 
v_items_2243_ = lean_ctor_get(v_d_2187_, 0);
v_sz_2244_ = lean_array_size(v_items_2243_);
v___x_2245_ = ((size_t)0ULL);
lean_inc_ref(v_items_2243_);
v___x_2246_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_2244_, v___x_2245_, v_items_2243_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; uint8_t v___x_2251_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref_known(v___x_2246_, 1);
v___x_2248_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__3));
v___x_2249_ = lean_string_utf8_byte_size(v_a_2247_);
v___x_2250_ = lean_unsigned_to_nat(0u);
v___x_2251_ = lean_nat_dec_eq(v___x_2249_, v___x_2250_);
if (v___x_2251_ == 0)
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2252_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2253_ = lean_string_append(v___x_2252_, v_a_2247_);
lean_dec(v_a_2247_);
v___x_2254_ = lean_string_append(v___x_2248_, v___x_2253_);
lean_dec_ref(v___x_2253_);
v_a_2219_ = v___x_2254_;
goto v___jp_2218_;
}
else
{
lean_dec(v_a_2247_);
v_a_2219_ = v___x_2248_;
goto v___jp_2218_;
}
}
else
{
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2255_; 
v_a_2255_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2255_);
lean_dec_ref_known(v___x_2246_, 1);
v_a_2219_ = v_a_2255_;
goto v___jp_2218_;
}
else
{
lean_object* v_a_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2263_; 
lean_dec_ref_known(v_d_2187_, 1);
v_a_2256_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2263_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2258_ = v___x_2246_;
v_isShared_2259_ = v_isSharedCheck_2263_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_a_2256_);
lean_dec(v___x_2246_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2263_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2261_; 
if (v_isShared_2259_ == 0)
{
lean_ctor_set_tag(v___x_2258_, 0);
v___x_2261_ = v___x_2258_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v_a_2256_);
v___x_2261_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
return v___x_2261_;
}
}
}
}
}
else
{
lean_object* v___x_2264_; 
v___x_2264_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2219_ = v___x_2264_;
goto v___jp_2218_;
}
v___jp_2189_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2192_ = lean_string_append(v___y_2190_, v___y_2191_);
lean_dec_ref(v___y_2191_);
v___x_2193_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2192_);
v___x_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2193_);
return v___x_2194_;
}
v___jp_2195_:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; uint8_t v___x_2209_; 
v___x_2198_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2199_ = lean_string_append(v___x_2198_, v_context_2186_);
v___x_2200_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2201_ = lean_string_append(v___x_2199_, v___x_2200_);
v___x_2202_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__0));
v___x_2203_ = lean_string_append(v___x_2201_, v___x_2202_);
v___x_2204_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2205_ = lean_string_append(v___x_2203_, v___x_2204_);
v___x_2206_ = lean_string_append(v___x_2205_, v_received_2197_);
lean_dec_ref(v_received_2197_);
v___x_2207_ = lean_string_utf8_byte_size(v___y_2196_);
v___x_2208_ = lean_unsigned_to_nat(0u);
v___x_2209_ = lean_nat_dec_eq(v___x_2207_, v___x_2208_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2210_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2211_ = lean_string_append(v___x_2210_, v___y_2196_);
lean_dec_ref(v___y_2196_);
v___x_2212_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2213_ = lean_string_append(v___x_2211_, v___x_2212_);
v___y_2190_ = v___x_2206_;
v___y_2191_ = v___x_2213_;
goto v___jp_2189_;
}
else
{
lean_object* v___x_2214_; 
lean_dec_ref(v___y_2196_);
v___x_2214_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2190_ = v___x_2206_;
v___y_2191_ = v___x_2214_;
goto v___jp_2189_;
}
}
v___jp_2215_:
{
lean_object* v___x_2217_; 
v___x_2217_ = l_Lasm_JS_Data_describe(v_d_2187_);
v___y_2196_ = v___y_2216_;
v_received_2197_ = v___x_2217_;
goto v___jp_2195_;
}
v___jp_2218_:
{
if (lean_obj_tag(v_d_2187_) == 9)
{
lean_object* v_value_2220_; lean_object* v_description_2221_; lean_object* v___x_2222_; uint8_t v___x_2223_; 
v_value_2220_ = lean_ctor_get(v_d_2187_, 0);
v_description_2221_ = lean_ctor_get(v_d_2187_, 1);
v___x_2222_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2223_ = lean_string_dec_eq(v_description_2221_, v___x_2222_);
if (v___x_2223_ == 0)
{
v___y_2216_ = v_a_2219_;
goto v___jp_2215_;
}
else
{
lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2240_; 
lean_inc(v_value_2220_);
v_isSharedCheck_2240_ = !lean_is_exclusive(v_d_2187_);
if (v_isSharedCheck_2240_ == 0)
{
lean_object* v_unused_2241_; lean_object* v_unused_2242_; 
v_unused_2241_ = lean_ctor_get(v_d_2187_, 1);
lean_dec(v_unused_2241_);
v_unused_2242_ = lean_ctor_get(v_d_2187_, 0);
lean_dec(v_unused_2242_);
v___x_2225_ = v_d_2187_;
v_isShared_2226_ = v_isSharedCheck_2240_;
goto v_resetjp_2224_;
}
else
{
lean_dec(v_d_2187_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2240_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
uint32_t v___x_2227_; uint64_t v___x_2228_; lean_object* v___x_2230_; 
v___x_2227_ = 206;
v___x_2228_ = 0ULL;
lean_inc(v_value_2220_);
if (v_isShared_2226_ == 0)
{
lean_ctor_set(v___x_2225_, 1, v___x_2222_);
v___x_2230_ = v___x_2225_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_value_2220_);
lean_ctor_set(v_reuseFailAlloc_2239_, 1, v___x_2222_);
v___x_2230_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
uint32_t v___x_2231_; lean_object* v___x_2232_; 
v___x_2231_ = lasm_js_value_handle(v_value_2220_);
lean_dec(v_value_2220_);
v___x_2232_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2227_, v___x_2228_, v___x_2230_, v___x_2231_);
lean_dec_ref(v___x_2230_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_object* v_a_2233_; uint8_t v___x_2234_; 
v_a_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_a_2233_);
lean_dec_ref_known(v___x_2232_, 1);
v___x_2234_ = lean_string_validate_utf8(v_a_2233_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
lean_dec(v_a_2233_);
v___x_2235_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2236_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2235_);
v___y_2196_ = v_a_2219_;
v_received_2197_ = v___x_2236_;
goto v___jp_2195_;
}
else
{
lean_object* v___x_2237_; 
v___x_2237_ = lean_string_from_utf8_unchecked(v_a_2233_);
v___y_2196_ = v_a_2219_;
v_received_2197_ = v___x_2237_;
goto v___jp_2195_;
}
}
else
{
lean_object* v___x_2238_; 
lean_dec_ref_known(v___x_2232_, 1);
v___x_2238_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_2196_ = v_a_2219_;
v_received_2197_ = v___x_2238_;
goto v___jp_2195_;
}
}
}
}
}
else
{
v___y_2216_ = v_a_2219_;
goto v___jp_2215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2265_, lean_object* v_d_2266_, lean_object* v_a_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2265_, v_d_2266_);
lean_dec_ref(v_context_2265_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(lean_object* v_context_2269_, lean_object* v_bytes_2270_){
_start:
{
lean_object* v___x_2272_; 
v___x_2272_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2270_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v_a_2273_; lean_object* v___x_2274_; 
v_a_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_a_2273_);
lean_dec_ref_known(v___x_2272_, 1);
v___x_2274_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2269_, v_a_2273_);
return v___x_2274_;
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
v_a_2275_ = lean_ctor_get(v___x_2272_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2272_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2272_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_a_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1___boxed(lean_object* v_context_2283_, lean_object* v_bytes_2284_, lean_object* v_a_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v_context_2283_, v_bytes_2284_);
lean_dec_ref(v_bytes_2284_);
lean_dec_ref(v_context_2283_);
return v_res_2286_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2287_; uint8_t v___x_2288_; uint64_t v___x_2289_; 
v___x_2287_ = 8ULL;
v___x_2288_ = 0;
v___x_2289_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v___x_2288_, v___x_2287_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(lean_object* v_o_2290_, lean_object* v_name_2291_, lean_object* v_args_2292_){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; uint64_t v___x_2297_; lean_object* v___x_2298_; 
v___x_2294_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2295_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2295_, 0, v_o_2290_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
lean_inc_ref(v_name_2291_);
v___x_2296_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2296_, 0, v_name_2291_);
v___x_2297_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0);
v___x_2298_ = l_Lasm_JS_Value_invokeRaw(v___x_2295_, v___x_2296_, v_args_2292_, v___x_2297_);
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_object* v_a_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
v_a_2299_ = lean_ctor_get(v___x_2298_, 0);
lean_inc(v_a_2299_);
lean_dec_ref_known(v___x_2298_, 1);
v___x_2300_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_2301_ = lean_string_append(v___x_2300_, v_name_2291_);
lean_dec_ref(v_name_2291_);
v___x_2302_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v___x_2301_, v_a_2299_);
lean_dec(v_a_2299_);
lean_dec_ref(v___x_2301_);
return v___x_2302_;
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
lean_dec_ref(v_name_2291_);
v_a_2303_ = lean_ctor_get(v___x_2298_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2298_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2298_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___boxed(lean_object* v_o_2311_, lean_object* v_name_2312_, lean_object* v_args_2313_, lean_object* v_a_2314_){
_start:
{
lean_object* v_res_2315_; 
v_res_2315_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_o_2311_, v_name_2312_, v_args_2313_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll(lean_object* v_self_2317_, lean_object* v_name_2318_){
_start:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2320_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_getAll___closed__0));
v___x_2321_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2321_, 0, v_name_2318_);
v___x_2322_ = lean_unsigned_to_nat(1u);
v___x_2323_ = lean_mk_empty_array_with_capacity(v___x_2322_);
v___x_2324_ = lean_array_push(v___x_2323_, v___x_2321_);
v___x_2325_ = l_Lasm_JS_Web_Support_args(v___x_2324_);
v___x_2326_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_self_2317_, v___x_2320_, v___x_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll___boxed(lean_object* v_self_2327_, lean_object* v_name_2328_, lean_object* v_a_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Lasm_JS_Web_URLSearchParams_getAll(v_self_2327_, v_name_2328_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has(lean_object* v_self_2332_, lean_object* v_name_2333_, lean_object* v_value_2334_){
_start:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2336_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_has___closed__0));
v___x_2337_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2337_, 0, v_name_2333_);
v___x_2338_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_2334_);
v___x_2339_ = lean_unsigned_to_nat(2u);
v___x_2340_ = lean_mk_empty_array_with_capacity(v___x_2339_);
v___x_2341_ = lean_array_push(v___x_2340_, v___x_2337_);
v___x_2342_ = lean_array_push(v___x_2341_, v___x_2338_);
v___x_2343_ = l_Lasm_JS_Web_Support_args(v___x_2342_);
v___x_2344_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2332_, v___x_2336_, v___x_2343_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has___boxed(lean_object* v_self_2345_, lean_object* v_name_2346_, lean_object* v_value_2347_, lean_object* v_a_2348_){
_start:
{
lean_object* v_res_2349_; 
v_res_2349_ = l_Lasm_JS_Web_URLSearchParams_has(v_self_2345_, v_name_2346_, v_value_2347_);
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set(lean_object* v_self_2351_, lean_object* v_name_2352_, lean_object* v_value_2353_){
_start:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2355_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_set___closed__0));
v___x_2356_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2356_, 0, v_name_2352_);
v___x_2357_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2357_, 0, v_value_2353_);
v___x_2358_ = lean_unsigned_to_nat(2u);
v___x_2359_ = lean_mk_empty_array_with_capacity(v___x_2358_);
v___x_2360_ = lean_array_push(v___x_2359_, v___x_2356_);
v___x_2361_ = lean_array_push(v___x_2360_, v___x_2357_);
v___x_2362_ = l_Lasm_JS_Web_Support_args(v___x_2361_);
v___x_2363_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2351_, v___x_2355_, v___x_2362_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set___boxed(lean_object* v_self_2364_, lean_object* v_name_2365_, lean_object* v_value_2366_, lean_object* v_a_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_Lasm_JS_Web_URLSearchParams_set(v_self_2364_, v_name_2365_, v_value_2366_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort(lean_object* v_self_2370_){
_start:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2372_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_sort___closed__0));
v___x_2373_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_2374_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2370_, v___x_2372_, v___x_2373_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort___boxed(lean_object* v_self_2375_, lean_object* v_a_2376_){
_start:
{
lean_object* v_res_2377_; 
v_res_2377_ = l_Lasm_JS_Web_URLSearchParams_sort(v_self_2375_);
return v_res_2377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(size_t v_sz_2381_, size_t v_i_2382_, lean_object* v_bs_2383_){
_start:
{
uint8_t v___x_2386_; 
v___x_2386_ = lean_usize_dec_lt(v_i_2382_, v_sz_2381_);
if (v___x_2386_ == 0)
{
lean_object* v___x_2387_; 
v___x_2387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2387_, 0, v_bs_2383_);
return v___x_2387_;
}
else
{
lean_object* v_v_2388_; 
v_v_2388_ = lean_array_uget_borrowed(v_bs_2383_, v_i_2382_);
if (lean_obj_tag(v_v_2388_) == 7)
{
lean_object* v_items_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; uint8_t v___x_2392_; 
v_items_2389_ = lean_ctor_get(v_v_2388_, 0);
v___x_2390_ = lean_array_get_size(v_items_2389_);
v___x_2391_ = lean_unsigned_to_nat(2u);
v___x_2392_ = lean_nat_dec_eq(v___x_2390_, v___x_2391_);
if (v___x_2392_ == 0)
{
lean_dec_ref(v_bs_2383_);
goto v___jp_2384_;
}
else
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = lean_unsigned_to_nat(0u);
v___x_2394_ = lean_array_fget_borrowed(v_items_2389_, v___x_2393_);
if (lean_obj_tag(v___x_2394_) == 4)
{
lean_object* v_s_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_s_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc_ref(v_s_2395_);
v___x_2396_ = lean_unsigned_to_nat(1u);
v___x_2397_ = lean_array_fget_borrowed(v_items_2389_, v___x_2396_);
if (lean_obj_tag(v___x_2397_) == 4)
{
lean_object* v_s_2398_; lean_object* v_bs_x27_2399_; lean_object* v___x_2400_; size_t v___x_2401_; size_t v___x_2402_; lean_object* v___x_2403_; 
v_s_2398_ = lean_ctor_get(v___x_2397_, 0);
lean_inc_ref(v_s_2398_);
v_bs_x27_2399_ = lean_array_uset(v_bs_2383_, v_i_2382_, v___x_2393_);
v___x_2400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2400_, 0, v_s_2395_);
lean_ctor_set(v___x_2400_, 1, v_s_2398_);
v___x_2401_ = ((size_t)1ULL);
v___x_2402_ = lean_usize_add(v_i_2382_, v___x_2401_);
v___x_2403_ = lean_array_uset(v_bs_x27_2399_, v_i_2382_, v___x_2400_);
v_i_2382_ = v___x_2402_;
v_bs_2383_ = v___x_2403_;
goto _start;
}
else
{
lean_object* v___x_2405_; 
lean_dec_ref(v_s_2395_);
lean_dec_ref(v_bs_2383_);
v___x_2405_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2405_;
}
}
else
{
lean_object* v___x_2406_; 
lean_dec_ref(v_bs_2383_);
v___x_2406_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2406_;
}
}
}
else
{
lean_dec_ref(v_bs_2383_);
goto v___jp_2384_;
}
}
v___jp_2384_:
{
lean_object* v___x_2385_; 
v___x_2385_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__1));
return v___x_2385_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2407_, lean_object* v_i_2408_, lean_object* v_bs_2409_){
_start:
{
size_t v_sz_boxed_2410_; size_t v_i_boxed_2411_; lean_object* v_res_2412_; 
v_sz_boxed_2410_ = lean_unbox_usize(v_sz_2407_);
lean_dec(v_sz_2407_);
v_i_boxed_2411_ = lean_unbox_usize(v_i_2408_);
lean_dec(v_i_2408_);
v_res_2412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_2410_, v_i_boxed_2411_, v_bs_2409_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(lean_object* v_context_2415_, lean_object* v_d_2416_){
_start:
{
lean_object* v___y_2419_; lean_object* v___y_2420_; lean_object* v___y_2425_; lean_object* v_received_2426_; lean_object* v___y_2445_; lean_object* v_a_2448_; 
if (lean_obj_tag(v_d_2416_) == 7)
{
lean_object* v_items_2472_; size_t v_sz_2473_; size_t v___x_2474_; lean_object* v___x_2475_; 
v_items_2472_ = lean_ctor_get(v_d_2416_, 0);
v_sz_2473_ = lean_array_size(v_items_2472_);
v___x_2474_ = ((size_t)0ULL);
lean_inc_ref(v_items_2472_);
v___x_2475_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_2473_, v___x_2474_, v_items_2472_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; uint8_t v___x_2480_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2476_);
lean_dec_ref_known(v___x_2475_, 1);
v___x_2477_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__1));
v___x_2478_ = lean_string_utf8_byte_size(v_a_2476_);
v___x_2479_ = lean_unsigned_to_nat(0u);
v___x_2480_ = lean_nat_dec_eq(v___x_2478_, v___x_2479_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2481_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2482_ = lean_string_append(v___x_2481_, v_a_2476_);
lean_dec(v_a_2476_);
v___x_2483_ = lean_string_append(v___x_2477_, v___x_2482_);
lean_dec_ref(v___x_2482_);
v_a_2448_ = v___x_2483_;
goto v___jp_2447_;
}
else
{
lean_dec(v_a_2476_);
v_a_2448_ = v___x_2477_;
goto v___jp_2447_;
}
}
else
{
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2484_; 
v_a_2484_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2484_);
lean_dec_ref_known(v___x_2475_, 1);
v_a_2448_ = v_a_2484_;
goto v___jp_2447_;
}
else
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
lean_dec_ref_known(v_d_2416_, 1);
v_a_2485_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2487_ = v___x_2475_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2475_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
lean_ctor_set_tag(v___x_2487_, 0);
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
}
else
{
lean_object* v___x_2493_; 
v___x_2493_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2448_ = v___x_2493_;
goto v___jp_2447_;
}
v___jp_2418_:
{
lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2421_ = lean_string_append(v___y_2419_, v___y_2420_);
lean_dec_ref(v___y_2420_);
v___x_2422_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2421_);
v___x_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
return v___x_2423_;
}
v___jp_2424_:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; uint8_t v___x_2438_; 
v___x_2427_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2428_ = lean_string_append(v___x_2427_, v_context_2415_);
v___x_2429_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2430_ = lean_string_append(v___x_2428_, v___x_2429_);
v___x_2431_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__0));
v___x_2432_ = lean_string_append(v___x_2430_, v___x_2431_);
v___x_2433_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2434_ = lean_string_append(v___x_2432_, v___x_2433_);
v___x_2435_ = lean_string_append(v___x_2434_, v_received_2426_);
lean_dec_ref(v_received_2426_);
v___x_2436_ = lean_string_utf8_byte_size(v___y_2425_);
v___x_2437_ = lean_unsigned_to_nat(0u);
v___x_2438_ = lean_nat_dec_eq(v___x_2436_, v___x_2437_);
if (v___x_2438_ == 0)
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2440_ = lean_string_append(v___x_2439_, v___y_2425_);
lean_dec_ref(v___y_2425_);
v___x_2441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2442_ = lean_string_append(v___x_2440_, v___x_2441_);
v___y_2419_ = v___x_2435_;
v___y_2420_ = v___x_2442_;
goto v___jp_2418_;
}
else
{
lean_object* v___x_2443_; 
lean_dec_ref(v___y_2425_);
v___x_2443_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2419_ = v___x_2435_;
v___y_2420_ = v___x_2443_;
goto v___jp_2418_;
}
}
v___jp_2444_:
{
lean_object* v___x_2446_; 
v___x_2446_ = l_Lasm_JS_Data_describe(v_d_2416_);
v___y_2425_ = v___y_2445_;
v_received_2426_ = v___x_2446_;
goto v___jp_2424_;
}
v___jp_2447_:
{
if (lean_obj_tag(v_d_2416_) == 9)
{
lean_object* v_value_2449_; lean_object* v_description_2450_; lean_object* v___x_2451_; uint8_t v___x_2452_; 
v_value_2449_ = lean_ctor_get(v_d_2416_, 0);
v_description_2450_ = lean_ctor_get(v_d_2416_, 1);
v___x_2451_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2452_ = lean_string_dec_eq(v_description_2450_, v___x_2451_);
if (v___x_2452_ == 0)
{
v___y_2445_ = v_a_2448_;
goto v___jp_2444_;
}
else
{
lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2469_; 
lean_inc(v_value_2449_);
v_isSharedCheck_2469_ = !lean_is_exclusive(v_d_2416_);
if (v_isSharedCheck_2469_ == 0)
{
lean_object* v_unused_2470_; lean_object* v_unused_2471_; 
v_unused_2470_ = lean_ctor_get(v_d_2416_, 1);
lean_dec(v_unused_2470_);
v_unused_2471_ = lean_ctor_get(v_d_2416_, 0);
lean_dec(v_unused_2471_);
v___x_2454_ = v_d_2416_;
v_isShared_2455_ = v_isSharedCheck_2469_;
goto v_resetjp_2453_;
}
else
{
lean_dec(v_d_2416_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2469_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
uint32_t v___x_2456_; uint64_t v___x_2457_; lean_object* v___x_2459_; 
v___x_2456_ = 206;
v___x_2457_ = 0ULL;
lean_inc(v_value_2449_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 1, v___x_2451_);
v___x_2459_ = v___x_2454_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_value_2449_);
lean_ctor_set(v_reuseFailAlloc_2468_, 1, v___x_2451_);
v___x_2459_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
uint32_t v___x_2460_; lean_object* v___x_2461_; 
v___x_2460_ = lasm_js_value_handle(v_value_2449_);
lean_dec(v_value_2449_);
v___x_2461_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2456_, v___x_2457_, v___x_2459_, v___x_2460_);
lean_dec_ref(v___x_2459_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; uint8_t v___x_2463_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2462_);
lean_dec_ref_known(v___x_2461_, 1);
v___x_2463_ = lean_string_validate_utf8(v_a_2462_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
lean_dec(v_a_2462_);
v___x_2464_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2465_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2464_);
v___y_2425_ = v_a_2448_;
v_received_2426_ = v___x_2465_;
goto v___jp_2424_;
}
else
{
lean_object* v___x_2466_; 
v___x_2466_ = lean_string_from_utf8_unchecked(v_a_2462_);
v___y_2425_ = v_a_2448_;
v_received_2426_ = v___x_2466_;
goto v___jp_2424_;
}
}
else
{
lean_object* v___x_2467_; 
lean_dec_ref_known(v___x_2461_, 1);
v___x_2467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_2425_ = v_a_2448_;
v_received_2426_ = v___x_2467_;
goto v___jp_2424_;
}
}
}
}
}
else
{
v___y_2445_ = v_a_2448_;
goto v___jp_2444_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2494_, lean_object* v_d_2495_, lean_object* v_a_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v_context_2494_, v_d_2495_);
lean_dec_ref(v_context_2494_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(lean_object* v_b_2498_, lean_object* v_args_2499_, uint8_t v_await_2500_){
_start:
{
uint64_t v___y_2503_; uint64_t v___y_2504_; uint64_t v___x_2547_; uint64_t v___y_2549_; 
v___x_2547_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2500_ == 0)
{
uint64_t v___x_2554_; 
v___x_2554_ = 0ULL;
v___y_2549_ = v___x_2554_;
goto v___jp_2548_;
}
else
{
uint64_t v___x_2555_; 
v___x_2555_ = 2ULL;
v___y_2549_ = v___x_2555_;
goto v___jp_2548_;
}
v___jp_2502_:
{
uint64_t v_flags_2505_; uint32_t v___x_2506_; lean_object* v___x_2507_; uint32_t v___x_2508_; lean_object* v___x_2509_; 
v_flags_2505_ = lean_uint64_lor(v___y_2503_, v___y_2504_);
v___x_2506_ = 214;
v___x_2507_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2498_, v_args_2499_);
v___x_2508_ = 0;
v___x_2509_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2506_, v_flags_2505_, v___x_2507_, v___x_2508_);
lean_dec(v___x_2507_);
if (lean_obj_tag(v___x_2509_) == 0)
{
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2511_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_a_2510_);
lean_dec_ref_known(v___x_2509_, 1);
v___x_2511_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2510_);
lean_dec(v_a_2510_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2512_);
lean_dec_ref_known(v___x_2511_, 1);
v___x_2513_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2498_);
v___x_2514_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v___x_2513_, v_a_2512_);
lean_dec_ref(v___x_2513_);
return v___x_2514_;
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
v_a_2515_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2517_ = v___x_2511_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2511_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
v_a_2523_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2509_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2509_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
lean_ctor_set_tag(v___x_2525_, 1);
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
else
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2546_; 
v_a_2531_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2533_ = v___x_2509_;
v_isShared_2534_ = v_isSharedCheck_2546_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2509_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2546_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2544_; 
v___x_2535_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2536_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2498_);
v___x_2537_ = lean_string_append(v___x_2535_, v___x_2536_);
lean_dec_ref(v___x_2536_);
v___x_2538_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2539_ = lean_string_append(v___x_2537_, v___x_2538_);
v___x_2540_ = lean_io_error_to_string(v_a_2531_);
v___x_2541_ = lean_string_append(v___x_2539_, v___x_2540_);
lean_dec_ref(v___x_2540_);
v___x_2542_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v___x_2542_);
v___x_2544_ = v___x_2533_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(1, 1, 0);
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
v___jp_2548_:
{
uint8_t v_construct_2550_; uint64_t v___x_2551_; 
v_construct_2550_ = lean_ctor_get_uint8(v_b_2498_, sizeof(void*)*4);
v___x_2551_ = lean_uint64_lor(v___x_2547_, v___y_2549_);
if (v_construct_2550_ == 0)
{
uint64_t v___x_2552_; 
v___x_2552_ = 0ULL;
v___y_2503_ = v___x_2551_;
v___y_2504_ = v___x_2552_;
goto v___jp_2502_;
}
else
{
uint64_t v___x_2553_; 
v___x_2553_ = 4ULL;
v___y_2503_ = v___x_2551_;
v___y_2504_ = v___x_2553_;
goto v___jp_2502_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0___boxed(lean_object* v_b_2556_, lean_object* v_args_2557_, lean_object* v_await_2558_, lean_object* v_a_2559_){
_start:
{
uint8_t v_await_boxed_2560_; lean_object* v_res_2561_; 
v_await_boxed_2560_ = lean_unbox(v_await_2558_);
v_res_2561_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v_b_2556_, v_args_2557_, v_await_boxed_2560_);
lean_dec_ref(v_b_2556_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(lean_object* v_o_2570_, lean_object* v_method_2571_){
_start:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___x_2573_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_2574_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2570_, v_method_2571_, v___x_2573_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; uint8_t v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v___x_2574_, 1);
v___x_2576_ = 0;
v___x_2577_ = lean_unsigned_to_nat(1u);
v___x_2578_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2));
v___x_2579_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2580_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2580_, 0, v_a_2575_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
v___x_2581_ = lean_mk_empty_array_with_capacity(v___x_2577_);
v___x_2582_ = lean_array_push(v___x_2581_, v___x_2580_);
v___x_2583_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v___x_2578_, v___x_2582_, v___x_2576_);
return v___x_2583_;
}
else
{
lean_object* v_a_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2591_; 
v_a_2584_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2586_ = v___x_2574_;
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_a_2584_);
lean_dec(v___x_2574_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2589_; 
if (v_isShared_2587_ == 0)
{
v___x_2589_ = v___x_2586_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_a_2584_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___boxed(lean_object* v_o_2592_, lean_object* v_method_2593_, lean_object* v_a_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_o_2592_, v_method_2593_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries(lean_object* v_self_2597_){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2599_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_entries___closed__0));
v___x_2600_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_self_2597_, v___x_2599_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries___boxed(lean_object* v_self_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l_Lasm_JS_Web_URLSearchParams_entries(v_self_2601_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(lean_object* v_b_2604_, lean_object* v_args_2605_, uint8_t v_await_2606_){
_start:
{
uint64_t v___y_2609_; uint64_t v___y_2610_; uint64_t v___x_2653_; uint64_t v___y_2655_; 
v___x_2653_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2606_ == 0)
{
uint64_t v___x_2660_; 
v___x_2660_ = 0ULL;
v___y_2655_ = v___x_2660_;
goto v___jp_2654_;
}
else
{
uint64_t v___x_2661_; 
v___x_2661_ = 2ULL;
v___y_2655_ = v___x_2661_;
goto v___jp_2654_;
}
v___jp_2608_:
{
uint64_t v_flags_2611_; uint32_t v___x_2612_; lean_object* v___x_2613_; uint32_t v___x_2614_; lean_object* v___x_2615_; 
v_flags_2611_ = lean_uint64_lor(v___y_2609_, v___y_2610_);
v___x_2612_ = 214;
v___x_2613_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2604_, v_args_2605_);
v___x_2614_ = 0;
v___x_2615_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2612_, v_flags_2611_, v___x_2613_, v___x_2614_);
lean_dec(v___x_2613_);
if (lean_obj_tag(v___x_2615_) == 0)
{
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; lean_object* v___x_2617_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2615_, 1);
v___x_2617_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2616_);
lean_dec(v_a_2616_);
if (lean_obj_tag(v___x_2617_) == 0)
{
lean_object* v_a_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v_a_2618_ = lean_ctor_get(v___x_2617_, 0);
lean_inc(v_a_2618_);
lean_dec_ref_known(v___x_2617_, 1);
v___x_2619_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2604_);
v___x_2620_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v___x_2619_, v_a_2618_);
lean_dec_ref(v___x_2619_);
return v___x_2620_;
}
else
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2628_; 
v_a_2621_ = lean_ctor_get(v___x_2617_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2623_ = v___x_2617_;
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2617_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2628_;
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
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v_a_2621_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
return v___x_2626_;
}
}
}
}
else
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2636_; 
v_a_2629_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2636_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2631_ = v___x_2615_;
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v___x_2615_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
lean_ctor_set_tag(v___x_2631_, 1);
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_a_2629_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
return v___x_2634_;
}
}
}
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2652_; 
v_a_2637_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2639_ = v___x_2615_;
v_isShared_2640_ = v_isSharedCheck_2652_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2615_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2652_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2650_; 
v___x_2641_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2642_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2604_);
v___x_2643_ = lean_string_append(v___x_2641_, v___x_2642_);
lean_dec_ref(v___x_2642_);
v___x_2644_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2645_ = lean_string_append(v___x_2643_, v___x_2644_);
v___x_2646_ = lean_io_error_to_string(v_a_2637_);
v___x_2647_ = lean_string_append(v___x_2645_, v___x_2646_);
lean_dec_ref(v___x_2646_);
v___x_2648_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2647_);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v___x_2648_);
v___x_2650_ = v___x_2639_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v___x_2648_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
v___jp_2654_:
{
uint8_t v_construct_2656_; uint64_t v___x_2657_; 
v_construct_2656_ = lean_ctor_get_uint8(v_b_2604_, sizeof(void*)*4);
v___x_2657_ = lean_uint64_lor(v___x_2653_, v___y_2655_);
if (v_construct_2656_ == 0)
{
uint64_t v___x_2658_; 
v___x_2658_ = 0ULL;
v___y_2609_ = v___x_2657_;
v___y_2610_ = v___x_2658_;
goto v___jp_2608_;
}
else
{
uint64_t v___x_2659_; 
v___x_2659_ = 4ULL;
v___y_2609_ = v___x_2657_;
v___y_2610_ = v___x_2659_;
goto v___jp_2608_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0___boxed(lean_object* v_b_2662_, lean_object* v_args_2663_, lean_object* v_await_2664_, lean_object* v_a_2665_){
_start:
{
uint8_t v_await_boxed_2666_; lean_object* v_res_2667_; 
v_await_boxed_2666_ = lean_unbox(v_await_2664_);
v_res_2667_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v_b_2662_, v_args_2663_, v_await_boxed_2666_);
lean_dec_ref(v_b_2662_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(lean_object* v_o_2668_, lean_object* v_method_2669_){
_start:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_2672_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2668_, v_method_2669_, v___x_2671_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; uint8_t v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
lean_inc(v_a_2673_);
lean_dec_ref_known(v___x_2672_, 1);
v___x_2674_ = 0;
v___x_2675_ = lean_unsigned_to_nat(1u);
v___x_2676_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2));
v___x_2677_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2678_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2678_, 0, v_a_2673_);
lean_ctor_set(v___x_2678_, 1, v___x_2677_);
v___x_2679_ = lean_mk_empty_array_with_capacity(v___x_2675_);
v___x_2680_ = lean_array_push(v___x_2679_, v___x_2678_);
v___x_2681_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v___x_2676_, v___x_2680_, v___x_2674_);
return v___x_2681_;
}
else
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2689_; 
v_a_2682_ = lean_ctor_get(v___x_2672_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2672_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2684_ = v___x_2672_;
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2672_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2687_; 
if (v_isShared_2685_ == 0)
{
v___x_2687_ = v___x_2684_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_a_2682_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0___boxed(lean_object* v_o_2690_, lean_object* v_method_2691_, lean_object* v_a_2692_){
_start:
{
lean_object* v_res_2693_; 
v_res_2693_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_o_2690_, v_method_2691_);
return v_res_2693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys(lean_object* v_self_2695_){
_start:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2697_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_keys___closed__0));
v___x_2698_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2695_, v___x_2697_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys___boxed(lean_object* v_self_2699_, lean_object* v_a_2700_){
_start:
{
lean_object* v_res_2701_; 
v_res_2701_ = l_Lasm_JS_Web_URLSearchParams_keys(v_self_2699_);
return v_res_2701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values(lean_object* v_self_2703_){
_start:
{
lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2705_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_values___closed__0));
v___x_2706_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2703_, v___x_2705_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values___boxed(lean_object* v_self_2707_, lean_object* v_a_2708_){
_start:
{
lean_object* v_res_2709_; 
v_res_2709_ = l_Lasm_JS_Web_URLSearchParams_values(v_self_2707_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_cast_x3f(lean_object* v_v_2716_){
_start:
{
lean_object* v___f_2718_; lean_object* v___x_2719_; 
v___f_2718_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_cast_x3f___closed__2));
lean_inc(v_v_2716_);
v___x_2719_ = l_Lasm_JS_Web_Support_isInstance(v___f_2718_, v_v_2716_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2733_; 
v_a_2720_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2722_ = v___x_2719_;
v_isShared_2723_ = v_isSharedCheck_2733_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2719_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2733_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
uint8_t v___x_2724_; 
v___x_2724_ = lean_unbox(v_a_2720_);
lean_dec(v_a_2720_);
if (v___x_2724_ == 0)
{
lean_object* v___x_2725_; lean_object* v___x_2727_; 
lean_dec(v_v_2716_);
v___x_2725_ = lean_box(0);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 0, v___x_2725_);
v___x_2727_ = v___x_2722_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v___x_2725_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
else
{
lean_object* v___x_2729_; lean_object* v___x_2731_; 
v___x_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2729_, 0, v_v_2716_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 0, v___x_2729_);
v___x_2731_ = v___x_2722_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v___x_2729_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec(v_v_2716_);
v_a_2734_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2719_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2719_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_cast_x3f___boxed(lean_object* v_v_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Lasm_JS_Web_URLPattern_cast_x3f(v_v_2742_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(lean_object* v_x_2745_){
_start:
{
if (lean_obj_tag(v_x_2745_) == 0)
{
lean_object* v___x_2746_; 
v___x_2746_ = lean_box(0);
return v___x_2746_;
}
else
{
lean_object* v_val_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; 
v_val_2747_ = lean_ctor_get(v_x_2745_, 0);
v___x_2748_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0));
v___x_2749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2747_);
v___x_2750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2748_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___x_2751_ = lean_unsigned_to_nat(1u);
v___x_2752_ = lean_mk_empty_array_with_capacity(v___x_2751_);
v___x_2753_ = lean_array_push(v___x_2752_, v___x_2750_);
v___x_2754_ = l_Lasm_JS_Web_Support_fields(v___x_2753_);
lean_dec_ref(v___x_2753_);
return v___x_2754_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0___boxed(lean_object* v_x_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_x_2755_);
lean_dec(v_x_2755_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(lean_object* v_context_2757_, lean_object* v_d_2758_){
_start:
{
lean_object* v___y_2761_; lean_object* v___y_2762_; 
if (lean_obj_tag(v_d_2758_) == 9)
{
lean_object* v_value_2766_; lean_object* v___x_2767_; 
v_value_2766_ = lean_ctor_get(v_d_2758_, 0);
lean_inc(v_value_2766_);
lean_dec_ref_known(v_d_2758_, 2);
v___x_2767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2767_, 0, v_value_2766_);
return v___x_2767_;
}
else
{
lean_object* v___x_2768_; lean_object* v_received_2770_; 
v___x_2768_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_2758_) == 9)
{
lean_object* v_value_2784_; lean_object* v_description_2785_; uint8_t v___x_2786_; 
v_value_2784_ = lean_ctor_get(v_d_2758_, 0);
v_description_2785_ = lean_ctor_get(v_d_2758_, 1);
v___x_2786_ = lean_string_dec_eq(v_description_2785_, v___x_2768_);
if (v___x_2786_ == 0)
{
goto v___jp_2782_;
}
else
{
uint32_t v___x_2787_; uint64_t v___x_2788_; lean_object* v___x_2789_; uint32_t v___x_2790_; lean_object* v___x_2791_; 
lean_inc_n(v_value_2784_, 2);
lean_dec_ref_known(v_d_2758_, 2);
v___x_2787_ = 206;
v___x_2788_ = 0ULL;
v___x_2789_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2789_, 0, v_value_2784_);
lean_ctor_set(v___x_2789_, 1, v___x_2768_);
v___x_2790_ = lasm_js_value_handle(v_value_2784_);
lean_dec(v_value_2784_);
v___x_2791_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2787_, v___x_2788_, v___x_2789_, v___x_2790_);
lean_dec_ref_known(v___x_2789_, 2);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; uint8_t v___x_2793_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2792_);
lean_dec_ref_known(v___x_2791_, 1);
v___x_2793_ = lean_string_validate_utf8(v_a_2792_);
if (v___x_2793_ == 0)
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
lean_dec(v_a_2792_);
v___x_2794_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2795_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2794_);
v_received_2770_ = v___x_2795_;
goto v___jp_2769_;
}
else
{
lean_object* v___x_2796_; 
v___x_2796_ = lean_string_from_utf8_unchecked(v_a_2792_);
v_received_2770_ = v___x_2796_;
goto v___jp_2769_;
}
}
else
{
lean_object* v___x_2797_; 
lean_dec_ref_known(v___x_2791_, 1);
v___x_2797_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_2770_ = v___x_2797_;
goto v___jp_2769_;
}
}
}
else
{
goto v___jp_2782_;
}
v___jp_2769_:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; uint8_t v___x_2780_; 
v___x_2771_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2772_ = lean_string_append(v___x_2771_, v_context_2757_);
v___x_2773_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2774_ = lean_string_append(v___x_2772_, v___x_2773_);
v___x_2775_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPattern___closed__0));
v___x_2776_ = lean_string_append(v___x_2774_, v___x_2775_);
v___x_2777_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2778_ = lean_string_append(v___x_2776_, v___x_2777_);
v___x_2779_ = lean_string_append(v___x_2778_, v_received_2770_);
lean_dec_ref(v_received_2770_);
v___x_2780_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_2780_ == 0)
{
lean_object* v___x_2781_; 
v___x_2781_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_2761_ = v___x_2779_;
v___y_2762_ = v___x_2781_;
goto v___jp_2760_;
}
else
{
v___y_2761_ = v___x_2779_;
v___y_2762_ = v___x_2768_;
goto v___jp_2760_;
}
}
v___jp_2782_:
{
lean_object* v___x_2783_; 
v___x_2783_ = l_Lasm_JS_Data_describe(v_d_2758_);
v_received_2770_ = v___x_2783_;
goto v___jp_2769_;
}
}
v___jp_2760_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2763_ = lean_string_append(v___y_2761_, v___y_2762_);
v___x_2764_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2763_);
v___x_2765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2764_);
return v___x_2765_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1___boxed(lean_object* v_context_2798_, lean_object* v_d_2799_, lean_object* v_a_2800_){
_start:
{
lean_object* v_res_2801_; 
v_res_2801_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v_context_2798_, v_d_2799_);
lean_dec_ref(v_context_2798_);
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(lean_object* v_b_2802_, lean_object* v_args_2803_, uint8_t v_await_2804_){
_start:
{
uint64_t v___y_2807_; uint64_t v___y_2808_; uint64_t v___x_2851_; uint64_t v___y_2853_; 
v___x_2851_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2804_ == 0)
{
uint64_t v___x_2858_; 
v___x_2858_ = 0ULL;
v___y_2853_ = v___x_2858_;
goto v___jp_2852_;
}
else
{
uint64_t v___x_2859_; 
v___x_2859_ = 2ULL;
v___y_2853_ = v___x_2859_;
goto v___jp_2852_;
}
v___jp_2806_:
{
uint64_t v_flags_2809_; uint32_t v___x_2810_; lean_object* v___x_2811_; uint32_t v___x_2812_; lean_object* v___x_2813_; 
v_flags_2809_ = lean_uint64_lor(v___y_2807_, v___y_2808_);
v___x_2810_ = 214;
v___x_2811_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2802_, v_args_2803_);
v___x_2812_ = 0;
v___x_2813_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2810_, v_flags_2809_, v___x_2811_, v___x_2812_);
lean_dec(v___x_2811_);
if (lean_obj_tag(v___x_2813_) == 0)
{
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v___x_2815_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2813_, 1);
v___x_2815_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2814_);
lean_dec(v_a_2814_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_a_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_a_2816_);
lean_dec_ref_known(v___x_2815_, 1);
v___x_2817_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2802_);
v___x_2818_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v___x_2817_, v_a_2816_);
lean_dec_ref(v___x_2817_);
return v___x_2818_;
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
v_a_2819_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2815_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2815_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
v_a_2827_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2813_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2813_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
lean_ctor_set_tag(v___x_2829_, 1);
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2850_; 
v_a_2835_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2837_ = v___x_2813_;
v_isShared_2838_ = v_isSharedCheck_2850_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2813_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2850_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2848_; 
v___x_2839_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2840_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2802_);
v___x_2841_ = lean_string_append(v___x_2839_, v___x_2840_);
lean_dec_ref(v___x_2840_);
v___x_2842_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2843_ = lean_string_append(v___x_2841_, v___x_2842_);
v___x_2844_ = lean_io_error_to_string(v_a_2835_);
v___x_2845_ = lean_string_append(v___x_2843_, v___x_2844_);
lean_dec_ref(v___x_2844_);
v___x_2846_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2845_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 0, v___x_2846_);
v___x_2848_ = v___x_2837_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v___x_2846_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
}
v___jp_2852_:
{
uint8_t v_construct_2854_; uint64_t v___x_2855_; 
v_construct_2854_ = lean_ctor_get_uint8(v_b_2802_, sizeof(void*)*4);
v___x_2855_ = lean_uint64_lor(v___x_2851_, v___y_2853_);
if (v_construct_2854_ == 0)
{
uint64_t v___x_2856_; 
v___x_2856_ = 0ULL;
v___y_2807_ = v___x_2855_;
v___y_2808_ = v___x_2856_;
goto v___jp_2806_;
}
else
{
uint64_t v___x_2857_; 
v___x_2857_ = 4ULL;
v___y_2807_ = v___x_2855_;
v___y_2808_ = v___x_2857_;
goto v___jp_2806_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1___boxed(lean_object* v_b_2860_, lean_object* v_args_2861_, lean_object* v_await_2862_, lean_object* v_a_2863_){
_start:
{
uint8_t v_await_boxed_2864_; lean_object* v_res_2865_; 
v_await_boxed_2864_ = lean_unbox(v_await_2862_);
v_res_2865_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v_b_2860_, v_args_2861_, v_await_boxed_2864_);
lean_dec_ref(v_b_2860_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new(lean_object* v_input_2873_, lean_object* v_baseURL_2874_, lean_object* v_options_2875_){
_start:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___y_2880_; 
v___x_2877_ = lean_unsigned_to_nat(3u);
v___x_2878_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_new___closed__1));
if (lean_obj_tag(v_input_2873_) == 0)
{
lean_object* v_value_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
v_value_2890_ = lean_ctor_get(v_input_2873_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v_input_2873_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v_input_2873_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_value_2890_);
lean_dec(v_input_2873_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
lean_ctor_set_tag(v___x_2892_, 4);
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_value_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
v___y_2880_ = v___x_2895_;
goto v___jp_2879_;
}
}
}
else
{
lean_object* v_value_2898_; lean_object* v_protocol_2899_; lean_object* v_username_2900_; lean_object* v_password_2901_; lean_object* v_hostname_2902_; lean_object* v_port_2903_; lean_object* v_pathname_2904_; lean_object* v_search_2905_; lean_object* v_hash_2906_; lean_object* v_baseURL_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; 
v_value_2898_ = lean_ctor_get(v_input_2873_, 0);
lean_inc_ref(v_value_2898_);
lean_dec_ref_known(v_input_2873_, 1);
v_protocol_2899_ = lean_ctor_get(v_value_2898_, 0);
lean_inc(v_protocol_2899_);
v_username_2900_ = lean_ctor_get(v_value_2898_, 1);
lean_inc(v_username_2900_);
v_password_2901_ = lean_ctor_get(v_value_2898_, 2);
lean_inc(v_password_2901_);
v_hostname_2902_ = lean_ctor_get(v_value_2898_, 3);
lean_inc(v_hostname_2902_);
v_port_2903_ = lean_ctor_get(v_value_2898_, 4);
lean_inc(v_port_2903_);
v_pathname_2904_ = lean_ctor_get(v_value_2898_, 5);
lean_inc(v_pathname_2904_);
v_search_2905_ = lean_ctor_get(v_value_2898_, 6);
lean_inc(v_search_2905_);
v_hash_2906_ = lean_ctor_get(v_value_2898_, 7);
lean_inc(v_hash_2906_);
v_baseURL_2907_ = lean_ctor_get(v_value_2898_, 8);
lean_inc(v_baseURL_2907_);
lean_dec_ref(v_value_2898_);
v___x_2908_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2909_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2899_);
v___x_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2908_);
lean_ctor_set(v___x_2910_, 1, v___x_2909_);
v___x_2911_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2912_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2900_);
v___x_2913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2911_);
lean_ctor_set(v___x_2913_, 1, v___x_2912_);
v___x_2914_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2915_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2901_);
v___x_2916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2914_);
lean_ctor_set(v___x_2916_, 1, v___x_2915_);
v___x_2917_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2918_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2902_);
v___x_2919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2917_);
lean_ctor_set(v___x_2919_, 1, v___x_2918_);
v___x_2920_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2921_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2903_);
v___x_2922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2920_);
lean_ctor_set(v___x_2922_, 1, v___x_2921_);
v___x_2923_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2924_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2904_);
v___x_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2923_);
lean_ctor_set(v___x_2925_, 1, v___x_2924_);
v___x_2926_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2927_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2905_);
v___x_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2926_);
lean_ctor_set(v___x_2928_, 1, v___x_2927_);
v___x_2929_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2930_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2906_);
v___x_2931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2929_);
lean_ctor_set(v___x_2931_, 1, v___x_2930_);
v___x_2932_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2933_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2907_);
v___x_2934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2932_);
lean_ctor_set(v___x_2934_, 1, v___x_2933_);
v___x_2935_ = lean_unsigned_to_nat(9u);
v___x_2936_ = lean_mk_empty_array_with_capacity(v___x_2935_);
v___x_2937_ = lean_array_push(v___x_2936_, v___x_2910_);
v___x_2938_ = lean_array_push(v___x_2937_, v___x_2913_);
v___x_2939_ = lean_array_push(v___x_2938_, v___x_2916_);
v___x_2940_ = lean_array_push(v___x_2939_, v___x_2919_);
v___x_2941_ = lean_array_push(v___x_2940_, v___x_2922_);
v___x_2942_ = lean_array_push(v___x_2941_, v___x_2925_);
v___x_2943_ = lean_array_push(v___x_2942_, v___x_2928_);
v___x_2944_ = lean_array_push(v___x_2943_, v___x_2931_);
v___x_2945_ = lean_array_push(v___x_2944_, v___x_2934_);
v___x_2946_ = l_Lasm_JS_Web_Support_fields(v___x_2945_);
lean_dec_ref(v___x_2945_);
v___y_2880_ = v___x_2946_;
goto v___jp_2879_;
}
v___jp_2879_:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; uint8_t v___x_2888_; lean_object* v___x_2889_; 
v___x_2881_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2881_, 0, v_baseURL_2874_);
v___x_2882_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_2875_);
v___x_2883_ = lean_mk_empty_array_with_capacity(v___x_2877_);
v___x_2884_ = lean_array_push(v___x_2883_, v___y_2880_);
v___x_2885_ = lean_array_push(v___x_2884_, v___x_2881_);
v___x_2886_ = lean_array_push(v___x_2885_, v___x_2882_);
v___x_2887_ = l_Lasm_JS_Web_Support_args(v___x_2886_);
v___x_2888_ = 0;
v___x_2889_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_2878_, v___x_2887_, v___x_2888_);
return v___x_2889_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new___boxed(lean_object* v_input_2947_, lean_object* v_baseURL_2948_, lean_object* v_options_2949_, lean_object* v_a_2950_){
_start:
{
lean_object* v_res_2951_; 
v_res_2951_ = l_Lasm_JS_Web_URLPattern_new(v_input_2947_, v_baseURL_2948_, v_options_2949_);
lean_dec(v_options_2949_);
return v_res_2951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(lean_object* v_x_2952_){
_start:
{
if (lean_obj_tag(v_x_2952_) == 0)
{
lean_object* v___x_2953_; 
v___x_2953_ = lean_box(0);
return v___x_2953_;
}
else
{
lean_object* v_val_2954_; 
v_val_2954_ = lean_ctor_get(v_x_2952_, 0);
lean_inc(v_val_2954_);
lean_dec_ref_known(v_x_2952_, 1);
if (lean_obj_tag(v_val_2954_) == 0)
{
lean_object* v_value_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2962_; 
v_value_2955_ = lean_ctor_get(v_val_2954_, 0);
v_isSharedCheck_2962_ = !lean_is_exclusive(v_val_2954_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2957_ = v_val_2954_;
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_value_2955_);
lean_dec(v_val_2954_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2960_; 
if (v_isShared_2958_ == 0)
{
lean_ctor_set_tag(v___x_2957_, 4);
v___x_2960_ = v___x_2957_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_value_2955_);
v___x_2960_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
return v___x_2960_;
}
}
}
else
{
lean_object* v_value_2963_; lean_object* v_protocol_2964_; lean_object* v_username_2965_; lean_object* v_password_2966_; lean_object* v_hostname_2967_; lean_object* v_port_2968_; lean_object* v_pathname_2969_; lean_object* v_search_2970_; lean_object* v_hash_2971_; lean_object* v_baseURL_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
v_value_2963_ = lean_ctor_get(v_val_2954_, 0);
lean_inc_ref(v_value_2963_);
lean_dec_ref_known(v_val_2954_, 1);
v_protocol_2964_ = lean_ctor_get(v_value_2963_, 0);
lean_inc(v_protocol_2964_);
v_username_2965_ = lean_ctor_get(v_value_2963_, 1);
lean_inc(v_username_2965_);
v_password_2966_ = lean_ctor_get(v_value_2963_, 2);
lean_inc(v_password_2966_);
v_hostname_2967_ = lean_ctor_get(v_value_2963_, 3);
lean_inc(v_hostname_2967_);
v_port_2968_ = lean_ctor_get(v_value_2963_, 4);
lean_inc(v_port_2968_);
v_pathname_2969_ = lean_ctor_get(v_value_2963_, 5);
lean_inc(v_pathname_2969_);
v_search_2970_ = lean_ctor_get(v_value_2963_, 6);
lean_inc(v_search_2970_);
v_hash_2971_ = lean_ctor_get(v_value_2963_, 7);
lean_inc(v_hash_2971_);
v_baseURL_2972_ = lean_ctor_get(v_value_2963_, 8);
lean_inc(v_baseURL_2972_);
lean_dec_ref(v_value_2963_);
v___x_2973_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2974_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2964_);
v___x_2975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2973_);
lean_ctor_set(v___x_2975_, 1, v___x_2974_);
v___x_2976_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2977_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2965_);
v___x_2978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2976_);
lean_ctor_set(v___x_2978_, 1, v___x_2977_);
v___x_2979_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2980_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2966_);
v___x_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2979_);
lean_ctor_set(v___x_2981_, 1, v___x_2980_);
v___x_2982_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2983_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2967_);
v___x_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2982_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
v___x_2985_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2986_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2968_);
v___x_2987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2985_);
lean_ctor_set(v___x_2987_, 1, v___x_2986_);
v___x_2988_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2989_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2969_);
v___x_2990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2988_);
lean_ctor_set(v___x_2990_, 1, v___x_2989_);
v___x_2991_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2992_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2970_);
v___x_2993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2991_);
lean_ctor_set(v___x_2993_, 1, v___x_2992_);
v___x_2994_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2995_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2971_);
v___x_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2994_);
lean_ctor_set(v___x_2996_, 1, v___x_2995_);
v___x_2997_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2998_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2972_);
v___x_2999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2997_);
lean_ctor_set(v___x_2999_, 1, v___x_2998_);
v___x_3000_ = lean_unsigned_to_nat(9u);
v___x_3001_ = lean_mk_empty_array_with_capacity(v___x_3000_);
v___x_3002_ = lean_array_push(v___x_3001_, v___x_2975_);
v___x_3003_ = lean_array_push(v___x_3002_, v___x_2978_);
v___x_3004_ = lean_array_push(v___x_3003_, v___x_2981_);
v___x_3005_ = lean_array_push(v___x_3004_, v___x_2984_);
v___x_3006_ = lean_array_push(v___x_3005_, v___x_2987_);
v___x_3007_ = lean_array_push(v___x_3006_, v___x_2990_);
v___x_3008_ = lean_array_push(v___x_3007_, v___x_2993_);
v___x_3009_ = lean_array_push(v___x_3008_, v___x_2996_);
v___x_3010_ = lean_array_push(v___x_3009_, v___x_2999_);
v___x_3011_ = l_Lasm_JS_Web_Support_fields(v___x_3010_);
lean_dec_ref(v___x_3010_);
return v___x_3011_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions(lean_object* v_input_3019_, lean_object* v_options_3020_){
_start:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; uint8_t v___x_3030_; lean_object* v___x_3031_; 
v___x_3022_ = lean_unsigned_to_nat(2u);
v___x_3023_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_newWithOptions___closed__1));
v___x_3024_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_3019_);
v___x_3025_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_3020_);
v___x_3026_ = lean_mk_empty_array_with_capacity(v___x_3022_);
v___x_3027_ = lean_array_push(v___x_3026_, v___x_3024_);
v___x_3028_ = lean_array_push(v___x_3027_, v___x_3025_);
v___x_3029_ = l_Lasm_JS_Web_Support_args(v___x_3028_);
v___x_3030_ = 0;
v___x_3031_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_3023_, v___x_3029_, v___x_3030_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions___boxed(lean_object* v_input_3032_, lean_object* v_options_3033_, lean_object* v_a_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Lasm_JS_Web_URLPattern_newWithOptions(v_input_3032_, v_options_3033_);
lean_dec(v_options_3033_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol(lean_object* v_self_3036_){
_start:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___x_3038_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_3039_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3036_, v___x_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol___boxed(lean_object* v_self_3040_, lean_object* v_a_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l_Lasm_JS_Web_URLPattern_protocol(v_self_3040_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username(lean_object* v_self_3043_){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3045_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_3046_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3043_, v___x_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username___boxed(lean_object* v_self_3047_, lean_object* v_a_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l_Lasm_JS_Web_URLPattern_username(v_self_3047_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password(lean_object* v_self_3050_){
_start:
{
lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3052_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_3053_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3050_, v___x_3052_);
return v___x_3053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password___boxed(lean_object* v_self_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l_Lasm_JS_Web_URLPattern_password(v_self_3054_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname(lean_object* v_self_3057_){
_start:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_3060_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3057_, v___x_3059_);
return v___x_3060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname___boxed(lean_object* v_self_3061_, lean_object* v_a_3062_){
_start:
{
lean_object* v_res_3063_; 
v_res_3063_ = l_Lasm_JS_Web_URLPattern_hostname(v_self_3061_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port(lean_object* v_self_3064_){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3066_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_3067_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3064_, v___x_3066_);
return v___x_3067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port___boxed(lean_object* v_self_3068_, lean_object* v_a_3069_){
_start:
{
lean_object* v_res_3070_; 
v_res_3070_ = l_Lasm_JS_Web_URLPattern_port(v_self_3068_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname(lean_object* v_self_3071_){
_start:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3073_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_3074_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3071_, v___x_3073_);
return v___x_3074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname___boxed(lean_object* v_self_3075_, lean_object* v_a_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l_Lasm_JS_Web_URLPattern_pathname(v_self_3075_);
return v_res_3077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search(lean_object* v_self_3078_){
_start:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; 
v___x_3080_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_3081_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3078_, v___x_3080_);
return v___x_3081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search___boxed(lean_object* v_self_3082_, lean_object* v_a_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l_Lasm_JS_Web_URLPattern_search(v_self_3082_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash(lean_object* v_self_3085_){
_start:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___x_3087_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_3088_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3085_, v___x_3087_);
return v___x_3088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash___boxed(lean_object* v_self_3089_, lean_object* v_a_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lasm_JS_Web_URLPattern_hash(v_self_3089_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups(lean_object* v_self_3093_){
_start:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3095_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_hasRegExpGroups___closed__0));
v___x_3096_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_3093_, v___x_3095_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups___boxed(lean_object* v_self_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v_res_3099_; 
v_res_3099_ = l_Lasm_JS_Web_URLPattern_hasRegExpGroups(v_self_3097_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test(lean_object* v_self_3101_, lean_object* v_input_3102_, lean_object* v_baseURL_3103_){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3105_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_test___closed__0));
v___x_3106_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_3102_);
v___x_3107_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_3103_);
v___x_3108_ = lean_unsigned_to_nat(2u);
v___x_3109_ = lean_mk_empty_array_with_capacity(v___x_3108_);
v___x_3110_ = lean_array_push(v___x_3109_, v___x_3106_);
v___x_3111_ = lean_array_push(v___x_3110_, v___x_3107_);
v___x_3112_ = l_Lasm_JS_Web_Support_args(v___x_3111_);
v___x_3113_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_3101_, v___x_3105_, v___x_3112_);
return v___x_3113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test___boxed(lean_object* v_self_3114_, lean_object* v_input_3115_, lean_object* v_baseURL_3116_, lean_object* v_a_3117_){
_start:
{
lean_object* v_res_3118_; 
v_res_3118_ = l_Lasm_JS_Web_URLPattern_test(v_self_3114_, v_input_3115_, v_baseURL_3116_);
return v_res_3118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_3127_, lean_object* v_key_3128_){
_start:
{
if (lean_obj_tag(v_d_3127_) == 8)
{
lean_object* v___x_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3159_; 
v___x_3131_ = l_Lasm_JS_Data_field(v_d_3127_, v_key_3128_);
v_isSharedCheck_3159_ = !lean_is_exclusive(v_d_3127_);
if (v_isSharedCheck_3159_ == 0)
{
lean_object* v_unused_3160_; 
v_unused_3160_ = lean_ctor_get(v_d_3127_, 0);
lean_dec(v_unused_3160_);
v___x_3133_ = v_d_3127_;
v_isShared_3134_ = v_isSharedCheck_3159_;
goto v_resetjp_3132_;
}
else
{
lean_dec(v_d_3127_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3159_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
switch(lean_obj_tag(v___x_3131_))
{
case 1:
{
lean_del_object(v___x_3133_);
goto v___jp_3129_;
}
case 0:
{
lean_del_object(v___x_3133_);
goto v___jp_3129_;
}
default: 
{
if (lean_obj_tag(v___x_3131_) == 4)
{
lean_object* v_s_3135_; lean_object* v___x_3137_; 
v_s_3135_ = lean_ctor_get(v___x_3131_, 0);
lean_inc_ref(v_s_3135_);
lean_dec_ref_known(v___x_3131_, 1);
if (v_isShared_3134_ == 0)
{
lean_ctor_set_tag(v___x_3133_, 1);
lean_ctor_set(v___x_3133_, 0, v_s_3135_);
v___x_3137_ = v___x_3133_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_s_3135_);
v___x_3137_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
lean_object* v___x_3138_; 
v___x_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
return v___x_3138_;
}
}
else
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; uint8_t v___x_3150_; 
v___x_3140_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3141_ = lean_string_append(v___x_3140_, v_key_3128_);
v___x_3142_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3143_ = lean_string_append(v___x_3141_, v___x_3142_);
v___x_3144_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_3145_ = lean_string_append(v___x_3143_, v___x_3144_);
v___x_3146_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3147_ = lean_string_append(v___x_3145_, v___x_3146_);
v___x_3148_ = l_Lasm_JS_Data_describe(v___x_3131_);
v___x_3149_ = lean_string_append(v___x_3147_, v___x_3148_);
lean_dec_ref(v___x_3148_);
v___x_3150_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_3150_ == 0)
{
lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3154_; 
v___x_3151_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___x_3152_ = lean_string_append(v___x_3149_, v___x_3151_);
if (v_isShared_3134_ == 0)
{
lean_ctor_set_tag(v___x_3133_, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3152_);
v___x_3154_ = v___x_3133_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3152_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
else
{
lean_object* v___x_3157_; 
if (v_isShared_3134_ == 0)
{
lean_ctor_set_tag(v___x_3133_, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3149_);
v___x_3157_ = v___x_3133_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v___x_3149_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3161_; 
lean_dec(v_d_3127_);
v___x_3161_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5));
return v___x_3161_;
}
v___jp_3129_:
{
lean_object* v___x_3130_; 
v___x_3130_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3130_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_3162_, lean_object* v_key_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3162_, v_key_3163_);
lean_dec_ref(v_key_3163_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(size_t v_sz_3165_, size_t v_i_3166_, lean_object* v_bs_3167_){
_start:
{
uint8_t v___x_3168_; 
v___x_3168_ = lean_usize_dec_lt(v_i_3166_, v_sz_3165_);
if (v___x_3168_ == 0)
{
lean_object* v___x_3169_; 
v___x_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3169_, 0, v_bs_3167_);
return v___x_3169_;
}
else
{
lean_object* v_v_3170_; lean_object* v___x_3171_; lean_object* v_bs_x27_3172_; lean_object* v_a_3174_; 
v_v_3170_ = lean_array_uget(v_bs_3167_, v_i_3166_);
v___x_3171_ = lean_unsigned_to_nat(0u);
v_bs_x27_3172_ = lean_array_uset(v_bs_3167_, v_i_3166_, v___x_3171_);
switch(lean_obj_tag(v_v_3170_))
{
case 4:
{
lean_object* v_s_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3186_; 
v_s_3179_ = lean_ctor_get(v_v_3170_, 0);
v_isSharedCheck_3186_ = !lean_is_exclusive(v_v_3170_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3181_ = v_v_3170_;
v_isShared_3182_ = v_isSharedCheck_3186_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_s_3179_);
lean_dec(v_v_3170_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3186_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3184_; 
if (v_isShared_3182_ == 0)
{
lean_ctor_set_tag(v___x_3181_, 0);
v___x_3184_ = v___x_3181_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v_s_3179_);
v___x_3184_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
v_a_3174_ = v___x_3184_;
goto v___jp_3173_;
}
}
}
case 8:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
v___x_3187_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v_v_3170_);
v___x_3188_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3170_, v___x_3187_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3196_; 
lean_dec_ref_known(v_v_3170_, 1);
lean_dec_ref(v_bs_x27_3172_);
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___x_3188_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3191_ = v___x_3188_;
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_a_3189_);
lean_dec(v___x_3188_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3194_; 
if (v_isShared_3192_ == 0)
{
v___x_3194_ = v___x_3191_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_a_3189_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
else
{
lean_object* v_a_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; 
v_a_3197_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3197_);
lean_dec_ref_known(v___x_3188_, 1);
v___x_3198_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v_v_3170_);
v___x_3199_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3170_, v___x_3198_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
lean_dec(v_a_3197_);
lean_dec_ref_known(v_v_3170_, 1);
lean_dec_ref(v_bs_x27_3172_);
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_3199_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3199_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v_a_3208_ = lean_ctor_get(v___x_3199_, 0);
lean_inc(v_a_3208_);
lean_dec_ref_known(v___x_3199_, 1);
v___x_3209_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v_v_3170_);
v___x_3210_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3170_, v___x_3209_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
lean_dec(v_a_3208_);
lean_dec(v_a_3197_);
lean_dec_ref_known(v_v_3170_, 1);
lean_dec_ref(v_bs_x27_3172_);
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___x_3210_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3210_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
}
else
{
lean_object* v_a_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; 
v_a_3219_ = lean_ctor_get(v___x_3210_, 0);
lean_inc(v_a_3219_);
lean_dec_ref_known(v___x_3210_, 1);
v___x_3220_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v_v_3170_);
v___x_3221_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3170_, v___x_3220_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3229_; 
lean_dec(v_a_3219_);
lean_dec(v_a_3208_);
lean_dec(v_a_3197_);
lean_dec_ref_known(v_v_3170_, 1);
lean_dec_ref(v_bs_x27_3172_);
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3224_ = v___x_3221_;
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v___x_3221_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3227_; 
if (v_isShared_3225_ == 0)
{
v___x_3227_ = v___x_3224_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3222_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v_a_3230_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3230_);
lean_dec_ref_known(v___x_3221_, 1);
v___x_3231_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v_v_3170_);
v___x_3232_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3170_, v___x_3231_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
lean_dec(v_a_3230_);
lean_dec(v_a_3219_);
lean_dec(v_a_3208_);
lean_dec(v_a_3197_);
lean_dec_ref_known(v_v_3170_, 1);
lean_dec_ref(v_bs_x27_3172_);
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3232_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3232_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
else
{
lean_object* v_a_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; 
v_a_3241_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3241_);
lean_dec_ref_known(v___x_3232_, 1);
v___x_3242_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v_v_3170_);
v___x_3243_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3170_, v___x_3242_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3251_; 
lean_dec(v_a_3241_);
lean_dec(v_a_3230_);
lean_dec(v_a_3219_);
lean_dec(v_a_3208_);
lean_dec(v_a_3197_);
lean_dec_ref_known(v_v_3170_, 1);
lean_dec_ref(v_bs_x27_3172_);
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3243_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3246_ = v___x_3243_;
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_dec(v___x_3243_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3249_; 
if (v_isShared_3247_ == 0)
{
v___x_3249_ = v___x_3246_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_a_3244_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
else
{
lean_object* v_a_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v_a_3252_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3252_);
lean_dec_ref_known(v___x_3243_, 1);
v___x_3253_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v_v_3170_);
v___x_3254_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3170_, v___x_3253_);
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3262_; 
lean_dec(v_a_3252_);
lean_dec(v_a_3241_);
lean_dec(v_a_3230_);
lean_dec(v_a_3219_);
lean_dec(v_a_3208_);
lean_dec(v_a_3197_);
lean_dec_ref_known(v_v_3170_, 1);
lean_dec_ref(v_bs_x27_3172_);
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3257_ = v___x_3254_;
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3254_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3260_; 
if (v_isShared_3258_ == 0)
{
v___x_3260_ = v___x_3257_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_a_3255_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
return v___x_3260_;
}
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; 
v_a_3263_ = lean_ctor_get(v___x_3254_, 0);
lean_inc(v_a_3263_);
lean_dec_ref_known(v___x_3254_, 1);
v___x_3264_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc_ref(v_v_3170_);
v___x_3265_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3170_, v___x_3264_);
if (lean_obj_tag(v___x_3265_) == 0)
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3273_; 
lean_dec(v_a_3263_);
lean_dec(v_a_3252_);
lean_dec(v_a_3241_);
lean_dec(v_a_3230_);
lean_dec(v_a_3219_);
lean_dec(v_a_3208_);
lean_dec(v_a_3197_);
lean_dec_ref_known(v_v_3170_, 1);
lean_dec_ref(v_bs_x27_3172_);
v_a_3266_ = lean_ctor_get(v___x_3265_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3265_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3268_ = v___x_3265_;
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3265_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3271_; 
if (v_isShared_3269_ == 0)
{
v___x_3271_ = v___x_3268_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3266_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v_a_3274_ = lean_ctor_get(v___x_3265_, 0);
lean_inc(v_a_3274_);
lean_dec_ref_known(v___x_3265_, 1);
v___x_3275_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_3276_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3170_, v___x_3275_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3284_; 
lean_dec(v_a_3274_);
lean_dec(v_a_3263_);
lean_dec(v_a_3252_);
lean_dec(v_a_3241_);
lean_dec(v_a_3230_);
lean_dec(v_a_3219_);
lean_dec(v_a_3208_);
lean_dec(v_a_3197_);
lean_dec_ref(v_bs_x27_3172_);
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3279_ = v___x_3276_;
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3276_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3277_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
v_a_3285_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3285_);
lean_dec_ref_known(v___x_3276_, 1);
v___x_3286_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3286_, 0, v_a_3197_);
lean_ctor_set(v___x_3286_, 1, v_a_3208_);
lean_ctor_set(v___x_3286_, 2, v_a_3219_);
lean_ctor_set(v___x_3286_, 3, v_a_3230_);
lean_ctor_set(v___x_3286_, 4, v_a_3241_);
lean_ctor_set(v___x_3286_, 5, v_a_3252_);
lean_ctor_set(v___x_3286_, 6, v_a_3263_);
lean_ctor_set(v___x_3286_, 7, v_a_3274_);
lean_ctor_set(v___x_3286_, 8, v_a_3285_);
v___x_3287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3286_);
v_a_3174_ = v___x_3287_;
goto v___jp_3173_;
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
lean_object* v___x_3288_; 
lean_dec_ref(v_bs_x27_3172_);
lean_dec(v_v_3170_);
v___x_3288_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3288_;
}
}
v___jp_3173_:
{
size_t v___x_3175_; size_t v___x_3176_; lean_object* v___x_3177_; 
v___x_3175_ = ((size_t)1ULL);
v___x_3176_ = lean_usize_add(v_i_3166_, v___x_3175_);
v___x_3177_ = lean_array_uset(v_bs_x27_3172_, v_i_3166_, v_a_3174_);
v_i_3166_ = v___x_3176_;
v_bs_3167_ = v___x_3177_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_sz_3289_, lean_object* v_i_3290_, lean_object* v_bs_3291_){
_start:
{
size_t v_sz_boxed_3292_; size_t v_i_boxed_3293_; lean_object* v_res_3294_; 
v_sz_boxed_3292_ = lean_unbox_usize(v_sz_3289_);
lean_dec(v_sz_3289_);
v_i_boxed_3293_ = lean_unbox_usize(v_i_3290_);
lean_dec(v_i_3290_);
v_res_3294_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(v_sz_boxed_3292_, v_i_boxed_3293_, v_bs_3291_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3301_, lean_object* v_key_3302_){
_start:
{
if (lean_obj_tag(v_d_3301_) == 8)
{
lean_object* v___x_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3358_; 
v___x_3305_ = l_Lasm_JS_Data_field(v_d_3301_, v_key_3302_);
v_isSharedCheck_3358_ = !lean_is_exclusive(v_d_3301_);
if (v_isSharedCheck_3358_ == 0)
{
lean_object* v_unused_3359_; 
v_unused_3359_ = lean_ctor_get(v_d_3301_, 0);
lean_dec(v_unused_3359_);
v___x_3307_ = v_d_3301_;
v_isShared_3308_ = v_isSharedCheck_3358_;
goto v_resetjp_3306_;
}
else
{
lean_dec(v_d_3301_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3358_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v_a_3310_; 
switch(lean_obj_tag(v___x_3305_))
{
case 1:
{
lean_del_object(v___x_3307_);
goto v___jp_3303_;
}
case 0:
{
lean_del_object(v___x_3307_);
goto v___jp_3303_;
}
default: 
{
if (lean_obj_tag(v___x_3305_) == 7)
{
lean_object* v_items_3335_; size_t v_sz_3336_; size_t v___x_3337_; lean_object* v___x_3338_; 
v_items_3335_ = lean_ctor_get(v___x_3305_, 0);
lean_inc_ref(v_items_3335_);
v_sz_3336_ = lean_array_size(v_items_3335_);
v___x_3337_ = ((size_t)0ULL);
v___x_3338_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(v_sz_3336_, v___x_3337_, v_items_3335_);
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_object* v_a_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; uint8_t v___x_3343_; 
v_a_3339_ = lean_ctor_get(v___x_3338_, 0);
lean_inc(v_a_3339_);
lean_dec_ref_known(v___x_3338_, 1);
v___x_3340_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3341_ = lean_string_utf8_byte_size(v_a_3339_);
v___x_3342_ = lean_unsigned_to_nat(0u);
v___x_3343_ = lean_nat_dec_eq(v___x_3341_, v___x_3342_);
if (v___x_3343_ == 0)
{
lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3344_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3345_ = lean_string_append(v___x_3344_, v_a_3339_);
lean_dec(v_a_3339_);
v___x_3346_ = lean_string_append(v___x_3340_, v___x_3345_);
lean_dec_ref(v___x_3345_);
v_a_3310_ = v___x_3346_;
goto v___jp_3309_;
}
else
{
lean_dec(v_a_3339_);
v_a_3310_ = v___x_3340_;
goto v___jp_3309_;
}
}
else
{
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_object* v_a_3347_; 
v_a_3347_ = lean_ctor_get(v___x_3338_, 0);
lean_inc(v_a_3347_);
lean_dec_ref_known(v___x_3338_, 1);
v_a_3310_ = v_a_3347_;
goto v___jp_3309_;
}
else
{
lean_object* v_a_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3356_; 
lean_dec_ref_known(v___x_3305_, 1);
lean_del_object(v___x_3307_);
v_a_3348_ = lean_ctor_get(v___x_3338_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3350_ = v___x_3338_;
v_isShared_3351_ = v_isSharedCheck_3356_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_a_3348_);
lean_dec(v___x_3338_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3356_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3352_; lean_object* v___x_3354_; 
v___x_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3352_, 0, v_a_3348_);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3352_);
v___x_3354_ = v___x_3350_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v___x_3352_);
v___x_3354_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
return v___x_3354_;
}
}
}
}
}
else
{
lean_object* v___x_3357_; 
v___x_3357_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3310_ = v___x_3357_;
goto v___jp_3309_;
}
}
}
v___jp_3309_:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; uint8_t v___x_3323_; 
v___x_3311_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3312_ = lean_string_append(v___x_3311_, v_key_3302_);
v___x_3313_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3314_ = lean_string_append(v___x_3312_, v___x_3313_);
v___x_3315_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__1));
v___x_3316_ = lean_string_append(v___x_3314_, v___x_3315_);
v___x_3317_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3318_ = lean_string_append(v___x_3316_, v___x_3317_);
v___x_3319_ = l_Lasm_JS_Data_describe(v___x_3305_);
v___x_3320_ = lean_string_append(v___x_3318_, v___x_3319_);
lean_dec_ref(v___x_3319_);
v___x_3321_ = lean_string_utf8_byte_size(v_a_3310_);
v___x_3322_ = lean_unsigned_to_nat(0u);
v___x_3323_ = lean_nat_dec_eq(v___x_3321_, v___x_3322_);
if (v___x_3323_ == 0)
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3330_; 
v___x_3324_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3325_ = lean_string_append(v___x_3324_, v_a_3310_);
lean_dec_ref(v_a_3310_);
v___x_3326_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3327_ = lean_string_append(v___x_3325_, v___x_3326_);
v___x_3328_ = lean_string_append(v___x_3320_, v___x_3327_);
lean_dec_ref(v___x_3327_);
if (v_isShared_3308_ == 0)
{
lean_ctor_set_tag(v___x_3307_, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3328_);
v___x_3330_ = v___x_3307_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v___x_3328_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
else
{
lean_object* v___x_3333_; 
lean_dec_ref(v_a_3310_);
if (v_isShared_3308_ == 0)
{
lean_ctor_set_tag(v___x_3307_, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3320_);
v___x_3333_ = v___x_3307_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v___x_3320_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
}
else
{
lean_object* v___x_3360_; 
lean_dec(v_d_3301_);
v___x_3360_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__3));
return v___x_3360_;
}
v___jp_3303_:
{
lean_object* v___x_3304_; 
v___x_3304_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__0));
return v___x_3304_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3361_, lean_object* v_key_3362_){
_start:
{
lean_object* v_res_3363_; 
v_res_3363_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(v_d_3361_, v_key_3362_);
lean_dec_ref(v_key_3362_);
return v_res_3363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(size_t v_sz_3365_, size_t v_i_3366_, lean_object* v_bs_3367_){
_start:
{
uint8_t v___x_3368_; 
v___x_3368_ = lean_usize_dec_lt(v_i_3366_, v_sz_3365_);
if (v___x_3368_ == 0)
{
lean_object* v___x_3369_; 
v___x_3369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3369_, 0, v_bs_3367_);
return v___x_3369_;
}
else
{
lean_object* v_v_3370_; lean_object* v_fst_3371_; lean_object* v_snd_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3396_; 
v_v_3370_ = lean_array_uget(v_bs_3367_, v_i_3366_);
v_fst_3371_ = lean_ctor_get(v_v_3370_, 0);
v_snd_3372_ = lean_ctor_get(v_v_3370_, 1);
v_isSharedCheck_3396_ = !lean_is_exclusive(v_v_3370_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3374_ = v_v_3370_;
v_isShared_3375_ = v_isSharedCheck_3396_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_snd_3372_);
lean_inc(v_fst_3371_);
lean_dec(v_v_3370_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3396_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; lean_object* v_bs_x27_3377_; lean_object* v_a_3379_; 
v___x_3376_ = lean_unsigned_to_nat(0u);
v_bs_x27_3377_ = lean_array_uset(v_bs_3367_, v_i_3366_, v___x_3376_);
switch(lean_obj_tag(v_snd_3372_))
{
case 1:
{
goto v___jp_3387_;
}
case 0:
{
goto v___jp_3387_;
}
default: 
{
if (lean_obj_tag(v_snd_3372_) == 4)
{
lean_object* v_s_3389_; lean_object* v___x_3390_; 
v_s_3389_ = lean_ctor_get(v_snd_3372_, 0);
lean_inc_ref(v_s_3389_);
lean_dec_ref_known(v_snd_3372_, 1);
v___x_3390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3390_, 0, v_s_3389_);
v_a_3379_ = v___x_3390_;
goto v___jp_3378_;
}
else
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
lean_dec_ref(v_bs_x27_3377_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
v___x_3391_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___closed__0));
v___x_3392_ = lean_string_append(v___x_3391_, v_fst_3371_);
lean_dec(v_fst_3371_);
v___x_3393_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3394_ = lean_string_append(v___x_3392_, v___x_3393_);
v___x_3395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3394_);
return v___x_3395_;
}
}
}
v___jp_3378_:
{
lean_object* v___x_3381_; 
if (v_isShared_3375_ == 0)
{
lean_ctor_set(v___x_3374_, 1, v_a_3379_);
v___x_3381_ = v___x_3374_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_fst_3371_);
lean_ctor_set(v_reuseFailAlloc_3386_, 1, v_a_3379_);
v___x_3381_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
size_t v___x_3382_; size_t v___x_3383_; lean_object* v___x_3384_; 
v___x_3382_ = ((size_t)1ULL);
v___x_3383_ = lean_usize_add(v_i_3366_, v___x_3382_);
v___x_3384_ = lean_array_uset(v_bs_x27_3377_, v_i_3366_, v___x_3381_);
v_i_3366_ = v___x_3383_;
v_bs_3367_ = v___x_3384_;
goto _start;
}
}
v___jp_3387_:
{
lean_object* v___x_3388_; 
v___x_3388_ = lean_box(0);
v_a_3379_ = v___x_3388_;
goto v___jp_3378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___boxed(lean_object* v_sz_3397_, lean_object* v_i_3398_, lean_object* v_bs_3399_){
_start:
{
size_t v_sz_boxed_3400_; size_t v_i_boxed_3401_; lean_object* v_res_3402_; 
v_sz_boxed_3400_ = lean_unbox_usize(v_sz_3397_);
lean_dec(v_sz_3397_);
v_i_boxed_3401_ = lean_unbox_usize(v_i_3398_);
lean_dec(v_i_3398_);
v_res_3402_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(v_sz_boxed_3400_, v_i_boxed_3401_, v_bs_3399_);
return v_res_3402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(lean_object* v_d_3408_, lean_object* v_key_3409_){
_start:
{
if (lean_obj_tag(v_d_3408_) == 8)
{
lean_object* v___x_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3457_; 
v___x_3412_ = l_Lasm_JS_Data_field(v_d_3408_, v_key_3409_);
v_isSharedCheck_3457_ = !lean_is_exclusive(v_d_3408_);
if (v_isSharedCheck_3457_ == 0)
{
lean_object* v_unused_3458_; 
v_unused_3458_ = lean_ctor_get(v_d_3408_, 0);
lean_dec(v_unused_3458_);
v___x_3414_ = v_d_3408_;
v_isShared_3415_ = v_isSharedCheck_3457_;
goto v_resetjp_3413_;
}
else
{
lean_dec(v_d_3408_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3457_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v_a_3417_; 
switch(lean_obj_tag(v___x_3412_))
{
case 1:
{
lean_del_object(v___x_3414_);
goto v___jp_3410_;
}
case 0:
{
lean_del_object(v___x_3414_);
goto v___jp_3410_;
}
default: 
{
if (lean_obj_tag(v___x_3412_) == 8)
{
lean_object* v_fields_3442_; size_t v_sz_3443_; size_t v___x_3444_; lean_object* v___x_3445_; 
v_fields_3442_ = lean_ctor_get(v___x_3412_, 0);
lean_inc_ref(v_fields_3442_);
v_sz_3443_ = lean_array_size(v_fields_3442_);
v___x_3444_ = ((size_t)0ULL);
v___x_3445_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(v_sz_3443_, v___x_3444_, v_fields_3442_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
v_a_3417_ = v_a_3446_;
goto v___jp_3416_;
}
else
{
lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3455_; 
lean_dec_ref_known(v___x_3412_, 1);
lean_del_object(v___x_3414_);
v_a_3447_ = lean_ctor_get(v___x_3445_, 0);
v_isSharedCheck_3455_ = !lean_is_exclusive(v___x_3445_);
if (v_isSharedCheck_3455_ == 0)
{
v___x_3449_ = v___x_3445_;
v_isShared_3450_ = v_isSharedCheck_3455_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3445_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3455_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3451_; lean_object* v___x_3453_; 
v___x_3451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3451_, 0, v_a_3447_);
if (v_isShared_3450_ == 0)
{
lean_ctor_set(v___x_3449_, 0, v___x_3451_);
v___x_3453_ = v___x_3449_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v___x_3451_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
return v___x_3453_;
}
}
}
}
else
{
lean_object* v___x_3456_; 
v___x_3456_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3417_ = v___x_3456_;
goto v___jp_3416_;
}
}
}
v___jp_3416_:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; uint8_t v___x_3430_; 
v___x_3418_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3419_ = lean_string_append(v___x_3418_, v_key_3409_);
v___x_3420_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3421_ = lean_string_append(v___x_3419_, v___x_3420_);
v___x_3422_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__1));
v___x_3423_ = lean_string_append(v___x_3421_, v___x_3422_);
v___x_3424_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3425_ = lean_string_append(v___x_3423_, v___x_3424_);
v___x_3426_ = l_Lasm_JS_Data_describe(v___x_3412_);
v___x_3427_ = lean_string_append(v___x_3425_, v___x_3426_);
lean_dec_ref(v___x_3426_);
v___x_3428_ = lean_string_utf8_byte_size(v_a_3417_);
v___x_3429_ = lean_unsigned_to_nat(0u);
v___x_3430_ = lean_nat_dec_eq(v___x_3428_, v___x_3429_);
if (v___x_3430_ == 0)
{
lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3437_; 
v___x_3431_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3432_ = lean_string_append(v___x_3431_, v_a_3417_);
lean_dec_ref(v_a_3417_);
v___x_3433_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3434_ = lean_string_append(v___x_3432_, v___x_3433_);
v___x_3435_ = lean_string_append(v___x_3427_, v___x_3434_);
lean_dec_ref(v___x_3434_);
if (v_isShared_3415_ == 0)
{
lean_ctor_set_tag(v___x_3414_, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3435_);
v___x_3437_ = v___x_3414_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v___x_3435_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
else
{
lean_object* v___x_3440_; 
lean_dec_ref(v_a_3417_);
if (v_isShared_3415_ == 0)
{
lean_ctor_set_tag(v___x_3414_, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3427_);
v___x_3440_ = v___x_3414_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v___x_3427_);
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
}
else
{
lean_object* v___x_3459_; 
lean_dec(v_d_3408_);
v___x_3459_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__2));
return v___x_3459_;
}
v___jp_3410_:
{
lean_object* v___x_3411_; 
v___x_3411_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__0));
return v___x_3411_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___boxed(lean_object* v_d_3460_, lean_object* v_key_3461_){
_start:
{
lean_object* v_res_3462_; 
v_res_3462_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(v_d_3460_, v_key_3461_);
lean_dec_ref(v_key_3461_);
return v_res_3462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_3468_, lean_object* v_key_3469_){
_start:
{
if (lean_obj_tag(v_d_3468_) == 8)
{
lean_object* v___x_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3525_; 
v___x_3472_ = l_Lasm_JS_Data_field(v_d_3468_, v_key_3469_);
v_isSharedCheck_3525_ = !lean_is_exclusive(v_d_3468_);
if (v_isSharedCheck_3525_ == 0)
{
lean_object* v_unused_3526_; 
v_unused_3526_ = lean_ctor_get(v_d_3468_, 0);
lean_dec(v_unused_3526_);
v___x_3474_ = v_d_3468_;
v_isShared_3475_ = v_isSharedCheck_3525_;
goto v_resetjp_3473_;
}
else
{
lean_dec(v_d_3468_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3525_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v_a_3477_; 
switch(lean_obj_tag(v___x_3472_))
{
case 1:
{
lean_del_object(v___x_3474_);
goto v___jp_3470_;
}
case 0:
{
lean_del_object(v___x_3474_);
goto v___jp_3470_;
}
default: 
{
lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3502_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0));
lean_inc(v___x_3472_);
v___x_3503_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_3472_, v___x_3502_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref_known(v___x_3503_, 1);
v_a_3477_ = v_a_3504_;
goto v___jp_3476_;
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3524_; 
v_a_3505_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3507_ = v___x_3503_;
v_isShared_3508_ = v_isSharedCheck_3524_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3503_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3524_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1));
lean_inc(v___x_3472_);
v___x_3510_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(v___x_3472_, v___x_3509_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; 
lean_del_object(v___x_3507_);
lean_dec(v_a_3505_);
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3511_);
lean_dec_ref_known(v___x_3510_, 1);
v_a_3477_ = v_a_3511_;
goto v___jp_3476_;
}
else
{
lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3523_; 
lean_del_object(v___x_3474_);
lean_dec(v___x_3472_);
v_a_3512_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3514_ = v___x_3510_;
v_isShared_3515_ = v_isSharedCheck_3523_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___x_3510_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3523_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3516_; lean_object* v___x_3518_; 
v___x_3516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3516_, 0, v_a_3505_);
lean_ctor_set(v___x_3516_, 1, v_a_3512_);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 0, v___x_3516_);
v___x_3518_ = v___x_3507_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v___x_3516_);
v___x_3518_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
lean_object* v___x_3520_; 
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 0, v___x_3518_);
v___x_3520_ = v___x_3514_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v___x_3518_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
return v___x_3520_;
}
}
}
}
}
}
}
}
v___jp_3476_:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; uint8_t v___x_3490_; 
v___x_3478_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3479_ = lean_string_append(v___x_3478_, v_key_3469_);
v___x_3480_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3481_ = lean_string_append(v___x_3479_, v___x_3480_);
v___x_3482_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3483_ = lean_string_append(v___x_3481_, v___x_3482_);
v___x_3484_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3485_ = lean_string_append(v___x_3483_, v___x_3484_);
v___x_3486_ = l_Lasm_JS_Data_describe(v___x_3472_);
v___x_3487_ = lean_string_append(v___x_3485_, v___x_3486_);
lean_dec_ref(v___x_3486_);
v___x_3488_ = lean_string_utf8_byte_size(v_a_3477_);
v___x_3489_ = lean_unsigned_to_nat(0u);
v___x_3490_ = lean_nat_dec_eq(v___x_3488_, v___x_3489_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3497_; 
v___x_3491_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3492_ = lean_string_append(v___x_3491_, v_a_3477_);
lean_dec_ref(v_a_3477_);
v___x_3493_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3494_ = lean_string_append(v___x_3492_, v___x_3493_);
v___x_3495_ = lean_string_append(v___x_3487_, v___x_3494_);
lean_dec_ref(v___x_3494_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set_tag(v___x_3474_, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3495_);
v___x_3497_ = v___x_3474_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3495_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
else
{
lean_object* v___x_3500_; 
lean_dec_ref(v_a_3477_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set_tag(v___x_3474_, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3487_);
v___x_3500_ = v___x_3474_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v___x_3487_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
return v___x_3500_;
}
}
}
}
}
else
{
lean_object* v___x_3527_; 
lean_dec(v_d_3468_);
v___x_3527_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__2));
return v___x_3527_;
}
v___jp_3470_:
{
lean_object* v___x_3471_; 
v___x_3471_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_3471_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_3528_, lean_object* v_key_3529_){
_start:
{
lean_object* v_res_3530_; 
v_res_3530_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3528_, v_key_3529_);
lean_dec_ref(v_key_3529_);
return v_res_3530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(lean_object* v_context_3532_, lean_object* v_d_3533_){
_start:
{
lean_object* v___y_3539_; lean_object* v___y_3540_; lean_object* v___y_3545_; lean_object* v_received_3546_; lean_object* v___y_3565_; lean_object* v_a_3568_; 
switch(lean_obj_tag(v_d_3533_))
{
case 1:
{
goto v___jp_3535_;
}
case 0:
{
goto v___jp_3535_;
}
default: 
{
lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3592_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0));
lean_inc(v_d_3533_);
v___x_3593_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(v_d_3533_, v___x_3592_);
if (lean_obj_tag(v___x_3593_) == 0)
{
lean_object* v_a_3594_; 
v_a_3594_ = lean_ctor_get(v___x_3593_, 0);
lean_inc(v_a_3594_);
lean_dec_ref_known(v___x_3593_, 1);
v_a_3568_ = v_a_3594_;
goto v___jp_3567_;
}
else
{
lean_object* v_a_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v_a_3595_ = lean_ctor_get(v___x_3593_, 0);
lean_inc(v_a_3595_);
lean_dec_ref_known(v___x_3593_, 1);
v___x_3596_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc(v_d_3533_);
v___x_3597_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3533_, v___x_3596_);
if (lean_obj_tag(v___x_3597_) == 0)
{
lean_object* v_a_3598_; 
lean_dec(v_a_3595_);
v_a_3598_ = lean_ctor_get(v___x_3597_, 0);
lean_inc(v_a_3598_);
lean_dec_ref_known(v___x_3597_, 1);
v_a_3568_ = v_a_3598_;
goto v___jp_3567_;
}
else
{
lean_object* v_a_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v_a_3599_ = lean_ctor_get(v___x_3597_, 0);
lean_inc(v_a_3599_);
lean_dec_ref_known(v___x_3597_, 1);
v___x_3600_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc(v_d_3533_);
v___x_3601_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3533_, v___x_3600_);
if (lean_obj_tag(v___x_3601_) == 0)
{
lean_object* v_a_3602_; 
lean_dec(v_a_3599_);
lean_dec(v_a_3595_);
v_a_3602_ = lean_ctor_get(v___x_3601_, 0);
lean_inc(v_a_3602_);
lean_dec_ref_known(v___x_3601_, 1);
v_a_3568_ = v_a_3602_;
goto v___jp_3567_;
}
else
{
lean_object* v_a_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; 
v_a_3603_ = lean_ctor_get(v___x_3601_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3601_, 1);
v___x_3604_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc(v_d_3533_);
v___x_3605_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3533_, v___x_3604_);
if (lean_obj_tag(v___x_3605_) == 0)
{
lean_object* v_a_3606_; 
lean_dec(v_a_3603_);
lean_dec(v_a_3599_);
lean_dec(v_a_3595_);
v_a_3606_ = lean_ctor_get(v___x_3605_, 0);
lean_inc(v_a_3606_);
lean_dec_ref_known(v___x_3605_, 1);
v_a_3568_ = v_a_3606_;
goto v___jp_3567_;
}
else
{
lean_object* v_a_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; 
v_a_3607_ = lean_ctor_get(v___x_3605_, 0);
lean_inc(v_a_3607_);
lean_dec_ref_known(v___x_3605_, 1);
v___x_3608_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc(v_d_3533_);
v___x_3609_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3533_, v___x_3608_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_object* v_a_3610_; 
lean_dec(v_a_3607_);
lean_dec(v_a_3603_);
lean_dec(v_a_3599_);
lean_dec(v_a_3595_);
v_a_3610_ = lean_ctor_get(v___x_3609_, 0);
lean_inc(v_a_3610_);
lean_dec_ref_known(v___x_3609_, 1);
v_a_3568_ = v_a_3610_;
goto v___jp_3567_;
}
else
{
lean_object* v_a_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; 
v_a_3611_ = lean_ctor_get(v___x_3609_, 0);
lean_inc(v_a_3611_);
lean_dec_ref_known(v___x_3609_, 1);
v___x_3612_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc(v_d_3533_);
v___x_3613_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3533_, v___x_3612_);
if (lean_obj_tag(v___x_3613_) == 0)
{
lean_object* v_a_3614_; 
lean_dec(v_a_3611_);
lean_dec(v_a_3607_);
lean_dec(v_a_3603_);
lean_dec(v_a_3599_);
lean_dec(v_a_3595_);
v_a_3614_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_a_3614_);
lean_dec_ref_known(v___x_3613_, 1);
v_a_3568_ = v_a_3614_;
goto v___jp_3567_;
}
else
{
lean_object* v_a_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; 
v_a_3615_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_a_3615_);
lean_dec_ref_known(v___x_3613_, 1);
v___x_3616_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc(v_d_3533_);
v___x_3617_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3533_, v___x_3616_);
if (lean_obj_tag(v___x_3617_) == 0)
{
lean_object* v_a_3618_; 
lean_dec(v_a_3615_);
lean_dec(v_a_3611_);
lean_dec(v_a_3607_);
lean_dec(v_a_3603_);
lean_dec(v_a_3599_);
lean_dec(v_a_3595_);
v_a_3618_ = lean_ctor_get(v___x_3617_, 0);
lean_inc(v_a_3618_);
lean_dec_ref_known(v___x_3617_, 1);
v_a_3568_ = v_a_3618_;
goto v___jp_3567_;
}
else
{
lean_object* v_a_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
v_a_3619_ = lean_ctor_get(v___x_3617_, 0);
lean_inc(v_a_3619_);
lean_dec_ref_known(v___x_3617_, 1);
v___x_3620_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc(v_d_3533_);
v___x_3621_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3533_, v___x_3620_);
if (lean_obj_tag(v___x_3621_) == 0)
{
lean_object* v_a_3622_; 
lean_dec(v_a_3619_);
lean_dec(v_a_3615_);
lean_dec(v_a_3611_);
lean_dec(v_a_3607_);
lean_dec(v_a_3603_);
lean_dec(v_a_3599_);
lean_dec(v_a_3595_);
v_a_3622_ = lean_ctor_get(v___x_3621_, 0);
lean_inc(v_a_3622_);
lean_dec_ref_known(v___x_3621_, 1);
v_a_3568_ = v_a_3622_;
goto v___jp_3567_;
}
else
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3642_; 
v_a_3623_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3625_ = v___x_3621_;
v_isShared_3626_ = v_isSharedCheck_3642_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3621_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3642_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3627_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc(v_d_3533_);
v___x_3628_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3533_, v___x_3627_);
if (lean_obj_tag(v___x_3628_) == 0)
{
lean_object* v_a_3629_; 
lean_del_object(v___x_3625_);
lean_dec(v_a_3623_);
lean_dec(v_a_3619_);
lean_dec(v_a_3615_);
lean_dec(v_a_3611_);
lean_dec(v_a_3607_);
lean_dec(v_a_3603_);
lean_dec(v_a_3599_);
lean_dec(v_a_3595_);
v_a_3629_ = lean_ctor_get(v___x_3628_, 0);
lean_inc(v_a_3629_);
lean_dec_ref_known(v___x_3628_, 1);
v_a_3568_ = v_a_3629_;
goto v___jp_3567_;
}
else
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3641_; 
lean_dec(v_d_3533_);
v_a_3630_ = lean_ctor_get(v___x_3628_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3632_ = v___x_3628_;
v_isShared_3633_ = v_isSharedCheck_3641_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v___x_3628_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3641_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3634_; lean_object* v___x_3636_; 
v___x_3634_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3634_, 0, v_a_3595_);
lean_ctor_set(v___x_3634_, 1, v_a_3599_);
lean_ctor_set(v___x_3634_, 2, v_a_3603_);
lean_ctor_set(v___x_3634_, 3, v_a_3607_);
lean_ctor_set(v___x_3634_, 4, v_a_3611_);
lean_ctor_set(v___x_3634_, 5, v_a_3615_);
lean_ctor_set(v___x_3634_, 6, v_a_3619_);
lean_ctor_set(v___x_3634_, 7, v_a_3623_);
lean_ctor_set(v___x_3634_, 8, v_a_3630_);
if (v_isShared_3633_ == 0)
{
lean_ctor_set(v___x_3632_, 0, v___x_3634_);
v___x_3636_ = v___x_3632_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v___x_3634_);
v___x_3636_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
lean_object* v___x_3638_; 
if (v_isShared_3626_ == 0)
{
lean_ctor_set_tag(v___x_3625_, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3636_);
v___x_3638_ = v___x_3625_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v___x_3636_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
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
v___jp_3535_:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3536_ = lean_box(0);
v___x_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3536_);
return v___x_3537_;
}
v___jp_3538_:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3541_ = lean_string_append(v___y_3539_, v___y_3540_);
lean_dec_ref(v___y_3540_);
v___x_3542_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3541_);
v___x_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3542_);
return v___x_3543_;
}
v___jp_3544_:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; uint8_t v___x_3558_; 
v___x_3547_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_3548_ = lean_string_append(v___x_3547_, v_context_3532_);
v___x_3549_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_3550_ = lean_string_append(v___x_3548_, v___x_3549_);
v___x_3551_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___closed__0));
v___x_3552_ = lean_string_append(v___x_3550_, v___x_3551_);
v___x_3553_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_3554_ = lean_string_append(v___x_3552_, v___x_3553_);
v___x_3555_ = lean_string_append(v___x_3554_, v_received_3546_);
lean_dec_ref(v_received_3546_);
v___x_3556_ = lean_string_utf8_byte_size(v___y_3545_);
v___x_3557_ = lean_unsigned_to_nat(0u);
v___x_3558_ = lean_nat_dec_eq(v___x_3556_, v___x_3557_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; 
v___x_3559_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3560_ = lean_string_append(v___x_3559_, v___y_3545_);
lean_dec_ref(v___y_3545_);
v___x_3561_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3562_ = lean_string_append(v___x_3560_, v___x_3561_);
v___y_3539_ = v___x_3555_;
v___y_3540_ = v___x_3562_;
goto v___jp_3538_;
}
else
{
lean_object* v___x_3563_; 
lean_dec_ref(v___y_3545_);
v___x_3563_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_3539_ = v___x_3555_;
v___y_3540_ = v___x_3563_;
goto v___jp_3538_;
}
}
v___jp_3564_:
{
lean_object* v___x_3566_; 
v___x_3566_ = l_Lasm_JS_Data_describe(v_d_3533_);
v___y_3545_ = v___y_3565_;
v_received_3546_ = v___x_3566_;
goto v___jp_3544_;
}
v___jp_3567_:
{
if (lean_obj_tag(v_d_3533_) == 9)
{
lean_object* v_value_3569_; lean_object* v_description_3570_; lean_object* v___x_3571_; uint8_t v___x_3572_; 
v_value_3569_ = lean_ctor_get(v_d_3533_, 0);
v_description_3570_ = lean_ctor_get(v_d_3533_, 1);
v___x_3571_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3572_ = lean_string_dec_eq(v_description_3570_, v___x_3571_);
if (v___x_3572_ == 0)
{
v___y_3565_ = v_a_3568_;
goto v___jp_3564_;
}
else
{
lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3589_; 
lean_inc(v_value_3569_);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_d_3533_);
if (v_isSharedCheck_3589_ == 0)
{
lean_object* v_unused_3590_; lean_object* v_unused_3591_; 
v_unused_3590_ = lean_ctor_get(v_d_3533_, 1);
lean_dec(v_unused_3590_);
v_unused_3591_ = lean_ctor_get(v_d_3533_, 0);
lean_dec(v_unused_3591_);
v___x_3574_ = v_d_3533_;
v_isShared_3575_ = v_isSharedCheck_3589_;
goto v_resetjp_3573_;
}
else
{
lean_dec(v_d_3533_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3589_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
uint32_t v___x_3576_; uint64_t v___x_3577_; lean_object* v___x_3579_; 
v___x_3576_ = 206;
v___x_3577_ = 0ULL;
lean_inc(v_value_3569_);
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 1, v___x_3571_);
v___x_3579_ = v___x_3574_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_value_3569_);
lean_ctor_set(v_reuseFailAlloc_3588_, 1, v___x_3571_);
v___x_3579_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
uint32_t v___x_3580_; lean_object* v___x_3581_; 
v___x_3580_ = lasm_js_value_handle(v_value_3569_);
lean_dec(v_value_3569_);
v___x_3581_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3576_, v___x_3577_, v___x_3579_, v___x_3580_);
lean_dec_ref(v___x_3579_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; uint8_t v___x_3583_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
lean_inc(v_a_3582_);
lean_dec_ref_known(v___x_3581_, 1);
v___x_3583_ = lean_string_validate_utf8(v_a_3582_);
if (v___x_3583_ == 0)
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
lean_dec(v_a_3582_);
v___x_3584_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_3585_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3584_);
v___y_3545_ = v_a_3568_;
v_received_3546_ = v___x_3585_;
goto v___jp_3544_;
}
else
{
lean_object* v___x_3586_; 
v___x_3586_ = lean_string_from_utf8_unchecked(v_a_3582_);
v___y_3545_ = v_a_3568_;
v_received_3546_ = v___x_3586_;
goto v___jp_3544_;
}
}
else
{
lean_object* v___x_3587_; 
lean_dec_ref_known(v___x_3581_, 1);
v___x_3587_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_3545_ = v_a_3568_;
v_received_3546_ = v___x_3587_;
goto v___jp_3544_;
}
}
}
}
}
else
{
v___y_3565_ = v_a_3568_;
goto v___jp_3564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3643_, lean_object* v_d_3644_, lean_object* v_a_3645_){
_start:
{
lean_object* v_res_3646_; 
v_res_3646_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(v_context_3643_, v_d_3644_);
lean_dec_ref(v_context_3643_);
return v_res_3646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(lean_object* v_b_3647_, lean_object* v_args_3648_, uint8_t v_await_3649_){
_start:
{
uint64_t v___y_3652_; uint64_t v___y_3653_; uint64_t v___x_3696_; uint64_t v___y_3698_; 
v___x_3696_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_3649_ == 0)
{
uint64_t v___x_3703_; 
v___x_3703_ = 0ULL;
v___y_3698_ = v___x_3703_;
goto v___jp_3697_;
}
else
{
uint64_t v___x_3704_; 
v___x_3704_ = 2ULL;
v___y_3698_ = v___x_3704_;
goto v___jp_3697_;
}
v___jp_3651_:
{
uint64_t v_flags_3654_; uint32_t v___x_3655_; lean_object* v___x_3656_; uint32_t v___x_3657_; lean_object* v___x_3658_; 
v_flags_3654_ = lean_uint64_lor(v___y_3652_, v___y_3653_);
v___x_3655_ = 214;
v___x_3656_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3647_, v_args_3648_);
v___x_3657_ = 0;
v___x_3658_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3655_, v_flags_3654_, v___x_3656_, v___x_3657_);
lean_dec(v___x_3656_);
if (lean_obj_tag(v___x_3658_) == 0)
{
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v_a_3659_; lean_object* v___x_3660_; 
v_a_3659_ = lean_ctor_get(v___x_3658_, 0);
lean_inc(v_a_3659_);
lean_dec_ref_known(v___x_3658_, 1);
v___x_3660_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3659_);
lean_dec(v_a_3659_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
lean_inc(v_a_3661_);
lean_dec_ref_known(v___x_3660_, 1);
v___x_3662_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3647_);
v___x_3663_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(v___x_3662_, v_a_3661_);
lean_dec_ref(v___x_3662_);
return v___x_3663_;
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3671_; 
v_a_3664_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3666_ = v___x_3660_;
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3660_);
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
else
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
v_a_3672_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3674_ = v___x_3658_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3658_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
lean_ctor_set_tag(v___x_3674_, 1);
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
}
else
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3695_; 
v_a_3680_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3682_ = v___x_3658_;
v_isShared_3683_ = v_isSharedCheck_3695_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3658_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3695_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3693_; 
v___x_3684_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_3685_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3647_);
v___x_3686_ = lean_string_append(v___x_3684_, v___x_3685_);
lean_dec_ref(v___x_3685_);
v___x_3687_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3688_ = lean_string_append(v___x_3686_, v___x_3687_);
v___x_3689_ = lean_io_error_to_string(v_a_3680_);
v___x_3690_ = lean_string_append(v___x_3688_, v___x_3689_);
lean_dec_ref(v___x_3689_);
v___x_3691_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3690_);
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 0, v___x_3691_);
v___x_3693_ = v___x_3682_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v___x_3691_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
}
v___jp_3697_:
{
uint8_t v_construct_3699_; uint64_t v___x_3700_; 
v_construct_3699_ = lean_ctor_get_uint8(v_b_3647_, sizeof(void*)*4);
v___x_3700_ = lean_uint64_lor(v___x_3696_, v___y_3698_);
if (v_construct_3699_ == 0)
{
uint64_t v___x_3701_; 
v___x_3701_ = 0ULL;
v___y_3652_ = v___x_3700_;
v___y_3653_ = v___x_3701_;
goto v___jp_3651_;
}
else
{
uint64_t v___x_3702_; 
v___x_3702_ = 4ULL;
v___y_3652_ = v___x_3700_;
v___y_3653_ = v___x_3702_;
goto v___jp_3651_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0___boxed(lean_object* v_b_3705_, lean_object* v_args_3706_, lean_object* v_await_3707_, lean_object* v_a_3708_){
_start:
{
uint8_t v_await_boxed_3709_; lean_object* v_res_3710_; 
v_await_boxed_3709_ = lean_unbox(v_await_3707_);
v_res_3710_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v_b_3705_, v_args_3706_, v_await_boxed_3709_);
lean_dec_ref(v_b_3705_);
return v_res_3710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(lean_object* v_v_3719_){
_start:
{
uint8_t v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; 
v___x_3721_ = 0;
v___x_3722_ = lean_unsigned_to_nat(1u);
v___x_3723_ = ((lean_object*)(l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__2));
v___x_3724_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3725_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3725_, 0, v_v_3719_);
lean_ctor_set(v___x_3725_, 1, v___x_3724_);
v___x_3726_ = lean_mk_empty_array_with_capacity(v___x_3722_);
v___x_3727_ = lean_array_push(v___x_3726_, v___x_3725_);
v___x_3728_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v___x_3723_, v___x_3727_, v___x_3721_);
return v___x_3728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___boxed(lean_object* v_v_3729_, lean_object* v_a_3730_){
_start:
{
lean_object* v_res_3731_; 
v_res_3731_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_v_3729_);
return v_res_3731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec(lean_object* v_self_3733_, lean_object* v_input_3734_, lean_object* v_baseURL_3735_){
_start:
{
lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3737_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_exec___closed__0));
v___x_3738_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_3734_);
v___x_3739_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_3735_);
v___x_3740_ = lean_unsigned_to_nat(2u);
v___x_3741_ = lean_mk_empty_array_with_capacity(v___x_3740_);
v___x_3742_ = lean_array_push(v___x_3741_, v___x_3738_);
v___x_3743_ = lean_array_push(v___x_3742_, v___x_3739_);
v___x_3744_ = l_Lasm_JS_Web_Support_args(v___x_3743_);
v___x_3745_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3733_, v___x_3737_, v___x_3744_);
if (lean_obj_tag(v___x_3745_) == 0)
{
lean_object* v_a_3746_; lean_object* v___x_3747_; 
v_a_3746_ = lean_ctor_get(v___x_3745_, 0);
lean_inc(v_a_3746_);
lean_dec_ref_known(v___x_3745_, 1);
v___x_3747_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_a_3746_);
return v___x_3747_;
}
else
{
lean_object* v_a_3748_; lean_object* v___x_3750_; uint8_t v_isShared_3751_; uint8_t v_isSharedCheck_3755_; 
v_a_3748_ = lean_ctor_get(v___x_3745_, 0);
v_isSharedCheck_3755_ = !lean_is_exclusive(v___x_3745_);
if (v_isSharedCheck_3755_ == 0)
{
v___x_3750_ = v___x_3745_;
v_isShared_3751_ = v_isSharedCheck_3755_;
goto v_resetjp_3749_;
}
else
{
lean_inc(v_a_3748_);
lean_dec(v___x_3745_);
v___x_3750_ = lean_box(0);
v_isShared_3751_ = v_isSharedCheck_3755_;
goto v_resetjp_3749_;
}
v_resetjp_3749_:
{
lean_object* v___x_3753_; 
if (v_isShared_3751_ == 0)
{
v___x_3753_ = v___x_3750_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v_a_3748_);
v___x_3753_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
return v___x_3753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec___boxed(lean_object* v_self_3756_, lean_object* v_input_3757_, lean_object* v_baseURL_3758_, lean_object* v_a_3759_){
_start:
{
lean_object* v_res_3760_; 
v_res_3760_ = l_Lasm_JS_Web_URLPattern_exec(v_self_3756_, v_input_3757_, v_baseURL_3758_);
return v_res_3760_;
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
