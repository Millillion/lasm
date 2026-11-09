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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_searchParams(lean_object* v_self_1186_){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = ((lean_object*)(l_Lasm_JS_Web_URL_searchParams___closed__0));
v___x_1189_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_1186_, v___x_1188_);
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
uint64_t v___y_1231_; uint64_t v___y_1232_; uint64_t v___x_1275_; uint64_t v___y_1277_; 
v___x_1275_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1228_ == 0)
{
uint64_t v___x_1282_; 
v___x_1282_ = 0ULL;
v___y_1277_ = v___x_1282_;
goto v___jp_1276_;
}
else
{
uint64_t v___x_1283_; 
v___x_1283_ = 2ULL;
v___y_1277_ = v___x_1283_;
goto v___jp_1276_;
}
v___jp_1230_:
{
uint64_t v_flags_1233_; uint32_t v___x_1234_; lean_object* v___x_1235_; uint32_t v___x_1236_; lean_object* v___x_1237_; 
v_flags_1233_ = lean_uint64_lor(v___y_1231_, v___y_1232_);
v___x_1234_ = 214;
v___x_1235_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1226_, v_args_1227_);
v___x_1236_ = 0;
v___x_1237_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1234_, v_flags_1233_, v___x_1235_, v___x_1236_);
lean_dec(v___x_1235_);
if (lean_obj_tag(v___x_1237_) == 0)
{
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
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1258_; 
v_a_1251_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1253_ = v___x_1237_;
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1237_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
lean_ctor_set_tag(v___x_1253_, 1);
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_a_1251_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1274_; 
v_a_1259_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1261_ = v___x_1237_;
v_isShared_1262_ = v_isSharedCheck_1274_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1237_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1274_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1272_; 
v___x_1263_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1264_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1226_);
v___x_1265_ = lean_string_append(v___x_1263_, v___x_1264_);
lean_dec_ref(v___x_1264_);
v___x_1266_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1267_ = lean_string_append(v___x_1265_, v___x_1266_);
v___x_1268_ = lean_io_error_to_string(v_a_1259_);
v___x_1269_ = lean_string_append(v___x_1267_, v___x_1268_);
lean_dec_ref(v___x_1268_);
v___x_1270_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v___x_1270_);
v___x_1272_ = v___x_1261_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1270_);
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
v___jp_1276_:
{
uint8_t v_construct_1278_; uint64_t v___x_1279_; 
v_construct_1278_ = lean_ctor_get_uint8(v_b_1226_, sizeof(void*)*4);
v___x_1279_ = lean_uint64_lor(v___x_1275_, v___y_1277_);
if (v_construct_1278_ == 0)
{
uint64_t v___x_1280_; 
v___x_1280_ = 0ULL;
v___y_1231_ = v___x_1279_;
v___y_1232_ = v___x_1280_;
goto v___jp_1230_;
}
else
{
uint64_t v___x_1281_; 
v___x_1281_ = 4ULL;
v___y_1231_ = v___x_1279_;
v___y_1232_ = v___x_1281_;
goto v___jp_1230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0___boxed(lean_object* v_b_1284_, lean_object* v_args_1285_, lean_object* v_await_1286_, lean_object* v_a_1287_){
_start:
{
uint8_t v_await_boxed_1288_; lean_object* v_res_1289_; 
v_await_boxed_1288_ = lean_unbox(v_await_1286_);
v_res_1289_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v_b_1284_, v_args_1285_, v_await_boxed_1288_);
lean_dec_ref(v_b_1284_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL(lean_object* v_obj_1298_){
_start:
{
uint8_t v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___y_1304_; lean_object* v_value_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1300_ = 0;
v___x_1301_ = lean_unsigned_to_nat(1u);
v___x_1302_ = ((lean_object*)(l_Lasm_JS_Web_URL_createObjectURL___closed__2));
v_value_1309_ = lean_ctor_get(v_obj_1298_, 0);
v___x_1310_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
lean_inc(v_value_1309_);
v___x_1311_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1311_, 0, v_value_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___y_1304_ = v___x_1311_;
goto v___jp_1303_;
v___jp_1303_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1305_ = lean_mk_empty_array_with_capacity(v___x_1301_);
v___x_1306_ = lean_array_push(v___x_1305_, v___y_1304_);
v___x_1307_ = l_Lasm_JS_Web_Support_args(v___x_1306_);
v___x_1308_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_1302_, v___x_1307_, v___x_1300_);
return v___x_1308_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_createObjectURL___boxed(lean_object* v_obj_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lasm_JS_Web_URL_createObjectURL(v_obj_1312_);
lean_dec_ref(v_obj_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(lean_object* v_b_1315_, lean_object* v_args_1316_, uint8_t v_await_1317_){
_start:
{
uint64_t v___y_1320_; uint64_t v___y_1321_; uint64_t v___x_1362_; uint64_t v___y_1364_; 
v___x_1362_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1317_ == 0)
{
uint64_t v___x_1369_; 
v___x_1369_ = 0ULL;
v___y_1364_ = v___x_1369_;
goto v___jp_1363_;
}
else
{
uint64_t v___x_1370_; 
v___x_1370_ = 2ULL;
v___y_1364_ = v___x_1370_;
goto v___jp_1363_;
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
lean_object* v___x_1329_; 
lean_dec_ref_known(v___x_1328_, 1);
v___x_1329_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_1329_;
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1337_; 
v_a_1330_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1332_ = v___x_1328_;
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1328_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1330_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
else
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1345_; 
v_a_1338_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1340_ = v___x_1326_;
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1326_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
lean_ctor_set_tag(v___x_1340_, 1);
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1338_);
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
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1361_; 
v_a_1346_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1348_ = v___x_1326_;
v_isShared_1349_ = v_isSharedCheck_1361_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1326_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1361_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1359_; 
v___x_1350_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1351_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1315_);
v___x_1352_ = lean_string_append(v___x_1350_, v___x_1351_);
lean_dec_ref(v___x_1351_);
v___x_1353_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1354_ = lean_string_append(v___x_1352_, v___x_1353_);
v___x_1355_ = lean_io_error_to_string(v_a_1346_);
v___x_1356_ = lean_string_append(v___x_1354_, v___x_1355_);
lean_dec_ref(v___x_1355_);
v___x_1357_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 0, v___x_1357_);
v___x_1359_ = v___x_1348_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1357_);
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
v___jp_1363_:
{
uint8_t v_construct_1365_; uint64_t v___x_1366_; 
v_construct_1365_ = lean_ctor_get_uint8(v_b_1315_, sizeof(void*)*4);
v___x_1366_ = lean_uint64_lor(v___x_1362_, v___y_1364_);
if (v_construct_1365_ == 0)
{
uint64_t v___x_1367_; 
v___x_1367_ = 0ULL;
v___y_1320_ = v___x_1366_;
v___y_1321_ = v___x_1367_;
goto v___jp_1319_;
}
else
{
uint64_t v___x_1368_; 
v___x_1368_ = 4ULL;
v___y_1320_ = v___x_1366_;
v___y_1321_ = v___x_1368_;
goto v___jp_1319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0___boxed(lean_object* v_b_1371_, lean_object* v_args_1372_, lean_object* v_await_1373_, lean_object* v_a_1374_){
_start:
{
uint8_t v_await_boxed_1375_; lean_object* v_res_1376_; 
v_await_boxed_1375_ = lean_unbox(v_await_1373_);
v_res_1376_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v_b_1371_, v_args_1372_, v_await_boxed_1375_);
lean_dec_ref(v_b_1371_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL(lean_object* v_url_1385_){
_start:
{
uint8_t v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1387_ = 0;
v___x_1388_ = lean_unsigned_to_nat(1u);
v___x_1389_ = ((lean_object*)(l_Lasm_JS_Web_URL_revokeObjectURL___closed__2));
v___x_1390_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1390_, 0, v_url_1385_);
v___x_1391_ = lean_mk_empty_array_with_capacity(v___x_1388_);
v___x_1392_ = lean_array_push(v___x_1391_, v___x_1390_);
v___x_1393_ = l_Lasm_JS_Web_Support_args(v___x_1392_);
v___x_1394_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_1389_, v___x_1393_, v___x_1387_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_revokeObjectURL___boxed(lean_object* v_url_1395_, lean_object* v_a_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lasm_JS_Web_URL_revokeObjectURL(v_url_1395_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(lean_object* v_context_1399_, lean_object* v_d_1400_){
_start:
{
lean_object* v___y_1406_; lean_object* v___y_1407_; 
switch(lean_obj_tag(v_d_1400_))
{
case 1:
{
goto v___jp_1402_;
}
case 0:
{
goto v___jp_1402_;
}
default: 
{
if (lean_obj_tag(v_d_1400_) == 9)
{
lean_object* v_value_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v_value_1411_ = lean_ctor_get(v_d_1400_, 0);
lean_inc(v_value_1411_);
lean_dec_ref_known(v_d_1400_, 2);
v___x_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1412_, 0, v_value_1411_);
v___x_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
return v___x_1413_;
}
else
{
lean_object* v___x_1414_; lean_object* v_received_1416_; 
v___x_1414_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1400_) == 9)
{
lean_object* v_value_1430_; lean_object* v_description_1431_; uint8_t v___x_1432_; 
v_value_1430_ = lean_ctor_get(v_d_1400_, 0);
v_description_1431_ = lean_ctor_get(v_d_1400_, 1);
v___x_1432_ = lean_string_dec_eq(v_description_1431_, v___x_1414_);
if (v___x_1432_ == 0)
{
goto v___jp_1428_;
}
else
{
uint32_t v___x_1433_; uint64_t v___x_1434_; lean_object* v___x_1435_; uint32_t v___x_1436_; lean_object* v___x_1437_; 
lean_inc_n(v_value_1430_, 2);
lean_dec_ref_known(v_d_1400_, 2);
v___x_1433_ = 206;
v___x_1434_ = 0ULL;
v___x_1435_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1435_, 0, v_value_1430_);
lean_ctor_set(v___x_1435_, 1, v___x_1414_);
v___x_1436_ = lasm_js_value_handle(v_value_1430_);
lean_dec(v_value_1430_);
v___x_1437_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1433_, v___x_1434_, v___x_1435_, v___x_1436_);
lean_dec_ref_known(v___x_1435_, 2);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; uint8_t v___x_1439_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = lean_string_validate_utf8(v_a_1438_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; lean_object* v___x_1441_; 
lean_dec(v_a_1438_);
v___x_1440_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_1441_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1440_);
v_received_1416_ = v___x_1441_;
goto v___jp_1415_;
}
else
{
lean_object* v___x_1442_; 
v___x_1442_ = lean_string_from_utf8_unchecked(v_a_1438_);
v_received_1416_ = v___x_1442_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1443_; 
lean_dec_ref_known(v___x_1437_, 1);
v___x_1443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1416_ = v___x_1443_;
goto v___jp_1415_;
}
}
}
else
{
goto v___jp_1428_;
}
v___jp_1415_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1417_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1418_ = lean_string_append(v___x_1417_, v_context_1399_);
v___x_1419_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1420_ = lean_string_append(v___x_1418_, v___x_1419_);
v___x_1421_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___closed__0));
v___x_1422_ = lean_string_append(v___x_1420_, v___x_1421_);
v___x_1423_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1424_ = lean_string_append(v___x_1422_, v___x_1423_);
v___x_1425_ = lean_string_append(v___x_1424_, v_received_1416_);
lean_dec_ref(v_received_1416_);
v___x_1426_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; 
v___x_1427_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1406_ = v___x_1425_;
v___y_1407_ = v___x_1427_;
goto v___jp_1405_;
}
else
{
v___y_1406_ = v___x_1425_;
v___y_1407_ = v___x_1414_;
goto v___jp_1405_;
}
}
v___jp_1428_:
{
lean_object* v___x_1429_; 
v___x_1429_ = l_Lasm_JS_Data_describe(v_d_1400_);
v_received_1416_ = v___x_1429_;
goto v___jp_1415_;
}
}
}
}
v___jp_1402_:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_box(0);
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
return v___x_1404_;
}
v___jp_1405_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1408_ = lean_string_append(v___y_1406_, v___y_1407_);
v___x_1409_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
v___x_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
return v___x_1410_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0___boxed(lean_object* v_context_1444_, lean_object* v_d_1445_, lean_object* v_a_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v_context_1444_, v_d_1445_);
lean_dec_ref(v_context_1444_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(lean_object* v_b_1448_, lean_object* v_args_1449_, uint8_t v_await_1450_){
_start:
{
uint64_t v___y_1453_; uint64_t v___y_1454_; uint64_t v___x_1497_; uint64_t v___y_1499_; 
v___x_1497_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1450_ == 0)
{
uint64_t v___x_1504_; 
v___x_1504_ = 0ULL;
v___y_1499_ = v___x_1504_;
goto v___jp_1498_;
}
else
{
uint64_t v___x_1505_; 
v___x_1505_ = 2ULL;
v___y_1499_ = v___x_1505_;
goto v___jp_1498_;
}
v___jp_1452_:
{
uint64_t v_flags_1455_; uint32_t v___x_1456_; lean_object* v___x_1457_; uint32_t v___x_1458_; lean_object* v___x_1459_; 
v_flags_1455_ = lean_uint64_lor(v___y_1453_, v___y_1454_);
v___x_1456_ = 214;
v___x_1457_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1448_, v_args_1449_);
v___x_1458_ = 0;
v___x_1459_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1456_, v_flags_1455_, v___x_1457_, v___x_1458_);
lean_dec(v___x_1457_);
if (lean_obj_tag(v___x_1459_) == 0)
{
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_object* v_a_1460_; lean_object* v___x_1461_; 
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1460_);
lean_dec_ref_known(v___x_1459_, 1);
v___x_1461_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1460_);
lean_dec(v_a_1460_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1461_, 1);
v___x_1463_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1448_);
v___x_1464_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0_spec__0(v___x_1463_, v_a_1462_);
lean_dec_ref(v___x_1463_);
return v___x_1464_;
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
v_a_1465_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1461_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1461_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
else
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1480_; 
v_a_1473_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1475_ = v___x_1459_;
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1459_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1478_; 
if (v_isShared_1476_ == 0)
{
lean_ctor_set_tag(v___x_1475_, 1);
v___x_1478_ = v___x_1475_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1473_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1496_; 
v_a_1481_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1483_ = v___x_1459_;
v_isShared_1484_ = v_isSharedCheck_1496_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1459_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1496_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1494_; 
v___x_1485_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1486_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1448_);
v___x_1487_ = lean_string_append(v___x_1485_, v___x_1486_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1489_ = lean_string_append(v___x_1487_, v___x_1488_);
v___x_1490_ = lean_io_error_to_string(v_a_1481_);
v___x_1491_ = lean_string_append(v___x_1489_, v___x_1490_);
lean_dec_ref(v___x_1490_);
v___x_1492_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 0, v___x_1492_);
v___x_1494_ = v___x_1483_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v___x_1492_);
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
v___jp_1498_:
{
uint8_t v_construct_1500_; uint64_t v___x_1501_; 
v_construct_1500_ = lean_ctor_get_uint8(v_b_1448_, sizeof(void*)*4);
v___x_1501_ = lean_uint64_lor(v___x_1497_, v___y_1499_);
if (v_construct_1500_ == 0)
{
uint64_t v___x_1502_; 
v___x_1502_ = 0ULL;
v___y_1453_ = v___x_1501_;
v___y_1454_ = v___x_1502_;
goto v___jp_1452_;
}
else
{
uint64_t v___x_1503_; 
v___x_1503_ = 4ULL;
v___y_1453_ = v___x_1501_;
v___y_1454_ = v___x_1503_;
goto v___jp_1452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0___boxed(lean_object* v_b_1506_, lean_object* v_args_1507_, lean_object* v_await_1508_, lean_object* v_a_1509_){
_start:
{
uint8_t v_await_boxed_1510_; lean_object* v_res_1511_; 
v_await_boxed_1510_ = lean_unbox(v_await_1508_);
v_res_1511_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v_b_1506_, v_args_1507_, v_await_boxed_1510_);
lean_dec_ref(v_b_1506_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse(lean_object* v_url_1520_, lean_object* v_base_1521_){
_start:
{
uint8_t v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1523_ = 0;
v___x_1524_ = lean_unsigned_to_nat(2u);
v___x_1525_ = ((lean_object*)(l_Lasm_JS_Web_URL_parse___closed__2));
v___x_1526_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1526_, 0, v_url_1520_);
v___x_1527_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1521_);
v___x_1528_ = lean_mk_empty_array_with_capacity(v___x_1524_);
v___x_1529_ = lean_array_push(v___x_1528_, v___x_1526_);
v___x_1530_ = lean_array_push(v___x_1529_, v___x_1527_);
v___x_1531_ = l_Lasm_JS_Web_Support_args(v___x_1530_);
v___x_1532_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_parse_spec__0(v___x_1525_, v___x_1531_, v___x_1523_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_parse___boxed(lean_object* v_url_1533_, lean_object* v_base_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lasm_JS_Web_URL_parse(v_url_1533_, v_base_1534_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(lean_object* v_b_1537_, lean_object* v_args_1538_, uint8_t v_await_1539_){
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
v___x_1553_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v___x_1552_, v_a_1551_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0___boxed(lean_object* v_b_1595_, lean_object* v_args_1596_, lean_object* v_await_1597_, lean_object* v_a_1598_){
_start:
{
uint8_t v_await_boxed_1599_; lean_object* v_res_1600_; 
v_await_boxed_1599_ = lean_unbox(v_await_1597_);
v_res_1600_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v_b_1595_, v_args_1596_, v_await_boxed_1599_);
lean_dec_ref(v_b_1595_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse(lean_object* v_url_1609_, lean_object* v_base_1610_){
_start:
{
uint8_t v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1612_ = 0;
v___x_1613_ = lean_unsigned_to_nat(2u);
v___x_1614_ = ((lean_object*)(l_Lasm_JS_Web_URL_canParse___closed__2));
v___x_1615_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1615_, 0, v_url_1609_);
v___x_1616_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_base_1610_);
v___x_1617_ = lean_mk_empty_array_with_capacity(v___x_1613_);
v___x_1618_ = lean_array_push(v___x_1617_, v___x_1615_);
v___x_1619_ = lean_array_push(v___x_1618_, v___x_1616_);
v___x_1620_ = l_Lasm_JS_Web_Support_args(v___x_1619_);
v___x_1621_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v___x_1614_, v___x_1620_, v___x_1612_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_canParse___boxed(lean_object* v_url_1622_, lean_object* v_base_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Lasm_JS_Web_URL_canParse(v_url_1622_, v_base_1623_);
return v_res_1625_;
}
}
static lean_object* _init_l_Lasm_JS_Web_URL_toJSON___closed__1(void){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1628_ = l_Lasm_JS_Web_Support_args(v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON(lean_object* v_self_1629_){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Web_URL_toJSON___closed__0));
v___x_1632_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_1633_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1629_, v___x_1631_, v___x_1632_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URL_toJSON___boxed(lean_object* v_self_1634_, lean_object* v_a_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l_Lasm_JS_Web_URL_toJSON(v_self_1634_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t v_sz_1637_, size_t v_i_1638_, lean_object* v_bs_1639_){
_start:
{
uint8_t v___x_1640_; 
v___x_1640_ = lean_usize_dec_lt(v_i_1638_, v_sz_1637_);
if (v___x_1640_ == 0)
{
return v_bs_1639_;
}
else
{
lean_object* v_v_1641_; lean_object* v___x_1642_; lean_object* v_bs_x27_1643_; lean_object* v___x_1644_; size_t v___x_1645_; size_t v___x_1646_; lean_object* v___x_1647_; 
v_v_1641_ = lean_array_uget(v_bs_1639_, v_i_1638_);
v___x_1642_ = lean_unsigned_to_nat(0u);
v_bs_x27_1643_ = lean_array_uset(v_bs_1639_, v_i_1638_, v___x_1642_);
v___x_1644_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1644_, 0, v_v_1641_);
v___x_1645_ = ((size_t)1ULL);
v___x_1646_ = lean_usize_add(v_i_1638_, v___x_1645_);
v___x_1647_ = lean_array_uset(v_bs_x27_1643_, v_i_1638_, v___x_1644_);
v_i_1638_ = v___x_1646_;
v_bs_1639_ = v___x_1647_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0___boxed(lean_object* v_sz_1649_, lean_object* v_i_1650_, lean_object* v_bs_1651_){
_start:
{
size_t v_sz_boxed_1652_; size_t v_i_boxed_1653_; lean_object* v_res_1654_; 
v_sz_boxed_1652_ = lean_unbox_usize(v_sz_1649_);
lean_dec(v_sz_1649_);
v_i_boxed_1653_ = lean_unbox_usize(v_i_1650_);
lean_dec(v_i_1650_);
v_res_1654_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_boxed_1652_, v_i_boxed_1653_, v_bs_1651_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(size_t v_sz_1655_, size_t v_i_1656_, lean_object* v_bs_1657_){
_start:
{
uint8_t v___x_1658_; 
v___x_1658_ = lean_usize_dec_lt(v_i_1656_, v_sz_1655_);
if (v___x_1658_ == 0)
{
return v_bs_1657_;
}
else
{
lean_object* v_v_1659_; lean_object* v___x_1660_; lean_object* v_bs_x27_1661_; size_t v_sz_1662_; size_t v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; size_t v___x_1666_; size_t v___x_1667_; lean_object* v___x_1668_; 
v_v_1659_ = lean_array_uget(v_bs_1657_, v_i_1656_);
v___x_1660_ = lean_unsigned_to_nat(0u);
v_bs_x27_1661_ = lean_array_uset(v_bs_1657_, v_i_1656_, v___x_1660_);
v_sz_1662_ = lean_array_size(v_v_1659_);
v___x_1663_ = ((size_t)0ULL);
v___x_1664_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_1662_, v___x_1663_, v_v_1659_);
v___x_1665_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
v___x_1666_ = ((size_t)1ULL);
v___x_1667_ = lean_usize_add(v_i_1656_, v___x_1666_);
v___x_1668_ = lean_array_uset(v_bs_x27_1661_, v_i_1656_, v___x_1665_);
v_i_1656_ = v___x_1667_;
v_bs_1657_ = v___x_1668_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1___boxed(lean_object* v_sz_1670_, lean_object* v_i_1671_, lean_object* v_bs_1672_){
_start:
{
size_t v_sz_boxed_1673_; size_t v_i_boxed_1674_; lean_object* v_res_1675_; 
v_sz_boxed_1673_ = lean_unbox_usize(v_sz_1670_);
lean_dec(v_sz_1670_);
v_i_boxed_1674_ = lean_unbox_usize(v_i_1671_);
lean_dec(v_i_1671_);
v_res_1675_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_boxed_1673_, v_i_boxed_1674_, v_bs_1672_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t v_sz_1676_, size_t v_i_1677_, lean_object* v_bs_1678_){
_start:
{
uint8_t v___x_1679_; 
v___x_1679_ = lean_usize_dec_lt(v_i_1677_, v_sz_1676_);
if (v___x_1679_ == 0)
{
return v_bs_1678_;
}
else
{
lean_object* v_v_1680_; lean_object* v_fst_1681_; lean_object* v_snd_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1696_; 
v_v_1680_ = lean_array_uget(v_bs_1678_, v_i_1677_);
v_fst_1681_ = lean_ctor_get(v_v_1680_, 0);
v_snd_1682_ = lean_ctor_get(v_v_1680_, 1);
v_isSharedCheck_1696_ = !lean_is_exclusive(v_v_1680_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1684_ = v_v_1680_;
v_isShared_1685_ = v_isSharedCheck_1696_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_snd_1682_);
lean_inc(v_fst_1681_);
lean_dec(v_v_1680_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1696_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1686_; lean_object* v_bs_x27_1687_; lean_object* v___x_1688_; lean_object* v___x_1690_; 
v___x_1686_ = lean_unsigned_to_nat(0u);
v_bs_x27_1687_ = lean_array_uset(v_bs_1678_, v_i_1677_, v___x_1686_);
v___x_1688_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1688_, 0, v_snd_1682_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 1, v___x_1688_);
v___x_1690_ = v___x_1684_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_fst_1681_);
lean_ctor_set(v_reuseFailAlloc_1695_, 1, v___x_1688_);
v___x_1690_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
size_t v___x_1691_; size_t v___x_1692_; lean_object* v___x_1693_; 
v___x_1691_ = ((size_t)1ULL);
v___x_1692_ = lean_usize_add(v_i_1677_, v___x_1691_);
v___x_1693_ = lean_array_uset(v_bs_x27_1687_, v_i_1677_, v___x_1690_);
v_i_1677_ = v___x_1692_;
v_bs_1678_ = v___x_1693_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2___boxed(lean_object* v_sz_1697_, lean_object* v_i_1698_, lean_object* v_bs_1699_){
_start:
{
size_t v_sz_boxed_1700_; size_t v_i_boxed_1701_; lean_object* v_res_1702_; 
v_sz_boxed_1700_ = lean_unbox_usize(v_sz_1697_);
lean_dec(v_sz_1697_);
v_i_boxed_1701_ = lean_unbox_usize(v_i_1698_);
lean_dec(v_i_1698_);
v_res_1702_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_boxed_1700_, v_i_boxed_1701_, v_bs_1699_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(lean_object* v_x_1703_){
_start:
{
if (lean_obj_tag(v_x_1703_) == 0)
{
lean_object* v___x_1704_; 
v___x_1704_ = lean_box(0);
return v___x_1704_;
}
else
{
lean_object* v_val_1705_; 
v_val_1705_ = lean_ctor_get(v_x_1703_, 0);
lean_inc(v_val_1705_);
lean_dec_ref_known(v_x_1703_, 1);
switch(lean_obj_tag(v_val_1705_))
{
case 0:
{
lean_object* v_value_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1716_; 
v_value_1706_ = lean_ctor_get(v_val_1705_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_val_1705_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1708_ = v_val_1705_;
v_isShared_1709_ = v_isSharedCheck_1716_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_value_1706_);
lean_dec(v_val_1705_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1716_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
size_t v_sz_1710_; size_t v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1714_; 
v_sz_1710_ = lean_array_size(v_value_1706_);
v___x_1711_ = ((size_t)0ULL);
v___x_1712_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__1(v_sz_1710_, v___x_1711_, v_value_1706_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set_tag(v___x_1708_, 7);
lean_ctor_set(v___x_1708_, 0, v___x_1712_);
v___x_1714_ = v___x_1708_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v___x_1712_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
case 1:
{
lean_object* v_value_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1727_; 
v_value_1717_ = lean_ctor_get(v_val_1705_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v_val_1705_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1719_ = v_val_1705_;
v_isShared_1720_ = v_isSharedCheck_1727_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_value_1717_);
lean_dec(v_val_1705_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1727_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
size_t v_sz_1721_; size_t v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1725_; 
v_sz_1721_ = lean_array_size(v_value_1717_);
v___x_1722_ = ((size_t)0ULL);
v___x_1723_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_1721_, v___x_1722_, v_value_1717_);
if (v_isShared_1720_ == 0)
{
lean_ctor_set_tag(v___x_1719_, 8);
lean_ctor_set(v___x_1719_, 0, v___x_1723_);
v___x_1725_ = v___x_1719_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1723_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
default: 
{
lean_object* v_value_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1735_; 
v_value_1728_ = lean_ctor_get(v_val_1705_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v_val_1705_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1730_ = v_val_1705_;
v_isShared_1731_ = v_isSharedCheck_1735_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_value_1728_);
lean_dec(v_val_1705_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1735_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
if (v_isShared_1731_ == 0)
{
lean_ctor_set_tag(v___x_1730_, 4);
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_value_1728_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(lean_object* v_context_1736_, lean_object* v_d_1737_){
_start:
{
lean_object* v___y_1740_; lean_object* v___y_1741_; 
if (lean_obj_tag(v_d_1737_) == 9)
{
lean_object* v_value_1745_; lean_object* v___x_1746_; 
v_value_1745_ = lean_ctor_get(v_d_1737_, 0);
lean_inc(v_value_1745_);
lean_dec_ref_known(v_d_1737_, 2);
v___x_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1746_, 0, v_value_1745_);
return v___x_1746_;
}
else
{
lean_object* v___x_1747_; lean_object* v_received_1749_; 
v___x_1747_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1737_) == 9)
{
lean_object* v_value_1763_; lean_object* v_description_1764_; uint8_t v___x_1765_; 
v_value_1763_ = lean_ctor_get(v_d_1737_, 0);
v_description_1764_ = lean_ctor_get(v_d_1737_, 1);
v___x_1765_ = lean_string_dec_eq(v_description_1764_, v___x_1747_);
if (v___x_1765_ == 0)
{
goto v___jp_1761_;
}
else
{
uint32_t v___x_1766_; uint64_t v___x_1767_; lean_object* v___x_1768_; uint32_t v___x_1769_; lean_object* v___x_1770_; 
lean_inc_n(v_value_1763_, 2);
lean_dec_ref_known(v_d_1737_, 2);
v___x_1766_ = 206;
v___x_1767_ = 0ULL;
v___x_1768_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1768_, 0, v_value_1763_);
lean_ctor_set(v___x_1768_, 1, v___x_1747_);
v___x_1769_ = lasm_js_value_handle(v_value_1763_);
lean_dec(v_value_1763_);
v___x_1770_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1766_, v___x_1767_, v___x_1768_, v___x_1769_);
lean_dec_ref_known(v___x_1768_, 2);
if (lean_obj_tag(v___x_1770_) == 0)
{
lean_object* v_a_1771_; uint8_t v___x_1772_; 
v_a_1771_ = lean_ctor_get(v___x_1770_, 0);
lean_inc(v_a_1771_);
lean_dec_ref_known(v___x_1770_, 1);
v___x_1772_ = lean_string_validate_utf8(v_a_1771_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
lean_dec(v_a_1771_);
v___x_1773_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_1774_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1773_);
v_received_1749_ = v___x_1774_;
goto v___jp_1748_;
}
else
{
lean_object* v___x_1775_; 
v___x_1775_ = lean_string_from_utf8_unchecked(v_a_1771_);
v_received_1749_ = v___x_1775_;
goto v___jp_1748_;
}
}
else
{
lean_object* v___x_1776_; 
lean_dec_ref_known(v___x_1770_, 1);
v___x_1776_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1749_ = v___x_1776_;
goto v___jp_1748_;
}
}
}
else
{
goto v___jp_1761_;
}
v___jp_1748_:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1750_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1751_ = lean_string_append(v___x_1750_, v_context_1736_);
v___x_1752_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1753_ = lean_string_append(v___x_1751_, v___x_1752_);
v___x_1754_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLSearchParams___closed__0));
v___x_1755_ = lean_string_append(v___x_1753_, v___x_1754_);
v___x_1756_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1757_ = lean_string_append(v___x_1755_, v___x_1756_);
v___x_1758_ = lean_string_append(v___x_1757_, v_received_1749_);
lean_dec_ref(v_received_1749_);
v___x_1759_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; 
v___x_1760_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1740_ = v___x_1758_;
v___y_1741_ = v___x_1760_;
goto v___jp_1739_;
}
else
{
v___y_1740_ = v___x_1758_;
v___y_1741_ = v___x_1747_;
goto v___jp_1739_;
}
}
v___jp_1761_:
{
lean_object* v___x_1762_; 
v___x_1762_ = l_Lasm_JS_Data_describe(v_d_1737_);
v_received_1749_ = v___x_1762_;
goto v___jp_1748_;
}
}
v___jp_1739_:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1742_ = lean_string_append(v___y_1740_, v___y_1741_);
v___x_1743_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1742_);
v___x_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
return v___x_1744_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4___boxed(lean_object* v_context_1777_, lean_object* v_d_1778_, lean_object* v_a_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(v_context_1777_, v_d_1778_);
lean_dec_ref(v_context_1777_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(lean_object* v_b_1781_, lean_object* v_args_1782_, uint8_t v_await_1783_){
_start:
{
uint64_t v___y_1786_; uint64_t v___y_1787_; uint64_t v___x_1830_; uint64_t v___y_1832_; 
v___x_1830_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1783_ == 0)
{
uint64_t v___x_1837_; 
v___x_1837_ = 0ULL;
v___y_1832_ = v___x_1837_;
goto v___jp_1831_;
}
else
{
uint64_t v___x_1838_; 
v___x_1838_ = 2ULL;
v___y_1832_ = v___x_1838_;
goto v___jp_1831_;
}
v___jp_1785_:
{
uint64_t v_flags_1788_; uint32_t v___x_1789_; lean_object* v___x_1790_; uint32_t v___x_1791_; lean_object* v___x_1792_; 
v_flags_1788_ = lean_uint64_lor(v___y_1786_, v___y_1787_);
v___x_1789_ = 214;
v___x_1790_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1781_, v_args_1782_);
v___x_1791_ = 0;
v___x_1792_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1789_, v_flags_1788_, v___x_1790_, v___x_1791_);
lean_dec(v___x_1790_);
if (lean_obj_tag(v___x_1792_) == 0)
{
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1794_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v___x_1794_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1793_);
lean_dec(v_a_1793_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_a_1795_);
lean_dec_ref_known(v___x_1794_, 1);
v___x_1796_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1781_);
v___x_1797_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1_spec__4(v___x_1796_, v_a_1795_);
lean_dec_ref(v___x_1796_);
return v___x_1797_;
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
v_a_1798_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1794_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1794_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
v_a_1806_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1792_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1792_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 1);
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
else
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1829_; 
v_a_1814_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1816_ = v___x_1792_;
v_isShared_1817_ = v_isSharedCheck_1829_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1792_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1829_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1827_; 
v___x_1818_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1819_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1781_);
v___x_1820_ = lean_string_append(v___x_1818_, v___x_1819_);
lean_dec_ref(v___x_1819_);
v___x_1821_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_1822_ = lean_string_append(v___x_1820_, v___x_1821_);
v___x_1823_ = lean_io_error_to_string(v_a_1814_);
v___x_1824_ = lean_string_append(v___x_1822_, v___x_1823_);
lean_dec_ref(v___x_1823_);
v___x_1825_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 0, v___x_1825_);
v___x_1827_ = v___x_1816_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v___x_1825_);
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
v___jp_1831_:
{
uint8_t v_construct_1833_; uint64_t v___x_1834_; 
v_construct_1833_ = lean_ctor_get_uint8(v_b_1781_, sizeof(void*)*4);
v___x_1834_ = lean_uint64_lor(v___x_1830_, v___y_1832_);
if (v_construct_1833_ == 0)
{
uint64_t v___x_1835_; 
v___x_1835_ = 0ULL;
v___y_1786_ = v___x_1834_;
v___y_1787_ = v___x_1835_;
goto v___jp_1785_;
}
else
{
uint64_t v___x_1836_; 
v___x_1836_ = 4ULL;
v___y_1786_ = v___x_1834_;
v___y_1787_ = v___x_1836_;
goto v___jp_1785_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1___boxed(lean_object* v_b_1839_, lean_object* v_args_1840_, lean_object* v_await_1841_, lean_object* v_a_1842_){
_start:
{
uint8_t v_await_boxed_1843_; lean_object* v_res_1844_; 
v_await_boxed_1843_ = lean_unbox(v_await_1841_);
v_res_1844_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v_b_1839_, v_args_1840_, v_await_boxed_1843_);
lean_dec_ref(v_b_1839_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new(lean_object* v_init_1853_){
_start:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; uint8_t v___x_1861_; lean_object* v___x_1862_; 
v___x_1855_ = lean_unsigned_to_nat(1u);
v___x_1856_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_new___closed__2));
v___x_1857_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0(v_init_1853_);
v___x_1858_ = lean_mk_empty_array_with_capacity(v___x_1855_);
v___x_1859_ = lean_array_push(v___x_1858_, v___x_1857_);
v___x_1860_ = l_Lasm_JS_Web_Support_args(v___x_1859_);
v___x_1861_ = 0;
v___x_1862_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLSearchParams_new_spec__1(v___x_1856_, v___x_1860_, v___x_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_new___boxed(lean_object* v_init_1863_, lean_object* v_a_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lasm_JS_Web_URLSearchParams_new(v_init_1863_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size(lean_object* v_self_1867_){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_size___closed__0));
v___x_1870_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(v_self_1867_, v___x_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_size___boxed(lean_object* v_self_1871_, lean_object* v_a_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lasm_JS_Web_URLSearchParams_size(v_self_1871_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString(lean_object* v_self_1874_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1876_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__0));
v___x_1877_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_1878_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1874_, v___x_1876_, v___x_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_toString___boxed(lean_object* v_self_1879_, lean_object* v_a_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lasm_JS_Web_URLSearchParams_toString(v_self_1879_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append(lean_object* v_self_1883_, lean_object* v_name_1884_, lean_object* v_value_1885_){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1887_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_append___closed__0));
v___x_1888_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1888_, 0, v_name_1884_);
v___x_1889_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1889_, 0, v_value_1885_);
v___x_1890_ = lean_unsigned_to_nat(2u);
v___x_1891_ = lean_mk_empty_array_with_capacity(v___x_1890_);
v___x_1892_ = lean_array_push(v___x_1891_, v___x_1888_);
v___x_1893_ = lean_array_push(v___x_1892_, v___x_1889_);
v___x_1894_ = l_Lasm_JS_Web_Support_args(v___x_1893_);
v___x_1895_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1883_, v___x_1887_, v___x_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_append___boxed(lean_object* v_self_1896_, lean_object* v_name_1897_, lean_object* v_value_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lasm_JS_Web_URLSearchParams_append(v_self_1896_, v_name_1897_, v_value_1898_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete(lean_object* v_self_1902_, lean_object* v_name_1903_, lean_object* v_value_1904_){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1906_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_delete___closed__0));
v___x_1907_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1907_, 0, v_name_1903_);
v___x_1908_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_1904_);
v___x_1909_ = lean_unsigned_to_nat(2u);
v___x_1910_ = lean_mk_empty_array_with_capacity(v___x_1909_);
v___x_1911_ = lean_array_push(v___x_1910_, v___x_1907_);
v___x_1912_ = lean_array_push(v___x_1911_, v___x_1908_);
v___x_1913_ = l_Lasm_JS_Web_Support_args(v___x_1912_);
v___x_1914_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1902_, v___x_1906_, v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_delete___boxed(lean_object* v_self_1915_, lean_object* v_name_1916_, lean_object* v_value_1917_, lean_object* v_a_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lasm_JS_Web_URLSearchParams_delete(v_self_1915_, v_name_1916_, v_value_1917_);
return v_res_1919_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(uint8_t v_await_1920_, uint64_t v_extra_1921_){
_start:
{
uint64_t v___x_1922_; uint64_t v___y_1924_; 
v___x_1922_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_1920_ == 0)
{
uint64_t v___x_1927_; 
v___x_1927_ = 0ULL;
v___y_1924_ = v___x_1927_;
goto v___jp_1923_;
}
else
{
uint64_t v___x_1928_; 
v___x_1928_ = 2ULL;
v___y_1924_ = v___x_1928_;
goto v___jp_1923_;
}
v___jp_1923_:
{
uint64_t v___x_1925_; uint64_t v___x_1926_; 
v___x_1925_ = lean_uint64_lor(v___x_1922_, v___y_1924_);
v___x_1926_ = lean_uint64_lor(v___x_1925_, v_extra_1921_);
return v___x_1926_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0___boxed(lean_object* v_await_1929_, lean_object* v_extra_1930_){
_start:
{
uint8_t v_await_boxed_1931_; uint64_t v_extra_boxed_1932_; uint64_t v_res_1933_; lean_object* v_r_1934_; 
v_await_boxed_1931_ = lean_unbox(v_await_1929_);
v_extra_boxed_1932_ = lean_unbox_uint64(v_extra_1930_);
lean_dec_ref(v_extra_1930_);
v_res_1933_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v_await_boxed_1931_, v_extra_boxed_1932_);
v_r_1934_ = lean_box_uint64(v_res_1933_);
return v_r_1934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(lean_object* v_context_1936_, lean_object* v_d_1937_){
_start:
{
lean_object* v___y_1943_; lean_object* v___y_1944_; 
switch(lean_obj_tag(v_d_1937_))
{
case 1:
{
goto v___jp_1939_;
}
case 0:
{
goto v___jp_1939_;
}
default: 
{
if (lean_obj_tag(v_d_1937_) == 4)
{
lean_object* v_s_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v_s_1948_ = lean_ctor_get(v_d_1937_, 0);
lean_inc_ref(v_s_1948_);
lean_dec_ref_known(v_d_1937_, 1);
v___x_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1949_, 0, v_s_1948_);
v___x_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
return v___x_1950_;
}
else
{
lean_object* v___x_1951_; lean_object* v_received_1953_; 
v___x_1951_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_1937_) == 9)
{
lean_object* v_value_1967_; lean_object* v_description_1968_; uint8_t v___x_1969_; 
v_value_1967_ = lean_ctor_get(v_d_1937_, 0);
v_description_1968_ = lean_ctor_get(v_d_1937_, 1);
v___x_1969_ = lean_string_dec_eq(v_description_1968_, v___x_1951_);
if (v___x_1969_ == 0)
{
goto v___jp_1965_;
}
else
{
uint32_t v___x_1970_; uint64_t v___x_1971_; lean_object* v___x_1972_; uint32_t v___x_1973_; lean_object* v___x_1974_; 
lean_inc_n(v_value_1967_, 2);
lean_dec_ref_known(v_d_1937_, 2);
v___x_1970_ = 206;
v___x_1971_ = 0ULL;
v___x_1972_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1972_, 0, v_value_1967_);
lean_ctor_set(v___x_1972_, 1, v___x_1951_);
v___x_1973_ = lasm_js_value_handle(v_value_1967_);
lean_dec(v_value_1967_);
v___x_1974_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1970_, v___x_1971_, v___x_1972_, v___x_1973_);
lean_dec_ref_known(v___x_1972_, 2);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; uint8_t v___x_1976_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
lean_inc(v_a_1975_);
lean_dec_ref_known(v___x_1974_, 1);
v___x_1976_ = lean_string_validate_utf8(v_a_1975_);
if (v___x_1976_ == 0)
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
lean_dec(v_a_1975_);
v___x_1977_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_1978_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1977_);
v_received_1953_ = v___x_1978_;
goto v___jp_1952_;
}
else
{
lean_object* v___x_1979_; 
v___x_1979_ = lean_string_from_utf8_unchecked(v_a_1975_);
v_received_1953_ = v___x_1979_;
goto v___jp_1952_;
}
}
else
{
lean_object* v___x_1980_; 
lean_dec_ref_known(v___x_1974_, 1);
v___x_1980_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_1953_ = v___x_1980_;
goto v___jp_1952_;
}
}
}
else
{
goto v___jp_1965_;
}
v___jp_1952_:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; uint8_t v___x_1963_; 
v___x_1954_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_1955_ = lean_string_append(v___x_1954_, v_context_1936_);
v___x_1956_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_1957_ = lean_string_append(v___x_1955_, v___x_1956_);
v___x_1958_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_1959_ = lean_string_append(v___x_1957_, v___x_1958_);
v___x_1960_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_1961_ = lean_string_append(v___x_1959_, v___x_1960_);
v___x_1962_ = lean_string_append(v___x_1961_, v_received_1953_);
lean_dec_ref(v_received_1953_);
v___x_1963_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; 
v___x_1964_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_1943_ = v___x_1962_;
v___y_1944_ = v___x_1964_;
goto v___jp_1942_;
}
else
{
v___y_1943_ = v___x_1962_;
v___y_1944_ = v___x_1951_;
goto v___jp_1942_;
}
}
v___jp_1965_:
{
lean_object* v___x_1966_; 
v___x_1966_ = l_Lasm_JS_Data_describe(v_d_1937_);
v_received_1953_ = v___x_1966_;
goto v___jp_1952_;
}
}
}
}
v___jp_1939_:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_box(0);
v___x_1941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1940_);
return v___x_1941_;
}
v___jp_1942_:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1945_ = lean_string_append(v___y_1943_, v___y_1944_);
v___x_1946_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1945_);
v___x_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1946_);
return v___x_1947_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1981_, lean_object* v_d_1982_, lean_object* v_a_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_1981_, v_d_1982_);
lean_dec_ref(v_context_1981_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object* v_context_1985_, lean_object* v_bytes_1986_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1986_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; lean_object* v___x_1990_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_1990_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v_context_1985_, v_a_1989_);
return v___x_1990_;
}
else
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
v_a_1991_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1988_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1988_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1___boxed(lean_object* v_context_1999_, lean_object* v_bytes_2000_, lean_object* v_a_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v_context_1999_, v_bytes_2000_);
lean_dec_ref(v_bytes_2000_);
lean_dec_ref(v_context_1999_);
return v_res_2002_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2003_; uint8_t v___x_2004_; uint64_t v___x_2005_; 
v___x_2003_ = 8ULL;
v___x_2004_ = 0;
v___x_2005_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__0(v___x_2004_, v___x_2003_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(lean_object* v_o_2006_, lean_object* v_name_2007_, lean_object* v_args_2008_){
_start:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; uint64_t v___x_2013_; lean_object* v___x_2014_; 
v___x_2010_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2011_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2011_, 0, v_o_2006_);
lean_ctor_set(v___x_2011_, 1, v___x_2010_);
lean_inc_ref(v_name_2007_);
v___x_2012_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2012_, 0, v_name_2007_);
v___x_2013_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___closed__0);
v___x_2014_ = l_Lasm_JS_Value_invokeRaw(v___x_2011_, v___x_2012_, v_args_2008_, v___x_2013_);
if (lean_obj_tag(v___x_2014_) == 0)
{
lean_object* v_a_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v_a_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2015_);
lean_dec_ref_known(v___x_2014_, 1);
v___x_2016_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_2017_ = lean_string_append(v___x_2016_, v_name_2007_);
lean_dec_ref(v_name_2007_);
v___x_2018_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_2017_, v_a_2015_);
lean_dec(v_a_2015_);
lean_dec_ref(v___x_2017_);
return v___x_2018_;
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
lean_dec_ref(v_name_2007_);
v_a_2019_ = lean_ctor_get(v___x_2014_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_2014_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_2014_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0___boxed(lean_object* v_o_2027_, lean_object* v_name_2028_, lean_object* v_args_2029_, lean_object* v_a_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_o_2027_, v_name_2028_, v_args_2029_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get(lean_object* v_self_2033_, lean_object* v_name_2034_){
_start:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2036_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_get___closed__0));
v___x_2037_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2037_, 0, v_name_2034_);
v___x_2038_ = lean_unsigned_to_nat(1u);
v___x_2039_ = lean_mk_empty_array_with_capacity(v___x_2038_);
v___x_2040_ = lean_array_push(v___x_2039_, v___x_2037_);
v___x_2041_ = l_Lasm_JS_Web_Support_args(v___x_2040_);
v___x_2042_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_self_2033_, v___x_2036_, v___x_2041_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_get___boxed(lean_object* v_self_2043_, lean_object* v_name_2044_, lean_object* v_a_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l_Lasm_JS_Web_URLSearchParams_get(v_self_2043_, v_name_2044_);
return v_res_2046_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(uint8_t v_await_2047_, uint64_t v_extra_2048_){
_start:
{
uint64_t v___x_2049_; uint64_t v___y_2051_; 
v___x_2049_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2047_ == 0)
{
uint64_t v___x_2054_; 
v___x_2054_ = 0ULL;
v___y_2051_ = v___x_2054_;
goto v___jp_2050_;
}
else
{
uint64_t v___x_2055_; 
v___x_2055_ = 2ULL;
v___y_2051_ = v___x_2055_;
goto v___jp_2050_;
}
v___jp_2050_:
{
uint64_t v___x_2052_; uint64_t v___x_2053_; 
v___x_2052_ = lean_uint64_lor(v___x_2049_, v___y_2051_);
v___x_2053_ = lean_uint64_lor(v___x_2052_, v_extra_2048_);
return v___x_2053_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0___boxed(lean_object* v_await_2056_, lean_object* v_extra_2057_){
_start:
{
uint8_t v_await_boxed_2058_; uint64_t v_extra_boxed_2059_; uint64_t v_res_2060_; lean_object* v_r_2061_; 
v_await_boxed_2058_ = lean_unbox(v_await_2056_);
v_extra_boxed_2059_ = lean_unbox_uint64(v_extra_2057_);
lean_dec_ref(v_extra_2057_);
v_res_2060_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v_await_boxed_2058_, v_extra_boxed_2059_);
v_r_2061_ = lean_box_uint64(v_res_2060_);
return v_r_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2064_, size_t v_i_2065_, lean_object* v_bs_2066_){
_start:
{
uint8_t v___x_2067_; 
v___x_2067_ = lean_usize_dec_lt(v_i_2065_, v_sz_2064_);
if (v___x_2067_ == 0)
{
lean_object* v___x_2068_; 
v___x_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2068_, 0, v_bs_2066_);
return v___x_2068_;
}
else
{
lean_object* v_v_2069_; 
v_v_2069_ = lean_array_uget_borrowed(v_bs_2066_, v_i_2065_);
if (lean_obj_tag(v_v_2069_) == 4)
{
lean_object* v_s_2070_; lean_object* v___x_2071_; lean_object* v_bs_x27_2072_; size_t v___x_2073_; size_t v___x_2074_; lean_object* v___x_2075_; 
v_s_2070_ = lean_ctor_get(v_v_2069_, 0);
lean_inc_ref(v_s_2070_);
v___x_2071_ = lean_unsigned_to_nat(0u);
v_bs_x27_2072_ = lean_array_uset(v_bs_2066_, v_i_2065_, v___x_2071_);
v___x_2073_ = ((size_t)1ULL);
v___x_2074_ = lean_usize_add(v_i_2065_, v___x_2073_);
v___x_2075_ = lean_array_uset(v_bs_x27_2072_, v_i_2065_, v_s_2070_);
v_i_2065_ = v___x_2074_;
v_bs_2066_ = v___x_2075_;
goto _start;
}
else
{
lean_object* v___x_2077_; 
lean_dec_ref(v_bs_2066_);
v___x_2077_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2077_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2078_, lean_object* v_i_2079_, lean_object* v_bs_2080_){
_start:
{
size_t v_sz_boxed_2081_; size_t v_i_boxed_2082_; lean_object* v_res_2083_; 
v_sz_boxed_2081_ = lean_unbox_usize(v_sz_2078_);
lean_dec(v_sz_2078_);
v_i_boxed_2082_ = lean_unbox_usize(v_i_2079_);
lean_dec(v_i_2079_);
v_res_2083_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2081_, v_i_boxed_2082_, v_bs_2080_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(lean_object* v_context_2088_, lean_object* v_d_2089_){
_start:
{
lean_object* v___y_2092_; lean_object* v___y_2093_; lean_object* v___y_2098_; lean_object* v_received_2099_; lean_object* v___y_2118_; lean_object* v_a_2121_; 
if (lean_obj_tag(v_d_2089_) == 7)
{
lean_object* v_items_2145_; size_t v_sz_2146_; size_t v___x_2147_; lean_object* v___x_2148_; 
v_items_2145_ = lean_ctor_get(v_d_2089_, 0);
v_sz_2146_ = lean_array_size(v_items_2145_);
v___x_2147_ = ((size_t)0ULL);
lean_inc_ref(v_items_2145_);
v___x_2148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_2146_, v___x_2147_, v_items_2145_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; uint8_t v___x_2153_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
v___x_2150_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__3));
v___x_2151_ = lean_string_utf8_byte_size(v_a_2149_);
v___x_2152_ = lean_unsigned_to_nat(0u);
v___x_2153_ = lean_nat_dec_eq(v___x_2151_, v___x_2152_);
if (v___x_2153_ == 0)
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2154_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2155_ = lean_string_append(v___x_2154_, v_a_2149_);
lean_dec(v_a_2149_);
v___x_2156_ = lean_string_append(v___x_2150_, v___x_2155_);
lean_dec_ref(v___x_2155_);
v_a_2121_ = v___x_2156_;
goto v___jp_2120_;
}
else
{
lean_dec(v_a_2149_);
v_a_2121_ = v___x_2150_;
goto v___jp_2120_;
}
}
else
{
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2157_; 
v_a_2157_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2157_);
lean_dec_ref_known(v___x_2148_, 1);
v_a_2121_ = v_a_2157_;
goto v___jp_2120_;
}
else
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2165_; 
lean_dec_ref_known(v_d_2089_, 1);
v_a_2158_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2165_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2165_ == 0)
{
v___x_2160_ = v___x_2148_;
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2148_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2163_; 
if (v_isShared_2161_ == 0)
{
lean_ctor_set_tag(v___x_2160_, 0);
v___x_2163_ = v___x_2160_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_a_2158_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
}
}
else
{
lean_object* v___x_2166_; 
v___x_2166_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2121_ = v___x_2166_;
goto v___jp_2120_;
}
v___jp_2091_:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2094_ = lean_string_append(v___y_2092_, v___y_2093_);
lean_dec_ref(v___y_2093_);
v___x_2095_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
v___x_2096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
return v___x_2096_;
}
v___jp_2097_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; uint8_t v___x_2111_; 
v___x_2100_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2101_ = lean_string_append(v___x_2100_, v_context_2088_);
v___x_2102_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2103_ = lean_string_append(v___x_2101_, v___x_2102_);
v___x_2104_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__0));
v___x_2105_ = lean_string_append(v___x_2103_, v___x_2104_);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2107_ = lean_string_append(v___x_2105_, v___x_2106_);
v___x_2108_ = lean_string_append(v___x_2107_, v_received_2099_);
lean_dec_ref(v_received_2099_);
v___x_2109_ = lean_string_utf8_byte_size(v___y_2098_);
v___x_2110_ = lean_unsigned_to_nat(0u);
v___x_2111_ = lean_nat_dec_eq(v___x_2109_, v___x_2110_);
if (v___x_2111_ == 0)
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2112_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2113_ = lean_string_append(v___x_2112_, v___y_2098_);
lean_dec_ref(v___y_2098_);
v___x_2114_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2115_ = lean_string_append(v___x_2113_, v___x_2114_);
v___y_2092_ = v___x_2108_;
v___y_2093_ = v___x_2115_;
goto v___jp_2091_;
}
else
{
lean_object* v___x_2116_; 
lean_dec_ref(v___y_2098_);
v___x_2116_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2092_ = v___x_2108_;
v___y_2093_ = v___x_2116_;
goto v___jp_2091_;
}
}
v___jp_2117_:
{
lean_object* v___x_2119_; 
v___x_2119_ = l_Lasm_JS_Data_describe(v_d_2089_);
v___y_2098_ = v___y_2118_;
v_received_2099_ = v___x_2119_;
goto v___jp_2097_;
}
v___jp_2120_:
{
if (lean_obj_tag(v_d_2089_) == 9)
{
lean_object* v_value_2122_; lean_object* v_description_2123_; lean_object* v___x_2124_; uint8_t v___x_2125_; 
v_value_2122_ = lean_ctor_get(v_d_2089_, 0);
v_description_2123_ = lean_ctor_get(v_d_2089_, 1);
v___x_2124_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2125_ = lean_string_dec_eq(v_description_2123_, v___x_2124_);
if (v___x_2125_ == 0)
{
v___y_2118_ = v_a_2121_;
goto v___jp_2117_;
}
else
{
lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2142_; 
lean_inc(v_value_2122_);
v_isSharedCheck_2142_ = !lean_is_exclusive(v_d_2089_);
if (v_isSharedCheck_2142_ == 0)
{
lean_object* v_unused_2143_; lean_object* v_unused_2144_; 
v_unused_2143_ = lean_ctor_get(v_d_2089_, 1);
lean_dec(v_unused_2143_);
v_unused_2144_ = lean_ctor_get(v_d_2089_, 0);
lean_dec(v_unused_2144_);
v___x_2127_ = v_d_2089_;
v_isShared_2128_ = v_isSharedCheck_2142_;
goto v_resetjp_2126_;
}
else
{
lean_dec(v_d_2089_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2142_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
uint32_t v___x_2129_; uint64_t v___x_2130_; lean_object* v___x_2132_; 
v___x_2129_ = 206;
v___x_2130_ = 0ULL;
lean_inc(v_value_2122_);
if (v_isShared_2128_ == 0)
{
lean_ctor_set(v___x_2127_, 1, v___x_2124_);
v___x_2132_ = v___x_2127_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_value_2122_);
lean_ctor_set(v_reuseFailAlloc_2141_, 1, v___x_2124_);
v___x_2132_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
uint32_t v___x_2133_; lean_object* v___x_2134_; 
v___x_2133_ = lasm_js_value_handle(v_value_2122_);
lean_dec(v_value_2122_);
v___x_2134_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2129_, v___x_2130_, v___x_2132_, v___x_2133_);
lean_dec_ref(v___x_2132_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; uint8_t v___x_2136_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2134_, 1);
v___x_2136_ = lean_string_validate_utf8(v_a_2135_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
lean_dec(v_a_2135_);
v___x_2137_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2138_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2137_);
v___y_2098_ = v_a_2121_;
v_received_2099_ = v___x_2138_;
goto v___jp_2097_;
}
else
{
lean_object* v___x_2139_; 
v___x_2139_ = lean_string_from_utf8_unchecked(v_a_2135_);
v___y_2098_ = v_a_2121_;
v_received_2099_ = v___x_2139_;
goto v___jp_2097_;
}
}
else
{
lean_object* v___x_2140_; 
lean_dec_ref_known(v___x_2134_, 1);
v___x_2140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_2098_ = v_a_2121_;
v_received_2099_ = v___x_2140_;
goto v___jp_2097_;
}
}
}
}
}
else
{
v___y_2118_ = v_a_2121_;
goto v___jp_2117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2167_, lean_object* v_d_2168_, lean_object* v_a_2169_){
_start:
{
lean_object* v_res_2170_; 
v_res_2170_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2167_, v_d_2168_);
lean_dec_ref(v_context_2167_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(lean_object* v_context_2171_, lean_object* v_bytes_2172_){
_start:
{
lean_object* v___x_2174_; 
v___x_2174_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2172_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2176_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
lean_inc(v_a_2175_);
lean_dec_ref_known(v___x_2174_, 1);
v___x_2176_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v_context_2171_, v_a_2175_);
return v___x_2176_;
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
v_a_2177_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2174_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2174_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2177_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1___boxed(lean_object* v_context_2185_, lean_object* v_bytes_2186_, lean_object* v_a_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v_context_2185_, v_bytes_2186_);
lean_dec_ref(v_bytes_2186_);
lean_dec_ref(v_context_2185_);
return v_res_2188_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2189_; uint8_t v___x_2190_; uint64_t v___x_2191_; 
v___x_2189_ = 8ULL;
v___x_2190_ = 0;
v___x_2191_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__0(v___x_2190_, v___x_2189_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(lean_object* v_o_2192_, lean_object* v_name_2193_, lean_object* v_args_2194_){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; uint64_t v___x_2199_; lean_object* v___x_2200_; 
v___x_2196_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2197_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2197_, 0, v_o_2192_);
lean_ctor_set(v___x_2197_, 1, v___x_2196_);
lean_inc_ref(v_name_2193_);
v___x_2198_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2198_, 0, v_name_2193_);
v___x_2199_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___closed__0);
v___x_2200_ = l_Lasm_JS_Value_invokeRaw(v___x_2197_, v___x_2198_, v_args_2194_, v___x_2199_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2200_, 1);
v___x_2202_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0___closed__1));
v___x_2203_ = lean_string_append(v___x_2202_, v_name_2193_);
lean_dec_ref(v_name_2193_);
v___x_2204_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v___x_2203_, v_a_2201_);
lean_dec(v_a_2201_);
lean_dec_ref(v___x_2203_);
return v___x_2204_;
}
else
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2212_; 
lean_dec_ref(v_name_2193_);
v_a_2205_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2207_ = v___x_2200_;
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2200_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2210_; 
if (v_isShared_2208_ == 0)
{
v___x_2210_ = v___x_2207_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2205_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0___boxed(lean_object* v_o_2213_, lean_object* v_name_2214_, lean_object* v_args_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_o_2213_, v_name_2214_, v_args_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll(lean_object* v_self_2219_, lean_object* v_name_2220_){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2222_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_getAll___closed__0));
v___x_2223_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2223_, 0, v_name_2220_);
v___x_2224_ = lean_unsigned_to_nat(1u);
v___x_2225_ = lean_mk_empty_array_with_capacity(v___x_2224_);
v___x_2226_ = lean_array_push(v___x_2225_, v___x_2223_);
v___x_2227_ = l_Lasm_JS_Web_Support_args(v___x_2226_);
v___x_2228_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0(v_self_2219_, v___x_2222_, v___x_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_getAll___boxed(lean_object* v_self_2229_, lean_object* v_name_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Lasm_JS_Web_URLSearchParams_getAll(v_self_2229_, v_name_2230_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has(lean_object* v_self_2234_, lean_object* v_name_2235_, lean_object* v_value_2236_){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2238_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_has___closed__0));
v___x_2239_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2239_, 0, v_name_2235_);
v___x_2240_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_value_2236_);
v___x_2241_ = lean_unsigned_to_nat(2u);
v___x_2242_ = lean_mk_empty_array_with_capacity(v___x_2241_);
v___x_2243_ = lean_array_push(v___x_2242_, v___x_2239_);
v___x_2244_ = lean_array_push(v___x_2243_, v___x_2240_);
v___x_2245_ = l_Lasm_JS_Web_Support_args(v___x_2244_);
v___x_2246_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2234_, v___x_2238_, v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_has___boxed(lean_object* v_self_2247_, lean_object* v_name_2248_, lean_object* v_value_2249_, lean_object* v_a_2250_){
_start:
{
lean_object* v_res_2251_; 
v_res_2251_ = l_Lasm_JS_Web_URLSearchParams_has(v_self_2247_, v_name_2248_, v_value_2249_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set(lean_object* v_self_2253_, lean_object* v_name_2254_, lean_object* v_value_2255_){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2257_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_set___closed__0));
v___x_2258_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2258_, 0, v_name_2254_);
v___x_2259_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2259_, 0, v_value_2255_);
v___x_2260_ = lean_unsigned_to_nat(2u);
v___x_2261_ = lean_mk_empty_array_with_capacity(v___x_2260_);
v___x_2262_ = lean_array_push(v___x_2261_, v___x_2258_);
v___x_2263_ = lean_array_push(v___x_2262_, v___x_2259_);
v___x_2264_ = l_Lasm_JS_Web_Support_args(v___x_2263_);
v___x_2265_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2253_, v___x_2257_, v___x_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_set___boxed(lean_object* v_self_2266_, lean_object* v_name_2267_, lean_object* v_value_2268_, lean_object* v_a_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = l_Lasm_JS_Web_URLSearchParams_set(v_self_2266_, v_name_2267_, v_value_2268_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort(lean_object* v_self_2272_){
_start:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2274_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_sort___closed__0));
v___x_2275_ = lean_obj_once(&l_Lasm_JS_Web_URL_toJSON___closed__1, &l_Lasm_JS_Web_URL_toJSON___closed__1_once, _init_l_Lasm_JS_Web_URL_toJSON___closed__1);
v___x_2276_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2272_, v___x_2274_, v___x_2275_);
return v___x_2276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_sort___boxed(lean_object* v_self_2277_, lean_object* v_a_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l_Lasm_JS_Web_URLSearchParams_sort(v_self_2277_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(size_t v_sz_2283_, size_t v_i_2284_, lean_object* v_bs_2285_){
_start:
{
uint8_t v___x_2288_; 
v___x_2288_ = lean_usize_dec_lt(v_i_2284_, v_sz_2283_);
if (v___x_2288_ == 0)
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2289_, 0, v_bs_2285_);
return v___x_2289_;
}
else
{
lean_object* v_v_2290_; 
v_v_2290_ = lean_array_uget_borrowed(v_bs_2285_, v_i_2284_);
if (lean_obj_tag(v_v_2290_) == 7)
{
lean_object* v_items_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; uint8_t v___x_2294_; 
v_items_2291_ = lean_ctor_get(v_v_2290_, 0);
v___x_2292_ = lean_array_get_size(v_items_2291_);
v___x_2293_ = lean_unsigned_to_nat(2u);
v___x_2294_ = lean_nat_dec_eq(v___x_2292_, v___x_2293_);
if (v___x_2294_ == 0)
{
lean_dec_ref(v_bs_2285_);
goto v___jp_2286_;
}
else
{
lean_object* v___x_2295_; lean_object* v___x_2296_; 
v___x_2295_ = lean_unsigned_to_nat(0u);
v___x_2296_ = lean_array_fget_borrowed(v_items_2291_, v___x_2295_);
if (lean_obj_tag(v___x_2296_) == 4)
{
lean_object* v_s_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v_s_2297_ = lean_ctor_get(v___x_2296_, 0);
lean_inc_ref(v_s_2297_);
v___x_2298_ = lean_unsigned_to_nat(1u);
v___x_2299_ = lean_array_fget_borrowed(v_items_2291_, v___x_2298_);
if (lean_obj_tag(v___x_2299_) == 4)
{
lean_object* v_s_2300_; lean_object* v_bs_x27_2301_; lean_object* v___x_2302_; size_t v___x_2303_; size_t v___x_2304_; lean_object* v___x_2305_; 
v_s_2300_ = lean_ctor_get(v___x_2299_, 0);
lean_inc_ref(v_s_2300_);
v_bs_x27_2301_ = lean_array_uset(v_bs_2285_, v_i_2284_, v___x_2295_);
v___x_2302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2302_, 0, v_s_2297_);
lean_ctor_set(v___x_2302_, 1, v_s_2300_);
v___x_2303_ = ((size_t)1ULL);
v___x_2304_ = lean_usize_add(v_i_2284_, v___x_2303_);
v___x_2305_ = lean_array_uset(v_bs_x27_2301_, v_i_2284_, v___x_2302_);
v_i_2284_ = v___x_2304_;
v_bs_2285_ = v___x_2305_;
goto _start;
}
else
{
lean_object* v___x_2307_; 
lean_dec_ref(v_s_2297_);
lean_dec_ref(v_bs_2285_);
v___x_2307_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2307_;
}
}
else
{
lean_object* v___x_2308_; 
lean_dec_ref(v_bs_2285_);
v___x_2308_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2308_;
}
}
}
else
{
lean_dec_ref(v_bs_2285_);
goto v___jp_2286_;
}
}
v___jp_2286_:
{
lean_object* v___x_2287_; 
v___x_2287_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___closed__1));
return v___x_2287_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2309_, lean_object* v_i_2310_, lean_object* v_bs_2311_){
_start:
{
size_t v_sz_boxed_2312_; size_t v_i_boxed_2313_; lean_object* v_res_2314_; 
v_sz_boxed_2312_ = lean_unbox_usize(v_sz_2309_);
lean_dec(v_sz_2309_);
v_i_boxed_2313_ = lean_unbox_usize(v_i_2310_);
lean_dec(v_i_2310_);
v_res_2314_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_2312_, v_i_boxed_2313_, v_bs_2311_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(lean_object* v_context_2317_, lean_object* v_d_2318_){
_start:
{
lean_object* v___y_2321_; lean_object* v___y_2322_; lean_object* v___y_2327_; lean_object* v_received_2328_; lean_object* v___y_2347_; lean_object* v_a_2350_; 
if (lean_obj_tag(v_d_2318_) == 7)
{
lean_object* v_items_2374_; size_t v_sz_2375_; size_t v___x_2376_; lean_object* v___x_2377_; 
v_items_2374_ = lean_ctor_get(v_d_2318_, 0);
v_sz_2375_ = lean_array_size(v_items_2374_);
v___x_2376_ = ((size_t)0ULL);
lean_inc_ref(v_items_2374_);
v___x_2377_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1_spec__2(v_sz_2375_, v___x_2376_, v_items_2374_);
if (lean_obj_tag(v___x_2377_) == 0)
{
lean_object* v_a_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; uint8_t v___x_2382_; 
v_a_2378_ = lean_ctor_get(v___x_2377_, 0);
lean_inc(v_a_2378_);
lean_dec_ref_known(v___x_2377_, 1);
v___x_2379_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__1));
v___x_2380_ = lean_string_utf8_byte_size(v_a_2378_);
v___x_2381_ = lean_unsigned_to_nat(0u);
v___x_2382_ = lean_nat_dec_eq(v___x_2380_, v___x_2381_);
if (v___x_2382_ == 0)
{
lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2383_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2384_ = lean_string_append(v___x_2383_, v_a_2378_);
lean_dec(v_a_2378_);
v___x_2385_ = lean_string_append(v___x_2379_, v___x_2384_);
lean_dec_ref(v___x_2384_);
v_a_2350_ = v___x_2385_;
goto v___jp_2349_;
}
else
{
lean_dec(v_a_2378_);
v_a_2350_ = v___x_2379_;
goto v___jp_2349_;
}
}
else
{
if (lean_obj_tag(v___x_2377_) == 0)
{
lean_object* v_a_2386_; 
v_a_2386_ = lean_ctor_get(v___x_2377_, 0);
lean_inc(v_a_2386_);
lean_dec_ref_known(v___x_2377_, 1);
v_a_2350_ = v_a_2386_;
goto v___jp_2349_;
}
else
{
lean_object* v_a_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2394_; 
lean_dec_ref_known(v_d_2318_, 1);
v_a_2387_ = lean_ctor_get(v___x_2377_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2377_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2389_ = v___x_2377_;
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_a_2387_);
lean_dec(v___x_2377_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2392_; 
if (v_isShared_2390_ == 0)
{
lean_ctor_set_tag(v___x_2389_, 0);
v___x_2392_ = v___x_2389_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_a_2387_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
return v___x_2392_;
}
}
}
}
}
else
{
lean_object* v___x_2395_; 
v___x_2395_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_2350_ = v___x_2395_;
goto v___jp_2349_;
}
v___jp_2320_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2323_ = lean_string_append(v___y_2321_, v___y_2322_);
lean_dec_ref(v___y_2322_);
v___x_2324_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2323_);
v___x_2325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2324_);
return v___x_2325_;
}
v___jp_2326_:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; uint8_t v___x_2340_; 
v___x_2329_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2330_ = lean_string_append(v___x_2329_, v_context_2317_);
v___x_2331_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2332_ = lean_string_append(v___x_2330_, v___x_2331_);
v___x_2333_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___closed__0));
v___x_2334_ = lean_string_append(v___x_2332_, v___x_2333_);
v___x_2335_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2336_ = lean_string_append(v___x_2334_, v___x_2335_);
v___x_2337_ = lean_string_append(v___x_2336_, v_received_2328_);
lean_dec_ref(v_received_2328_);
v___x_2338_ = lean_string_utf8_byte_size(v___y_2327_);
v___x_2339_ = lean_unsigned_to_nat(0u);
v___x_2340_ = lean_nat_dec_eq(v___x_2338_, v___x_2339_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2341_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_2342_ = lean_string_append(v___x_2341_, v___y_2327_);
lean_dec_ref(v___y_2327_);
v___x_2343_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_2344_ = lean_string_append(v___x_2342_, v___x_2343_);
v___y_2321_ = v___x_2337_;
v___y_2322_ = v___x_2344_;
goto v___jp_2320_;
}
else
{
lean_object* v___x_2345_; 
lean_dec_ref(v___y_2327_);
v___x_2345_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_2321_ = v___x_2337_;
v___y_2322_ = v___x_2345_;
goto v___jp_2320_;
}
}
v___jp_2346_:
{
lean_object* v___x_2348_; 
v___x_2348_ = l_Lasm_JS_Data_describe(v_d_2318_);
v___y_2327_ = v___y_2347_;
v_received_2328_ = v___x_2348_;
goto v___jp_2326_;
}
v___jp_2349_:
{
if (lean_obj_tag(v_d_2318_) == 9)
{
lean_object* v_value_2351_; lean_object* v_description_2352_; lean_object* v___x_2353_; uint8_t v___x_2354_; 
v_value_2351_ = lean_ctor_get(v_d_2318_, 0);
v_description_2352_ = lean_ctor_get(v_d_2318_, 1);
v___x_2353_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2354_ = lean_string_dec_eq(v_description_2352_, v___x_2353_);
if (v___x_2354_ == 0)
{
v___y_2347_ = v_a_2350_;
goto v___jp_2346_;
}
else
{
lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2371_; 
lean_inc(v_value_2351_);
v_isSharedCheck_2371_ = !lean_is_exclusive(v_d_2318_);
if (v_isSharedCheck_2371_ == 0)
{
lean_object* v_unused_2372_; lean_object* v_unused_2373_; 
v_unused_2372_ = lean_ctor_get(v_d_2318_, 1);
lean_dec(v_unused_2372_);
v_unused_2373_ = lean_ctor_get(v_d_2318_, 0);
lean_dec(v_unused_2373_);
v___x_2356_ = v_d_2318_;
v_isShared_2357_ = v_isSharedCheck_2371_;
goto v_resetjp_2355_;
}
else
{
lean_dec(v_d_2318_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2371_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
uint32_t v___x_2358_; uint64_t v___x_2359_; lean_object* v___x_2361_; 
v___x_2358_ = 206;
v___x_2359_ = 0ULL;
lean_inc(v_value_2351_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set(v___x_2356_, 1, v___x_2353_);
v___x_2361_ = v___x_2356_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_value_2351_);
lean_ctor_set(v_reuseFailAlloc_2370_, 1, v___x_2353_);
v___x_2361_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
uint32_t v___x_2362_; lean_object* v___x_2363_; 
v___x_2362_ = lasm_js_value_handle(v_value_2351_);
lean_dec(v_value_2351_);
v___x_2363_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2358_, v___x_2359_, v___x_2361_, v___x_2362_);
lean_dec_ref(v___x_2361_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; uint8_t v___x_2365_; 
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2364_);
lean_dec_ref_known(v___x_2363_, 1);
v___x_2365_ = lean_string_validate_utf8(v_a_2364_);
if (v___x_2365_ == 0)
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
lean_dec(v_a_2364_);
v___x_2366_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2367_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2366_);
v___y_2327_ = v_a_2350_;
v_received_2328_ = v___x_2367_;
goto v___jp_2326_;
}
else
{
lean_object* v___x_2368_; 
v___x_2368_ = lean_string_from_utf8_unchecked(v_a_2364_);
v___y_2327_ = v_a_2350_;
v_received_2328_ = v___x_2368_;
goto v___jp_2326_;
}
}
else
{
lean_object* v___x_2369_; 
lean_dec_ref_known(v___x_2363_, 1);
v___x_2369_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_2327_ = v_a_2350_;
v_received_2328_ = v___x_2369_;
goto v___jp_2326_;
}
}
}
}
}
else
{
v___y_2347_ = v_a_2350_;
goto v___jp_2346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2396_, lean_object* v_d_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v_context_2396_, v_d_2397_);
lean_dec_ref(v_context_2396_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(lean_object* v_b_2400_, lean_object* v_args_2401_, uint8_t v_await_2402_){
_start:
{
uint64_t v___y_2405_; uint64_t v___y_2406_; uint64_t v___x_2449_; uint64_t v___y_2451_; 
v___x_2449_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2402_ == 0)
{
uint64_t v___x_2456_; 
v___x_2456_ = 0ULL;
v___y_2451_ = v___x_2456_;
goto v___jp_2450_;
}
else
{
uint64_t v___x_2457_; 
v___x_2457_ = 2ULL;
v___y_2451_ = v___x_2457_;
goto v___jp_2450_;
}
v___jp_2404_:
{
uint64_t v_flags_2407_; uint32_t v___x_2408_; lean_object* v___x_2409_; uint32_t v___x_2410_; lean_object* v___x_2411_; 
v_flags_2407_ = lean_uint64_lor(v___y_2405_, v___y_2406_);
v___x_2408_ = 214;
v___x_2409_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2400_, v_args_2401_);
v___x_2410_ = 0;
v___x_2411_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2408_, v_flags_2407_, v___x_2409_, v___x_2410_);
lean_dec(v___x_2409_);
if (lean_obj_tag(v___x_2411_) == 0)
{
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2413_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2411_, 1);
v___x_2413_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2412_);
lean_dec(v_a_2412_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2414_);
lean_dec_ref_known(v___x_2413_, 1);
v___x_2415_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2400_);
v___x_2416_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0_spec__1(v___x_2415_, v_a_2414_);
lean_dec_ref(v___x_2415_);
return v___x_2416_;
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
v_a_2417_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2413_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2413_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
else
{
lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2432_; 
v_a_2425_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2427_ = v___x_2411_;
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_dec(v___x_2411_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2430_; 
if (v_isShared_2428_ == 0)
{
lean_ctor_set_tag(v___x_2427_, 1);
v___x_2430_ = v___x_2427_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v_a_2425_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
}
else
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2448_; 
v_a_2433_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2435_ = v___x_2411_;
v_isShared_2436_ = v_isSharedCheck_2448_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2411_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2448_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2446_; 
v___x_2437_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2438_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2400_);
v___x_2439_ = lean_string_append(v___x_2437_, v___x_2438_);
lean_dec_ref(v___x_2438_);
v___x_2440_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2441_ = lean_string_append(v___x_2439_, v___x_2440_);
v___x_2442_ = lean_io_error_to_string(v_a_2433_);
v___x_2443_ = lean_string_append(v___x_2441_, v___x_2442_);
lean_dec_ref(v___x_2442_);
v___x_2444_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2443_);
if (v_isShared_2436_ == 0)
{
lean_ctor_set(v___x_2435_, 0, v___x_2444_);
v___x_2446_ = v___x_2435_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v___x_2444_);
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
v___jp_2450_:
{
uint8_t v_construct_2452_; uint64_t v___x_2453_; 
v_construct_2452_ = lean_ctor_get_uint8(v_b_2400_, sizeof(void*)*4);
v___x_2453_ = lean_uint64_lor(v___x_2449_, v___y_2451_);
if (v_construct_2452_ == 0)
{
uint64_t v___x_2454_; 
v___x_2454_ = 0ULL;
v___y_2405_ = v___x_2453_;
v___y_2406_ = v___x_2454_;
goto v___jp_2404_;
}
else
{
uint64_t v___x_2455_; 
v___x_2455_ = 4ULL;
v___y_2405_ = v___x_2453_;
v___y_2406_ = v___x_2455_;
goto v___jp_2404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0___boxed(lean_object* v_b_2458_, lean_object* v_args_2459_, lean_object* v_await_2460_, lean_object* v_a_2461_){
_start:
{
uint8_t v_await_boxed_2462_; lean_object* v_res_2463_; 
v_await_boxed_2462_ = lean_unbox(v_await_2460_);
v_res_2463_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v_b_2458_, v_args_2459_, v_await_boxed_2462_);
lean_dec_ref(v_b_2458_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(lean_object* v_o_2472_, lean_object* v_method_2473_){
_start:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2475_ = ((lean_object*)(l_Lasm_JS_Web_URL_toString___closed__1));
v___x_2476_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2472_, v_method_2473_, v___x_2475_);
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v_a_2477_; uint8_t v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v_a_2477_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_a_2477_);
lean_dec_ref_known(v___x_2476_, 1);
v___x_2478_ = 0;
v___x_2479_ = lean_unsigned_to_nat(1u);
v___x_2480_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___closed__2));
v___x_2481_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_2482_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2482_, 0, v_a_2477_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = lean_mk_empty_array_with_capacity(v___x_2479_);
v___x_2484_ = lean_array_push(v___x_2483_, v___x_2482_);
v___x_2485_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v___x_2480_, v___x_2484_, v___x_2478_);
return v___x_2485_;
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
v_a_2486_ = lean_ctor_get(v___x_2476_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2476_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2476_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2476_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0___boxed(lean_object* v_o_2494_, lean_object* v_method_2495_, lean_object* v_a_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_o_2494_, v_method_2495_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries(lean_object* v_self_2499_){
_start:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_entries___closed__0));
v___x_2502_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0(v_self_2499_, v___x_2501_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_entries___boxed(lean_object* v_self_2503_, lean_object* v_a_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l_Lasm_JS_Web_URLSearchParams_entries(v_self_2503_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(lean_object* v_b_2506_, lean_object* v_args_2507_, uint8_t v_await_2508_){
_start:
{
uint64_t v___y_2511_; uint64_t v___y_2512_; uint64_t v___x_2555_; uint64_t v___y_2557_; 
v___x_2555_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2508_ == 0)
{
uint64_t v___x_2562_; 
v___x_2562_ = 0ULL;
v___y_2557_ = v___x_2562_;
goto v___jp_2556_;
}
else
{
uint64_t v___x_2563_; 
v___x_2563_ = 2ULL;
v___y_2557_ = v___x_2563_;
goto v___jp_2556_;
}
v___jp_2510_:
{
uint64_t v_flags_2513_; uint32_t v___x_2514_; lean_object* v___x_2515_; uint32_t v___x_2516_; lean_object* v___x_2517_; 
v_flags_2513_ = lean_uint64_lor(v___y_2511_, v___y_2512_);
v___x_2514_ = 214;
v___x_2515_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2506_, v_args_2507_);
v___x_2516_ = 0;
v___x_2517_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2514_, v_flags_2513_, v___x_2515_, v___x_2516_);
lean_dec(v___x_2515_);
if (lean_obj_tag(v___x_2517_) == 0)
{
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v_a_2518_; lean_object* v___x_2519_; 
v_a_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc(v_a_2518_);
lean_dec_ref_known(v___x_2517_, 1);
v___x_2519_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2518_);
lean_dec(v_a_2518_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2519_, 1);
v___x_2521_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2506_);
v___x_2522_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2(v___x_2521_, v_a_2520_);
lean_dec_ref(v___x_2521_);
return v___x_2522_;
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
v_a_2523_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2519_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2519_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
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
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2538_; 
v_a_2531_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2533_ = v___x_2517_;
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2517_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2536_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set_tag(v___x_2533_, 1);
v___x_2536_ = v___x_2533_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2531_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
else
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2554_; 
v_a_2539_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2541_ = v___x_2517_;
v_isShared_2542_ = v_isSharedCheck_2554_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2517_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2554_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2552_; 
v___x_2543_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2544_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2506_);
v___x_2545_ = lean_string_append(v___x_2543_, v___x_2544_);
lean_dec_ref(v___x_2544_);
v___x_2546_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2547_ = lean_string_append(v___x_2545_, v___x_2546_);
v___x_2548_ = lean_io_error_to_string(v_a_2539_);
v___x_2549_ = lean_string_append(v___x_2547_, v___x_2548_);
lean_dec_ref(v___x_2548_);
v___x_2550_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
if (v_isShared_2542_ == 0)
{
lean_ctor_set(v___x_2541_, 0, v___x_2550_);
v___x_2552_ = v___x_2541_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v___x_2550_);
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
v___jp_2556_:
{
uint8_t v_construct_2558_; uint64_t v___x_2559_; 
v_construct_2558_ = lean_ctor_get_uint8(v_b_2506_, sizeof(void*)*4);
v___x_2559_ = lean_uint64_lor(v___x_2555_, v___y_2557_);
if (v_construct_2558_ == 0)
{
uint64_t v___x_2560_; 
v___x_2560_ = 0ULL;
v___y_2511_ = v___x_2559_;
v___y_2512_ = v___x_2560_;
goto v___jp_2510_;
}
else
{
uint64_t v___x_2561_; 
v___x_2561_ = 4ULL;
v___y_2511_ = v___x_2559_;
v___y_2512_ = v___x_2561_;
goto v___jp_2510_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0___boxed(lean_object* v_b_2564_, lean_object* v_args_2565_, lean_object* v_await_2566_, lean_object* v_a_2567_){
_start:
{
uint8_t v_await_boxed_2568_; lean_object* v_res_2569_; 
v_await_boxed_2568_ = lean_unbox(v_await_2566_);
v_res_2569_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v_b_2564_, v_args_2565_, v_await_boxed_2568_);
lean_dec_ref(v_b_2564_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(lean_object* v_o_2570_, lean_object* v_method_2571_){
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
v___x_2583_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v___x_2578_, v___x_2582_, v___x_2576_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0___boxed(lean_object* v_o_2592_, lean_object* v_method_2593_, lean_object* v_a_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_o_2592_, v_method_2593_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys(lean_object* v_self_2597_){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2599_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_keys___closed__0));
v___x_2600_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2597_, v___x_2599_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_keys___boxed(lean_object* v_self_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l_Lasm_JS_Web_URLSearchParams_keys(v_self_2601_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values(lean_object* v_self_2605_){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2607_ = ((lean_object*)(l_Lasm_JS_Web_URLSearchParams_values___closed__0));
v___x_2608_ = l_Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0(v_self_2605_, v___x_2607_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLSearchParams_values___boxed(lean_object* v_self_2609_, lean_object* v_a_2610_){
_start:
{
lean_object* v_res_2611_; 
v_res_2611_ = l_Lasm_JS_Web_URLSearchParams_values(v_self_2609_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(lean_object* v_x_2612_){
_start:
{
if (lean_obj_tag(v_x_2612_) == 0)
{
lean_object* v___x_2613_; 
v___x_2613_ = lean_box(0);
return v___x_2613_;
}
else
{
lean_object* v_val_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v_val_2614_ = lean_ctor_get(v_x_2612_, 0);
v___x_2615_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternOptions___lam__0___closed__0));
v___x_2616_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2614_);
v___x_2617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2615_);
lean_ctor_set(v___x_2617_, 1, v___x_2616_);
v___x_2618_ = lean_unsigned_to_nat(1u);
v___x_2619_ = lean_mk_empty_array_with_capacity(v___x_2618_);
v___x_2620_ = lean_array_push(v___x_2619_, v___x_2617_);
v___x_2621_ = l_Lasm_JS_Web_Support_fields(v___x_2620_);
lean_dec_ref(v___x_2620_);
return v___x_2621_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0___boxed(lean_object* v_x_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_x_2622_);
lean_dec(v_x_2622_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(lean_object* v_context_2624_, lean_object* v_d_2625_){
_start:
{
lean_object* v___y_2628_; lean_object* v___y_2629_; 
if (lean_obj_tag(v_d_2625_) == 9)
{
lean_object* v_value_2633_; lean_object* v___x_2634_; 
v_value_2633_ = lean_ctor_get(v_d_2625_, 0);
lean_inc(v_value_2633_);
lean_dec_ref_known(v_d_2625_, 2);
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v_value_2633_);
return v___x_2634_;
}
else
{
lean_object* v___x_2635_; lean_object* v_received_2637_; 
v___x_2635_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
if (lean_obj_tag(v_d_2625_) == 9)
{
lean_object* v_value_2651_; lean_object* v_description_2652_; uint8_t v___x_2653_; 
v_value_2651_ = lean_ctor_get(v_d_2625_, 0);
v_description_2652_ = lean_ctor_get(v_d_2625_, 1);
v___x_2653_ = lean_string_dec_eq(v_description_2652_, v___x_2635_);
if (v___x_2653_ == 0)
{
goto v___jp_2649_;
}
else
{
uint32_t v___x_2654_; uint64_t v___x_2655_; lean_object* v___x_2656_; uint32_t v___x_2657_; lean_object* v___x_2658_; 
lean_inc_n(v_value_2651_, 2);
lean_dec_ref_known(v_d_2625_, 2);
v___x_2654_ = 206;
v___x_2655_ = 0ULL;
v___x_2656_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2656_, 0, v_value_2651_);
lean_ctor_set(v___x_2656_, 1, v___x_2635_);
v___x_2657_ = lasm_js_value_handle(v_value_2651_);
lean_dec(v_value_2651_);
v___x_2658_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2654_, v___x_2655_, v___x_2656_, v___x_2657_);
lean_dec_ref_known(v___x_2656_, 2);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; uint8_t v___x_2660_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2660_ = lean_string_validate_utf8(v_a_2659_);
if (v___x_2660_ == 0)
{
lean_object* v___x_2661_; lean_object* v___x_2662_; 
lean_dec(v_a_2659_);
v___x_2661_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_2662_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2661_);
v_received_2637_ = v___x_2662_;
goto v___jp_2636_;
}
else
{
lean_object* v___x_2663_; 
v___x_2663_ = lean_string_from_utf8_unchecked(v_a_2659_);
v_received_2637_ = v___x_2663_;
goto v___jp_2636_;
}
}
else
{
lean_object* v___x_2664_; 
lean_dec_ref_known(v___x_2658_, 1);
v___x_2664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v_received_2637_ = v___x_2664_;
goto v___jp_2636_;
}
}
}
else
{
goto v___jp_2649_;
}
v___jp_2636_:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; uint8_t v___x_2647_; 
v___x_2638_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2639_ = lean_string_append(v___x_2638_, v_context_2624_);
v___x_2640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_2641_ = lean_string_append(v___x_2639_, v___x_2640_);
v___x_2642_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPattern___closed__0));
v___x_2643_ = lean_string_append(v___x_2641_, v___x_2642_);
v___x_2644_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_2645_ = lean_string_append(v___x_2643_, v___x_2644_);
v___x_2646_ = lean_string_append(v___x_2645_, v_received_2637_);
lean_dec_ref(v_received_2637_);
v___x_2647_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_2647_ == 0)
{
lean_object* v___x_2648_; 
v___x_2648_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___y_2628_ = v___x_2646_;
v___y_2629_ = v___x_2648_;
goto v___jp_2627_;
}
else
{
v___y_2628_ = v___x_2646_;
v___y_2629_ = v___x_2635_;
goto v___jp_2627_;
}
}
v___jp_2649_:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Lasm_JS_Data_describe(v_d_2625_);
v_received_2637_ = v___x_2650_;
goto v___jp_2636_;
}
}
v___jp_2627_:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2630_ = lean_string_append(v___y_2628_, v___y_2629_);
v___x_2631_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2630_);
v___x_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
return v___x_2632_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1___boxed(lean_object* v_context_2665_, lean_object* v_d_2666_, lean_object* v_a_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v_context_2665_, v_d_2666_);
lean_dec_ref(v_context_2665_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(lean_object* v_b_2669_, lean_object* v_args_2670_, uint8_t v_await_2671_){
_start:
{
uint64_t v___y_2674_; uint64_t v___y_2675_; uint64_t v___x_2718_; uint64_t v___y_2720_; 
v___x_2718_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_2671_ == 0)
{
uint64_t v___x_2725_; 
v___x_2725_ = 0ULL;
v___y_2720_ = v___x_2725_;
goto v___jp_2719_;
}
else
{
uint64_t v___x_2726_; 
v___x_2726_ = 2ULL;
v___y_2720_ = v___x_2726_;
goto v___jp_2719_;
}
v___jp_2673_:
{
uint64_t v_flags_2676_; uint32_t v___x_2677_; lean_object* v___x_2678_; uint32_t v___x_2679_; lean_object* v___x_2680_; 
v_flags_2676_ = lean_uint64_lor(v___y_2674_, v___y_2675_);
v___x_2677_ = 214;
v___x_2678_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2669_, v_args_2670_);
v___x_2679_ = 0;
v___x_2680_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2677_, v_flags_2676_, v___x_2678_, v___x_2679_);
lean_dec(v___x_2678_);
if (lean_obj_tag(v___x_2680_) == 0)
{
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v___x_2682_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc(v_a_2681_);
lean_dec_ref_known(v___x_2680_, 1);
v___x_2682_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2681_);
lean_dec(v_a_2681_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2684_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2669_);
v___x_2685_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1_spec__1(v___x_2684_, v_a_2683_);
lean_dec_ref(v___x_2684_);
return v___x_2685_;
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
v_a_2686_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2682_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2682_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2701_; 
v_a_2694_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2696_ = v___x_2680_;
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2680_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2699_; 
if (v_isShared_2697_ == 0)
{
lean_ctor_set_tag(v___x_2696_, 1);
v___x_2699_ = v___x_2696_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_a_2694_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2717_; 
v_a_2702_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2704_ = v___x_2680_;
v_isShared_2705_ = v_isSharedCheck_2717_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2680_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2717_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2715_; 
v___x_2706_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_2707_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2669_);
v___x_2708_ = lean_string_append(v___x_2706_, v___x_2707_);
lean_dec_ref(v___x_2707_);
v___x_2709_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_2710_ = lean_string_append(v___x_2708_, v___x_2709_);
v___x_2711_ = lean_io_error_to_string(v_a_2702_);
v___x_2712_ = lean_string_append(v___x_2710_, v___x_2711_);
lean_dec_ref(v___x_2711_);
v___x_2713_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2712_);
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 0, v___x_2713_);
v___x_2715_ = v___x_2704_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v___x_2713_);
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
v___jp_2719_:
{
uint8_t v_construct_2721_; uint64_t v___x_2722_; 
v_construct_2721_ = lean_ctor_get_uint8(v_b_2669_, sizeof(void*)*4);
v___x_2722_ = lean_uint64_lor(v___x_2718_, v___y_2720_);
if (v_construct_2721_ == 0)
{
uint64_t v___x_2723_; 
v___x_2723_ = 0ULL;
v___y_2674_ = v___x_2722_;
v___y_2675_ = v___x_2723_;
goto v___jp_2673_;
}
else
{
uint64_t v___x_2724_; 
v___x_2724_ = 4ULL;
v___y_2674_ = v___x_2722_;
v___y_2675_ = v___x_2724_;
goto v___jp_2673_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1___boxed(lean_object* v_b_2727_, lean_object* v_args_2728_, lean_object* v_await_2729_, lean_object* v_a_2730_){
_start:
{
uint8_t v_await_boxed_2731_; lean_object* v_res_2732_; 
v_await_boxed_2731_ = lean_unbox(v_await_2729_);
v_res_2732_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v_b_2727_, v_args_2728_, v_await_boxed_2731_);
lean_dec_ref(v_b_2727_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new(lean_object* v_input_2741_, lean_object* v_baseURL_2742_, lean_object* v_options_2743_){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___y_2748_; 
v___x_2745_ = lean_unsigned_to_nat(3u);
v___x_2746_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_new___closed__2));
if (lean_obj_tag(v_input_2741_) == 0)
{
lean_object* v_value_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2765_; 
v_value_2758_ = lean_ctor_get(v_input_2741_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v_input_2741_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2760_ = v_input_2741_;
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_value_2758_);
lean_dec(v_input_2741_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2763_; 
if (v_isShared_2761_ == 0)
{
lean_ctor_set_tag(v___x_2760_, 4);
v___x_2763_ = v___x_2760_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_value_2758_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
v___y_2748_ = v___x_2763_;
goto v___jp_2747_;
}
}
}
else
{
lean_object* v_value_2766_; lean_object* v_protocol_2767_; lean_object* v_username_2768_; lean_object* v_password_2769_; lean_object* v_hostname_2770_; lean_object* v_port_2771_; lean_object* v_pathname_2772_; lean_object* v_search_2773_; lean_object* v_hash_2774_; lean_object* v_baseURL_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v_value_2766_ = lean_ctor_get(v_input_2741_, 0);
lean_inc_ref(v_value_2766_);
lean_dec_ref_known(v_input_2741_, 1);
v_protocol_2767_ = lean_ctor_get(v_value_2766_, 0);
lean_inc(v_protocol_2767_);
v_username_2768_ = lean_ctor_get(v_value_2766_, 1);
lean_inc(v_username_2768_);
v_password_2769_ = lean_ctor_get(v_value_2766_, 2);
lean_inc(v_password_2769_);
v_hostname_2770_ = lean_ctor_get(v_value_2766_, 3);
lean_inc(v_hostname_2770_);
v_port_2771_ = lean_ctor_get(v_value_2766_, 4);
lean_inc(v_port_2771_);
v_pathname_2772_ = lean_ctor_get(v_value_2766_, 5);
lean_inc(v_pathname_2772_);
v_search_2773_ = lean_ctor_get(v_value_2766_, 6);
lean_inc(v_search_2773_);
v_hash_2774_ = lean_ctor_get(v_value_2766_, 7);
lean_inc(v_hash_2774_);
v_baseURL_2775_ = lean_ctor_get(v_value_2766_, 8);
lean_inc(v_baseURL_2775_);
lean_dec_ref(v_value_2766_);
v___x_2776_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2777_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2767_);
v___x_2778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2776_);
lean_ctor_set(v___x_2778_, 1, v___x_2777_);
v___x_2779_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2780_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2768_);
v___x_2781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2779_);
lean_ctor_set(v___x_2781_, 1, v___x_2780_);
v___x_2782_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2783_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2769_);
v___x_2784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2782_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
v___x_2785_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2786_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2770_);
v___x_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2785_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
v___x_2788_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2789_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2771_);
v___x_2790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2788_);
lean_ctor_set(v___x_2790_, 1, v___x_2789_);
v___x_2791_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2792_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2772_);
v___x_2793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2791_);
lean_ctor_set(v___x_2793_, 1, v___x_2792_);
v___x_2794_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2795_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2773_);
v___x_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2794_);
lean_ctor_set(v___x_2796_, 1, v___x_2795_);
v___x_2797_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2798_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2774_);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2797_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
v___x_2800_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2801_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2775_);
v___x_2802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2800_);
lean_ctor_set(v___x_2802_, 1, v___x_2801_);
v___x_2803_ = lean_unsigned_to_nat(9u);
v___x_2804_ = lean_mk_empty_array_with_capacity(v___x_2803_);
v___x_2805_ = lean_array_push(v___x_2804_, v___x_2778_);
v___x_2806_ = lean_array_push(v___x_2805_, v___x_2781_);
v___x_2807_ = lean_array_push(v___x_2806_, v___x_2784_);
v___x_2808_ = lean_array_push(v___x_2807_, v___x_2787_);
v___x_2809_ = lean_array_push(v___x_2808_, v___x_2790_);
v___x_2810_ = lean_array_push(v___x_2809_, v___x_2793_);
v___x_2811_ = lean_array_push(v___x_2810_, v___x_2796_);
v___x_2812_ = lean_array_push(v___x_2811_, v___x_2799_);
v___x_2813_ = lean_array_push(v___x_2812_, v___x_2802_);
v___x_2814_ = l_Lasm_JS_Web_Support_fields(v___x_2813_);
lean_dec_ref(v___x_2813_);
v___y_2748_ = v___x_2814_;
goto v___jp_2747_;
}
v___jp_2747_:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; uint8_t v___x_2756_; lean_object* v___x_2757_; 
v___x_2749_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2749_, 0, v_baseURL_2742_);
v___x_2750_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_2743_);
v___x_2751_ = lean_mk_empty_array_with_capacity(v___x_2745_);
v___x_2752_ = lean_array_push(v___x_2751_, v___y_2748_);
v___x_2753_ = lean_array_push(v___x_2752_, v___x_2749_);
v___x_2754_ = lean_array_push(v___x_2753_, v___x_2750_);
v___x_2755_ = l_Lasm_JS_Web_Support_args(v___x_2754_);
v___x_2756_ = 0;
v___x_2757_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_2746_, v___x_2755_, v___x_2756_);
return v___x_2757_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_new___boxed(lean_object* v_input_2815_, lean_object* v_baseURL_2816_, lean_object* v_options_2817_, lean_object* v_a_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l_Lasm_JS_Web_URLPattern_new(v_input_2815_, v_baseURL_2816_, v_options_2817_);
lean_dec(v_options_2817_);
return v_res_2819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(lean_object* v_x_2820_){
_start:
{
if (lean_obj_tag(v_x_2820_) == 0)
{
lean_object* v___x_2821_; 
v___x_2821_ = lean_box(0);
return v___x_2821_;
}
else
{
lean_object* v_val_2822_; 
v_val_2822_ = lean_ctor_get(v_x_2820_, 0);
lean_inc(v_val_2822_);
lean_dec_ref_known(v_x_2820_, 1);
if (lean_obj_tag(v_val_2822_) == 0)
{
lean_object* v_value_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
v_value_2823_ = lean_ctor_get(v_val_2822_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v_val_2822_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2825_ = v_val_2822_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_value_2823_);
lean_dec(v_val_2822_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
lean_ctor_set_tag(v___x_2825_, 4);
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_value_2823_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
else
{
lean_object* v_value_2831_; lean_object* v_protocol_2832_; lean_object* v_username_2833_; lean_object* v_password_2834_; lean_object* v_hostname_2835_; lean_object* v_port_2836_; lean_object* v_pathname_2837_; lean_object* v_search_2838_; lean_object* v_hash_2839_; lean_object* v_baseURL_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v_value_2831_ = lean_ctor_get(v_val_2822_, 0);
lean_inc_ref(v_value_2831_);
lean_dec_ref_known(v_val_2822_, 1);
v_protocol_2832_ = lean_ctor_get(v_value_2831_, 0);
lean_inc(v_protocol_2832_);
v_username_2833_ = lean_ctor_get(v_value_2831_, 1);
lean_inc(v_username_2833_);
v_password_2834_ = lean_ctor_get(v_value_2831_, 2);
lean_inc(v_password_2834_);
v_hostname_2835_ = lean_ctor_get(v_value_2831_, 3);
lean_inc(v_hostname_2835_);
v_port_2836_ = lean_ctor_get(v_value_2831_, 4);
lean_inc(v_port_2836_);
v_pathname_2837_ = lean_ctor_get(v_value_2831_, 5);
lean_inc(v_pathname_2837_);
v_search_2838_ = lean_ctor_get(v_value_2831_, 6);
lean_inc(v_search_2838_);
v_hash_2839_ = lean_ctor_get(v_value_2831_, 7);
lean_inc(v_hash_2839_);
v_baseURL_2840_ = lean_ctor_get(v_value_2831_, 8);
lean_inc(v_baseURL_2840_);
lean_dec_ref(v_value_2831_);
v___x_2841_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2842_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_protocol_2832_);
v___x_2843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2841_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2845_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_username_2833_);
v___x_2846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2844_);
lean_ctor_set(v___x_2846_, 1, v___x_2845_);
v___x_2847_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2848_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_password_2834_);
v___x_2849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2847_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
v___x_2850_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2851_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2835_);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2850_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
v___x_2853_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2854_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_port_2836_);
v___x_2855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2853_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2857_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pathname_2837_);
v___x_2858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2856_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_2859_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2860_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_search_2838_);
v___x_2861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2859_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2863_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hash_2839_);
v___x_2864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2862_);
lean_ctor_set(v___x_2864_, 1, v___x_2863_);
v___x_2865_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_2866_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2840_);
v___x_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2865_);
lean_ctor_set(v___x_2867_, 1, v___x_2866_);
v___x_2868_ = lean_unsigned_to_nat(9u);
v___x_2869_ = lean_mk_empty_array_with_capacity(v___x_2868_);
v___x_2870_ = lean_array_push(v___x_2869_, v___x_2843_);
v___x_2871_ = lean_array_push(v___x_2870_, v___x_2846_);
v___x_2872_ = lean_array_push(v___x_2871_, v___x_2849_);
v___x_2873_ = lean_array_push(v___x_2872_, v___x_2852_);
v___x_2874_ = lean_array_push(v___x_2873_, v___x_2855_);
v___x_2875_ = lean_array_push(v___x_2874_, v___x_2858_);
v___x_2876_ = lean_array_push(v___x_2875_, v___x_2861_);
v___x_2877_ = lean_array_push(v___x_2876_, v___x_2864_);
v___x_2878_ = lean_array_push(v___x_2877_, v___x_2867_);
v___x_2879_ = l_Lasm_JS_Web_Support_fields(v___x_2878_);
lean_dec_ref(v___x_2878_);
return v___x_2879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions(lean_object* v_input_2887_, lean_object* v_options_2888_){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; uint8_t v___x_2898_; lean_object* v___x_2899_; 
v___x_2890_ = lean_unsigned_to_nat(2u);
v___x_2891_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_newWithOptions___closed__1));
v___x_2892_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_2887_);
v___x_2893_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_new_spec__0(v_options_2888_);
v___x_2894_ = lean_mk_empty_array_with_capacity(v___x_2890_);
v___x_2895_ = lean_array_push(v___x_2894_, v___x_2892_);
v___x_2896_ = lean_array_push(v___x_2895_, v___x_2893_);
v___x_2897_ = l_Lasm_JS_Web_Support_args(v___x_2896_);
v___x_2898_ = 0;
v___x_2899_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URLPattern_new_spec__1(v___x_2891_, v___x_2897_, v___x_2898_);
return v___x_2899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_newWithOptions___boxed(lean_object* v_input_2900_, lean_object* v_options_2901_, lean_object* v_a_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l_Lasm_JS_Web_URLPattern_newWithOptions(v_input_2900_, v_options_2901_);
lean_dec(v_options_2901_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol(lean_object* v_self_2904_){
_start:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2906_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
v___x_2907_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2904_, v___x_2906_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_protocol___boxed(lean_object* v_self_2908_, lean_object* v_a_2909_){
_start:
{
lean_object* v_res_2910_; 
v_res_2910_ = l_Lasm_JS_Web_URLPattern_protocol(v_self_2908_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username(lean_object* v_self_2911_){
_start:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2913_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
v___x_2914_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2911_, v___x_2913_);
return v___x_2914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_username___boxed(lean_object* v_self_2915_, lean_object* v_a_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l_Lasm_JS_Web_URLPattern_username(v_self_2915_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password(lean_object* v_self_2918_){
_start:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2920_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
v___x_2921_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2918_, v___x_2920_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_password___boxed(lean_object* v_self_2922_, lean_object* v_a_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Lasm_JS_Web_URLPattern_password(v_self_2922_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname(lean_object* v_self_2925_){
_start:
{
lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2927_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
v___x_2928_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2925_, v___x_2927_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hostname___boxed(lean_object* v_self_2929_, lean_object* v_a_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Lasm_JS_Web_URLPattern_hostname(v_self_2929_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port(lean_object* v_self_2932_){
_start:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; 
v___x_2934_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
v___x_2935_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2932_, v___x_2934_);
return v___x_2935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_port___boxed(lean_object* v_self_2936_, lean_object* v_a_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = l_Lasm_JS_Web_URLPattern_port(v_self_2936_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname(lean_object* v_self_2939_){
_start:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
v___x_2942_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2939_, v___x_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_pathname___boxed(lean_object* v_self_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l_Lasm_JS_Web_URLPattern_pathname(v_self_2943_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search(lean_object* v_self_2946_){
_start:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2948_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
v___x_2949_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2946_, v___x_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_search___boxed(lean_object* v_self_2950_, lean_object* v_a_2951_){
_start:
{
lean_object* v_res_2952_; 
v_res_2952_ = l_Lasm_JS_Web_URLPattern_search(v_self_2950_);
return v_res_2952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash(lean_object* v_self_2953_){
_start:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; 
v___x_2955_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
v___x_2956_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2953_, v___x_2955_);
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hash___boxed(lean_object* v_self_2957_, lean_object* v_a_2958_){
_start:
{
lean_object* v_res_2959_; 
v_res_2959_ = l_Lasm_JS_Web_URLPattern_hash(v_self_2957_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups(lean_object* v_self_2961_){
_start:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2963_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_hasRegExpGroups___closed__0));
v___x_2964_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2961_, v___x_2963_);
return v___x_2964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_hasRegExpGroups___boxed(lean_object* v_self_2965_, lean_object* v_a_2966_){
_start:
{
lean_object* v_res_2967_; 
v_res_2967_ = l_Lasm_JS_Web_URLPattern_hasRegExpGroups(v_self_2965_);
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test(lean_object* v_self_2969_, lean_object* v_input_2970_, lean_object* v_baseURL_2971_){
_start:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2973_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_test___closed__0));
v___x_2974_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_2970_);
v___x_2975_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_2971_);
v___x_2976_ = lean_unsigned_to_nat(2u);
v___x_2977_ = lean_mk_empty_array_with_capacity(v___x_2976_);
v___x_2978_ = lean_array_push(v___x_2977_, v___x_2974_);
v___x_2979_ = lean_array_push(v___x_2978_, v___x_2975_);
v___x_2980_ = l_Lasm_JS_Web_Support_args(v___x_2979_);
v___x_2981_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2969_, v___x_2973_, v___x_2980_);
return v___x_2981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_test___boxed(lean_object* v_self_2982_, lean_object* v_input_2983_, lean_object* v_baseURL_2984_, lean_object* v_a_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l_Lasm_JS_Web_URLPattern_test(v_self_2982_, v_input_2983_, v_baseURL_2984_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_2995_, lean_object* v_key_2996_){
_start:
{
if (lean_obj_tag(v_d_2995_) == 8)
{
lean_object* v___x_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3027_; 
v___x_2999_ = l_Lasm_JS_Data_field(v_d_2995_, v_key_2996_);
v_isSharedCheck_3027_ = !lean_is_exclusive(v_d_2995_);
if (v_isSharedCheck_3027_ == 0)
{
lean_object* v_unused_3028_; 
v_unused_3028_ = lean_ctor_get(v_d_2995_, 0);
lean_dec(v_unused_3028_);
v___x_3001_ = v_d_2995_;
v_isShared_3002_ = v_isSharedCheck_3027_;
goto v_resetjp_3000_;
}
else
{
lean_dec(v_d_2995_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3027_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
switch(lean_obj_tag(v___x_2999_))
{
case 1:
{
lean_del_object(v___x_3001_);
goto v___jp_2997_;
}
case 0:
{
lean_del_object(v___x_3001_);
goto v___jp_2997_;
}
default: 
{
if (lean_obj_tag(v___x_2999_) == 4)
{
lean_object* v_s_3003_; lean_object* v___x_3005_; 
v_s_3003_ = lean_ctor_get(v___x_2999_, 0);
lean_inc_ref(v_s_3003_);
lean_dec_ref_known(v___x_2999_, 1);
if (v_isShared_3002_ == 0)
{
lean_ctor_set_tag(v___x_3001_, 1);
lean_ctor_set(v___x_3001_, 0, v_s_3003_);
v___x_3005_ = v___x_3001_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_s_3003_);
v___x_3005_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
lean_object* v___x_3006_; 
v___x_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3005_);
return v___x_3006_;
}
}
else
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; uint8_t v___x_3018_; 
v___x_3008_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3009_ = lean_string_append(v___x_3008_, v_key_2996_);
v___x_3010_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3011_ = lean_string_append(v___x_3009_, v___x_3010_);
v___x_3012_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2___closed__0));
v___x_3013_ = lean_string_append(v___x_3011_, v___x_3012_);
v___x_3014_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3015_ = lean_string_append(v___x_3013_, v___x_3014_);
v___x_3016_ = l_Lasm_JS_Data_describe(v___x_2999_);
v___x_3017_ = lean_string_append(v___x_3015_, v___x_3016_);
lean_dec_ref(v___x_3016_);
v___x_3018_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__4);
if (v___x_3018_ == 0)
{
lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3022_; 
v___x_3019_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__5));
v___x_3020_ = lean_string_append(v___x_3017_, v___x_3019_);
if (v_isShared_3002_ == 0)
{
lean_ctor_set_tag(v___x_3001_, 0);
lean_ctor_set(v___x_3001_, 0, v___x_3020_);
v___x_3022_ = v___x_3001_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3020_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
else
{
lean_object* v___x_3025_; 
if (v_isShared_3002_ == 0)
{
lean_ctor_set_tag(v___x_3001_, 0);
lean_ctor_set(v___x_3001_, 0, v___x_3017_);
v___x_3025_ = v___x_3001_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v___x_3017_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3029_; 
lean_dec(v_d_2995_);
v___x_3029_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5));
return v___x_3029_;
}
v___jp_2997_:
{
lean_object* v___x_2998_; 
v___x_2998_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2998_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_3030_, lean_object* v_key_3031_){
_start:
{
lean_object* v_res_3032_; 
v_res_3032_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3030_, v_key_3031_);
lean_dec_ref(v_key_3031_);
return v_res_3032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(size_t v_sz_3033_, size_t v_i_3034_, lean_object* v_bs_3035_){
_start:
{
uint8_t v___x_3036_; 
v___x_3036_ = lean_usize_dec_lt(v_i_3034_, v_sz_3033_);
if (v___x_3036_ == 0)
{
lean_object* v___x_3037_; 
v___x_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3037_, 0, v_bs_3035_);
return v___x_3037_;
}
else
{
lean_object* v_v_3038_; lean_object* v___x_3039_; lean_object* v_bs_x27_3040_; lean_object* v_a_3042_; 
v_v_3038_ = lean_array_uget(v_bs_3035_, v_i_3034_);
v___x_3039_ = lean_unsigned_to_nat(0u);
v_bs_x27_3040_ = lean_array_uset(v_bs_3035_, v_i_3034_, v___x_3039_);
switch(lean_obj_tag(v_v_3038_))
{
case 4:
{
lean_object* v_s_3047_; lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3054_; 
v_s_3047_ = lean_ctor_get(v_v_3038_, 0);
v_isSharedCheck_3054_ = !lean_is_exclusive(v_v_3038_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3049_ = v_v_3038_;
v_isShared_3050_ = v_isSharedCheck_3054_;
goto v_resetjp_3048_;
}
else
{
lean_inc(v_s_3047_);
lean_dec(v_v_3038_);
v___x_3049_ = lean_box(0);
v_isShared_3050_ = v_isSharedCheck_3054_;
goto v_resetjp_3048_;
}
v_resetjp_3048_:
{
lean_object* v___x_3052_; 
if (v_isShared_3050_ == 0)
{
lean_ctor_set_tag(v___x_3049_, 0);
v___x_3052_ = v___x_3049_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v_s_3047_);
v___x_3052_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
v_a_3042_ = v___x_3052_;
goto v___jp_3041_;
}
}
}
case 8:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3055_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc_ref(v_v_3038_);
v___x_3056_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3038_, v___x_3055_);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
lean_dec_ref_known(v_v_3038_, 1);
lean_dec_ref(v_bs_x27_3040_);
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3056_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_3056_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_3056_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v_a_3065_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v___x_3056_, 1);
v___x_3066_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc_ref(v_v_3038_);
v___x_3067_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3038_, v___x_3066_);
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3075_; 
lean_dec(v_a_3065_);
lean_dec_ref_known(v_v_3038_, 1);
lean_dec_ref(v_bs_x27_3040_);
v_a_3068_ = lean_ctor_get(v___x_3067_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3070_ = v___x_3067_;
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v___x_3067_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3073_; 
if (v_isShared_3071_ == 0)
{
v___x_3073_ = v___x_3070_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3068_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v_a_3076_ = lean_ctor_get(v___x_3067_, 0);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3067_, 1);
v___x_3077_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc_ref(v_v_3038_);
v___x_3078_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3038_, v___x_3077_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3086_; 
lean_dec(v_a_3076_);
lean_dec(v_a_3065_);
lean_dec_ref_known(v_v_3038_, 1);
lean_dec_ref(v_bs_x27_3040_);
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3081_ = v___x_3078_;
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3078_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3079_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
else
{
lean_object* v_a_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v_a_3087_ = lean_ctor_get(v___x_3078_, 0);
lean_inc(v_a_3087_);
lean_dec_ref_known(v___x_3078_, 1);
v___x_3088_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc_ref(v_v_3038_);
v___x_3089_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3038_, v___x_3088_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3097_; 
lean_dec(v_a_3087_);
lean_dec(v_a_3076_);
lean_dec(v_a_3065_);
lean_dec_ref_known(v_v_3038_, 1);
lean_dec_ref(v_bs_x27_3040_);
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3092_ = v___x_3089_;
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3089_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3095_; 
if (v_isShared_3093_ == 0)
{
v___x_3095_ = v___x_3092_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3090_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
else
{
lean_object* v_a_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v_a_3098_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3098_);
lean_dec_ref_known(v___x_3089_, 1);
v___x_3099_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc_ref(v_v_3038_);
v___x_3100_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3038_, v___x_3099_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3108_; 
lean_dec(v_a_3098_);
lean_dec(v_a_3087_);
lean_dec(v_a_3076_);
lean_dec(v_a_3065_);
lean_dec_ref_known(v_v_3038_, 1);
lean_dec_ref(v_bs_x27_3040_);
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3103_ = v___x_3100_;
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3100_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3106_; 
if (v_isShared_3104_ == 0)
{
v___x_3106_ = v___x_3103_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_a_3101_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
return v___x_3106_;
}
}
}
else
{
lean_object* v_a_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v_a_3109_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_a_3109_);
lean_dec_ref_known(v___x_3100_, 1);
v___x_3110_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc_ref(v_v_3038_);
v___x_3111_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3038_, v___x_3110_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3119_; 
lean_dec(v_a_3109_);
lean_dec(v_a_3098_);
lean_dec(v_a_3087_);
lean_dec(v_a_3076_);
lean_dec(v_a_3065_);
lean_dec_ref_known(v_v_3038_, 1);
lean_dec_ref(v_bs_x27_3040_);
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3114_ = v___x_3111_;
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_a_3112_);
lean_dec(v___x_3111_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3117_; 
if (v_isShared_3115_ == 0)
{
v___x_3117_ = v___x_3114_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_a_3112_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; 
v_a_3120_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3120_);
lean_dec_ref_known(v___x_3111_, 1);
v___x_3121_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc_ref(v_v_3038_);
v___x_3122_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3038_, v___x_3121_);
if (lean_obj_tag(v___x_3122_) == 0)
{
lean_object* v_a_3123_; lean_object* v___x_3125_; uint8_t v_isShared_3126_; uint8_t v_isSharedCheck_3130_; 
lean_dec(v_a_3120_);
lean_dec(v_a_3109_);
lean_dec(v_a_3098_);
lean_dec(v_a_3087_);
lean_dec(v_a_3076_);
lean_dec(v_a_3065_);
lean_dec_ref_known(v_v_3038_, 1);
lean_dec_ref(v_bs_x27_3040_);
v_a_3123_ = lean_ctor_get(v___x_3122_, 0);
v_isSharedCheck_3130_ = !lean_is_exclusive(v___x_3122_);
if (v_isSharedCheck_3130_ == 0)
{
v___x_3125_ = v___x_3122_;
v_isShared_3126_ = v_isSharedCheck_3130_;
goto v_resetjp_3124_;
}
else
{
lean_inc(v_a_3123_);
lean_dec(v___x_3122_);
v___x_3125_ = lean_box(0);
v_isShared_3126_ = v_isSharedCheck_3130_;
goto v_resetjp_3124_;
}
v_resetjp_3124_:
{
lean_object* v___x_3128_; 
if (v_isShared_3126_ == 0)
{
v___x_3128_ = v___x_3125_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v_a_3123_);
v___x_3128_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
return v___x_3128_;
}
}
}
else
{
lean_object* v_a_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v_a_3131_ = lean_ctor_get(v___x_3122_, 0);
lean_inc(v_a_3131_);
lean_dec_ref_known(v___x_3122_, 1);
v___x_3132_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc_ref(v_v_3038_);
v___x_3133_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3038_, v___x_3132_);
if (lean_obj_tag(v___x_3133_) == 0)
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3141_; 
lean_dec(v_a_3131_);
lean_dec(v_a_3120_);
lean_dec(v_a_3109_);
lean_dec(v_a_3098_);
lean_dec(v_a_3087_);
lean_dec(v_a_3076_);
lean_dec(v_a_3065_);
lean_dec_ref_known(v_v_3038_, 1);
lean_dec_ref(v_bs_x27_3040_);
v_a_3134_ = lean_ctor_get(v___x_3133_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3133_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3136_ = v___x_3133_;
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v___x_3133_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3137_ == 0)
{
v___x_3139_ = v___x_3136_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_a_3134_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
else
{
lean_object* v_a_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v_a_3142_ = lean_ctor_get(v___x_3133_, 0);
lean_inc(v_a_3142_);
lean_dec_ref_known(v___x_3133_, 1);
v___x_3143_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__8));
v___x_3144_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_3038_, v___x_3143_);
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_dec(v_a_3142_);
lean_dec(v_a_3131_);
lean_dec(v_a_3120_);
lean_dec(v_a_3109_);
lean_dec(v_a_3098_);
lean_dec(v_a_3087_);
lean_dec(v_a_3076_);
lean_dec(v_a_3065_);
lean_dec_ref(v_bs_x27_3040_);
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3144_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3144_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v_a_3153_ = lean_ctor_get(v___x_3144_, 0);
lean_inc(v_a_3153_);
lean_dec_ref_known(v___x_3144_, 1);
v___x_3154_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3154_, 0, v_a_3065_);
lean_ctor_set(v___x_3154_, 1, v_a_3076_);
lean_ctor_set(v___x_3154_, 2, v_a_3087_);
lean_ctor_set(v___x_3154_, 3, v_a_3098_);
lean_ctor_set(v___x_3154_, 4, v_a_3109_);
lean_ctor_set(v___x_3154_, 5, v_a_3120_);
lean_ctor_set(v___x_3154_, 6, v_a_3131_);
lean_ctor_set(v___x_3154_, 7, v_a_3142_);
lean_ctor_set(v___x_3154_, 8, v_a_3153_);
v___x_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3154_);
v_a_3042_ = v___x_3155_;
goto v___jp_3041_;
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
lean_object* v___x_3156_; 
lean_dec_ref(v_bs_x27_3040_);
lean_dec(v_v_3038_);
v___x_3156_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3156_;
}
}
v___jp_3041_:
{
size_t v___x_3043_; size_t v___x_3044_; lean_object* v___x_3045_; 
v___x_3043_ = ((size_t)1ULL);
v___x_3044_ = lean_usize_add(v_i_3034_, v___x_3043_);
v___x_3045_ = lean_array_uset(v_bs_x27_3040_, v_i_3034_, v_a_3042_);
v_i_3034_ = v___x_3044_;
v_bs_3035_ = v___x_3045_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_sz_3157_, lean_object* v_i_3158_, lean_object* v_bs_3159_){
_start:
{
size_t v_sz_boxed_3160_; size_t v_i_boxed_3161_; lean_object* v_res_3162_; 
v_sz_boxed_3160_ = lean_unbox_usize(v_sz_3157_);
lean_dec(v_sz_3157_);
v_i_boxed_3161_ = lean_unbox_usize(v_i_3158_);
lean_dec(v_i_3158_);
v_res_3162_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(v_sz_boxed_3160_, v_i_boxed_3161_, v_bs_3159_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3169_, lean_object* v_key_3170_){
_start:
{
if (lean_obj_tag(v_d_3169_) == 8)
{
lean_object* v___x_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3226_; 
v___x_3173_ = l_Lasm_JS_Data_field(v_d_3169_, v_key_3170_);
v_isSharedCheck_3226_ = !lean_is_exclusive(v_d_3169_);
if (v_isSharedCheck_3226_ == 0)
{
lean_object* v_unused_3227_; 
v_unused_3227_ = lean_ctor_get(v_d_3169_, 0);
lean_dec(v_unused_3227_);
v___x_3175_ = v_d_3169_;
v_isShared_3176_ = v_isSharedCheck_3226_;
goto v_resetjp_3174_;
}
else
{
lean_dec(v_d_3169_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3226_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v_a_3178_; 
switch(lean_obj_tag(v___x_3173_))
{
case 1:
{
lean_del_object(v___x_3175_);
goto v___jp_3171_;
}
case 0:
{
lean_del_object(v___x_3175_);
goto v___jp_3171_;
}
default: 
{
if (lean_obj_tag(v___x_3173_) == 7)
{
lean_object* v_items_3203_; size_t v_sz_3204_; size_t v___x_3205_; lean_object* v___x_3206_; 
v_items_3203_ = lean_ctor_get(v___x_3173_, 0);
lean_inc_ref(v_items_3203_);
v_sz_3204_ = lean_array_size(v_items_3203_);
v___x_3205_ = ((size_t)0ULL);
v___x_3206_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__4(v_sz_3204_, v___x_3205_, v_items_3203_);
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; uint8_t v___x_3211_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v___x_3206_, 1);
v___x_3208_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3209_ = lean_string_utf8_byte_size(v_a_3207_);
v___x_3210_ = lean_unsigned_to_nat(0u);
v___x_3211_ = lean_nat_dec_eq(v___x_3209_, v___x_3210_);
if (v___x_3211_ == 0)
{
lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
v___x_3212_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3213_ = lean_string_append(v___x_3212_, v_a_3207_);
lean_dec(v_a_3207_);
v___x_3214_ = lean_string_append(v___x_3208_, v___x_3213_);
lean_dec_ref(v___x_3213_);
v_a_3178_ = v___x_3214_;
goto v___jp_3177_;
}
else
{
lean_dec(v_a_3207_);
v_a_3178_ = v___x_3208_;
goto v___jp_3177_;
}
}
else
{
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3215_; 
v_a_3215_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3215_);
lean_dec_ref_known(v___x_3206_, 1);
v_a_3178_ = v_a_3215_;
goto v___jp_3177_;
}
else
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3224_; 
lean_dec_ref_known(v___x_3173_, 1);
lean_del_object(v___x_3175_);
v_a_3216_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3224_ == 0)
{
v___x_3218_ = v___x_3206_;
v_isShared_3219_ = v_isSharedCheck_3224_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3206_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3224_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3220_; lean_object* v___x_3222_; 
v___x_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3220_, 0, v_a_3216_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 0, v___x_3220_);
v___x_3222_ = v___x_3218_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3220_);
v___x_3222_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
return v___x_3222_;
}
}
}
}
}
else
{
lean_object* v___x_3225_; 
v___x_3225_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3178_ = v___x_3225_;
goto v___jp_3177_;
}
}
}
v___jp_3177_:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; uint8_t v___x_3191_; 
v___x_3179_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3180_ = lean_string_append(v___x_3179_, v_key_3170_);
v___x_3181_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3182_ = lean_string_append(v___x_3180_, v___x_3181_);
v___x_3183_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__1));
v___x_3184_ = lean_string_append(v___x_3182_, v___x_3183_);
v___x_3185_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3186_ = lean_string_append(v___x_3184_, v___x_3185_);
v___x_3187_ = l_Lasm_JS_Data_describe(v___x_3173_);
v___x_3188_ = lean_string_append(v___x_3186_, v___x_3187_);
lean_dec_ref(v___x_3187_);
v___x_3189_ = lean_string_utf8_byte_size(v_a_3178_);
v___x_3190_ = lean_unsigned_to_nat(0u);
v___x_3191_ = lean_nat_dec_eq(v___x_3189_, v___x_3190_);
if (v___x_3191_ == 0)
{
lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3198_; 
v___x_3192_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3193_ = lean_string_append(v___x_3192_, v_a_3178_);
lean_dec_ref(v_a_3178_);
v___x_3194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3195_ = lean_string_append(v___x_3193_, v___x_3194_);
v___x_3196_ = lean_string_append(v___x_3188_, v___x_3195_);
lean_dec_ref(v___x_3195_);
if (v_isShared_3176_ == 0)
{
lean_ctor_set_tag(v___x_3175_, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3196_);
v___x_3198_ = v___x_3175_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v___x_3196_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
else
{
lean_object* v___x_3201_; 
lean_dec_ref(v_a_3178_);
if (v_isShared_3176_ == 0)
{
lean_ctor_set_tag(v___x_3175_, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3188_);
v___x_3201_ = v___x_3175_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v___x_3188_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
}
}
else
{
lean_object* v___x_3228_; 
lean_dec(v_d_3169_);
v___x_3228_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__3));
return v___x_3228_;
}
v___jp_3171_:
{
lean_object* v___x_3172_; 
v___x_3172_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___closed__0));
return v___x_3172_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3229_, lean_object* v_key_3230_){
_start:
{
lean_object* v_res_3231_; 
v_res_3231_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(v_d_3229_, v_key_3230_);
lean_dec_ref(v_key_3230_);
return v_res_3231_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(size_t v_sz_3233_, size_t v_i_3234_, lean_object* v_bs_3235_){
_start:
{
uint8_t v___x_3236_; 
v___x_3236_ = lean_usize_dec_lt(v_i_3234_, v_sz_3233_);
if (v___x_3236_ == 0)
{
lean_object* v___x_3237_; 
v___x_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3237_, 0, v_bs_3235_);
return v___x_3237_;
}
else
{
lean_object* v_v_3238_; lean_object* v_fst_3239_; lean_object* v_snd_3240_; lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3264_; 
v_v_3238_ = lean_array_uget(v_bs_3235_, v_i_3234_);
v_fst_3239_ = lean_ctor_get(v_v_3238_, 0);
v_snd_3240_ = lean_ctor_get(v_v_3238_, 1);
v_isSharedCheck_3264_ = !lean_is_exclusive(v_v_3238_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3242_ = v_v_3238_;
v_isShared_3243_ = v_isSharedCheck_3264_;
goto v_resetjp_3241_;
}
else
{
lean_inc(v_snd_3240_);
lean_inc(v_fst_3239_);
lean_dec(v_v_3238_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3264_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
lean_object* v___x_3244_; lean_object* v_bs_x27_3245_; lean_object* v_a_3247_; 
v___x_3244_ = lean_unsigned_to_nat(0u);
v_bs_x27_3245_ = lean_array_uset(v_bs_3235_, v_i_3234_, v___x_3244_);
switch(lean_obj_tag(v_snd_3240_))
{
case 1:
{
goto v___jp_3255_;
}
case 0:
{
goto v___jp_3255_;
}
default: 
{
if (lean_obj_tag(v_snd_3240_) == 4)
{
lean_object* v_s_3257_; lean_object* v___x_3258_; 
v_s_3257_ = lean_ctor_get(v_snd_3240_, 0);
lean_inc_ref(v_s_3257_);
lean_dec_ref_known(v_snd_3240_, 1);
v___x_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3258_, 0, v_s_3257_);
v_a_3247_ = v___x_3258_;
goto v___jp_3246_;
}
else
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
lean_dec_ref(v_bs_x27_3245_);
lean_del_object(v___x_3242_);
lean_dec(v_snd_3240_);
v___x_3259_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___closed__0));
v___x_3260_ = lean_string_append(v___x_3259_, v_fst_3239_);
lean_dec(v_fst_3239_);
v___x_3261_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3262_ = lean_string_append(v___x_3260_, v___x_3261_);
v___x_3263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3262_);
return v___x_3263_;
}
}
}
v___jp_3246_:
{
lean_object* v___x_3249_; 
if (v_isShared_3243_ == 0)
{
lean_ctor_set(v___x_3242_, 1, v_a_3247_);
v___x_3249_ = v___x_3242_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_fst_3239_);
lean_ctor_set(v_reuseFailAlloc_3254_, 1, v_a_3247_);
v___x_3249_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
size_t v___x_3250_; size_t v___x_3251_; lean_object* v___x_3252_; 
v___x_3250_ = ((size_t)1ULL);
v___x_3251_ = lean_usize_add(v_i_3234_, v___x_3250_);
v___x_3252_ = lean_array_uset(v_bs_x27_3245_, v_i_3234_, v___x_3249_);
v_i_3234_ = v___x_3251_;
v_bs_3235_ = v___x_3252_;
goto _start;
}
}
v___jp_3255_:
{
lean_object* v___x_3256_; 
v___x_3256_ = lean_box(0);
v_a_3247_ = v___x_3256_;
goto v___jp_3246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7___boxed(lean_object* v_sz_3265_, lean_object* v_i_3266_, lean_object* v_bs_3267_){
_start:
{
size_t v_sz_boxed_3268_; size_t v_i_boxed_3269_; lean_object* v_res_3270_; 
v_sz_boxed_3268_ = lean_unbox_usize(v_sz_3265_);
lean_dec(v_sz_3265_);
v_i_boxed_3269_ = lean_unbox_usize(v_i_3266_);
lean_dec(v_i_3266_);
v_res_3270_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(v_sz_boxed_3268_, v_i_boxed_3269_, v_bs_3267_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(lean_object* v_d_3276_, lean_object* v_key_3277_){
_start:
{
if (lean_obj_tag(v_d_3276_) == 8)
{
lean_object* v___x_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3325_; 
v___x_3280_ = l_Lasm_JS_Data_field(v_d_3276_, v_key_3277_);
v_isSharedCheck_3325_ = !lean_is_exclusive(v_d_3276_);
if (v_isSharedCheck_3325_ == 0)
{
lean_object* v_unused_3326_; 
v_unused_3326_ = lean_ctor_get(v_d_3276_, 0);
lean_dec(v_unused_3326_);
v___x_3282_ = v_d_3276_;
v_isShared_3283_ = v_isSharedCheck_3325_;
goto v_resetjp_3281_;
}
else
{
lean_dec(v_d_3276_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3325_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v_a_3285_; 
switch(lean_obj_tag(v___x_3280_))
{
case 1:
{
lean_del_object(v___x_3282_);
goto v___jp_3278_;
}
case 0:
{
lean_del_object(v___x_3282_);
goto v___jp_3278_;
}
default: 
{
if (lean_obj_tag(v___x_3280_) == 8)
{
lean_object* v_fields_3310_; size_t v_sz_3311_; size_t v___x_3312_; lean_object* v___x_3313_; 
v_fields_3310_ = lean_ctor_get(v___x_3280_, 0);
lean_inc_ref(v_fields_3310_);
v_sz_3311_ = lean_array_size(v_fields_3310_);
v___x_3312_ = ((size_t)0ULL);
v___x_3313_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6_spec__7(v_sz_3311_, v___x_3312_, v_fields_3310_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v_a_3314_; 
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
lean_inc(v_a_3314_);
lean_dec_ref_known(v___x_3313_, 1);
v_a_3285_ = v_a_3314_;
goto v___jp_3284_;
}
else
{
lean_object* v_a_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3323_; 
lean_dec_ref_known(v___x_3280_, 1);
lean_del_object(v___x_3282_);
v_a_3315_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3317_ = v___x_3313_;
v_isShared_3318_ = v_isSharedCheck_3323_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_a_3315_);
lean_dec(v___x_3313_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3323_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3319_; lean_object* v___x_3321_; 
v___x_3319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3319_, 0, v_a_3315_);
if (v_isShared_3318_ == 0)
{
lean_ctor_set(v___x_3317_, 0, v___x_3319_);
v___x_3321_ = v___x_3317_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v___x_3319_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
return v___x_3321_;
}
}
}
}
else
{
lean_object* v___x_3324_; 
v___x_3324_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v_a_3285_ = v___x_3324_;
goto v___jp_3284_;
}
}
}
v___jp_3284_:
{
lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; uint8_t v___x_3298_; 
v___x_3286_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3287_ = lean_string_append(v___x_3286_, v_key_3277_);
v___x_3288_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3289_ = lean_string_append(v___x_3287_, v___x_3288_);
v___x_3290_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__1));
v___x_3291_ = lean_string_append(v___x_3289_, v___x_3290_);
v___x_3292_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3293_ = lean_string_append(v___x_3291_, v___x_3292_);
v___x_3294_ = l_Lasm_JS_Data_describe(v___x_3280_);
v___x_3295_ = lean_string_append(v___x_3293_, v___x_3294_);
lean_dec_ref(v___x_3294_);
v___x_3296_ = lean_string_utf8_byte_size(v_a_3285_);
v___x_3297_ = lean_unsigned_to_nat(0u);
v___x_3298_ = lean_nat_dec_eq(v___x_3296_, v___x_3297_);
if (v___x_3298_ == 0)
{
lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3305_; 
v___x_3299_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3300_ = lean_string_append(v___x_3299_, v_a_3285_);
lean_dec_ref(v_a_3285_);
v___x_3301_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3302_ = lean_string_append(v___x_3300_, v___x_3301_);
v___x_3303_ = lean_string_append(v___x_3295_, v___x_3302_);
lean_dec_ref(v___x_3302_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set_tag(v___x_3282_, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3303_);
v___x_3305_ = v___x_3282_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v___x_3303_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
else
{
lean_object* v___x_3308_; 
lean_dec_ref(v_a_3285_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set_tag(v___x_3282_, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3295_);
v___x_3308_ = v___x_3282_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v___x_3295_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
}
}
else
{
lean_object* v___x_3327_; 
lean_dec(v_d_3276_);
v___x_3327_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__2));
return v___x_3327_;
}
v___jp_3278_:
{
lean_object* v___x_3279_; 
v___x_3279_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___closed__0));
return v___x_3279_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6___boxed(lean_object* v_d_3328_, lean_object* v_key_3329_){
_start:
{
lean_object* v_res_3330_; 
v_res_3330_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(v_d_3328_, v_key_3329_);
lean_dec_ref(v_key_3329_);
return v_res_3330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_3336_, lean_object* v_key_3337_){
_start:
{
if (lean_obj_tag(v_d_3336_) == 8)
{
lean_object* v___x_3340_; lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3393_; 
v___x_3340_ = l_Lasm_JS_Data_field(v_d_3336_, v_key_3337_);
v_isSharedCheck_3393_ = !lean_is_exclusive(v_d_3336_);
if (v_isSharedCheck_3393_ == 0)
{
lean_object* v_unused_3394_; 
v_unused_3394_ = lean_ctor_get(v_d_3336_, 0);
lean_dec(v_unused_3394_);
v___x_3342_ = v_d_3336_;
v_isShared_3343_ = v_isSharedCheck_3393_;
goto v_resetjp_3341_;
}
else
{
lean_dec(v_d_3336_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3393_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v_a_3345_; 
switch(lean_obj_tag(v___x_3340_))
{
case 1:
{
lean_del_object(v___x_3342_);
goto v___jp_3338_;
}
case 0:
{
lean_del_object(v___x_3342_);
goto v___jp_3338_;
}
default: 
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3370_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__0));
lean_inc(v___x_3340_);
v___x_3371_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_3340_, v___x_3370_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_a_3372_);
lean_dec_ref_known(v___x_3371_, 1);
v_a_3345_ = v_a_3372_;
goto v___jp_3344_;
}
else
{
lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3392_; 
v_a_3373_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3392_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3392_ == 0)
{
v___x_3375_ = v___x_3371_;
v_isShared_3376_ = v_isSharedCheck_3392_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v___x_3371_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3392_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3377_; lean_object* v___x_3378_; 
v___x_3377_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternComponentResult___lam__0___closed__1));
lean_inc(v___x_3340_);
v___x_3378_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3_spec__6(v___x_3340_, v___x_3377_);
if (lean_obj_tag(v___x_3378_) == 0)
{
lean_object* v_a_3379_; 
lean_del_object(v___x_3375_);
lean_dec(v_a_3373_);
v_a_3379_ = lean_ctor_get(v___x_3378_, 0);
lean_inc(v_a_3379_);
lean_dec_ref_known(v___x_3378_, 1);
v_a_3345_ = v_a_3379_;
goto v___jp_3344_;
}
else
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3391_; 
lean_del_object(v___x_3342_);
lean_dec(v___x_3340_);
v_a_3380_ = lean_ctor_get(v___x_3378_, 0);
v_isSharedCheck_3391_ = !lean_is_exclusive(v___x_3378_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3382_ = v___x_3378_;
v_isShared_3383_ = v_isSharedCheck_3391_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3378_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3391_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3384_; lean_object* v___x_3386_; 
v___x_3384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3384_, 0, v_a_3373_);
lean_ctor_set(v___x_3384_, 1, v_a_3380_);
if (v_isShared_3376_ == 0)
{
lean_ctor_set(v___x_3375_, 0, v___x_3384_);
v___x_3386_ = v___x_3375_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v___x_3384_);
v___x_3386_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
lean_object* v___x_3388_; 
if (v_isShared_3383_ == 0)
{
lean_ctor_set(v___x_3382_, 0, v___x_3386_);
v___x_3388_ = v___x_3382_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v___x_3386_);
v___x_3388_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
return v___x_3388_;
}
}
}
}
}
}
}
}
v___jp_3344_:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; uint8_t v___x_3358_; 
v___x_3346_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3347_ = lean_string_append(v___x_3346_, v_key_3337_);
v___x_3348_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3349_ = lean_string_append(v___x_3347_, v___x_3348_);
v___x_3350_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3351_ = lean_string_append(v___x_3349_, v___x_3350_);
v___x_3352_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_3353_ = lean_string_append(v___x_3351_, v___x_3352_);
v___x_3354_ = l_Lasm_JS_Data_describe(v___x_3340_);
v___x_3355_ = lean_string_append(v___x_3353_, v___x_3354_);
lean_dec_ref(v___x_3354_);
v___x_3356_ = lean_string_utf8_byte_size(v_a_3345_);
v___x_3357_ = lean_unsigned_to_nat(0u);
v___x_3358_ = lean_nat_dec_eq(v___x_3356_, v___x_3357_);
if (v___x_3358_ == 0)
{
lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3365_; 
v___x_3359_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3360_ = lean_string_append(v___x_3359_, v_a_3345_);
lean_dec_ref(v_a_3345_);
v___x_3361_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3362_ = lean_string_append(v___x_3360_, v___x_3361_);
v___x_3363_ = lean_string_append(v___x_3355_, v___x_3362_);
lean_dec_ref(v___x_3362_);
if (v_isShared_3343_ == 0)
{
lean_ctor_set_tag(v___x_3342_, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3363_);
v___x_3365_ = v___x_3342_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v___x_3363_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
else
{
lean_object* v___x_3368_; 
lean_dec_ref(v_a_3345_);
if (v_isShared_3343_ == 0)
{
lean_ctor_set_tag(v___x_3342_, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3355_);
v___x_3368_ = v___x_3342_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v___x_3355_);
v___x_3368_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
return v___x_3368_;
}
}
}
}
}
else
{
lean_object* v___x_3395_; 
lean_dec(v_d_3336_);
v___x_3395_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__2));
return v___x_3395_;
}
v___jp_3338_:
{
lean_object* v___x_3339_; 
v___x_3339_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_3339_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_3396_, lean_object* v_key_3397_){
_start:
{
lean_object* v_res_3398_; 
v_res_3398_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3396_, v_key_3397_);
lean_dec_ref(v_key_3397_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(lean_object* v_context_3400_, lean_object* v_d_3401_){
_start:
{
lean_object* v___y_3407_; lean_object* v___y_3408_; lean_object* v___y_3413_; lean_object* v_received_3414_; lean_object* v___y_3433_; lean_object* v_a_3436_; 
switch(lean_obj_tag(v_d_3401_))
{
case 1:
{
goto v___jp_3403_;
}
case 0:
{
goto v___jp_3403_;
}
default: 
{
lean_object* v___x_3460_; lean_object* v___x_3461_; 
v___x_3460_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSURLPatternResult___lam__0___closed__0));
lean_inc(v_d_3401_);
v___x_3461_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2(v_d_3401_, v___x_3460_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3462_);
lean_dec_ref_known(v___x_3461_, 1);
v_a_3436_ = v_a_3462_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; 
v_a_3463_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3463_);
lean_dec_ref_known(v___x_3461_, 1);
v___x_3464_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__0));
lean_inc(v_d_3401_);
v___x_3465_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3401_, v___x_3464_);
if (lean_obj_tag(v___x_3465_) == 0)
{
lean_object* v_a_3466_; 
lean_dec(v_a_3463_);
v_a_3466_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3466_);
lean_dec_ref_known(v___x_3465_, 1);
v_a_3436_ = v_a_3466_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v_a_3467_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3467_);
lean_dec_ref_known(v___x_3465_, 1);
v___x_3468_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__1));
lean_inc(v_d_3401_);
v___x_3469_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3401_, v___x_3468_);
if (lean_obj_tag(v___x_3469_) == 0)
{
lean_object* v_a_3470_; 
lean_dec(v_a_3467_);
lean_dec(v_a_3463_);
v_a_3470_ = lean_ctor_get(v___x_3469_, 0);
lean_inc(v_a_3470_);
lean_dec_ref_known(v___x_3469_, 1);
v_a_3436_ = v_a_3470_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; 
v_a_3471_ = lean_ctor_get(v___x_3469_, 0);
lean_inc(v_a_3471_);
lean_dec_ref_known(v___x_3469_, 1);
v___x_3472_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__2));
lean_inc(v_d_3401_);
v___x_3473_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3401_, v___x_3472_);
if (lean_obj_tag(v___x_3473_) == 0)
{
lean_object* v_a_3474_; 
lean_dec(v_a_3471_);
lean_dec(v_a_3467_);
lean_dec(v_a_3463_);
v_a_3474_ = lean_ctor_get(v___x_3473_, 0);
lean_inc(v_a_3474_);
lean_dec_ref_known(v___x_3473_, 1);
v_a_3436_ = v_a_3474_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
v_a_3475_ = lean_ctor_get(v___x_3473_, 0);
lean_inc(v_a_3475_);
lean_dec_ref_known(v___x_3473_, 1);
v___x_3476_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__3));
lean_inc(v_d_3401_);
v___x_3477_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3401_, v___x_3476_);
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_a_3478_; 
lean_dec(v_a_3475_);
lean_dec(v_a_3471_);
lean_dec(v_a_3467_);
lean_dec(v_a_3463_);
v_a_3478_ = lean_ctor_get(v___x_3477_, 0);
lean_inc(v_a_3478_);
lean_dec_ref_known(v___x_3477_, 1);
v_a_3436_ = v_a_3478_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; 
v_a_3479_ = lean_ctor_get(v___x_3477_, 0);
lean_inc(v_a_3479_);
lean_dec_ref_known(v___x_3477_, 1);
v___x_3480_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__4));
lean_inc(v_d_3401_);
v___x_3481_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3401_, v___x_3480_);
if (lean_obj_tag(v___x_3481_) == 0)
{
lean_object* v_a_3482_; 
lean_dec(v_a_3479_);
lean_dec(v_a_3475_);
lean_dec(v_a_3471_);
lean_dec(v_a_3467_);
lean_dec(v_a_3463_);
v_a_3482_ = lean_ctor_get(v___x_3481_, 0);
lean_inc(v_a_3482_);
lean_dec_ref_known(v___x_3481_, 1);
v_a_3436_ = v_a_3482_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
v_a_3483_ = lean_ctor_get(v___x_3481_, 0);
lean_inc(v_a_3483_);
lean_dec_ref_known(v___x_3481_, 1);
v___x_3484_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__5));
lean_inc(v_d_3401_);
v___x_3485_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3401_, v___x_3484_);
if (lean_obj_tag(v___x_3485_) == 0)
{
lean_object* v_a_3486_; 
lean_dec(v_a_3483_);
lean_dec(v_a_3479_);
lean_dec(v_a_3475_);
lean_dec(v_a_3471_);
lean_dec(v_a_3467_);
lean_dec(v_a_3463_);
v_a_3486_ = lean_ctor_get(v___x_3485_, 0);
lean_inc(v_a_3486_);
lean_dec_ref_known(v___x_3485_, 1);
v_a_3436_ = v_a_3486_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v_a_3487_ = lean_ctor_get(v___x_3485_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___x_3485_, 1);
v___x_3488_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__6));
lean_inc(v_d_3401_);
v___x_3489_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3401_, v___x_3488_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; 
lean_dec(v_a_3487_);
lean_dec(v_a_3483_);
lean_dec(v_a_3479_);
lean_dec(v_a_3475_);
lean_dec(v_a_3471_);
lean_dec(v_a_3467_);
lean_dec(v_a_3463_);
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3489_, 1);
v_a_3436_ = v_a_3490_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3510_; 
v_a_3491_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3493_ = v___x_3489_;
v_isShared_3494_ = v_isSharedCheck_3510_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_dec(v___x_3489_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3510_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3495_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURLPatternInit___lam__0___closed__7));
lean_inc(v_d_3401_);
v___x_3496_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__3(v_d_3401_, v___x_3495_);
if (lean_obj_tag(v___x_3496_) == 0)
{
lean_object* v_a_3497_; 
lean_del_object(v___x_3493_);
lean_dec(v_a_3491_);
lean_dec(v_a_3487_);
lean_dec(v_a_3483_);
lean_dec(v_a_3479_);
lean_dec(v_a_3475_);
lean_dec(v_a_3471_);
lean_dec(v_a_3467_);
lean_dec(v_a_3463_);
v_a_3497_ = lean_ctor_get(v___x_3496_, 0);
lean_inc(v_a_3497_);
lean_dec_ref_known(v___x_3496_, 1);
v_a_3436_ = v_a_3497_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3509_; 
lean_dec(v_d_3401_);
v_a_3498_ = lean_ctor_get(v___x_3496_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3496_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3500_ = v___x_3496_;
v_isShared_3501_ = v_isSharedCheck_3509_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___x_3496_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3509_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3502_; lean_object* v___x_3504_; 
v___x_3502_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3502_, 0, v_a_3463_);
lean_ctor_set(v___x_3502_, 1, v_a_3467_);
lean_ctor_set(v___x_3502_, 2, v_a_3471_);
lean_ctor_set(v___x_3502_, 3, v_a_3475_);
lean_ctor_set(v___x_3502_, 4, v_a_3479_);
lean_ctor_set(v___x_3502_, 5, v_a_3483_);
lean_ctor_set(v___x_3502_, 6, v_a_3487_);
lean_ctor_set(v___x_3502_, 7, v_a_3491_);
lean_ctor_set(v___x_3502_, 8, v_a_3498_);
if (v_isShared_3501_ == 0)
{
lean_ctor_set(v___x_3500_, 0, v___x_3502_);
v___x_3504_ = v___x_3500_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v___x_3502_);
v___x_3504_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
lean_object* v___x_3506_; 
if (v_isShared_3494_ == 0)
{
lean_ctor_set_tag(v___x_3493_, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3504_);
v___x_3506_ = v___x_3493_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v___x_3504_);
v___x_3506_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
return v___x_3506_;
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
v___jp_3403_:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3404_ = lean_box(0);
v___x_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3404_);
return v___x_3405_;
}
v___jp_3406_:
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3409_ = lean_string_append(v___y_3407_, v___y_3408_);
lean_dec_ref(v___y_3408_);
v___x_3410_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3409_);
v___x_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
return v___x_3411_;
}
v___jp_3412_:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; uint8_t v___x_3426_; 
v___x_3415_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_3416_ = lean_string_append(v___x_3415_, v_context_3400_);
v___x_3417_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__1));
v___x_3418_ = lean_string_append(v___x_3416_, v___x_3417_);
v___x_3419_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___closed__0));
v___x_3420_ = lean_string_append(v___x_3418_, v___x_3419_);
v___x_3421_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__2));
v___x_3422_ = lean_string_append(v___x_3420_, v___x_3421_);
v___x_3423_ = lean_string_append(v___x_3422_, v_received_3414_);
lean_dec_ref(v_received_3414_);
v___x_3424_ = lean_string_utf8_byte_size(v___y_3413_);
v___x_3425_ = lean_unsigned_to_nat(0u);
v___x_3426_ = lean_nat_dec_eq(v___x_3424_, v___x_3425_);
if (v___x_3426_ == 0)
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3427_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__1));
v___x_3428_ = lean_string_append(v___x_3427_, v___y_3413_);
lean_dec_ref(v___y_3413_);
v___x_3429_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2___closed__2));
v___x_3430_ = lean_string_append(v___x_3428_, v___x_3429_);
v___y_3407_ = v___x_3423_;
v___y_3408_ = v___x_3430_;
goto v___jp_3406_;
}
else
{
lean_object* v___x_3431_; 
lean_dec_ref(v___y_3413_);
v___x_3431_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___y_3407_ = v___x_3423_;
v___y_3408_ = v___x_3431_;
goto v___jp_3406_;
}
}
v___jp_3432_:
{
lean_object* v___x_3434_; 
v___x_3434_ = l_Lasm_JS_Data_describe(v_d_3401_);
v___y_3413_ = v___y_3433_;
v_received_3414_ = v___x_3434_;
goto v___jp_3412_;
}
v___jp_3435_:
{
if (lean_obj_tag(v_d_3401_) == 9)
{
lean_object* v_value_3437_; lean_object* v_description_3438_; lean_object* v___x_3439_; uint8_t v___x_3440_; 
v_value_3437_ = lean_ctor_get(v_d_3401_, 0);
v_description_3438_ = lean_ctor_get(v_d_3401_, 1);
v___x_3439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3440_ = lean_string_dec_eq(v_description_3438_, v___x_3439_);
if (v___x_3440_ == 0)
{
v___y_3433_ = v_a_3436_;
goto v___jp_3432_;
}
else
{
lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3457_; 
lean_inc(v_value_3437_);
v_isSharedCheck_3457_ = !lean_is_exclusive(v_d_3401_);
if (v_isSharedCheck_3457_ == 0)
{
lean_object* v_unused_3458_; lean_object* v_unused_3459_; 
v_unused_3458_ = lean_ctor_get(v_d_3401_, 1);
lean_dec(v_unused_3458_);
v_unused_3459_ = lean_ctor_get(v_d_3401_, 0);
lean_dec(v_unused_3459_);
v___x_3442_ = v_d_3401_;
v_isShared_3443_ = v_isSharedCheck_3457_;
goto v_resetjp_3441_;
}
else
{
lean_dec(v_d_3401_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3457_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
uint32_t v___x_3444_; uint64_t v___x_3445_; lean_object* v___x_3447_; 
v___x_3444_ = 206;
v___x_3445_ = 0ULL;
lean_inc(v_value_3437_);
if (v_isShared_3443_ == 0)
{
lean_ctor_set(v___x_3442_, 1, v___x_3439_);
v___x_3447_ = v___x_3442_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v_value_3437_);
lean_ctor_set(v_reuseFailAlloc_3456_, 1, v___x_3439_);
v___x_3447_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
uint32_t v___x_3448_; lean_object* v___x_3449_; 
v___x_3448_ = lasm_js_value_handle(v_value_3437_);
lean_dec(v_value_3437_);
v___x_3449_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3444_, v___x_3445_, v___x_3447_, v___x_3448_);
lean_dec_ref(v___x_3447_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v_a_3450_; uint8_t v___x_3451_; 
v_a_3450_ = lean_ctor_get(v___x_3449_, 0);
lean_inc(v_a_3450_);
lean_dec_ref_known(v___x_3449_, 1);
v___x_3451_ = lean_string_validate_utf8(v_a_3450_);
if (v___x_3451_ == 0)
{
lean_object* v___x_3452_; lean_object* v___x_3453_; 
lean_dec(v_a_3450_);
v___x_3452_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__9);
v___x_3453_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3452_);
v___y_3413_ = v_a_3436_;
v_received_3414_ = v___x_3453_;
goto v___jp_3412_;
}
else
{
lean_object* v___x_3454_; 
v___x_3454_ = lean_string_from_utf8_unchecked(v_a_3450_);
v___y_3413_ = v_a_3436_;
v_received_3414_ = v___x_3454_;
goto v___jp_3412_;
}
}
else
{
lean_object* v___x_3455_; 
lean_dec_ref_known(v___x_3449_, 1);
v___x_3455_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__10));
v___y_3413_ = v_a_3436_;
v_received_3414_ = v___x_3455_;
goto v___jp_3412_;
}
}
}
}
}
else
{
v___y_3433_ = v_a_3436_;
goto v___jp_3432_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3511_, lean_object* v_d_3512_, lean_object* v_a_3513_){
_start:
{
lean_object* v_res_3514_; 
v_res_3514_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(v_context_3511_, v_d_3512_);
lean_dec_ref(v_context_3511_);
return v_res_3514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(lean_object* v_b_3515_, lean_object* v_args_3516_, uint8_t v_await_3517_){
_start:
{
uint64_t v___y_3520_; uint64_t v___y_3521_; uint64_t v___x_3564_; uint64_t v___y_3566_; 
v___x_3564_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__1);
if (v_await_3517_ == 0)
{
uint64_t v___x_3571_; 
v___x_3571_ = 0ULL;
v___y_3566_ = v___x_3571_;
goto v___jp_3565_;
}
else
{
uint64_t v___x_3572_; 
v___x_3572_ = 2ULL;
v___y_3566_ = v___x_3572_;
goto v___jp_3565_;
}
v___jp_3519_:
{
uint64_t v_flags_3522_; uint32_t v___x_3523_; lean_object* v___x_3524_; uint32_t v___x_3525_; lean_object* v___x_3526_; 
v_flags_3522_ = lean_uint64_lor(v___y_3520_, v___y_3521_);
v___x_3523_ = 214;
v___x_3524_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3515_, v_args_3516_);
v___x_3525_ = 0;
v___x_3526_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3523_, v_flags_3522_, v___x_3524_, v___x_3525_);
lean_dec(v___x_3524_);
if (lean_obj_tag(v___x_3526_) == 0)
{
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v_a_3527_; lean_object* v___x_3528_; 
v_a_3527_ = lean_ctor_get(v___x_3526_, 0);
lean_inc(v_a_3527_);
lean_dec_ref_known(v___x_3526_, 1);
v___x_3528_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3527_);
lean_dec(v_a_3527_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v___x_3530_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3515_);
v___x_3531_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1(v___x_3530_, v_a_3529_);
lean_dec_ref(v___x_3530_);
return v___x_3531_;
}
else
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3539_; 
v_a_3532_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3534_ = v___x_3528_;
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3528_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3537_; 
if (v_isShared_3535_ == 0)
{
v___x_3537_ = v___x_3534_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3532_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
}
else
{
lean_object* v_a_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3547_; 
v_a_3540_ = lean_ctor_get(v___x_3526_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3542_ = v___x_3526_;
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_a_3540_);
lean_dec(v___x_3526_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3545_; 
if (v_isShared_3543_ == 0)
{
lean_ctor_set_tag(v___x_3542_, 1);
v___x_3545_ = v___x_3542_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_a_3540_);
v___x_3545_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
return v___x_3545_;
}
}
}
}
else
{
lean_object* v_a_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3563_; 
v_a_3548_ = lean_ctor_get(v___x_3526_, 0);
v_isSharedCheck_3563_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3550_ = v___x_3526_;
v_isShared_3551_ = v_isSharedCheck_3563_;
goto v_resetjp_3549_;
}
else
{
lean_inc(v_a_3548_);
lean_dec(v___x_3526_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3563_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3561_; 
v___x_3552_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0_spec__0___closed__0));
v___x_3553_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3515_);
v___x_3554_ = lean_string_append(v___x_3552_, v___x_3553_);
lean_dec_ref(v___x_3553_);
v___x_3555_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_new_spec__0___closed__0));
v___x_3556_ = lean_string_append(v___x_3554_, v___x_3555_);
v___x_3557_ = lean_io_error_to_string(v_a_3548_);
v___x_3558_ = lean_string_append(v___x_3556_, v___x_3557_);
lean_dec_ref(v___x_3557_);
v___x_3559_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3558_);
if (v_isShared_3551_ == 0)
{
lean_ctor_set(v___x_3550_, 0, v___x_3559_);
v___x_3561_ = v___x_3550_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v___x_3559_);
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
v___jp_3565_:
{
uint8_t v_construct_3567_; uint64_t v___x_3568_; 
v_construct_3567_ = lean_ctor_get_uint8(v_b_3515_, sizeof(void*)*4);
v___x_3568_ = lean_uint64_lor(v___x_3564_, v___y_3566_);
if (v_construct_3567_ == 0)
{
uint64_t v___x_3569_; 
v___x_3569_ = 0ULL;
v___y_3520_ = v___x_3568_;
v___y_3521_ = v___x_3569_;
goto v___jp_3519_;
}
else
{
uint64_t v___x_3570_; 
v___x_3570_ = 4ULL;
v___y_3520_ = v___x_3568_;
v___y_3521_ = v___x_3570_;
goto v___jp_3519_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0___boxed(lean_object* v_b_3573_, lean_object* v_args_3574_, lean_object* v_await_3575_, lean_object* v_a_3576_){
_start:
{
uint8_t v_await_boxed_3577_; lean_object* v_res_3578_; 
v_await_boxed_3577_ = lean_unbox(v_await_3575_);
v_res_3578_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v_b_3573_, v_args_3574_, v_await_boxed_3577_);
lean_dec_ref(v_b_3573_);
return v_res_3578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(lean_object* v_v_3587_){
_start:
{
uint8_t v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3589_ = 0;
v___x_3590_ = lean_unsigned_to_nat(1u);
v___x_3591_ = ((lean_object*)(l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___closed__2));
v___x_3592_ = ((lean_object*)(l_Lasm_JS_Web_instToJSURL___lam__0___closed__0));
v___x_3593_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3593_, 0, v_v_3587_);
lean_ctor_set(v___x_3593_, 1, v___x_3592_);
v___x_3594_ = lean_mk_empty_array_with_capacity(v___x_3590_);
v___x_3595_ = lean_array_push(v___x_3594_, v___x_3593_);
v___x_3596_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0(v___x_3591_, v___x_3595_, v___x_3589_);
return v___x_3596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0___boxed(lean_object* v_v_3597_, lean_object* v_a_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_v_3597_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec(lean_object* v_self_3601_, lean_object* v_input_3602_, lean_object* v_baseURL_3603_){
_start:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; 
v___x_3605_ = ((lean_object*)(l_Lasm_JS_Web_URLPattern_exec___closed__0));
v___x_3606_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLPattern_newWithOptions_spec__0(v_input_3602_);
v___x_3607_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_baseURL_3603_);
v___x_3608_ = lean_unsigned_to_nat(2u);
v___x_3609_ = lean_mk_empty_array_with_capacity(v___x_3608_);
v___x_3610_ = lean_array_push(v___x_3609_, v___x_3606_);
v___x_3611_ = lean_array_push(v___x_3610_, v___x_3607_);
v___x_3612_ = l_Lasm_JS_Web_Support_args(v___x_3611_);
v___x_3613_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3601_, v___x_3605_, v___x_3612_);
if (lean_obj_tag(v___x_3613_) == 0)
{
lean_object* v_a_3614_; lean_object* v___x_3615_; 
v_a_3614_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_a_3614_);
lean_dec_ref_known(v___x_3613_, 1);
v___x_3615_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0(v_a_3614_);
return v___x_3615_;
}
else
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3623_; 
v_a_3616_ = lean_ctor_get(v___x_3613_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3618_ = v___x_3613_;
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3613_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_a_3616_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_URLPattern_exec___boxed(lean_object* v_self_3624_, lean_object* v_input_3625_, lean_object* v_baseURL_3626_, lean_object* v_a_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = l_Lasm_JS_Web_URLPattern_exec(v_self_3624_, v_input_3625_, v_baseURL_3626_);
return v_res_3628_;
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
