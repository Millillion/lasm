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
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "property "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Option (Lasm.JS.Web.Record (Option (String)))"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Option (Lasm.JS.Web.URLPatternComponentResult)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Option (Array (Lasm.JS.Web.URLPatternInput))"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "an element is not Lasm.JS.Web.URLPatternInput"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Option (Lasm.JS.Web.URLPatternResult)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx(lean_object* v_x_81_){
_start:
{
switch(lean_obj_tag(v_x_81_))
{
case 0:
{
lean_object* v___x_82_; 
v___x_82_ = lean_unsigned_to_nat(0u);
return v___x_82_;
}
case 1:
{
lean_object* v___x_83_; 
v___x_83_ = lean_unsigned_to_nat(1u);
return v___x_83_;
}
default: 
{
lean_object* v___x_84_; 
v___x_84_ = lean_unsigned_to_nat(2u);
return v___x_84_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx___boxed(lean_object* v_x_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorIdx(v_x_85_);
lean_dec_ref(v_x_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(lean_object* v_t_87_, lean_object* v_k_88_){
_start:
{
lean_object* v_value_89_; lean_object* v___x_90_; 
v_value_89_ = lean_ctor_get(v_t_87_, 0);
lean_inc_ref(v_value_89_);
lean_dec_ref(v_t_87_);
v___x_90_ = lean_apply_1(v_k_88_, v_value_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim(lean_object* v_motive_91_, lean_object* v_ctorIdx_92_, lean_object* v_t_93_, lean_object* v_h_94_, lean_object* v_k_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_93_, v_k_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___boxed(lean_object* v_motive_97_, lean_object* v_ctorIdx_98_, lean_object* v_t_99_, lean_object* v_h_100_, lean_object* v_k_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim(v_motive_97_, v_ctorIdx_98_, v_t_99_, v_h_100_, v_k_101_);
lean_dec(v_ctorIdx_98_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_sequence_elim___redArg(lean_object* v_t_103_, lean_object* v_sequence_104_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_103_, v_sequence_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_sequence_elim(lean_object* v_motive_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_sequence_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_107_, v_sequence_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_record_elim___redArg(lean_object* v_t_111_, lean_object* v_record_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_111_, v_record_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_record_elim(lean_object* v_motive_114_, lean_object* v_t_115_, lean_object* v_h_116_, lean_object* v_record_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_115_, v_record_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_usvString_elim___redArg(lean_object* v_t_119_, lean_object* v_usvString_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_119_, v_usvString_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_usvString_elim(lean_object* v_motive_122_, lean_object* v_t_123_, lean_object* v_h_124_, lean_object* v_usvString_125_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lasm_JS_Web_SequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString_ctorElim___redArg(v_t_123_, v_usvString_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__0(lean_object* v_x_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_128_, 0, v_x_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1(lean_object* v___f_148_, lean_object* v_x_149_){
_start:
{
lean_object* v___x_150_; size_t v_sz_151_; size_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_150_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9));
v_sz_151_ = lean_array_size(v_x_149_);
v___x_152_ = ((size_t)0ULL);
v___x_153_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_150_, v___f_148_, v_sz_151_, v___x_152_, v_x_149_);
v___x_154_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__2(lean_object* v_x_155_){
_start:
{
lean_object* v_fst_156_; lean_object* v_snd_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_165_; 
v_fst_156_ = lean_ctor_get(v_x_155_, 0);
v_snd_157_ = lean_ctor_get(v_x_155_, 1);
v_isSharedCheck_165_ = !lean_is_exclusive(v_x_155_);
if (v_isSharedCheck_165_ == 0)
{
v___x_159_ = v_x_155_;
v_isShared_160_ = v_isSharedCheck_165_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_snd_157_);
lean_inc(v_fst_156_);
lean_dec(v_x_155_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_165_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_161_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_161_, 0, v_snd_157_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v___x_161_);
v___x_163_ = v___x_159_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_fst_156_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v___x_161_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__3(lean_object* v___f_166_, lean_object* v___f_167_, lean_object* v_x_168_){
_start:
{
switch(lean_obj_tag(v_x_168_))
{
case 0:
{
lean_object* v_value_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_180_; 
lean_dec_ref(v___f_167_);
v_value_169_ = lean_ctor_get(v_x_168_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v_x_168_);
if (v_isSharedCheck_180_ == 0)
{
v___x_171_ = v_x_168_;
v_isShared_172_ = v_isSharedCheck_180_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_value_169_);
lean_dec(v_x_168_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_180_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; size_t v_sz_174_; size_t v___x_175_; lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_173_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9));
v_sz_174_ = lean_array_size(v_value_169_);
v___x_175_ = ((size_t)0ULL);
v___x_176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_173_, v___f_166_, v_sz_174_, v___x_175_, v_value_169_);
if (v_isShared_172_ == 0)
{
lean_ctor_set_tag(v___x_171_, 7);
lean_ctor_set(v___x_171_, 0, v___x_176_);
v___x_178_ = v___x_171_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_176_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
case 1:
{
lean_object* v_value_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_192_; 
lean_dec_ref(v___f_166_);
v_value_181_ = lean_ctor_get(v_x_168_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v_x_168_);
if (v_isSharedCheck_192_ == 0)
{
v___x_183_ = v_x_168_;
v_isShared_184_ = v_isSharedCheck_192_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_value_181_);
lean_dec(v_x_168_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_192_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; size_t v_sz_186_; size_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_190_; 
v___x_185_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSequenceOfSequenceOfUSVStringOrRecordOfUSVStringOrUSVString___lam__1___closed__9));
v_sz_186_ = lean_array_size(v_value_181_);
v___x_187_ = ((size_t)0ULL);
v___x_188_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_185_, v___f_167_, v_sz_186_, v___x_187_, v_value_181_);
if (v_isShared_184_ == 0)
{
lean_ctor_set_tag(v___x_183_, 8);
lean_ctor_set(v___x_183_, 0, v___x_188_);
v___x_190_ = v___x_183_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_188_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
default: 
{
lean_object* v_value_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
lean_dec_ref(v___f_167_);
lean_dec_ref(v___f_166_);
v_value_193_ = lean_ctor_get(v_x_168_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v_x_168_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v_x_168_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_value_193_);
lean_dec(v_x_168_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
lean_ctor_set_tag(v___x_195_, 4);
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_value_193_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternInit___lam__0(lean_object* v___f_218_, lean_object* v_d_219_){
_start:
{
lean_object* v_protocol_220_; lean_object* v_username_221_; lean_object* v_password_222_; lean_object* v_hostname_223_; lean_object* v_port_224_; lean_object* v_pathname_225_; lean_object* v_search_226_; lean_object* v_hash_227_; lean_object* v_baseURL_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_protocol_220_ = lean_ctor_get(v_d_219_, 0);
lean_inc(v_protocol_220_);
v_username_221_ = lean_ctor_get(v_d_219_, 1);
lean_inc(v_username_221_);
v_password_222_ = lean_ctor_get(v_d_219_, 2);
lean_inc(v_password_222_);
v_hostname_223_ = lean_ctor_get(v_d_219_, 3);
lean_inc(v_hostname_223_);
v_port_224_ = lean_ctor_get(v_d_219_, 4);
lean_inc(v_port_224_);
v_pathname_225_ = lean_ctor_get(v_d_219_, 5);
lean_inc(v_pathname_225_);
v_search_226_ = lean_ctor_get(v_d_219_, 6);
lean_inc(v_search_226_);
v_hash_227_ = lean_ctor_get(v_d_219_, 7);
lean_inc(v_hash_227_);
v_baseURL_228_ = lean_ctor_get(v_d_219_, 8);
lean_inc(v_baseURL_228_);
lean_dec_ref(v_d_219_);
v___x_229_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref_n(v___f_218_, 8);
v___x_230_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_218_, v_protocol_220_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_233_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_218_, v_username_221_);
v___x_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_236_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_218_, v_password_222_);
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_239_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_218_, v_hostname_223_);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_242_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_218_, v_port_224_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_245_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_218_, v_pathname_225_);
v___x_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_248_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_218_, v_search_226_);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_247_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_251_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_218_, v_hash_227_);
v___x_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_254_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_218_, v_baseURL_228_);
v___x_255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = lean_unsigned_to_nat(9u);
v___x_257_ = lean_mk_empty_array_with_capacity(v___x_256_);
v___x_258_ = lean_array_push(v___x_257_, v___x_231_);
v___x_259_ = lean_array_push(v___x_258_, v___x_234_);
v___x_260_ = lean_array_push(v___x_259_, v___x_237_);
v___x_261_ = lean_array_push(v___x_260_, v___x_240_);
v___x_262_ = lean_array_push(v___x_261_, v___x_243_);
v___x_263_ = lean_array_push(v___x_262_, v___x_246_);
v___x_264_ = lean_array_push(v___x_263_, v___x_249_);
v___x_265_ = lean_array_push(v___x_264_, v___x_252_);
v___x_266_ = lean_array_push(v___x_265_, v___x_255_);
v___x_267_ = l_Lasm_JS_Web_Support_fields(v___x_266_);
lean_dec_ref(v___x_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0(lean_object* v___x_272_, lean_object* v_d_273_){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_274_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v___x_272_);
v___x_275_ = l_Lasm_JS_readField___redArg(v___x_272_, v_d_273_, v___x_274_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
lean_dec_ref(v___x_272_);
v_a_276_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_275_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
else
{
lean_object* v_a_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_a_284_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_284_);
lean_dec_ref_known(v___x_275_, 1);
v___x_285_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v___x_272_);
v___x_286_ = l_Lasm_JS_readField___redArg(v___x_272_, v_d_273_, v___x_285_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec(v_a_284_);
lean_dec_ref(v___x_272_);
v_a_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
else
{
lean_object* v_a_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_a_295_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_295_);
lean_dec_ref_known(v___x_286_, 1);
v___x_296_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v___x_272_);
v___x_297_ = l_Lasm_JS_readField___redArg(v___x_272_, v_d_273_, v___x_296_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
lean_dec(v_a_295_);
lean_dec(v_a_284_);
lean_dec_ref(v___x_272_);
v_a_298_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_297_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_298_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
else
{
lean_object* v_a_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v_a_306_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_306_);
lean_dec_ref_known(v___x_297_, 1);
v___x_307_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v___x_272_);
v___x_308_ = l_Lasm_JS_readField___redArg(v___x_272_, v_d_273_, v___x_307_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec(v_a_306_);
lean_dec(v_a_295_);
lean_dec(v_a_284_);
lean_dec_ref(v___x_272_);
v_a_309_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_308_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_a_317_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_317_);
lean_dec_ref_known(v___x_308_, 1);
v___x_318_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v___x_272_);
v___x_319_ = l_Lasm_JS_readField___redArg(v___x_272_, v_d_273_, v___x_318_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec(v_a_317_);
lean_dec(v_a_306_);
lean_dec(v_a_295_);
lean_dec(v_a_284_);
lean_dec_ref(v___x_272_);
v_a_320_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_a_328_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_328_);
lean_dec_ref_known(v___x_319_, 1);
v___x_329_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v___x_272_);
v___x_330_ = l_Lasm_JS_readField___redArg(v___x_272_, v_d_273_, v___x_329_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec(v_a_328_);
lean_dec(v_a_317_);
lean_dec(v_a_306_);
lean_dec(v_a_295_);
lean_dec(v_a_284_);
lean_dec_ref(v___x_272_);
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_a_339_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_339_);
lean_dec_ref_known(v___x_330_, 1);
v___x_340_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v___x_272_);
v___x_341_ = l_Lasm_JS_readField___redArg(v___x_272_, v_d_273_, v___x_340_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_dec(v_a_339_);
lean_dec(v_a_328_);
lean_dec(v_a_317_);
lean_dec(v_a_306_);
lean_dec(v_a_295_);
lean_dec(v_a_284_);
lean_dec_ref(v___x_272_);
v_a_342_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_341_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_341_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_a_350_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_a_350_);
lean_dec_ref_known(v___x_341_, 1);
v___x_351_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc_ref(v___x_272_);
v___x_352_ = l_Lasm_JS_readField___redArg(v___x_272_, v_d_273_, v___x_351_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_dec(v_a_350_);
lean_dec(v_a_339_);
lean_dec(v_a_328_);
lean_dec(v_a_317_);
lean_dec(v_a_306_);
lean_dec(v_a_295_);
lean_dec(v_a_284_);
lean_dec_ref(v___x_272_);
v_a_353_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_352_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_352_);
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
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v_a_361_ = lean_ctor_get(v___x_352_, 0);
lean_inc(v_a_361_);
lean_dec_ref_known(v___x_352_, 1);
v___x_362_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_363_ = l_Lasm_JS_readField___redArg(v___x_272_, v_d_273_, v___x_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec(v_a_361_);
lean_dec(v_a_350_);
lean_dec(v_a_339_);
lean_dec(v_a_328_);
lean_dec(v_a_317_);
lean_dec(v_a_306_);
lean_dec(v_a_295_);
lean_dec(v_a_284_);
v_a_364_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_363_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_363_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_380_; 
v_a_372_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_380_ == 0)
{
v___x_374_ = v___x_363_;
v_isShared_375_ = v_isSharedCheck_380_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_363_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_380_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_376_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_376_, 0, v_a_284_);
lean_ctor_set(v___x_376_, 1, v_a_295_);
lean_ctor_set(v___x_376_, 2, v_a_306_);
lean_ctor_set(v___x_376_, 3, v_a_317_);
lean_ctor_set(v___x_376_, 4, v_a_328_);
lean_ctor_set(v___x_376_, 5, v_a_339_);
lean_ctor_set(v___x_376_, 6, v_a_350_);
lean_ctor_set(v___x_376_, 7, v_a_361_);
lean_ctor_set(v___x_376_, 8, v_a_372_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_376_);
v___x_378_ = v___x_374_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0___boxed(lean_object* v___x_381_, lean_object* v_d_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0(v___x_381_, v_d_382_);
lean_dec(v_d_382_);
return v_res_383_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = l_Lasm_JS_instFromJSString;
v___x_385_ = l_Lasm_JS_instFromJSOption___redArg(v___x_384_);
return v___x_385_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1(void){
_start:
{
lean_object* v___x_386_; lean_object* v___f_387_; 
v___x_386_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___f_387_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSURLPatternInit___lam__0___boxed), 2, 1);
lean_closure_set(v___f_387_, 0, v___x_386_);
return v___f_387_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3(void){
_start:
{
uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___f_391_; lean_object* v___x_392_; 
v___x_389_ = 0;
v___x_390_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternInit___closed__2));
v___f_391_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__1);
v___x_392_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_392_, 0, v___f_391_);
lean_ctor_set(v___x_392_, 1, v___x_390_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*2, v___x_389_);
return v___x_392_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternInit(void){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__3);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx(lean_object* v_x_394_){
_start:
{
if (lean_obj_tag(v_x_394_) == 0)
{
lean_object* v___x_395_; 
v___x_395_ = lean_unsigned_to_nat(0u);
return v___x_395_;
}
else
{
lean_object* v___x_396_; 
v___x_396_ = lean_unsigned_to_nat(1u);
return v___x_396_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorIdx___boxed(lean_object* v_x_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lasm_JS_Web_URLPatternInput_ctorIdx(v_x_397_);
lean_dec_ref(v_x_397_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(lean_object* v_t_399_, lean_object* v_k_400_){
_start:
{
lean_object* v_value_401_; lean_object* v___x_402_; 
v_value_401_ = lean_ctor_get(v_t_399_, 0);
lean_inc_ref(v_value_401_);
lean_dec_ref(v_t_399_);
v___x_402_ = lean_apply_1(v_k_400_, v_value_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim(lean_object* v_motive_403_, lean_object* v_ctorIdx_404_, lean_object* v_t_405_, lean_object* v_h_406_, lean_object* v_k_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_405_, v_k_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_ctorElim___boxed(lean_object* v_motive_409_, lean_object* v_ctorIdx_410_, lean_object* v_t_411_, lean_object* v_h_412_, lean_object* v_k_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lasm_JS_Web_URLPatternInput_ctorElim(v_motive_409_, v_ctorIdx_410_, v_t_411_, v_h_412_, v_k_413_);
lean_dec(v_ctorIdx_410_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_usvString_elim___redArg(lean_object* v_t_415_, lean_object* v_usvString_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_415_, v_usvString_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_usvString_elim(lean_object* v_motive_418_, lean_object* v_t_419_, lean_object* v_h_420_, lean_object* v_usvString_421_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_419_, v_usvString_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_urlPatternInit_elim___redArg(lean_object* v_t_423_, lean_object* v_urlPatternInit_424_){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_423_, v_urlPatternInit_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPatternInput_urlPatternInit_elim(lean_object* v_motive_426_, lean_object* v_t_427_, lean_object* v_h_428_, lean_object* v_urlPatternInit_429_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lasm_JS_Web_URLPatternInput_ctorElim___redArg(v_t_427_, v_urlPatternInit_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternInput___lam__0(lean_object* v_x_431_){
_start:
{
if (lean_obj_tag(v_x_431_) == 0)
{
lean_object* v_value_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_value_432_ = lean_ctor_get(v_x_431_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v_x_431_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v_x_431_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_value_432_);
lean_dec(v_x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set_tag(v___x_434_, 4);
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_value_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
else
{
lean_object* v_value_440_; lean_object* v_protocol_441_; lean_object* v_username_442_; lean_object* v_password_443_; lean_object* v_hostname_444_; lean_object* v_port_445_; lean_object* v_pathname_446_; lean_object* v_search_447_; lean_object* v_hash_448_; lean_object* v_baseURL_449_; lean_object* v___f_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v_value_440_ = lean_ctor_get(v_x_431_, 0);
lean_inc_ref(v_value_440_);
lean_dec_ref_known(v_x_431_, 1);
v_protocol_441_ = lean_ctor_get(v_value_440_, 0);
lean_inc(v_protocol_441_);
v_username_442_ = lean_ctor_get(v_value_440_, 1);
lean_inc(v_username_442_);
v_password_443_ = lean_ctor_get(v_value_440_, 2);
lean_inc(v_password_443_);
v_hostname_444_ = lean_ctor_get(v_value_440_, 3);
lean_inc(v_hostname_444_);
v_port_445_ = lean_ctor_get(v_value_440_, 4);
lean_inc(v_port_445_);
v_pathname_446_ = lean_ctor_get(v_value_440_, 5);
lean_inc(v_pathname_446_);
v_search_447_ = lean_ctor_get(v_value_440_, 6);
lean_inc(v_search_447_);
v_hash_448_ = lean_ctor_get(v_value_440_, 7);
lean_inc(v_hash_448_);
v_baseURL_449_ = lean_ctor_get(v_value_440_, 8);
lean_inc(v_baseURL_449_);
lean_dec_ref(v_value_440_);
v___f_450_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___closed__0));
v___x_451_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_452_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_450_, v_protocol_441_);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_451_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_455_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_450_, v_username_442_);
v___x_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_456_, 0, v___x_454_);
lean_ctor_set(v___x_456_, 1, v___x_455_);
v___x_457_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_458_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_450_, v_password_443_);
v___x_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_457_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
v___x_460_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_461_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_450_, v_hostname_444_);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_460_);
lean_ctor_set(v___x_462_, 1, v___x_461_);
v___x_463_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_464_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_450_, v_port_445_);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
v___x_466_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_467_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_450_, v_pathname_446_);
v___x_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_466_);
lean_ctor_set(v___x_468_, 1, v___x_467_);
v___x_469_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_470_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_450_, v_search_447_);
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_473_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_450_, v_hash_448_);
v___x_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v___x_475_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_476_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_450_, v_baseURL_449_);
v___x_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = lean_unsigned_to_nat(9u);
v___x_479_ = lean_mk_empty_array_with_capacity(v___x_478_);
v___x_480_ = lean_array_push(v___x_479_, v___x_453_);
v___x_481_ = lean_array_push(v___x_480_, v___x_456_);
v___x_482_ = lean_array_push(v___x_481_, v___x_459_);
v___x_483_ = lean_array_push(v___x_482_, v___x_462_);
v___x_484_ = lean_array_push(v___x_483_, v___x_465_);
v___x_485_ = lean_array_push(v___x_484_, v___x_468_);
v___x_486_ = lean_array_push(v___x_485_, v___x_471_);
v___x_487_ = lean_array_push(v___x_486_, v___x_474_);
v___x_488_ = lean_array_push(v___x_487_, v___x_477_);
v___x_489_ = l_Lasm_JS_Web_Support_fields(v___x_488_);
lean_dec_ref(v___x_488_);
return v___x_489_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0(lean_object* v_x_494_){
_start:
{
switch(lean_obj_tag(v_x_494_))
{
case 4:
{
lean_object* v_s_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_503_; 
v_s_495_ = lean_ctor_get(v_x_494_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v_x_494_);
if (v_isSharedCheck_503_ == 0)
{
v___x_497_ = v_x_494_;
v_isShared_498_ = v_isSharedCheck_503_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_s_495_);
lean_dec(v_x_494_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_503_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
lean_ctor_set_tag(v___x_497_, 0);
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_s_495_);
v___x_500_ = v_reuseFailAlloc_502_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
lean_object* v___x_501_; 
v___x_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
return v___x_501_;
}
}
}
case 8:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___x_505_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_506_ = l_Lasm_JS_readField___redArg(v___x_504_, v_x_494_, v___x_505_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_514_; 
lean_dec_ref_known(v_x_494_, 1);
v_a_507_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_514_ == 0)
{
v___x_509_ = v___x_506_;
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_506_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_a_507_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
else
{
lean_object* v_a_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v_a_515_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_515_);
lean_dec_ref_known(v___x_506_, 1);
v___x_516_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_517_ = l_Lasm_JS_readField___redArg(v___x_504_, v_x_494_, v___x_516_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_dec(v_a_515_);
lean_dec_ref_known(v_x_494_, 1);
v_a_518_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_517_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_517_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_a_526_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_a_526_);
lean_dec_ref_known(v___x_517_, 1);
v___x_527_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_528_ = l_Lasm_JS_readField___redArg(v___x_504_, v_x_494_, v___x_527_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec(v_a_526_);
lean_dec(v_a_515_);
lean_dec_ref_known(v_x_494_, 1);
v_a_529_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_528_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_528_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v_a_537_ = lean_ctor_get(v___x_528_, 0);
lean_inc(v_a_537_);
lean_dec_ref_known(v___x_528_, 1);
v___x_538_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_539_ = l_Lasm_JS_readField___redArg(v___x_504_, v_x_494_, v___x_538_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
lean_dec(v_a_537_);
lean_dec(v_a_526_);
lean_dec(v_a_515_);
lean_dec_ref_known(v_x_494_, 1);
v_a_540_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_539_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v_a_548_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_a_548_);
lean_dec_ref_known(v___x_539_, 1);
v___x_549_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_550_ = l_Lasm_JS_readField___redArg(v___x_504_, v_x_494_, v___x_549_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
lean_dec(v_a_548_);
lean_dec(v_a_537_);
lean_dec(v_a_526_);
lean_dec(v_a_515_);
lean_dec_ref_known(v_x_494_, 1);
v_a_551_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_550_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_550_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_a_559_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_a_559_);
lean_dec_ref_known(v___x_550_, 1);
v___x_560_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_561_ = l_Lasm_JS_readField___redArg(v___x_504_, v_x_494_, v___x_560_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec(v_a_559_);
lean_dec(v_a_548_);
lean_dec(v_a_537_);
lean_dec(v_a_526_);
lean_dec(v_a_515_);
lean_dec_ref_known(v_x_494_, 1);
v_a_562_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_561_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_561_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_a_570_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_a_570_);
lean_dec_ref_known(v___x_561_, 1);
v___x_571_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_572_ = l_Lasm_JS_readField___redArg(v___x_504_, v_x_494_, v___x_571_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_dec(v_a_570_);
lean_dec(v_a_559_);
lean_dec(v_a_548_);
lean_dec(v_a_537_);
lean_dec(v_a_526_);
lean_dec(v_a_515_);
lean_dec_ref_known(v_x_494_, 1);
v_a_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
else
{
lean_object* v_a_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_a_581_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_581_);
lean_dec_ref_known(v___x_572_, 1);
v___x_582_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_583_ = l_Lasm_JS_readField___redArg(v___x_504_, v_x_494_, v___x_582_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_dec(v_a_581_);
lean_dec(v_a_570_);
lean_dec(v_a_559_);
lean_dec(v_a_548_);
lean_dec(v_a_537_);
lean_dec(v_a_526_);
lean_dec(v_a_515_);
lean_dec_ref_known(v_x_494_, 1);
v_a_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
else
{
lean_object* v_a_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_618_; 
v_a_592_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v___x_583_, 1);
v___x_593_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_594_ = l_Lasm_JS_readField___redArg(v___x_504_, v_x_494_, v___x_593_);
v_isSharedCheck_618_ = !lean_is_exclusive(v_x_494_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; 
v_unused_619_ = lean_ctor_get(v_x_494_, 0);
lean_dec(v_unused_619_);
v___x_596_ = v_x_494_;
v_isShared_597_ = v_isSharedCheck_618_;
goto v_resetjp_595_;
}
else
{
lean_dec(v_x_494_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_618_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
lean_del_object(v___x_596_);
lean_dec(v_a_592_);
lean_dec(v_a_581_);
lean_dec(v_a_570_);
lean_dec(v_a_559_);
lean_dec(v_a_548_);
lean_dec(v_a_537_);
lean_dec(v_a_526_);
lean_dec(v_a_515_);
v_a_598_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_594_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_594_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_617_; 
v_a_606_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_617_ == 0)
{
v___x_608_ = v___x_594_;
v_isShared_609_ = v_isSharedCheck_617_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_594_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_617_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v___x_612_; 
v___x_610_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_610_, 0, v_a_515_);
lean_ctor_set(v___x_610_, 1, v_a_526_);
lean_ctor_set(v___x_610_, 2, v_a_537_);
lean_ctor_set(v___x_610_, 3, v_a_548_);
lean_ctor_set(v___x_610_, 4, v_a_559_);
lean_ctor_set(v___x_610_, 5, v_a_570_);
lean_ctor_set(v___x_610_, 6, v_a_581_);
lean_ctor_set(v___x_610_, 7, v_a_592_);
lean_ctor_set(v___x_610_, 8, v_a_606_);
if (v_isShared_597_ == 0)
{
lean_ctor_set_tag(v___x_596_, 1);
lean_ctor_set(v___x_596_, 0, v___x_610_);
v___x_612_ = v___x_596_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_610_);
v___x_612_ = v_reuseFailAlloc_616_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_614_; 
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v___x_612_);
v___x_614_ = v___x_608_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_612_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
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
lean_object* v___x_620_; 
lean_dec(v_x_494_);
v___x_620_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternInput___lam__0___closed__0));
return v___x_620_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0(lean_object* v___f_629_, lean_object* v_d_630_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_631_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0));
v___x_632_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_629_, v_d_630_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_631_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
v___x_634_ = lean_unsigned_to_nat(1u);
v___x_635_ = lean_mk_empty_array_with_capacity(v___x_634_);
v___x_636_ = lean_array_push(v___x_635_, v___x_633_);
v___x_637_ = l_Lasm_JS_Web_Support_fields(v___x_636_);
lean_dec_ref(v___x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0(lean_object* v___x_644_, lean_object* v___x_645_, lean_object* v_d_646_){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0));
v___x_648_ = l_Lasm_JS_readField___redArg(v___x_644_, v_d_646_, v___x_647_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_656_; 
lean_dec_ref(v___x_645_);
v_a_649_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_656_ == 0)
{
v___x_651_ = v___x_648_;
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v___x_648_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_652_ == 0)
{
v___x_654_ = v___x_651_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_649_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
else
{
lean_object* v_a_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v_a_657_ = lean_ctor_get(v___x_648_, 0);
lean_inc(v_a_657_);
lean_dec_ref_known(v___x_648_, 1);
v___x_658_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1));
v___x_659_ = l_Lasm_JS_readField___redArg(v___x_645_, v_d_646_, v___x_658_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
lean_dec(v_a_657_);
v_a_660_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_659_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_659_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
else
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_676_; 
v_a_668_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_676_ == 0)
{
v___x_670_ = v___x_659_;
v_isShared_671_ = v_isSharedCheck_676_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_659_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_676_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_672_; lean_object* v___x_674_; 
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v_a_657_);
lean_ctor_set(v___x_672_, 1, v_a_668_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 0, v___x_672_);
v___x_674_ = v___x_670_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___boxed(lean_object* v___x_677_, lean_object* v___x_678_, lean_object* v_d_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0(v___x_677_, v___x_678_, v_d_679_);
lean_dec(v_d_679_);
return v_res_680_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___x_682_ = l_Lasm_JS_Web_instFromJSRecord___redArg(v___x_681_);
return v___x_682_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__0);
v___x_684_ = l_Lasm_JS_instFromJSOption___redArg(v___x_683_);
return v___x_684_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___f_687_; 
v___x_685_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__1);
v___x_686_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternInit___closed__0);
v___f_687_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_687_, 0, v___x_686_);
lean_closure_set(v___f_687_, 1, v___x_685_);
return v___f_687_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4(void){
_start:
{
uint8_t v___x_689_; lean_object* v___x_690_; lean_object* v___f_691_; lean_object* v___x_692_; 
v___x_689_ = 0;
v___x_690_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__3));
v___f_691_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__2);
v___x_692_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_692_, 0, v___f_691_);
lean_ctor_set(v___x_692_, 1, v___x_690_);
lean_ctor_set_uint8(v___x_692_, sizeof(void*)*2, v___x_689_);
return v___x_692_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult(void){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4, &l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4_once, _init_l_Lasm_JS_Web_instFromJSURLPatternComponentResult___closed__4);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0(lean_object* v___x_695_, lean_object* v___x_696_, lean_object* v_d_697_){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0));
v___x_699_ = l_Lasm_JS_readField___redArg(v___x_695_, v_d_697_, v___x_698_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
lean_dec_ref(v___x_696_);
v_a_700_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_699_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_699_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v_a_708_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_699_, 1);
v___x_709_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v___x_696_);
v___x_710_ = l_Lasm_JS_readField___redArg(v___x_696_, v_d_697_, v___x_709_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
lean_dec(v_a_708_);
lean_dec_ref(v___x_696_);
v_a_711_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_710_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_710_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
else
{
lean_object* v_a_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v_a_719_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_719_);
lean_dec_ref_known(v___x_710_, 1);
v___x_720_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v___x_696_);
v___x_721_ = l_Lasm_JS_readField___redArg(v___x_696_, v_d_697_, v___x_720_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec(v_a_719_);
lean_dec(v_a_708_);
lean_dec_ref(v___x_696_);
v_a_722_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_721_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_721_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v_a_730_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_730_);
lean_dec_ref_known(v___x_721_, 1);
v___x_731_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v___x_696_);
v___x_732_ = l_Lasm_JS_readField___redArg(v___x_696_, v_d_697_, v___x_731_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec(v_a_730_);
lean_dec(v_a_719_);
lean_dec(v_a_708_);
lean_dec_ref(v___x_696_);
v_a_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
else
{
lean_object* v_a_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v_a_741_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_732_, 1);
v___x_742_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v___x_696_);
v___x_743_ = l_Lasm_JS_readField___redArg(v___x_696_, v_d_697_, v___x_742_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
lean_dec(v_a_741_);
lean_dec(v_a_730_);
lean_dec(v_a_719_);
lean_dec(v_a_708_);
lean_dec_ref(v___x_696_);
v_a_744_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_743_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_743_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
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
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
else
{
lean_object* v_a_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_a_752_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_752_);
lean_dec_ref_known(v___x_743_, 1);
v___x_753_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v___x_696_);
v___x_754_ = l_Lasm_JS_readField___redArg(v___x_696_, v_d_697_, v___x_753_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec(v_a_752_);
lean_dec(v_a_741_);
lean_dec(v_a_730_);
lean_dec(v_a_719_);
lean_dec(v_a_708_);
lean_dec_ref(v___x_696_);
v_a_755_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_754_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_754_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v_a_763_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_a_763_);
lean_dec_ref_known(v___x_754_, 1);
v___x_764_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v___x_696_);
v___x_765_ = l_Lasm_JS_readField___redArg(v___x_696_, v_d_697_, v___x_764_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
lean_dec(v_a_763_);
lean_dec(v_a_752_);
lean_dec(v_a_741_);
lean_dec(v_a_730_);
lean_dec(v_a_719_);
lean_dec(v_a_708_);
lean_dec_ref(v___x_696_);
v_a_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_765_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
else
{
lean_object* v_a_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v_a_774_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_774_);
lean_dec_ref_known(v___x_765_, 1);
v___x_775_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v___x_696_);
v___x_776_ = l_Lasm_JS_readField___redArg(v___x_696_, v_d_697_, v___x_775_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_dec(v_a_774_);
lean_dec(v_a_763_);
lean_dec(v_a_752_);
lean_dec(v_a_741_);
lean_dec(v_a_730_);
lean_dec(v_a_719_);
lean_dec(v_a_708_);
lean_dec_ref(v___x_696_);
v_a_777_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_776_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_776_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
else
{
lean_object* v_a_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v_a_785_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_776_, 1);
v___x_786_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_787_ = l_Lasm_JS_readField___redArg(v___x_696_, v_d_697_, v___x_786_);
if (lean_obj_tag(v___x_787_) == 0)
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
lean_dec(v_a_785_);
lean_dec(v_a_774_);
lean_dec(v_a_763_);
lean_dec(v_a_752_);
lean_dec(v_a_741_);
lean_dec(v_a_730_);
lean_dec(v_a_719_);
lean_dec(v_a_708_);
v_a_788_ = lean_ctor_get(v___x_787_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_787_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v___x_787_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_787_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
else
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_804_; 
v_a_796_ = lean_ctor_get(v___x_787_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_787_);
if (v_isSharedCheck_804_ == 0)
{
v___x_798_ = v___x_787_;
v_isShared_799_ = v_isSharedCheck_804_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v___x_787_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_804_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_800_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_800_, 0, v_a_708_);
lean_ctor_set(v___x_800_, 1, v_a_719_);
lean_ctor_set(v___x_800_, 2, v_a_730_);
lean_ctor_set(v___x_800_, 3, v_a_741_);
lean_ctor_set(v___x_800_, 4, v_a_752_);
lean_ctor_set(v___x_800_, 5, v_a_763_);
lean_ctor_set(v___x_800_, 6, v_a_774_);
lean_ctor_set(v___x_800_, 7, v_a_785_);
lean_ctor_set(v___x_800_, 8, v_a_796_);
if (v_isShared_799_ == 0)
{
lean_ctor_set(v___x_798_, 0, v___x_800_);
v___x_802_ = v___x_798_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_800_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___boxed(lean_object* v___x_805_, lean_object* v___x_806_, lean_object* v_d_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0(v___x_805_, v___x_806_, v_d_807_);
lean_dec(v_d_807_);
return v_res_808_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternInput));
v___x_810_ = l_Lasm_JS_instFromJSArray___redArg(v___x_809_);
return v___x_810_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__0);
v___x_812_ = l_Lasm_JS_instFromJSOption___redArg(v___x_811_);
return v___x_812_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_813_ = l_Lasm_JS_Web_instFromJSURLPatternComponentResult;
v___x_814_ = l_Lasm_JS_instFromJSOption___redArg(v___x_813_);
return v___x_814_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___f_817_; 
v___x_815_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__2);
v___x_816_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__1);
v___f_817_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_817_, 0, v___x_816_);
lean_closure_set(v___f_817_, 1, v___x_815_);
return v___f_817_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5(void){
_start:
{
uint8_t v___x_819_; lean_object* v___x_820_; lean_object* v___f_821_; lean_object* v___x_822_; 
v___x_819_ = 0;
v___x_820_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___closed__4));
v___f_821_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__3);
v___x_822_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_822_, 0, v___f_821_);
lean_ctor_set(v___x_822_, 1, v___x_820_);
lean_ctor_set_uint8(v___x_822_, sizeof(void*)*2, v___x_819_);
return v___x_822_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSURLPatternResult(void){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5, &l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5_once, _init_l_Lasm_JS_Web_instFromJSURLPatternResult___closed__5);
return v___x_823_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_828_ = lean_string_utf8_byte_size(v___x_827_);
return v___x_828_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__3);
v___x_831_ = lean_nat_dec_eq(v___x_830_, v___x_829_);
return v___x_831_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_836_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__8));
v___x_837_ = lean_unsigned_to_nat(46u);
v___x_838_ = lean_unsigned_to_nat(193u);
v___x_839_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__7));
v___x_840_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__6));
v___x_841_ = l_mkPanicMessageWithDecl(v___x_840_, v___x_839_, v___x_838_, v___x_837_, v___x_836_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(lean_object* v_context_843_, lean_object* v_d_844_){
_start:
{
lean_object* v___y_847_; lean_object* v___y_848_; 
if (lean_obj_tag(v_d_844_) == 9)
{
lean_object* v_value_852_; lean_object* v___x_853_; 
v_value_852_ = lean_ctor_get(v_d_844_, 0);
lean_inc(v_value_852_);
lean_dec_ref_known(v_d_844_, 2);
v___x_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_853_, 0, v_value_852_);
return v___x_853_;
}
else
{
lean_object* v___x_854_; lean_object* v_received_856_; 
v___x_854_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_844_) == 9)
{
lean_object* v_value_870_; lean_object* v_description_871_; uint8_t v___x_872_; 
v_value_870_ = lean_ctor_get(v_d_844_, 0);
v_description_871_ = lean_ctor_get(v_d_844_, 1);
v___x_872_ = lean_string_dec_eq(v_description_871_, v___x_854_);
if (v___x_872_ == 0)
{
goto v___jp_868_;
}
else
{
uint32_t v___x_873_; uint64_t v___x_874_; lean_object* v___x_875_; uint32_t v___x_876_; lean_object* v___x_877_; 
lean_inc_n(v_value_870_, 2);
lean_dec_ref_known(v_d_844_, 2);
v___x_873_ = 206;
v___x_874_ = 0ULL;
v___x_875_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_875_, 0, v_value_870_);
lean_ctor_set(v___x_875_, 1, v___x_854_);
v___x_876_ = lasm_js_value_handle(v_value_870_);
lean_dec(v_value_870_);
v___x_877_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_873_, v___x_874_, v___x_875_, v___x_876_);
lean_dec_ref_known(v___x_875_, 2);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; uint8_t v___x_879_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_877_, 1);
v___x_879_ = lean_string_validate_utf8(v_a_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; lean_object* v___x_881_; 
lean_dec(v_a_878_);
v___x_880_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_881_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_880_);
v_received_856_ = v___x_881_;
goto v___jp_855_;
}
else
{
lean_object* v___x_882_; 
v___x_882_ = lean_string_from_utf8_unchecked(v_a_878_);
v_received_856_ = v___x_882_;
goto v___jp_855_;
}
}
else
{
lean_object* v___x_883_; 
lean_dec_ref_known(v___x_877_, 1);
v___x_883_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_856_ = v___x_883_;
goto v___jp_855_;
}
}
}
else
{
goto v___jp_868_;
}
v___jp_855_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; uint8_t v___x_866_; 
v___x_857_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_858_ = lean_string_append(v___x_857_, v_context_843_);
v___x_859_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_860_ = lean_string_append(v___x_858_, v___x_859_);
v___x_861_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURL___closed__1));
v___x_862_ = lean_string_append(v___x_860_, v___x_861_);
v___x_863_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_864_ = lean_string_append(v___x_862_, v___x_863_);
v___x_865_ = lean_string_append(v___x_864_, v_received_856_);
lean_dec_ref(v_received_856_);
v___x_866_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; 
v___x_867_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_847_ = v___x_865_;
v___y_848_ = v___x_867_;
goto v___jp_846_;
}
else
{
v___y_847_ = v___x_865_;
v___y_848_ = v___x_854_;
goto v___jp_846_;
}
}
v___jp_868_:
{
lean_object* v___x_869_; 
v___x_869_ = l_Lasm_JS_Data_describe(v_d_844_);
v_received_856_ = v___x_869_;
goto v___jp_855_;
}
}
v___jp_846_:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_849_ = lean_string_append(v___y_847_, v___y_848_);
v___x_850_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
v___x_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
return v___x_851_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___boxed(lean_object* v_context_884_, lean_object* v_d_885_, lean_object* v_a_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(v_context_884_, v_d_885_);
lean_dec_ref(v_context_884_);
return v_res_887_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_889_; uint64_t v___x_890_; 
v___x_889_ = 0;
v___x_890_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0(lean_object* v_b_891_, lean_object* v_args_892_, uint8_t v_await_893_){
_start:
{
uint64_t v___y_896_; uint64_t v___y_897_; uint64_t v___x_940_; uint64_t v___y_942_; 
v___x_940_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_893_ == 0)
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
v___jp_895_:
{
uint64_t v_flags_898_; uint32_t v___x_899_; lean_object* v___x_900_; uint32_t v___x_901_; lean_object* v___x_902_; 
v_flags_898_ = lean_uint64_lor(v___y_896_, v___y_897_);
v___x_899_ = 214;
v___x_900_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_891_, v_args_892_);
v___x_901_ = 0;
v___x_902_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_899_, v_flags_898_, v___x_900_, v___x_901_);
lean_dec(v___x_900_);
if (lean_obj_tag(v___x_902_) == 0)
{
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_904_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_902_, 1);
v___x_904_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_903_);
lean_dec(v_a_903_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_904_, 1);
v___x_906_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_891_);
v___x_907_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0(v___x_906_, v_a_905_);
lean_dec_ref(v___x_906_);
return v___x_907_;
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
v_a_908_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_904_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_904_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
v_a_916_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_902_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_902_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
lean_ctor_set_tag(v___x_918_, 1);
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
v_a_924_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_939_ == 0)
{
v___x_926_ = v___x_902_;
v_isShared_927_ = v_isSharedCheck_939_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_902_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_939_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_928_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_929_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_891_);
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
v_construct_943_ = lean_ctor_get_uint8(v_b_891_, sizeof(void*)*4);
v___x_944_ = lean_uint64_lor(v___x_940_, v___y_942_);
if (v_construct_943_ == 0)
{
uint64_t v___x_945_; 
v___x_945_ = 0ULL;
v___y_896_ = v___x_944_;
v___y_897_ = v___x_945_;
goto v___jp_895_;
}
else
{
uint64_t v___x_946_; 
v___x_946_ = 4ULL;
v___y_896_ = v___x_944_;
v___y_897_ = v___x_946_;
goto v___jp_895_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0_spec__1(lean_object* v_context_1185_, lean_object* v_d_1186_){
_start:
{
lean_object* v___y_1189_; lean_object* v___y_1190_; 
if (lean_obj_tag(v_d_1186_) == 9)
{
lean_object* v_value_1194_; lean_object* v___x_1195_; 
v_value_1194_ = lean_ctor_get(v_d_1186_, 0);
lean_inc(v_value_1194_);
lean_dec_ref_known(v_d_1186_, 2);
v___x_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1195_, 0, v_value_1194_);
return v___x_1195_;
}
else
{
lean_object* v___x_1196_; lean_object* v_received_1198_; 
v___x_1196_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1186_) == 9)
{
lean_object* v_value_1212_; lean_object* v_description_1213_; uint8_t v___x_1214_; 
v_value_1212_ = lean_ctor_get(v_d_1186_, 0);
v_description_1213_ = lean_ctor_get(v_d_1186_, 1);
v___x_1214_ = lean_string_dec_eq(v_description_1213_, v___x_1196_);
if (v___x_1214_ == 0)
{
goto v___jp_1210_;
}
else
{
uint32_t v___x_1215_; uint64_t v___x_1216_; lean_object* v___x_1217_; uint32_t v___x_1218_; lean_object* v___x_1219_; 
lean_inc_n(v_value_1212_, 2);
lean_dec_ref_known(v_d_1186_, 2);
v___x_1215_ = 206;
v___x_1216_ = 0ULL;
v___x_1217_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1217_, 0, v_value_1212_);
lean_ctor_set(v___x_1217_, 1, v___x_1196_);
v___x_1218_ = lasm_js_value_handle(v_value_1212_);
lean_dec(v_value_1212_);
v___x_1219_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1215_, v___x_1216_, v___x_1217_, v___x_1218_);
lean_dec_ref_known(v___x_1217_, 2);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v_a_1220_; uint8_t v___x_1221_; 
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1219_, 1);
v___x_1221_ = lean_string_validate_utf8(v_a_1220_);
if (v___x_1221_ == 0)
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
lean_dec(v_a_1220_);
v___x_1222_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_1223_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1222_);
v_received_1198_ = v___x_1223_;
goto v___jp_1197_;
}
else
{
lean_object* v___x_1224_; 
v___x_1224_ = lean_string_from_utf8_unchecked(v_a_1220_);
v_received_1198_ = v___x_1224_;
goto v___jp_1197_;
}
}
else
{
lean_object* v___x_1225_; 
lean_dec_ref_known(v___x_1219_, 1);
v___x_1225_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1198_ = v___x_1225_;
goto v___jp_1197_;
}
}
}
else
{
goto v___jp_1210_;
}
v___jp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; uint8_t v___x_1208_; 
v___x_1199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1200_ = lean_string_append(v___x_1199_, v_context_1185_);
v___x_1201_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1202_ = lean_string_append(v___x_1200_, v___x_1201_);
v___x_1203_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLSearchParams___closed__0));
v___x_1204_ = lean_string_append(v___x_1202_, v___x_1203_);
v___x_1205_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1206_ = lean_string_append(v___x_1204_, v___x_1205_);
v___x_1207_ = lean_string_append(v___x_1206_, v_received_1198_);
lean_dec_ref(v_received_1198_);
v___x_1208_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; 
v___x_1209_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1189_ = v___x_1207_;
v___y_1190_ = v___x_1209_;
goto v___jp_1188_;
}
else
{
v___y_1189_ = v___x_1207_;
v___y_1190_ = v___x_1196_;
goto v___jp_1188_;
}
}
v___jp_1210_:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Lasm_JS_Data_describe(v_d_1186_);
v_received_1198_ = v___x_1211_;
goto v___jp_1197_;
}
}
v___jp_1188_:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1191_ = lean_string_append(v___y_1189_, v___y_1190_);
v___x_1192_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
v___x_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
return v___x_1193_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1226_, lean_object* v_d_1227_, lean_object* v_a_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0_spec__1(v_context_1226_, v_d_1227_);
lean_dec_ref(v_context_1226_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0(lean_object* v_context_1230_, lean_object* v_bytes_1231_){
_start:
{
lean_object* v___x_1233_; 
v___x_1233_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1231_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1235_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
lean_dec_ref_known(v___x_1233_, 1);
v___x_1235_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0_spec__1(v_context_1230_, v_a_1234_);
return v___x_1235_;
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
v_a_1236_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1233_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1233_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0___boxed(lean_object* v_context_1244_, lean_object* v_bytes_1245_, lean_object* v_a_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0(v_context_1244_, v_bytes_1245_);
lean_dec_ref(v_bytes_1245_);
lean_dec_ref(v_context_1244_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0(lean_object* v_o_1249_, lean_object* v_key_1250_){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
lean_inc_ref(v_key_1250_);
v___x_1252_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1252_, 0, v_key_1250_);
v___x_1253_ = l_Lasm_JS_Wire_encodeIO(v___x_1252_);
lean_dec_ref_known(v___x_1252_, 1);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v_a_1254_; uint32_t v___x_1255_; uint32_t v___x_1256_; uint64_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v_a_1254_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_a_1254_);
lean_dec_ref_known(v___x_1253_, 1);
v___x_1255_ = 203;
v___x_1256_ = lasm_js_value_handle(v_o_1249_);
v___x_1257_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
v___x_1258_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_1259_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1259_, 0, v_o_1249_);
lean_ctor_set(v___x_1259_, 1, v___x_1258_);
v___x_1260_ = lasm_js_call(v___x_1255_, v___x_1256_, v___x_1257_, v_a_1254_, v___x_1259_);
lean_dec_ref_known(v___x_1259_, 2);
lean_dec(v_a_1254_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v___x_1260_, 1);
v___x_1262_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0___closed__0));
v___x_1263_ = l_String_quote(v_key_1250_);
v___x_1264_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
v___x_1265_ = lean_unsigned_to_nat(120u);
v___x_1266_ = lean_unsigned_to_nat(0u);
v___x_1267_ = l_Std_Format_pretty(v___x_1264_, v___x_1265_, v___x_1266_, v___x_1266_);
v___x_1268_ = lean_string_append(v___x_1262_, v___x_1267_);
lean_dec_ref(v___x_1267_);
v___x_1269_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0(v___x_1268_, v_a_1261_);
lean_dec(v_a_1261_);
lean_dec_ref(v___x_1268_);
return v___x_1269_;
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
lean_dec_ref(v_key_1250_);
v_a_1270_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1260_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1260_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref(v_key_1250_);
lean_dec(v_o_1249_);
v_a_1278_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1253_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1253_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0___boxed(lean_object* v_o_1286_, lean_object* v_key_1287_, lean_object* v_a_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0(v_o_1286_, v_key_1287_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams(lean_object* v_self_1291_){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = ((lean_object*)(l_Lasm_JS_Web_URL_searchParams___closed__0));
v___x_1294_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0(v_self_1291_, v___x_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams___boxed(lean_object* v_self_1295_, lean_object* v_a_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lasm_JS_Web_URL_searchParams(v_self_1295_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash(lean_object* v_self_1298_){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1300_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_1301_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1298_, v___x_1300_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_hash___boxed(lean_object* v_self_1302_, lean_object* v_a_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lasm_JS_Web_URL_hash(v_self_1302_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash(lean_object* v_self_1305_, lean_object* v_value_1306_){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1308_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_1309_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1309_, 0, v_value_1306_);
v___x_1310_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1305_, v___x_1308_, v___x_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_setHash___boxed(lean_object* v_self_1311_, lean_object* v_value_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lasm_JS_Web_URL_setHash(v_self_1311_, v_value_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(lean_object* v_b_1315_, lean_object* v_args_1316_, uint8_t v_await_1317_){
_start:
{
uint64_t v___y_1320_; uint64_t v___y_1321_; uint64_t v___x_1364_; uint64_t v___y_1366_; 
v___x_1364_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1317_ == 0)
{
uint64_t v___x_1371_; 
v___x_1371_ = 0ULL;
v___y_1366_ = v___x_1371_;
goto v___jp_1365_;
}
else
{
uint64_t v___x_1372_; 
v___x_1372_ = 2ULL;
v___y_1366_ = v___x_1372_;
goto v___jp_1365_;
}
v___jp_1319_:
{
uint64_t v_flags_1322_; uint32_t v___x_1323_; lean_object* v___x_1324_; uint32_t v___x_1325_; lean_object* v___x_1326_; 
v_flags_1322_ = lean_uint64_lor(v___y_1320_, v___y_1321_);
v___x_1323_ = 214;
v___x_1324_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1315_, v_args_1316_);
v___x_1325_ = 0;
v___x_1326_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1323_, v_flags_1322_, v___x_1324_, v___x_1325_);
lean_dec(v___x_1324_);
if (lean_obj_tag(v___x_1326_) == 0)
{
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1328_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
v___x_1328_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1327_);
lean_dec(v_a_1327_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
v___x_1330_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1315_);
v___x_1331_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v___x_1330_, v_a_1329_);
lean_dec_ref(v___x_1330_);
return v___x_1331_;
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
v_a_1332_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___x_1328_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1328_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
v_a_1340_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1326_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1326_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
lean_ctor_set_tag(v___x_1342_, 1);
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
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1363_; 
v_a_1348_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1350_ = v___x_1326_;
v_isShared_1351_ = v_isSharedCheck_1363_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1326_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1363_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1361_; 
v___x_1352_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1353_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1315_);
v___x_1354_ = lean_string_append(v___x_1352_, v___x_1353_);
lean_dec_ref(v___x_1353_);
v___x_1355_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1356_ = lean_string_append(v___x_1354_, v___x_1355_);
v___x_1357_ = lean_io_error_to_string(v_a_1348_);
v___x_1358_ = lean_string_append(v___x_1356_, v___x_1357_);
lean_dec_ref(v___x_1357_);
v___x_1359_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 0, v___x_1359_);
v___x_1361_ = v___x_1350_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1359_);
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
v___jp_1365_:
{
uint8_t v_construct_1367_; uint64_t v___x_1368_; 
v_construct_1367_ = lean_ctor_get_uint8(v_b_1315_, sizeof(void*)*4);
v___x_1368_ = lean_uint64_lor(v___x_1364_, v___y_1366_);
if (v_construct_1367_ == 0)
{
uint64_t v___x_1369_; 
v___x_1369_ = 0ULL;
v___y_1320_ = v___x_1368_;
v___y_1321_ = v___x_1369_;
goto v___jp_1319_;
}
else
{
uint64_t v___x_1370_; 
v___x_1370_ = 4ULL;
v___y_1320_ = v___x_1368_;
v___y_1321_ = v___x_1370_;
goto v___jp_1319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0___boxed(lean_object* v_b_1373_, lean_object* v_args_1374_, lean_object* v_await_1375_, lean_object* v_a_1376_){
_start:
{
uint8_t v_await_boxed_1377_; lean_object* v_res_1378_; 
v_await_boxed_1377_ = lean_unbox(v_await_1375_);
v_res_1378_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v_b_1373_, v_args_1374_, v_await_boxed_1377_);
lean_dec_ref(v_b_1373_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL(lean_object* v_obj_1387_){
_start:
{
uint8_t v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___y_1393_; lean_object* v_value_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1389_ = 0;
v___x_1390_ = lean_unsigned_to_nat(1u);
v___x_1391_ = ((lean_object*)(l_Lasm_JS_Web_URL_createObjectURL___closed__2));
v_value_1398_ = lean_ctor_get(v_obj_1387_, 0);
v___x_1399_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
lean_inc(v_value_1398_);
v___x_1400_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1400_, 0, v_value_1398_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___y_1393_ = v___x_1400_;
goto v___jp_1392_;
v___jp_1392_:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1394_ = lean_mk_empty_array_with_capacity(v___x_1390_);
v___x_1395_ = lean_array_push(v___x_1394_, v___y_1393_);
v___x_1396_ = l_Lasm_JS_Web_Support_args(v___x_1395_);
v___x_1397_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_1391_, v___x_1396_, v___x_1389_);
return v___x_1397_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL___boxed(lean_object* v_obj_1401_, lean_object* v_a_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l_Lasm_JS_Web_URL_createObjectURL(v_obj_1401_);
lean_dec_ref(v_obj_1401_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(lean_object* v_b_1404_, lean_object* v_args_1405_, uint8_t v_await_1406_){
_start:
{
uint64_t v___y_1409_; uint64_t v___y_1410_; uint64_t v___x_1451_; uint64_t v___y_1453_; 
v___x_1451_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1406_ == 0)
{
uint64_t v___x_1458_; 
v___x_1458_ = 0ULL;
v___y_1453_ = v___x_1458_;
goto v___jp_1452_;
}
else
{
uint64_t v___x_1459_; 
v___x_1459_ = 2ULL;
v___y_1453_ = v___x_1459_;
goto v___jp_1452_;
}
v___jp_1408_:
{
uint64_t v_flags_1411_; uint32_t v___x_1412_; lean_object* v___x_1413_; uint32_t v___x_1414_; lean_object* v___x_1415_; 
v_flags_1411_ = lean_uint64_lor(v___y_1409_, v___y_1410_);
v___x_1412_ = 214;
v___x_1413_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1404_, v_args_1405_);
v___x_1414_ = 0;
v___x_1415_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1412_, v_flags_1411_, v___x_1413_, v___x_1414_);
lean_dec(v___x_1413_);
if (lean_obj_tag(v___x_1415_) == 0)
{
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v_a_1416_; lean_object* v___x_1417_; 
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
lean_inc(v_a_1416_);
lean_dec_ref_known(v___x_1415_, 1);
v___x_1417_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1416_);
lean_dec(v_a_1416_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v___x_1418_; 
lean_dec_ref_known(v___x_1417_, 1);
v___x_1418_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_1418_;
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
v_a_1419_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1417_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1417_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
v_a_1427_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1415_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1415_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
lean_ctor_set_tag(v___x_1429_, 1);
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1450_; 
v_a_1435_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1437_ = v___x_1415_;
v_isShared_1438_ = v_isSharedCheck_1450_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1415_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1450_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1448_; 
v___x_1439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1440_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1404_);
v___x_1441_ = lean_string_append(v___x_1439_, v___x_1440_);
lean_dec_ref(v___x_1440_);
v___x_1442_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1443_ = lean_string_append(v___x_1441_, v___x_1442_);
v___x_1444_ = lean_io_error_to_string(v_a_1435_);
v___x_1445_ = lean_string_append(v___x_1443_, v___x_1444_);
lean_dec_ref(v___x_1444_);
v___x_1446_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1446_);
v___x_1448_ = v___x_1437_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1446_);
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
v___jp_1452_:
{
uint8_t v_construct_1454_; uint64_t v___x_1455_; 
v_construct_1454_ = lean_ctor_get_uint8(v_b_1404_, sizeof(void*)*4);
v___x_1455_ = lean_uint64_lor(v___x_1451_, v___y_1453_);
if (v_construct_1454_ == 0)
{
uint64_t v___x_1456_; 
v___x_1456_ = 0ULL;
v___y_1409_ = v___x_1455_;
v___y_1410_ = v___x_1456_;
goto v___jp_1408_;
}
else
{
uint64_t v___x_1457_; 
v___x_1457_ = 4ULL;
v___y_1409_ = v___x_1455_;
v___y_1410_ = v___x_1457_;
goto v___jp_1408_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0___boxed(lean_object* v_b_1460_, lean_object* v_args_1461_, lean_object* v_await_1462_, lean_object* v_a_1463_){
_start:
{
uint8_t v_await_boxed_1464_; lean_object* v_res_1465_; 
v_await_boxed_1464_ = lean_unbox(v_await_1462_);
v_res_1465_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v_b_1460_, v_args_1461_, v_await_boxed_1464_);
lean_dec_ref(v_b_1460_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL(lean_object* v_url_1474_){
_start:
{
uint8_t v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1476_ = 0;
v___x_1477_ = lean_unsigned_to_nat(1u);
v___x_1478_ = ((lean_object*)(l_Lasm_JS_Web_URL_revokeObjectURL___closed__2));
v___x_1479_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1479_, 0, v_url_1474_);
v___x_1480_ = lean_mk_empty_array_with_capacity(v___x_1477_);
v___x_1481_ = lean_array_push(v___x_1480_, v___x_1479_);
v___x_1482_ = l_Lasm_JS_Web_Support_args(v___x_1481_);
v___x_1483_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_1478_, v___x_1482_, v___x_1476_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL___boxed(lean_object* v_url_1484_, lean_object* v_a_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l_Lasm_JS_Web_URL_revokeObjectURL(v_url_1484_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(lean_object* v_context_1488_, lean_object* v_d_1489_){
_start:
{
lean_object* v___y_1495_; lean_object* v___y_1496_; 
switch(lean_obj_tag(v_d_1489_))
{
case 1:
{
goto v___jp_1491_;
}
case 0:
{
goto v___jp_1491_;
}
default: 
{
if (lean_obj_tag(v_d_1489_) == 9)
{
lean_object* v_value_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v_value_1500_ = lean_ctor_get(v_d_1489_, 0);
lean_inc(v_value_1500_);
lean_dec_ref_known(v_d_1489_, 2);
v___x_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1501_, 0, v_value_1500_);
v___x_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
return v___x_1502_;
}
else
{
lean_object* v___x_1503_; lean_object* v_received_1505_; 
v___x_1503_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1489_) == 9)
{
lean_object* v_value_1519_; lean_object* v_description_1520_; uint8_t v___x_1521_; 
v_value_1519_ = lean_ctor_get(v_d_1489_, 0);
v_description_1520_ = lean_ctor_get(v_d_1489_, 1);
v___x_1521_ = lean_string_dec_eq(v_description_1520_, v___x_1503_);
if (v___x_1521_ == 0)
{
goto v___jp_1517_;
}
else
{
uint32_t v___x_1522_; uint64_t v___x_1523_; lean_object* v___x_1524_; uint32_t v___x_1525_; lean_object* v___x_1526_; 
lean_inc_n(v_value_1519_, 2);
lean_dec_ref_known(v_d_1489_, 2);
v___x_1522_ = 206;
v___x_1523_ = 0ULL;
v___x_1524_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1524_, 0, v_value_1519_);
lean_ctor_set(v___x_1524_, 1, v___x_1503_);
v___x_1525_ = lasm_js_value_handle(v_value_1519_);
lean_dec(v_value_1519_);
v___x_1526_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1522_, v___x_1523_, v___x_1524_, v___x_1525_);
lean_dec_ref_known(v___x_1524_, 2);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; uint8_t v___x_1528_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = lean_string_validate_utf8(v_a_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
lean_dec(v_a_1527_);
v___x_1529_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_1530_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1529_);
v_received_1505_ = v___x_1530_;
goto v___jp_1504_;
}
else
{
lean_object* v___x_1531_; 
v___x_1531_ = lean_string_from_utf8_unchecked(v_a_1527_);
v_received_1505_ = v___x_1531_;
goto v___jp_1504_;
}
}
else
{
lean_object* v___x_1532_; 
lean_dec_ref_known(v___x_1526_, 1);
v___x_1532_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1505_ = v___x_1532_;
goto v___jp_1504_;
}
}
}
else
{
goto v___jp_1517_;
}
v___jp_1504_:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; uint8_t v___x_1515_; 
v___x_1506_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1507_ = lean_string_append(v___x_1506_, v_context_1488_);
v___x_1508_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1509_ = lean_string_append(v___x_1507_, v___x_1508_);
v___x_1510_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___closed__0));
v___x_1511_ = lean_string_append(v___x_1509_, v___x_1510_);
v___x_1512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1513_ = lean_string_append(v___x_1511_, v___x_1512_);
v___x_1514_ = lean_string_append(v___x_1513_, v_received_1505_);
lean_dec_ref(v_received_1505_);
v___x_1515_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; 
v___x_1516_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1495_ = v___x_1514_;
v___y_1496_ = v___x_1516_;
goto v___jp_1494_;
}
else
{
v___y_1495_ = v___x_1514_;
v___y_1496_ = v___x_1503_;
goto v___jp_1494_;
}
}
v___jp_1517_:
{
lean_object* v___x_1518_; 
v___x_1518_ = l_Lasm_JS_Data_describe(v_d_1489_);
v_received_1505_ = v___x_1518_;
goto v___jp_1504_;
}
}
}
}
v___jp_1491_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = lean_box(0);
v___x_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1492_);
return v___x_1493_;
}
v___jp_1494_:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1497_ = lean_string_append(v___y_1495_, v___y_1496_);
v___x_1498_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
v___x_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
return v___x_1499_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___boxed(lean_object* v_context_1533_, lean_object* v_d_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v_context_1533_, v_d_1534_);
lean_dec_ref(v_context_1533_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(lean_object* v_b_1537_, lean_object* v_args_1538_, uint8_t v_await_1539_){
_start:
{
uint64_t v___y_1542_; uint64_t v___y_1543_; uint64_t v___x_1586_; uint64_t v___y_1588_; 
v___x_1586_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1539_ == 0)
{
uint64_t v___x_1593_; 
v___x_1593_ = 0ULL;
v___y_1588_ = v___x_1593_;
goto v___jp_1587_;
}
else
{
uint64_t v___x_1594_; 
v___x_1594_ = 2ULL;
v___y_1588_ = v___x_1594_;
goto v___jp_1587_;
}
v___jp_1541_:
{
uint64_t v_flags_1544_; uint32_t v___x_1545_; lean_object* v___x_1546_; uint32_t v___x_1547_; lean_object* v___x_1548_; 
v_flags_1544_ = lean_uint64_lor(v___y_1542_, v___y_1543_);
v___x_1545_ = 214;
v___x_1546_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1537_, v_args_1538_);
v___x_1547_ = 0;
v___x_1548_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1545_, v_flags_1544_, v___x_1546_, v___x_1547_);
lean_dec(v___x_1546_);
if (lean_obj_tag(v___x_1548_) == 0)
{
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v_a_1549_; lean_object* v___x_1550_; 
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_a_1549_);
lean_dec_ref_known(v___x_1548_, 1);
v___x_1550_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1549_);
lean_dec(v_a_1549_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v_a_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v_a_1551_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_a_1551_);
lean_dec_ref_known(v___x_1550_, 1);
v___x_1552_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1537_);
v___x_1553_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v___x_1552_, v_a_1551_);
lean_dec_ref(v___x_1552_);
return v___x_1553_;
}
else
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
v_a_1554_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1550_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1550_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
v_a_1562_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v___x_1548_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1548_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
lean_ctor_set_tag(v___x_1564_, 1);
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1562_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1585_; 
v_a_1570_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1572_ = v___x_1548_;
v_isShared_1573_ = v_isSharedCheck_1585_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1548_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1585_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1574_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1575_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1537_);
v___x_1576_ = lean_string_append(v___x_1574_, v___x_1575_);
lean_dec_ref(v___x_1575_);
v___x_1577_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1578_ = lean_string_append(v___x_1576_, v___x_1577_);
v___x_1579_ = lean_io_error_to_string(v_a_1570_);
v___x_1580_ = lean_string_append(v___x_1578_, v___x_1579_);
lean_dec_ref(v___x_1579_);
v___x_1581_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 0, v___x_1581_);
v___x_1583_ = v___x_1572_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
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
v___jp_1587_:
{
uint8_t v_construct_1589_; uint64_t v___x_1590_; 
v_construct_1589_ = lean_ctor_get_uint8(v_b_1537_, sizeof(void*)*4);
v___x_1590_ = lean_uint64_lor(v___x_1586_, v___y_1588_);
if (v_construct_1589_ == 0)
{
uint64_t v___x_1591_; 
v___x_1591_ = 0ULL;
v___y_1542_ = v___x_1590_;
v___y_1543_ = v___x_1591_;
goto v___jp_1541_;
}
else
{
uint64_t v___x_1592_; 
v___x_1592_ = 4ULL;
v___y_1542_ = v___x_1590_;
v___y_1543_ = v___x_1592_;
goto v___jp_1541_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0___boxed(lean_object* v_b_1595_, lean_object* v_args_1596_, lean_object* v_await_1597_, lean_object* v_a_1598_){
_start:
{
uint8_t v_await_boxed_1599_; lean_object* v_res_1600_; 
v_await_boxed_1599_ = lean_unbox(v_await_1597_);
v_res_1600_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v_b_1595_, v_args_1596_, v_await_boxed_1599_);
lean_dec_ref(v_b_1595_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse(lean_object* v_url_1609_, lean_object* v_base_1610_){
_start:
{
uint8_t v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1612_ = 0;
v___x_1613_ = lean_unsigned_to_nat(2u);
v___x_1614_ = ((lean_object*)(l_Lasm_JS_Web_URL_parse___closed__2));
v___x_1615_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1615_, 0, v_url_1609_);
v___x_1616_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1610_);
v___x_1617_ = lean_mk_empty_array_with_capacity(v___x_1613_);
v___x_1618_ = lean_array_push(v___x_1617_, v___x_1615_);
v___x_1619_ = lean_array_push(v___x_1618_, v___x_1616_);
v___x_1620_ = l_Lasm_JS_Web_Support_args(v___x_1619_);
v___x_1621_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v___x_1614_, v___x_1620_, v___x_1612_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse___boxed(lean_object* v_url_1622_, lean_object* v_base_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Lasm_JS_Web_URL_parse(v_url_1622_, v_base_1623_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(lean_object* v_b_1626_, lean_object* v_args_1627_, uint8_t v_await_1628_){
_start:
{
uint64_t v___y_1631_; uint64_t v___y_1632_; uint64_t v___x_1675_; uint64_t v___y_1677_; 
v___x_1675_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1628_ == 0)
{
uint64_t v___x_1682_; 
v___x_1682_ = 0ULL;
v___y_1677_ = v___x_1682_;
goto v___jp_1676_;
}
else
{
uint64_t v___x_1683_; 
v___x_1683_ = 2ULL;
v___y_1677_ = v___x_1683_;
goto v___jp_1676_;
}
v___jp_1630_:
{
uint64_t v_flags_1633_; uint32_t v___x_1634_; lean_object* v___x_1635_; uint32_t v___x_1636_; lean_object* v___x_1637_; 
v_flags_1633_ = lean_uint64_lor(v___y_1631_, v___y_1632_);
v___x_1634_ = 214;
v___x_1635_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1626_, v_args_1627_);
v___x_1636_ = 0;
v___x_1637_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1634_, v_flags_1633_, v___x_1635_, v___x_1636_);
lean_dec(v___x_1635_);
if (lean_obj_tag(v___x_1637_) == 0)
{
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v_a_1638_; lean_object* v___x_1639_; 
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
lean_inc(v_a_1638_);
lean_dec_ref_known(v___x_1637_, 1);
v___x_1639_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1638_);
lean_dec(v_a_1638_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_a_1640_);
lean_dec_ref_known(v___x_1639_, 1);
v___x_1641_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1626_);
v___x_1642_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v___x_1641_, v_a_1640_);
lean_dec_ref(v___x_1641_);
return v___x_1642_;
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
v_a_1643_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1639_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1639_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
v_a_1651_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1637_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1637_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
lean_ctor_set_tag(v___x_1653_, 1);
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1674_; 
v_a_1659_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1661_ = v___x_1637_;
v_isShared_1662_ = v_isSharedCheck_1674_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1637_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1674_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1672_; 
v___x_1663_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1664_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1626_);
v___x_1665_ = lean_string_append(v___x_1663_, v___x_1664_);
lean_dec_ref(v___x_1664_);
v___x_1666_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1667_ = lean_string_append(v___x_1665_, v___x_1666_);
v___x_1668_ = lean_io_error_to_string(v_a_1659_);
v___x_1669_ = lean_string_append(v___x_1667_, v___x_1668_);
lean_dec_ref(v___x_1668_);
v___x_1670_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1669_);
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 0, v___x_1670_);
v___x_1672_ = v___x_1661_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1670_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
v___jp_1676_:
{
uint8_t v_construct_1678_; uint64_t v___x_1679_; 
v_construct_1678_ = lean_ctor_get_uint8(v_b_1626_, sizeof(void*)*4);
v___x_1679_ = lean_uint64_lor(v___x_1675_, v___y_1677_);
if (v_construct_1678_ == 0)
{
uint64_t v___x_1680_; 
v___x_1680_ = 0ULL;
v___y_1631_ = v___x_1679_;
v___y_1632_ = v___x_1680_;
goto v___jp_1630_;
}
else
{
uint64_t v___x_1681_; 
v___x_1681_ = 4ULL;
v___y_1631_ = v___x_1679_;
v___y_1632_ = v___x_1681_;
goto v___jp_1630_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0___boxed(lean_object* v_b_1684_, lean_object* v_args_1685_, lean_object* v_await_1686_, lean_object* v_a_1687_){
_start:
{
uint8_t v_await_boxed_1688_; lean_object* v_res_1689_; 
v_await_boxed_1688_ = lean_unbox(v_await_1686_);
v_res_1689_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v_b_1684_, v_args_1685_, v_await_boxed_1688_);
lean_dec_ref(v_b_1684_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse(lean_object* v_url_1698_, lean_object* v_base_1699_){
_start:
{
uint8_t v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1701_ = 0;
v___x_1702_ = lean_unsigned_to_nat(2u);
v___x_1703_ = ((lean_object*)(l_Lasm_JS_Web_URL_canParse___closed__2));
v___x_1704_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1704_, 0, v_url_1698_);
v___x_1705_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1699_);
v___x_1706_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1707_ = lean_array_push(v___x_1706_, v___x_1704_);
v___x_1708_ = lean_array_push(v___x_1707_, v___x_1705_);
v___x_1709_ = l_Lasm_JS_Web_Support_args(v___x_1708_);
v___x_1710_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v___x_1703_, v___x_1709_, v___x_1701_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse___boxed(lean_object* v_url_1711_, lean_object* v_base_1712_, lean_object* v_a_1713_){
_start:
{
lean_object* v_res_1714_; 
v_res_1714_ = l_Lasm_JS_Web_URL_canParse(v_url_1711_, v_base_1712_);
return v_res_1714_;
}
}
static lean_object* _init_l_Lasm_JS_Web_URL_toJSON___closed__1(void){
_start:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1716_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1717_ = l_Lasm_JS_Web_Support_args(v___x_1716_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON(lean_object* v_self_1718_){
_start:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1720_ = ((lean_object*)(l_Lasm_JS_Web_URL_toJSON___closed__0));
v___x_1721_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_1722_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1718_, v___x_1720_, v___x_1721_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON___boxed(lean_object* v_self_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l_Lasm_JS_Web_URL_toJSON(v_self_1723_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t v_sz_1726_, size_t v_i_1727_, lean_object* v_bs_1728_){
_start:
{
uint8_t v___x_1729_; 
v___x_1729_ = lean_usize_dec_lt(v_i_1727_, v_sz_1726_);
if (v___x_1729_ == 0)
{
return v_bs_1728_;
}
else
{
lean_object* v_v_1730_; lean_object* v___x_1731_; lean_object* v_bs_x27_1732_; lean_object* v___x_1733_; size_t v___x_1734_; size_t v___x_1735_; lean_object* v___x_1736_; 
v_v_1730_ = lean_array_uget(v_bs_1728_, v_i_1727_);
v___x_1731_ = lean_unsigned_to_nat(0u);
v_bs_x27_1732_ = lean_array_uset(v_bs_1728_, v_i_1727_, v___x_1731_);
v___x_1733_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1733_, 0, v_v_1730_);
v___x_1734_ = ((size_t)1ULL);
v___x_1735_ = lean_usize_add(v_i_1727_, v___x_1734_);
v___x_1736_ = lean_array_uset(v_bs_x27_1732_, v_i_1727_, v___x_1733_);
v_i_1727_ = v___x_1735_;
v_bs_1728_ = v___x_1736_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0___boxed(lean_object* v_sz_1738_, lean_object* v_i_1739_, lean_object* v_bs_1740_){
_start:
{
size_t v_sz_boxed_1741_; size_t v_i_boxed_1742_; lean_object* v_res_1743_; 
v_sz_boxed_1741_ = lean_unbox_usize(v_sz_1738_);
lean_dec(v_sz_1738_);
v_i_boxed_1742_ = lean_unbox_usize(v_i_1739_);
lean_dec(v_i_1739_);
v_res_1743_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_boxed_1741_, v_i_boxed_1742_, v_bs_1740_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(size_t v_sz_1744_, size_t v_i_1745_, lean_object* v_bs_1746_){
_start:
{
uint8_t v___x_1747_; 
v___x_1747_ = lean_usize_dec_lt(v_i_1745_, v_sz_1744_);
if (v___x_1747_ == 0)
{
return v_bs_1746_;
}
else
{
lean_object* v_v_1748_; lean_object* v___x_1749_; lean_object* v_bs_x27_1750_; size_t v_sz_1751_; size_t v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; size_t v___x_1755_; size_t v___x_1756_; lean_object* v___x_1757_; 
v_v_1748_ = lean_array_uget(v_bs_1746_, v_i_1745_);
v___x_1749_ = lean_unsigned_to_nat(0u);
v_bs_x27_1750_ = lean_array_uset(v_bs_1746_, v_i_1745_, v___x_1749_);
v_sz_1751_ = lean_array_size(v_v_1748_);
v___x_1752_ = ((size_t)0ULL);
v___x_1753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_1751_, v___x_1752_, v_v_1748_);
v___x_1754_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
v___x_1755_ = ((size_t)1ULL);
v___x_1756_ = lean_usize_add(v_i_1745_, v___x_1755_);
v___x_1757_ = lean_array_uset(v_bs_x27_1750_, v_i_1745_, v___x_1754_);
v_i_1745_ = v___x_1756_;
v_bs_1746_ = v___x_1757_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1___boxed(lean_object* v_sz_1759_, lean_object* v_i_1760_, lean_object* v_bs_1761_){
_start:
{
size_t v_sz_boxed_1762_; size_t v_i_boxed_1763_; lean_object* v_res_1764_; 
v_sz_boxed_1762_ = lean_unbox_usize(v_sz_1759_);
lean_dec(v_sz_1759_);
v_i_boxed_1763_ = lean_unbox_usize(v_i_1760_);
lean_dec(v_i_1760_);
v_res_1764_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_boxed_1762_, v_i_boxed_1763_, v_bs_1761_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t v_sz_1765_, size_t v_i_1766_, lean_object* v_bs_1767_){
_start:
{
uint8_t v___x_1768_; 
v___x_1768_ = lean_usize_dec_lt(v_i_1766_, v_sz_1765_);
if (v___x_1768_ == 0)
{
return v_bs_1767_;
}
else
{
lean_object* v_v_1769_; lean_object* v_fst_1770_; lean_object* v_snd_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1785_; 
v_v_1769_ = lean_array_uget(v_bs_1767_, v_i_1766_);
v_fst_1770_ = lean_ctor_get(v_v_1769_, 0);
v_snd_1771_ = lean_ctor_get(v_v_1769_, 1);
v_isSharedCheck_1785_ = !lean_is_exclusive(v_v_1769_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1773_ = v_v_1769_;
v_isShared_1774_ = v_isSharedCheck_1785_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_snd_1771_);
lean_inc(v_fst_1770_);
lean_dec(v_v_1769_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1785_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1775_; lean_object* v_bs_x27_1776_; lean_object* v___x_1777_; lean_object* v___x_1779_; 
v___x_1775_ = lean_unsigned_to_nat(0u);
v_bs_x27_1776_ = lean_array_uset(v_bs_1767_, v_i_1766_, v___x_1775_);
v___x_1777_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1777_, 0, v_snd_1771_);
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 1, v___x_1777_);
v___x_1779_ = v___x_1773_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_fst_1770_);
lean_ctor_set(v_reuseFailAlloc_1784_, 1, v___x_1777_);
v___x_1779_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
size_t v___x_1780_; size_t v___x_1781_; lean_object* v___x_1782_; 
v___x_1780_ = ((size_t)1ULL);
v___x_1781_ = lean_usize_add(v_i_1766_, v___x_1780_);
v___x_1782_ = lean_array_uset(v_bs_x27_1776_, v_i_1766_, v___x_1779_);
v_i_1766_ = v___x_1781_;
v_bs_1767_ = v___x_1782_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2___boxed(lean_object* v_sz_1786_, lean_object* v_i_1787_, lean_object* v_bs_1788_){
_start:
{
size_t v_sz_boxed_1789_; size_t v_i_boxed_1790_; lean_object* v_res_1791_; 
v_sz_boxed_1789_ = lean_unbox_usize(v_sz_1786_);
lean_dec(v_sz_1786_);
v_i_boxed_1790_ = lean_unbox_usize(v_i_1787_);
lean_dec(v_i_1787_);
v_res_1791_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_boxed_1789_, v_i_boxed_1790_, v_bs_1788_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(lean_object* v_x_1792_){
_start:
{
if (lean_obj_tag(v_x_1792_) == 0)
{
lean_object* v___x_1793_; 
v___x_1793_ = lean_box(0);
return v___x_1793_;
}
else
{
lean_object* v_val_1794_; 
v_val_1794_ = lean_ctor_get(v_x_1792_, 0);
lean_inc(v_val_1794_);
lean_dec_ref_known(v_x_1792_, 1);
switch(lean_obj_tag(v_val_1794_))
{
case 0:
{
lean_object* v_value_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1805_; 
v_value_1795_ = lean_ctor_get(v_val_1794_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v_val_1794_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1797_ = v_val_1794_;
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_value_1795_);
lean_dec(v_val_1794_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
size_t v_sz_1799_; size_t v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1803_; 
v_sz_1799_ = lean_array_size(v_value_1795_);
v___x_1800_ = ((size_t)0ULL);
v___x_1801_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_1799_, v___x_1800_, v_value_1795_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set_tag(v___x_1797_, 7);
lean_ctor_set(v___x_1797_, 0, v___x_1801_);
v___x_1803_ = v___x_1797_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v___x_1801_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
case 1:
{
lean_object* v_value_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1816_; 
v_value_1806_ = lean_ctor_get(v_val_1794_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v_val_1794_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1808_ = v_val_1794_;
v_isShared_1809_ = v_isSharedCheck_1816_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_value_1806_);
lean_dec(v_val_1794_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1816_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
size_t v_sz_1810_; size_t v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1814_; 
v_sz_1810_ = lean_array_size(v_value_1806_);
v___x_1811_ = ((size_t)0ULL);
v___x_1812_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_1810_, v___x_1811_, v_value_1806_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 8);
lean_ctor_set(v___x_1808_, 0, v___x_1812_);
v___x_1814_ = v___x_1808_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1812_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
default: 
{
lean_object* v_value_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1824_; 
v_value_1817_ = lean_ctor_get(v_val_1794_, 0);
v_isSharedCheck_1824_ = !lean_is_exclusive(v_val_1794_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1819_ = v_val_1794_;
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_value_1817_);
lean_dec(v_val_1794_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1822_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set_tag(v___x_1819_, 4);
v___x_1822_ = v___x_1819_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v_value_1817_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(lean_object* v_b_1825_, lean_object* v_args_1826_, uint8_t v_await_1827_){
_start:
{
uint64_t v___y_1830_; uint64_t v___y_1831_; uint64_t v___x_1874_; uint64_t v___y_1876_; 
v___x_1874_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1827_ == 0)
{
uint64_t v___x_1881_; 
v___x_1881_ = 0ULL;
v___y_1876_ = v___x_1881_;
goto v___jp_1875_;
}
else
{
uint64_t v___x_1882_; 
v___x_1882_ = 2ULL;
v___y_1876_ = v___x_1882_;
goto v___jp_1875_;
}
v___jp_1829_:
{
uint64_t v_flags_1832_; uint32_t v___x_1833_; lean_object* v___x_1834_; uint32_t v___x_1835_; lean_object* v___x_1836_; 
v_flags_1832_ = lean_uint64_lor(v___y_1830_, v___y_1831_);
v___x_1833_ = 214;
v___x_1834_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1825_, v_args_1826_);
v___x_1835_ = 0;
v___x_1836_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1833_, v_flags_1832_, v___x_1834_, v___x_1835_);
lean_dec(v___x_1834_);
if (lean_obj_tag(v___x_1836_) == 0)
{
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v_a_1837_; lean_object* v___x_1838_; 
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1837_);
lean_dec_ref_known(v___x_1836_, 1);
v___x_1838_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1837_);
lean_dec(v_a_1837_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_a_1839_);
lean_dec_ref_known(v___x_1838_, 1);
v___x_1840_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1825_);
v___x_1841_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_URL_searchParams_spec__0_spec__0_spec__1(v___x_1840_, v_a_1839_);
lean_dec_ref(v___x_1840_);
return v___x_1841_;
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
v_a_1842_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1838_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1838_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
v_a_1850_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1836_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1836_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
lean_ctor_set_tag(v___x_1852_, 1);
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1873_; 
v_a_1858_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1860_ = v___x_1836_;
v_isShared_1861_ = v_isSharedCheck_1873_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1836_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1873_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1871_; 
v___x_1862_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1863_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1825_);
v___x_1864_ = lean_string_append(v___x_1862_, v___x_1863_);
lean_dec_ref(v___x_1863_);
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1866_ = lean_string_append(v___x_1864_, v___x_1865_);
v___x_1867_ = lean_io_error_to_string(v_a_1858_);
v___x_1868_ = lean_string_append(v___x_1866_, v___x_1867_);
lean_dec_ref(v___x_1867_);
v___x_1869_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 0, v___x_1869_);
v___x_1871_ = v___x_1860_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1869_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
v___jp_1875_:
{
uint8_t v_construct_1877_; uint64_t v___x_1878_; 
v_construct_1877_ = lean_ctor_get_uint8(v_b_1825_, sizeof(void*)*4);
v___x_1878_ = lean_uint64_lor(v___x_1874_, v___y_1876_);
if (v_construct_1877_ == 0)
{
uint64_t v___x_1879_; 
v___x_1879_ = 0ULL;
v___y_1830_ = v___x_1878_;
v___y_1831_ = v___x_1879_;
goto v___jp_1829_;
}
else
{
uint64_t v___x_1880_; 
v___x_1880_ = 4ULL;
v___y_1830_ = v___x_1878_;
v___y_1831_ = v___x_1880_;
goto v___jp_1829_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1___boxed(lean_object* v_b_1883_, lean_object* v_args_1884_, lean_object* v_await_1885_, lean_object* v_a_1886_){
_start:
{
uint8_t v_await_boxed_1887_; lean_object* v_res_1888_; 
v_await_boxed_1887_ = lean_unbox(v_await_1885_);
v_res_1888_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v_b_1883_, v_args_1884_, v_await_boxed_1887_);
lean_dec_ref(v_b_1883_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new(lean_object* v_init_1897_){
_start:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; uint8_t v___x_1905_; lean_object* v___x_1906_; 
v___x_1899_ = lean_unsigned_to_nat(1u);
v___x_1900_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_new___closed__2));
v___x_1901_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(v_init_1897_);
v___x_1902_ = lean_mk_empty_array_with_capacity(v___x_1899_);
v___x_1903_ = lean_array_push(v___x_1902_, v___x_1901_);
v___x_1904_ = l_Lasm_JS_Web_Support_args(v___x_1903_);
v___x_1905_ = 0;
v___x_1906_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v___x_1900_, v___x_1904_, v___x_1905_);
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new___boxed(lean_object* v_init_1907_, lean_object* v_a_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l_Lasm_JS_Web_URLSearchParams_new(v_init_1907_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size(lean_object* v_self_1911_){
_start:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1913_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_size___closed__0));
v___x_1914_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(v_self_1911_, v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size___boxed(lean_object* v_self_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lasm_JS_Web_URLSearchParams_size(v_self_1915_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString(lean_object* v_self_1918_){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1920_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__0));
v___x_1921_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1922_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1918_, v___x_1920_, v___x_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString___boxed(lean_object* v_self_1923_, lean_object* v_a_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_Lasm_JS_Web_URLSearchParams_toString(v_self_1923_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append(lean_object* v_self_1927_, lean_object* v_name_1928_, lean_object* v_value_1929_){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1931_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_append___closed__0));
v___x_1932_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1932_, 0, v_name_1928_);
v___x_1933_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1933_, 0, v_value_1929_);
v___x_1934_ = lean_unsigned_to_nat(2u);
v___x_1935_ = lean_mk_empty_array_with_capacity(v___x_1934_);
v___x_1936_ = lean_array_push(v___x_1935_, v___x_1932_);
v___x_1937_ = lean_array_push(v___x_1936_, v___x_1933_);
v___x_1938_ = l_Lasm_JS_Web_Support_args(v___x_1937_);
v___x_1939_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1927_, v___x_1931_, v___x_1938_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append___boxed(lean_object* v_self_1940_, lean_object* v_name_1941_, lean_object* v_value_1942_, lean_object* v_a_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l_Lasm_JS_Web_URLSearchParams_append(v_self_1940_, v_name_1941_, v_value_1942_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete(lean_object* v_self_1946_, lean_object* v_name_1947_, lean_object* v_value_1948_){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1950_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_delete___closed__0));
v___x_1951_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1951_, 0, v_name_1947_);
v___x_1952_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_1948_);
v___x_1953_ = lean_unsigned_to_nat(2u);
v___x_1954_ = lean_mk_empty_array_with_capacity(v___x_1953_);
v___x_1955_ = lean_array_push(v___x_1954_, v___x_1951_);
v___x_1956_ = lean_array_push(v___x_1955_, v___x_1952_);
v___x_1957_ = l_Lasm_JS_Web_Support_args(v___x_1956_);
v___x_1958_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1946_, v___x_1950_, v___x_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete___boxed(lean_object* v_self_1959_, lean_object* v_name_1960_, lean_object* v_value_1961_, lean_object* v_a_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lasm_JS_Web_URLSearchParams_delete(v_self_1959_, v_name_1960_, v_value_1961_);
return v_res_1963_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(uint8_t v_await_1964_, uint64_t v_extra_1965_){
_start:
{
uint64_t v___x_1966_; uint64_t v___y_1968_; 
v___x_1966_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1964_ == 0)
{
uint64_t v___x_1971_; 
v___x_1971_ = 0ULL;
v___y_1968_ = v___x_1971_;
goto v___jp_1967_;
}
else
{
uint64_t v___x_1972_; 
v___x_1972_ = 2ULL;
v___y_1968_ = v___x_1972_;
goto v___jp_1967_;
}
v___jp_1967_:
{
uint64_t v___x_1969_; uint64_t v___x_1970_; 
v___x_1969_ = lean_uint64_lor(v___x_1966_, v___y_1968_);
v___x_1970_ = lean_uint64_lor(v___x_1969_, v_extra_1965_);
return v___x_1970_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0___boxed(lean_object* v_await_1973_, lean_object* v_extra_1974_){
_start:
{
uint8_t v_await_boxed_1975_; uint64_t v_extra_boxed_1976_; uint64_t v_res_1977_; lean_object* v_r_1978_; 
v_await_boxed_1975_ = lean_unbox(v_await_1973_);
v_extra_boxed_1976_ = lean_unbox_uint64(v_extra_1974_);
lean_dec_ref(v_extra_1974_);
v_res_1977_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v_await_boxed_1975_, v_extra_boxed_1976_);
v_r_1978_ = lean_box_uint64(v_res_1977_);
return v_r_1978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(lean_object* v_context_1980_, lean_object* v_d_1981_){
_start:
{
lean_object* v___y_1987_; lean_object* v___y_1988_; 
switch(lean_obj_tag(v_d_1981_))
{
case 1:
{
goto v___jp_1983_;
}
case 0:
{
goto v___jp_1983_;
}
default: 
{
if (lean_obj_tag(v_d_1981_) == 4)
{
lean_object* v_s_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v_s_1992_ = lean_ctor_get(v_d_1981_, 0);
lean_inc_ref(v_s_1992_);
lean_dec_ref_known(v_d_1981_, 1);
v___x_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1993_, 0, v_s_1992_);
v___x_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
return v___x_1994_;
}
else
{
lean_object* v___x_1995_; lean_object* v_received_1997_; 
v___x_1995_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1981_) == 9)
{
lean_object* v_value_2011_; lean_object* v_description_2012_; uint8_t v___x_2013_; 
v_value_2011_ = lean_ctor_get(v_d_1981_, 0);
v_description_2012_ = lean_ctor_get(v_d_1981_, 1);
v___x_2013_ = lean_string_dec_eq(v_description_2012_, v___x_1995_);
if (v___x_2013_ == 0)
{
goto v___jp_2009_;
}
else
{
uint32_t v___x_2014_; uint64_t v___x_2015_; lean_object* v___x_2016_; uint32_t v___x_2017_; lean_object* v___x_2018_; 
lean_inc_n(v_value_2011_, 2);
lean_dec_ref_known(v_d_1981_, 2);
v___x_2014_ = 206;
v___x_2015_ = 0ULL;
v___x_2016_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2016_, 0, v_value_2011_);
lean_ctor_set(v___x_2016_, 1, v___x_1995_);
v___x_2017_ = lasm_js_value_handle(v_value_2011_);
lean_dec(v_value_2011_);
v___x_2018_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2014_, v___x_2015_, v___x_2016_, v___x_2017_);
lean_dec_ref_known(v___x_2016_, 2);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; uint8_t v___x_2020_; 
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2019_);
lean_dec_ref_known(v___x_2018_, 1);
v___x_2020_ = lean_string_validate_utf8(v_a_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
lean_dec(v_a_2019_);
v___x_2021_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2022_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2021_);
v_received_1997_ = v___x_2022_;
goto v___jp_1996_;
}
else
{
lean_object* v___x_2023_; 
v___x_2023_ = lean_string_from_utf8_unchecked(v_a_2019_);
v_received_1997_ = v___x_2023_;
goto v___jp_1996_;
}
}
else
{
lean_object* v___x_2024_; 
lean_dec_ref_known(v___x_2018_, 1);
v___x_2024_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1997_ = v___x_2024_;
goto v___jp_1996_;
}
}
}
else
{
goto v___jp_2009_;
}
v___jp_1996_:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; uint8_t v___x_2007_; 
v___x_1998_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1999_ = lean_string_append(v___x_1998_, v_context_1980_);
v___x_2000_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2001_ = lean_string_append(v___x_1999_, v___x_2000_);
v___x_2002_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_2003_ = lean_string_append(v___x_2001_, v___x_2002_);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2005_ = lean_string_append(v___x_2003_, v___x_2004_);
v___x_2006_ = lean_string_append(v___x_2005_, v_received_1997_);
lean_dec_ref(v_received_1997_);
v___x_2007_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_2007_ == 0)
{
lean_object* v___x_2008_; 
v___x_2008_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1987_ = v___x_2006_;
v___y_1988_ = v___x_2008_;
goto v___jp_1986_;
}
else
{
v___y_1987_ = v___x_2006_;
v___y_1988_ = v___x_1995_;
goto v___jp_1986_;
}
}
v___jp_2009_:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Lasm_JS_Data_describe(v_d_1981_);
v_received_1997_ = v___x_2010_;
goto v___jp_1996_;
}
}
}
}
v___jp_1983_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = lean_box(0);
v___x_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
return v___x_1985_;
}
v___jp_1986_:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1989_ = lean_string_append(v___y_1987_, v___y_1988_);
v___x_1990_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1989_);
v___x_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1990_);
return v___x_1991_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2025_, lean_object* v_d_2026_, lean_object* v_a_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_2025_, v_d_2026_);
lean_dec_ref(v_context_2025_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object* v_context_2029_, lean_object* v_bytes_2030_){
_start:
{
lean_object* v___x_2032_; 
v___x_2032_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2030_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2033_; lean_object* v___x_2034_; 
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_a_2033_);
lean_dec_ref_known(v___x_2032_, 1);
v___x_2034_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_2029_, v_a_2033_);
return v___x_2034_;
}
else
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
v_a_2035_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2037_ = v___x_2032_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_2032_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1___boxed(lean_object* v_context_2043_, lean_object* v_bytes_2044_, lean_object* v_a_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v_context_2043_, v_bytes_2044_);
lean_dec_ref(v_bytes_2044_);
lean_dec_ref(v_context_2043_);
return v_res_2046_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2047_; uint8_t v___x_2048_; uint64_t v___x_2049_; 
v___x_2047_ = 8ULL;
v___x_2048_ = 0;
v___x_2049_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v___x_2048_, v___x_2047_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(lean_object* v_o_2050_, lean_object* v_name_2051_, lean_object* v_args_2052_){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; uint64_t v___x_2057_; lean_object* v___x_2058_; 
v___x_2054_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2055_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2055_, 0, v_o_2050_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
lean_inc_ref(v_name_2051_);
v___x_2056_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2056_, 0, v_name_2051_);
v___x_2057_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0);
v___x_2058_ = l_Lasm_JS_Value_invokeRaw(v___x_2055_, v___x_2056_, v_args_2052_, v___x_2057_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2059_);
lean_dec_ref_known(v___x_2058_, 1);
v___x_2060_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_2061_ = lean_string_append(v___x_2060_, v_name_2051_);
lean_dec_ref(v_name_2051_);
v___x_2062_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_2061_, v_a_2059_);
lean_dec(v_a_2059_);
lean_dec_ref(v___x_2061_);
return v___x_2062_;
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec_ref(v_name_2051_);
v_a_2063_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2058_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2058_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___boxed(lean_object* v_o_2071_, lean_object* v_name_2072_, lean_object* v_args_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_o_2071_, v_name_2072_, v_args_2073_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get(lean_object* v_self_2077_, lean_object* v_name_2078_){
_start:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2080_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_get___closed__0));
v___x_2081_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2081_, 0, v_name_2078_);
v___x_2082_ = lean_unsigned_to_nat(1u);
v___x_2083_ = lean_mk_empty_array_with_capacity(v___x_2082_);
v___x_2084_ = lean_array_push(v___x_2083_, v___x_2081_);
v___x_2085_ = l_Lasm_JS_Web_Support_args(v___x_2084_);
v___x_2086_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_self_2077_, v___x_2080_, v___x_2085_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get___boxed(lean_object* v_self_2087_, lean_object* v_name_2088_, lean_object* v_a_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Lasm_JS_Web_URLSearchParams_get(v_self_2087_, v_name_2088_);
return v_res_2090_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(uint8_t v_await_2091_, uint64_t v_extra_2092_){
_start:
{
uint64_t v___x_2093_; uint64_t v___y_2095_; 
v___x_2093_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2091_ == 0)
{
uint64_t v___x_2098_; 
v___x_2098_ = 0ULL;
v___y_2095_ = v___x_2098_;
goto v___jp_2094_;
}
else
{
uint64_t v___x_2099_; 
v___x_2099_ = 2ULL;
v___y_2095_ = v___x_2099_;
goto v___jp_2094_;
}
v___jp_2094_:
{
uint64_t v___x_2096_; uint64_t v___x_2097_; 
v___x_2096_ = lean_uint64_lor(v___x_2093_, v___y_2095_);
v___x_2097_ = lean_uint64_lor(v___x_2096_, v_extra_2092_);
return v___x_2097_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0___boxed(lean_object* v_await_2100_, lean_object* v_extra_2101_){
_start:
{
uint8_t v_await_boxed_2102_; uint64_t v_extra_boxed_2103_; uint64_t v_res_2104_; lean_object* v_r_2105_; 
v_await_boxed_2102_ = lean_unbox(v_await_2100_);
v_extra_boxed_2103_ = lean_unbox_uint64(v_extra_2101_);
lean_dec_ref(v_extra_2101_);
v_res_2104_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v_await_boxed_2102_, v_extra_boxed_2103_);
v_r_2105_ = lean_box_uint64(v_res_2104_);
return v_r_2105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2108_, size_t v_i_2109_, lean_object* v_bs_2110_){
_start:
{
uint8_t v___x_2111_; 
v___x_2111_ = lean_usize_dec_lt(v_i_2109_, v_sz_2108_);
if (v___x_2111_ == 0)
{
lean_object* v___x_2112_; 
v___x_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2112_, 0, v_bs_2110_);
return v___x_2112_;
}
else
{
lean_object* v_v_2113_; 
v_v_2113_ = lean_array_uget_borrowed(v_bs_2110_, v_i_2109_);
if (lean_obj_tag(v_v_2113_) == 4)
{
lean_object* v_s_2114_; lean_object* v___x_2115_; lean_object* v_bs_x27_2116_; size_t v___x_2117_; size_t v___x_2118_; lean_object* v___x_2119_; 
v_s_2114_ = lean_ctor_get(v_v_2113_, 0);
lean_inc_ref(v_s_2114_);
v___x_2115_ = lean_unsigned_to_nat(0u);
v_bs_x27_2116_ = lean_array_uset(v_bs_2110_, v_i_2109_, v___x_2115_);
v___x_2117_ = ((size_t)1ULL);
v___x_2118_ = lean_usize_add(v_i_2109_, v___x_2117_);
v___x_2119_ = lean_array_uset(v_bs_x27_2116_, v_i_2109_, v_s_2114_);
v_i_2109_ = v___x_2118_;
v_bs_2110_ = v___x_2119_;
goto _start;
}
else
{
lean_object* v___x_2121_; 
lean_dec_ref(v_bs_2110_);
v___x_2121_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2121_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2122_, lean_object* v_i_2123_, lean_object* v_bs_2124_){
_start:
{
size_t v_sz_boxed_2125_; size_t v_i_boxed_2126_; lean_object* v_res_2127_; 
v_sz_boxed_2125_ = lean_unbox_usize(v_sz_2122_);
lean_dec(v_sz_2122_);
v_i_boxed_2126_ = lean_unbox_usize(v_i_2123_);
lean_dec(v_i_2123_);
v_res_2127_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2125_, v_i_boxed_2126_, v_bs_2124_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(lean_object* v_context_2132_, lean_object* v_d_2133_){
_start:
{
lean_object* v___y_2136_; lean_object* v___y_2137_; lean_object* v___y_2142_; lean_object* v_received_2143_; lean_object* v___y_2162_; lean_object* v_a_2165_; 
if (lean_obj_tag(v_d_2133_) == 7)
{
lean_object* v_items_2189_; size_t v_sz_2190_; size_t v___x_2191_; lean_object* v___x_2192_; 
v_items_2189_ = lean_ctor_get(v_d_2133_, 0);
v_sz_2190_ = lean_array_size(v_items_2189_);
v___x_2191_ = ((size_t)0ULL);
lean_inc_ref(v_items_2189_);
v___x_2192_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_2190_, v___x_2191_, v_items_2189_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; uint8_t v___x_2197_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2193_);
lean_dec_ref_known(v___x_2192_, 1);
v___x_2194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__3));
v___x_2195_ = lean_string_utf8_byte_size(v_a_2193_);
v___x_2196_ = lean_unsigned_to_nat(0u);
v___x_2197_ = lean_nat_dec_eq(v___x_2195_, v___x_2196_);
if (v___x_2197_ == 0)
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2198_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2199_ = lean_string_append(v___x_2198_, v_a_2193_);
lean_dec(v_a_2193_);
v___x_2200_ = lean_string_append(v___x_2194_, v___x_2199_);
lean_dec_ref(v___x_2199_);
v_a_2165_ = v___x_2200_;
goto v___jp_2164_;
}
else
{
lean_dec(v_a_2193_);
v_a_2165_ = v___x_2194_;
goto v___jp_2164_;
}
}
else
{
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2201_; 
v_a_2201_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2192_, 1);
v_a_2165_ = v_a_2201_;
goto v___jp_2164_;
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
lean_dec_ref_known(v_d_2133_, 1);
v_a_2202_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2192_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2192_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
lean_ctor_set_tag(v___x_2204_, 0);
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
else
{
lean_object* v___x_2210_; 
v___x_2210_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2165_ = v___x_2210_;
goto v___jp_2164_;
}
v___jp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2138_ = lean_string_append(v___y_2136_, v___y_2137_);
lean_dec_ref(v___y_2137_);
v___x_2139_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
v___x_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
return v___x_2140_;
}
v___jp_2141_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; uint8_t v___x_2155_; 
v___x_2144_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2145_ = lean_string_append(v___x_2144_, v_context_2132_);
v___x_2146_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2147_ = lean_string_append(v___x_2145_, v___x_2146_);
v___x_2148_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__0));
v___x_2149_ = lean_string_append(v___x_2147_, v___x_2148_);
v___x_2150_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2151_ = lean_string_append(v___x_2149_, v___x_2150_);
v___x_2152_ = lean_string_append(v___x_2151_, v_received_2143_);
lean_dec_ref(v_received_2143_);
v___x_2153_ = lean_string_utf8_byte_size(v___y_2142_);
v___x_2154_ = lean_unsigned_to_nat(0u);
v___x_2155_ = lean_nat_dec_eq(v___x_2153_, v___x_2154_);
if (v___x_2155_ == 0)
{
lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2156_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2157_ = lean_string_append(v___x_2156_, v___y_2142_);
lean_dec_ref(v___y_2142_);
v___x_2158_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2159_ = lean_string_append(v___x_2157_, v___x_2158_);
v___y_2136_ = v___x_2152_;
v___y_2137_ = v___x_2159_;
goto v___jp_2135_;
}
else
{
lean_object* v___x_2160_; 
lean_dec_ref(v___y_2142_);
v___x_2160_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2136_ = v___x_2152_;
v___y_2137_ = v___x_2160_;
goto v___jp_2135_;
}
}
v___jp_2161_:
{
lean_object* v___x_2163_; 
v___x_2163_ = l_Lasm_JS_Data_describe(v_d_2133_);
v___y_2142_ = v___y_2162_;
v_received_2143_ = v___x_2163_;
goto v___jp_2141_;
}
v___jp_2164_:
{
if (lean_obj_tag(v_d_2133_) == 9)
{
lean_object* v_value_2166_; lean_object* v_description_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; 
v_value_2166_ = lean_ctor_get(v_d_2133_, 0);
v_description_2167_ = lean_ctor_get(v_d_2133_, 1);
v___x_2168_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2169_ = lean_string_dec_eq(v_description_2167_, v___x_2168_);
if (v___x_2169_ == 0)
{
v___y_2162_ = v_a_2165_;
goto v___jp_2161_;
}
else
{
lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2186_; 
lean_inc(v_value_2166_);
v_isSharedCheck_2186_ = !lean_is_exclusive(v_d_2133_);
if (v_isSharedCheck_2186_ == 0)
{
lean_object* v_unused_2187_; lean_object* v_unused_2188_; 
v_unused_2187_ = lean_ctor_get(v_d_2133_, 1);
lean_dec(v_unused_2187_);
v_unused_2188_ = lean_ctor_get(v_d_2133_, 0);
lean_dec(v_unused_2188_);
v___x_2171_ = v_d_2133_;
v_isShared_2172_ = v_isSharedCheck_2186_;
goto v_resetjp_2170_;
}
else
{
lean_dec(v_d_2133_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2186_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
uint32_t v___x_2173_; uint64_t v___x_2174_; lean_object* v___x_2176_; 
v___x_2173_ = 206;
v___x_2174_ = 0ULL;
lean_inc(v_value_2166_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 1, v___x_2168_);
v___x_2176_ = v___x_2171_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_value_2166_);
lean_ctor_set(v_reuseFailAlloc_2185_, 1, v___x_2168_);
v___x_2176_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
uint32_t v___x_2177_; lean_object* v___x_2178_; 
v___x_2177_ = lasm_js_value_handle(v_value_2166_);
lean_dec(v_value_2166_);
v___x_2178_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2173_, v___x_2174_, v___x_2176_, v___x_2177_);
lean_dec_ref(v___x_2176_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; uint8_t v___x_2180_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_a_2179_);
lean_dec_ref_known(v___x_2178_, 1);
v___x_2180_ = lean_string_validate_utf8(v_a_2179_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
lean_dec(v_a_2179_);
v___x_2181_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2182_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2181_);
v___y_2142_ = v_a_2165_;
v_received_2143_ = v___x_2182_;
goto v___jp_2141_;
}
else
{
lean_object* v___x_2183_; 
v___x_2183_ = lean_string_from_utf8_unchecked(v_a_2179_);
v___y_2142_ = v_a_2165_;
v_received_2143_ = v___x_2183_;
goto v___jp_2141_;
}
}
else
{
lean_object* v___x_2184_; 
lean_dec_ref_known(v___x_2178_, 1);
v___x_2184_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_2142_ = v_a_2165_;
v_received_2143_ = v___x_2184_;
goto v___jp_2141_;
}
}
}
}
}
else
{
v___y_2162_ = v_a_2165_;
goto v___jp_2161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2211_, lean_object* v_d_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2211_, v_d_2212_);
lean_dec_ref(v_context_2211_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(lean_object* v_context_2215_, lean_object* v_bytes_2216_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2216_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v___x_2220_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
lean_inc(v_a_2219_);
lean_dec_ref_known(v___x_2218_, 1);
v___x_2220_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2215_, v_a_2219_);
return v___x_2220_;
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
v_a_2221_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_2218_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2218_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1___boxed(lean_object* v_context_2229_, lean_object* v_bytes_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v_context_2229_, v_bytes_2230_);
lean_dec_ref(v_bytes_2230_);
lean_dec_ref(v_context_2229_);
return v_res_2232_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2233_; uint8_t v___x_2234_; uint64_t v___x_2235_; 
v___x_2233_ = 8ULL;
v___x_2234_ = 0;
v___x_2235_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v___x_2234_, v___x_2233_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(lean_object* v_o_2236_, lean_object* v_name_2237_, lean_object* v_args_2238_){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; uint64_t v___x_2243_; lean_object* v___x_2244_; 
v___x_2240_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2241_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2241_, 0, v_o_2236_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
lean_inc_ref(v_name_2237_);
v___x_2242_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2242_, 0, v_name_2237_);
v___x_2243_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0);
v___x_2244_ = l_Lasm_JS_Value_invokeRaw(v___x_2241_, v___x_2242_, v_args_2238_, v___x_2243_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
v___x_2246_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_2247_ = lean_string_append(v___x_2246_, v_name_2237_);
lean_dec_ref(v_name_2237_);
v___x_2248_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v___x_2247_, v_a_2245_);
lean_dec(v_a_2245_);
lean_dec_ref(v___x_2247_);
return v___x_2248_;
}
else
{
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2256_; 
lean_dec_ref(v_name_2237_);
v_a_2249_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2251_ = v___x_2244_;
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2244_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2252_ == 0)
{
v___x_2254_ = v___x_2251_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_a_2249_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___boxed(lean_object* v_o_2257_, lean_object* v_name_2258_, lean_object* v_args_2259_, lean_object* v_a_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_o_2257_, v_name_2258_, v_args_2259_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll(lean_object* v_self_2263_, lean_object* v_name_2264_){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2266_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_getAll___closed__0));
v___x_2267_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2267_, 0, v_name_2264_);
v___x_2268_ = lean_unsigned_to_nat(1u);
v___x_2269_ = lean_mk_empty_array_with_capacity(v___x_2268_);
v___x_2270_ = lean_array_push(v___x_2269_, v___x_2267_);
v___x_2271_ = l_Lasm_JS_Web_Support_args(v___x_2270_);
v___x_2272_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_self_2263_, v___x_2266_, v___x_2271_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll___boxed(lean_object* v_self_2273_, lean_object* v_name_2274_, lean_object* v_a_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lasm_JS_Web_URLSearchParams_getAll(v_self_2273_, v_name_2274_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has(lean_object* v_self_2278_, lean_object* v_name_2279_, lean_object* v_value_2280_){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2282_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_has___closed__0));
v___x_2283_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2283_, 0, v_name_2279_);
v___x_2284_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_2280_);
v___x_2285_ = lean_unsigned_to_nat(2u);
v___x_2286_ = lean_mk_empty_array_with_capacity(v___x_2285_);
v___x_2287_ = lean_array_push(v___x_2286_, v___x_2283_);
v___x_2288_ = lean_array_push(v___x_2287_, v___x_2284_);
v___x_2289_ = l_Lasm_JS_Web_Support_args(v___x_2288_);
v___x_2290_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2278_, v___x_2282_, v___x_2289_);
return v___x_2290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has___boxed(lean_object* v_self_2291_, lean_object* v_name_2292_, lean_object* v_value_2293_, lean_object* v_a_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_Lasm_JS_Web_URLSearchParams_has(v_self_2291_, v_name_2292_, v_value_2293_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set(lean_object* v_self_2297_, lean_object* v_name_2298_, lean_object* v_value_2299_){
_start:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2301_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_set___closed__0));
v___x_2302_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2302_, 0, v_name_2298_);
v___x_2303_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2303_, 0, v_value_2299_);
v___x_2304_ = lean_unsigned_to_nat(2u);
v___x_2305_ = lean_mk_empty_array_with_capacity(v___x_2304_);
v___x_2306_ = lean_array_push(v___x_2305_, v___x_2302_);
v___x_2307_ = lean_array_push(v___x_2306_, v___x_2303_);
v___x_2308_ = l_Lasm_JS_Web_Support_args(v___x_2307_);
v___x_2309_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2297_, v___x_2301_, v___x_2308_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set___boxed(lean_object* v_self_2310_, lean_object* v_name_2311_, lean_object* v_value_2312_, lean_object* v_a_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lasm_JS_Web_URLSearchParams_set(v_self_2310_, v_name_2311_, v_value_2312_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort(lean_object* v_self_2316_){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2318_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_sort___closed__0));
v___x_2319_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_2320_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2316_, v___x_2318_, v___x_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort___boxed(lean_object* v_self_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lasm_JS_Web_URLSearchParams_sort(v_self_2321_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(size_t v_sz_2327_, size_t v_i_2328_, lean_object* v_bs_2329_){
_start:
{
uint8_t v___x_2332_; 
v___x_2332_ = lean_usize_dec_lt(v_i_2328_, v_sz_2327_);
if (v___x_2332_ == 0)
{
lean_object* v___x_2333_; 
v___x_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2333_, 0, v_bs_2329_);
return v___x_2333_;
}
else
{
lean_object* v_v_2334_; 
v_v_2334_ = lean_array_uget_borrowed(v_bs_2329_, v_i_2328_);
if (lean_obj_tag(v_v_2334_) == 7)
{
lean_object* v_items_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; uint8_t v___x_2338_; 
v_items_2335_ = lean_ctor_get(v_v_2334_, 0);
v___x_2336_ = lean_array_get_size(v_items_2335_);
v___x_2337_ = lean_unsigned_to_nat(2u);
v___x_2338_ = lean_nat_dec_eq(v___x_2336_, v___x_2337_);
if (v___x_2338_ == 0)
{
lean_dec_ref(v_bs_2329_);
goto v___jp_2330_;
}
else
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = lean_unsigned_to_nat(0u);
v___x_2340_ = lean_array_fget_borrowed(v_items_2335_, v___x_2339_);
if (lean_obj_tag(v___x_2340_) == 4)
{
lean_object* v_s_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v_s_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc_ref(v_s_2341_);
v___x_2342_ = lean_unsigned_to_nat(1u);
v___x_2343_ = lean_array_fget_borrowed(v_items_2335_, v___x_2342_);
if (lean_obj_tag(v___x_2343_) == 4)
{
lean_object* v_s_2344_; lean_object* v_bs_x27_2345_; lean_object* v___x_2346_; size_t v___x_2347_; size_t v___x_2348_; lean_object* v___x_2349_; 
v_s_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc_ref(v_s_2344_);
v_bs_x27_2345_ = lean_array_uset(v_bs_2329_, v_i_2328_, v___x_2339_);
v___x_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2346_, 0, v_s_2341_);
lean_ctor_set(v___x_2346_, 1, v_s_2344_);
v___x_2347_ = ((size_t)1ULL);
v___x_2348_ = lean_usize_add(v_i_2328_, v___x_2347_);
v___x_2349_ = lean_array_uset(v_bs_x27_2345_, v_i_2328_, v___x_2346_);
v_i_2328_ = v___x_2348_;
v_bs_2329_ = v___x_2349_;
goto _start;
}
else
{
lean_object* v___x_2351_; 
lean_dec_ref(v_s_2341_);
lean_dec_ref(v_bs_2329_);
v___x_2351_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2351_;
}
}
else
{
lean_object* v___x_2352_; 
lean_dec_ref(v_bs_2329_);
v___x_2352_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2352_;
}
}
}
else
{
lean_dec_ref(v_bs_2329_);
goto v___jp_2330_;
}
}
v___jp_2330_:
{
lean_object* v___x_2331_; 
v___x_2331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__1));
return v___x_2331_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2353_, lean_object* v_i_2354_, lean_object* v_bs_2355_){
_start:
{
size_t v_sz_boxed_2356_; size_t v_i_boxed_2357_; lean_object* v_res_2358_; 
v_sz_boxed_2356_ = lean_unbox_usize(v_sz_2353_);
lean_dec(v_sz_2353_);
v_i_boxed_2357_ = lean_unbox_usize(v_i_2354_);
lean_dec(v_i_2354_);
v_res_2358_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_2356_, v_i_boxed_2357_, v_bs_2355_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(lean_object* v_context_2361_, lean_object* v_d_2362_){
_start:
{
lean_object* v___y_2365_; lean_object* v___y_2366_; lean_object* v___y_2371_; lean_object* v_received_2372_; lean_object* v___y_2391_; lean_object* v_a_2394_; 
if (lean_obj_tag(v_d_2362_) == 7)
{
lean_object* v_items_2418_; size_t v_sz_2419_; size_t v___x_2420_; lean_object* v___x_2421_; 
v_items_2418_ = lean_ctor_get(v_d_2362_, 0);
v_sz_2419_ = lean_array_size(v_items_2418_);
v___x_2420_ = ((size_t)0ULL);
lean_inc_ref(v_items_2418_);
v___x_2421_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_2419_, v___x_2420_, v_items_2418_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_object* v_a_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; uint8_t v___x_2426_; 
v_a_2422_ = lean_ctor_get(v___x_2421_, 0);
lean_inc(v_a_2422_);
lean_dec_ref_known(v___x_2421_, 1);
v___x_2423_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__1));
v___x_2424_ = lean_string_utf8_byte_size(v_a_2422_);
v___x_2425_ = lean_unsigned_to_nat(0u);
v___x_2426_ = lean_nat_dec_eq(v___x_2424_, v___x_2425_);
if (v___x_2426_ == 0)
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2427_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2428_ = lean_string_append(v___x_2427_, v_a_2422_);
lean_dec(v_a_2422_);
v___x_2429_ = lean_string_append(v___x_2423_, v___x_2428_);
lean_dec_ref(v___x_2428_);
v_a_2394_ = v___x_2429_;
goto v___jp_2393_;
}
else
{
lean_dec(v_a_2422_);
v_a_2394_ = v___x_2423_;
goto v___jp_2393_;
}
}
else
{
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_object* v_a_2430_; 
v_a_2430_ = lean_ctor_get(v___x_2421_, 0);
lean_inc(v_a_2430_);
lean_dec_ref_known(v___x_2421_, 1);
v_a_2394_ = v_a_2430_;
goto v___jp_2393_;
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2438_; 
lean_dec_ref_known(v_d_2362_, 1);
v_a_2431_ = lean_ctor_get(v___x_2421_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2433_ = v___x_2421_;
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2421_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2436_; 
if (v_isShared_2434_ == 0)
{
lean_ctor_set_tag(v___x_2433_, 0);
v___x_2436_ = v___x_2433_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2431_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
}
else
{
lean_object* v___x_2439_; 
v___x_2439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2394_ = v___x_2439_;
goto v___jp_2393_;
}
v___jp_2364_:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2367_ = lean_string_append(v___y_2365_, v___y_2366_);
lean_dec_ref(v___y_2366_);
v___x_2368_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2367_);
v___x_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2368_);
return v___x_2369_;
}
v___jp_2370_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; uint8_t v___x_2384_; 
v___x_2373_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2374_ = lean_string_append(v___x_2373_, v_context_2361_);
v___x_2375_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2376_ = lean_string_append(v___x_2374_, v___x_2375_);
v___x_2377_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__0));
v___x_2378_ = lean_string_append(v___x_2376_, v___x_2377_);
v___x_2379_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2380_ = lean_string_append(v___x_2378_, v___x_2379_);
v___x_2381_ = lean_string_append(v___x_2380_, v_received_2372_);
lean_dec_ref(v_received_2372_);
v___x_2382_ = lean_string_utf8_byte_size(v___y_2371_);
v___x_2383_ = lean_unsigned_to_nat(0u);
v___x_2384_ = lean_nat_dec_eq(v___x_2382_, v___x_2383_);
if (v___x_2384_ == 0)
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2385_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2386_ = lean_string_append(v___x_2385_, v___y_2371_);
lean_dec_ref(v___y_2371_);
v___x_2387_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2388_ = lean_string_append(v___x_2386_, v___x_2387_);
v___y_2365_ = v___x_2381_;
v___y_2366_ = v___x_2388_;
goto v___jp_2364_;
}
else
{
lean_object* v___x_2389_; 
lean_dec_ref(v___y_2371_);
v___x_2389_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2365_ = v___x_2381_;
v___y_2366_ = v___x_2389_;
goto v___jp_2364_;
}
}
v___jp_2390_:
{
lean_object* v___x_2392_; 
v___x_2392_ = l_Lasm_JS_Data_describe(v_d_2362_);
v___y_2371_ = v___y_2391_;
v_received_2372_ = v___x_2392_;
goto v___jp_2370_;
}
v___jp_2393_:
{
if (lean_obj_tag(v_d_2362_) == 9)
{
lean_object* v_value_2395_; lean_object* v_description_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; 
v_value_2395_ = lean_ctor_get(v_d_2362_, 0);
v_description_2396_ = lean_ctor_get(v_d_2362_, 1);
v___x_2397_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2398_ = lean_string_dec_eq(v_description_2396_, v___x_2397_);
if (v___x_2398_ == 0)
{
v___y_2391_ = v_a_2394_;
goto v___jp_2390_;
}
else
{
lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2415_; 
lean_inc(v_value_2395_);
v_isSharedCheck_2415_ = !lean_is_exclusive(v_d_2362_);
if (v_isSharedCheck_2415_ == 0)
{
lean_object* v_unused_2416_; lean_object* v_unused_2417_; 
v_unused_2416_ = lean_ctor_get(v_d_2362_, 1);
lean_dec(v_unused_2416_);
v_unused_2417_ = lean_ctor_get(v_d_2362_, 0);
lean_dec(v_unused_2417_);
v___x_2400_ = v_d_2362_;
v_isShared_2401_ = v_isSharedCheck_2415_;
goto v_resetjp_2399_;
}
else
{
lean_dec(v_d_2362_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2415_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
uint32_t v___x_2402_; uint64_t v___x_2403_; lean_object* v___x_2405_; 
v___x_2402_ = 206;
v___x_2403_ = 0ULL;
lean_inc(v_value_2395_);
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 1, v___x_2397_);
v___x_2405_ = v___x_2400_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_value_2395_);
lean_ctor_set(v_reuseFailAlloc_2414_, 1, v___x_2397_);
v___x_2405_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
uint32_t v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = lasm_js_value_handle(v_value_2395_);
lean_dec(v_value_2395_);
v___x_2407_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2402_, v___x_2403_, v___x_2405_, v___x_2406_);
lean_dec_ref(v___x_2405_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; uint8_t v___x_2409_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
v___x_2409_ = lean_string_validate_utf8(v_a_2408_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; lean_object* v___x_2411_; 
lean_dec(v_a_2408_);
v___x_2410_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2411_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2410_);
v___y_2371_ = v_a_2394_;
v_received_2372_ = v___x_2411_;
goto v___jp_2370_;
}
else
{
lean_object* v___x_2412_; 
v___x_2412_ = lean_string_from_utf8_unchecked(v_a_2408_);
v___y_2371_ = v_a_2394_;
v_received_2372_ = v___x_2412_;
goto v___jp_2370_;
}
}
else
{
lean_object* v___x_2413_; 
lean_dec_ref_known(v___x_2407_, 1);
v___x_2413_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_2371_ = v_a_2394_;
v_received_2372_ = v___x_2413_;
goto v___jp_2370_;
}
}
}
}
}
else
{
v___y_2391_ = v_a_2394_;
goto v___jp_2390_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2440_, lean_object* v_d_2441_, lean_object* v_a_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v_context_2440_, v_d_2441_);
lean_dec_ref(v_context_2440_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(lean_object* v_b_2444_, lean_object* v_args_2445_, uint8_t v_await_2446_){
_start:
{
uint64_t v___y_2449_; uint64_t v___y_2450_; uint64_t v___x_2493_; uint64_t v___y_2495_; 
v___x_2493_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2446_ == 0)
{
uint64_t v___x_2500_; 
v___x_2500_ = 0ULL;
v___y_2495_ = v___x_2500_;
goto v___jp_2494_;
}
else
{
uint64_t v___x_2501_; 
v___x_2501_ = 2ULL;
v___y_2495_ = v___x_2501_;
goto v___jp_2494_;
}
v___jp_2448_:
{
uint64_t v_flags_2451_; uint32_t v___x_2452_; lean_object* v___x_2453_; uint32_t v___x_2454_; lean_object* v___x_2455_; 
v_flags_2451_ = lean_uint64_lor(v___y_2449_, v___y_2450_);
v___x_2452_ = 214;
v___x_2453_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2444_, v_args_2445_);
v___x_2454_ = 0;
v___x_2455_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2452_, v_flags_2451_, v___x_2453_, v___x_2454_);
lean_dec(v___x_2453_);
if (lean_obj_tag(v___x_2455_) == 0)
{
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2457_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2456_);
lean_dec_ref_known(v___x_2455_, 1);
v___x_2457_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2456_);
lean_dec(v_a_2456_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___x_2457_, 1);
v___x_2459_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2444_);
v___x_2460_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v___x_2459_, v_a_2458_);
lean_dec_ref(v___x_2459_);
return v___x_2460_;
}
else
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2468_; 
v_a_2461_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2463_ = v___x_2457_;
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v___x_2457_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2466_; 
if (v_isShared_2464_ == 0)
{
v___x_2466_ = v___x_2463_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_a_2461_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
v_a_2469_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2455_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2455_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
lean_ctor_set_tag(v___x_2471_, 1);
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
else
{
lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2492_; 
v_a_2477_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2479_ = v___x_2455_;
v_isShared_2480_ = v_isSharedCheck_2492_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v___x_2455_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2492_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2490_; 
v___x_2481_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2482_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2444_);
v___x_2483_ = lean_string_append(v___x_2481_, v___x_2482_);
lean_dec_ref(v___x_2482_);
v___x_2484_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2485_ = lean_string_append(v___x_2483_, v___x_2484_);
v___x_2486_ = lean_io_error_to_string(v_a_2477_);
v___x_2487_ = lean_string_append(v___x_2485_, v___x_2486_);
lean_dec_ref(v___x_2486_);
v___x_2488_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2487_);
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 0, v___x_2488_);
v___x_2490_ = v___x_2479_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2488_);
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
v___jp_2494_:
{
uint8_t v_construct_2496_; uint64_t v___x_2497_; 
v_construct_2496_ = lean_ctor_get_uint8(v_b_2444_, sizeof(void*)*4);
v___x_2497_ = lean_uint64_lor(v___x_2493_, v___y_2495_);
if (v_construct_2496_ == 0)
{
uint64_t v___x_2498_; 
v___x_2498_ = 0ULL;
v___y_2449_ = v___x_2497_;
v___y_2450_ = v___x_2498_;
goto v___jp_2448_;
}
else
{
uint64_t v___x_2499_; 
v___x_2499_ = 4ULL;
v___y_2449_ = v___x_2497_;
v___y_2450_ = v___x_2499_;
goto v___jp_2448_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0___boxed(lean_object* v_b_2502_, lean_object* v_args_2503_, lean_object* v_await_2504_, lean_object* v_a_2505_){
_start:
{
uint8_t v_await_boxed_2506_; lean_object* v_res_2507_; 
v_await_boxed_2506_ = lean_unbox(v_await_2504_);
v_res_2507_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v_b_2502_, v_args_2503_, v_await_boxed_2506_);
lean_dec_ref(v_b_2502_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(lean_object* v_o_2516_, lean_object* v_method_2517_){
_start:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2519_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_2520_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2516_, v_method_2517_, v___x_2519_);
if (lean_obj_tag(v___x_2520_) == 0)
{
lean_object* v_a_2521_; uint8_t v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
v_a_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_a_2521_);
lean_dec_ref_known(v___x_2520_, 1);
v___x_2522_ = 0;
v___x_2523_ = lean_unsigned_to_nat(1u);
v___x_2524_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2));
v___x_2525_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2526_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2526_, 0, v_a_2521_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
v___x_2527_ = lean_mk_empty_array_with_capacity(v___x_2523_);
v___x_2528_ = lean_array_push(v___x_2527_, v___x_2526_);
v___x_2529_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v___x_2524_, v___x_2528_, v___x_2522_);
return v___x_2529_;
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
v_a_2530_ = lean_ctor_get(v___x_2520_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2520_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___x_2520_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2520_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2530_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___boxed(lean_object* v_o_2538_, lean_object* v_method_2539_, lean_object* v_a_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_o_2538_, v_method_2539_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries(lean_object* v_self_2543_){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2545_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_entries___closed__0));
v___x_2546_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_self_2543_, v___x_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries___boxed(lean_object* v_self_2547_, lean_object* v_a_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lasm_JS_Web_URLSearchParams_entries(v_self_2547_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(lean_object* v_b_2550_, lean_object* v_args_2551_, uint8_t v_await_2552_){
_start:
{
uint64_t v___y_2555_; uint64_t v___y_2556_; uint64_t v___x_2599_; uint64_t v___y_2601_; 
v___x_2599_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2552_ == 0)
{
uint64_t v___x_2606_; 
v___x_2606_ = 0ULL;
v___y_2601_ = v___x_2606_;
goto v___jp_2600_;
}
else
{
uint64_t v___x_2607_; 
v___x_2607_ = 2ULL;
v___y_2601_ = v___x_2607_;
goto v___jp_2600_;
}
v___jp_2554_:
{
uint64_t v_flags_2557_; uint32_t v___x_2558_; lean_object* v___x_2559_; uint32_t v___x_2560_; lean_object* v___x_2561_; 
v_flags_2557_ = lean_uint64_lor(v___y_2555_, v___y_2556_);
v___x_2558_ = 214;
v___x_2559_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2550_, v_args_2551_);
v___x_2560_ = 0;
v___x_2561_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2558_, v_flags_2557_, v___x_2559_, v___x_2560_);
lean_dec(v___x_2559_);
if (lean_obj_tag(v___x_2561_) == 0)
{
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_object* v_a_2562_; lean_object* v___x_2563_; 
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
lean_inc(v_a_2562_);
lean_dec_ref_known(v___x_2561_, 1);
v___x_2563_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2562_);
lean_dec(v_a_2562_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v___x_2565_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2550_);
v___x_2566_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v___x_2565_, v_a_2564_);
lean_dec_ref(v___x_2565_);
return v___x_2566_;
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
v_a_2567_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2563_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2563_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
v_a_2575_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2561_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2561_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
lean_ctor_set_tag(v___x_2577_, 1);
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2598_; 
v_a_2583_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2585_ = v___x_2561_;
v_isShared_2586_ = v_isSharedCheck_2598_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2561_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2598_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2596_; 
v___x_2587_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2588_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2550_);
v___x_2589_ = lean_string_append(v___x_2587_, v___x_2588_);
lean_dec_ref(v___x_2588_);
v___x_2590_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2591_ = lean_string_append(v___x_2589_, v___x_2590_);
v___x_2592_ = lean_io_error_to_string(v_a_2583_);
v___x_2593_ = lean_string_append(v___x_2591_, v___x_2592_);
lean_dec_ref(v___x_2592_);
v___x_2594_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
if (v_isShared_2586_ == 0)
{
lean_ctor_set(v___x_2585_, 0, v___x_2594_);
v___x_2596_ = v___x_2585_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
v___jp_2600_:
{
uint8_t v_construct_2602_; uint64_t v___x_2603_; 
v_construct_2602_ = lean_ctor_get_uint8(v_b_2550_, sizeof(void*)*4);
v___x_2603_ = lean_uint64_lor(v___x_2599_, v___y_2601_);
if (v_construct_2602_ == 0)
{
uint64_t v___x_2604_; 
v___x_2604_ = 0ULL;
v___y_2555_ = v___x_2603_;
v___y_2556_ = v___x_2604_;
goto v___jp_2554_;
}
else
{
uint64_t v___x_2605_; 
v___x_2605_ = 4ULL;
v___y_2555_ = v___x_2603_;
v___y_2556_ = v___x_2605_;
goto v___jp_2554_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0___boxed(lean_object* v_b_2608_, lean_object* v_args_2609_, lean_object* v_await_2610_, lean_object* v_a_2611_){
_start:
{
uint8_t v_await_boxed_2612_; lean_object* v_res_2613_; 
v_await_boxed_2612_ = lean_unbox(v_await_2610_);
v_res_2613_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v_b_2608_, v_args_2609_, v_await_boxed_2612_);
lean_dec_ref(v_b_2608_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(lean_object* v_o_2614_, lean_object* v_method_2615_){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_2618_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2614_, v_method_2615_, v___x_2617_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v_a_2619_; uint8_t v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v_a_2619_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v___x_2618_, 1);
v___x_2620_ = 0;
v___x_2621_ = lean_unsigned_to_nat(1u);
v___x_2622_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2));
v___x_2623_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2624_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2624_, 0, v_a_2619_);
lean_ctor_set(v___x_2624_, 1, v___x_2623_);
v___x_2625_ = lean_mk_empty_array_with_capacity(v___x_2621_);
v___x_2626_ = lean_array_push(v___x_2625_, v___x_2624_);
v___x_2627_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v___x_2622_, v___x_2626_, v___x_2620_);
return v___x_2627_;
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
v_a_2628_ = lean_ctor_get(v___x_2618_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2618_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2618_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0___boxed(lean_object* v_o_2636_, lean_object* v_method_2637_, lean_object* v_a_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_o_2636_, v_method_2637_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys(lean_object* v_self_2641_){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_keys___closed__0));
v___x_2644_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2641_, v___x_2643_);
return v___x_2644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys___boxed(lean_object* v_self_2645_, lean_object* v_a_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Lasm_JS_Web_URLSearchParams_keys(v_self_2645_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values(lean_object* v_self_2649_){
_start:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2651_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_values___closed__0));
v___x_2652_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2649_, v___x_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values___boxed(lean_object* v_self_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_Lasm_JS_Web_URLSearchParams_values(v_self_2653_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(lean_object* v_x_2656_){
_start:
{
if (lean_obj_tag(v_x_2656_) == 0)
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_box(0);
return v___x_2657_;
}
else
{
lean_object* v_val_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v_val_2658_ = lean_ctor_get(v_x_2656_, 0);
v___x_2659_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0));
v___x_2660_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2658_);
v___x_2661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2659_);
lean_ctor_set(v___x_2661_, 1, v___x_2660_);
v___x_2662_ = lean_unsigned_to_nat(1u);
v___x_2663_ = lean_mk_empty_array_with_capacity(v___x_2662_);
v___x_2664_ = lean_array_push(v___x_2663_, v___x_2661_);
v___x_2665_ = l_Lasm_JS_Web_Support_fields(v___x_2664_);
lean_dec_ref(v___x_2664_);
return v___x_2665_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0___boxed(lean_object* v_x_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_x_2666_);
lean_dec(v_x_2666_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(lean_object* v_context_2668_, lean_object* v_d_2669_){
_start:
{
lean_object* v___y_2672_; lean_object* v___y_2673_; 
if (lean_obj_tag(v_d_2669_) == 9)
{
lean_object* v_value_2677_; lean_object* v___x_2678_; 
v_value_2677_ = lean_ctor_get(v_d_2669_, 0);
lean_inc(v_value_2677_);
lean_dec_ref_known(v_d_2669_, 2);
v___x_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2678_, 0, v_value_2677_);
return v___x_2678_;
}
else
{
lean_object* v___x_2679_; lean_object* v_received_2681_; 
v___x_2679_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_2669_) == 9)
{
lean_object* v_value_2695_; lean_object* v_description_2696_; uint8_t v___x_2697_; 
v_value_2695_ = lean_ctor_get(v_d_2669_, 0);
v_description_2696_ = lean_ctor_get(v_d_2669_, 1);
v___x_2697_ = lean_string_dec_eq(v_description_2696_, v___x_2679_);
if (v___x_2697_ == 0)
{
goto v___jp_2693_;
}
else
{
uint32_t v___x_2698_; uint64_t v___x_2699_; lean_object* v___x_2700_; uint32_t v___x_2701_; lean_object* v___x_2702_; 
lean_inc_n(v_value_2695_, 2);
lean_dec_ref_known(v_d_2669_, 2);
v___x_2698_ = 206;
v___x_2699_ = 0ULL;
v___x_2700_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2700_, 0, v_value_2695_);
lean_ctor_set(v___x_2700_, 1, v___x_2679_);
v___x_2701_ = lasm_js_value_handle(v_value_2695_);
lean_dec(v_value_2695_);
v___x_2702_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2698_, v___x_2699_, v___x_2700_, v___x_2701_);
lean_dec_ref_known(v___x_2700_, 2);
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v_a_2703_; uint8_t v___x_2704_; 
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
lean_inc(v_a_2703_);
lean_dec_ref_known(v___x_2702_, 1);
v___x_2704_ = lean_string_validate_utf8(v_a_2703_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; lean_object* v___x_2706_; 
lean_dec(v_a_2703_);
v___x_2705_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2706_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2705_);
v_received_2681_ = v___x_2706_;
goto v___jp_2680_;
}
else
{
lean_object* v___x_2707_; 
v___x_2707_ = lean_string_from_utf8_unchecked(v_a_2703_);
v_received_2681_ = v___x_2707_;
goto v___jp_2680_;
}
}
else
{
lean_object* v___x_2708_; 
lean_dec_ref_known(v___x_2702_, 1);
v___x_2708_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_2681_ = v___x_2708_;
goto v___jp_2680_;
}
}
}
else
{
goto v___jp_2693_;
}
v___jp_2680_:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; uint8_t v___x_2691_; 
v___x_2682_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2683_ = lean_string_append(v___x_2682_, v_context_2668_);
v___x_2684_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2685_ = lean_string_append(v___x_2683_, v___x_2684_);
v___x_2686_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPattern___closed__0));
v___x_2687_ = lean_string_append(v___x_2685_, v___x_2686_);
v___x_2688_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2689_ = lean_string_append(v___x_2687_, v___x_2688_);
v___x_2690_ = lean_string_append(v___x_2689_, v_received_2681_);
lean_dec_ref(v_received_2681_);
v___x_2691_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_2691_ == 0)
{
lean_object* v___x_2692_; 
v___x_2692_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_2672_ = v___x_2690_;
v___y_2673_ = v___x_2692_;
goto v___jp_2671_;
}
else
{
v___y_2672_ = v___x_2690_;
v___y_2673_ = v___x_2679_;
goto v___jp_2671_;
}
}
v___jp_2693_:
{
lean_object* v___x_2694_; 
v___x_2694_ = l_Lasm_JS_Data_describe(v_d_2669_);
v_received_2681_ = v___x_2694_;
goto v___jp_2680_;
}
}
v___jp_2671_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2674_ = lean_string_append(v___y_2672_, v___y_2673_);
v___x_2675_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
v___x_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
return v___x_2676_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1___boxed(lean_object* v_context_2709_, lean_object* v_d_2710_, lean_object* v_a_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v_context_2709_, v_d_2710_);
lean_dec_ref(v_context_2709_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(lean_object* v_b_2713_, lean_object* v_args_2714_, uint8_t v_await_2715_){
_start:
{
uint64_t v___y_2718_; uint64_t v___y_2719_; uint64_t v___x_2762_; uint64_t v___y_2764_; 
v___x_2762_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2715_ == 0)
{
uint64_t v___x_2769_; 
v___x_2769_ = 0ULL;
v___y_2764_ = v___x_2769_;
goto v___jp_2763_;
}
else
{
uint64_t v___x_2770_; 
v___x_2770_ = 2ULL;
v___y_2764_ = v___x_2770_;
goto v___jp_2763_;
}
v___jp_2717_:
{
uint64_t v_flags_2720_; uint32_t v___x_2721_; lean_object* v___x_2722_; uint32_t v___x_2723_; lean_object* v___x_2724_; 
v_flags_2720_ = lean_uint64_lor(v___y_2718_, v___y_2719_);
v___x_2721_ = 214;
v___x_2722_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2713_, v_args_2714_);
v___x_2723_ = 0;
v___x_2724_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2721_, v_flags_2720_, v___x_2722_, v___x_2723_);
lean_dec(v___x_2722_);
if (lean_obj_tag(v___x_2724_) == 0)
{
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v_a_2725_; lean_object* v___x_2726_; 
v_a_2725_ = lean_ctor_get(v___x_2724_, 0);
lean_inc(v_a_2725_);
lean_dec_ref_known(v___x_2724_, 1);
v___x_2726_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2725_);
lean_dec(v_a_2725_);
if (lean_obj_tag(v___x_2726_) == 0)
{
lean_object* v_a_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v_a_2727_ = lean_ctor_get(v___x_2726_, 0);
lean_inc(v_a_2727_);
lean_dec_ref_known(v___x_2726_, 1);
v___x_2728_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2713_);
v___x_2729_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v___x_2728_, v_a_2727_);
lean_dec_ref(v___x_2728_);
return v___x_2729_;
}
else
{
lean_object* v_a_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2737_; 
v_a_2730_ = lean_ctor_get(v___x_2726_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v___x_2726_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2732_ = v___x_2726_;
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_a_2730_);
lean_dec(v___x_2726_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2735_; 
if (v_isShared_2733_ == 0)
{
v___x_2735_ = v___x_2732_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_a_2730_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
}
else
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2745_; 
v_a_2738_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2740_ = v___x_2724_;
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2724_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2743_; 
if (v_isShared_2741_ == 0)
{
lean_ctor_set_tag(v___x_2740_, 1);
v___x_2743_ = v___x_2740_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_a_2738_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
}
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2761_; 
v_a_2746_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2748_ = v___x_2724_;
v_isShared_2749_ = v_isSharedCheck_2761_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2724_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2761_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2759_; 
v___x_2750_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2751_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2713_);
v___x_2752_ = lean_string_append(v___x_2750_, v___x_2751_);
lean_dec_ref(v___x_2751_);
v___x_2753_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2754_ = lean_string_append(v___x_2752_, v___x_2753_);
v___x_2755_ = lean_io_error_to_string(v_a_2746_);
v___x_2756_ = lean_string_append(v___x_2754_, v___x_2755_);
lean_dec_ref(v___x_2755_);
v___x_2757_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2756_);
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 0, v___x_2757_);
v___x_2759_ = v___x_2748_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2757_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
}
v___jp_2763_:
{
uint8_t v_construct_2765_; uint64_t v___x_2766_; 
v_construct_2765_ = lean_ctor_get_uint8(v_b_2713_, sizeof(void*)*4);
v___x_2766_ = lean_uint64_lor(v___x_2762_, v___y_2764_);
if (v_construct_2765_ == 0)
{
uint64_t v___x_2767_; 
v___x_2767_ = 0ULL;
v___y_2718_ = v___x_2766_;
v___y_2719_ = v___x_2767_;
goto v___jp_2717_;
}
else
{
uint64_t v___x_2768_; 
v___x_2768_ = 4ULL;
v___y_2718_ = v___x_2766_;
v___y_2719_ = v___x_2768_;
goto v___jp_2717_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1___boxed(lean_object* v_b_2771_, lean_object* v_args_2772_, lean_object* v_await_2773_, lean_object* v_a_2774_){
_start:
{
uint8_t v_await_boxed_2775_; lean_object* v_res_2776_; 
v_await_boxed_2775_ = lean_unbox(v_await_2773_);
v_res_2776_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v_b_2771_, v_args_2772_, v_await_boxed_2775_);
lean_dec_ref(v_b_2771_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new(lean_object* v_input_2785_, lean_object* v_baseURL_2786_, lean_object* v_options_2787_){
_start:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___y_2792_; 
v___x_2789_ = lean_unsigned_to_nat(3u);
v___x_2790_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_new___closed__2));
if (lean_obj_tag(v_input_2785_) == 0)
{
lean_object* v_value_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2809_; 
v_value_2802_ = lean_ctor_get(v_input_2785_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v_input_2785_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2804_ = v_input_2785_;
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_value_2802_);
lean_dec(v_input_2785_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2807_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set_tag(v___x_2804_, 4);
v___x_2807_ = v___x_2804_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_value_2802_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
v___y_2792_ = v___x_2807_;
goto v___jp_2791_;
}
}
}
else
{
lean_object* v_value_2810_; lean_object* v_protocol_2811_; lean_object* v_username_2812_; lean_object* v_password_2813_; lean_object* v_hostname_2814_; lean_object* v_port_2815_; lean_object* v_pathname_2816_; lean_object* v_search_2817_; lean_object* v_hash_2818_; lean_object* v_baseURL_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v_value_2810_ = lean_ctor_get(v_input_2785_, 0);
lean_inc_ref(v_value_2810_);
lean_dec_ref_known(v_input_2785_, 1);
v_protocol_2811_ = lean_ctor_get(v_value_2810_, 0);
lean_inc(v_protocol_2811_);
v_username_2812_ = lean_ctor_get(v_value_2810_, 1);
lean_inc(v_username_2812_);
v_password_2813_ = lean_ctor_get(v_value_2810_, 2);
lean_inc(v_password_2813_);
v_hostname_2814_ = lean_ctor_get(v_value_2810_, 3);
lean_inc(v_hostname_2814_);
v_port_2815_ = lean_ctor_get(v_value_2810_, 4);
lean_inc(v_port_2815_);
v_pathname_2816_ = lean_ctor_get(v_value_2810_, 5);
lean_inc(v_pathname_2816_);
v_search_2817_ = lean_ctor_get(v_value_2810_, 6);
lean_inc(v_search_2817_);
v_hash_2818_ = lean_ctor_get(v_value_2810_, 7);
lean_inc(v_hash_2818_);
v_baseURL_2819_ = lean_ctor_get(v_value_2810_, 8);
lean_inc(v_baseURL_2819_);
lean_dec_ref(v_value_2810_);
v___x_2820_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2821_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2811_);
v___x_2822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2820_);
lean_ctor_set(v___x_2822_, 1, v___x_2821_);
v___x_2823_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2824_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2812_);
v___x_2825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2823_);
lean_ctor_set(v___x_2825_, 1, v___x_2824_);
v___x_2826_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2827_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2813_);
v___x_2828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2826_);
lean_ctor_set(v___x_2828_, 1, v___x_2827_);
v___x_2829_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2830_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2814_);
v___x_2831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2831_, 0, v___x_2829_);
lean_ctor_set(v___x_2831_, 1, v___x_2830_);
v___x_2832_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2833_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2815_);
v___x_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2832_);
lean_ctor_set(v___x_2834_, 1, v___x_2833_);
v___x_2835_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2836_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2816_);
v___x_2837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2835_);
lean_ctor_set(v___x_2837_, 1, v___x_2836_);
v___x_2838_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2839_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2817_);
v___x_2840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2838_);
lean_ctor_set(v___x_2840_, 1, v___x_2839_);
v___x_2841_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2842_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2818_);
v___x_2843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2841_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2845_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2819_);
v___x_2846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2844_);
lean_ctor_set(v___x_2846_, 1, v___x_2845_);
v___x_2847_ = lean_unsigned_to_nat(9u);
v___x_2848_ = lean_mk_empty_array_with_capacity(v___x_2847_);
v___x_2849_ = lean_array_push(v___x_2848_, v___x_2822_);
v___x_2850_ = lean_array_push(v___x_2849_, v___x_2825_);
v___x_2851_ = lean_array_push(v___x_2850_, v___x_2828_);
v___x_2852_ = lean_array_push(v___x_2851_, v___x_2831_);
v___x_2853_ = lean_array_push(v___x_2852_, v___x_2834_);
v___x_2854_ = lean_array_push(v___x_2853_, v___x_2837_);
v___x_2855_ = lean_array_push(v___x_2854_, v___x_2840_);
v___x_2856_ = lean_array_push(v___x_2855_, v___x_2843_);
v___x_2857_ = lean_array_push(v___x_2856_, v___x_2846_);
v___x_2858_ = l_Lasm_JS_Web_Support_fields(v___x_2857_);
lean_dec_ref(v___x_2857_);
v___y_2792_ = v___x_2858_;
goto v___jp_2791_;
}
v___jp_2791_:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; uint8_t v___x_2800_; lean_object* v___x_2801_; 
v___x_2793_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2793_, 0, v_baseURL_2786_);
v___x_2794_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_2787_);
v___x_2795_ = lean_mk_empty_array_with_capacity(v___x_2789_);
v___x_2796_ = lean_array_push(v___x_2795_, v___y_2792_);
v___x_2797_ = lean_array_push(v___x_2796_, v___x_2793_);
v___x_2798_ = lean_array_push(v___x_2797_, v___x_2794_);
v___x_2799_ = l_Lasm_JS_Web_Support_args(v___x_2798_);
v___x_2800_ = 0;
v___x_2801_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_2790_, v___x_2799_, v___x_2800_);
return v___x_2801_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new___boxed(lean_object* v_input_2859_, lean_object* v_baseURL_2860_, lean_object* v_options_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v_res_2863_; 
v_res_2863_ = l_Lasm_JS_Web_URLPattern_new(v_input_2859_, v_baseURL_2860_, v_options_2861_);
lean_dec(v_options_2861_);
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(lean_object* v_x_2864_){
_start:
{
if (lean_obj_tag(v_x_2864_) == 0)
{
lean_object* v___x_2865_; 
v___x_2865_ = lean_box(0);
return v___x_2865_;
}
else
{
lean_object* v_val_2866_; 
v_val_2866_ = lean_ctor_get(v_x_2864_, 0);
lean_inc(v_val_2866_);
lean_dec_ref_known(v_x_2864_, 1);
if (lean_obj_tag(v_val_2866_) == 0)
{
lean_object* v_value_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
v_value_2867_ = lean_ctor_get(v_val_2866_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v_val_2866_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v_val_2866_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_value_2867_);
lean_dec(v_val_2866_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
lean_ctor_set_tag(v___x_2869_, 4);
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_value_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
else
{
lean_object* v_value_2875_; lean_object* v_protocol_2876_; lean_object* v_username_2877_; lean_object* v_password_2878_; lean_object* v_hostname_2879_; lean_object* v_port_2880_; lean_object* v_pathname_2881_; lean_object* v_search_2882_; lean_object* v_hash_2883_; lean_object* v_baseURL_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; 
v_value_2875_ = lean_ctor_get(v_val_2866_, 0);
lean_inc_ref(v_value_2875_);
lean_dec_ref_known(v_val_2866_, 1);
v_protocol_2876_ = lean_ctor_get(v_value_2875_, 0);
lean_inc(v_protocol_2876_);
v_username_2877_ = lean_ctor_get(v_value_2875_, 1);
lean_inc(v_username_2877_);
v_password_2878_ = lean_ctor_get(v_value_2875_, 2);
lean_inc(v_password_2878_);
v_hostname_2879_ = lean_ctor_get(v_value_2875_, 3);
lean_inc(v_hostname_2879_);
v_port_2880_ = lean_ctor_get(v_value_2875_, 4);
lean_inc(v_port_2880_);
v_pathname_2881_ = lean_ctor_get(v_value_2875_, 5);
lean_inc(v_pathname_2881_);
v_search_2882_ = lean_ctor_get(v_value_2875_, 6);
lean_inc(v_search_2882_);
v_hash_2883_ = lean_ctor_get(v_value_2875_, 7);
lean_inc(v_hash_2883_);
v_baseURL_2884_ = lean_ctor_get(v_value_2875_, 8);
lean_inc(v_baseURL_2884_);
lean_dec_ref(v_value_2875_);
v___x_2885_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2886_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2876_);
v___x_2887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2885_);
lean_ctor_set(v___x_2887_, 1, v___x_2886_);
v___x_2888_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2889_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2877_);
v___x_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2888_);
lean_ctor_set(v___x_2890_, 1, v___x_2889_);
v___x_2891_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2892_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2878_);
v___x_2893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2891_);
lean_ctor_set(v___x_2893_, 1, v___x_2892_);
v___x_2894_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2895_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2879_);
v___x_2896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2894_);
lean_ctor_set(v___x_2896_, 1, v___x_2895_);
v___x_2897_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2898_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2880_);
v___x_2899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2897_);
lean_ctor_set(v___x_2899_, 1, v___x_2898_);
v___x_2900_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2901_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2881_);
v___x_2902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2902_, 0, v___x_2900_);
lean_ctor_set(v___x_2902_, 1, v___x_2901_);
v___x_2903_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2904_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2882_);
v___x_2905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2903_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
v___x_2906_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2907_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2883_);
v___x_2908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2906_);
lean_ctor_set(v___x_2908_, 1, v___x_2907_);
v___x_2909_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2910_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2884_);
v___x_2911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2909_);
lean_ctor_set(v___x_2911_, 1, v___x_2910_);
v___x_2912_ = lean_unsigned_to_nat(9u);
v___x_2913_ = lean_mk_empty_array_with_capacity(v___x_2912_);
v___x_2914_ = lean_array_push(v___x_2913_, v___x_2887_);
v___x_2915_ = lean_array_push(v___x_2914_, v___x_2890_);
v___x_2916_ = lean_array_push(v___x_2915_, v___x_2893_);
v___x_2917_ = lean_array_push(v___x_2916_, v___x_2896_);
v___x_2918_ = lean_array_push(v___x_2917_, v___x_2899_);
v___x_2919_ = lean_array_push(v___x_2918_, v___x_2902_);
v___x_2920_ = lean_array_push(v___x_2919_, v___x_2905_);
v___x_2921_ = lean_array_push(v___x_2920_, v___x_2908_);
v___x_2922_ = lean_array_push(v___x_2921_, v___x_2911_);
v___x_2923_ = l_Lasm_JS_Web_Support_fields(v___x_2922_);
lean_dec_ref(v___x_2922_);
return v___x_2923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions(lean_object* v_input_2931_, lean_object* v_options_2932_){
_start:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; uint8_t v___x_2942_; lean_object* v___x_2943_; 
v___x_2934_ = lean_unsigned_to_nat(2u);
v___x_2935_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_newWithOptions___closed__1));
v___x_2936_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_2931_);
v___x_2937_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_2932_);
v___x_2938_ = lean_mk_empty_array_with_capacity(v___x_2934_);
v___x_2939_ = lean_array_push(v___x_2938_, v___x_2936_);
v___x_2940_ = lean_array_push(v___x_2939_, v___x_2937_);
v___x_2941_ = l_Lasm_JS_Web_Support_args(v___x_2940_);
v___x_2942_ = 0;
v___x_2943_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_2935_, v___x_2941_, v___x_2942_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions___boxed(lean_object* v_input_2944_, lean_object* v_options_2945_, lean_object* v_a_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = l_Lasm_JS_Web_URLPattern_newWithOptions(v_input_2944_, v_options_2945_);
lean_dec(v_options_2945_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol(lean_object* v_self_2948_){
_start:
{
lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2950_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2951_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2948_, v___x_2950_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol___boxed(lean_object* v_self_2952_, lean_object* v_a_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_Lasm_JS_Web_URLPattern_protocol(v_self_2952_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username(lean_object* v_self_2955_){
_start:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2957_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2958_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2955_, v___x_2957_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username___boxed(lean_object* v_self_2959_, lean_object* v_a_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lasm_JS_Web_URLPattern_username(v_self_2959_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password(lean_object* v_self_2962_){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2965_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2962_, v___x_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password___boxed(lean_object* v_self_2966_, lean_object* v_a_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l_Lasm_JS_Web_URLPattern_password(v_self_2966_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname(lean_object* v_self_2969_){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2972_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2969_, v___x_2971_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname___boxed(lean_object* v_self_2973_, lean_object* v_a_2974_){
_start:
{
lean_object* v_res_2975_; 
v_res_2975_ = l_Lasm_JS_Web_URLPattern_hostname(v_self_2973_);
return v_res_2975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port(lean_object* v_self_2976_){
_start:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2978_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2979_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2976_, v___x_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port___boxed(lean_object* v_self_2980_, lean_object* v_a_2981_){
_start:
{
lean_object* v_res_2982_; 
v_res_2982_ = l_Lasm_JS_Web_URLPattern_port(v_self_2980_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname(lean_object* v_self_2983_){
_start:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2985_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2986_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2983_, v___x_2985_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname___boxed(lean_object* v_self_2987_, lean_object* v_a_2988_){
_start:
{
lean_object* v_res_2989_; 
v_res_2989_ = l_Lasm_JS_Web_URLPattern_pathname(v_self_2987_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search(lean_object* v_self_2990_){
_start:
{
lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2992_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2993_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2990_, v___x_2992_);
return v___x_2993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search___boxed(lean_object* v_self_2994_, lean_object* v_a_2995_){
_start:
{
lean_object* v_res_2996_; 
v_res_2996_ = l_Lasm_JS_Web_URLPattern_search(v_self_2994_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash(lean_object* v_self_2997_){
_start:
{
lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2999_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_3000_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2997_, v___x_2999_);
return v___x_3000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash___boxed(lean_object* v_self_3001_, lean_object* v_a_3002_){
_start:
{
lean_object* v_res_3003_; 
v_res_3003_ = l_Lasm_JS_Web_URLPattern_hash(v_self_3001_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups(lean_object* v_self_3005_){
_start:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; 
v___x_3007_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_hasRegExpGroups___closed__0));
v___x_3008_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_3005_, v___x_3007_);
return v___x_3008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups___boxed(lean_object* v_self_3009_, lean_object* v_a_3010_){
_start:
{
lean_object* v_res_3011_; 
v_res_3011_ = l_Lasm_JS_Web_URLPattern_hasRegExpGroups(v_self_3009_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test(lean_object* v_self_3013_, lean_object* v_input_3014_, lean_object* v_baseURL_3015_){
_start:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3017_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_test___closed__0));
v___x_3018_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_3014_);
v___x_3019_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_3015_);
v___x_3020_ = lean_unsigned_to_nat(2u);
v___x_3021_ = lean_mk_empty_array_with_capacity(v___x_3020_);
v___x_3022_ = lean_array_push(v___x_3021_, v___x_3018_);
v___x_3023_ = lean_array_push(v___x_3022_, v___x_3019_);
v___x_3024_ = l_Lasm_JS_Web_Support_args(v___x_3023_);
v___x_3025_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_3013_, v___x_3017_, v___x_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test___boxed(lean_object* v_self_3026_, lean_object* v_input_3027_, lean_object* v_baseURL_3028_, lean_object* v_a_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l_Lasm_JS_Web_URLPattern_test(v_self_3026_, v_input_3027_, v_baseURL_3028_);
return v_res_3030_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(uint8_t v_await_3031_, uint64_t v_extra_3032_){
_start:
{
uint64_t v___x_3033_; uint64_t v___y_3035_; 
v___x_3033_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_3031_ == 0)
{
uint64_t v___x_3038_; 
v___x_3038_ = 0ULL;
v___y_3035_ = v___x_3038_;
goto v___jp_3034_;
}
else
{
uint64_t v___x_3039_; 
v___x_3039_ = 2ULL;
v___y_3035_ = v___x_3039_;
goto v___jp_3034_;
}
v___jp_3034_:
{
uint64_t v___x_3036_; uint64_t v___x_3037_; 
v___x_3036_ = lean_uint64_lor(v___x_3033_, v___y_3035_);
v___x_3037_ = lean_uint64_lor(v___x_3036_, v_extra_3032_);
return v___x_3037_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0___boxed(lean_object* v_await_3040_, lean_object* v_extra_3041_){
_start:
{
uint8_t v_await_boxed_3042_; uint64_t v_extra_boxed_3043_; uint64_t v_res_3044_; lean_object* v_r_3045_; 
v_await_boxed_3042_ = lean_unbox(v_await_3040_);
v_extra_boxed_3043_ = lean_unbox_uint64(v_extra_3041_);
lean_dec_ref(v_extra_3041_);
v_res_3044_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v_await_boxed_3042_, v_extra_boxed_3043_);
v_r_3045_ = lean_box_uint64(v_res_3044_);
return v_r_3045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_3054_, lean_object* v_key_3055_){
_start:
{
if (lean_obj_tag(v_d_3054_) == 8)
{
lean_object* v___x_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3086_; 
v___x_3058_ = l_Lasm_JS_Data_field(v_d_3054_, v_key_3055_);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_d_3054_);
if (v_isSharedCheck_3086_ == 0)
{
lean_object* v_unused_3087_; 
v_unused_3087_ = lean_ctor_get(v_d_3054_, 0);
lean_dec(v_unused_3087_);
v___x_3060_ = v_d_3054_;
v_isShared_3061_ = v_isSharedCheck_3086_;
goto v_resetjp_3059_;
}
else
{
lean_dec(v_d_3054_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3086_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
switch(lean_obj_tag(v___x_3058_))
{
case 1:
{
lean_del_object(v___x_3060_);
goto v___jp_3056_;
}
case 0:
{
lean_del_object(v___x_3060_);
goto v___jp_3056_;
}
default: 
{
if (lean_obj_tag(v___x_3058_) == 4)
{
lean_object* v_s_3062_; lean_object* v___x_3064_; 
v_s_3062_ = lean_ctor_get(v___x_3058_, 0);
lean_inc_ref(v_s_3062_);
lean_dec_ref_known(v___x_3058_, 1);
if (v_isShared_3061_ == 0)
{
lean_ctor_set_tag(v___x_3060_, 1);
lean_ctor_set(v___x_3060_, 0, v_s_3062_);
v___x_3064_ = v___x_3060_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_s_3062_);
v___x_3064_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
lean_object* v___x_3065_; 
v___x_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3064_);
return v___x_3065_;
}
}
else
{
lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; uint8_t v___x_3077_; 
v___x_3067_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3068_ = lean_string_append(v___x_3067_, v_key_3055_);
v___x_3069_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_3070_ = lean_string_append(v___x_3068_, v___x_3069_);
v___x_3071_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_3072_ = lean_string_append(v___x_3070_, v___x_3071_);
v___x_3073_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3074_ = lean_string_append(v___x_3072_, v___x_3073_);
v___x_3075_ = l_Lasm_JS_Data_describe(v___x_3058_);
v___x_3076_ = lean_string_append(v___x_3074_, v___x_3075_);
lean_dec_ref(v___x_3075_);
v___x_3077_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_3077_ == 0)
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3081_; 
v___x_3078_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___x_3079_ = lean_string_append(v___x_3076_, v___x_3078_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set_tag(v___x_3060_, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3079_);
v___x_3081_ = v___x_3060_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v___x_3079_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
else
{
lean_object* v___x_3084_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set_tag(v___x_3060_, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3076_);
v___x_3084_ = v___x_3060_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v___x_3076_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3088_; 
lean_dec(v_d_3054_);
v___x_3088_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5));
return v___x_3088_;
}
v___jp_3056_:
{
lean_object* v___x_3057_; 
v___x_3057_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_3057_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_3089_, lean_object* v_key_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3089_, v_key_3090_);
lean_dec_ref(v_key_3090_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8(size_t v_sz_3093_, size_t v_i_3094_, lean_object* v_bs_3095_){
_start:
{
uint8_t v___x_3096_; 
v___x_3096_ = lean_usize_dec_lt(v_i_3094_, v_sz_3093_);
if (v___x_3096_ == 0)
{
lean_object* v___x_3097_; 
v___x_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3097_, 0, v_bs_3095_);
return v___x_3097_;
}
else
{
lean_object* v_v_3098_; lean_object* v_fst_3099_; lean_object* v_snd_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3124_; 
v_v_3098_ = lean_array_uget(v_bs_3095_, v_i_3094_);
v_fst_3099_ = lean_ctor_get(v_v_3098_, 0);
v_snd_3100_ = lean_ctor_get(v_v_3098_, 1);
v_isSharedCheck_3124_ = !lean_is_exclusive(v_v_3098_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3102_ = v_v_3098_;
v_isShared_3103_ = v_isSharedCheck_3124_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_snd_3100_);
lean_inc(v_fst_3099_);
lean_dec(v_v_3098_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3124_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3104_; lean_object* v_bs_x27_3105_; lean_object* v_a_3107_; 
v___x_3104_ = lean_unsigned_to_nat(0u);
v_bs_x27_3105_ = lean_array_uset(v_bs_3095_, v_i_3094_, v___x_3104_);
switch(lean_obj_tag(v_snd_3100_))
{
case 1:
{
goto v___jp_3115_;
}
case 0:
{
goto v___jp_3115_;
}
default: 
{
if (lean_obj_tag(v_snd_3100_) == 4)
{
lean_object* v_s_3117_; lean_object* v___x_3118_; 
v_s_3117_ = lean_ctor_get(v_snd_3100_, 0);
lean_inc_ref(v_s_3117_);
lean_dec_ref_known(v_snd_3100_, 1);
v___x_3118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3118_, 0, v_s_3117_);
v_a_3107_ = v___x_3118_;
goto v___jp_3106_;
}
else
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
lean_dec_ref(v_bs_x27_3105_);
lean_del_object(v___x_3102_);
lean_dec(v_snd_3100_);
v___x_3119_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8___closed__0));
v___x_3120_ = lean_string_append(v___x_3119_, v_fst_3099_);
lean_dec(v_fst_3099_);
v___x_3121_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3122_ = lean_string_append(v___x_3120_, v___x_3121_);
v___x_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
return v___x_3123_;
}
}
}
v___jp_3106_:
{
lean_object* v___x_3109_; 
if (v_isShared_3103_ == 0)
{
lean_ctor_set(v___x_3102_, 1, v_a_3107_);
v___x_3109_ = v___x_3102_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_fst_3099_);
lean_ctor_set(v_reuseFailAlloc_3114_, 1, v_a_3107_);
v___x_3109_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
size_t v___x_3110_; size_t v___x_3111_; lean_object* v___x_3112_; 
v___x_3110_ = ((size_t)1ULL);
v___x_3111_ = lean_usize_add(v_i_3094_, v___x_3110_);
v___x_3112_ = lean_array_uset(v_bs_x27_3105_, v_i_3094_, v___x_3109_);
v_i_3094_ = v___x_3111_;
v_bs_3095_ = v___x_3112_;
goto _start;
}
}
v___jp_3115_:
{
lean_object* v___x_3116_; 
v___x_3116_ = lean_box(0);
v_a_3107_ = v___x_3116_;
goto v___jp_3106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8___boxed(lean_object* v_sz_3125_, lean_object* v_i_3126_, lean_object* v_bs_3127_){
_start:
{
size_t v_sz_boxed_3128_; size_t v_i_boxed_3129_; lean_object* v_res_3130_; 
v_sz_boxed_3128_ = lean_unbox_usize(v_sz_3125_);
lean_dec(v_sz_3125_);
v_i_boxed_3129_ = lean_unbox_usize(v_i_3126_);
lean_dec(v_i_3126_);
v_res_3130_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8(v_sz_boxed_3128_, v_i_boxed_3129_, v_bs_3127_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7(lean_object* v_d_3136_, lean_object* v_key_3137_){
_start:
{
if (lean_obj_tag(v_d_3136_) == 8)
{
lean_object* v___x_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3185_; 
v___x_3140_ = l_Lasm_JS_Data_field(v_d_3136_, v_key_3137_);
v_isSharedCheck_3185_ = !lean_is_exclusive(v_d_3136_);
if (v_isSharedCheck_3185_ == 0)
{
lean_object* v_unused_3186_; 
v_unused_3186_ = lean_ctor_get(v_d_3136_, 0);
lean_dec(v_unused_3186_);
v___x_3142_ = v_d_3136_;
v_isShared_3143_ = v_isSharedCheck_3185_;
goto v_resetjp_3141_;
}
else
{
lean_dec(v_d_3136_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3185_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v_a_3145_; 
switch(lean_obj_tag(v___x_3140_))
{
case 1:
{
lean_del_object(v___x_3142_);
goto v___jp_3138_;
}
case 0:
{
lean_del_object(v___x_3142_);
goto v___jp_3138_;
}
default: 
{
if (lean_obj_tag(v___x_3140_) == 8)
{
lean_object* v_fields_3170_; size_t v_sz_3171_; size_t v___x_3172_; lean_object* v___x_3173_; 
v_fields_3170_ = lean_ctor_get(v___x_3140_, 0);
lean_inc_ref(v_fields_3170_);
v_sz_3171_ = lean_array_size(v_fields_3170_);
v___x_3172_ = ((size_t)0ULL);
v___x_3173_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7_spec__8(v_sz_3171_, v___x_3172_, v_fields_3170_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_object* v_a_3174_; 
v_a_3174_ = lean_ctor_get(v___x_3173_, 0);
lean_inc(v_a_3174_);
lean_dec_ref_known(v___x_3173_, 1);
v_a_3145_ = v_a_3174_;
goto v___jp_3144_;
}
else
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3183_; 
lean_dec_ref_known(v___x_3140_, 1);
lean_del_object(v___x_3142_);
v_a_3175_ = lean_ctor_get(v___x_3173_, 0);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3177_ = v___x_3173_;
v_isShared_3178_ = v_isSharedCheck_3183_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3173_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3183_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3179_; lean_object* v___x_3181_; 
v___x_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3179_, 0, v_a_3175_);
if (v_isShared_3178_ == 0)
{
lean_ctor_set(v___x_3177_, 0, v___x_3179_);
v___x_3181_ = v___x_3177_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v___x_3179_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
}
else
{
lean_object* v___x_3184_; 
v___x_3184_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3145_ = v___x_3184_;
goto v___jp_3144_;
}
}
}
v___jp_3144_:
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; uint8_t v___x_3158_; 
v___x_3146_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3147_ = lean_string_append(v___x_3146_, v_key_3137_);
v___x_3148_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_3149_ = lean_string_append(v___x_3147_, v___x_3148_);
v___x_3150_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__1));
v___x_3151_ = lean_string_append(v___x_3149_, v___x_3150_);
v___x_3152_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3153_ = lean_string_append(v___x_3151_, v___x_3152_);
v___x_3154_ = l_Lasm_JS_Data_describe(v___x_3140_);
v___x_3155_ = lean_string_append(v___x_3153_, v___x_3154_);
lean_dec_ref(v___x_3154_);
v___x_3156_ = lean_string_utf8_byte_size(v_a_3145_);
v___x_3157_ = lean_unsigned_to_nat(0u);
v___x_3158_ = lean_nat_dec_eq(v___x_3156_, v___x_3157_);
if (v___x_3158_ == 0)
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3165_; 
v___x_3159_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3160_ = lean_string_append(v___x_3159_, v_a_3145_);
lean_dec_ref(v_a_3145_);
v___x_3161_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3162_ = lean_string_append(v___x_3160_, v___x_3161_);
v___x_3163_ = lean_string_append(v___x_3155_, v___x_3162_);
lean_dec_ref(v___x_3162_);
if (v_isShared_3143_ == 0)
{
lean_ctor_set_tag(v___x_3142_, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3163_);
v___x_3165_ = v___x_3142_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v___x_3163_);
v___x_3165_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
return v___x_3165_;
}
}
else
{
lean_object* v___x_3168_; 
lean_dec_ref(v_a_3145_);
if (v_isShared_3143_ == 0)
{
lean_ctor_set_tag(v___x_3142_, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3155_);
v___x_3168_ = v___x_3142_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3155_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
}
else
{
lean_object* v___x_3187_; 
lean_dec(v_d_3136_);
v___x_3187_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__2));
return v___x_3187_;
}
v___jp_3138_:
{
lean_object* v___x_3139_; 
v___x_3139_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___closed__0));
return v___x_3139_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_d_3188_, lean_object* v_key_3189_){
_start:
{
lean_object* v_res_3190_; 
v_res_3190_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7(v_d_3188_, v_key_3189_);
lean_dec_ref(v_key_3189_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_3196_, lean_object* v_key_3197_){
_start:
{
if (lean_obj_tag(v_d_3196_) == 8)
{
lean_object* v___x_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3253_; 
v___x_3200_ = l_Lasm_JS_Data_field(v_d_3196_, v_key_3197_);
v_isSharedCheck_3253_ = !lean_is_exclusive(v_d_3196_);
if (v_isSharedCheck_3253_ == 0)
{
lean_object* v_unused_3254_; 
v_unused_3254_ = lean_ctor_get(v_d_3196_, 0);
lean_dec(v_unused_3254_);
v___x_3202_ = v_d_3196_;
v_isShared_3203_ = v_isSharedCheck_3253_;
goto v_resetjp_3201_;
}
else
{
lean_dec(v_d_3196_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3253_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v_a_3205_; 
switch(lean_obj_tag(v___x_3200_))
{
case 1:
{
lean_del_object(v___x_3202_);
goto v___jp_3198_;
}
case 0:
{
lean_del_object(v___x_3202_);
goto v___jp_3198_;
}
default: 
{
lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___x_3230_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0));
lean_inc(v___x_3200_);
v___x_3231_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_3200_, v___x_3230_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_object* v_a_3232_; 
v_a_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc(v_a_3232_);
lean_dec_ref_known(v___x_3231_, 1);
v_a_3205_ = v_a_3232_;
goto v___jp_3204_;
}
else
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3252_; 
v_a_3233_ = lean_ctor_get(v___x_3231_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3231_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3235_ = v___x_3231_;
v_isShared_3236_ = v_isSharedCheck_3252_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3231_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3252_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3237_; lean_object* v___x_3238_; 
v___x_3237_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1));
lean_inc(v___x_3200_);
v___x_3238_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4_spec__7(v___x_3200_, v___x_3237_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v_a_3239_; 
lean_del_object(v___x_3235_);
lean_dec(v_a_3233_);
v_a_3239_ = lean_ctor_get(v___x_3238_, 0);
lean_inc(v_a_3239_);
lean_dec_ref_known(v___x_3238_, 1);
v_a_3205_ = v_a_3239_;
goto v___jp_3204_;
}
else
{
lean_object* v_a_3240_; lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3251_; 
lean_del_object(v___x_3202_);
lean_dec(v___x_3200_);
v_a_3240_ = lean_ctor_get(v___x_3238_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3242_ = v___x_3238_;
v_isShared_3243_ = v_isSharedCheck_3251_;
goto v_resetjp_3241_;
}
else
{
lean_inc(v_a_3240_);
lean_dec(v___x_3238_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3251_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
lean_object* v___x_3244_; lean_object* v___x_3246_; 
v___x_3244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3244_, 0, v_a_3233_);
lean_ctor_set(v___x_3244_, 1, v_a_3240_);
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 0, v___x_3244_);
v___x_3246_ = v___x_3235_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3244_);
v___x_3246_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
lean_object* v___x_3248_; 
if (v_isShared_3243_ == 0)
{
lean_ctor_set(v___x_3242_, 0, v___x_3246_);
v___x_3248_ = v___x_3242_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v___x_3246_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
}
}
}
}
}
}
v___jp_3204_:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; uint8_t v___x_3218_; 
v___x_3206_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3207_ = lean_string_append(v___x_3206_, v_key_3197_);
v___x_3208_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_3209_ = lean_string_append(v___x_3207_, v___x_3208_);
v___x_3210_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3211_ = lean_string_append(v___x_3209_, v___x_3210_);
v___x_3212_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3213_ = lean_string_append(v___x_3211_, v___x_3212_);
v___x_3214_ = l_Lasm_JS_Data_describe(v___x_3200_);
v___x_3215_ = lean_string_append(v___x_3213_, v___x_3214_);
lean_dec_ref(v___x_3214_);
v___x_3216_ = lean_string_utf8_byte_size(v_a_3205_);
v___x_3217_ = lean_unsigned_to_nat(0u);
v___x_3218_ = lean_nat_dec_eq(v___x_3216_, v___x_3217_);
if (v___x_3218_ == 0)
{
lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3225_; 
v___x_3219_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3220_ = lean_string_append(v___x_3219_, v_a_3205_);
lean_dec_ref(v_a_3205_);
v___x_3221_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3222_ = lean_string_append(v___x_3220_, v___x_3221_);
v___x_3223_ = lean_string_append(v___x_3215_, v___x_3222_);
lean_dec_ref(v___x_3222_);
if (v_isShared_3203_ == 0)
{
lean_ctor_set_tag(v___x_3202_, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3223_);
v___x_3225_ = v___x_3202_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v___x_3223_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
else
{
lean_object* v___x_3228_; 
lean_dec_ref(v_a_3205_);
if (v_isShared_3203_ == 0)
{
lean_ctor_set_tag(v___x_3202_, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3215_);
v___x_3228_ = v___x_3202_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v___x_3215_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
}
}
else
{
lean_object* v___x_3255_; 
lean_dec(v_d_3196_);
v___x_3255_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__2));
return v___x_3255_;
}
v___jp_3198_:
{
lean_object* v___x_3199_; 
v___x_3199_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_3199_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_3256_, lean_object* v_key_3257_){
_start:
{
lean_object* v_res_3258_; 
v_res_3258_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(v_d_3256_, v_key_3257_);
lean_dec_ref(v_key_3257_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__5(size_t v_sz_3259_, size_t v_i_3260_, lean_object* v_bs_3261_){
_start:
{
uint8_t v___x_3262_; 
v___x_3262_ = lean_usize_dec_lt(v_i_3260_, v_sz_3259_);
if (v___x_3262_ == 0)
{
lean_object* v___x_3263_; 
v___x_3263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3263_, 0, v_bs_3261_);
return v___x_3263_;
}
else
{
lean_object* v_v_3264_; lean_object* v___x_3265_; lean_object* v_bs_x27_3266_; lean_object* v_a_3268_; 
v_v_3264_ = lean_array_uget(v_bs_3261_, v_i_3260_);
v___x_3265_ = lean_unsigned_to_nat(0u);
v_bs_x27_3266_ = lean_array_uset(v_bs_3261_, v_i_3260_, v___x_3265_);
switch(lean_obj_tag(v_v_3264_))
{
case 4:
{
lean_object* v_s_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3280_; 
v_s_3273_ = lean_ctor_get(v_v_3264_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v_v_3264_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3275_ = v_v_3264_;
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_s_3273_);
lean_dec(v_v_3264_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3276_ == 0)
{
lean_ctor_set_tag(v___x_3275_, 0);
v___x_3278_ = v___x_3275_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_s_3273_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
v_a_3268_ = v___x_3278_;
goto v___jp_3267_;
}
}
}
case 8:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; 
v___x_3281_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v_v_3264_);
v___x_3282_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_v_3264_, v___x_3281_);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v_a_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3290_; 
lean_dec_ref_known(v_v_3264_, 1);
lean_dec_ref(v_bs_x27_3266_);
v_a_3283_ = lean_ctor_get(v___x_3282_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3282_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3285_ = v___x_3282_;
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_a_3283_);
lean_dec(v___x_3282_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3288_; 
if (v_isShared_3286_ == 0)
{
v___x_3288_ = v___x_3285_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_a_3283_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
return v___x_3288_;
}
}
}
else
{
lean_object* v_a_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v_a_3291_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3291_);
lean_dec_ref_known(v___x_3282_, 1);
v___x_3292_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v_v_3264_);
v___x_3293_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_v_3264_, v___x_3292_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3301_; 
lean_dec(v_a_3291_);
lean_dec_ref_known(v_v_3264_, 1);
lean_dec_ref(v_bs_x27_3266_);
v_a_3294_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3296_ = v___x_3293_;
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_dec(v___x_3293_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v___x_3299_; 
if (v_isShared_3297_ == 0)
{
v___x_3299_ = v___x_3296_;
goto v_reusejp_3298_;
}
else
{
lean_object* v_reuseFailAlloc_3300_; 
v_reuseFailAlloc_3300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3300_, 0, v_a_3294_);
v___x_3299_ = v_reuseFailAlloc_3300_;
goto v_reusejp_3298_;
}
v_reusejp_3298_:
{
return v___x_3299_;
}
}
}
else
{
lean_object* v_a_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
v_a_3302_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_a_3302_);
lean_dec_ref_known(v___x_3293_, 1);
v___x_3303_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v_v_3264_);
v___x_3304_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_v_3264_, v___x_3303_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_object* v_a_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3312_; 
lean_dec(v_a_3302_);
lean_dec(v_a_3291_);
lean_dec_ref_known(v_v_3264_, 1);
lean_dec_ref(v_bs_x27_3266_);
v_a_3305_ = lean_ctor_get(v___x_3304_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3304_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3307_ = v___x_3304_;
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
else
{
lean_inc(v_a_3305_);
lean_dec(v___x_3304_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v___x_3310_; 
if (v_isShared_3308_ == 0)
{
v___x_3310_ = v___x_3307_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_a_3305_);
v___x_3310_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
return v___x_3310_;
}
}
}
else
{
lean_object* v_a_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; 
v_a_3313_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_a_3313_);
lean_dec_ref_known(v___x_3304_, 1);
v___x_3314_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v_v_3264_);
v___x_3315_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_v_3264_, v___x_3314_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3323_; 
lean_dec(v_a_3313_);
lean_dec(v_a_3302_);
lean_dec(v_a_3291_);
lean_dec_ref_known(v_v_3264_, 1);
lean_dec_ref(v_bs_x27_3266_);
v_a_3316_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3318_ = v___x_3315_;
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v___x_3315_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3321_; 
if (v_isShared_3319_ == 0)
{
v___x_3321_ = v___x_3318_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v_a_3316_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
return v___x_3321_;
}
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; 
v_a_3324_ = lean_ctor_get(v___x_3315_, 0);
lean_inc(v_a_3324_);
lean_dec_ref_known(v___x_3315_, 1);
v___x_3325_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v_v_3264_);
v___x_3326_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_v_3264_, v___x_3325_);
if (lean_obj_tag(v___x_3326_) == 0)
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3334_; 
lean_dec(v_a_3324_);
lean_dec(v_a_3313_);
lean_dec(v_a_3302_);
lean_dec(v_a_3291_);
lean_dec_ref_known(v_v_3264_, 1);
lean_dec_ref(v_bs_x27_3266_);
v_a_3327_ = lean_ctor_get(v___x_3326_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3326_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3329_ = v___x_3326_;
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3326_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3332_; 
if (v_isShared_3330_ == 0)
{
v___x_3332_ = v___x_3329_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v_a_3327_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
else
{
lean_object* v_a_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v_a_3335_ = lean_ctor_get(v___x_3326_, 0);
lean_inc(v_a_3335_);
lean_dec_ref_known(v___x_3326_, 1);
v___x_3336_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v_v_3264_);
v___x_3337_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_v_3264_, v___x_3336_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3345_; 
lean_dec(v_a_3335_);
lean_dec(v_a_3324_);
lean_dec(v_a_3313_);
lean_dec(v_a_3302_);
lean_dec(v_a_3291_);
lean_dec_ref_known(v_v_3264_, 1);
lean_dec_ref(v_bs_x27_3266_);
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3340_ = v___x_3337_;
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_a_3338_);
lean_dec(v___x_3337_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3343_; 
if (v_isShared_3341_ == 0)
{
v___x_3343_ = v___x_3340_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_a_3338_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
else
{
lean_object* v_a_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; 
v_a_3346_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3346_);
lean_dec_ref_known(v___x_3337_, 1);
v___x_3347_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v_v_3264_);
v___x_3348_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_v_3264_, v___x_3347_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v_a_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3356_; 
lean_dec(v_a_3346_);
lean_dec(v_a_3335_);
lean_dec(v_a_3324_);
lean_dec(v_a_3313_);
lean_dec(v_a_3302_);
lean_dec(v_a_3291_);
lean_dec_ref_known(v_v_3264_, 1);
lean_dec_ref(v_bs_x27_3266_);
v_a_3349_ = lean_ctor_get(v___x_3348_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3351_ = v___x_3348_;
v_isShared_3352_ = v_isSharedCheck_3356_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_a_3349_);
lean_dec(v___x_3348_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3356_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
lean_object* v___x_3354_; 
if (v_isShared_3352_ == 0)
{
v___x_3354_ = v___x_3351_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v_a_3349_);
v___x_3354_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
return v___x_3354_;
}
}
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
v_a_3357_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_a_3357_);
lean_dec_ref_known(v___x_3348_, 1);
v___x_3358_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc_ref(v_v_3264_);
v___x_3359_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_v_3264_, v___x_3358_);
if (lean_obj_tag(v___x_3359_) == 0)
{
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
lean_dec(v_a_3357_);
lean_dec(v_a_3346_);
lean_dec(v_a_3335_);
lean_dec(v_a_3324_);
lean_dec(v_a_3313_);
lean_dec(v_a_3302_);
lean_dec(v_a_3291_);
lean_dec_ref_known(v_v_3264_, 1);
lean_dec_ref(v_bs_x27_3266_);
v_a_3360_ = lean_ctor_get(v___x_3359_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3359_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___x_3359_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3359_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
else
{
lean_object* v_a_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v_a_3368_ = lean_ctor_get(v___x_3359_, 0);
lean_inc(v_a_3368_);
lean_dec_ref_known(v___x_3359_, 1);
v___x_3369_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_3370_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4(v_v_3264_, v___x_3369_);
if (lean_obj_tag(v___x_3370_) == 0)
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_dec(v_a_3368_);
lean_dec(v_a_3357_);
lean_dec(v_a_3346_);
lean_dec(v_a_3335_);
lean_dec(v_a_3324_);
lean_dec(v_a_3313_);
lean_dec(v_a_3302_);
lean_dec(v_a_3291_);
lean_dec_ref(v_bs_x27_3266_);
v_a_3371_ = lean_ctor_get(v___x_3370_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3370_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3370_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3370_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
else
{
lean_object* v_a_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v_a_3379_ = lean_ctor_get(v___x_3370_, 0);
lean_inc(v_a_3379_);
lean_dec_ref_known(v___x_3370_, 1);
v___x_3380_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3380_, 0, v_a_3291_);
lean_ctor_set(v___x_3380_, 1, v_a_3302_);
lean_ctor_set(v___x_3380_, 2, v_a_3313_);
lean_ctor_set(v___x_3380_, 3, v_a_3324_);
lean_ctor_set(v___x_3380_, 4, v_a_3335_);
lean_ctor_set(v___x_3380_, 5, v_a_3346_);
lean_ctor_set(v___x_3380_, 6, v_a_3357_);
lean_ctor_set(v___x_3380_, 7, v_a_3368_);
lean_ctor_set(v___x_3380_, 8, v_a_3379_);
v___x_3381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3380_);
v_a_3268_ = v___x_3381_;
goto v___jp_3267_;
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
lean_object* v___x_3382_; 
lean_dec_ref(v_bs_x27_3266_);
lean_dec(v_v_3264_);
v___x_3382_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3382_;
}
}
v___jp_3267_:
{
size_t v___x_3269_; size_t v___x_3270_; lean_object* v___x_3271_; 
v___x_3269_ = ((size_t)1ULL);
v___x_3270_ = lean_usize_add(v_i_3260_, v___x_3269_);
v___x_3271_ = lean_array_uset(v_bs_x27_3266_, v_i_3260_, v_a_3268_);
v_i_3260_ = v___x_3270_;
v_bs_3261_ = v___x_3271_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_sz_3383_, lean_object* v_i_3384_, lean_object* v_bs_3385_){
_start:
{
size_t v_sz_boxed_3386_; size_t v_i_boxed_3387_; lean_object* v_res_3388_; 
v_sz_boxed_3386_ = lean_unbox_usize(v_sz_3383_);
lean_dec(v_sz_3383_);
v_i_boxed_3387_ = lean_unbox_usize(v_i_3384_);
lean_dec(v_i_3384_);
v_res_3388_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__5(v_sz_boxed_3386_, v_i_boxed_3387_, v_bs_3385_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_3395_, lean_object* v_key_3396_){
_start:
{
if (lean_obj_tag(v_d_3395_) == 8)
{
lean_object* v___x_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3452_; 
v___x_3399_ = l_Lasm_JS_Data_field(v_d_3395_, v_key_3396_);
v_isSharedCheck_3452_ = !lean_is_exclusive(v_d_3395_);
if (v_isSharedCheck_3452_ == 0)
{
lean_object* v_unused_3453_; 
v_unused_3453_ = lean_ctor_get(v_d_3395_, 0);
lean_dec(v_unused_3453_);
v___x_3401_ = v_d_3395_;
v_isShared_3402_ = v_isSharedCheck_3452_;
goto v_resetjp_3400_;
}
else
{
lean_dec(v_d_3395_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3452_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v_a_3404_; 
switch(lean_obj_tag(v___x_3399_))
{
case 1:
{
lean_del_object(v___x_3401_);
goto v___jp_3397_;
}
case 0:
{
lean_del_object(v___x_3401_);
goto v___jp_3397_;
}
default: 
{
if (lean_obj_tag(v___x_3399_) == 7)
{
lean_object* v_items_3429_; size_t v_sz_3430_; size_t v___x_3431_; lean_object* v___x_3432_; 
v_items_3429_ = lean_ctor_get(v___x_3399_, 0);
lean_inc_ref(v_items_3429_);
v_sz_3430_ = lean_array_size(v_items_3429_);
v___x_3431_ = ((size_t)0ULL);
v___x_3432_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__5(v_sz_3430_, v___x_3431_, v_items_3429_);
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v_a_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; uint8_t v___x_3437_; 
v_a_3433_ = lean_ctor_get(v___x_3432_, 0);
lean_inc(v_a_3433_);
lean_dec_ref_known(v___x_3432_, 1);
v___x_3434_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3435_ = lean_string_utf8_byte_size(v_a_3433_);
v___x_3436_ = lean_unsigned_to_nat(0u);
v___x_3437_ = lean_nat_dec_eq(v___x_3435_, v___x_3436_);
if (v___x_3437_ == 0)
{
lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3438_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3439_ = lean_string_append(v___x_3438_, v_a_3433_);
lean_dec(v_a_3433_);
v___x_3440_ = lean_string_append(v___x_3434_, v___x_3439_);
lean_dec_ref(v___x_3439_);
v_a_3404_ = v___x_3440_;
goto v___jp_3403_;
}
else
{
lean_dec(v_a_3433_);
v_a_3404_ = v___x_3434_;
goto v___jp_3403_;
}
}
else
{
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v_a_3441_; 
v_a_3441_ = lean_ctor_get(v___x_3432_, 0);
lean_inc(v_a_3441_);
lean_dec_ref_known(v___x_3432_, 1);
v_a_3404_ = v_a_3441_;
goto v___jp_3403_;
}
else
{
lean_object* v_a_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3450_; 
lean_dec_ref_known(v___x_3399_, 1);
lean_del_object(v___x_3401_);
v_a_3442_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3444_ = v___x_3432_;
v_isShared_3445_ = v_isSharedCheck_3450_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_a_3442_);
lean_dec(v___x_3432_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3450_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3446_; lean_object* v___x_3448_; 
v___x_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3446_, 0, v_a_3442_);
if (v_isShared_3445_ == 0)
{
lean_ctor_set(v___x_3444_, 0, v___x_3446_);
v___x_3448_ = v___x_3444_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3446_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
}
else
{
lean_object* v___x_3451_; 
v___x_3451_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3404_ = v___x_3451_;
goto v___jp_3403_;
}
}
}
v___jp_3403_:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; uint8_t v___x_3417_; 
v___x_3405_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3406_ = lean_string_append(v___x_3405_, v_key_3396_);
v___x_3407_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_3408_ = lean_string_append(v___x_3406_, v___x_3407_);
v___x_3409_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3410_ = lean_string_append(v___x_3408_, v___x_3409_);
v___x_3411_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3412_ = lean_string_append(v___x_3410_, v___x_3411_);
v___x_3413_ = l_Lasm_JS_Data_describe(v___x_3399_);
v___x_3414_ = lean_string_append(v___x_3412_, v___x_3413_);
lean_dec_ref(v___x_3413_);
v___x_3415_ = lean_string_utf8_byte_size(v_a_3404_);
v___x_3416_ = lean_unsigned_to_nat(0u);
v___x_3417_ = lean_nat_dec_eq(v___x_3415_, v___x_3416_);
if (v___x_3417_ == 0)
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3424_; 
v___x_3418_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3419_ = lean_string_append(v___x_3418_, v_a_3404_);
lean_dec_ref(v_a_3404_);
v___x_3420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3421_ = lean_string_append(v___x_3419_, v___x_3420_);
v___x_3422_ = lean_string_append(v___x_3414_, v___x_3421_);
lean_dec_ref(v___x_3421_);
if (v_isShared_3402_ == 0)
{
lean_ctor_set_tag(v___x_3401_, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3422_);
v___x_3424_ = v___x_3401_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v___x_3422_);
v___x_3424_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
return v___x_3424_;
}
}
else
{
lean_object* v___x_3427_; 
lean_dec_ref(v_a_3404_);
if (v_isShared_3402_ == 0)
{
lean_ctor_set_tag(v___x_3401_, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3414_);
v___x_3427_ = v___x_3401_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v___x_3414_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
}
}
else
{
lean_object* v___x_3454_; 
lean_dec(v_d_3395_);
v___x_3454_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__3));
return v___x_3454_;
}
v___jp_3397_:
{
lean_object* v___x_3398_; 
v___x_3398_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3398_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_3455_, lean_object* v_key_3456_){
_start:
{
lean_object* v_res_3457_; 
v_res_3457_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3(v_d_3455_, v_key_3456_);
lean_dec_ref(v_key_3456_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2(lean_object* v_context_3459_, lean_object* v_d_3460_){
_start:
{
lean_object* v___y_3466_; lean_object* v___y_3467_; lean_object* v___y_3472_; lean_object* v_received_3473_; lean_object* v___y_3492_; lean_object* v_a_3495_; 
switch(lean_obj_tag(v_d_3460_))
{
case 1:
{
goto v___jp_3462_;
}
case 0:
{
goto v___jp_3462_;
}
default: 
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0));
lean_inc(v_d_3460_);
v___x_3520_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__3(v_d_3460_, v___x_3519_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v_a_3521_; 
v_a_3521_ = lean_ctor_get(v___x_3520_, 0);
lean_inc(v_a_3521_);
lean_dec_ref_known(v___x_3520_, 1);
v_a_3495_ = v_a_3521_;
goto v___jp_3494_;
}
else
{
lean_object* v_a_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
v_a_3522_ = lean_ctor_get(v___x_3520_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3520_, 1);
v___x_3523_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc(v_d_3460_);
v___x_3524_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(v_d_3460_, v___x_3523_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; 
lean_dec(v_a_3522_);
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
lean_inc(v_a_3525_);
lean_dec_ref_known(v___x_3524_, 1);
v_a_3495_ = v_a_3525_;
goto v___jp_3494_;
}
else
{
lean_object* v_a_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v_a_3526_ = lean_ctor_get(v___x_3524_, 0);
lean_inc(v_a_3526_);
lean_dec_ref_known(v___x_3524_, 1);
v___x_3527_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc(v_d_3460_);
v___x_3528_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(v_d_3460_, v___x_3527_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; 
lean_dec(v_a_3526_);
lean_dec(v_a_3522_);
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v_a_3495_ = v_a_3529_;
goto v___jp_3494_;
}
else
{
lean_object* v_a_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
v_a_3530_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3528_, 1);
v___x_3531_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc(v_d_3460_);
v___x_3532_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(v_d_3460_, v___x_3531_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; 
lean_dec(v_a_3530_);
lean_dec(v_a_3526_);
lean_dec(v_a_3522_);
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___x_3532_, 1);
v_a_3495_ = v_a_3533_;
goto v___jp_3494_;
}
else
{
lean_object* v_a_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v_a_3534_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3534_);
lean_dec_ref_known(v___x_3532_, 1);
v___x_3535_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc(v_d_3460_);
v___x_3536_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(v_d_3460_, v___x_3535_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_object* v_a_3537_; 
lean_dec(v_a_3534_);
lean_dec(v_a_3530_);
lean_dec(v_a_3526_);
lean_dec(v_a_3522_);
v_a_3537_ = lean_ctor_get(v___x_3536_, 0);
lean_inc(v_a_3537_);
lean_dec_ref_known(v___x_3536_, 1);
v_a_3495_ = v_a_3537_;
goto v___jp_3494_;
}
else
{
lean_object* v_a_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v_a_3538_ = lean_ctor_get(v___x_3536_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3536_, 1);
v___x_3539_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc(v_d_3460_);
v___x_3540_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(v_d_3460_, v___x_3539_);
if (lean_obj_tag(v___x_3540_) == 0)
{
lean_object* v_a_3541_; 
lean_dec(v_a_3538_);
lean_dec(v_a_3534_);
lean_dec(v_a_3530_);
lean_dec(v_a_3526_);
lean_dec(v_a_3522_);
v_a_3541_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_a_3541_);
lean_dec_ref_known(v___x_3540_, 1);
v_a_3495_ = v_a_3541_;
goto v___jp_3494_;
}
else
{
lean_object* v_a_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v_a_3542_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_a_3542_);
lean_dec_ref_known(v___x_3540_, 1);
v___x_3543_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc(v_d_3460_);
v___x_3544_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(v_d_3460_, v___x_3543_);
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_object* v_a_3545_; 
lean_dec(v_a_3542_);
lean_dec(v_a_3538_);
lean_dec(v_a_3534_);
lean_dec(v_a_3530_);
lean_dec(v_a_3526_);
lean_dec(v_a_3522_);
v_a_3545_ = lean_ctor_get(v___x_3544_, 0);
lean_inc(v_a_3545_);
lean_dec_ref_known(v___x_3544_, 1);
v_a_3495_ = v_a_3545_;
goto v___jp_3494_;
}
else
{
lean_object* v_a_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v_a_3546_ = lean_ctor_get(v___x_3544_, 0);
lean_inc(v_a_3546_);
lean_dec_ref_known(v___x_3544_, 1);
v___x_3547_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc(v_d_3460_);
v___x_3548_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(v_d_3460_, v___x_3547_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v_a_3549_; 
lean_dec(v_a_3546_);
lean_dec(v_a_3542_);
lean_dec(v_a_3538_);
lean_dec(v_a_3534_);
lean_dec(v_a_3530_);
lean_dec(v_a_3526_);
lean_dec(v_a_3522_);
v_a_3549_ = lean_ctor_get(v___x_3548_, 0);
lean_inc(v_a_3549_);
lean_dec_ref_known(v___x_3548_, 1);
v_a_3495_ = v_a_3549_;
goto v___jp_3494_;
}
else
{
lean_object* v_a_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3569_; 
v_a_3550_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3569_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3552_ = v___x_3548_;
v_isShared_3553_ = v_isSharedCheck_3569_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_a_3550_);
lean_dec(v___x_3548_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3569_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3554_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc(v_d_3460_);
v___x_3555_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2_spec__4(v_d_3460_, v___x_3554_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v_a_3556_; 
lean_del_object(v___x_3552_);
lean_dec(v_a_3550_);
lean_dec(v_a_3546_);
lean_dec(v_a_3542_);
lean_dec(v_a_3538_);
lean_dec(v_a_3534_);
lean_dec(v_a_3530_);
lean_dec(v_a_3526_);
lean_dec(v_a_3522_);
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
lean_inc(v_a_3556_);
lean_dec_ref_known(v___x_3555_, 1);
v_a_3495_ = v_a_3556_;
goto v___jp_3494_;
}
else
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3568_; 
lean_dec(v_d_3460_);
v_a_3557_ = lean_ctor_get(v___x_3555_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3559_ = v___x_3555_;
v_isShared_3560_ = v_isSharedCheck_3568_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v___x_3555_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3568_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3561_; lean_object* v___x_3563_; 
v___x_3561_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3561_, 0, v_a_3522_);
lean_ctor_set(v___x_3561_, 1, v_a_3526_);
lean_ctor_set(v___x_3561_, 2, v_a_3530_);
lean_ctor_set(v___x_3561_, 3, v_a_3534_);
lean_ctor_set(v___x_3561_, 4, v_a_3538_);
lean_ctor_set(v___x_3561_, 5, v_a_3542_);
lean_ctor_set(v___x_3561_, 6, v_a_3546_);
lean_ctor_set(v___x_3561_, 7, v_a_3550_);
lean_ctor_set(v___x_3561_, 8, v_a_3557_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 0, v___x_3561_);
v___x_3563_ = v___x_3559_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v___x_3561_);
v___x_3563_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
lean_object* v___x_3565_; 
if (v_isShared_3553_ == 0)
{
lean_ctor_set_tag(v___x_3552_, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3563_);
v___x_3565_ = v___x_3552_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v___x_3563_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
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
v___jp_3462_:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3463_ = lean_box(0);
v___x_3464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3463_);
return v___x_3464_;
}
v___jp_3465_:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3468_ = lean_string_append(v___y_3466_, v___y_3467_);
lean_dec_ref(v___y_3467_);
v___x_3469_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3468_);
v___x_3470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3469_);
return v___x_3470_;
}
v___jp_3471_:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; uint8_t v___x_3485_; 
v___x_3474_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_3475_ = lean_string_append(v___x_3474_, v_context_3459_);
v___x_3476_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_3477_ = lean_string_append(v___x_3475_, v___x_3476_);
v___x_3478_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2___closed__0));
v___x_3479_ = lean_string_append(v___x_3477_, v___x_3478_);
v___x_3480_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_3481_ = lean_string_append(v___x_3479_, v___x_3480_);
v___x_3482_ = lean_string_append(v___x_3481_, v_received_3473_);
lean_dec_ref(v_received_3473_);
v___x_3483_ = lean_string_utf8_byte_size(v___y_3472_);
v___x_3484_ = lean_unsigned_to_nat(0u);
v___x_3485_ = lean_nat_dec_eq(v___x_3483_, v___x_3484_);
if (v___x_3485_ == 0)
{
lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3486_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3487_ = lean_string_append(v___x_3486_, v___y_3472_);
lean_dec_ref(v___y_3472_);
v___x_3488_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3489_ = lean_string_append(v___x_3487_, v___x_3488_);
v___y_3466_ = v___x_3482_;
v___y_3467_ = v___x_3489_;
goto v___jp_3465_;
}
else
{
lean_object* v___x_3490_; 
lean_dec_ref(v___y_3472_);
v___x_3490_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_3466_ = v___x_3482_;
v___y_3467_ = v___x_3490_;
goto v___jp_3465_;
}
}
v___jp_3491_:
{
lean_object* v___x_3493_; 
v___x_3493_ = l_Lasm_JS_Data_describe(v_d_3460_);
v___y_3472_ = v___y_3492_;
v_received_3473_ = v___x_3493_;
goto v___jp_3471_;
}
v___jp_3494_:
{
if (lean_obj_tag(v_d_3460_) == 9)
{
lean_object* v_value_3496_; lean_object* v_description_3497_; lean_object* v___x_3498_; uint8_t v___x_3499_; 
v_value_3496_ = lean_ctor_get(v_d_3460_, 0);
v_description_3497_ = lean_ctor_get(v_d_3460_, 1);
v___x_3498_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3499_ = lean_string_dec_eq(v_description_3497_, v___x_3498_);
if (v___x_3499_ == 0)
{
v___y_3492_ = v_a_3495_;
goto v___jp_3491_;
}
else
{
lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3516_; 
lean_inc(v_value_3496_);
v_isSharedCheck_3516_ = !lean_is_exclusive(v_d_3460_);
if (v_isSharedCheck_3516_ == 0)
{
lean_object* v_unused_3517_; lean_object* v_unused_3518_; 
v_unused_3517_ = lean_ctor_get(v_d_3460_, 1);
lean_dec(v_unused_3517_);
v_unused_3518_ = lean_ctor_get(v_d_3460_, 0);
lean_dec(v_unused_3518_);
v___x_3501_ = v_d_3460_;
v_isShared_3502_ = v_isSharedCheck_3516_;
goto v_resetjp_3500_;
}
else
{
lean_dec(v_d_3460_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3516_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
uint32_t v___x_3503_; uint64_t v___x_3504_; lean_object* v___x_3506_; 
v___x_3503_ = 206;
v___x_3504_ = 0ULL;
lean_inc(v_value_3496_);
if (v_isShared_3502_ == 0)
{
lean_ctor_set(v___x_3501_, 1, v___x_3498_);
v___x_3506_ = v___x_3501_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_value_3496_);
lean_ctor_set(v_reuseFailAlloc_3515_, 1, v___x_3498_);
v___x_3506_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
uint32_t v___x_3507_; lean_object* v___x_3508_; 
v___x_3507_ = lasm_js_value_handle(v_value_3496_);
lean_dec(v_value_3496_);
v___x_3508_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3503_, v___x_3504_, v___x_3506_, v___x_3507_);
lean_dec_ref(v___x_3506_);
if (lean_obj_tag(v___x_3508_) == 0)
{
lean_object* v_a_3509_; uint8_t v___x_3510_; 
v_a_3509_ = lean_ctor_get(v___x_3508_, 0);
lean_inc(v_a_3509_);
lean_dec_ref_known(v___x_3508_, 1);
v___x_3510_ = lean_string_validate_utf8(v_a_3509_);
if (v___x_3510_ == 0)
{
lean_object* v___x_3511_; lean_object* v___x_3512_; 
lean_dec(v_a_3509_);
v___x_3511_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_3512_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3511_);
v___y_3472_ = v_a_3495_;
v_received_3473_ = v___x_3512_;
goto v___jp_3471_;
}
else
{
lean_object* v___x_3513_; 
v___x_3513_ = lean_string_from_utf8_unchecked(v_a_3509_);
v___y_3472_ = v_a_3495_;
v_received_3473_ = v___x_3513_;
goto v___jp_3471_;
}
}
else
{
lean_object* v___x_3514_; 
lean_dec_ref_known(v___x_3508_, 1);
v___x_3514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_3472_ = v_a_3495_;
v_received_3473_ = v___x_3514_;
goto v___jp_3471_;
}
}
}
}
}
else
{
v___y_3492_ = v_a_3495_;
goto v___jp_3491_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3570_, lean_object* v_d_3571_, lean_object* v_a_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2(v_context_3570_, v_d_3571_);
lean_dec_ref(v_context_3570_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1(lean_object* v_context_3574_, lean_object* v_bytes_3575_){
_start:
{
lean_object* v___x_3577_; 
v___x_3577_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3575_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v_a_3578_; lean_object* v___x_3579_; 
v_a_3578_ = lean_ctor_get(v___x_3577_, 0);
lean_inc(v_a_3578_);
lean_dec_ref_known(v___x_3577_, 1);
v___x_3579_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1_spec__2(v_context_3574_, v_a_3578_);
return v___x_3579_;
}
else
{
lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3587_; 
v_a_3580_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3582_ = v___x_3577_;
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_3577_);
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
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1___boxed(lean_object* v_context_3588_, lean_object* v_bytes_3589_, lean_object* v_a_3590_){
_start:
{
lean_object* v_res_3591_; 
v_res_3591_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1(v_context_3588_, v_bytes_3589_);
lean_dec_ref(v_bytes_3589_);
lean_dec_ref(v_context_3588_);
return v_res_3591_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3592_; uint8_t v___x_3593_; uint64_t v___x_3594_; 
v___x_3592_ = 8ULL;
v___x_3593_ = 0;
v___x_3594_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v___x_3593_, v___x_3592_);
return v___x_3594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0(lean_object* v_o_3595_, lean_object* v_name_3596_, lean_object* v_args_3597_){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; uint64_t v___x_3602_; lean_object* v___x_3603_; 
v___x_3599_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3600_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3600_, 0, v_o_3595_);
lean_ctor_set(v___x_3600_, 1, v___x_3599_);
lean_inc_ref(v_name_3596_);
v___x_3601_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3601_, 0, v_name_3596_);
v___x_3602_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__0);
v___x_3603_ = l_Lasm_JS_Value_invokeRaw(v___x_3600_, v___x_3601_, v_args_3597_, v___x_3602_);
if (lean_obj_tag(v___x_3603_) == 0)
{
lean_object* v_a_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
v_a_3604_ = lean_ctor_get(v___x_3603_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3603_, 1);
v___x_3605_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_3606_ = lean_string_append(v___x_3605_, v_name_3596_);
lean_dec_ref(v_name_3596_);
v___x_3607_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__1(v___x_3606_, v_a_3604_);
lean_dec(v_a_3604_);
lean_dec_ref(v___x_3606_);
return v___x_3607_;
}
else
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3615_; 
lean_dec_ref(v_name_3596_);
v_a_3608_ = lean_ctor_get(v___x_3603_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v___x_3603_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3610_ = v___x_3603_;
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3603_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3613_; 
if (v_isShared_3611_ == 0)
{
v___x_3613_ = v___x_3610_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_a_3608_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0___boxed(lean_object* v_o_3616_, lean_object* v_name_3617_, lean_object* v_args_3618_, lean_object* v_a_3619_){
_start:
{
lean_object* v_res_3620_; 
v_res_3620_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_o_3616_, v_name_3617_, v_args_3618_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec(lean_object* v_self_3622_, lean_object* v_input_3623_, lean_object* v_baseURL_3624_){
_start:
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; 
v___x_3626_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_exec___closed__0));
v___x_3627_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_3623_);
v___x_3628_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_3624_);
v___x_3629_ = lean_unsigned_to_nat(2u);
v___x_3630_ = lean_mk_empty_array_with_capacity(v___x_3629_);
v___x_3631_ = lean_array_push(v___x_3630_, v___x_3627_);
v___x_3632_ = lean_array_push(v___x_3631_, v___x_3628_);
v___x_3633_ = l_Lasm_JS_Web_Support_args(v___x_3632_);
v___x_3634_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_self_3622_, v___x_3626_, v___x_3633_);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec___boxed(lean_object* v_self_3635_, lean_object* v_input_3636_, lean_object* v_baseURL_3637_, lean_object* v_a_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Lasm_JS_Web_URLPattern_exec(v_self_3635_, v_input_3636_, v_baseURL_3637_);
return v_res_3639_;
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
