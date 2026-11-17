// Lean compiler output
// Module: Lasm.JS.Node.Fs
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.FileAPI public import Lasm.JS.Web.Types.Streams public import Lasm.JS.Web.Types.Url public import Lasm.JS.Web.Webidl public import Lasm.JS.Web.WebAnimationsAndWebAnimations2 public import Lasm.JS.Node.Stream public import Lasm.JS.Node.Buffer public import Lasm.JS.Node.Net public import Lasm.JS.Node.Process public import Lasm.JS.Node.Readline
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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_net_Socket_ConnectionAttemptListener_ofFn_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSInt;
extern lean_object* l_Lasm_JS_instFromJSByteArray;
lean_object* l_Lasm_JS_Web_instToJSJSFunction___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSByteArray___lam__0(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandle___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFileHandle = (const lean_object*)&l_Lasm_JS_Node_instToJSFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandle___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandle;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDir_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDir = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDir_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsDir;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDirent_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDirent = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDirent_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsDirent;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsFSWatcher_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsFSWatcher = (const lean_object*)&l_Lasm_JS_Node_instToJSFsFSWatcher_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsFSWatcher;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsStatWatcher_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsStatWatcher = (const lean_object*)&l_Lasm_JS_Node_instToJSFsStatWatcher_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsStatWatcher;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsReadStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsReadStream = (const lean_object*)&l_Lasm_JS_Node_instToJSFsReadStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsReadStream;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadStreamStreamReadable___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadStreamStreamReadable___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsReadStreamStreamReadable_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsReadStreamStreamReadable___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsReadStreamStreamReadable = (const lean_object*)&l_Lasm_JS_Node_instCoeFsReadStreamStreamReadable_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsStats_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsStats = (const lean_object*)&l_Lasm_JS_Node_instToJSFsStats_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsStats;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsStatFs_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsStatFs = (const lean_object*)&l_Lasm_JS_Node_instToJSFsStatFs_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsStatFs;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsUtf8Stream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsUtf8Stream = (const lean_object*)&l_Lasm_JS_Node_instToJSFsUtf8Stream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsUtf8Stream;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsWriteStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsWriteStream = (const lean_object*)&l_Lasm_JS_Node_instToJSFsWriteStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsWriteStream;
static const lean_closure_object l_Lasm_JS_Node_instToJSFileHandleCloseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFileHandleCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFileHandleCloseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleCloseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrObject = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrObject = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrObject = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleAppendFileOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleAppendFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFileHandleAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandleAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFileHandleAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFileHandleAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleAppendFileOptionsFileHandleAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFileHandleAppendFileOptionsFileHandleAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFileHandleAppendFileOptionsFileHandleAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFileHandleAppendFileOptionsFileHandleAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFileHandleAppendFileOptionsFileHandleAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFileHandleAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFileHandleAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFileHandleAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFileHandleAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFileHandleAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleCreateReadStreamOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleCreateReadStreamOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleCreateWriteStreamOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleCreateWriteStreamOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrObject___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrObject___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSJSFunctionOrObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSJSFunctionOrObject___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrObject = (const lean_object*)&l_Lasm_JS_Node_instToJSJSFunctionOrObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrObject = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandlePullOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandlePullOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandlePullSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandlePullSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_bigint_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_bigint_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSLongLongOrBigint_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSLongLongOrBigint = (const lean_object*)&l_Lasm_JS_Node_instToJSLongLongOrBigint_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleReadResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleReadResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleReadResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadOptions2___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadOptions2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadableWebStreamOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadableWebStreamOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFileHandleReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandleReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFileHandleReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFileHandleReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleReadFileOptionsFileHandleReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFileHandleReadFileOptionsFileHandleReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFileHandleReadFileOptionsFileHandleReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFileHandleReadFileOptionsFileHandleReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFileHandleReadFileOptionsFileHandleReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFileHandleReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFileHandleReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFileHandleReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFileHandleReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFileHandleReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadLinesOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadLinesOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleStatOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleStatOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrObject = (const lean_object*)&l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrObject = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriteOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriteOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriteFileOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriteFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFileHandleWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandleWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFileHandleWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFileHandleWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleWriteFileOptionsFileHandleWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFileHandleWriteFileOptionsFileHandleWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFileHandleWriteFileOptionsFileHandleWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFileHandleWriteFileOptionsFileHandleWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFileHandleWriteFileOptionsFileHandleWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFileHandleWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFileHandleWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFileHandleWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFileHandleWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFileHandleWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriterOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriterOptions;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsFSWatcherChangeListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsFSWatcherChangeListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsFSWatcherChangeListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsFSWatcherChangeListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsFSWatcherCloseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsFSWatcherCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsFSWatcherCloseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsFSWatcherCloseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsFSWatcherErrorListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsFSWatcherErrorListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsFSWatcherErrorListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsFSWatcherErrorListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsReadStreamCloseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsReadStreamCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsReadStreamCloseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsReadStreamCloseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsReadStreamOpenListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsReadStreamOpenListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsReadStreamOpenListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsReadStreamOpenListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsReadStreamReadyListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsReadStreamReadyListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsReadStreamReadyListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsReadStreamReadyListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_bigint_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_bigint_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrBigint___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDoubleOrBigint_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDoubleOrBigint___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDoubleOrBigint = (const lean_object*)&l_Lasm_JS_Node_instToJSDoubleOrBigint_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrBigint___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrBigint___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDoubleOrBigint_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDoubleOrBigint___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrBigint = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDoubleOrBigint_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDoubleOrBigint___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntDoubleOrBigint_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntDoubleOrBigint___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntDoubleOrBigint = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDoubleOrBigint_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDoubleOrBigint___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDoubleOrBigint;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsUtf8StreamCloseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsUtf8StreamCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsUtf8StreamCloseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsUtf8StreamCloseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsUtf8StreamDrainListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsUtf8StreamDrainListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsUtf8StreamDrainListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsUtf8StreamDrainListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsUtf8StreamDropListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsUtf8StreamDropListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsUtf8StreamDropListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsUtf8StreamDropListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsUtf8StreamErrorListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsUtf8StreamErrorListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsUtf8StreamErrorListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsUtf8StreamErrorListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsUtf8StreamFinishListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsUtf8StreamFinishListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsUtf8StreamFinishListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsUtf8StreamFinishListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsUtf8StreamReadyListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsUtf8StreamReadyListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsUtf8StreamReadyListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsUtf8StreamReadyListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsUtf8StreamWriteListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsUtf8StreamWriteListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsUtf8StreamWriteListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsUtf8StreamWriteListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURL = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURL = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURL = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURL = (const lean_object*)&l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDoubleOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDoubleOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSDoubleOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDoubleOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDoubleOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDoubleOrDOMString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDoubleOrDOMString;
static const lean_closure_object l_Lasm_JS_Node_instToJSFsWriteStreamCloseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsWriteStreamCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsWriteStreamCloseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsWriteStreamCloseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsWriteStreamOpenListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsWriteStreamOpenListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsWriteStreamOpenListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsWriteStreamOpenListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsWriteStreamReadyListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsWriteStreamReadyListener = (const lean_object*)&l_Lasm_JS_Node_instToJSFsWriteStreamReadyListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsWriteStreamReadyListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_fileHandle_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_fileHandle_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrFileHandle = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrFileHandle = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrFileHandle = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrFileHandle = (const lean_object*)&l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFileHandleDOMStringOrUint8ArrayOrURLOrFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFileHandleDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFileHandleDOMStringOrUint8ArrayOrURLOrFileHandle = (const lean_object*)&l_Lasm_JS_Node_instCoeFileHandleDOMStringOrUint8ArrayOrURLOrFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesAppendFileOptionsFsPromisesAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesAppendFileOptionsFsPromisesAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesAppendFileOptionsFsPromisesAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesAppendFileOptionsFsPromisesAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesAppendFileOptionsFsPromisesAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsPromisesAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsPromisesAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsPromisesAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURL = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURL = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeURLDOMStringOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeURLDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURL = (const lean_object*)&l_Lasm_JS_Node_instCoeURLDOMStringOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesCpOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesCpOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrSequenceOfDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrSequenceOfDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayStringJSFunctionOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayStringJSFunctionOrSequenceOfDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayStringJSFunctionOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayStringJSFunctionOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayStringJSFunctionOrSequenceOfDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesGlobOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesGlobOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesLstatOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesLstatOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdirOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_mkdirOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_mkdirOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdirOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesMkdirOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesMkdirOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdirOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesMkdirOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesMkdirOptionsFsPromisesMkdirOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesMkdirOptionsFsPromisesMkdirOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesMkdirOptionsFsPromisesMkdirOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesMkdirOptionsFsPromisesMkdirOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesMkdirOptionsFsPromisesMkdirOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntFsPromisesMkdirOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntFsPromisesMkdirOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntFsPromisesMkdirOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntFsPromisesMkdirOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntFsPromisesMkdirOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_mkdtempOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_mkdtempOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesMkdtempOptionsFsPromisesDOMStringOrMkdtempOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesMkdtempOptionsFsPromisesDOMStringOrMkdtempOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesMkdtempOptionsFsPromisesDOMStringOrMkdtempOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesMkdtempOptionsFsPromisesDOMStringOrMkdtempOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesMkdtempOptionsFsPromisesDOMStringOrMkdtempOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdtempDisposableOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_mkdtempDisposableOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_mkdtempDisposableOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempDisposableOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempDisposableOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempDisposableOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempDisposableOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempDisposableOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempDisposableOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempDisposableOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempDisposableOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempDisposableOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempDisposableOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesMkdtempDisposableOptionsFsPromisesDOMStringOrMkdtempDisposableOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesMkdtempDisposableOptionsFsPromisesDOMStringOrMkdtempDisposableOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesMkdtempDisposableOptionsFsPromisesDOMStringOrMkdtempDisposableOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesMkdtempDisposableOptionsFsPromisesDOMStringOrMkdtempDisposableOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesMkdtempDisposableOptionsFsPromisesDOMStringOrMkdtempDisposableOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesOpendirOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesOpendirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesReaddirOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesReaddirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_readdirOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_readdirOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReaddirOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReaddirOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReaddirOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReaddirOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReaddirOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReaddirOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReaddirOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReaddirOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReaddirOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReaddirOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesReaddirOptionsFsPromisesDOMStringOrReaddirOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesReaddirOptionsFsPromisesDOMStringOrReaddirOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesReaddirOptionsFsPromisesDOMStringOrReaddirOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesReaddirOptionsFsPromisesDOMStringOrReaddirOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesReaddirOptionsFsPromisesDOMStringOrReaddirOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_dirent_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_dirent_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsDOMStringOrUint8ArrayOrDirent___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsDOMStringOrUint8ArrayOrDirent;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesReadFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesReadFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesReadFileOptionsFsPromisesReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesReadFileOptionsFsPromisesReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesReadFileOptionsFsPromisesReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesReadFileOptionsFsPromisesReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesReadFileOptionsFsPromisesReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsPromisesReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsPromisesReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsPromisesReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesReadlinkOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_readlinkOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_readlinkOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReadlinkOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReadlinkOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReadlinkOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReadlinkOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReadlinkOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReadlinkOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReadlinkOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReadlinkOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReadlinkOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReadlinkOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesReadlinkOptionsFsPromisesDOMStringOrReadlinkOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesReadlinkOptionsFsPromisesDOMStringOrReadlinkOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesReadlinkOptionsFsPromisesDOMStringOrReadlinkOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesReadlinkOptionsFsPromisesDOMStringOrReadlinkOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesReadlinkOptionsFsPromisesDOMStringOrReadlinkOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesRealpathOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_realpathOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_realpathOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrRealpathOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrRealpathOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrRealpathOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrRealpathOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrRealpathOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrRealpathOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrRealpathOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrRealpathOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrRealpathOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrRealpathOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesRealpathOptionsFsPromisesDOMStringOrRealpathOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesRealpathOptionsFsPromisesDOMStringOrRealpathOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesRealpathOptionsFsPromisesDOMStringOrRealpathOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesRealpathOptionsFsPromisesDOMStringOrRealpathOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesRealpathOptionsFsPromisesDOMStringOrRealpathOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesRmdirOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesRmdirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesRmOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesRmOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesStatOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesStatOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesStatfsOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrObjectOrJSFunctionOrSequenceOfAny_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrObjectOrJSFunctionOrSequenceOfAny = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrObjectOrJSFunctionOrSequenceOfAny_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionDOMStringOrObjectOrJSFunctionOrSequenceOfAny_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionDOMStringOrObjectOrJSFunctionOrSequenceOfAny = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionDOMStringOrObjectOrJSFunctionOrSequenceOfAny_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayDataDOMStringOrObjectOrJSFunctionOrSequenceOfAny_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayDataDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayDataDOMStringOrObjectOrJSFunctionOrSequenceOfAny = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayDataDOMStringOrObjectOrJSFunctionOrSequenceOfAny_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesWatchOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesWatchOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_watchOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_watchOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrWatchOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrWatchOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrWatchOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrWatchOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrWatchOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrWatchOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrWatchOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrWatchOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrWatchOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrWatchOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesWatchOptionsFsPromisesDOMStringOrWatchOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesWatchOptionsFsPromisesDOMStringOrWatchOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesWatchOptionsFsPromisesDOMStringOrWatchOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesWatchOptionsFsPromisesDOMStringOrWatchOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesWatchOptionsFsPromisesDOMStringOrWatchOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesWriteFileOptionsFsPromisesWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsPromisesWriteFileOptionsFsPromisesWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsPromisesWriteFileOptionsFsPromisesWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsPromisesWriteFileOptionsFsPromisesWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFsPromisesWriteFileOptionsFsPromisesWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsPromisesWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsPromisesWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsPromisesWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrDouble = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrUint8ArrayOrURLOrDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrUint8ArrayOrURLOrDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDOMStringOrUint8ArrayOrURLOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDOMStringOrUint8ArrayOrURLOrDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrUint8ArrayOrURLOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDOMStringOrUint8ArrayOrURLOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFsAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsAppendFileOptionsFsAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsAppendFileOptionsFsAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsAppendFileOptionsFsAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsAppendFileOptionsFsAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFsAppendFileOptionsFsAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCpOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCpOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_fileHandle_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_fileHandle_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrFileHandle___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSLongLongOrFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSLongLongOrFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSLongLongOrFileHandle = (const lean_object*)&l_Lasm_JS_Node_instToJSLongLongOrFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrFileHandle___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntLongLongOrFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntLongLongOrFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrFileHandle = (const lean_object*)&l_Lasm_JS_Node_instCoeIntLongLongOrFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleLongLongOrFileHandle___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFileHandleLongLongOrFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFileHandleLongLongOrFileHandle___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFileHandleLongLongOrFileHandle = (const lean_object*)&l_Lasm_JS_Node_instCoeFileHandleLongLongOrFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCreateReadStreamOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCreateReadStreamOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_createReadStreamOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_createReadStreamOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrCreateReadStreamOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrCreateReadStreamOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrCreateReadStreamOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrCreateReadStreamOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrCreateReadStreamOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateReadStreamOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateReadStreamOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateReadStreamOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateReadStreamOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateReadStreamOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsCreateReadStreamOptionsFsDOMStringOrCreateReadStreamOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsCreateReadStreamOptionsFsDOMStringOrCreateReadStreamOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsCreateReadStreamOptionsFsDOMStringOrCreateReadStreamOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsCreateReadStreamOptionsFsDOMStringOrCreateReadStreamOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsCreateReadStreamOptionsFsDOMStringOrCreateReadStreamOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCreateWriteStreamOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCreateWriteStreamOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_createWriteStreamOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_createWriteStreamOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrCreateWriteStreamOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrCreateWriteStreamOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrCreateWriteStreamOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrCreateWriteStreamOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrCreateWriteStreamOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateWriteStreamOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateWriteStreamOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateWriteStreamOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateWriteStreamOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateWriteStreamOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsCreateWriteStreamOptionsFsDOMStringOrCreateWriteStreamOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsCreateWriteStreamOptionsFsDOMStringOrCreateWriteStreamOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsCreateWriteStreamOptionsFsDOMStringOrCreateWriteStreamOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsCreateWriteStreamOptionsFsDOMStringOrCreateWriteStreamOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsCreateWriteStreamOptionsFsDOMStringOrCreateWriteStreamOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsFstatOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsGlobOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsGlobOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsLstatOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_mkdirOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_mkdirOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsMkdirOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsMkdirOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsMkdirOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSFsMkdirOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdirOptionsFsMkdirOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsMkdirOptionsFsMkdirOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsMkdirOptionsFsMkdirOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsMkdirOptionsFsMkdirOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeFsMkdirOptionsFsMkdirOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntFsMkdirOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntFsMkdirOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntFsMkdirOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntFsMkdirOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntFsMkdirOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdtempOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_mkdtempOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_mkdtempOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdtempOptionsFsDOMStringOrMkdtempOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsMkdtempOptionsFsDOMStringOrMkdtempOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsMkdtempOptionsFsDOMStringOrMkdtempOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsMkdtempOptionsFsDOMStringOrMkdtempOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsMkdtempOptionsFsDOMStringOrMkdtempOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpenAsBlobOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpenAsBlobOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpendirOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpendirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadOptions2___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadOptions2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReaddirOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReaddirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_readdirOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_readdirOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReaddirOptionsFsDOMStringOrReaddirOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsReaddirOptionsFsDOMStringOrReaddirOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsReaddirOptionsFsDOMStringOrReaddirOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsReaddirOptionsFsDOMStringOrReaddirOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsReaddirOptionsFsDOMStringOrReaddirOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrURLOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrURLOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrURLOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrURLOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFsReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadFileOptionsFsReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsReadFileOptionsFsReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsReadFileOptionsFsReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsReadFileOptionsFsReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFsReadFileOptionsFsReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadlinkOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_readlinkOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_readlinkOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadlinkOptionsFsDOMStringOrReadlinkOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsReadlinkOptionsFsDOMStringOrReadlinkOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsReadlinkOptionsFsDOMStringOrReadlinkOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsReadlinkOptionsFsDOMStringOrReadlinkOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsReadlinkOptionsFsDOMStringOrReadlinkOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRealpathOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_realpathOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_realpathOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsRealpathOptionsFsDOMStringOrRealpathOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsRealpathOptionsFsDOMStringOrRealpathOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsRealpathOptionsFsDOMStringOrRealpathOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsRealpathOptionsFsDOMStringOrRealpathOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsRealpathOptionsFsDOMStringOrRealpathOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmdirOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmdirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsStatOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsStatOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsStatfsOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWatchOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWatchOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_watchOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_watchOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrWatchOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrWatchOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrWatchOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrWatchOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrWatchOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrWatchOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrWatchOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrWatchOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrWatchOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrWatchOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsWatchOptionsFsDOMStringOrWatchOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsWatchOptionsFsDOMStringOrWatchOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsWatchOptionsFsDOMStringOrWatchOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsWatchOptionsFsDOMStringOrWatchOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsWatchOptionsFsDOMStringOrWatchOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWatchFileOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWatchFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFsWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsWriteFileOptionsFsWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsWriteFileOptionsFsWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsWriteFileOptionsFsWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsWriteFileOptionsFsWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFsWriteFileOptionsFsWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_appendFileSyncOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_appendFileSyncOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileSyncOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsAppendFileSyncOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsAppendFileSyncOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsAppendFileSyncOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFsAppendFileSyncOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsAppendFileSyncOptionsFsAppendFileSyncOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsAppendFileSyncOptionsFsAppendFileSyncOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsAppendFileSyncOptionsFsAppendFileSyncOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsAppendFileSyncOptionsFsAppendFileSyncOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFsAppendFileSyncOptionsFsAppendFileSyncOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsAppendFileSyncOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsAppendFileSyncOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsAppendFileSyncOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsAppendFileSyncOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsAppendFileSyncOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCpSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCpSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsFstatSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsGlobSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsGlobSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsLstatSyncOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsLstatSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirSyncOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_mkdirSyncOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_mkdirSyncOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirSyncOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsMkdirSyncOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsMkdirSyncOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsMkdirSyncOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSFsMkdirSyncOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdirSyncOptionsFsMkdirSyncOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsMkdirSyncOptionsFsMkdirSyncOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsMkdirSyncOptionsFsMkdirSyncOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsMkdirSyncOptionsFsMkdirSyncOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeFsMkdirSyncOptionsFsMkdirSyncOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntFsMkdirSyncOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntFsMkdirSyncOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntFsMkdirSyncOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntFsMkdirSyncOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntFsMkdirSyncOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdtempSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_mkdtempSyncOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_mkdtempSyncOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdtempSyncOptionsFsDOMStringOrMkdtempSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsMkdtempSyncOptionsFsDOMStringOrMkdtempSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsMkdtempSyncOptionsFsDOMStringOrMkdtempSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsMkdtempSyncOptionsFsDOMStringOrMkdtempSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsMkdtempSyncOptionsFsDOMStringOrMkdtempSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdtempDisposableSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_mkdtempDisposableSyncOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_mkdtempDisposableSyncOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempDisposableSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempDisposableSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempDisposableSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempDisposableSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempDisposableSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempDisposableSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempDisposableSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempDisposableSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempDisposableSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempDisposableSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdtempDisposableSyncOptionsFsDOMStringOrMkdtempDisposableSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsMkdtempDisposableSyncOptionsFsDOMStringOrMkdtempDisposableSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsMkdtempDisposableSyncOptionsFsDOMStringOrMkdtempDisposableSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsMkdtempDisposableSyncOptionsFsDOMStringOrMkdtempDisposableSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsMkdtempDisposableSyncOptionsFsDOMStringOrMkdtempDisposableSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpendirSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpendirSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReaddirSyncOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReaddirSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_readdirSyncOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_readdirSyncOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReaddirSyncOptionsFsDOMStringOrReaddirSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsReaddirSyncOptionsFsDOMStringOrReaddirSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsReaddirSyncOptionsFsDOMStringOrReaddirSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsReaddirSyncOptionsFsDOMStringOrReaddirSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsReaddirSyncOptionsFsDOMStringOrReaddirSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileSyncOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_readFileSyncOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_readFileSyncOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileSyncOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsReadFileSyncOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsReadFileSyncOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsReadFileSyncOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFsReadFileSyncOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadFileSyncOptionsFsReadFileSyncOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsReadFileSyncOptionsFsReadFileSyncOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsReadFileSyncOptionsFsReadFileSyncOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsReadFileSyncOptionsFsReadFileSyncOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFsReadFileSyncOptionsFsReadFileSyncOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsReadFileSyncOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsReadFileSyncOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsReadFileSyncOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsReadFileSyncOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsReadFileSyncOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadlinkSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_readlinkSyncOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_readlinkSyncOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadlinkSyncOptionsFsDOMStringOrReadlinkSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsReadlinkSyncOptionsFsDOMStringOrReadlinkSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsReadlinkSyncOptionsFsDOMStringOrReadlinkSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsReadlinkSyncOptionsFsDOMStringOrReadlinkSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsReadlinkSyncOptionsFsDOMStringOrReadlinkSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadSyncOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRealpathSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_realpathSyncOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_realpathSyncOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsRealpathSyncOptionsFsDOMStringOrRealpathSyncOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsRealpathSyncOptionsFsDOMStringOrRealpathSyncOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsRealpathSyncOptionsFsDOMStringOrRealpathSyncOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsRealpathSyncOptionsFsDOMStringOrRealpathSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsRealpathSyncOptionsFsDOMStringOrRealpathSyncOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmdirSyncOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmdirSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmSyncOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsStatSyncOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsStatSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsStatfsSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_writeFileSyncOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_writeFileSyncOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileSyncOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsWriteFileSyncOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsWriteFileSyncOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsWriteFileSyncOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSFsWriteFileSyncOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsWriteFileSyncOptionsFsWriteFileSyncOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsWriteFileSyncOptionsFsWriteFileSyncOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsWriteFileSyncOptionsFsWriteFileSyncOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsWriteFileSyncOptionsFsWriteFileSyncOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFsWriteFileSyncOptionsFsWriteFileSyncOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsWriteFileSyncOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsWriteFileSyncOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsWriteFileSyncOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsWriteFileSyncOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsWriteFileSyncOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteSyncOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpenAsBlobSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRealpathNativeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_nativeOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_nativeOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRealpathDOMStringOrNativeOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsRealpathDOMStringOrNativeOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsRealpathDOMStringOrNativeOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsRealpathDOMStringOrNativeOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsRealpathDOMStringOrNativeOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsRealpathDOMStringOrNativeOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsRealpathDOMStringOrNativeOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsRealpathDOMStringOrNativeOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsRealpathDOMStringOrNativeOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsRealpathDOMStringOrNativeOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsRealpathNativeOptionsFsRealpathDOMStringOrNativeOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsRealpathNativeOptionsFsRealpathDOMStringOrNativeOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsRealpathNativeOptionsFsRealpathDOMStringOrNativeOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsRealpathNativeOptionsFsRealpathDOMStringOrNativeOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsRealpathNativeOptionsFsRealpathDOMStringOrNativeOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRealpathSyncNativeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_nativeOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_nativeOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRealpathSyncDOMStringOrNativeOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSFsRealpathSyncDOMStringOrNativeOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSFsRealpathSyncDOMStringOrNativeOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFsRealpathSyncDOMStringOrNativeOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSFsRealpathSyncDOMStringOrNativeOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsRealpathSyncDOMStringOrNativeOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringFsRealpathSyncDOMStringOrNativeOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringFsRealpathSyncDOMStringOrNativeOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringFsRealpathSyncDOMStringOrNativeOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringFsRealpathSyncDOMStringOrNativeOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsRealpathSyncNativeOptionsFsRealpathSyncDOMStringOrNativeOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFsRealpathSyncNativeOptionsFsRealpathSyncDOMStringOrNativeOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFsRealpathSyncNativeOptionsFsRealpathSyncDOMStringOrNativeOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFsRealpathSyncNativeOptionsFsRealpathSyncDOMStringOrNativeOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeFsRealpathSyncNativeOptionsFsRealpathSyncDOMStringOrNativeOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandle___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_mk_string_unchecked("", 0, 0);
v___x_3_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3_, 0, v_x_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandle___lam__0(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; 
v_value_6_ = lean_ctor_get(v_x_5_, 0);
lean_inc(v_value_6_);
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_value_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_mk_string_unchecked("", 0, 0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSFileHandle___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFileHandle(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.FileHandle", 23, 23);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsDir(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Dir", 19, 19);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsDirent(void){
_start:
{
lean_object* v___f_22_; lean_object* v___x_23_; uint8_t v___x_24_; lean_object* v___x_25_; 
v___f_22_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_23_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Dirent", 22, 22);
v___x_24_ = 0;
v___x_25_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_25_, 0, v___f_22_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set_uint8(v___x_25_, sizeof(void*)*2, v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsFSWatcher(void){
_start:
{
lean_object* v___f_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_28_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.FSWatcher", 25, 25);
v___x_29_ = 0;
v___x_30_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_30_, 0, v___f_27_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set_uint8(v___x_30_, sizeof(void*)*2, v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsStatWatcher(void){
_start:
{
lean_object* v___f_32_; lean_object* v___x_33_; uint8_t v___x_34_; lean_object* v___x_35_; 
v___f_32_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_33_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.StatWatcher", 27, 27);
v___x_34_ = 0;
v___x_35_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_35_, 0, v___f_32_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
lean_ctor_set_uint8(v___x_35_, sizeof(void*)*2, v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsReadStream(void){
_start:
{
lean_object* v___f_37_; lean_object* v___x_38_; uint8_t v___x_39_; lean_object* v___x_40_; 
v___f_37_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_38_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.ReadStream", 26, 26);
v___x_39_ = 0;
v___x_40_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_40_, 0, v___f_37_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
lean_ctor_set_uint8(v___x_40_, sizeof(void*)*2, v___x_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadStreamStreamReadable___lam__0(lean_object* v_self_41_){
_start:
{
lean_inc(v_self_41_);
return v_self_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadStreamStreamReadable___lam__0___boxed(lean_object* v_self_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lasm_JS_Node_instCoeFsReadStreamStreamReadable___lam__0(v_self_42_);
lean_dec(v_self_42_);
return v_res_43_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsStats(void){
_start:
{
lean_object* v___f_46_; lean_object* v___x_47_; uint8_t v___x_48_; lean_object* v___x_49_; 
v___f_46_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_47_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Stats", 21, 21);
v___x_48_ = 0;
v___x_49_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_49_, 0, v___f_46_);
lean_ctor_set(v___x_49_, 1, v___x_47_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*2, v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsStatFs(void){
_start:
{
lean_object* v___f_51_; lean_object* v___x_52_; uint8_t v___x_53_; lean_object* v___x_54_; 
v___f_51_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_52_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.StatFs", 22, 22);
v___x_53_ = 0;
v___x_54_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_54_, 0, v___f_51_);
lean_ctor_set(v___x_54_, 1, v___x_52_);
lean_ctor_set_uint8(v___x_54_, sizeof(void*)*2, v___x_53_);
return v___x_54_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsUtf8Stream(void){
_start:
{
lean_object* v___f_56_; lean_object* v___x_57_; uint8_t v___x_58_; lean_object* v___x_59_; 
v___f_56_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_57_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Utf8Stream", 26, 26);
v___x_58_ = 0;
v___x_59_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_59_, 0, v___f_56_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
lean_ctor_set_uint8(v___x_59_, sizeof(void*)*2, v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsWriteStream(void){
_start:
{
lean_object* v___f_61_; lean_object* v___x_62_; uint8_t v___x_63_; lean_object* v___x_64_; 
v___f_61_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_62_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.WriteStream", 27, 27);
v___x_63_ = 0;
v___x_64_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_64_, 0, v___f_61_);
lean_ctor_set(v___x_64_, 1, v___x_62_);
lean_ctor_set_uint8(v___x_64_, sizeof(void*)*2, v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFileHandleCloseListener(void){
_start:
{
lean_object* v___f_66_; lean_object* v___x_67_; uint8_t v___x_68_; lean_object* v___x_69_; 
v___f_66_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_67_ = lean_mk_string_unchecked("Lasm.JS.Node.FileHandle.CloseListener", 37, 37);
v___x_68_ = 0;
v___x_69_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_69_, 0, v___f_66_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set_uint8(v___x_69_, sizeof(void*)*2, v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0(lean_object* v_x_70_){
_start:
{
if (lean_obj_tag(v_x_70_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_80_; 
v_a_72_ = lean_ctor_get(v_x_70_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_80_ == 0)
{
v___x_74_ = v_x_70_;
v_isShared_75_ = v_isSharedCheck_80_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v_x_70_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_80_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_77_; 
if (v_isShared_75_ == 0)
{
v___x_77_ = v___x_74_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_a_72_);
v___x_77_ = v_reuseFailAlloc_79_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
lean_object* v___x_78_; 
v___x_78_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
return v___x_78_;
}
}
}
else
{
lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_89_; 
v_isSharedCheck_89_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_89_ == 0)
{
lean_object* v_unused_90_; 
v_unused_90_ = lean_ctor_get(v_x_70_, 0);
lean_dec(v_unused_90_);
v___x_82_ = v_x_70_;
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
else
{
lean_dec(v_x_70_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; lean_object* v___x_86_; 
v___x_84_ = lean_box(0);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 0, v___x_84_);
v___x_86_ = v___x_82_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_84_);
v___x_86_ = v_reuseFailAlloc_88_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
lean_object* v___x_87_; 
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
return v___x_87_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed(lean_object* v_x_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0(v_x_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1(lean_object* v_f_94_, lean_object* v___f_95_, lean_object* v_x_96_){
_start:
{
lean_object* v___x_98_; uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = lean_unsigned_to_nat(0u);
v___x_99_ = 0;
v___x_100_ = lean_apply_1(v_f_94_, lean_box(0));
v___x_101_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_98_, v___x_99_, v___x_100_, v___f_95_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed(lean_object* v_f_102_, lean_object* v___f_103_, lean_object* v_x_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1(v_f_102_, v___f_103_, v_x_104_);
lean_dec_ref(v_x_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn(lean_object* v_f_107_){
_start:
{
lean_object* v___f_109_; lean_object* v___f_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___f_109_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_110_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_110_, 0, v_f_107_);
lean_closure_set(v___f_110_, 1, v___f_109_);
v___x_111_ = lean_unsigned_to_nat(0u);
v___x_112_ = l_Lasm_JS_Function_ofFn(v___f_110_, v___x_111_);
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_120_; 
v_a_113_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_120_ == 0)
{
v___x_115_ = v___x_112_;
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v___x_112_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_a_113_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
else
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
v_a_121_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_112_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_112_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___boxed(lean_object* v_f_129_, lean_object* v_a_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lasm_JS_Node_FileHandle_CloseListener_ofFn(v_f_129_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0(lean_object* v_f_132_, lean_object* v_x_133_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_apply_1(v_f_132_, lean_box(0));
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_143_; 
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_143_ == 0)
{
lean_object* v_unused_144_; 
v_unused_144_ = lean_ctor_get(v___x_135_, 0);
lean_dec(v_unused_144_);
v___x_137_ = v___x_135_;
v_isShared_138_ = v_isSharedCheck_143_;
goto v_resetjp_136_;
}
else
{
lean_dec(v___x_135_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_143_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_139_; lean_object* v___x_141_; 
v___x_139_ = lean_box(0);
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 0, v___x_139_);
v___x_141_ = v___x_137_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_139_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
else
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_152_; 
v_a_145_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_152_ == 0)
{
v___x_147_ = v___x_135_;
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_135_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_145_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed(lean_object* v_f_153_, lean_object* v_x_154_, lean_object* v___y_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0(v_f_153_, v_x_154_);
lean_dec_ref(v_x_154_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn(lean_object* v_f_157_){
_start:
{
lean_object* v___f_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___f_159_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_159_, 0, v_f_157_);
v___x_160_ = lean_unsigned_to_nat(0u);
v___x_161_ = l_Lasm_JS_Function_ofSyncFn(v___f_159_, v___x_160_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
v_a_162_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_169_ == 0)
{
v___x_164_ = v___x_161_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_161_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_162_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
v_a_170_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_161_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_161_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___boxed(lean_object* v_f_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn(v_f_178_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorIdx(lean_object* v_x_181_){
_start:
{
switch(lean_obj_tag(v_x_181_))
{
case 0:
{
lean_object* v___x_182_; 
v___x_182_ = lean_unsigned_to_nat(0u);
return v___x_182_;
}
case 1:
{
lean_object* v___x_183_; 
v___x_183_ = lean_unsigned_to_nat(1u);
return v___x_183_;
}
default: 
{
lean_object* v___x_184_; 
v___x_184_ = lean_unsigned_to_nat(2u);
return v___x_184_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorIdx___boxed(lean_object* v_x_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorIdx(v_x_185_);
lean_dec_ref(v_x_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(lean_object* v_t_187_, lean_object* v_k_188_){
_start:
{
if (lean_obj_tag(v_t_187_) == 2)
{
lean_object* v_value_189_; lean_object* v___x_190_; 
v_value_189_ = lean_ctor_get(v_t_187_, 0);
lean_inc(v_value_189_);
lean_dec_ref_known(v_t_187_, 1);
v___x_190_ = lean_apply_1(v_k_188_, v_value_189_);
return v___x_190_;
}
else
{
lean_object* v_value_191_; lean_object* v___x_192_; 
v_value_191_ = lean_ctor_get(v_t_187_, 0);
lean_inc_ref(v_value_191_);
lean_dec_ref(v_t_187_);
v___x_192_ = lean_apply_1(v_k_188_, v_value_191_);
return v___x_192_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim(lean_object* v_motive_193_, lean_object* v_ctorIdx_194_, lean_object* v_t_195_, lean_object* v_h_196_, lean_object* v_k_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_195_, v_k_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___boxed(lean_object* v_motive_199_, lean_object* v_ctorIdx_200_, lean_object* v_t_201_, lean_object* v_h_202_, lean_object* v_k_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim(v_motive_199_, v_ctorIdx_200_, v_t_201_, v_h_202_, v_k_203_);
lean_dec(v_ctorIdx_200_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_domString_elim___redArg(lean_object* v_t_205_, lean_object* v_domString_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_205_, v_domString_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_domString_elim(lean_object* v_motive_208_, lean_object* v_t_209_, lean_object* v_h_210_, lean_object* v_domString_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_209_, v_domString_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_uint8Array_elim___redArg(lean_object* v_t_213_, lean_object* v_uint8Array_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_213_, v_uint8Array_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_uint8Array_elim(lean_object* v_motive_216_, lean_object* v_t_217_, lean_object* v_h_218_, lean_object* v_uint8Array_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_217_, v_uint8Array_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_object_elim___redArg(lean_object* v_t_221_, lean_object* v_object_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_221_, v_object_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_object_elim(lean_object* v_motive_224_, lean_object* v_t_225_, lean_object* v_h_226_, lean_object* v_object_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_225_, v_object_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrObject___lam__0(lean_object* v_x_229_){
_start:
{
switch(lean_obj_tag(v_x_229_))
{
case 0:
{
lean_object* v_value_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
v_value_230_ = lean_ctor_get(v_x_229_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v_x_229_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_value_230_);
lean_dec(v_x_229_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
lean_ctor_set_tag(v___x_232_, 4);
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_value_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
case 1:
{
lean_object* v_value_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
v_value_238_ = lean_ctor_get(v_x_229_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v_x_229_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_value_238_);
lean_dec(v_x_229_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
lean_ctor_set_tag(v___x_240_, 6);
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(6, 1, 0);
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
default: 
{
lean_object* v_value_246_; 
v_value_246_ = lean_ctor_get(v_x_229_, 0);
lean_inc(v_value_246_);
lean_dec_ref_known(v_x_229_, 1);
return v_value_246_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrObject___lam__0(lean_object* v_value_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v_value_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrObject___lam__0(lean_object* v_value_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_252_, 0, v_value_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleAppendFileOptions___lam__0(lean_object* v___f_254_, lean_object* v___f_255_, lean_object* v_d_256_){
_start:
{
lean_object* v_encoding_257_; lean_object* v_signal_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_275_; 
v_encoding_257_ = lean_ctor_get(v_d_256_, 0);
v_signal_258_ = lean_ctor_get(v_d_256_, 1);
v_isSharedCheck_275_ = !lean_is_exclusive(v_d_256_);
if (v_isSharedCheck_275_ == 0)
{
v___x_260_ = v_d_256_;
v_isShared_261_ = v_isSharedCheck_275_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_signal_258_);
lean_inc(v_encoding_257_);
lean_dec(v_d_256_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_275_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_265_; 
v___x_262_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_263_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_254_, v_encoding_257_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v___x_263_);
lean_ctor_set(v___x_260_, 0, v___x_262_);
v___x_265_ = v___x_260_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v___x_263_);
v___x_265_ = v_reuseFailAlloc_274_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_266_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_267_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_255_, v_signal_258_);
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_266_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = lean_unsigned_to_nat(2u);
v___x_270_ = lean_mk_empty_array_with_capacity(v___x_269_);
v___x_271_ = lean_array_push(v___x_270_, v___x_265_);
v___x_272_ = lean_array_push(v___x_271_, v___x_268_);
v___x_273_ = l_Lasm_JS_Web_Internal_fields(v___x_272_);
lean_dec_ref(v___x_272_);
return v___x_273_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleAppendFileOptions(void){
_start:
{
lean_object* v___f_276_; lean_object* v___f_277_; lean_object* v___f_278_; 
v___f_276_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_277_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_278_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleAppendFileOptions___lam__0), 3, 2);
lean_closure_set(v___f_278_, 0, v___f_276_);
lean_closure_set(v___f_278_, 1, v___f_277_);
return v___f_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx(lean_object* v_x_279_){
_start:
{
if (lean_obj_tag(v_x_279_) == 0)
{
lean_object* v___x_280_; 
v___x_280_ = lean_unsigned_to_nat(0u);
return v___x_280_;
}
else
{
lean_object* v___x_281_; 
v___x_281_ = lean_unsigned_to_nat(1u);
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx(v_x_282_);
lean_dec_ref(v_x_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_284_, lean_object* v_k_285_){
_start:
{
lean_object* v_value_286_; lean_object* v___x_287_; 
v_value_286_ = lean_ctor_get(v_t_284_, 0);
lean_inc_ref(v_value_286_);
lean_dec_ref(v_t_284_);
v___x_287_ = lean_apply_1(v_k_285_, v_value_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim(lean_object* v_motive_288_, lean_object* v_ctorIdx_289_, lean_object* v_t_290_, lean_object* v_h_291_, lean_object* v_k_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_290_, v_k_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_294_, lean_object* v_ctorIdx_295_, lean_object* v_t_296_, lean_object* v_h_297_, lean_object* v_k_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim(v_motive_294_, v_ctorIdx_295_, v_t_296_, v_h_297_, v_k_298_);
lean_dec(v_ctorIdx_295_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object* v_t_300_, lean_object* v_appendFileOptions_301_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_300_, v_appendFileOptions_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object* v_motive_303_, lean_object* v_t_304_, lean_object* v_h_305_, lean_object* v_appendFileOptions_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_304_, v_appendFileOptions_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_308_, lean_object* v_domString_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_308_, v_domString_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_domString_elim(lean_object* v_motive_311_, lean_object* v_t_312_, lean_object* v_h_313_, lean_object* v_domString_314_){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_312_, v_domString_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleAppendFileOptionsOrDOMString___lam__0(lean_object* v_x_316_){
_start:
{
if (lean_obj_tag(v_x_316_) == 0)
{
lean_object* v_value_317_; lean_object* v_encoding_318_; lean_object* v_signal_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_338_; 
v_value_317_ = lean_ctor_get(v_x_316_, 0);
lean_inc_ref(v_value_317_);
lean_dec_ref_known(v_x_316_, 1);
v_encoding_318_ = lean_ctor_get(v_value_317_, 0);
v_signal_319_ = lean_ctor_get(v_value_317_, 1);
v_isSharedCheck_338_ = !lean_is_exclusive(v_value_317_);
if (v_isSharedCheck_338_ == 0)
{
v___x_321_ = v_value_317_;
v_isShared_322_ = v_isSharedCheck_338_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_signal_319_);
lean_inc(v_encoding_318_);
lean_dec(v_value_317_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_338_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___f_323_; lean_object* v___f_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v___f_323_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_324_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_325_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_326_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_323_, v_encoding_318_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 1, v___x_326_);
lean_ctor_set(v___x_321_, 0, v___x_325_);
v___x_328_ = v___x_321_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_325_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v___x_326_);
v___x_328_ = v_reuseFailAlloc_337_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_329_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_330_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_324_, v_signal_319_);
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_329_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = lean_unsigned_to_nat(2u);
v___x_333_ = lean_mk_empty_array_with_capacity(v___x_332_);
v___x_334_ = lean_array_push(v___x_333_, v___x_328_);
v___x_335_ = lean_array_push(v___x_334_, v___x_331_);
v___x_336_ = l_Lasm_JS_Web_Internal_fields(v___x_335_);
lean_dec_ref(v___x_335_);
return v___x_336_;
}
}
}
else
{
lean_object* v_value_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
v_value_339_ = lean_ctor_get(v_x_316_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v_x_316_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v_x_316_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_value_339_);
lean_dec(v_x_316_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
lean_ctor_set_tag(v___x_341_, 4);
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_value_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleAppendFileOptionsFileHandleAppendFileOptionsOrDOMString___lam__0(lean_object* v_value_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v_value_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFileHandleAppendFileOptionsOrDOMString___lam__0(lean_object* v_value_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_352_, 0, v_value_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleCreateReadStreamOptions___lam__0(lean_object* v___f_354_, lean_object* v___f_355_, lean_object* v___f_356_, lean_object* v___f_357_, lean_object* v_d_358_){
_start:
{
lean_object* v_encoding_359_; lean_object* v_autoClose_360_; lean_object* v_emitClose_361_; lean_object* v_start_362_; lean_object* v_end_363_; lean_object* v_highWaterMark_364_; lean_object* v_signal_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_encoding_359_ = lean_ctor_get(v_d_358_, 0);
lean_inc(v_encoding_359_);
v_autoClose_360_ = lean_ctor_get(v_d_358_, 1);
lean_inc(v_autoClose_360_);
v_emitClose_361_ = lean_ctor_get(v_d_358_, 2);
lean_inc(v_emitClose_361_);
v_start_362_ = lean_ctor_get(v_d_358_, 3);
lean_inc(v_start_362_);
v_end_363_ = lean_ctor_get(v_d_358_, 4);
lean_inc(v_end_363_);
v_highWaterMark_364_ = lean_ctor_get(v_d_358_, 5);
lean_inc(v_highWaterMark_364_);
v_signal_365_ = lean_ctor_get(v_d_358_, 6);
lean_inc(v_signal_365_);
lean_dec_ref(v_d_358_);
v___x_366_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_367_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_354_, v_encoding_359_);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = lean_mk_string_unchecked("autoClose", 9, 9);
lean_inc_ref(v___f_355_);
v___x_370_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_355_, v_autoClose_360_);
v___x_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
v___x_372_ = lean_mk_string_unchecked("emitClose", 9, 9);
v___x_373_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_355_, v_emitClose_361_);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = lean_mk_string_unchecked("start", 5, 5);
lean_inc_ref_n(v___f_356_, 2);
v___x_376_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_356_, v_start_362_);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_mk_string_unchecked("end", 3, 3);
v___x_379_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_356_, v_end_363_);
v___x_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_378_);
lean_ctor_set(v___x_380_, 1, v___x_379_);
v___x_381_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_382_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_356_, v_highWaterMark_364_);
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_381_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
v___x_384_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_385_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_357_, v_signal_365_);
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_unsigned_to_nat(7u);
v___x_388_ = lean_mk_empty_array_with_capacity(v___x_387_);
v___x_389_ = lean_array_push(v___x_388_, v___x_368_);
v___x_390_ = lean_array_push(v___x_389_, v___x_371_);
v___x_391_ = lean_array_push(v___x_390_, v___x_374_);
v___x_392_ = lean_array_push(v___x_391_, v___x_377_);
v___x_393_ = lean_array_push(v___x_392_, v___x_380_);
v___x_394_ = lean_array_push(v___x_393_, v___x_383_);
v___x_395_ = lean_array_push(v___x_394_, v___x_386_);
v___x_396_ = l_Lasm_JS_Web_Internal_fields(v___x_395_);
lean_dec_ref(v___x_395_);
return v___x_396_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleCreateReadStreamOptions(void){
_start:
{
lean_object* v___f_397_; lean_object* v___f_398_; lean_object* v___f_399_; lean_object* v___f_400_; lean_object* v___f_401_; 
v___f_397_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_398_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_399_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_400_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_401_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleCreateReadStreamOptions___lam__0), 5, 4);
lean_closure_set(v___f_401_, 0, v___f_397_);
lean_closure_set(v___f_401_, 1, v___f_398_);
lean_closure_set(v___f_401_, 2, v___f_399_);
lean_closure_set(v___f_401_, 3, v___f_400_);
return v___f_401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleCreateWriteStreamOptions___lam__0(lean_object* v___f_402_, lean_object* v___f_403_, lean_object* v___f_404_, lean_object* v___f_405_, lean_object* v_d_406_){
_start:
{
lean_object* v_encoding_407_; lean_object* v_autoClose_408_; lean_object* v_emitClose_409_; lean_object* v_start_410_; lean_object* v_highWaterMark_411_; lean_object* v_flush_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v_encoding_407_ = lean_ctor_get(v_d_406_, 0);
lean_inc(v_encoding_407_);
v_autoClose_408_ = lean_ctor_get(v_d_406_, 1);
lean_inc(v_autoClose_408_);
v_emitClose_409_ = lean_ctor_get(v_d_406_, 2);
lean_inc(v_emitClose_409_);
v_start_410_ = lean_ctor_get(v_d_406_, 3);
lean_inc(v_start_410_);
v_highWaterMark_411_ = lean_ctor_get(v_d_406_, 4);
lean_inc(v_highWaterMark_411_);
v_flush_412_ = lean_ctor_get(v_d_406_, 5);
lean_inc(v_flush_412_);
lean_dec_ref(v_d_406_);
v___x_413_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_414_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_402_, v_encoding_407_);
v___x_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = lean_mk_string_unchecked("autoClose", 9, 9);
lean_inc_ref_n(v___f_403_, 2);
v___x_417_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_403_, v_autoClose_408_);
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = lean_mk_string_unchecked("emitClose", 9, 9);
v___x_420_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_403_, v_emitClose_409_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_419_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = lean_mk_string_unchecked("start", 5, 5);
v___x_423_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_404_, v_start_410_);
v___x_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_422_);
lean_ctor_set(v___x_424_, 1, v___x_423_);
v___x_425_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_426_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_405_, v_highWaterMark_411_);
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_425_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_429_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_403_, v_flush_412_);
v___x_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_428_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lean_unsigned_to_nat(6u);
v___x_432_ = lean_mk_empty_array_with_capacity(v___x_431_);
v___x_433_ = lean_array_push(v___x_432_, v___x_415_);
v___x_434_ = lean_array_push(v___x_433_, v___x_418_);
v___x_435_ = lean_array_push(v___x_434_, v___x_421_);
v___x_436_ = lean_array_push(v___x_435_, v___x_424_);
v___x_437_ = lean_array_push(v___x_436_, v___x_427_);
v___x_438_ = lean_array_push(v___x_437_, v___x_430_);
v___x_439_ = l_Lasm_JS_Web_Internal_fields(v___x_438_);
lean_dec_ref(v___x_438_);
return v___x_439_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleCreateWriteStreamOptions(void){
_start:
{
lean_object* v___f_440_; lean_object* v___f_441_; lean_object* v___f_442_; lean_object* v___f_443_; lean_object* v___f_444_; 
v___f_440_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_441_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_442_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_443_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_444_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleCreateWriteStreamOptions___lam__0), 5, 4);
lean_closure_set(v___f_444_, 0, v___f_440_);
lean_closure_set(v___f_444_, 1, v___f_441_);
lean_closure_set(v___f_444_, 2, v___f_442_);
lean_closure_set(v___f_444_, 3, v___f_443_);
return v___f_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorIdx(lean_object* v_x_445_){
_start:
{
if (lean_obj_tag(v_x_445_) == 0)
{
lean_object* v___x_446_; 
v___x_446_ = lean_unsigned_to_nat(0u);
return v___x_446_;
}
else
{
lean_object* v___x_447_; 
v___x_447_ = lean_unsigned_to_nat(1u);
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorIdx___boxed(lean_object* v_x_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lasm_JS_Node_JSFunctionOrObject_ctorIdx(v_x_448_);
lean_dec_ref(v_x_448_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorElim___redArg(lean_object* v_t_450_, lean_object* v_k_451_){
_start:
{
lean_object* v_value_452_; lean_object* v___x_453_; 
v_value_452_ = lean_ctor_get(v_t_450_, 0);
lean_inc(v_value_452_);
lean_dec_ref(v_t_450_);
v___x_453_ = lean_apply_1(v_k_451_, v_value_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorElim(lean_object* v_motive_454_, lean_object* v_ctorIdx_455_, lean_object* v_t_456_, lean_object* v_h_457_, lean_object* v_k_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lasm_JS_Node_JSFunctionOrObject_ctorElim___redArg(v_t_456_, v_k_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_ctorElim___boxed(lean_object* v_motive_460_, lean_object* v_ctorIdx_461_, lean_object* v_t_462_, lean_object* v_h_463_, lean_object* v_k_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lasm_JS_Node_JSFunctionOrObject_ctorElim(v_motive_460_, v_ctorIdx_461_, v_t_462_, v_h_463_, v_k_464_);
lean_dec(v_ctorIdx_461_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_jsFunction_elim___redArg(lean_object* v_t_466_, lean_object* v_jsFunction_467_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lasm_JS_Node_JSFunctionOrObject_ctorElim___redArg(v_t_466_, v_jsFunction_467_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_jsFunction_elim(lean_object* v_motive_469_, lean_object* v_t_470_, lean_object* v_h_471_, lean_object* v_jsFunction_472_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = l_Lasm_JS_Node_JSFunctionOrObject_ctorElim___redArg(v_t_470_, v_jsFunction_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_object_elim___redArg(lean_object* v_t_474_, lean_object* v_object_475_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = l_Lasm_JS_Node_JSFunctionOrObject_ctorElim___redArg(v_t_474_, v_object_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrObject_object_elim(lean_object* v_motive_477_, lean_object* v_t_478_, lean_object* v_h_479_, lean_object* v_object_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Lasm_JS_Node_JSFunctionOrObject_ctorElim___redArg(v_t_478_, v_object_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrObject___lam__0(lean_object* v_x_482_){
_start:
{
if (lean_obj_tag(v_x_482_) == 0)
{
lean_object* v_value_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v_value_483_ = lean_ctor_get(v_x_482_, 0);
v___x_484_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_483_);
v___x_485_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_485_, 0, v_value_483_);
lean_ctor_set(v___x_485_, 1, v___x_484_);
return v___x_485_;
}
else
{
lean_object* v_value_486_; 
v_value_486_ = lean_ctor_get(v_x_482_, 0);
lean_inc(v_value_486_);
return v_value_486_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrObject___lam__0___boxed(lean_object* v_x_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lasm_JS_Node_instToJSJSFunctionOrObject___lam__0(v_x_487_);
lean_dec_ref(v_x_487_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrObject___lam__0(lean_object* v_value_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_491_, 0, v_value_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandlePullOptions___lam__0(lean_object* v___f_493_, lean_object* v___f_494_, lean_object* v___f_495_, lean_object* v___f_496_, lean_object* v_d_497_){
_start:
{
lean_object* v_signal_498_; lean_object* v_autoClose_499_; lean_object* v_start_500_; lean_object* v_limit_501_; lean_object* v_chunkSize_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v_signal_498_ = lean_ctor_get(v_d_497_, 0);
lean_inc(v_signal_498_);
v_autoClose_499_ = lean_ctor_get(v_d_497_, 1);
lean_inc(v_autoClose_499_);
v_start_500_ = lean_ctor_get(v_d_497_, 2);
lean_inc(v_start_500_);
v_limit_501_ = lean_ctor_get(v_d_497_, 3);
lean_inc(v_limit_501_);
v_chunkSize_502_ = lean_ctor_get(v_d_497_, 4);
lean_inc(v_chunkSize_502_);
lean_dec_ref(v_d_497_);
v___x_503_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_504_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_493_, v_signal_498_);
v___x_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = lean_mk_string_unchecked("autoClose", 9, 9);
v___x_507_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_494_, v_autoClose_499_);
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_506_);
lean_ctor_set(v___x_508_, 1, v___x_507_);
v___x_509_ = lean_mk_string_unchecked("start", 5, 5);
lean_inc_ref(v___f_495_);
v___x_510_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_495_, v_start_500_);
v___x_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_509_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
v___x_512_ = lean_mk_string_unchecked("limit", 5, 5);
v___x_513_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_496_, v_limit_501_);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = lean_mk_string_unchecked("chunkSize", 9, 9);
v___x_516_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_495_, v_chunkSize_502_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_515_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = lean_unsigned_to_nat(5u);
v___x_519_ = lean_mk_empty_array_with_capacity(v___x_518_);
v___x_520_ = lean_array_push(v___x_519_, v___x_505_);
v___x_521_ = lean_array_push(v___x_520_, v___x_508_);
v___x_522_ = lean_array_push(v___x_521_, v___x_511_);
v___x_523_ = lean_array_push(v___x_522_, v___x_514_);
v___x_524_ = lean_array_push(v___x_523_, v___x_517_);
v___x_525_ = l_Lasm_JS_Web_Internal_fields(v___x_524_);
lean_dec_ref(v___x_524_);
return v___x_525_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandlePullOptions(void){
_start:
{
lean_object* v___f_526_; lean_object* v___f_527_; lean_object* v___f_528_; lean_object* v___f_529_; lean_object* v___f_530_; 
v___f_526_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_527_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_528_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_529_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_530_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandlePullOptions___lam__0), 5, 4);
lean_closure_set(v___f_530_, 0, v___f_526_);
lean_closure_set(v___f_530_, 1, v___f_527_);
lean_closure_set(v___f_530_, 2, v___f_528_);
lean_closure_set(v___f_530_, 3, v___f_529_);
return v___f_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandlePullSyncOptions___lam__0(lean_object* v___f_531_, lean_object* v___f_532_, lean_object* v___f_533_, lean_object* v_d_534_){
_start:
{
lean_object* v_autoClose_535_; lean_object* v_start_536_; lean_object* v_limit_537_; lean_object* v_chunkSize_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_autoClose_535_ = lean_ctor_get(v_d_534_, 0);
lean_inc(v_autoClose_535_);
v_start_536_ = lean_ctor_get(v_d_534_, 1);
lean_inc(v_start_536_);
v_limit_537_ = lean_ctor_get(v_d_534_, 2);
lean_inc(v_limit_537_);
v_chunkSize_538_ = lean_ctor_get(v_d_534_, 3);
lean_inc(v_chunkSize_538_);
lean_dec_ref(v_d_534_);
v___x_539_ = lean_mk_string_unchecked("autoClose", 9, 9);
v___x_540_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_531_, v_autoClose_535_);
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_539_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
v___x_542_ = lean_mk_string_unchecked("start", 5, 5);
lean_inc_ref(v___f_532_);
v___x_543_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_532_, v_start_536_);
v___x_544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_542_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
v___x_545_ = lean_mk_string_unchecked("limit", 5, 5);
v___x_546_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_533_, v_limit_537_);
v___x_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_545_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
v___x_548_ = lean_mk_string_unchecked("chunkSize", 9, 9);
v___x_549_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_532_, v_chunkSize_538_);
v___x_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_548_);
lean_ctor_set(v___x_550_, 1, v___x_549_);
v___x_551_ = lean_unsigned_to_nat(4u);
v___x_552_ = lean_mk_empty_array_with_capacity(v___x_551_);
v___x_553_ = lean_array_push(v___x_552_, v___x_541_);
v___x_554_ = lean_array_push(v___x_553_, v___x_544_);
v___x_555_ = lean_array_push(v___x_554_, v___x_547_);
v___x_556_ = lean_array_push(v___x_555_, v___x_550_);
v___x_557_ = l_Lasm_JS_Web_Internal_fields(v___x_556_);
lean_dec_ref(v___x_556_);
return v___x_557_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandlePullSyncOptions(void){
_start:
{
lean_object* v___f_558_; lean_object* v___f_559_; lean_object* v___f_560_; lean_object* v___f_561_; 
v___f_558_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_559_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_560_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_561_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandlePullSyncOptions___lam__0), 4, 3);
lean_closure_set(v___f_561_, 0, v___f_558_);
lean_closure_set(v___f_561_, 1, v___f_559_);
lean_closure_set(v___f_561_, 2, v___f_560_);
return v___f_561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorIdx(lean_object* v_x_562_){
_start:
{
if (lean_obj_tag(v_x_562_) == 0)
{
lean_object* v___x_563_; 
v___x_563_ = lean_unsigned_to_nat(0u);
return v___x_563_;
}
else
{
lean_object* v___x_564_; 
v___x_564_ = lean_unsigned_to_nat(1u);
return v___x_564_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorIdx___boxed(lean_object* v_x_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lasm_JS_Node_LongLongOrBigint_ctorIdx(v_x_565_);
lean_dec_ref(v_x_565_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(lean_object* v_t_567_, lean_object* v_k_568_){
_start:
{
lean_object* v_value_569_; lean_object* v___x_570_; 
v_value_569_ = lean_ctor_get(v_t_567_, 0);
lean_inc(v_value_569_);
lean_dec_ref(v_t_567_);
v___x_570_ = lean_apply_1(v_k_568_, v_value_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorElim(lean_object* v_motive_571_, lean_object* v_ctorIdx_572_, lean_object* v_t_573_, lean_object* v_h_574_, lean_object* v_k_575_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_573_, v_k_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorElim___boxed(lean_object* v_motive_577_, lean_object* v_ctorIdx_578_, lean_object* v_t_579_, lean_object* v_h_580_, lean_object* v_k_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim(v_motive_577_, v_ctorIdx_578_, v_t_579_, v_h_580_, v_k_581_);
lean_dec(v_ctorIdx_578_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_longLong_elim___redArg(lean_object* v_t_583_, lean_object* v_longLong_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_583_, v_longLong_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_longLong_elim(lean_object* v_motive_586_, lean_object* v_t_587_, lean_object* v_h_588_, lean_object* v_longLong_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_587_, v_longLong_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_bigint_elim___redArg(lean_object* v_t_591_, lean_object* v_bigint_592_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_591_, v_bigint_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_bigint_elim(lean_object* v_motive_594_, lean_object* v_t_595_, lean_object* v_h_596_, lean_object* v_bigint_597_){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_595_, v_bigint_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0(lean_object* v_x_599_){
_start:
{
lean_object* v_v_601_; lean_object* v_value_608_; 
v_value_608_ = lean_ctor_get(v_x_599_, 0);
lean_inc(v_value_608_);
lean_dec_ref(v_x_599_);
v_v_601_ = v_value_608_;
goto v___jp_600_;
v___jp_600_:
{
lean_object* v___x_602_; lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_602_ = lean_nat_abs(v_v_601_);
v___x_603_ = lean_cstr_to_nat("9007199254740991");
v___x_604_ = lean_nat_dec_le(v___x_602_, v___x_603_);
lean_dec(v___x_602_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; 
v___x_605_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_605_, 0, v_v_601_);
return v___x_605_;
}
else
{
double v___x_606_; lean_object* v___x_607_; 
v___x_606_ = l_Float_ofInt(v_v_601_);
lean_dec(v_v_601_);
v___x_607_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_607_, 0, v___x_606_);
return v___x_607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleReadResult___lam__0(lean_object* v___x_610_, lean_object* v___x_611_, lean_object* v_d_612_){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_mk_string_unchecked("bytesRead", 9, 9);
v___x_614_ = l_Lasm_JS_readField___redArg(v___x_610_, v_d_612_, v___x_613_);
lean_dec_ref(v___x_613_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec_ref(v___x_611_);
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v_a_623_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v___x_614_, 1);
v___x_624_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_625_ = l_Lasm_JS_readField___redArg(v___x_611_, v_d_612_, v___x_624_);
lean_dec_ref(v___x_624_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec(v_a_623_);
v_a_626_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_625_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_625_);
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
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_642_; 
v_a_634_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_642_ == 0)
{
v___x_636_ = v___x_625_;
v_isShared_637_ = v_isSharedCheck_642_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_625_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_642_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v_a_623_);
lean_ctor_set(v___x_638_, 1, v_a_634_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 0, v___x_638_);
v___x_640_ = v___x_636_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_638_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleReadResult___lam__0___boxed(lean_object* v___x_643_, lean_object* v___x_644_, lean_object* v_d_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lasm_JS_Node_instFromJSFileHandleReadResult___lam__0(v___x_643_, v___x_644_, v_d_645_);
lean_dec(v_d_645_);
return v_res_646_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFileHandleReadResult(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___f_649_; lean_object* v___x_650_; uint8_t v___x_651_; lean_object* v___x_652_; 
v___x_647_ = l_Lasm_JS_instFromJSInt;
v___x_648_ = l_Lasm_JS_instFromJSByteArray;
v___f_649_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandleReadResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_649_, 0, v___x_647_);
lean_closure_set(v___f_649_, 1, v___x_648_);
v___x_650_ = lean_mk_string_unchecked("Lasm.JS.Node.FileHandle.ReadResult", 34, 34);
v___x_651_ = 0;
v___x_652_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_652_, 0, v___f_649_);
lean_ctor_set(v___x_652_, 1, v___x_650_);
lean_ctor_set_uint8(v___x_652_, sizeof(void*)*2, v___x_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadOptions___lam__0(lean_object* v___f_653_, lean_object* v___f_654_, lean_object* v___f_655_, lean_object* v_d_656_){
_start:
{
lean_object* v_buffer_657_; lean_object* v_offset_658_; lean_object* v_length_659_; lean_object* v_position_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v_buffer_657_ = lean_ctor_get(v_d_656_, 0);
lean_inc(v_buffer_657_);
v_offset_658_ = lean_ctor_get(v_d_656_, 1);
lean_inc(v_offset_658_);
v_length_659_ = lean_ctor_get(v_d_656_, 2);
lean_inc(v_length_659_);
v_position_660_ = lean_ctor_get(v_d_656_, 3);
lean_inc(v_position_660_);
lean_dec_ref(v_d_656_);
v___x_661_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_662_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_653_, v_buffer_657_);
v___x_663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref(v___f_654_);
v___x_665_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_654_, v_offset_658_);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_664_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = lean_mk_string_unchecked("length", 6, 6);
v___x_668_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_654_, v_length_659_);
v___x_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = lean_mk_string_unchecked("position", 8, 8);
v___x_671_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_655_, v_position_660_);
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_670_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
v___x_673_ = lean_unsigned_to_nat(4u);
v___x_674_ = lean_mk_empty_array_with_capacity(v___x_673_);
v___x_675_ = lean_array_push(v___x_674_, v___x_663_);
v___x_676_ = lean_array_push(v___x_675_, v___x_666_);
v___x_677_ = lean_array_push(v___x_676_, v___x_669_);
v___x_678_ = lean_array_push(v___x_677_, v___x_672_);
v___x_679_ = l_Lasm_JS_Web_Internal_fields(v___x_678_);
lean_dec_ref(v___x_678_);
return v___x_679_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleReadOptions(void){
_start:
{
lean_object* v___f_680_; lean_object* v___f_681_; lean_object* v___f_682_; lean_object* v___f_683_; 
v___f_680_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSByteArray___lam__0), 1, 0);
v___f_681_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_682_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0), 1, 0);
v___f_683_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleReadOptions___lam__0), 4, 3);
lean_closure_set(v___f_683_, 0, v___f_680_);
lean_closure_set(v___f_683_, 1, v___f_681_);
lean_closure_set(v___f_683_, 2, v___f_682_);
return v___f_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadOptions2___lam__0(lean_object* v___f_684_, lean_object* v___f_685_, lean_object* v_d_686_){
_start:
{
lean_object* v_offset_687_; lean_object* v_length_688_; lean_object* v_position_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v_offset_687_ = lean_ctor_get(v_d_686_, 0);
lean_inc(v_offset_687_);
v_length_688_ = lean_ctor_get(v_d_686_, 1);
lean_inc(v_length_688_);
v_position_689_ = lean_ctor_get(v_d_686_, 2);
lean_inc(v_position_689_);
lean_dec_ref(v_d_686_);
v___x_690_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref(v___f_684_);
v___x_691_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_684_, v_offset_687_);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_690_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
v___x_693_ = lean_mk_string_unchecked("length", 6, 6);
v___x_694_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_684_, v_length_688_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_693_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = lean_mk_string_unchecked("position", 8, 8);
v___x_697_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_685_, v_position_689_);
v___x_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_696_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
v___x_699_ = lean_unsigned_to_nat(3u);
v___x_700_ = lean_mk_empty_array_with_capacity(v___x_699_);
v___x_701_ = lean_array_push(v___x_700_, v___x_692_);
v___x_702_ = lean_array_push(v___x_701_, v___x_695_);
v___x_703_ = lean_array_push(v___x_702_, v___x_698_);
v___x_704_ = l_Lasm_JS_Web_Internal_fields(v___x_703_);
lean_dec_ref(v___x_703_);
return v___x_704_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleReadOptions2(void){
_start:
{
lean_object* v___f_705_; lean_object* v___f_706_; lean_object* v___f_707_; 
v___f_705_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_706_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0), 1, 0);
v___f_707_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleReadOptions2___lam__0), 3, 2);
lean_closure_set(v___f_707_, 0, v___f_705_);
lean_closure_set(v___f_707_, 1, v___f_706_);
return v___f_707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadableWebStreamOptions___lam__0(lean_object* v___f_708_, lean_object* v_d_709_){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_710_ = lean_mk_string_unchecked("autoClose", 9, 9);
v___x_711_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_708_, v_d_709_);
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_710_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = lean_unsigned_to_nat(1u);
v___x_714_ = lean_mk_empty_array_with_capacity(v___x_713_);
v___x_715_ = lean_array_push(v___x_714_, v___x_712_);
v___x_716_ = l_Lasm_JS_Web_Internal_fields(v___x_715_);
lean_dec_ref(v___x_715_);
return v___x_716_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleReadableWebStreamOptions(void){
_start:
{
lean_object* v___f_717_; lean_object* v___f_718_; 
v___f_717_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_718_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleReadableWebStreamOptions___lam__0), 2, 1);
lean_closure_set(v___f_718_, 0, v___f_717_);
return v___f_718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadFileOptions___lam__0(lean_object* v___f_719_, lean_object* v___f_720_, lean_object* v___f_721_, lean_object* v_d_722_){
_start:
{
lean_object* v_encoding_723_; lean_object* v_signal_724_; lean_object* v_buffer_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_encoding_723_ = lean_ctor_get(v_d_722_, 0);
lean_inc(v_encoding_723_);
v_signal_724_ = lean_ctor_get(v_d_722_, 1);
lean_inc(v_signal_724_);
v_buffer_725_ = lean_ctor_get(v_d_722_, 2);
lean_inc(v_buffer_725_);
lean_dec_ref(v_d_722_);
v___x_726_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_727_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_719_, v_encoding_723_);
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_726_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___x_729_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_730_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_720_, v_signal_724_);
v___x_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_731_, 0, v___x_729_);
lean_ctor_set(v___x_731_, 1, v___x_730_);
v___x_732_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_733_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_721_, v_buffer_725_);
v___x_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_732_);
lean_ctor_set(v___x_734_, 1, v___x_733_);
v___x_735_ = lean_unsigned_to_nat(3u);
v___x_736_ = lean_mk_empty_array_with_capacity(v___x_735_);
v___x_737_ = lean_array_push(v___x_736_, v___x_728_);
v___x_738_ = lean_array_push(v___x_737_, v___x_731_);
v___x_739_ = lean_array_push(v___x_738_, v___x_734_);
v___x_740_ = l_Lasm_JS_Web_Internal_fields(v___x_739_);
lean_dec_ref(v___x_739_);
return v___x_740_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleReadFileOptions(void){
_start:
{
lean_object* v___f_741_; lean_object* v___f_742_; lean_object* v___f_743_; lean_object* v___f_744_; 
v___f_741_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_742_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_743_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___f_744_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleReadFileOptions___lam__0), 4, 3);
lean_closure_set(v___f_744_, 0, v___f_741_);
lean_closure_set(v___f_744_, 1, v___f_742_);
lean_closure_set(v___f_744_, 2, v___f_743_);
return v___f_744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx(lean_object* v_x_745_){
_start:
{
if (lean_obj_tag(v_x_745_) == 0)
{
lean_object* v___x_746_; 
v___x_746_ = lean_unsigned_to_nat(0u);
return v___x_746_;
}
else
{
lean_object* v___x_747_; 
v___x_747_ = lean_unsigned_to_nat(1u);
return v___x_747_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx(v_x_748_);
lean_dec_ref(v_x_748_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_750_, lean_object* v_k_751_){
_start:
{
lean_object* v_value_752_; lean_object* v___x_753_; 
v_value_752_ = lean_ctor_get(v_t_750_, 0);
lean_inc_ref(v_value_752_);
lean_dec_ref(v_t_750_);
v___x_753_ = lean_apply_1(v_k_751_, v_value_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim(lean_object* v_motive_754_, lean_object* v_ctorIdx_755_, lean_object* v_t_756_, lean_object* v_h_757_, lean_object* v_k_758_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_756_, v_k_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_760_, lean_object* v_ctorIdx_761_, lean_object* v_t_762_, lean_object* v_h_763_, lean_object* v_k_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim(v_motive_760_, v_ctorIdx_761_, v_t_762_, v_h_763_, v_k_764_);
lean_dec(v_ctorIdx_761_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object* v_t_766_, lean_object* v_readFileOptions_767_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_766_, v_readFileOptions_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object* v_motive_769_, lean_object* v_t_770_, lean_object* v_h_771_, lean_object* v_readFileOptions_772_){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_770_, v_readFileOptions_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_774_, lean_object* v_domString_775_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_774_, v_domString_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_domString_elim(lean_object* v_motive_777_, lean_object* v_t_778_, lean_object* v_h_779_, lean_object* v_domString_780_){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_778_, v_domString_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadFileOptionsOrDOMString___lam__0(lean_object* v_x_782_){
_start:
{
if (lean_obj_tag(v_x_782_) == 0)
{
lean_object* v_value_783_; lean_object* v_encoding_784_; lean_object* v_signal_785_; lean_object* v_buffer_786_; lean_object* v___f_787_; lean_object* v___f_788_; lean_object* v___f_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v_value_783_ = lean_ctor_get(v_x_782_, 0);
lean_inc_ref(v_value_783_);
lean_dec_ref_known(v_x_782_, 1);
v_encoding_784_ = lean_ctor_get(v_value_783_, 0);
lean_inc(v_encoding_784_);
v_signal_785_ = lean_ctor_get(v_value_783_, 1);
lean_inc(v_signal_785_);
v_buffer_786_ = lean_ctor_get(v_value_783_, 2);
lean_inc(v_buffer_786_);
lean_dec_ref(v_value_783_);
v___f_787_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_788_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_789_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___x_790_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_791_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_787_, v_encoding_784_);
v___x_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_792_, 0, v___x_790_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
v___x_793_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_794_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_788_, v_signal_785_);
v___x_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_793_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
v___x_796_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_797_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_789_, v_buffer_786_);
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_796_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = lean_unsigned_to_nat(3u);
v___x_800_ = lean_mk_empty_array_with_capacity(v___x_799_);
v___x_801_ = lean_array_push(v___x_800_, v___x_792_);
v___x_802_ = lean_array_push(v___x_801_, v___x_795_);
v___x_803_ = lean_array_push(v___x_802_, v___x_798_);
v___x_804_ = l_Lasm_JS_Web_Internal_fields(v___x_803_);
lean_dec_ref(v___x_803_);
return v___x_804_;
}
else
{
lean_object* v_value_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
v_value_805_ = lean_ctor_get(v_x_782_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v_x_782_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v_x_782_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_value_805_);
lean_dec(v_x_782_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
lean_ctor_set_tag(v___x_807_, 4);
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_value_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleReadFileOptionsFileHandleReadFileOptionsOrDOMString___lam__0(lean_object* v_value_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v_value_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFileHandleReadFileOptionsOrDOMString___lam__0(lean_object* v_value_817_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_818_, 0, v_value_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleReadLinesOptions___lam__0(lean_object* v___f_820_, lean_object* v___f_821_, lean_object* v___f_822_, lean_object* v_d_823_){
_start:
{
lean_object* v_encoding_824_; lean_object* v_autoClose_825_; lean_object* v_emitClose_826_; lean_object* v_start_827_; lean_object* v_end_828_; lean_object* v_highWaterMark_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_encoding_824_ = lean_ctor_get(v_d_823_, 0);
lean_inc(v_encoding_824_);
v_autoClose_825_ = lean_ctor_get(v_d_823_, 1);
lean_inc(v_autoClose_825_);
v_emitClose_826_ = lean_ctor_get(v_d_823_, 2);
lean_inc(v_emitClose_826_);
v_start_827_ = lean_ctor_get(v_d_823_, 3);
lean_inc(v_start_827_);
v_end_828_ = lean_ctor_get(v_d_823_, 4);
lean_inc(v_end_828_);
v_highWaterMark_829_ = lean_ctor_get(v_d_823_, 5);
lean_inc(v_highWaterMark_829_);
lean_dec_ref(v_d_823_);
v___x_830_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_831_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_820_, v_encoding_824_);
v___x_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
v___x_833_ = lean_mk_string_unchecked("autoClose", 9, 9);
lean_inc_ref(v___f_821_);
v___x_834_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_821_, v_autoClose_825_);
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_833_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
v___x_836_ = lean_mk_string_unchecked("emitClose", 9, 9);
v___x_837_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_821_, v_emitClose_826_);
v___x_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_836_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = lean_mk_string_unchecked("start", 5, 5);
lean_inc_ref_n(v___f_822_, 2);
v___x_840_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_822_, v_start_827_);
v___x_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_839_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
v___x_842_ = lean_mk_string_unchecked("end", 3, 3);
v___x_843_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_822_, v_end_828_);
v___x_844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_842_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
v___x_845_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_846_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_822_, v_highWaterMark_829_);
v___x_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_847_, 0, v___x_845_);
lean_ctor_set(v___x_847_, 1, v___x_846_);
v___x_848_ = lean_unsigned_to_nat(6u);
v___x_849_ = lean_mk_empty_array_with_capacity(v___x_848_);
v___x_850_ = lean_array_push(v___x_849_, v___x_832_);
v___x_851_ = lean_array_push(v___x_850_, v___x_835_);
v___x_852_ = lean_array_push(v___x_851_, v___x_838_);
v___x_853_ = lean_array_push(v___x_852_, v___x_841_);
v___x_854_ = lean_array_push(v___x_853_, v___x_844_);
v___x_855_ = lean_array_push(v___x_854_, v___x_847_);
v___x_856_ = l_Lasm_JS_Web_Internal_fields(v___x_855_);
lean_dec_ref(v___x_855_);
return v___x_856_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleReadLinesOptions(void){
_start:
{
lean_object* v___f_857_; lean_object* v___f_858_; lean_object* v___f_859_; lean_object* v___f_860_; 
v___f_857_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_858_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_859_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_860_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleReadLinesOptions___lam__0), 4, 3);
lean_closure_set(v___f_860_, 0, v___f_857_);
lean_closure_set(v___f_860_, 1, v___f_858_);
lean_closure_set(v___f_860_, 2, v___f_859_);
return v___f_860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleStatOptions___lam__0(lean_object* v___f_861_, lean_object* v___f_862_, lean_object* v_d_863_){
_start:
{
lean_object* v_bigint_864_; lean_object* v_signal_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_882_; 
v_bigint_864_ = lean_ctor_get(v_d_863_, 0);
v_signal_865_ = lean_ctor_get(v_d_863_, 1);
v_isSharedCheck_882_ = !lean_is_exclusive(v_d_863_);
if (v_isSharedCheck_882_ == 0)
{
v___x_867_ = v_d_863_;
v_isShared_868_ = v_isSharedCheck_882_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_signal_865_);
lean_inc(v_bigint_864_);
lean_dec(v_d_863_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_882_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_869_ = lean_mk_string_unchecked("bigint", 6, 6);
v___x_870_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_861_, v_bigint_864_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 1, v___x_870_);
lean_ctor_set(v___x_867_, 0, v___x_869_);
v___x_872_ = v___x_867_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_869_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v___x_870_);
v___x_872_ = v_reuseFailAlloc_881_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_873_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_874_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_862_, v_signal_865_);
v___x_875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_873_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = lean_unsigned_to_nat(2u);
v___x_877_ = lean_mk_empty_array_with_capacity(v___x_876_);
v___x_878_ = lean_array_push(v___x_877_, v___x_872_);
v___x_879_ = lean_array_push(v___x_878_, v___x_875_);
v___x_880_ = l_Lasm_JS_Web_Internal_fields(v___x_879_);
lean_dec_ref(v___x_879_);
return v___x_880_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleStatOptions(void){
_start:
{
lean_object* v___f_883_; lean_object* v___f_884_; lean_object* v___f_885_; 
v___f_883_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_884_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_885_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleStatOptions___lam__0), 3, 2);
lean_closure_set(v___f_885_, 0, v___f_883_);
lean_closure_set(v___f_885_, 1, v___f_884_);
return v___f_885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorIdx(lean_object* v_x_886_){
_start:
{
switch(lean_obj_tag(v_x_886_))
{
case 0:
{
lean_object* v___x_887_; 
v___x_887_ = lean_unsigned_to_nat(0u);
return v___x_887_;
}
case 1:
{
lean_object* v___x_888_; 
v___x_888_ = lean_unsigned_to_nat(1u);
return v___x_888_;
}
default: 
{
lean_object* v___x_889_; 
v___x_889_ = lean_unsigned_to_nat(2u);
return v___x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorIdx___boxed(lean_object* v_x_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorIdx(v_x_890_);
lean_dec_ref(v_x_890_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(lean_object* v_t_892_, lean_object* v_k_893_){
_start:
{
switch(lean_obj_tag(v_t_892_))
{
case 0:
{
double v_value_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v_value_894_ = lean_ctor_get_float(v_t_892_, 0);
lean_dec_ref_known(v_t_892_, 0);
v___x_895_ = lean_box_float(v_value_894_);
v___x_896_ = lean_apply_1(v_k_893_, v___x_895_);
return v___x_896_;
}
case 1:
{
lean_object* v_value_897_; lean_object* v___x_898_; 
v_value_897_ = lean_ctor_get(v_t_892_, 0);
lean_inc_ref(v_value_897_);
lean_dec_ref_known(v_t_892_, 1);
v___x_898_ = lean_apply_1(v_k_893_, v_value_897_);
return v___x_898_;
}
default: 
{
lean_object* v_value_899_; lean_object* v___x_900_; 
v_value_899_ = lean_ctor_get(v_t_892_, 0);
lean_inc(v_value_899_);
lean_dec_ref_known(v_t_892_, 1);
v___x_900_ = lean_apply_1(v_k_893_, v_value_899_);
return v___x_900_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim(lean_object* v_motive_901_, lean_object* v_ctorIdx_902_, lean_object* v_t_903_, lean_object* v_h_904_, lean_object* v_k_905_){
_start:
{
lean_object* v___x_906_; 
v___x_906_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_903_, v_k_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___boxed(lean_object* v_motive_907_, lean_object* v_ctorIdx_908_, lean_object* v_t_909_, lean_object* v_h_910_, lean_object* v_k_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim(v_motive_907_, v_ctorIdx_908_, v_t_909_, v_h_910_, v_k_911_);
lean_dec(v_ctorIdx_908_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_double_elim___redArg(lean_object* v_t_913_, lean_object* v_double_914_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_913_, v_double_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_double_elim(lean_object* v_motive_916_, lean_object* v_t_917_, lean_object* v_h_918_, lean_object* v_double_919_){
_start:
{
lean_object* v___x_920_; 
v___x_920_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_917_, v_double_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_domString_elim___redArg(lean_object* v_t_921_, lean_object* v_domString_922_){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_921_, v_domString_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_domString_elim(lean_object* v_motive_924_, lean_object* v_t_925_, lean_object* v_h_926_, lean_object* v_domString_927_){
_start:
{
lean_object* v___x_928_; 
v___x_928_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_925_, v_domString_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_object_elim___redArg(lean_object* v_t_929_, lean_object* v_object_930_){
_start:
{
lean_object* v___x_931_; 
v___x_931_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_929_, v_object_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_object_elim(lean_object* v_motive_932_, lean_object* v_t_933_, lean_object* v_h_934_, lean_object* v_object_935_){
_start:
{
lean_object* v___x_936_; 
v___x_936_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_933_, v_object_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrObject___lam__0(lean_object* v_x_937_){
_start:
{
switch(lean_obj_tag(v_x_937_))
{
case 0:
{
double v_value_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
v_value_938_ = lean_ctor_get_float(v_x_937_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v_x_937_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v_x_937_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_dec(v_x_937_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
lean_ctor_set_tag(v___x_940_, 3);
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_944_, 0, v_value_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
case 1:
{
lean_object* v_value_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
v_value_946_ = lean_ctor_get(v_x_937_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v_x_937_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v_x_937_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_value_946_);
lean_dec(v_x_937_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set_tag(v___x_948_, 4);
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_value_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
default: 
{
lean_object* v_value_954_; 
v_value_954_ = lean_ctor_get(v_x_937_, 0);
lean_inc(v_value_954_);
lean_dec_ref_known(v_x_937_, 1);
return v_value_954_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject___lam__0(double v_value_956_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_957_, 0, v_value_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject___lam__0___boxed(lean_object* v_value_958_){
_start:
{
double v_value_boxed_959_; lean_object* v_res_960_; 
v_value_boxed_959_ = lean_unbox_float(v_value_958_);
lean_dec_ref(v_value_958_);
v_res_960_ = l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject___lam__0(v_value_boxed_959_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrObject___lam__0(lean_object* v_value_962_){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_963_, 0, v_value_962_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteResult___lam__0(lean_object* v___x_965_, lean_object* v___x_966_, lean_object* v_d_967_){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = lean_mk_string_unchecked("bytesWritten", 12, 12);
v___x_969_ = l_Lasm_JS_readField___redArg(v___x_965_, v_d_967_, v___x_968_);
lean_dec_ref(v___x_968_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec_ref(v___x_966_);
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v_a_978_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_978_);
lean_dec_ref_known(v___x_969_, 1);
v___x_979_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_980_ = l_Lasm_JS_readField___redArg(v___x_966_, v_d_967_, v___x_979_);
lean_dec_ref(v___x_979_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec(v_a_978_);
v_a_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_997_; 
v_a_989_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_997_ == 0)
{
v___x_991_ = v___x_980_;
v_isShared_992_ = v_isSharedCheck_997_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_980_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_997_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; lean_object* v___x_995_; 
v___x_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_993_, 0, v_a_978_);
lean_ctor_set(v___x_993_, 1, v_a_989_);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 0, v___x_993_);
v___x_995_ = v___x_991_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteResult___lam__0___boxed(lean_object* v___x_998_, lean_object* v___x_999_, lean_object* v_d_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_Lasm_JS_Node_instFromJSFileHandleWriteResult___lam__0(v___x_998_, v___x_999_, v_d_1000_);
lean_dec(v_d_1000_);
return v_res_1001_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFileHandleWriteResult(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___f_1004_; lean_object* v___x_1005_; uint8_t v___x_1006_; lean_object* v___x_1007_; 
v___x_1002_ = l_Lasm_JS_instFromJSInt;
v___x_1003_ = l_Lasm_JS_instFromJSByteArray;
v___f_1004_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandleWriteResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1004_, 0, v___x_1002_);
lean_closure_set(v___f_1004_, 1, v___x_1003_);
v___x_1005_ = lean_mk_string_unchecked("Lasm.JS.Node.FileHandle.WriteResult", 35, 35);
v___x_1006_ = 0;
v___x_1007_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1007_, 0, v___f_1004_);
lean_ctor_set(v___x_1007_, 1, v___x_1005_);
lean_ctor_set_uint8(v___x_1007_, sizeof(void*)*2, v___x_1006_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriteOptions___lam__0(lean_object* v___f_1008_, lean_object* v_d_1009_){
_start:
{
lean_object* v_offset_1010_; lean_object* v_length_1011_; lean_object* v_position_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v_offset_1010_ = lean_ctor_get(v_d_1009_, 0);
lean_inc(v_offset_1010_);
v_length_1011_ = lean_ctor_get(v_d_1009_, 1);
lean_inc(v_length_1011_);
v_position_1012_ = lean_ctor_get(v_d_1009_, 2);
lean_inc(v_position_1012_);
lean_dec_ref(v_d_1009_);
v___x_1013_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref_n(v___f_1008_, 2);
v___x_1014_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1008_, v_offset_1010_);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1017_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1008_, v_length_1011_);
v___x_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1016_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_mk_string_unchecked("position", 8, 8);
v___x_1020_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1008_, v_position_1012_);
v___x_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1019_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
v___x_1022_ = lean_unsigned_to_nat(3u);
v___x_1023_ = lean_mk_empty_array_with_capacity(v___x_1022_);
v___x_1024_ = lean_array_push(v___x_1023_, v___x_1015_);
v___x_1025_ = lean_array_push(v___x_1024_, v___x_1018_);
v___x_1026_ = lean_array_push(v___x_1025_, v___x_1021_);
v___x_1027_ = l_Lasm_JS_Web_Internal_fields(v___x_1026_);
lean_dec_ref(v___x_1026_);
return v___x_1027_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleWriteOptions(void){
_start:
{
lean_object* v___f_1028_; lean_object* v___f_1029_; 
v___f_1028_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_1029_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleWriteOptions___lam__0), 2, 1);
lean_closure_set(v___f_1029_, 0, v___f_1028_);
return v___f_1029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult___lam__0(lean_object* v___x_1030_, lean_object* v___x_1031_, lean_object* v_d_1032_){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_mk_string_unchecked("bytesWritten", 12, 12);
v___x_1034_ = l_Lasm_JS_readField___redArg(v___x_1030_, v_d_1032_, v___x_1033_);
lean_dec_ref(v___x_1033_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec_ref(v___x_1031_);
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v_a_1043_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1043_);
lean_dec_ref_known(v___x_1034_, 1);
v___x_1044_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_1045_ = l_Lasm_JS_readField___redArg(v___x_1031_, v_d_1032_, v___x_1044_);
lean_dec_ref(v___x_1044_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec(v_a_1043_);
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1045_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1045_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1062_; 
v_a_1054_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1056_ = v___x_1045_;
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1045_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v_a_1043_);
lean_ctor_set(v___x_1058_, 1, v_a_1054_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v___x_1058_);
v___x_1060_ = v___x_1056_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult___lam__0___boxed(lean_object* v___x_1063_, lean_object* v___x_1064_, lean_object* v_d_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult___lam__0(v___x_1063_, v___x_1064_, v_d_1065_);
lean_dec(v_d_1065_);
return v_res_1066_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult(void){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___f_1069_; lean_object* v___x_1070_; uint8_t v___x_1071_; lean_object* v___x_1072_; 
v___x_1067_ = l_Lasm_JS_instFromJSInt;
v___x_1068_ = l_Lasm_JS_instFromJSString;
v___f_1069_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1069_, 0, v___x_1067_);
lean_closure_set(v___f_1069_, 1, v___x_1068_);
v___x_1070_ = lean_mk_string_unchecked("Lasm.JS.Node.FileHandle.WriteStringResult", 41, 41);
v___x_1071_ = 0;
v___x_1072_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1072_, 0, v___f_1069_);
lean_ctor_set(v___x_1072_, 1, v___x_1070_);
lean_ctor_set_uint8(v___x_1072_, sizeof(void*)*2, v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriteFileOptions___lam__0(lean_object* v___f_1073_, lean_object* v___f_1074_, lean_object* v_d_1075_){
_start:
{
lean_object* v_encoding_1076_; lean_object* v_signal_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1094_; 
v_encoding_1076_ = lean_ctor_get(v_d_1075_, 0);
v_signal_1077_ = lean_ctor_get(v_d_1075_, 1);
v_isSharedCheck_1094_ = !lean_is_exclusive(v_d_1075_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1079_ = v_d_1075_;
v_isShared_1080_ = v_isSharedCheck_1094_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_signal_1077_);
lean_inc(v_encoding_1076_);
lean_dec(v_d_1075_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1094_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1084_; 
v___x_1081_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1082_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1073_, v_encoding_1076_);
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 1, v___x_1082_);
lean_ctor_set(v___x_1079_, 0, v___x_1081_);
v___x_1084_ = v___x_1079_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1093_, 1, v___x_1082_);
v___x_1084_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1085_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1086_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1074_, v_signal_1077_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = lean_unsigned_to_nat(2u);
v___x_1089_ = lean_mk_empty_array_with_capacity(v___x_1088_);
v___x_1090_ = lean_array_push(v___x_1089_, v___x_1084_);
v___x_1091_ = lean_array_push(v___x_1090_, v___x_1087_);
v___x_1092_ = l_Lasm_JS_Web_Internal_fields(v___x_1091_);
lean_dec_ref(v___x_1091_);
return v___x_1092_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleWriteFileOptions(void){
_start:
{
lean_object* v___f_1095_; lean_object* v___f_1096_; lean_object* v___f_1097_; 
v___f_1095_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1096_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1097_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleWriteFileOptions___lam__0), 3, 2);
lean_closure_set(v___f_1097_, 0, v___f_1095_);
lean_closure_set(v___f_1097_, 1, v___f_1096_);
return v___f_1097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx(lean_object* v_x_1098_){
_start:
{
if (lean_obj_tag(v_x_1098_) == 0)
{
lean_object* v___x_1099_; 
v___x_1099_ = lean_unsigned_to_nat(0u);
return v___x_1099_;
}
else
{
lean_object* v___x_1100_; 
v___x_1100_ = lean_unsigned_to_nat(1u);
return v___x_1100_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx(v_x_1101_);
lean_dec_ref(v_x_1101_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_1103_, lean_object* v_k_1104_){
_start:
{
lean_object* v_value_1105_; lean_object* v___x_1106_; 
v_value_1105_ = lean_ctor_get(v_t_1103_, 0);
lean_inc_ref(v_value_1105_);
lean_dec_ref(v_t_1103_);
v___x_1106_ = lean_apply_1(v_k_1104_, v_value_1105_);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim(lean_object* v_motive_1107_, lean_object* v_ctorIdx_1108_, lean_object* v_t_1109_, lean_object* v_h_1110_, lean_object* v_k_1111_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_1109_, v_k_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_1113_, lean_object* v_ctorIdx_1114_, lean_object* v_t_1115_, lean_object* v_h_1116_, lean_object* v_k_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim(v_motive_1113_, v_ctorIdx_1114_, v_t_1115_, v_h_1116_, v_k_1117_);
lean_dec(v_ctorIdx_1114_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object* v_t_1119_, lean_object* v_writeFileOptions_1120_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_1119_, v_writeFileOptions_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object* v_motive_1122_, lean_object* v_t_1123_, lean_object* v_h_1124_, lean_object* v_writeFileOptions_1125_){
_start:
{
lean_object* v___x_1126_; 
v___x_1126_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_1123_, v_writeFileOptions_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_1127_, lean_object* v_domString_1128_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_1127_, v_domString_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_domString_elim(lean_object* v_motive_1130_, lean_object* v_t_1131_, lean_object* v_h_1132_, lean_object* v_domString_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_1131_, v_domString_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriteFileOptionsOrDOMString___lam__0(lean_object* v_x_1135_){
_start:
{
if (lean_obj_tag(v_x_1135_) == 0)
{
lean_object* v_value_1136_; lean_object* v_encoding_1137_; lean_object* v_signal_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1157_; 
v_value_1136_ = lean_ctor_get(v_x_1135_, 0);
lean_inc_ref(v_value_1136_);
lean_dec_ref_known(v_x_1135_, 1);
v_encoding_1137_ = lean_ctor_get(v_value_1136_, 0);
v_signal_1138_ = lean_ctor_get(v_value_1136_, 1);
v_isSharedCheck_1157_ = !lean_is_exclusive(v_value_1136_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1140_ = v_value_1136_;
v_isShared_1141_ = v_isSharedCheck_1157_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_signal_1138_);
lean_inc(v_encoding_1137_);
lean_dec(v_value_1136_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1157_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___f_1142_; lean_object* v___f_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1147_; 
v___f_1142_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1143_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_1144_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1145_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1142_, v_encoding_1137_);
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 1, v___x_1145_);
lean_ctor_set(v___x_1140_, 0, v___x_1144_);
v___x_1147_ = v___x_1140_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1144_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v___x_1145_);
v___x_1147_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1148_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1149_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1143_, v_signal_1138_);
v___x_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1148_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = lean_unsigned_to_nat(2u);
v___x_1152_ = lean_mk_empty_array_with_capacity(v___x_1151_);
v___x_1153_ = lean_array_push(v___x_1152_, v___x_1147_);
v___x_1154_ = lean_array_push(v___x_1153_, v___x_1150_);
v___x_1155_ = l_Lasm_JS_Web_Internal_fields(v___x_1154_);
lean_dec_ref(v___x_1154_);
return v___x_1155_;
}
}
}
else
{
lean_object* v_value_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
v_value_1158_ = lean_ctor_get(v_x_1135_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_x_1135_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v_x_1135_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_value_1158_);
lean_dec(v_x_1135_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
lean_ctor_set_tag(v___x_1160_, 4);
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_value_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleWriteFileOptionsFileHandleWriteFileOptionsOrDOMString___lam__0(lean_object* v_value_1167_){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1168_, 0, v_value_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFileHandleWriteFileOptionsOrDOMString___lam__0(lean_object* v_value_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1171_, 0, v_value_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFileHandleWriterOptions___lam__0(lean_object* v___f_1173_, lean_object* v___f_1174_, lean_object* v___f_1175_, lean_object* v_d_1176_){
_start:
{
lean_object* v_autoClose_1177_; lean_object* v_start_1178_; lean_object* v_limit_1179_; lean_object* v_chunkSize_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v_autoClose_1177_ = lean_ctor_get(v_d_1176_, 0);
lean_inc(v_autoClose_1177_);
v_start_1178_ = lean_ctor_get(v_d_1176_, 1);
lean_inc(v_start_1178_);
v_limit_1179_ = lean_ctor_get(v_d_1176_, 2);
lean_inc(v_limit_1179_);
v_chunkSize_1180_ = lean_ctor_get(v_d_1176_, 3);
lean_inc(v_chunkSize_1180_);
lean_dec_ref(v_d_1176_);
v___x_1181_ = lean_mk_string_unchecked("autoClose", 9, 9);
v___x_1182_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1173_, v_autoClose_1177_);
v___x_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1181_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
v___x_1184_ = lean_mk_string_unchecked("start", 5, 5);
lean_inc_ref(v___f_1174_);
v___x_1185_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1174_, v_start_1178_);
v___x_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1184_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
v___x_1187_ = lean_mk_string_unchecked("limit", 5, 5);
v___x_1188_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1175_, v_limit_1179_);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v___x_1190_ = lean_mk_string_unchecked("chunkSize", 9, 9);
v___x_1191_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1174_, v_chunkSize_1180_);
v___x_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1190_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
v___x_1193_ = lean_unsigned_to_nat(4u);
v___x_1194_ = lean_mk_empty_array_with_capacity(v___x_1193_);
v___x_1195_ = lean_array_push(v___x_1194_, v___x_1183_);
v___x_1196_ = lean_array_push(v___x_1195_, v___x_1186_);
v___x_1197_ = lean_array_push(v___x_1196_, v___x_1189_);
v___x_1198_ = lean_array_push(v___x_1197_, v___x_1192_);
v___x_1199_ = l_Lasm_JS_Web_Internal_fields(v___x_1198_);
lean_dec_ref(v___x_1198_);
return v___x_1199_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFileHandleWriterOptions(void){
_start:
{
lean_object* v___f_1200_; lean_object* v___f_1201_; lean_object* v___f_1202_; lean_object* v___f_1203_; 
v___f_1200_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1201_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1202_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1203_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFileHandleWriterOptions___lam__0), 4, 3);
lean_closure_set(v___f_1203_, 0, v___f_1200_);
lean_closure_set(v___f_1203_, 1, v___f_1201_);
lean_closure_set(v___f_1203_, 2, v___f_1202_);
return v___f_1203_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsFSWatcherChangeListener(void){
_start:
{
lean_object* v___f_1205_; lean_object* v___x_1206_; uint8_t v___x_1207_; lean_object* v___x_1208_; 
v___f_1205_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_1206_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.FSWatcher.ChangeListener", 40, 40);
v___x_1207_ = 0;
v___x_1208_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1208_, 0, v___f_1205_);
lean_ctor_set(v___x_1208_, 1, v___x_1206_);
lean_ctor_set_uint8(v___x_1208_, sizeof(void*)*2, v___x_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__1(lean_object* v_f_1209_, lean_object* v_a_1210_, lean_object* v___f_1211_, lean_object* v_x_1212_){
_start:
{
if (lean_obj_tag(v_x_1212_) == 0)
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1222_; 
lean_dec_ref(v___f_1211_);
lean_dec_ref(v_a_1210_);
lean_dec_ref(v_f_1209_);
v_a_1214_ = lean_ctor_get(v_x_1212_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1216_ = v_x_1212_;
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v_x_1212_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1222_;
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
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1224_; uint8_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v_a_1223_ = lean_ctor_get(v_x_1212_, 0);
lean_inc(v_a_1223_);
lean_dec_ref_known(v_x_1212_, 1);
v___x_1224_ = lean_unsigned_to_nat(0u);
v___x_1225_ = 0;
v___x_1226_ = lean_apply_3(v_f_1209_, v_a_1210_, v_a_1223_, lean_box(0));
v___x_1227_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1224_, v___x_1225_, v___x_1226_, v___f_1211_);
return v___x_1227_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__1___boxed(lean_object* v_f_1228_, lean_object* v_a_1229_, lean_object* v___f_1230_, lean_object* v_x_1231_, lean_object* v___y_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__1(v_f_1228_, v_a_1229_, v___f_1230_, v_x_1231_);
return v_res_1233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0_spec__0(lean_object* v_context_1234_, lean_object* v_d_1235_){
_start:
{
lean_object* v___y_1238_; lean_object* v___y_1239_; 
switch(lean_obj_tag(v_d_1235_))
{
case 4:
{
lean_object* v_s_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1251_; 
v_s_1243_ = lean_ctor_get(v_d_1235_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v_d_1235_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1245_ = v_d_1235_;
v_isShared_1246_ = v_isSharedCheck_1251_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_s_1243_);
lean_dec(v_d_1235_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1251_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set_tag(v___x_1245_, 0);
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_s_1243_);
v___x_1248_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
return v___x_1249_;
}
}
}
case 6:
{
lean_object* v_b_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1260_; 
v_b_1252_ = lean_ctor_get(v_d_1235_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_d_1235_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1254_ = v_d_1235_;
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_b_1252_);
lean_dec(v_d_1235_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set_tag(v___x_1254_, 1);
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_b_1252_);
v___x_1257_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
lean_object* v___x_1258_; 
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
return v___x_1258_;
}
}
}
default: 
{
lean_object* v___x_1261_; lean_object* v_received_1263_; 
v___x_1261_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_1235_) == 9)
{
lean_object* v_value_1279_; lean_object* v_description_1280_; uint8_t v___x_1281_; 
v_value_1279_ = lean_ctor_get(v_d_1235_, 0);
v_description_1280_ = lean_ctor_get(v_d_1235_, 1);
v___x_1281_ = lean_string_dec_eq(v_description_1280_, v___x_1261_);
if (v___x_1281_ == 0)
{
goto v___jp_1277_;
}
else
{
uint32_t v___x_1282_; uint64_t v___x_1283_; lean_object* v___x_1284_; uint32_t v___x_1285_; lean_object* v___x_1286_; 
lean_inc_n(v_value_1279_, 2);
lean_dec_ref_known(v_d_1235_, 2);
v___x_1282_ = 206;
v___x_1283_ = 0ULL;
lean_inc_ref(v___x_1261_);
v___x_1284_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1284_, 0, v_value_1279_);
lean_ctor_set(v___x_1284_, 1, v___x_1261_);
v___x_1285_ = lasm_js_value_handle(v_value_1279_);
lean_dec(v_value_1279_);
v___x_1286_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1282_, v___x_1283_, v___x_1284_, v___x_1285_);
lean_dec_ref_known(v___x_1284_, 2);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; uint8_t v___x_1288_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1287_);
lean_dec_ref_known(v___x_1286_, 1);
v___x_1288_ = lean_string_validate_utf8(v_a_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_dec(v_a_1287_);
v___x_1289_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_1290_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_1291_ = lean_unsigned_to_nat(193u);
v___x_1292_ = lean_unsigned_to_nat(46u);
v___x_1293_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_1294_ = l_mkPanicMessageWithDecl(v___x_1289_, v___x_1290_, v___x_1291_, v___x_1292_, v___x_1293_);
lean_dec_ref(v___x_1293_);
lean_dec_ref(v___x_1290_);
lean_dec_ref(v___x_1289_);
v___x_1295_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1294_);
v_received_1263_ = v___x_1295_;
goto v___jp_1262_;
}
else
{
lean_object* v___x_1296_; 
v___x_1296_ = lean_string_from_utf8_unchecked(v_a_1287_);
v_received_1263_ = v___x_1296_;
goto v___jp_1262_;
}
}
else
{
lean_object* v___x_1297_; 
lean_dec_ref_known(v___x_1286_, 1);
v___x_1297_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_1263_ = v___x_1297_;
goto v___jp_1262_;
}
}
}
else
{
goto v___jp_1277_;
}
v___jp_1262_:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1264_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_1265_ = lean_string_append(v___x_1264_, v_context_1234_);
v___x_1266_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_1267_ = lean_string_append(v___x_1265_, v___x_1266_);
lean_dec_ref(v___x_1266_);
v___x_1268_ = lean_mk_string_unchecked("Lasm.JS.Node.DOMStringOrUint8Array", 34, 34);
v___x_1269_ = lean_string_append(v___x_1267_, v___x_1268_);
lean_dec_ref(v___x_1268_);
v___x_1270_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_1271_ = lean_string_append(v___x_1269_, v___x_1270_);
lean_dec_ref(v___x_1270_);
v___x_1272_ = lean_string_append(v___x_1271_, v_received_1263_);
lean_dec_ref(v_received_1263_);
v___x_1273_ = lean_string_utf8_byte_size(v___x_1261_);
v___x_1274_ = lean_unsigned_to_nat(0u);
v___x_1275_ = lean_nat_dec_eq(v___x_1273_, v___x_1274_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; 
lean_dec_ref(v___x_1261_);
v___x_1276_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_1238_ = v___x_1272_;
v___y_1239_ = v___x_1276_;
goto v___jp_1237_;
}
else
{
v___y_1238_ = v___x_1272_;
v___y_1239_ = v___x_1261_;
goto v___jp_1237_;
}
}
v___jp_1277_:
{
lean_object* v___x_1278_; 
v___x_1278_ = l_Lasm_JS_Data_describe(v_d_1235_);
v_received_1263_ = v___x_1278_;
goto v___jp_1262_;
}
}
}
v___jp_1237_:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1240_ = lean_string_append(v___y_1238_, v___y_1239_);
v___x_1241_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
v___x_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1241_);
return v___x_1242_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1298_, lean_object* v_d_1299_, lean_object* v_a_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0_spec__0(v_context_1298_, v_d_1299_);
lean_dec_ref(v_context_1298_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0(lean_object* v_args_1302_, lean_object* v_i_1303_){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; 
v___x_1305_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_1306_ = lean_unsigned_to_nat(1u);
v___x_1307_ = lean_nat_add(v_i_1303_, v___x_1306_);
v___x_1308_ = l_Nat_reprFast(v___x_1307_);
v___x_1309_ = lean_string_append(v___x_1305_, v___x_1308_);
lean_dec_ref(v___x_1308_);
v___x_1310_ = lean_array_get_size(v_args_1302_);
v___x_1311_ = lean_nat_dec_lt(v_i_1303_, v___x_1310_);
if (v___x_1311_ == 0)
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = lean_box(0);
v___x_1313_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0_spec__0(v___x_1309_, v___x_1312_);
lean_dec_ref(v___x_1309_);
return v___x_1313_;
}
else
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = lean_array_fget_borrowed(v_args_1302_, v_i_1303_);
lean_inc(v___x_1314_);
v___x_1315_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0_spec__0(v___x_1309_, v___x_1314_);
lean_dec_ref(v___x_1309_);
return v___x_1315_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0___boxed(lean_object* v_args_1316_, lean_object* v_i_1317_, lean_object* v_a_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0(v_args_1316_, v_i_1317_);
lean_dec(v_i_1317_);
lean_dec_ref(v_args_1316_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__0(lean_object* v_f_1320_, lean_object* v___f_1321_, lean_object* v_args_1322_, lean_object* v_x_1323_){
_start:
{
if (lean_obj_tag(v_x_1323_) == 0)
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1333_; 
lean_dec_ref(v___f_1321_);
lean_dec_ref(v_f_1320_);
v_a_1325_ = lean_ctor_get(v_x_1323_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v_x_1323_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1327_ = v_x_1323_;
v_isShared_1328_ = v_isSharedCheck_1333_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v_x_1323_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1333_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1331_; 
v___x_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
return v___x_1331_;
}
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1355_; 
v_a_1334_ = lean_ctor_get(v_x_1323_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v_x_1323_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1336_ = v_x_1323_;
v_isShared_1337_ = v_isSharedCheck_1355_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v_x_1323_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1355_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___f_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; lean_object* v_val_1343_; lean_object* v___x_1346_; 
v___f_1338_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1338_, 0, v_f_1320_);
lean_closure_set(v___f_1338_, 1, v_a_1334_);
lean_closure_set(v___f_1338_, 2, v___f_1321_);
v___x_1339_ = lean_unsigned_to_nat(1u);
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = 0;
v___x_1346_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0(v_args_1322_, v___x_1339_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1349_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1347_);
lean_dec_ref_known(v___x_1346_, 1);
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v_a_1347_);
v___x_1349_ = v___x_1336_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1347_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
v_val_1343_ = v___x_1349_;
goto v___jp_1342_;
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; 
v_a_1351_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1346_, 1);
if (v_isShared_1337_ == 0)
{
lean_ctor_set_tag(v___x_1336_, 0);
lean_ctor_set(v___x_1336_, 0, v_a_1351_);
v___x_1353_ = v___x_1336_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1351_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
v_val_1343_ = v___x_1353_;
goto v___jp_1342_;
}
}
v___jp_1342_:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1344_, 0, v_val_1343_);
v___x_1345_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1340_, v___x_1341_, v___x_1344_, v___f_1338_);
return v___x_1345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__0___boxed(lean_object* v_f_1356_, lean_object* v___f_1357_, lean_object* v_args_1358_, lean_object* v_x_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__0(v_f_1356_, v___f_1357_, v_args_1358_, v_x_1359_);
lean_dec_ref(v_args_1358_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__2(lean_object* v_f_1362_, lean_object* v___f_1363_, lean_object* v_args_1364_){
_start:
{
lean_object* v___f_1366_; lean_object* v___x_1367_; uint8_t v___x_1368_; lean_object* v_val_1370_; lean_object* v___x_1373_; 
lean_inc_ref(v_args_1364_);
v___f_1366_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1366_, 0, v_f_1362_);
lean_closure_set(v___f_1366_, 1, v___f_1363_);
lean_closure_set(v___f_1366_, 2, v_args_1364_);
v___x_1367_ = lean_unsigned_to_nat(0u);
v___x_1368_ = 0;
v___x_1373_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_net_Socket_ConnectionAttemptListener_ofFn_spec__2(v_args_1364_, v___x_1367_);
lean_dec_ref(v_args_1364_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1381_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1376_ = v___x_1373_;
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1373_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1379_; 
if (v_isShared_1377_ == 0)
{
lean_ctor_set_tag(v___x_1376_, 1);
v___x_1379_ = v___x_1376_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1374_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
v_val_1370_ = v___x_1379_;
goto v___jp_1369_;
}
}
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
v_a_1382_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1373_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1373_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 0);
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
v_val_1370_ = v___x_1387_;
goto v___jp_1369_;
}
}
}
v___jp_1369_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1371_, 0, v_val_1370_);
v___x_1372_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1367_, v___x_1368_, v___x_1371_, v___f_1366_);
return v___x_1372_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__2___boxed(lean_object* v_f_1390_, lean_object* v___f_1391_, lean_object* v_args_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__2(v_f_1390_, v___f_1391_, v_args_1392_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn(lean_object* v_f_1395_){
_start:
{
lean_object* v___f_1397_; lean_object* v___f_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___f_1397_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1398_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1398_, 0, v_f_1395_);
lean_closure_set(v___f_1398_, 1, v___f_1397_);
v___x_1399_ = lean_unsigned_to_nat(0u);
v___x_1400_ = l_Lasm_JS_Function_ofFn(v___f_1398_, v___x_1399_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1400_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1400_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
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
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
else
{
lean_object* v_a_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
v_a_1409_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1411_ = v___x_1400_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_a_1409_);
lean_dec(v___x_1400_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1409_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn___boxed(lean_object* v_f_1417_, lean_object* v_a_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn(v_f_1417_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn___lam__0(lean_object* v_f_1420_, lean_object* v_args_1421_){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = lean_unsigned_to_nat(0u);
v___x_1424_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_net_Socket_ConnectionAttemptListener_ofFn_spec__2(v_args_1421_, v___x_1423_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1424_, 1);
v___x_1426_ = lean_unsigned_to_nat(1u);
v___x_1427_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofFn_spec__0(v_args_1421_, v___x_1426_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_object* v_a_1428_; lean_object* v___x_1429_; 
v_a_1428_ = lean_ctor_get(v___x_1427_, 0);
lean_inc(v_a_1428_);
lean_dec_ref_known(v___x_1427_, 1);
v___x_1429_ = lean_apply_3(v_f_1420_, v_a_1425_, v_a_1428_, lean_box(0));
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1437_; 
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; 
v_unused_1438_ = lean_ctor_get(v___x_1429_, 0);
lean_dec(v_unused_1438_);
v___x_1431_ = v___x_1429_;
v_isShared_1432_ = v_isSharedCheck_1437_;
goto v_resetjp_1430_;
}
else
{
lean_dec(v___x_1429_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1437_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1433_; lean_object* v___x_1435_; 
v___x_1433_ = lean_box(0);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1433_);
v___x_1435_ = v___x_1431_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1433_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
else
{
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
v_a_1439_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1429_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1429_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
lean_dec(v_a_1425_);
lean_dec_ref(v_f_1420_);
v_a_1447_ = lean_ctor_get(v___x_1427_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1427_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1427_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1427_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
lean_dec_ref(v_f_1420_);
v_a_1455_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1424_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1424_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
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
return v___x_1460_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn___lam__0___boxed(lean_object* v_f_1463_, lean_object* v_args_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn___lam__0(v_f_1463_, v_args_1464_);
lean_dec_ref(v_args_1464_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn(lean_object* v_f_1467_){
_start:
{
lean_object* v___f_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___f_1469_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1469_, 0, v_f_1467_);
v___x_1470_ = lean_unsigned_to_nat(0u);
v___x_1471_ = l_Lasm_JS_Function_ofSyncFn(v___f_1469_, v___x_1470_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1471_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1471_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
else
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1487_; 
v_a_1480_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1482_ = v___x_1471_;
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1471_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn___boxed(lean_object* v_f_1488_, lean_object* v_a_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l_Lasm_JS_Node_fs_FSWatcher_ChangeListener_ofSyncFn(v_f_1488_);
return v_res_1490_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsFSWatcherCloseListener(void){
_start:
{
lean_object* v___f_1492_; lean_object* v___x_1493_; uint8_t v___x_1494_; lean_object* v___x_1495_; 
v___f_1492_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_1493_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.FSWatcher.CloseListener", 39, 39);
v___x_1494_ = 0;
v___x_1495_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1495_, 0, v___f_1492_);
lean_ctor_set(v___x_1495_, 1, v___x_1493_);
lean_ctor_set_uint8(v___x_1495_, sizeof(void*)*2, v___x_1494_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofFn(lean_object* v_f_1496_){
_start:
{
lean_object* v___f_1498_; lean_object* v___f_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___f_1498_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1499_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1499_, 0, v_f_1496_);
lean_closure_set(v___f_1499_, 1, v___f_1498_);
v___x_1500_ = lean_unsigned_to_nat(0u);
v___x_1501_ = l_Lasm_JS_Function_ofFn(v___f_1499_, v___x_1500_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1509_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1504_ = v___x_1501_;
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1501_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1507_; 
if (v_isShared_1505_ == 0)
{
v___x_1507_ = v___x_1504_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_a_1502_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
else
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1517_; 
v_a_1510_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1512_ = v___x_1501_;
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1501_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1517_;
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
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_a_1510_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofFn___boxed(lean_object* v_f_1518_, lean_object* v_a_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofFn(v_f_1518_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofSyncFn(lean_object* v_f_1521_){
_start:
{
lean_object* v___f_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___f_1523_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1523_, 0, v_f_1521_);
v___x_1524_ = lean_unsigned_to_nat(0u);
v___x_1525_ = l_Lasm_JS_Function_ofSyncFn(v___f_1523_, v___x_1524_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1533_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1528_ = v___x_1525_;
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1525_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_a_1526_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
v_a_1534_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1525_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1525_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofSyncFn___boxed(lean_object* v_f_1542_, lean_object* v_a_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_Lasm_JS_Node_fs_FSWatcher_CloseListener_ofSyncFn(v_f_1542_);
return v_res_1544_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsFSWatcherErrorListener(void){
_start:
{
lean_object* v___f_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; lean_object* v___x_1549_; 
v___f_1546_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_1547_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.FSWatcher.ErrorListener", 39, 39);
v___x_1548_ = 0;
v___x_1549_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1549_, 0, v___f_1546_);
lean_ctor_set(v___x_1549_, 1, v___x_1547_);
lean_ctor_set_uint8(v___x_1549_, sizeof(void*)*2, v___x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__1(lean_object* v_f_1550_, lean_object* v___f_1551_, lean_object* v_x_1552_){
_start:
{
if (lean_obj_tag(v_x_1552_) == 0)
{
lean_object* v___x_1554_; 
lean_dec_ref(v___f_1551_);
lean_dec_ref(v_f_1550_);
v___x_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1554_, 0, v_x_1552_);
return v___x_1554_;
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v_a_1555_ = lean_ctor_get(v_x_1552_, 0);
lean_inc(v_a_1555_);
lean_dec_ref_known(v_x_1552_, 1);
v___x_1556_ = lean_unsigned_to_nat(0u);
v___x_1557_ = 0;
v___x_1558_ = lean_apply_2(v_f_1550_, v_a_1555_, lean_box(0));
v___x_1559_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1556_, v___x_1557_, v___x_1558_, v___f_1551_);
return v___x_1559_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__1___boxed(lean_object* v_f_1560_, lean_object* v___f_1561_, lean_object* v_x_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__1(v_f_1560_, v___f_1561_, v_x_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__0(lean_object* v___f_1565_, lean_object* v_args_1566_){
_start:
{
lean_object* v___x_1568_; uint8_t v___x_1569_; lean_object* v_val_1571_; lean_object* v___x_1574_; lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
v___x_1568_ = lean_unsigned_to_nat(0u);
v___x_1569_ = 0;
v___x_1574_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0(v_args_1566_, v___x_1568_);
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1574_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1574_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v___jp_1570_:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1572_, 0, v_val_1571_);
v___x_1573_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1568_, v___x_1569_, v___x_1572_, v___f_1565_);
return v___x_1573_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
lean_ctor_set_tag(v___x_1577_, 1);
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
v_val_1571_ = v___x_1580_;
goto v___jp_1570_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__0___boxed(lean_object* v___f_1583_, lean_object* v_args_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__0(v___f_1583_, v_args_1584_);
lean_dec_ref(v_args_1584_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn(lean_object* v_f_1587_){
_start:
{
lean_object* v___f_1589_; lean_object* v___f_1590_; lean_object* v___f_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___f_1589_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1590_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1590_, 0, v_f_1587_);
lean_closure_set(v___f_1590_, 1, v___f_1589_);
v___f_1591_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1591_, 0, v___f_1590_);
v___x_1592_ = lean_unsigned_to_nat(0u);
v___x_1593_ = l_Lasm_JS_Function_ofFn(v___f_1591_, v___x_1592_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1593_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1593_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1594_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
v_a_1602_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1593_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1593_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
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
return v___x_1607_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn___boxed(lean_object* v_f_1610_, lean_object* v_a_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofFn(v_f_1610_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn___lam__0(lean_object* v_f_1613_, lean_object* v_args_1614_){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v_a_1618_; lean_object* v___x_1619_; 
v___x_1616_ = lean_unsigned_to_nat(0u);
v___x_1617_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0(v_args_1614_, v___x_1616_);
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
lean_inc(v_a_1618_);
lean_dec_ref(v___x_1617_);
v___x_1619_ = lean_apply_2(v_f_1613_, v_a_1618_, lean_box(0));
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1627_; 
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1627_ == 0)
{
lean_object* v_unused_1628_; 
v_unused_1628_ = lean_ctor_get(v___x_1619_, 0);
lean_dec(v_unused_1628_);
v___x_1621_ = v___x_1619_;
v_isShared_1622_ = v_isSharedCheck_1627_;
goto v_resetjp_1620_;
}
else
{
lean_dec(v___x_1619_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1627_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1623_; lean_object* v___x_1625_; 
v___x_1623_ = lean_box(0);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 0, v___x_1623_);
v___x_1625_ = v___x_1621_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
else
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
v_a_1629_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1619_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1619_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn___lam__0___boxed(lean_object* v_f_1637_, lean_object* v_args_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn___lam__0(v_f_1637_, v_args_1638_);
lean_dec_ref(v_args_1638_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn(lean_object* v_f_1641_){
_start:
{
lean_object* v___f_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___f_1643_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1643_, 0, v_f_1641_);
v___x_1644_ = lean_unsigned_to_nat(0u);
v___x_1645_ = l_Lasm_JS_Function_ofSyncFn(v___f_1643_, v___x_1644_);
if (lean_obj_tag(v___x_1645_) == 0)
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1653_; 
v_a_1646_ = lean_ctor_get(v___x_1645_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1645_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1648_ = v___x_1645_;
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1645_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
v_a_1654_ = lean_ctor_get(v___x_1645_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1645_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1645_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1645_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn___boxed(lean_object* v_f_1662_, lean_object* v_a_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lasm_JS_Node_fs_FSWatcher_ErrorListener_ofSyncFn(v_f_1662_);
return v_res_1664_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsReadStreamCloseListener(void){
_start:
{
lean_object* v___f_1666_; lean_object* v___x_1667_; uint8_t v___x_1668_; lean_object* v___x_1669_; 
v___f_1666_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_1667_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.ReadStream.CloseListener", 40, 40);
v___x_1668_ = 0;
v___x_1669_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1669_, 0, v___f_1666_);
lean_ctor_set(v___x_1669_, 1, v___x_1667_);
lean_ctor_set_uint8(v___x_1669_, sizeof(void*)*2, v___x_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofFn(lean_object* v_f_1670_){
_start:
{
lean_object* v___f_1672_; lean_object* v___f_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___f_1672_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1673_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1673_, 0, v_f_1670_);
lean_closure_set(v___f_1673_, 1, v___f_1672_);
v___x_1674_ = lean_unsigned_to_nat(0u);
v___x_1675_ = l_Lasm_JS_Function_ofFn(v___f_1673_, v___x_1674_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___x_1675_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1675_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
else
{
lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1691_; 
v_a_1684_ = lean_ctor_get(v___x_1675_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1686_ = v___x_1675_;
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v___x_1675_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1689_; 
if (v_isShared_1687_ == 0)
{
v___x_1689_ = v___x_1686_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_a_1684_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofFn___boxed(lean_object* v_f_1692_, lean_object* v_a_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofFn(v_f_1692_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofSyncFn(lean_object* v_f_1695_){
_start:
{
lean_object* v___f_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___f_1697_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1697_, 0, v_f_1695_);
v___x_1698_ = lean_unsigned_to_nat(0u);
v___x_1699_ = l_Lasm_JS_Function_ofSyncFn(v___f_1697_, v___x_1698_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1699_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1699_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1700_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1715_; 
v_a_1708_ = lean_ctor_get(v___x_1699_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1710_ = v___x_1699_;
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1699_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1713_; 
if (v_isShared_1711_ == 0)
{
v___x_1713_ = v___x_1710_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1708_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofSyncFn___boxed(lean_object* v_f_1716_, lean_object* v_a_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Lasm_JS_Node_fs_ReadStream_CloseListener_ofSyncFn(v_f_1716_);
return v_res_1718_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsReadStreamOpenListener(void){
_start:
{
lean_object* v___f_1720_; lean_object* v___x_1721_; uint8_t v___x_1722_; lean_object* v___x_1723_; 
v___f_1720_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_1721_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.ReadStream.OpenListener", 39, 39);
v___x_1722_ = 0;
v___x_1723_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1723_, 0, v___f_1720_);
lean_ctor_set(v___x_1723_, 1, v___x_1721_);
lean_ctor_set_uint8(v___x_1723_, sizeof(void*)*2, v___x_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__1(lean_object* v_f_1724_, lean_object* v___f_1725_, lean_object* v_x_1726_){
_start:
{
if (lean_obj_tag(v_x_1726_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1736_; 
lean_dec_ref(v___f_1725_);
lean_dec_ref(v_f_1724_);
v_a_1728_ = lean_ctor_get(v_x_1726_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_x_1726_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1730_ = v_x_1726_;
v_isShared_1731_ = v_isSharedCheck_1736_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v_x_1726_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1736_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
if (v_isShared_1731_ == 0)
{
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1728_);
v___x_1733_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
lean_object* v___x_1734_; 
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1733_);
return v___x_1734_;
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
v_a_1737_ = lean_ctor_get(v_x_1726_, 0);
lean_inc(v_a_1737_);
lean_dec_ref_known(v_x_1726_, 1);
v___x_1738_ = lean_unsigned_to_nat(0u);
v___x_1739_ = 0;
v___x_1740_ = lean_apply_2(v_f_1724_, v_a_1737_, lean_box(0));
v___x_1741_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1738_, v___x_1739_, v___x_1740_, v___f_1725_);
return v___x_1741_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__1___boxed(lean_object* v_f_1742_, lean_object* v___f_1743_, lean_object* v_x_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__1(v_f_1742_, v___f_1743_, v_x_1744_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0_spec__0(lean_object* v_context_1747_, lean_object* v_d_1748_){
_start:
{
lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1757_; lean_object* v_received_1758_; lean_object* v___y_1777_; lean_object* v_a_1780_; 
switch(lean_obj_tag(v_d_1748_))
{
case 3:
{
double v_n_1809_; lean_object* v___x_1810_; 
v_n_1809_ = lean_ctor_get_float(v_d_1748_, 0);
v___x_1810_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1809_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v___x_1811_; 
v___x_1811_ = lean_mk_string_unchecked("not an integer", 14, 14);
v_a_1780_ = v___x_1811_;
goto v___jp_1779_;
}
else
{
lean_object* v_val_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_dec_ref_known(v_d_1748_, 0);
v_val_1812_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1810_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_val_1812_);
lean_dec(v___x_1810_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
lean_ctor_set_tag(v___x_1814_, 0);
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_val_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
case 5:
{
lean_object* v_i_1820_; lean_object* v___x_1821_; 
v_i_1820_ = lean_ctor_get(v_d_1748_, 0);
lean_inc(v_i_1820_);
lean_dec_ref_known(v_d_1748_, 1);
v___x_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1821_, 0, v_i_1820_);
return v___x_1821_;
}
default: 
{
lean_object* v___x_1822_; 
v___x_1822_ = lean_mk_string_unchecked("", 0, 0);
v_a_1780_ = v___x_1822_;
goto v___jp_1779_;
}
}
v___jp_1750_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1753_ = lean_string_append(v___y_1751_, v___y_1752_);
lean_dec_ref(v___y_1752_);
v___x_1754_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
v___x_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
return v___x_1755_;
}
v___jp_1756_:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; uint8_t v___x_1770_; 
v___x_1759_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_1760_ = lean_string_append(v___x_1759_, v_context_1747_);
v___x_1761_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_1762_ = lean_string_append(v___x_1760_, v___x_1761_);
lean_dec_ref(v___x_1761_);
v___x_1763_ = lean_mk_string_unchecked("Int", 3, 3);
v___x_1764_ = lean_string_append(v___x_1762_, v___x_1763_);
lean_dec_ref(v___x_1763_);
v___x_1765_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_1766_ = lean_string_append(v___x_1764_, v___x_1765_);
lean_dec_ref(v___x_1765_);
v___x_1767_ = lean_string_append(v___x_1766_, v_received_1758_);
lean_dec_ref(v_received_1758_);
v___x_1768_ = lean_string_utf8_byte_size(v___y_1757_);
v___x_1769_ = lean_unsigned_to_nat(0u);
v___x_1770_ = lean_nat_dec_eq(v___x_1768_, v___x_1769_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1771_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_1772_ = lean_string_append(v___x_1771_, v___y_1757_);
v___x_1773_ = lean_mk_string_unchecked(")", 1, 1);
v___x_1774_ = lean_string_append(v___x_1772_, v___x_1773_);
lean_dec_ref(v___x_1773_);
v___y_1751_ = v___x_1767_;
v___y_1752_ = v___x_1774_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1775_; 
v___x_1775_ = lean_mk_string_unchecked("", 0, 0);
v___y_1751_ = v___x_1767_;
v___y_1752_ = v___x_1775_;
goto v___jp_1750_;
}
}
v___jp_1776_:
{
lean_object* v___x_1778_; 
v___x_1778_ = l_Lasm_JS_Data_describe(v_d_1748_);
v___y_1757_ = v___y_1777_;
v_received_1758_ = v___x_1778_;
goto v___jp_1756_;
}
v___jp_1779_:
{
if (lean_obj_tag(v_d_1748_) == 9)
{
lean_object* v_value_1781_; lean_object* v_description_1782_; lean_object* v___x_1783_; uint8_t v___x_1784_; 
v_value_1781_ = lean_ctor_get(v_d_1748_, 0);
v_description_1782_ = lean_ctor_get(v_d_1748_, 1);
v___x_1783_ = lean_mk_string_unchecked("", 0, 0);
v___x_1784_ = lean_string_dec_eq(v_description_1782_, v___x_1783_);
if (v___x_1784_ == 0)
{
lean_dec_ref(v___x_1783_);
v___y_1777_ = v_a_1780_;
goto v___jp_1776_;
}
else
{
lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1806_; 
lean_inc(v_value_1781_);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_d_1748_);
if (v_isSharedCheck_1806_ == 0)
{
lean_object* v_unused_1807_; lean_object* v_unused_1808_; 
v_unused_1807_ = lean_ctor_get(v_d_1748_, 1);
lean_dec(v_unused_1807_);
v_unused_1808_ = lean_ctor_get(v_d_1748_, 0);
lean_dec(v_unused_1808_);
v___x_1786_ = v_d_1748_;
v_isShared_1787_ = v_isSharedCheck_1806_;
goto v_resetjp_1785_;
}
else
{
lean_dec(v_d_1748_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1806_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
uint32_t v___x_1788_; uint64_t v___x_1789_; lean_object* v___x_1791_; 
v___x_1788_ = 206;
v___x_1789_ = 0ULL;
lean_inc(v_value_1781_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 1, v___x_1783_);
v___x_1791_ = v___x_1786_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_value_1781_);
lean_ctor_set(v_reuseFailAlloc_1805_, 1, v___x_1783_);
v___x_1791_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
uint32_t v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = lasm_js_value_handle(v_value_1781_);
lean_dec(v_value_1781_);
v___x_1793_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1788_, v___x_1789_, v___x_1791_, v___x_1792_);
lean_dec_ref(v___x_1791_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; uint8_t v___x_1795_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1794_);
lean_dec_ref_known(v___x_1793_, 1);
v___x_1795_ = lean_string_validate_utf8(v_a_1794_);
if (v___x_1795_ == 0)
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_dec(v_a_1794_);
v___x_1796_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_1797_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_1798_ = lean_unsigned_to_nat(193u);
v___x_1799_ = lean_unsigned_to_nat(46u);
v___x_1800_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_1801_ = l_mkPanicMessageWithDecl(v___x_1796_, v___x_1797_, v___x_1798_, v___x_1799_, v___x_1800_);
lean_dec_ref(v___x_1800_);
lean_dec_ref(v___x_1797_);
lean_dec_ref(v___x_1796_);
v___x_1802_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1801_);
v___y_1757_ = v_a_1780_;
v_received_1758_ = v___x_1802_;
goto v___jp_1756_;
}
else
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_string_from_utf8_unchecked(v_a_1794_);
v___y_1757_ = v_a_1780_;
v_received_1758_ = v___x_1803_;
goto v___jp_1756_;
}
}
else
{
lean_object* v___x_1804_; 
lean_dec_ref_known(v___x_1793_, 1);
v___x_1804_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v___y_1757_ = v_a_1780_;
v_received_1758_ = v___x_1804_;
goto v___jp_1756_;
}
}
}
}
}
else
{
v___y_1777_ = v_a_1780_;
goto v___jp_1776_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1823_, lean_object* v_d_1824_, lean_object* v_a_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0_spec__0(v_context_1823_, v_d_1824_);
lean_dec_ref(v_context_1823_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0(lean_object* v_args_1827_, lean_object* v_i_1828_){
_start:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1830_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_1831_ = lean_unsigned_to_nat(1u);
v___x_1832_ = lean_nat_add(v_i_1828_, v___x_1831_);
v___x_1833_ = l_Nat_reprFast(v___x_1832_);
v___x_1834_ = lean_string_append(v___x_1830_, v___x_1833_);
lean_dec_ref(v___x_1833_);
v___x_1835_ = lean_array_get_size(v_args_1827_);
v___x_1836_ = lean_nat_dec_lt(v_i_1828_, v___x_1835_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = lean_box(0);
v___x_1838_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0_spec__0(v___x_1834_, v___x_1837_);
lean_dec_ref(v___x_1834_);
return v___x_1838_;
}
else
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = lean_array_fget_borrowed(v_args_1827_, v_i_1828_);
lean_inc(v___x_1839_);
v___x_1840_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0_spec__0(v___x_1834_, v___x_1839_);
lean_dec_ref(v___x_1834_);
return v___x_1840_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0___boxed(lean_object* v_args_1841_, lean_object* v_i_1842_, lean_object* v_a_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0(v_args_1841_, v_i_1842_);
lean_dec(v_i_1842_);
lean_dec_ref(v_args_1841_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__0(lean_object* v___f_1845_, lean_object* v_args_1846_){
_start:
{
lean_object* v___x_1848_; uint8_t v___x_1849_; lean_object* v_val_1851_; lean_object* v___x_1854_; 
v___x_1848_ = lean_unsigned_to_nat(0u);
v___x_1849_ = 0;
v___x_1854_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0(v_args_1846_, v___x_1848_);
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1862_; 
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1857_ = v___x_1854_;
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1854_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1860_; 
if (v_isShared_1858_ == 0)
{
lean_ctor_set_tag(v___x_1857_, 1);
v___x_1860_ = v___x_1857_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_a_1855_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
v_val_1851_ = v___x_1860_;
goto v___jp_1850_;
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
v_a_1863_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1854_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1854_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
lean_ctor_set_tag(v___x_1865_, 0);
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
v_val_1851_ = v___x_1868_;
goto v___jp_1850_;
}
}
}
v___jp_1850_:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1852_, 0, v_val_1851_);
v___x_1853_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1848_, v___x_1849_, v___x_1852_, v___f_1845_);
return v___x_1853_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__0___boxed(lean_object* v___f_1871_, lean_object* v_args_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__0(v___f_1871_, v_args_1872_);
lean_dec_ref(v_args_1872_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn(lean_object* v_f_1875_){
_start:
{
lean_object* v___f_1877_; lean_object* v___f_1878_; lean_object* v___f_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___f_1877_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1878_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1878_, 0, v_f_1875_);
lean_closure_set(v___f_1878_, 1, v___f_1877_);
v___f_1879_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1879_, 0, v___f_1878_);
v___x_1880_ = lean_unsigned_to_nat(0u);
v___x_1881_ = l_Lasm_JS_Function_ofFn(v___f_1879_, v___x_1880_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1889_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1884_ = v___x_1881_;
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1881_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1887_; 
if (v_isShared_1885_ == 0)
{
v___x_1887_ = v___x_1884_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_a_1882_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
v_a_1890_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1881_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1881_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___boxed(lean_object* v_f_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn(v_f_1898_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn___lam__0(lean_object* v_f_1901_, lean_object* v_args_1902_){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_unsigned_to_nat(0u);
v___x_1905_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0(v_args_1902_, v___x_1904_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1907_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1906_);
lean_dec_ref_known(v___x_1905_, 1);
v___x_1907_ = lean_apply_2(v_f_1901_, v_a_1906_, lean_box(0));
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1915_; 
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1915_ == 0)
{
lean_object* v_unused_1916_; 
v_unused_1916_ = lean_ctor_get(v___x_1907_, 0);
lean_dec(v_unused_1916_);
v___x_1909_ = v___x_1907_;
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
else
{
lean_dec(v___x_1907_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1911_; lean_object* v___x_1913_; 
v___x_1911_ = lean_box(0);
if (v_isShared_1910_ == 0)
{
lean_ctor_set(v___x_1909_, 0, v___x_1911_);
v___x_1913_ = v___x_1909_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1911_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
v_a_1917_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1907_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1907_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
else
{
lean_object* v_a_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1932_; 
lean_dec_ref(v_f_1901_);
v_a_1925_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1927_ = v___x_1905_;
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_a_1925_);
lean_dec(v___x_1905_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1930_; 
if (v_isShared_1928_ == 0)
{
v___x_1930_ = v___x_1927_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_a_1925_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn___lam__0___boxed(lean_object* v_f_1933_, lean_object* v_args_1934_, lean_object* v___y_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn___lam__0(v_f_1933_, v_args_1934_);
lean_dec_ref(v_args_1934_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn(lean_object* v_f_1937_){
_start:
{
lean_object* v___f_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___f_1939_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1939_, 0, v_f_1937_);
v___x_1940_ = lean_unsigned_to_nat(0u);
v___x_1941_ = l_Lasm_JS_Function_ofSyncFn(v___f_1939_, v___x_1940_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1941_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1941_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
v_a_1950_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1941_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1941_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn___boxed(lean_object* v_f_1958_, lean_object* v_a_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn(v_f_1958_);
return v_res_1960_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsReadStreamReadyListener(void){
_start:
{
lean_object* v___f_1962_; lean_object* v___x_1963_; uint8_t v___x_1964_; lean_object* v___x_1965_; 
v___f_1962_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_1963_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.ReadStream.ReadyListener", 40, 40);
v___x_1964_ = 0;
v___x_1965_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1965_, 0, v___f_1962_);
lean_ctor_set(v___x_1965_, 1, v___x_1963_);
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*2, v___x_1964_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofFn(lean_object* v_f_1966_){
_start:
{
lean_object* v___f_1968_; lean_object* v___f_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___f_1968_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1969_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1969_, 0, v_f_1966_);
lean_closure_set(v___f_1969_, 1, v___f_1968_);
v___x_1970_ = lean_unsigned_to_nat(0u);
v___x_1971_ = l_Lasm_JS_Function_ofFn(v___f_1969_, v___x_1970_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1971_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1971_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
else
{
lean_object* v_a_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1987_; 
v_a_1980_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1982_ = v___x_1971_;
v_isShared_1983_ = v_isSharedCheck_1987_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_a_1980_);
lean_dec(v___x_1971_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1987_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1985_; 
if (v_isShared_1983_ == 0)
{
v___x_1985_ = v___x_1982_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v_a_1980_);
v___x_1985_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
return v___x_1985_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofFn___boxed(lean_object* v_f_1988_, lean_object* v_a_1989_){
_start:
{
lean_object* v_res_1990_; 
v_res_1990_ = l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofFn(v_f_1988_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofSyncFn(lean_object* v_f_1991_){
_start:
{
lean_object* v___f_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___f_1993_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1993_, 0, v_f_1991_);
v___x_1994_ = lean_unsigned_to_nat(0u);
v___x_1995_ = l_Lasm_JS_Function_ofSyncFn(v___f_1993_, v___x_1994_);
if (lean_obj_tag(v___x_1995_) == 0)
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2003_; 
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1998_ = v___x_1995_;
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___x_1995_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1999_ == 0)
{
v___x_2001_ = v___x_1998_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_a_1996_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
else
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2011_; 
v_a_2004_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2006_ = v___x_1995_;
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_1995_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2007_ == 0)
{
v___x_2009_ = v___x_2006_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_2004_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofSyncFn___boxed(lean_object* v_f_2012_, lean_object* v_a_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Lasm_JS_Node_fs_ReadStream_ReadyListener_ofSyncFn(v_f_2012_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorIdx(lean_object* v_x_2015_){
_start:
{
if (lean_obj_tag(v_x_2015_) == 0)
{
lean_object* v___x_2016_; 
v___x_2016_ = lean_unsigned_to_nat(0u);
return v___x_2016_;
}
else
{
lean_object* v___x_2017_; 
v___x_2017_ = lean_unsigned_to_nat(1u);
return v___x_2017_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorIdx___boxed(lean_object* v_x_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l_Lasm_JS_Node_DoubleOrBigint_ctorIdx(v_x_2018_);
lean_dec_ref(v_x_2018_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(lean_object* v_t_2020_, lean_object* v_k_2021_){
_start:
{
if (lean_obj_tag(v_t_2020_) == 0)
{
double v_value_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v_value_2022_ = lean_ctor_get_float(v_t_2020_, 0);
lean_dec_ref_known(v_t_2020_, 0);
v___x_2023_ = lean_box_float(v_value_2022_);
v___x_2024_ = lean_apply_1(v_k_2021_, v___x_2023_);
return v___x_2024_;
}
else
{
lean_object* v_value_2025_; lean_object* v___x_2026_; 
v_value_2025_ = lean_ctor_get(v_t_2020_, 0);
lean_inc(v_value_2025_);
lean_dec_ref_known(v_t_2020_, 1);
v___x_2026_ = lean_apply_1(v_k_2021_, v_value_2025_);
return v___x_2026_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim(lean_object* v_motive_2027_, lean_object* v_ctorIdx_2028_, lean_object* v_t_2029_, lean_object* v_h_2030_, lean_object* v_k_2031_){
_start:
{
lean_object* v___x_2032_; 
v___x_2032_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_2029_, v_k_2031_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim___boxed(lean_object* v_motive_2033_, lean_object* v_ctorIdx_2034_, lean_object* v_t_2035_, lean_object* v_h_2036_, lean_object* v_k_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim(v_motive_2033_, v_ctorIdx_2034_, v_t_2035_, v_h_2036_, v_k_2037_);
lean_dec(v_ctorIdx_2034_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_double_elim___redArg(lean_object* v_t_2039_, lean_object* v_double_2040_){
_start:
{
lean_object* v___x_2041_; 
v___x_2041_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_2039_, v_double_2040_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_double_elim(lean_object* v_motive_2042_, lean_object* v_t_2043_, lean_object* v_h_2044_, lean_object* v_double_2045_){
_start:
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_2043_, v_double_2045_);
return v___x_2046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_bigint_elim___redArg(lean_object* v_t_2047_, lean_object* v_bigint_2048_){
_start:
{
lean_object* v___x_2049_; 
v___x_2049_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_2047_, v_bigint_2048_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_bigint_elim(lean_object* v_motive_2050_, lean_object* v_t_2051_, lean_object* v_h_2052_, lean_object* v_bigint_2053_){
_start:
{
lean_object* v___x_2054_; 
v___x_2054_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_2051_, v_bigint_2053_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrBigint___lam__0(lean_object* v_x_2055_){
_start:
{
if (lean_obj_tag(v_x_2055_) == 0)
{
double v_value_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
v_value_2056_ = lean_ctor_get_float(v_x_2055_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_x_2055_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v_x_2055_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_dec(v_x_2055_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
lean_ctor_set_tag(v___x_2058_, 3);
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2062_, 0, v_value_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
else
{
lean_object* v_value_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2076_; 
v_value_2064_ = lean_ctor_get(v_x_2055_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v_x_2055_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2066_ = v_x_2055_;
v_isShared_2067_ = v_isSharedCheck_2076_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_value_2064_);
lean_dec(v_x_2055_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2076_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; uint8_t v___x_2070_; 
v___x_2068_ = lean_nat_abs(v_value_2064_);
v___x_2069_ = lean_cstr_to_nat("9007199254740991");
v___x_2070_ = lean_nat_dec_le(v___x_2068_, v___x_2069_);
lean_dec(v___x_2068_);
if (v___x_2070_ == 0)
{
lean_object* v___x_2072_; 
if (v_isShared_2067_ == 0)
{
lean_ctor_set_tag(v___x_2066_, 5);
v___x_2072_ = v___x_2066_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_value_2064_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
else
{
double v___x_2074_; lean_object* v___x_2075_; 
lean_del_object(v___x_2066_);
v___x_2074_ = l_Float_ofInt(v_value_2064_);
lean_dec(v_value_2064_);
v___x_2075_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2075_, 0, v___x_2074_);
return v___x_2075_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrBigint___lam__0(double v_value_2078_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_2079_, 0, v_value_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrBigint___lam__0___boxed(lean_object* v_value_2080_){
_start:
{
double v_value_boxed_2081_; lean_object* v_res_2082_; 
v_value_boxed_2081_ = lean_unbox_float(v_value_2080_);
lean_dec_ref(v_value_2080_);
v_res_2082_ = l_Lasm_JS_Node_instCoeFloatDoubleOrBigint___lam__0(v_value_boxed_2081_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDoubleOrBigint___lam__0(lean_object* v_value_2084_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2085_, 0, v_value_2084_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDoubleOrBigint___lam__0(lean_object* v_x_2087_){
_start:
{
switch(lean_obj_tag(v_x_2087_))
{
case 3:
{
double v_n_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2096_; 
v_n_2088_ = lean_ctor_get_float(v_x_2087_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_x_2087_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2090_ = v_x_2087_;
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
else
{
lean_dec(v_x_2087_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
lean_ctor_set_tag(v___x_2090_, 0);
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2095_, 0, v_n_2088_);
v___x_2093_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2094_; 
v___x_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
return v___x_2094_;
}
}
}
case 5:
{
lean_object* v_i_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2105_; 
v_i_2097_ = lean_ctor_get(v_x_2087_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v_x_2087_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2099_ = v_x_2087_;
v_isShared_2100_ = v_isSharedCheck_2105_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_i_2097_);
lean_dec(v_x_2087_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2105_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
lean_ctor_set_tag(v___x_2099_, 1);
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_i_2097_);
v___x_2102_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
lean_object* v___x_2103_; 
v___x_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2102_);
return v___x_2103_;
}
}
}
default: 
{
lean_object* v___x_2106_; lean_object* v___x_2107_; 
lean_dec(v_x_2087_);
v___x_2106_ = lean_mk_string_unchecked("", 0, 0);
v___x_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2106_);
return v___x_2107_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDoubleOrBigint(void){
_start:
{
lean_object* v___f_2108_; lean_object* v___x_2109_; uint8_t v___x_2110_; lean_object* v___x_2111_; 
v___f_2108_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSDoubleOrBigint___lam__0), 1, 0);
v___x_2109_ = lean_mk_string_unchecked("Lasm.JS.Node.DoubleOrBigint", 27, 27);
v___x_2110_ = 0;
v___x_2111_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2111_, 0, v___f_2108_);
lean_ctor_set(v___x_2111_, 1, v___x_2109_);
lean_ctor_set_uint8(v___x_2111_, sizeof(void*)*2, v___x_2110_);
return v___x_2111_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamCloseListener(void){
_start:
{
lean_object* v___f_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; lean_object* v___x_2116_; 
v___f_2113_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2114_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Utf8Stream.CloseListener", 40, 40);
v___x_2115_ = 0;
v___x_2116_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2116_, 0, v___f_2113_);
lean_ctor_set(v___x_2116_, 1, v___x_2114_);
lean_ctor_set_uint8(v___x_2116_, sizeof(void*)*2, v___x_2115_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofFn(lean_object* v_f_2117_){
_start:
{
lean_object* v___f_2119_; lean_object* v___f_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___f_2119_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2120_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2120_, 0, v_f_2117_);
lean_closure_set(v___f_2120_, 1, v___f_2119_);
v___x_2121_ = lean_unsigned_to_nat(0u);
v___x_2122_ = l_Lasm_JS_Function_ofFn(v___f_2120_, v___x_2121_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2130_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2125_ = v___x_2122_;
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2122_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2128_; 
if (v_isShared_2126_ == 0)
{
v___x_2128_ = v___x_2125_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_a_2123_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
return v___x_2128_;
}
}
}
else
{
lean_object* v_a_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2138_; 
v_a_2131_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2133_ = v___x_2122_;
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_a_2131_);
lean_dec(v___x_2122_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2136_; 
if (v_isShared_2134_ == 0)
{
v___x_2136_ = v___x_2133_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v_a_2131_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofFn___boxed(lean_object* v_f_2139_, lean_object* v_a_2140_){
_start:
{
lean_object* v_res_2141_; 
v_res_2141_ = l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofFn(v_f_2139_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofSyncFn(lean_object* v_f_2142_){
_start:
{
lean_object* v___f_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___f_2144_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2144_, 0, v_f_2142_);
v___x_2145_ = lean_unsigned_to_nat(0u);
v___x_2146_ = l_Lasm_JS_Function_ofSyncFn(v___f_2144_, v___x_2145_);
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
v_a_2147_ = lean_ctor_get(v___x_2146_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2146_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2146_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
else
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2162_; 
v_a_2155_ = lean_ctor_get(v___x_2146_, 0);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2157_ = v___x_2146_;
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2146_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_a_2155_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofSyncFn___boxed(lean_object* v_f_2163_, lean_object* v_a_2164_){
_start:
{
lean_object* v_res_2165_; 
v_res_2165_ = l_Lasm_JS_Node_fs_Utf8Stream_CloseListener_ofSyncFn(v_f_2163_);
return v_res_2165_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamDrainListener(void){
_start:
{
lean_object* v___f_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; lean_object* v___x_2170_; 
v___f_2167_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2168_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Utf8Stream.DrainListener", 40, 40);
v___x_2169_ = 0;
v___x_2170_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2170_, 0, v___f_2167_);
lean_ctor_set(v___x_2170_, 1, v___x_2168_);
lean_ctor_set_uint8(v___x_2170_, sizeof(void*)*2, v___x_2169_);
return v___x_2170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofFn(lean_object* v_f_2171_){
_start:
{
lean_object* v___f_2173_; lean_object* v___f_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___f_2173_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2174_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2174_, 0, v_f_2171_);
lean_closure_set(v___f_2174_, 1, v___f_2173_);
v___x_2175_ = lean_unsigned_to_nat(0u);
v___x_2176_ = l_Lasm_JS_Function_ofFn(v___f_2174_, v___x_2175_);
if (lean_obj_tag(v___x_2176_) == 0)
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
v_a_2177_ = lean_ctor_get(v___x_2176_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2176_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2176_);
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
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
v_a_2185_ = lean_ctor_get(v___x_2176_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2187_ = v___x_2176_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2176_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofFn___boxed(lean_object* v_f_2193_, lean_object* v_a_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofFn(v_f_2193_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofSyncFn(lean_object* v_f_2196_){
_start:
{
lean_object* v___f_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___f_2198_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2198_, 0, v_f_2196_);
v___x_2199_ = lean_unsigned_to_nat(0u);
v___x_2200_ = l_Lasm_JS_Function_ofSyncFn(v___f_2198_, v___x_2199_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2200_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2200_);
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
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2216_; 
v_a_2209_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2211_ = v___x_2200_;
v_isShared_2212_ = v_isSharedCheck_2216_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_a_2209_);
lean_dec(v___x_2200_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2216_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2214_; 
if (v_isShared_2212_ == 0)
{
v___x_2214_ = v___x_2211_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_a_2209_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofSyncFn___boxed(lean_object* v_f_2217_, lean_object* v_a_2218_){
_start:
{
lean_object* v_res_2219_; 
v_res_2219_ = l_Lasm_JS_Node_fs_Utf8Stream_DrainListener_ofSyncFn(v_f_2217_);
return v_res_2219_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamDropListener(void){
_start:
{
lean_object* v___f_2221_; lean_object* v___x_2222_; uint8_t v___x_2223_; lean_object* v___x_2224_; 
v___f_2221_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2222_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Utf8Stream.DropListener", 39, 39);
v___x_2223_ = 0;
v___x_2224_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2224_, 0, v___f_2221_);
lean_ctor_set(v___x_2224_, 1, v___x_2222_);
lean_ctor_set_uint8(v___x_2224_, sizeof(void*)*2, v___x_2223_);
return v___x_2224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofFn(lean_object* v_f_2225_){
_start:
{
lean_object* v___f_2227_; lean_object* v___f_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___f_2227_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2228_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2228_, 0, v_f_2225_);
lean_closure_set(v___f_2228_, 1, v___f_2227_);
v___x_2229_ = lean_unsigned_to_nat(0u);
v___x_2230_ = l_Lasm_JS_Function_ofFn(v___f_2228_, v___x_2229_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2230_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2230_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
v_a_2239_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___x_2230_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2230_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofFn___boxed(lean_object* v_f_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofFn(v_f_2247_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofSyncFn(lean_object* v_f_2250_){
_start:
{
lean_object* v___f_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___f_2252_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2252_, 0, v_f_2250_);
v___x_2253_ = lean_unsigned_to_nat(0u);
v___x_2254_ = l_Lasm_JS_Function_ofSyncFn(v___f_2252_, v___x_2253_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2262_; 
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2262_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2262_ == 0)
{
v___x_2257_ = v___x_2254_;
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_a_2255_);
lean_dec(v___x_2254_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2260_; 
if (v_isShared_2258_ == 0)
{
v___x_2260_ = v___x_2257_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v_a_2255_);
v___x_2260_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
return v___x_2260_;
}
}
}
else
{
lean_object* v_a_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2270_; 
v_a_2263_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2265_ = v___x_2254_;
v_isShared_2266_ = v_isSharedCheck_2270_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_a_2263_);
lean_dec(v___x_2254_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2270_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
lean_object* v___x_2268_; 
if (v_isShared_2266_ == 0)
{
v___x_2268_ = v___x_2265_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v_a_2263_);
v___x_2268_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
return v___x_2268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofSyncFn___boxed(lean_object* v_f_2271_, lean_object* v_a_2272_){
_start:
{
lean_object* v_res_2273_; 
v_res_2273_ = l_Lasm_JS_Node_fs_Utf8Stream_DropListener_ofSyncFn(v_f_2271_);
return v_res_2273_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamErrorListener(void){
_start:
{
lean_object* v___f_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; lean_object* v___x_2278_; 
v___f_2275_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2276_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Utf8Stream.ErrorListener", 40, 40);
v___x_2277_ = 0;
v___x_2278_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2278_, 0, v___f_2275_);
lean_ctor_set(v___x_2278_, 1, v___x_2276_);
lean_ctor_set_uint8(v___x_2278_, sizeof(void*)*2, v___x_2277_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofFn(lean_object* v_f_2279_){
_start:
{
lean_object* v___f_2281_; lean_object* v___f_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___f_2281_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2282_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2282_, 0, v_f_2279_);
lean_closure_set(v___f_2282_, 1, v___f_2281_);
v___x_2283_ = lean_unsigned_to_nat(0u);
v___x_2284_ = l_Lasm_JS_Function_ofFn(v___f_2282_, v___x_2283_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
v_a_2293_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2284_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2284_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofFn___boxed(lean_object* v_f_2301_, lean_object* v_a_2302_){
_start:
{
lean_object* v_res_2303_; 
v_res_2303_ = l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofFn(v_f_2301_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofSyncFn(lean_object* v_f_2304_){
_start:
{
lean_object* v___f_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___f_2306_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2306_, 0, v_f_2304_);
v___x_2307_ = lean_unsigned_to_nat(0u);
v___x_2308_ = l_Lasm_JS_Function_ofSyncFn(v___f_2306_, v___x_2307_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2316_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2316_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2311_ = v___x_2308_;
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_a_2309_);
lean_dec(v___x_2308_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2314_; 
if (v_isShared_2312_ == 0)
{
v___x_2314_ = v___x_2311_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_a_2309_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
else
{
lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2324_; 
v_a_2317_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2319_ = v___x_2308_;
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2308_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2322_; 
if (v_isShared_2320_ == 0)
{
v___x_2322_ = v___x_2319_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_a_2317_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofSyncFn___boxed(lean_object* v_f_2325_, lean_object* v_a_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l_Lasm_JS_Node_fs_Utf8Stream_ErrorListener_ofSyncFn(v_f_2325_);
return v_res_2327_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamFinishListener(void){
_start:
{
lean_object* v___f_2329_; lean_object* v___x_2330_; uint8_t v___x_2331_; lean_object* v___x_2332_; 
v___f_2329_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2330_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Utf8Stream.FinishListener", 41, 41);
v___x_2331_ = 0;
v___x_2332_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2332_, 0, v___f_2329_);
lean_ctor_set(v___x_2332_, 1, v___x_2330_);
lean_ctor_set_uint8(v___x_2332_, sizeof(void*)*2, v___x_2331_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofFn(lean_object* v_f_2333_){
_start:
{
lean_object* v___f_2335_; lean_object* v___f_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___f_2335_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2336_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2336_, 0, v_f_2333_);
lean_closure_set(v___f_2336_, 1, v___f_2335_);
v___x_2337_ = lean_unsigned_to_nat(0u);
v___x_2338_ = l_Lasm_JS_Function_ofFn(v___f_2336_, v___x_2337_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2346_; 
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2341_ = v___x_2338_;
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2338_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2339_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
v_a_2347_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v___x_2338_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2338_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofFn___boxed(lean_object* v_f_2355_, lean_object* v_a_2356_){
_start:
{
lean_object* v_res_2357_; 
v_res_2357_ = l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofFn(v_f_2355_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofSyncFn(lean_object* v_f_2358_){
_start:
{
lean_object* v___f_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___f_2360_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2360_, 0, v_f_2358_);
v___x_2361_ = lean_unsigned_to_nat(0u);
v___x_2362_ = l_Lasm_JS_Function_ofSyncFn(v___f_2360_, v___x_2361_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v_a_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2370_; 
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2365_ = v___x_2362_;
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_a_2363_);
lean_dec(v___x_2362_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2368_; 
if (v_isShared_2366_ == 0)
{
v___x_2368_ = v___x_2365_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_a_2363_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
else
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
v_a_2371_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2373_ = v___x_2362_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v___x_2362_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2371_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofSyncFn___boxed(lean_object* v_f_2379_, lean_object* v_a_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Lasm_JS_Node_fs_Utf8Stream_FinishListener_ofSyncFn(v_f_2379_);
return v_res_2381_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamReadyListener(void){
_start:
{
lean_object* v___f_2383_; lean_object* v___x_2384_; uint8_t v___x_2385_; lean_object* v___x_2386_; 
v___f_2383_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2384_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Utf8Stream.ReadyListener", 40, 40);
v___x_2385_ = 0;
v___x_2386_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2386_, 0, v___f_2383_);
lean_ctor_set(v___x_2386_, 1, v___x_2384_);
lean_ctor_set_uint8(v___x_2386_, sizeof(void*)*2, v___x_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofFn(lean_object* v_f_2387_){
_start:
{
lean_object* v___f_2389_; lean_object* v___f_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___f_2389_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2390_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2390_, 0, v_f_2387_);
lean_closure_set(v___f_2390_, 1, v___f_2389_);
v___x_2391_ = lean_unsigned_to_nat(0u);
v___x_2392_ = l_Lasm_JS_Function_ofFn(v___f_2390_, v___x_2391_);
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2392_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2392_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
v_a_2401_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2392_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2392_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofFn___boxed(lean_object* v_f_2409_, lean_object* v_a_2410_){
_start:
{
lean_object* v_res_2411_; 
v_res_2411_ = l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofFn(v_f_2409_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofSyncFn(lean_object* v_f_2412_){
_start:
{
lean_object* v___f_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___f_2414_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2414_, 0, v_f_2412_);
v___x_2415_ = lean_unsigned_to_nat(0u);
v___x_2416_ = l_Lasm_JS_Function_ofSyncFn(v___f_2414_, v___x_2415_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2416_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2416_);
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
v_reuseFailAlloc_2423_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2432_; 
v_a_2425_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2427_ = v___x_2416_;
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_dec(v___x_2416_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2430_; 
if (v_isShared_2428_ == 0)
{
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofSyncFn___boxed(lean_object* v_f_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l_Lasm_JS_Node_fs_Utf8Stream_ReadyListener_ofSyncFn(v_f_2433_);
return v_res_2435_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamWriteListener(void){
_start:
{
lean_object* v___f_2437_; lean_object* v___x_2438_; uint8_t v___x_2439_; lean_object* v___x_2440_; 
v___f_2437_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2438_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Utf8Stream.WriteListener", 40, 40);
v___x_2439_ = 0;
v___x_2440_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2440_, 0, v___f_2437_);
lean_ctor_set(v___x_2440_, 1, v___x_2438_);
lean_ctor_set_uint8(v___x_2440_, sizeof(void*)*2, v___x_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofFn(lean_object* v_f_2441_){
_start:
{
lean_object* v___f_2443_; lean_object* v___f_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___f_2443_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2444_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2444_, 0, v_f_2441_);
lean_closure_set(v___f_2444_, 1, v___f_2443_);
v___x_2445_ = lean_unsigned_to_nat(0u);
v___x_2446_ = l_Lasm_JS_Function_ofFn(v___f_2444_, v___x_2445_);
if (lean_obj_tag(v___x_2446_) == 0)
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
v_a_2447_ = lean_ctor_get(v___x_2446_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2446_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2446_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2450_ == 0)
{
v___x_2452_ = v___x_2449_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2447_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
}
else
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2462_; 
v_a_2455_ = lean_ctor_get(v___x_2446_, 0);
v_isSharedCheck_2462_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_2462_ == 0)
{
v___x_2457_ = v___x_2446_;
v_isShared_2458_ = v_isSharedCheck_2462_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v___x_2446_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofFn___boxed(lean_object* v_f_2463_, lean_object* v_a_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofFn(v_f_2463_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofSyncFn(lean_object* v_f_2466_){
_start:
{
lean_object* v___f_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___f_2468_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2468_, 0, v_f_2466_);
v___x_2469_ = lean_unsigned_to_nat(0u);
v___x_2470_ = l_Lasm_JS_Function_ofSyncFn(v___f_2468_, v___x_2469_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2473_ = v___x_2470_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2470_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_a_2471_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
else
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2486_; 
v_a_2479_ = lean_ctor_get(v___x_2470_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2481_ = v___x_2470_;
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2470_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofSyncFn___boxed(lean_object* v_f_2487_, lean_object* v_a_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l_Lasm_JS_Node_fs_Utf8Stream_WriteListener_ofSyncFn(v_f_2487_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorIdx(lean_object* v_x_2490_){
_start:
{
switch(lean_obj_tag(v_x_2490_))
{
case 0:
{
lean_object* v___x_2491_; 
v___x_2491_ = lean_unsigned_to_nat(0u);
return v___x_2491_;
}
case 1:
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_unsigned_to_nat(1u);
return v___x_2492_;
}
default: 
{
lean_object* v___x_2493_; 
v___x_2493_ = lean_unsigned_to_nat(2u);
return v___x_2493_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorIdx___boxed(lean_object* v_x_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorIdx(v_x_2494_);
lean_dec_ref(v_x_2494_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(lean_object* v_t_2496_, lean_object* v_k_2497_){
_start:
{
if (lean_obj_tag(v_t_2496_) == 2)
{
lean_object* v_value_2498_; lean_object* v___x_2499_; 
v_value_2498_ = lean_ctor_get(v_t_2496_, 0);
lean_inc(v_value_2498_);
lean_dec_ref_known(v_t_2496_, 1);
v___x_2499_ = lean_apply_1(v_k_2497_, v_value_2498_);
return v___x_2499_;
}
else
{
lean_object* v_value_2500_; lean_object* v___x_2501_; 
v_value_2500_ = lean_ctor_get(v_t_2496_, 0);
lean_inc_ref(v_value_2500_);
lean_dec_ref(v_t_2496_);
v___x_2501_ = lean_apply_1(v_k_2497_, v_value_2500_);
return v___x_2501_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim(lean_object* v_motive_2502_, lean_object* v_ctorIdx_2503_, lean_object* v_t_2504_, lean_object* v_h_2505_, lean_object* v_k_2506_){
_start:
{
lean_object* v___x_2507_; 
v___x_2507_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_2504_, v_k_2506_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___boxed(lean_object* v_motive_2508_, lean_object* v_ctorIdx_2509_, lean_object* v_t_2510_, lean_object* v_h_2511_, lean_object* v_k_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim(v_motive_2508_, v_ctorIdx_2509_, v_t_2510_, v_h_2511_, v_k_2512_);
lean_dec(v_ctorIdx_2509_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_domString_elim___redArg(lean_object* v_t_2514_, lean_object* v_domString_2515_){
_start:
{
lean_object* v___x_2516_; 
v___x_2516_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_2514_, v_domString_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_domString_elim(lean_object* v_motive_2517_, lean_object* v_t_2518_, lean_object* v_h_2519_, lean_object* v_domString_2520_){
_start:
{
lean_object* v___x_2521_; 
v___x_2521_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_2518_, v_domString_2520_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_uint8Array_elim___redArg(lean_object* v_t_2522_, lean_object* v_uint8Array_2523_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_2522_, v_uint8Array_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_uint8Array_elim(lean_object* v_motive_2525_, lean_object* v_t_2526_, lean_object* v_h_2527_, lean_object* v_uint8Array_2528_){
_start:
{
lean_object* v___x_2529_; 
v___x_2529_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_2526_, v_uint8Array_2528_);
return v___x_2529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_url_elim___redArg(lean_object* v_t_2530_, lean_object* v_url_2531_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_2530_, v_url_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_url_elim(lean_object* v_motive_2533_, lean_object* v_t_2534_, lean_object* v_h_2535_, lean_object* v_url_2536_){
_start:
{
lean_object* v___x_2537_; 
v___x_2537_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_2534_, v_url_2536_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURL___lam__0(lean_object* v_x_2538_){
_start:
{
switch(lean_obj_tag(v_x_2538_))
{
case 0:
{
lean_object* v_value_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2546_; 
v_value_2539_ = lean_ctor_get(v_x_2538_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v_x_2538_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2541_ = v_x_2538_;
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_value_2539_);
lean_dec(v_x_2538_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2544_; 
if (v_isShared_2542_ == 0)
{
lean_ctor_set_tag(v___x_2541_, 4);
v___x_2544_ = v___x_2541_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_value_2539_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
case 1:
{
lean_object* v_value_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
v_value_2547_ = lean_ctor_get(v_x_2538_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v_x_2538_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v_x_2538_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_value_2547_);
lean_dec(v_x_2538_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
lean_ctor_set_tag(v___x_2549_, 6);
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_value_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
default: 
{
lean_object* v_value_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v_value_2555_ = lean_ctor_get(v_x_2538_, 0);
lean_inc(v_value_2555_);
lean_dec_ref_known(v_x_2538_, 1);
v___x_2556_ = lean_mk_string_unchecked("", 0, 0);
v___x_2557_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2557_, 0, v_value_2555_);
lean_ctor_set(v___x_2557_, 1, v___x_2556_);
return v___x_2557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURL___lam__0(lean_object* v_value_2559_){
_start:
{
lean_object* v___x_2560_; 
v___x_2560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2560_, 0, v_value_2559_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURL___lam__0(lean_object* v_value_2562_){
_start:
{
lean_object* v___x_2563_; 
v___x_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2563_, 0, v_value_2562_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURL___lam__0(lean_object* v_value_2565_){
_start:
{
lean_object* v___x_2566_; 
v___x_2566_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2566_, 0, v_value_2565_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(lean_object* v_x_2568_){
_start:
{
if (lean_obj_tag(v_x_2568_) == 0)
{
lean_object* v___x_2569_; 
v___x_2569_ = lean_unsigned_to_nat(0u);
return v___x_2569_;
}
else
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_unsigned_to_nat(1u);
return v___x_2570_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___boxed(lean_object* v_x_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(v_x_2571_);
lean_dec_ref(v_x_2571_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(lean_object* v_t_2573_, lean_object* v_k_2574_){
_start:
{
if (lean_obj_tag(v_t_2573_) == 0)
{
double v_value_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v_value_2575_ = lean_ctor_get_float(v_t_2573_, 0);
lean_dec_ref_known(v_t_2573_, 0);
v___x_2576_ = lean_box_float(v_value_2575_);
v___x_2577_ = lean_apply_1(v_k_2574_, v___x_2576_);
return v___x_2577_;
}
else
{
lean_object* v_value_2578_; lean_object* v___x_2579_; 
v_value_2578_ = lean_ctor_get(v_t_2573_, 0);
lean_inc_ref(v_value_2578_);
lean_dec_ref_known(v_t_2573_, 1);
v___x_2579_ = lean_apply_1(v_k_2574_, v_value_2578_);
return v___x_2579_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(lean_object* v_motive_2580_, lean_object* v_ctorIdx_2581_, lean_object* v_t_2582_, lean_object* v_h_2583_, lean_object* v_k_2584_){
_start:
{
lean_object* v___x_2585_; 
v___x_2585_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_2582_, v_k_2584_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___boxed(lean_object* v_motive_2586_, lean_object* v_ctorIdx_2587_, lean_object* v_t_2588_, lean_object* v_h_2589_, lean_object* v_k_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(v_motive_2586_, v_ctorIdx_2587_, v_t_2588_, v_h_2589_, v_k_2590_);
lean_dec(v_ctorIdx_2587_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim___redArg(lean_object* v_t_2592_, lean_object* v_double_2593_){
_start:
{
lean_object* v___x_2594_; 
v___x_2594_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_2592_, v_double_2593_);
return v___x_2594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim(lean_object* v_motive_2595_, lean_object* v_t_2596_, lean_object* v_h_2597_, lean_object* v_double_2598_){
_start:
{
lean_object* v___x_2599_; 
v___x_2599_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_2596_, v_double_2598_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim___redArg(lean_object* v_t_2600_, lean_object* v_domString_2601_){
_start:
{
lean_object* v___x_2602_; 
v___x_2602_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_2600_, v_domString_2601_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim(lean_object* v_motive_2603_, lean_object* v_t_2604_, lean_object* v_h_2605_, lean_object* v_domString_2606_){
_start:
{
lean_object* v___x_2607_; 
v___x_2607_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_2604_, v_domString_2606_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString___lam__0(lean_object* v_x_2608_){
_start:
{
if (lean_obj_tag(v_x_2608_) == 0)
{
double v_value_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2616_; 
v_value_2609_ = lean_ctor_get_float(v_x_2608_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v_x_2608_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2611_ = v_x_2608_;
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
else
{
lean_dec(v_x_2608_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2614_; 
if (v_isShared_2612_ == 0)
{
lean_ctor_set_tag(v___x_2611_, 3);
v___x_2614_ = v___x_2611_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2615_, 0, v_value_2609_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
return v___x_2614_;
}
}
}
else
{
lean_object* v_value_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
v_value_2617_ = lean_ctor_get(v_x_2608_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v_x_2608_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v_x_2608_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_value_2617_);
lean_dec(v_x_2608_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
lean_ctor_set_tag(v___x_2619_, 4);
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_value_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(double v_value_2626_){
_start:
{
lean_object* v___x_2627_; 
v___x_2627_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_2627_, 0, v_value_2626_);
return v___x_2627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0___boxed(lean_object* v_value_2628_){
_start:
{
double v_value_boxed_2629_; lean_object* v_res_2630_; 
v_value_boxed_2629_ = lean_unbox_float(v_value_2628_);
lean_dec_ref(v_value_2628_);
v_res_2630_ = l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(v_value_boxed_2629_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___lam__0(lean_object* v_value_2632_){
_start:
{
lean_object* v___x_2633_; 
v___x_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2633_, 0, v_value_2632_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDoubleOrDOMString___lam__0(lean_object* v_x_2635_){
_start:
{
switch(lean_obj_tag(v_x_2635_))
{
case 3:
{
double v_n_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2644_; 
v_n_2636_ = lean_ctor_get_float(v_x_2635_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v_x_2635_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2638_ = v_x_2635_;
v_isShared_2639_ = v_isSharedCheck_2644_;
goto v_resetjp_2637_;
}
else
{
lean_dec(v_x_2635_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2644_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2641_; 
if (v_isShared_2639_ == 0)
{
lean_ctor_set_tag(v___x_2638_, 0);
v___x_2641_ = v___x_2638_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2643_, 0, v_n_2636_);
v___x_2641_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
lean_object* v___x_2642_; 
v___x_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2641_);
return v___x_2642_;
}
}
}
case 4:
{
lean_object* v_s_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2653_; 
v_s_2645_ = lean_ctor_get(v_x_2635_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v_x_2635_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2647_ = v_x_2635_;
v_isShared_2648_ = v_isSharedCheck_2653_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_s_2645_);
lean_dec(v_x_2635_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2653_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
lean_ctor_set_tag(v___x_2647_, 1);
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_s_2645_);
v___x_2650_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
lean_object* v___x_2651_; 
v___x_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
return v___x_2651_;
}
}
}
default: 
{
lean_object* v___x_2654_; lean_object* v___x_2655_; 
lean_dec(v_x_2635_);
v___x_2654_ = lean_mk_string_unchecked("", 0, 0);
v___x_2655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2654_);
return v___x_2655_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDoubleOrDOMString(void){
_start:
{
lean_object* v___f_2656_; lean_object* v___x_2657_; uint8_t v___x_2658_; lean_object* v___x_2659_; 
v___f_2656_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSDoubleOrDOMString___lam__0), 1, 0);
v___x_2657_ = lean_mk_string_unchecked("Lasm.JS.Node.DoubleOrDOMString", 30, 30);
v___x_2658_ = 0;
v___x_2659_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2659_, 0, v___f_2656_);
lean_ctor_set(v___x_2659_, 1, v___x_2657_);
lean_ctor_set_uint8(v___x_2659_, sizeof(void*)*2, v___x_2658_);
return v___x_2659_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsWriteStreamCloseListener(void){
_start:
{
lean_object* v___f_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; lean_object* v___x_2664_; 
v___f_2661_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2662_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.WriteStream.CloseListener", 41, 41);
v___x_2663_ = 0;
v___x_2664_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2664_, 0, v___f_2661_);
lean_ctor_set(v___x_2664_, 1, v___x_2662_);
lean_ctor_set_uint8(v___x_2664_, sizeof(void*)*2, v___x_2663_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofFn(lean_object* v_f_2665_){
_start:
{
lean_object* v___f_2667_; lean_object* v___f_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___f_2667_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2668_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2668_, 0, v_f_2665_);
lean_closure_set(v___f_2668_, 1, v___f_2667_);
v___x_2669_ = lean_unsigned_to_nat(0u);
v___x_2670_ = l_Lasm_JS_Function_ofFn(v___f_2668_, v___x_2669_);
if (lean_obj_tag(v___x_2670_) == 0)
{
lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2678_; 
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2673_ = v___x_2670_;
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v___x_2670_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2676_; 
if (v_isShared_2674_ == 0)
{
v___x_2676_ = v___x_2673_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_a_2671_);
v___x_2676_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
return v___x_2676_;
}
}
}
else
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2686_; 
v_a_2679_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2681_ = v___x_2670_;
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2670_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2684_; 
if (v_isShared_2682_ == 0)
{
v___x_2684_ = v___x_2681_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_a_2679_);
v___x_2684_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
return v___x_2684_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofFn___boxed(lean_object* v_f_2687_, lean_object* v_a_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofFn(v_f_2687_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofSyncFn(lean_object* v_f_2690_){
_start:
{
lean_object* v___f_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___f_2692_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2692_, 0, v_f_2690_);
v___x_2693_ = lean_unsigned_to_nat(0u);
v___x_2694_ = l_Lasm_JS_Function_ofSyncFn(v___f_2692_, v___x_2693_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2694_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2694_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
else
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
v_a_2703_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2705_ = v___x_2694_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2694_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_a_2703_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofSyncFn___boxed(lean_object* v_f_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Lasm_JS_Node_fs_WriteStream_CloseListener_ofSyncFn(v_f_2711_);
return v_res_2713_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsWriteStreamOpenListener(void){
_start:
{
lean_object* v___f_2715_; lean_object* v___x_2716_; uint8_t v___x_2717_; lean_object* v___x_2718_; 
v___f_2715_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2716_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.WriteStream.OpenListener", 40, 40);
v___x_2717_ = 0;
v___x_2718_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2718_, 0, v___f_2715_);
lean_ctor_set(v___x_2718_, 1, v___x_2716_);
lean_ctor_set_uint8(v___x_2718_, sizeof(void*)*2, v___x_2717_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofFn(lean_object* v_f_2719_){
_start:
{
lean_object* v___f_2721_; lean_object* v___f_2722_; lean_object* v___f_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___f_2721_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2722_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2722_, 0, v_f_2719_);
lean_closure_set(v___f_2722_, 1, v___f_2721_);
v___f_2723_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2723_, 0, v___f_2722_);
v___x_2724_ = lean_unsigned_to_nat(0u);
v___x_2725_ = l_Lasm_JS_Function_ofFn(v___f_2723_, v___x_2724_);
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2725_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2725_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
v_a_2734_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2725_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2725_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofFn___boxed(lean_object* v_f_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofFn(v_f_2742_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofSyncFn(lean_object* v_f_2745_){
_start:
{
lean_object* v___f_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v___f_2747_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_fs_ReadStream_OpenListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2747_, 0, v_f_2745_);
v___x_2748_ = lean_unsigned_to_nat(0u);
v___x_2749_ = l_Lasm_JS_Function_ofSyncFn(v___f_2747_, v___x_2748_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2757_; 
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2752_ = v___x_2749_;
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2749_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2755_; 
if (v_isShared_2753_ == 0)
{
v___x_2755_ = v___x_2752_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_a_2750_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
else
{
lean_object* v_a_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2765_; 
v_a_2758_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2760_ = v___x_2749_;
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_a_2758_);
lean_dec(v___x_2749_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2763_; 
if (v_isShared_2761_ == 0)
{
v___x_2763_ = v___x_2760_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_a_2758_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofSyncFn___boxed(lean_object* v_f_2766_, lean_object* v_a_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lasm_JS_Node_fs_WriteStream_OpenListener_ofSyncFn(v_f_2766_);
return v_res_2768_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsWriteStreamReadyListener(void){
_start:
{
lean_object* v___f_2770_; lean_object* v___x_2771_; uint8_t v___x_2772_; lean_object* v___x_2773_; 
v___f_2770_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFileHandle___lam__0___boxed), 1, 0);
v___x_2771_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.WriteStream.ReadyListener", 41, 41);
v___x_2772_ = 0;
v___x_2773_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2773_, 0, v___f_2770_);
lean_ctor_set(v___x_2773_, 1, v___x_2771_);
lean_ctor_set_uint8(v___x_2773_, sizeof(void*)*2, v___x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofFn(lean_object* v_f_2774_){
_start:
{
lean_object* v___f_2776_; lean_object* v___f_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___f_2776_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_2777_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2777_, 0, v_f_2774_);
lean_closure_set(v___f_2777_, 1, v___f_2776_);
v___x_2778_ = lean_unsigned_to_nat(0u);
v___x_2779_ = l_Lasm_JS_Function_ofFn(v___f_2777_, v___x_2778_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2779_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2779_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2795_; 
v_a_2788_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2790_ = v___x_2779_;
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2779_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
if (v_isShared_2791_ == 0)
{
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofFn___boxed(lean_object* v_f_2796_, lean_object* v_a_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofFn(v_f_2796_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofSyncFn(lean_object* v_f_2799_){
_start:
{
lean_object* v___f_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___f_2801_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_FileHandle_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2801_, 0, v_f_2799_);
v___x_2802_ = lean_unsigned_to_nat(0u);
v___x_2803_ = l_Lasm_JS_Function_ofSyncFn(v___f_2801_, v___x_2802_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v_a_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
v_a_2804_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2806_ = v___x_2803_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_a_2804_);
lean_dec(v___x_2803_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2804_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2819_; 
v_a_2812_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2814_ = v___x_2803_;
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2803_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2817_; 
if (v_isShared_2815_ == 0)
{
v___x_2817_ = v___x_2814_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_a_2812_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofSyncFn___boxed(lean_object* v_f_2820_, lean_object* v_a_2821_){
_start:
{
lean_object* v_res_2822_; 
v_res_2822_ = l_Lasm_JS_Node_fs_WriteStream_ReadyListener_ofSyncFn(v_f_2820_);
return v_res_2822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorIdx(lean_object* v_x_2823_){
_start:
{
switch(lean_obj_tag(v_x_2823_))
{
case 0:
{
lean_object* v___x_2824_; 
v___x_2824_ = lean_unsigned_to_nat(0u);
return v___x_2824_;
}
case 1:
{
lean_object* v___x_2825_; 
v___x_2825_ = lean_unsigned_to_nat(1u);
return v___x_2825_;
}
case 2:
{
lean_object* v___x_2826_; 
v___x_2826_ = lean_unsigned_to_nat(2u);
return v___x_2826_;
}
default: 
{
lean_object* v___x_2827_; 
v___x_2827_ = lean_unsigned_to_nat(3u);
return v___x_2827_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorIdx___boxed(lean_object* v_x_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorIdx(v_x_2828_);
lean_dec_ref(v_x_2828_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(lean_object* v_t_2830_, lean_object* v_k_2831_){
_start:
{
switch(lean_obj_tag(v_t_2830_))
{
case 2:
{
lean_object* v_value_2832_; lean_object* v___x_2833_; 
v_value_2832_ = lean_ctor_get(v_t_2830_, 0);
lean_inc(v_value_2832_);
lean_dec_ref_known(v_t_2830_, 1);
v___x_2833_ = lean_apply_1(v_k_2831_, v_value_2832_);
return v___x_2833_;
}
case 3:
{
lean_object* v_value_2834_; lean_object* v___x_2835_; 
v_value_2834_ = lean_ctor_get(v_t_2830_, 0);
lean_inc(v_value_2834_);
lean_dec_ref_known(v_t_2830_, 1);
v___x_2835_ = lean_apply_1(v_k_2831_, v_value_2834_);
return v___x_2835_;
}
default: 
{
lean_object* v_value_2836_; lean_object* v___x_2837_; 
v_value_2836_ = lean_ctor_get(v_t_2830_, 0);
lean_inc_ref(v_value_2836_);
lean_dec_ref(v_t_2830_);
v___x_2837_ = lean_apply_1(v_k_2831_, v_value_2836_);
return v___x_2837_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim(lean_object* v_motive_2838_, lean_object* v_ctorIdx_2839_, lean_object* v_t_2840_, lean_object* v_h_2841_, lean_object* v_k_2842_){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_2840_, v_k_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___boxed(lean_object* v_motive_2844_, lean_object* v_ctorIdx_2845_, lean_object* v_t_2846_, lean_object* v_h_2847_, lean_object* v_k_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim(v_motive_2844_, v_ctorIdx_2845_, v_t_2846_, v_h_2847_, v_k_2848_);
lean_dec(v_ctorIdx_2845_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_domString_elim___redArg(lean_object* v_t_2850_, lean_object* v_domString_2851_){
_start:
{
lean_object* v___x_2852_; 
v___x_2852_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_2850_, v_domString_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_domString_elim(lean_object* v_motive_2853_, lean_object* v_t_2854_, lean_object* v_h_2855_, lean_object* v_domString_2856_){
_start:
{
lean_object* v___x_2857_; 
v___x_2857_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_2854_, v_domString_2856_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_uint8Array_elim___redArg(lean_object* v_t_2858_, lean_object* v_uint8Array_2859_){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_2858_, v_uint8Array_2859_);
return v___x_2860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_uint8Array_elim(lean_object* v_motive_2861_, lean_object* v_t_2862_, lean_object* v_h_2863_, lean_object* v_uint8Array_2864_){
_start:
{
lean_object* v___x_2865_; 
v___x_2865_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_2862_, v_uint8Array_2864_);
return v___x_2865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_url_elim___redArg(lean_object* v_t_2866_, lean_object* v_url_2867_){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_2866_, v_url_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_url_elim(lean_object* v_motive_2869_, lean_object* v_t_2870_, lean_object* v_h_2871_, lean_object* v_url_2872_){
_start:
{
lean_object* v___x_2873_; 
v___x_2873_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_2870_, v_url_2872_);
return v___x_2873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_fileHandle_elim___redArg(lean_object* v_t_2874_, lean_object* v_fileHandle_2875_){
_start:
{
lean_object* v___x_2876_; 
v___x_2876_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_2874_, v_fileHandle_2875_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_fileHandle_elim(lean_object* v_motive_2877_, lean_object* v_t_2878_, lean_object* v_h_2879_, lean_object* v_fileHandle_2880_){
_start:
{
lean_object* v___x_2881_; 
v___x_2881_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_2878_, v_fileHandle_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_x_2882_){
_start:
{
switch(lean_obj_tag(v_x_2882_))
{
case 0:
{
lean_object* v_value_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2890_; 
v_value_2883_ = lean_ctor_get(v_x_2882_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v_x_2882_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2885_ = v_x_2882_;
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_value_2883_);
lean_dec(v_x_2882_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2886_ == 0)
{
lean_ctor_set_tag(v___x_2885_, 4);
v___x_2888_ = v___x_2885_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_value_2883_);
v___x_2888_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
return v___x_2888_;
}
}
}
case 1:
{
lean_object* v_value_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
v_value_2891_ = lean_ctor_get(v_x_2882_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v_x_2882_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v_x_2882_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_value_2891_);
lean_dec(v_x_2882_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
lean_ctor_set_tag(v___x_2893_, 6);
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_value_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
default: 
{
lean_object* v_value_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; 
v_value_2899_ = lean_ctor_get(v_x_2882_, 0);
lean_inc(v_value_2899_);
lean_dec_ref(v_x_2882_);
v___x_2900_ = lean_mk_string_unchecked("", 0, 0);
v___x_2901_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2901_, 0, v_value_2899_);
lean_ctor_set(v___x_2901_, 1, v___x_2900_);
return v___x_2901_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_value_2903_){
_start:
{
lean_object* v___x_2904_; 
v___x_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2904_, 0, v_value_2903_);
return v___x_2904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_value_2906_){
_start:
{
lean_object* v___x_2907_; 
v___x_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2907_, 0, v_value_2906_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_value_2909_){
_start:
{
lean_object* v___x_2910_; 
v___x_2910_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2910_, 0, v_value_2909_);
return v___x_2910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_value_2912_){
_start:
{
lean_object* v___x_2913_; 
v___x_2913_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2913_, 0, v_value_2912_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptions___lam__0(lean_object* v___f_2915_, lean_object* v___f_2916_, lean_object* v___f_2917_, lean_object* v_d_2918_){
_start:
{
lean_object* v_encoding_2919_; lean_object* v_mode_2920_; lean_object* v_flag_2921_; lean_object* v_flush_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v_encoding_2919_ = lean_ctor_get(v_d_2918_, 0);
lean_inc(v_encoding_2919_);
v_mode_2920_ = lean_ctor_get(v_d_2918_, 1);
lean_inc(v_mode_2920_);
v_flag_2921_ = lean_ctor_get(v_d_2918_, 2);
lean_inc(v_flag_2921_);
v_flush_2922_ = lean_ctor_get(v_d_2918_, 3);
lean_inc(v_flush_2922_);
lean_dec_ref(v_d_2918_);
v___x_2923_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_2915_);
v___x_2924_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2915_, v_encoding_2919_);
v___x_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2923_);
lean_ctor_set(v___x_2925_, 1, v___x_2924_);
v___x_2926_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_2927_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2916_, v_mode_2920_);
v___x_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2926_);
lean_ctor_set(v___x_2928_, 1, v___x_2927_);
v___x_2929_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_2930_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2915_, v_flag_2921_);
v___x_2931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2929_);
lean_ctor_set(v___x_2931_, 1, v___x_2930_);
v___x_2932_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_2933_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2917_, v_flush_2922_);
v___x_2934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2932_);
lean_ctor_set(v___x_2934_, 1, v___x_2933_);
v___x_2935_ = lean_unsigned_to_nat(4u);
v___x_2936_ = lean_mk_empty_array_with_capacity(v___x_2935_);
v___x_2937_ = lean_array_push(v___x_2936_, v___x_2925_);
v___x_2938_ = lean_array_push(v___x_2937_, v___x_2928_);
v___x_2939_ = lean_array_push(v___x_2938_, v___x_2931_);
v___x_2940_ = lean_array_push(v___x_2939_, v___x_2934_);
v___x_2941_ = l_Lasm_JS_Web_Internal_fields(v___x_2940_);
lean_dec_ref(v___x_2940_);
return v___x_2941_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptions(void){
_start:
{
lean_object* v___f_2942_; lean_object* v___f_2943_; lean_object* v___f_2944_; lean_object* v___f_2945_; 
v___f_2942_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_2943_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_2944_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2945_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptions___lam__0), 4, 3);
lean_closure_set(v___f_2945_, 0, v___f_2942_);
lean_closure_set(v___f_2945_, 1, v___f_2943_);
lean_closure_set(v___f_2945_, 2, v___f_2944_);
return v___f_2945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx(lean_object* v_x_2946_){
_start:
{
if (lean_obj_tag(v_x_2946_) == 0)
{
lean_object* v___x_2947_; 
v___x_2947_ = lean_unsigned_to_nat(0u);
return v___x_2947_;
}
else
{
lean_object* v___x_2948_; 
v___x_2948_ = lean_unsigned_to_nat(1u);
return v___x_2948_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx(v_x_2949_);
lean_dec_ref(v_x_2949_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_2951_, lean_object* v_k_2952_){
_start:
{
lean_object* v_value_2953_; lean_object* v___x_2954_; 
v_value_2953_ = lean_ctor_get(v_t_2951_, 0);
lean_inc_ref(v_value_2953_);
lean_dec_ref(v_t_2951_);
v___x_2954_ = lean_apply_1(v_k_2952_, v_value_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim(lean_object* v_motive_2955_, lean_object* v_ctorIdx_2956_, lean_object* v_t_2957_, lean_object* v_h_2958_, lean_object* v_k_2959_){
_start:
{
lean_object* v___x_2960_; 
v___x_2960_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_2957_, v_k_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_2961_, lean_object* v_ctorIdx_2962_, lean_object* v_t_2963_, lean_object* v_h_2964_, lean_object* v_k_2965_){
_start:
{
lean_object* v_res_2966_; 
v_res_2966_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim(v_motive_2961_, v_ctorIdx_2962_, v_t_2963_, v_h_2964_, v_k_2965_);
lean_dec(v_ctorIdx_2962_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object* v_t_2967_, lean_object* v_appendFileOptions_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_2967_, v_appendFileOptions_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object* v_motive_2970_, lean_object* v_t_2971_, lean_object* v_h_2972_, lean_object* v_appendFileOptions_2973_){
_start:
{
lean_object* v___x_2974_; 
v___x_2974_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_2971_, v_appendFileOptions_2973_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_2975_, lean_object* v_domString_2976_){
_start:
{
lean_object* v___x_2977_; 
v___x_2977_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_2975_, v_domString_2976_);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_domString_elim(lean_object* v_motive_2978_, lean_object* v_t_2979_, lean_object* v_h_2980_, lean_object* v_domString_2981_){
_start:
{
lean_object* v___x_2982_; 
v___x_2982_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_2979_, v_domString_2981_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptionsOrDOMString___lam__0(lean_object* v_x_2983_){
_start:
{
if (lean_obj_tag(v_x_2983_) == 0)
{
lean_object* v_value_2984_; lean_object* v_encoding_2985_; lean_object* v_mode_2986_; lean_object* v_flag_2987_; lean_object* v_flush_2988_; lean_object* v___f_2989_; lean_object* v___f_2990_; lean_object* v___f_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; 
v_value_2984_ = lean_ctor_get(v_x_2983_, 0);
lean_inc_ref(v_value_2984_);
lean_dec_ref_known(v_x_2983_, 1);
v_encoding_2985_ = lean_ctor_get(v_value_2984_, 0);
lean_inc(v_encoding_2985_);
v_mode_2986_ = lean_ctor_get(v_value_2984_, 1);
lean_inc(v_mode_2986_);
v_flag_2987_ = lean_ctor_get(v_value_2984_, 2);
lean_inc(v_flag_2987_);
v_flush_2988_ = lean_ctor_get(v_value_2984_, 3);
lean_inc(v_flush_2988_);
lean_dec_ref(v_value_2984_);
v___f_2989_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_2990_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_2991_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_2992_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_2989_);
v___x_2993_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2989_, v_encoding_2985_);
v___x_2994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2992_);
lean_ctor_set(v___x_2994_, 1, v___x_2993_);
v___x_2995_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_2996_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2990_, v_mode_2986_);
v___x_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2995_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
v___x_2998_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_2999_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2989_, v_flag_2987_);
v___x_3000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2998_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_3002_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2991_, v_flush_2988_);
v___x_3003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3001_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
v___x_3004_ = lean_unsigned_to_nat(4u);
v___x_3005_ = lean_mk_empty_array_with_capacity(v___x_3004_);
v___x_3006_ = lean_array_push(v___x_3005_, v___x_2994_);
v___x_3007_ = lean_array_push(v___x_3006_, v___x_2997_);
v___x_3008_ = lean_array_push(v___x_3007_, v___x_3000_);
v___x_3009_ = lean_array_push(v___x_3008_, v___x_3003_);
v___x_3010_ = l_Lasm_JS_Web_Internal_fields(v___x_3009_);
lean_dec_ref(v___x_3009_);
return v___x_3010_;
}
else
{
lean_object* v_value_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3018_; 
v_value_3011_ = lean_ctor_get(v_x_2983_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v_x_2983_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3013_ = v_x_2983_;
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_value_3011_);
lean_dec(v_x_2983_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___x_3016_; 
if (v_isShared_3014_ == 0)
{
lean_ctor_set_tag(v___x_3013_, 4);
v___x_3016_ = v___x_3013_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v_value_3011_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesAppendFileOptionsFsPromisesAppendFileOptionsOrDOMString___lam__0(lean_object* v_value_3020_){
_start:
{
lean_object* v___x_3021_; 
v___x_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3021_, 0, v_value_3020_);
return v___x_3021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesAppendFileOptionsOrDOMString___lam__0(lean_object* v_value_3023_){
_start:
{
lean_object* v___x_3024_; 
v___x_3024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3024_, 0, v_value_3023_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorIdx(lean_object* v_x_3026_){
_start:
{
if (lean_obj_tag(v_x_3026_) == 0)
{
lean_object* v___x_3027_; 
v___x_3027_ = lean_unsigned_to_nat(0u);
return v___x_3027_;
}
else
{
lean_object* v___x_3028_; 
v___x_3028_ = lean_unsigned_to_nat(1u);
return v___x_3028_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorIdx___boxed(lean_object* v_x_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l_Lasm_JS_Node_DOMStringOrURL_ctorIdx(v_x_3029_);
lean_dec_ref(v_x_3029_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(lean_object* v_t_3031_, lean_object* v_k_3032_){
_start:
{
if (lean_obj_tag(v_t_3031_) == 0)
{
lean_object* v_value_3033_; lean_object* v___x_3034_; 
v_value_3033_ = lean_ctor_get(v_t_3031_, 0);
lean_inc_ref(v_value_3033_);
lean_dec_ref_known(v_t_3031_, 1);
v___x_3034_ = lean_apply_1(v_k_3032_, v_value_3033_);
return v___x_3034_;
}
else
{
lean_object* v_value_3035_; lean_object* v___x_3036_; 
v_value_3035_ = lean_ctor_get(v_t_3031_, 0);
lean_inc(v_value_3035_);
lean_dec_ref_known(v_t_3031_, 1);
v___x_3036_ = lean_apply_1(v_k_3032_, v_value_3035_);
return v___x_3036_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorElim(lean_object* v_motive_3037_, lean_object* v_ctorIdx_3038_, lean_object* v_t_3039_, lean_object* v_h_3040_, lean_object* v_k_3041_){
_start:
{
lean_object* v___x_3042_; 
v___x_3042_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_3039_, v_k_3041_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorElim___boxed(lean_object* v_motive_3043_, lean_object* v_ctorIdx_3044_, lean_object* v_t_3045_, lean_object* v_h_3046_, lean_object* v_k_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim(v_motive_3043_, v_ctorIdx_3044_, v_t_3045_, v_h_3046_, v_k_3047_);
lean_dec(v_ctorIdx_3044_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_domString_elim___redArg(lean_object* v_t_3049_, lean_object* v_domString_3050_){
_start:
{
lean_object* v___x_3051_; 
v___x_3051_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_3049_, v_domString_3050_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_domString_elim(lean_object* v_motive_3052_, lean_object* v_t_3053_, lean_object* v_h_3054_, lean_object* v_domString_3055_){
_start:
{
lean_object* v___x_3056_; 
v___x_3056_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_3053_, v_domString_3055_);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_url_elim___redArg(lean_object* v_t_3057_, lean_object* v_url_3058_){
_start:
{
lean_object* v___x_3059_; 
v___x_3059_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_3057_, v_url_3058_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_url_elim(lean_object* v_motive_3060_, lean_object* v_t_3061_, lean_object* v_h_3062_, lean_object* v_url_3063_){
_start:
{
lean_object* v___x_3064_; 
v___x_3064_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_3061_, v_url_3063_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0(lean_object* v_x_3065_){
_start:
{
if (lean_obj_tag(v_x_3065_) == 0)
{
lean_object* v_value_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
v_value_3066_ = lean_ctor_get(v_x_3065_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v_x_3065_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v_x_3065_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_value_3066_);
lean_dec(v_x_3065_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3071_; 
if (v_isShared_3069_ == 0)
{
lean_ctor_set_tag(v___x_3068_, 4);
v___x_3071_ = v___x_3068_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_value_3066_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
else
{
lean_object* v_value_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v_value_3074_ = lean_ctor_get(v_x_3065_, 0);
lean_inc(v_value_3074_);
lean_dec_ref_known(v_x_3065_, 1);
v___x_3075_ = lean_mk_string_unchecked("", 0, 0);
v___x_3076_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3076_, 0, v_value_3074_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
return v___x_3076_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURL___lam__0(lean_object* v_value_3078_){
_start:
{
lean_object* v___x_3079_; 
v___x_3079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3079_, 0, v_value_3078_);
return v___x_3079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURL___lam__0(lean_object* v_value_3081_){
_start:
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_value_3081_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesCpOptions___lam__0(lean_object* v___f_3084_, lean_object* v___f_3085_, lean_object* v___f_3086_, lean_object* v_d_3087_){
_start:
{
lean_object* v_dereference_3088_; lean_object* v_errorOnExist_3089_; lean_object* v_filter_3090_; lean_object* v_force_3091_; lean_object* v_mode_3092_; lean_object* v_preserveTimestamps_3093_; lean_object* v_recursive_3094_; lean_object* v_verbatimSymlinks_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v_dereference_3088_ = lean_ctor_get(v_d_3087_, 0);
lean_inc(v_dereference_3088_);
v_errorOnExist_3089_ = lean_ctor_get(v_d_3087_, 1);
lean_inc(v_errorOnExist_3089_);
v_filter_3090_ = lean_ctor_get(v_d_3087_, 2);
lean_inc(v_filter_3090_);
v_force_3091_ = lean_ctor_get(v_d_3087_, 3);
lean_inc(v_force_3091_);
v_mode_3092_ = lean_ctor_get(v_d_3087_, 4);
lean_inc(v_mode_3092_);
v_preserveTimestamps_3093_ = lean_ctor_get(v_d_3087_, 5);
lean_inc(v_preserveTimestamps_3093_);
v_recursive_3094_ = lean_ctor_get(v_d_3087_, 6);
lean_inc(v_recursive_3094_);
v_verbatimSymlinks_3095_ = lean_ctor_get(v_d_3087_, 7);
lean_inc(v_verbatimSymlinks_3095_);
lean_dec_ref(v_d_3087_);
v___x_3096_ = lean_mk_string_unchecked("dereference", 11, 11);
lean_inc_ref_n(v___f_3084_, 5);
v___x_3097_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3084_, v_dereference_3088_);
v___x_3098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3096_);
lean_ctor_set(v___x_3098_, 1, v___x_3097_);
v___x_3099_ = lean_mk_string_unchecked("errorOnExist", 12, 12);
v___x_3100_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3084_, v_errorOnExist_3089_);
v___x_3101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3099_);
lean_ctor_set(v___x_3101_, 1, v___x_3100_);
v___x_3102_ = lean_mk_string_unchecked("filter", 6, 6);
v___x_3103_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3085_, v_filter_3090_);
v___x_3104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3102_);
lean_ctor_set(v___x_3104_, 1, v___x_3103_);
v___x_3105_ = lean_mk_string_unchecked("force", 5, 5);
v___x_3106_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3084_, v_force_3091_);
v___x_3107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3105_);
lean_ctor_set(v___x_3107_, 1, v___x_3106_);
v___x_3108_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_3109_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3086_, v_mode_3092_);
v___x_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3108_);
lean_ctor_set(v___x_3110_, 1, v___x_3109_);
v___x_3111_ = lean_mk_string_unchecked("preserveTimestamps", 18, 18);
v___x_3112_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3084_, v_preserveTimestamps_3093_);
v___x_3113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3111_);
lean_ctor_set(v___x_3113_, 1, v___x_3112_);
v___x_3114_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_3115_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3084_, v_recursive_3094_);
v___x_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3114_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = lean_mk_string_unchecked("verbatimSymlinks", 16, 16);
v___x_3118_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3084_, v_verbatimSymlinks_3095_);
v___x_3119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3117_);
lean_ctor_set(v___x_3119_, 1, v___x_3118_);
v___x_3120_ = lean_unsigned_to_nat(8u);
v___x_3121_ = lean_mk_empty_array_with_capacity(v___x_3120_);
v___x_3122_ = lean_array_push(v___x_3121_, v___x_3098_);
v___x_3123_ = lean_array_push(v___x_3122_, v___x_3101_);
v___x_3124_ = lean_array_push(v___x_3123_, v___x_3104_);
v___x_3125_ = lean_array_push(v___x_3124_, v___x_3107_);
v___x_3126_ = lean_array_push(v___x_3125_, v___x_3110_);
v___x_3127_ = lean_array_push(v___x_3126_, v___x_3113_);
v___x_3128_ = lean_array_push(v___x_3127_, v___x_3116_);
v___x_3129_ = lean_array_push(v___x_3128_, v___x_3119_);
v___x_3130_ = l_Lasm_JS_Web_Internal_fields(v___x_3129_);
lean_dec_ref(v___x_3129_);
return v___x_3130_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesCpOptions(void){
_start:
{
lean_object* v___f_3131_; lean_object* v___f_3132_; lean_object* v___f_3133_; lean_object* v___f_3134_; 
v___f_3131_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_3132_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_3133_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_3134_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesCpOptions___lam__0), 4, 3);
lean_closure_set(v___f_3134_, 0, v___f_3131_);
lean_closure_set(v___f_3134_, 1, v___f_3132_);
lean_closure_set(v___f_3134_, 2, v___f_3133_);
return v___f_3134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorIdx(lean_object* v_x_3135_){
_start:
{
if (lean_obj_tag(v_x_3135_) == 0)
{
lean_object* v___x_3136_; 
v___x_3136_ = lean_unsigned_to_nat(0u);
return v___x_3136_;
}
else
{
lean_object* v___x_3137_; 
v___x_3137_ = lean_unsigned_to_nat(1u);
return v___x_3137_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorIdx___boxed(lean_object* v_x_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorIdx(v_x_3138_);
lean_dec_ref(v_x_3138_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim___redArg(lean_object* v_t_3140_, lean_object* v_k_3141_){
_start:
{
if (lean_obj_tag(v_t_3140_) == 0)
{
lean_object* v_value_3142_; lean_object* v___x_3143_; 
v_value_3142_ = lean_ctor_get(v_t_3140_, 0);
lean_inc(v_value_3142_);
lean_dec_ref_known(v_t_3140_, 1);
v___x_3143_ = lean_apply_1(v_k_3141_, v_value_3142_);
return v___x_3143_;
}
else
{
lean_object* v_value_3144_; lean_object* v___x_3145_; 
v_value_3144_ = lean_ctor_get(v_t_3140_, 0);
lean_inc_ref(v_value_3144_);
lean_dec_ref_known(v_t_3140_, 1);
v___x_3145_ = lean_apply_1(v_k_3141_, v_value_3144_);
return v___x_3145_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim(lean_object* v_motive_3146_, lean_object* v_ctorIdx_3147_, lean_object* v_t_3148_, lean_object* v_h_3149_, lean_object* v_k_3150_){
_start:
{
lean_object* v___x_3151_; 
v___x_3151_ = l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim___redArg(v_t_3148_, v_k_3150_);
return v___x_3151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim___boxed(lean_object* v_motive_3152_, lean_object* v_ctorIdx_3153_, lean_object* v_t_3154_, lean_object* v_h_3155_, lean_object* v_k_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim(v_motive_3152_, v_ctorIdx_3153_, v_t_3154_, v_h_3155_, v_k_3156_);
lean_dec(v_ctorIdx_3153_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_jsFunction_elim___redArg(lean_object* v_t_3158_, lean_object* v_jsFunction_3159_){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim___redArg(v_t_3158_, v_jsFunction_3159_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_jsFunction_elim(lean_object* v_motive_3161_, lean_object* v_t_3162_, lean_object* v_h_3163_, lean_object* v_jsFunction_3164_){
_start:
{
lean_object* v___x_3165_; 
v___x_3165_ = l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim___redArg(v_t_3162_, v_jsFunction_3164_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_sequence_elim___redArg(lean_object* v_t_3166_, lean_object* v_sequence_3167_){
_start:
{
lean_object* v___x_3168_; 
v___x_3168_ = l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim___redArg(v_t_3166_, v_sequence_3167_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_sequence_elim(lean_object* v_motive_3169_, lean_object* v_t_3170_, lean_object* v_h_3171_, lean_object* v_sequence_3172_){
_start:
{
lean_object* v___x_3173_; 
v___x_3173_ = l_Lasm_JS_Node_JSFunctionOrSequenceOfDOMString_ctorElim___redArg(v_t_3170_, v_sequence_3172_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString___lam__0(lean_object* v_x_3174_){
_start:
{
lean_object* v___x_3175_; 
v___x_3175_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3175_, 0, v_x_3174_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString___lam__1(lean_object* v___f_3176_, lean_object* v_x_3177_){
_start:
{
if (lean_obj_tag(v_x_3177_) == 0)
{
lean_object* v_value_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; 
lean_dec_ref(v___f_3176_);
v_value_3178_ = lean_ctor_get(v_x_3177_, 0);
lean_inc(v_value_3178_);
lean_dec_ref_known(v_x_3177_, 1);
v___x_3179_ = lean_mk_string_unchecked("", 0, 0);
v___x_3180_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3180_, 0, v_value_3178_);
lean_ctor_set(v___x_3180_, 1, v___x_3179_);
return v___x_3180_;
}
else
{
lean_object* v_value_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3201_; 
v_value_3181_ = lean_ctor_get(v_x_3177_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v_x_3177_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3183_ = v_x_3177_;
v_isShared_3184_ = v_isSharedCheck_3201_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_value_3181_);
lean_dec(v_x_3177_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3201_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___f_3185_; lean_object* v___f_3186_; lean_object* v___f_3187_; lean_object* v___f_3188_; lean_object* v___f_3189_; lean_object* v___f_3190_; lean_object* v___f_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; size_t v_sz_3195_; size_t v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3199_; 
v___f_3185_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_3186_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_3187_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_3188_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_3189_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_3190_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_3191_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_3192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3192_, 0, v___f_3185_);
lean_ctor_set(v___x_3192_, 1, v___f_3186_);
v___x_3193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3192_);
lean_ctor_set(v___x_3193_, 1, v___f_3187_);
lean_ctor_set(v___x_3193_, 2, v___f_3188_);
lean_ctor_set(v___x_3193_, 3, v___f_3189_);
lean_ctor_set(v___x_3193_, 4, v___f_3190_);
v___x_3194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
lean_ctor_set(v___x_3194_, 1, v___f_3191_);
v_sz_3195_ = lean_array_size(v_value_3181_);
v___x_3196_ = ((size_t)0ULL);
v___x_3197_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_3194_, v___f_3176_, v_sz_3195_, v___x_3196_, v_value_3181_);
if (v_isShared_3184_ == 0)
{
lean_ctor_set_tag(v___x_3183_, 7);
lean_ctor_set(v___x_3183_, 0, v___x_3197_);
v___x_3199_ = v___x_3183_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v___x_3197_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString(void){
_start:
{
lean_object* v___f_3202_; lean_object* v___f_3203_; 
v___f_3202_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString___lam__0), 1, 0);
v___f_3203_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString___lam__1), 2, 1);
lean_closure_set(v___f_3203_, 0, v___f_3202_);
return v___f_3203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionJSFunctionOrSequenceOfDOMString___lam__0(lean_object* v_value_3204_){
_start:
{
lean_object* v___x_3205_; 
v___x_3205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3205_, 0, v_value_3204_);
return v___x_3205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayStringJSFunctionOrSequenceOfDOMString___lam__0(lean_object* v_value_3207_){
_start:
{
lean_object* v___x_3208_; 
v___x_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3208_, 0, v_value_3207_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesGlobOptions___lam__0(lean_object* v___f_3210_, lean_object* v___x_3211_, lean_object* v___f_3212_, lean_object* v_d_3213_){
_start:
{
lean_object* v_cwd_3214_; lean_object* v_exclude_3215_; lean_object* v_followSymlinks_3216_; lean_object* v_withFileTypes_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v_cwd_3214_ = lean_ctor_get(v_d_3213_, 0);
lean_inc(v_cwd_3214_);
v_exclude_3215_ = lean_ctor_get(v_d_3213_, 1);
lean_inc(v_exclude_3215_);
v_followSymlinks_3216_ = lean_ctor_get(v_d_3213_, 2);
lean_inc(v_followSymlinks_3216_);
v_withFileTypes_3217_ = lean_ctor_get(v_d_3213_, 3);
lean_inc(v_withFileTypes_3217_);
lean_dec_ref(v_d_3213_);
v___x_3218_ = lean_mk_string_unchecked("cwd", 3, 3);
v___x_3219_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3210_, v_cwd_3214_);
v___x_3220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3220_, 0, v___x_3218_);
lean_ctor_set(v___x_3220_, 1, v___x_3219_);
v___x_3221_ = lean_mk_string_unchecked("exclude", 7, 7);
v___x_3222_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_3211_, v_exclude_3215_);
v___x_3223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3221_);
lean_ctor_set(v___x_3223_, 1, v___x_3222_);
v___x_3224_ = lean_mk_string_unchecked("followSymlinks", 14, 14);
lean_inc_ref(v___f_3212_);
v___x_3225_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3212_, v_followSymlinks_3216_);
v___x_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3224_);
lean_ctor_set(v___x_3226_, 1, v___x_3225_);
v___x_3227_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
v___x_3228_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3212_, v_withFileTypes_3217_);
v___x_3229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3227_);
lean_ctor_set(v___x_3229_, 1, v___x_3228_);
v___x_3230_ = lean_unsigned_to_nat(4u);
v___x_3231_ = lean_mk_empty_array_with_capacity(v___x_3230_);
v___x_3232_ = lean_array_push(v___x_3231_, v___x_3220_);
v___x_3233_ = lean_array_push(v___x_3232_, v___x_3223_);
v___x_3234_ = lean_array_push(v___x_3233_, v___x_3226_);
v___x_3235_ = lean_array_push(v___x_3234_, v___x_3229_);
v___x_3236_ = l_Lasm_JS_Web_Internal_fields(v___x_3235_);
lean_dec_ref(v___x_3235_);
return v___x_3236_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesGlobOptions(void){
_start:
{
lean_object* v___f_3237_; lean_object* v___x_3238_; lean_object* v___f_3239_; lean_object* v___f_3240_; 
v___f_3237_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0), 1, 0);
v___x_3238_ = l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString;
v___f_3239_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_3240_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesGlobOptions___lam__0), 4, 3);
lean_closure_set(v___f_3240_, 0, v___f_3237_);
lean_closure_set(v___f_3240_, 1, v___x_3238_);
lean_closure_set(v___f_3240_, 2, v___f_3239_);
return v___f_3240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesLstatOptions___lam__0(lean_object* v___f_3241_, lean_object* v_d_3242_){
_start:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3243_ = lean_mk_string_unchecked("bigint", 6, 6);
v___x_3244_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3241_, v_d_3242_);
v___x_3245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3243_);
lean_ctor_set(v___x_3245_, 1, v___x_3244_);
v___x_3246_ = lean_unsigned_to_nat(1u);
v___x_3247_ = lean_mk_empty_array_with_capacity(v___x_3246_);
v___x_3248_ = lean_array_push(v___x_3247_, v___x_3245_);
v___x_3249_ = l_Lasm_JS_Web_Internal_fields(v___x_3248_);
lean_dec_ref(v___x_3248_);
return v___x_3249_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesLstatOptions(void){
_start:
{
lean_object* v___f_3250_; lean_object* v___f_3251_; 
v___f_3250_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_3251_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesLstatOptions___lam__0), 2, 1);
lean_closure_set(v___f_3251_, 0, v___f_3250_);
return v___f_3251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdirOptions___lam__0(lean_object* v___f_3252_, lean_object* v___f_3253_, lean_object* v_d_3254_){
_start:
{
lean_object* v_recursive_3255_; lean_object* v_mode_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3273_; 
v_recursive_3255_ = lean_ctor_get(v_d_3254_, 0);
v_mode_3256_ = lean_ctor_get(v_d_3254_, 1);
v_isSharedCheck_3273_ = !lean_is_exclusive(v_d_3254_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3258_ = v_d_3254_;
v_isShared_3259_ = v_isSharedCheck_3273_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_mode_3256_);
lean_inc(v_recursive_3255_);
lean_dec(v_d_3254_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3273_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3263_; 
v___x_3260_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_3261_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3252_, v_recursive_3255_);
if (v_isShared_3259_ == 0)
{
lean_ctor_set(v___x_3258_, 1, v___x_3261_);
lean_ctor_set(v___x_3258_, 0, v___x_3260_);
v___x_3263_ = v___x_3258_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v___x_3260_);
lean_ctor_set(v_reuseFailAlloc_3272_, 1, v___x_3261_);
v___x_3263_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3264_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_3265_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3253_, v_mode_3256_);
v___x_3266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3264_);
lean_ctor_set(v___x_3266_, 1, v___x_3265_);
v___x_3267_ = lean_unsigned_to_nat(2u);
v___x_3268_ = lean_mk_empty_array_with_capacity(v___x_3267_);
v___x_3269_ = lean_array_push(v___x_3268_, v___x_3263_);
v___x_3270_ = lean_array_push(v___x_3269_, v___x_3266_);
v___x_3271_ = l_Lasm_JS_Web_Internal_fields(v___x_3270_);
lean_dec_ref(v___x_3270_);
return v___x_3271_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesMkdirOptions(void){
_start:
{
lean_object* v___f_3274_; lean_object* v___f_3275_; lean_object* v___f_3276_; 
v___f_3274_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_3275_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0), 1, 0);
v___f_3276_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdirOptions___lam__0), 3, 2);
lean_closure_set(v___f_3276_, 0, v___f_3274_);
lean_closure_set(v___f_3276_, 1, v___f_3275_);
return v___f_3276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx(lean_object* v_x_3277_){
_start:
{
if (lean_obj_tag(v_x_3277_) == 0)
{
lean_object* v___x_3278_; 
v___x_3278_ = lean_unsigned_to_nat(0u);
return v___x_3278_;
}
else
{
lean_object* v___x_3279_; 
v___x_3279_ = lean_unsigned_to_nat(1u);
return v___x_3279_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx___boxed(lean_object* v_x_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx(v_x_3280_);
lean_dec_ref(v_x_3280_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(lean_object* v_t_3282_, lean_object* v_k_3283_){
_start:
{
if (lean_obj_tag(v_t_3282_) == 0)
{
lean_object* v_value_3284_; lean_object* v___x_3285_; 
v_value_3284_ = lean_ctor_get(v_t_3282_, 0);
lean_inc_ref(v_value_3284_);
lean_dec_ref_known(v_t_3282_, 1);
v___x_3285_ = lean_apply_1(v_k_3283_, v_value_3284_);
return v___x_3285_;
}
else
{
lean_object* v_value_3286_; lean_object* v___x_3287_; 
v_value_3286_ = lean_ctor_get(v_t_3282_, 0);
lean_inc(v_value_3286_);
lean_dec_ref_known(v_t_3282_, 1);
v___x_3287_ = lean_apply_1(v_k_3283_, v_value_3286_);
return v___x_3287_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim(lean_object* v_motive_3288_, lean_object* v_ctorIdx_3289_, lean_object* v_t_3290_, lean_object* v_h_3291_, lean_object* v_k_3292_){
_start:
{
lean_object* v___x_3293_; 
v___x_3293_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_3290_, v_k_3292_);
return v___x_3293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___boxed(lean_object* v_motive_3294_, lean_object* v_ctorIdx_3295_, lean_object* v_t_3296_, lean_object* v_h_3297_, lean_object* v_k_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim(v_motive_3294_, v_ctorIdx_3295_, v_t_3296_, v_h_3297_, v_k_3298_);
lean_dec(v_ctorIdx_3295_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_mkdirOptions_elim___redArg(lean_object* v_t_3300_, lean_object* v_mkdirOptions_3301_){
_start:
{
lean_object* v___x_3302_; 
v___x_3302_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_3300_, v_mkdirOptions_3301_);
return v___x_3302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_mkdirOptions_elim(lean_object* v_motive_3303_, lean_object* v_t_3304_, lean_object* v_h_3305_, lean_object* v_mkdirOptions_3306_){
_start:
{
lean_object* v___x_3307_; 
v___x_3307_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_3304_, v_mkdirOptions_3306_);
return v___x_3307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_longLong_elim___redArg(lean_object* v_t_3308_, lean_object* v_longLong_3309_){
_start:
{
lean_object* v___x_3310_; 
v___x_3310_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_3308_, v_longLong_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_longLong_elim(lean_object* v_motive_3311_, lean_object* v_t_3312_, lean_object* v_h_3313_, lean_object* v_longLong_3314_){
_start:
{
lean_object* v___x_3315_; 
v___x_3315_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_3312_, v_longLong_3314_);
return v___x_3315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdirOptionsOrLongLong___lam__0(lean_object* v_x_3316_){
_start:
{
if (lean_obj_tag(v_x_3316_) == 0)
{
lean_object* v_value_3317_; lean_object* v_recursive_3318_; lean_object* v_mode_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3338_; 
v_value_3317_ = lean_ctor_get(v_x_3316_, 0);
lean_inc_ref(v_value_3317_);
lean_dec_ref_known(v_x_3316_, 1);
v_recursive_3318_ = lean_ctor_get(v_value_3317_, 0);
v_mode_3319_ = lean_ctor_get(v_value_3317_, 1);
v_isSharedCheck_3338_ = !lean_is_exclusive(v_value_3317_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3321_ = v_value_3317_;
v_isShared_3322_ = v_isSharedCheck_3338_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_mode_3319_);
lean_inc(v_recursive_3318_);
lean_dec(v_value_3317_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3338_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___f_3323_; lean_object* v___f_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3328_; 
v___f_3323_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_3324_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0), 1, 0);
v___x_3325_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_3326_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3323_, v_recursive_3318_);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 1, v___x_3326_);
lean_ctor_set(v___x_3321_, 0, v___x_3325_);
v___x_3328_ = v___x_3321_;
goto v_reusejp_3327_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v___x_3325_);
lean_ctor_set(v_reuseFailAlloc_3337_, 1, v___x_3326_);
v___x_3328_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3327_;
}
v_reusejp_3327_:
{
lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3329_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_3330_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3324_, v_mode_3319_);
v___x_3331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3329_);
lean_ctor_set(v___x_3331_, 1, v___x_3330_);
v___x_3332_ = lean_unsigned_to_nat(2u);
v___x_3333_ = lean_mk_empty_array_with_capacity(v___x_3332_);
v___x_3334_ = lean_array_push(v___x_3333_, v___x_3328_);
v___x_3335_ = lean_array_push(v___x_3334_, v___x_3331_);
v___x_3336_ = l_Lasm_JS_Web_Internal_fields(v___x_3335_);
lean_dec_ref(v___x_3335_);
return v___x_3336_;
}
}
}
else
{
lean_object* v_value_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3351_; 
v_value_3339_ = lean_ctor_get(v_x_3316_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v_x_3316_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3341_ = v_x_3316_;
v_isShared_3342_ = v_isSharedCheck_3351_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_value_3339_);
lean_dec(v_x_3316_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3351_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; uint8_t v___x_3345_; 
v___x_3343_ = lean_nat_abs(v_value_3339_);
v___x_3344_ = lean_cstr_to_nat("9007199254740991");
v___x_3345_ = lean_nat_dec_le(v___x_3343_, v___x_3344_);
lean_dec(v___x_3343_);
if (v___x_3345_ == 0)
{
lean_object* v___x_3347_; 
if (v_isShared_3342_ == 0)
{
lean_ctor_set_tag(v___x_3341_, 5);
v___x_3347_ = v___x_3341_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_value_3339_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
else
{
double v___x_3349_; lean_object* v___x_3350_; 
lean_del_object(v___x_3341_);
v___x_3349_ = l_Float_ofInt(v_value_3339_);
lean_dec(v_value_3339_);
v___x_3350_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3350_, 0, v___x_3349_);
return v___x_3350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesMkdirOptionsFsPromisesMkdirOptionsOrLongLong___lam__0(lean_object* v_value_3353_){
_start:
{
lean_object* v___x_3354_; 
v___x_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3354_, 0, v_value_3353_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntFsPromisesMkdirOptionsOrLongLong___lam__0(lean_object* v_value_3356_){
_start:
{
lean_object* v___x_3357_; 
v___x_3357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3357_, 0, v_value_3356_);
return v___x_3357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0(lean_object* v___f_3359_, lean_object* v_d_3360_){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v___x_3361_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_3362_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3359_, v_d_3360_);
v___x_3363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3361_);
lean_ctor_set(v___x_3363_, 1, v___x_3362_);
v___x_3364_ = lean_unsigned_to_nat(1u);
v___x_3365_ = lean_mk_empty_array_with_capacity(v___x_3364_);
v___x_3366_ = lean_array_push(v___x_3365_, v___x_3363_);
v___x_3367_ = l_Lasm_JS_Web_Internal_fields(v___x_3366_);
lean_dec_ref(v___x_3366_);
return v___x_3367_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions(void){
_start:
{
lean_object* v___f_3368_; lean_object* v___f_3369_; 
v___f_3368_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_3369_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_3369_, 0, v___f_3368_);
return v___f_3369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx(lean_object* v_x_3370_){
_start:
{
if (lean_obj_tag(v_x_3370_) == 0)
{
lean_object* v___x_3371_; 
v___x_3371_ = lean_unsigned_to_nat(0u);
return v___x_3371_;
}
else
{
lean_object* v___x_3372_; 
v___x_3372_ = lean_unsigned_to_nat(1u);
return v___x_3372_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx___boxed(lean_object* v_x_3373_){
_start:
{
lean_object* v_res_3374_; 
v_res_3374_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx(v_x_3373_);
lean_dec_ref(v_x_3373_);
return v_res_3374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(lean_object* v_t_3375_, lean_object* v_k_3376_){
_start:
{
if (lean_obj_tag(v_t_3375_) == 0)
{
lean_object* v_value_3377_; lean_object* v___x_3378_; 
v_value_3377_ = lean_ctor_get(v_t_3375_, 0);
lean_inc_ref(v_value_3377_);
lean_dec_ref_known(v_t_3375_, 1);
v___x_3378_ = lean_apply_1(v_k_3376_, v_value_3377_);
return v___x_3378_;
}
else
{
lean_object* v_value_3379_; lean_object* v___x_3380_; 
v_value_3379_ = lean_ctor_get(v_t_3375_, 0);
lean_inc(v_value_3379_);
lean_dec_ref_known(v_t_3375_, 1);
v___x_3380_ = lean_apply_1(v_k_3376_, v_value_3379_);
return v___x_3380_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim(lean_object* v_motive_3381_, lean_object* v_ctorIdx_3382_, lean_object* v_t_3383_, lean_object* v_h_3384_, lean_object* v_k_3385_){
_start:
{
lean_object* v___x_3386_; 
v___x_3386_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_3383_, v_k_3385_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___boxed(lean_object* v_motive_3387_, lean_object* v_ctorIdx_3388_, lean_object* v_t_3389_, lean_object* v_h_3390_, lean_object* v_k_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim(v_motive_3387_, v_ctorIdx_3388_, v_t_3389_, v_h_3390_, v_k_3391_);
lean_dec(v_ctorIdx_3388_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_domString_elim___redArg(lean_object* v_t_3393_, lean_object* v_domString_3394_){
_start:
{
lean_object* v___x_3395_; 
v___x_3395_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_3393_, v_domString_3394_);
return v___x_3395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_domString_elim(lean_object* v_motive_3396_, lean_object* v_t_3397_, lean_object* v_h_3398_, lean_object* v_domString_3399_){
_start:
{
lean_object* v___x_3400_; 
v___x_3400_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_3397_, v_domString_3399_);
return v___x_3400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_mkdtempOptions_elim___redArg(lean_object* v_t_3401_, lean_object* v_mkdtempOptions_3402_){
_start:
{
lean_object* v___x_3403_; 
v___x_3403_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_3401_, v_mkdtempOptions_3402_);
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_mkdtempOptions_elim(lean_object* v_motive_3404_, lean_object* v_t_3405_, lean_object* v_h_3406_, lean_object* v_mkdtempOptions_3407_){
_start:
{
lean_object* v___x_3408_; 
v___x_3408_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_3405_, v_mkdtempOptions_3407_);
return v___x_3408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempOptions___lam__0(lean_object* v_x_3409_){
_start:
{
if (lean_obj_tag(v_x_3409_) == 0)
{
lean_object* v_value_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
v_value_3410_ = lean_ctor_get(v_x_3409_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v_x_3409_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v_x_3409_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_value_3410_);
lean_dec(v_x_3409_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
lean_ctor_set_tag(v___x_3412_, 4);
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_value_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
else
{
lean_object* v_value_3418_; lean_object* v___f_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v_value_3418_ = lean_ctor_get(v_x_3409_, 0);
lean_inc(v_value_3418_);
lean_dec_ref_known(v_x_3409_, 1);
v___f_3419_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_3420_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_3421_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3419_, v_value_3418_);
v___x_3422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3420_);
lean_ctor_set(v___x_3422_, 1, v___x_3421_);
v___x_3423_ = lean_unsigned_to_nat(1u);
v___x_3424_ = lean_mk_empty_array_with_capacity(v___x_3423_);
v___x_3425_ = lean_array_push(v___x_3424_, v___x_3422_);
v___x_3426_ = l_Lasm_JS_Web_Internal_fields(v___x_3425_);
lean_dec_ref(v___x_3425_);
return v___x_3426_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempOptions___lam__0(lean_object* v_value_3428_){
_start:
{
lean_object* v___x_3429_; 
v___x_3429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3429_, 0, v_value_3428_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesMkdtempOptionsFsPromisesDOMStringOrMkdtempOptions___lam__0(lean_object* v_value_3431_){
_start:
{
lean_object* v___x_3432_; 
v___x_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3432_, 0, v_value_3431_);
return v___x_3432_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesMkdtempDisposableOptions(void){
_start:
{
lean_object* v___f_3434_; lean_object* v___f_3435_; 
v___f_3434_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_3435_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_3435_, 0, v___f_3434_);
return v___f_3435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorIdx(lean_object* v_x_3436_){
_start:
{
if (lean_obj_tag(v_x_3436_) == 0)
{
lean_object* v___x_3437_; 
v___x_3437_ = lean_unsigned_to_nat(0u);
return v___x_3437_;
}
else
{
lean_object* v___x_3438_; 
v___x_3438_ = lean_unsigned_to_nat(1u);
return v___x_3438_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorIdx___boxed(lean_object* v_x_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorIdx(v_x_3439_);
lean_dec_ref(v_x_3439_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim___redArg(lean_object* v_t_3441_, lean_object* v_k_3442_){
_start:
{
if (lean_obj_tag(v_t_3441_) == 0)
{
lean_object* v_value_3443_; lean_object* v___x_3444_; 
v_value_3443_ = lean_ctor_get(v_t_3441_, 0);
lean_inc_ref(v_value_3443_);
lean_dec_ref_known(v_t_3441_, 1);
v___x_3444_ = lean_apply_1(v_k_3442_, v_value_3443_);
return v___x_3444_;
}
else
{
lean_object* v_value_3445_; lean_object* v___x_3446_; 
v_value_3445_ = lean_ctor_get(v_t_3441_, 0);
lean_inc(v_value_3445_);
lean_dec_ref_known(v_t_3441_, 1);
v___x_3446_ = lean_apply_1(v_k_3442_, v_value_3445_);
return v___x_3446_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim(lean_object* v_motive_3447_, lean_object* v_ctorIdx_3448_, lean_object* v_t_3449_, lean_object* v_h_3450_, lean_object* v_k_3451_){
_start:
{
lean_object* v___x_3452_; 
v___x_3452_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim___redArg(v_t_3449_, v_k_3451_);
return v___x_3452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim___boxed(lean_object* v_motive_3453_, lean_object* v_ctorIdx_3454_, lean_object* v_t_3455_, lean_object* v_h_3456_, lean_object* v_k_3457_){
_start:
{
lean_object* v_res_3458_; 
v_res_3458_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim(v_motive_3453_, v_ctorIdx_3454_, v_t_3455_, v_h_3456_, v_k_3457_);
lean_dec(v_ctorIdx_3454_);
return v_res_3458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_domString_elim___redArg(lean_object* v_t_3459_, lean_object* v_domString_3460_){
_start:
{
lean_object* v___x_3461_; 
v___x_3461_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim___redArg(v_t_3459_, v_domString_3460_);
return v___x_3461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_domString_elim(lean_object* v_motive_3462_, lean_object* v_t_3463_, lean_object* v_h_3464_, lean_object* v_domString_3465_){
_start:
{
lean_object* v___x_3466_; 
v___x_3466_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim___redArg(v_t_3463_, v_domString_3465_);
return v___x_3466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_mkdtempDisposableOptions_elim___redArg(lean_object* v_t_3467_, lean_object* v_mkdtempDisposableOptions_3468_){
_start:
{
lean_object* v___x_3469_; 
v___x_3469_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim___redArg(v_t_3467_, v_mkdtempDisposableOptions_3468_);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_mkdtempDisposableOptions_elim(lean_object* v_motive_3470_, lean_object* v_t_3471_, lean_object* v_h_3472_, lean_object* v_mkdtempDisposableOptions_3473_){
_start:
{
lean_object* v___x_3474_; 
v___x_3474_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempDisposableOptions_ctorElim___redArg(v_t_3471_, v_mkdtempDisposableOptions_3473_);
return v___x_3474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrMkdtempDisposableOptions___lam__0(lean_object* v_x_3475_){
_start:
{
if (lean_obj_tag(v_x_3475_) == 0)
{
lean_object* v_value_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3483_; 
v_value_3476_ = lean_ctor_get(v_x_3475_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v_x_3475_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3478_ = v_x_3475_;
v_isShared_3479_ = v_isSharedCheck_3483_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_value_3476_);
lean_dec(v_x_3475_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3483_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3481_; 
if (v_isShared_3479_ == 0)
{
lean_ctor_set_tag(v___x_3478_, 4);
v___x_3481_ = v___x_3478_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_value_3476_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
else
{
lean_object* v_value_3484_; lean_object* v___f_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v_value_3484_ = lean_ctor_get(v_x_3475_, 0);
lean_inc(v_value_3484_);
lean_dec_ref_known(v_x_3475_, 1);
v___f_3485_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_3486_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_3487_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3485_, v_value_3484_);
v___x_3488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3488_, 0, v___x_3486_);
lean_ctor_set(v___x_3488_, 1, v___x_3487_);
v___x_3489_ = lean_unsigned_to_nat(1u);
v___x_3490_ = lean_mk_empty_array_with_capacity(v___x_3489_);
v___x_3491_ = lean_array_push(v___x_3490_, v___x_3488_);
v___x_3492_ = l_Lasm_JS_Web_Internal_fields(v___x_3491_);
lean_dec_ref(v___x_3491_);
return v___x_3492_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrMkdtempDisposableOptions___lam__0(lean_object* v_value_3494_){
_start:
{
lean_object* v___x_3495_; 
v___x_3495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3495_, 0, v_value_3494_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesMkdtempDisposableOptionsFsPromisesDOMStringOrMkdtempDisposableOptions___lam__0(lean_object* v_value_3497_){
_start:
{
lean_object* v___x_3498_; 
v___x_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3498_, 0, v_value_3497_);
return v___x_3498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesOpendirOptions___lam__0(lean_object* v___f_3500_, lean_object* v___f_3501_, lean_object* v___f_3502_, lean_object* v_d_3503_){
_start:
{
lean_object* v_encoding_3504_; lean_object* v_bufferSize_3505_; lean_object* v_recursive_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v_encoding_3504_ = lean_ctor_get(v_d_3503_, 0);
lean_inc(v_encoding_3504_);
v_bufferSize_3505_ = lean_ctor_get(v_d_3503_, 1);
lean_inc(v_bufferSize_3505_);
v_recursive_3506_ = lean_ctor_get(v_d_3503_, 2);
lean_inc(v_recursive_3506_);
lean_dec_ref(v_d_3503_);
v___x_3507_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_3508_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3500_, v_encoding_3504_);
v___x_3509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3507_);
lean_ctor_set(v___x_3509_, 1, v___x_3508_);
v___x_3510_ = lean_mk_string_unchecked("bufferSize", 10, 10);
v___x_3511_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3501_, v_bufferSize_3505_);
v___x_3512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3510_);
lean_ctor_set(v___x_3512_, 1, v___x_3511_);
v___x_3513_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_3514_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3502_, v_recursive_3506_);
v___x_3515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3513_);
lean_ctor_set(v___x_3515_, 1, v___x_3514_);
v___x_3516_ = lean_unsigned_to_nat(3u);
v___x_3517_ = lean_mk_empty_array_with_capacity(v___x_3516_);
v___x_3518_ = lean_array_push(v___x_3517_, v___x_3509_);
v___x_3519_ = lean_array_push(v___x_3518_, v___x_3512_);
v___x_3520_ = lean_array_push(v___x_3519_, v___x_3515_);
v___x_3521_ = l_Lasm_JS_Web_Internal_fields(v___x_3520_);
lean_dec_ref(v___x_3520_);
return v___x_3521_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesOpendirOptions(void){
_start:
{
lean_object* v___f_3522_; lean_object* v___f_3523_; lean_object* v___f_3524_; lean_object* v___f_3525_; 
v___f_3522_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_3523_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_3524_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_3525_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesOpendirOptions___lam__0), 4, 3);
lean_closure_set(v___f_3525_, 0, v___f_3522_);
lean_closure_set(v___f_3525_, 1, v___f_3523_);
lean_closure_set(v___f_3525_, 2, v___f_3524_);
return v___f_3525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesReaddirOptions___lam__0(lean_object* v___f_3526_, lean_object* v___f_3527_, lean_object* v_d_3528_){
_start:
{
lean_object* v_encoding_3529_; lean_object* v_withFileTypes_3530_; lean_object* v_recursive_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v_encoding_3529_ = lean_ctor_get(v_d_3528_, 0);
lean_inc(v_encoding_3529_);
v_withFileTypes_3530_ = lean_ctor_get(v_d_3528_, 1);
lean_inc(v_withFileTypes_3530_);
v_recursive_3531_ = lean_ctor_get(v_d_3528_, 2);
lean_inc(v_recursive_3531_);
lean_dec_ref(v_d_3528_);
v___x_3532_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_3533_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3526_, v_encoding_3529_);
v___x_3534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3532_);
lean_ctor_set(v___x_3534_, 1, v___x_3533_);
v___x_3535_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
lean_inc_ref(v___f_3527_);
v___x_3536_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3527_, v_withFileTypes_3530_);
v___x_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3535_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_3539_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3527_, v_recursive_3531_);
v___x_3540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3538_);
lean_ctor_set(v___x_3540_, 1, v___x_3539_);
v___x_3541_ = lean_unsigned_to_nat(3u);
v___x_3542_ = lean_mk_empty_array_with_capacity(v___x_3541_);
v___x_3543_ = lean_array_push(v___x_3542_, v___x_3534_);
v___x_3544_ = lean_array_push(v___x_3543_, v___x_3537_);
v___x_3545_ = lean_array_push(v___x_3544_, v___x_3540_);
v___x_3546_ = l_Lasm_JS_Web_Internal_fields(v___x_3545_);
lean_dec_ref(v___x_3545_);
return v___x_3546_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesReaddirOptions(void){
_start:
{
lean_object* v___f_3547_; lean_object* v___f_3548_; lean_object* v___f_3549_; 
v___f_3547_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_3548_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_3549_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesReaddirOptions___lam__0), 3, 2);
lean_closure_set(v___f_3549_, 0, v___f_3547_);
lean_closure_set(v___f_3549_, 1, v___f_3548_);
return v___f_3549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx(lean_object* v_x_3550_){
_start:
{
if (lean_obj_tag(v_x_3550_) == 0)
{
lean_object* v___x_3551_; 
v___x_3551_ = lean_unsigned_to_nat(0u);
return v___x_3551_;
}
else
{
lean_object* v___x_3552_; 
v___x_3552_ = lean_unsigned_to_nat(1u);
return v___x_3552_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx___boxed(lean_object* v_x_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx(v_x_3553_);
lean_dec_ref(v_x_3553_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(lean_object* v_t_3555_, lean_object* v_k_3556_){
_start:
{
lean_object* v_value_3557_; lean_object* v___x_3558_; 
v_value_3557_ = lean_ctor_get(v_t_3555_, 0);
lean_inc_ref(v_value_3557_);
lean_dec_ref(v_t_3555_);
v___x_3558_ = lean_apply_1(v_k_3556_, v_value_3557_);
return v___x_3558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim(lean_object* v_motive_3559_, lean_object* v_ctorIdx_3560_, lean_object* v_t_3561_, lean_object* v_h_3562_, lean_object* v_k_3563_){
_start:
{
lean_object* v___x_3564_; 
v___x_3564_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_3561_, v_k_3563_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___boxed(lean_object* v_motive_3565_, lean_object* v_ctorIdx_3566_, lean_object* v_t_3567_, lean_object* v_h_3568_, lean_object* v_k_3569_){
_start:
{
lean_object* v_res_3570_; 
v_res_3570_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim(v_motive_3565_, v_ctorIdx_3566_, v_t_3567_, v_h_3568_, v_k_3569_);
lean_dec(v_ctorIdx_3566_);
return v_res_3570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_domString_elim___redArg(lean_object* v_t_3571_, lean_object* v_domString_3572_){
_start:
{
lean_object* v___x_3573_; 
v___x_3573_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_3571_, v_domString_3572_);
return v___x_3573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_domString_elim(lean_object* v_motive_3574_, lean_object* v_t_3575_, lean_object* v_h_3576_, lean_object* v_domString_3577_){
_start:
{
lean_object* v___x_3578_; 
v___x_3578_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_3575_, v_domString_3577_);
return v___x_3578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_readdirOptions_elim___redArg(lean_object* v_t_3579_, lean_object* v_readdirOptions_3580_){
_start:
{
lean_object* v___x_3581_; 
v___x_3581_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_3579_, v_readdirOptions_3580_);
return v___x_3581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_readdirOptions_elim(lean_object* v_motive_3582_, lean_object* v_t_3583_, lean_object* v_h_3584_, lean_object* v_readdirOptions_3585_){
_start:
{
lean_object* v___x_3586_; 
v___x_3586_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_3583_, v_readdirOptions_3585_);
return v___x_3586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReaddirOptions___lam__0(lean_object* v_x_3587_){
_start:
{
if (lean_obj_tag(v_x_3587_) == 0)
{
lean_object* v_value_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
v_value_3588_ = lean_ctor_get(v_x_3587_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v_x_3587_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v_x_3587_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_value_3588_);
lean_dec(v_x_3587_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
lean_ctor_set_tag(v___x_3590_, 4);
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_value_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
else
{
lean_object* v_value_3596_; lean_object* v_encoding_3597_; lean_object* v_withFileTypes_3598_; lean_object* v_recursive_3599_; lean_object* v___f_3600_; lean_object* v___f_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
v_value_3596_ = lean_ctor_get(v_x_3587_, 0);
lean_inc_ref(v_value_3596_);
lean_dec_ref_known(v_x_3587_, 1);
v_encoding_3597_ = lean_ctor_get(v_value_3596_, 0);
lean_inc(v_encoding_3597_);
v_withFileTypes_3598_ = lean_ctor_get(v_value_3596_, 1);
lean_inc(v_withFileTypes_3598_);
v_recursive_3599_ = lean_ctor_get(v_value_3596_, 2);
lean_inc(v_recursive_3599_);
lean_dec_ref(v_value_3596_);
v___f_3600_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_3601_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_3602_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_3603_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3600_, v_encoding_3597_);
v___x_3604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3602_);
lean_ctor_set(v___x_3604_, 1, v___x_3603_);
v___x_3605_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
lean_inc_ref(v___f_3601_);
v___x_3606_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3601_, v_withFileTypes_3598_);
v___x_3607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3605_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
v___x_3608_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_3609_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3601_, v_recursive_3599_);
v___x_3610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3608_);
lean_ctor_set(v___x_3610_, 1, v___x_3609_);
v___x_3611_ = lean_unsigned_to_nat(3u);
v___x_3612_ = lean_mk_empty_array_with_capacity(v___x_3611_);
v___x_3613_ = lean_array_push(v___x_3612_, v___x_3604_);
v___x_3614_ = lean_array_push(v___x_3613_, v___x_3607_);
v___x_3615_ = lean_array_push(v___x_3614_, v___x_3610_);
v___x_3616_ = l_Lasm_JS_Web_Internal_fields(v___x_3615_);
lean_dec_ref(v___x_3615_);
return v___x_3616_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReaddirOptions___lam__0(lean_object* v_value_3618_){
_start:
{
lean_object* v___x_3619_; 
v___x_3619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3619_, 0, v_value_3618_);
return v___x_3619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesReaddirOptionsFsPromisesDOMStringOrReaddirOptions___lam__0(lean_object* v_value_3621_){
_start:
{
lean_object* v___x_3622_; 
v___x_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3622_, 0, v_value_3621_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorIdx(lean_object* v_x_3624_){
_start:
{
switch(lean_obj_tag(v_x_3624_))
{
case 0:
{
lean_object* v___x_3625_; 
v___x_3625_ = lean_unsigned_to_nat(0u);
return v___x_3625_;
}
case 1:
{
lean_object* v___x_3626_; 
v___x_3626_ = lean_unsigned_to_nat(1u);
return v___x_3626_;
}
default: 
{
lean_object* v___x_3627_; 
v___x_3627_ = lean_unsigned_to_nat(2u);
return v___x_3627_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorIdx___boxed(lean_object* v_x_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorIdx(v_x_3628_);
lean_dec_ref(v_x_3628_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(lean_object* v_t_3630_, lean_object* v_k_3631_){
_start:
{
if (lean_obj_tag(v_t_3630_) == 2)
{
lean_object* v_value_3632_; lean_object* v___x_3633_; 
v_value_3632_ = lean_ctor_get(v_t_3630_, 0);
lean_inc(v_value_3632_);
lean_dec_ref_known(v_t_3630_, 1);
v___x_3633_ = lean_apply_1(v_k_3631_, v_value_3632_);
return v___x_3633_;
}
else
{
lean_object* v_value_3634_; lean_object* v___x_3635_; 
v_value_3634_ = lean_ctor_get(v_t_3630_, 0);
lean_inc_ref(v_value_3634_);
lean_dec_ref(v_t_3630_);
v___x_3635_ = lean_apply_1(v_k_3631_, v_value_3634_);
return v___x_3635_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim(lean_object* v_motive_3636_, lean_object* v_ctorIdx_3637_, lean_object* v_t_3638_, lean_object* v_h_3639_, lean_object* v_k_3640_){
_start:
{
lean_object* v___x_3641_; 
v___x_3641_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_3638_, v_k_3640_);
return v___x_3641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___boxed(lean_object* v_motive_3642_, lean_object* v_ctorIdx_3643_, lean_object* v_t_3644_, lean_object* v_h_3645_, lean_object* v_k_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim(v_motive_3642_, v_ctorIdx_3643_, v_t_3644_, v_h_3645_, v_k_3646_);
lean_dec(v_ctorIdx_3643_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_domString_elim___redArg(lean_object* v_t_3648_, lean_object* v_domString_3649_){
_start:
{
lean_object* v___x_3650_; 
v___x_3650_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_3648_, v_domString_3649_);
return v___x_3650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_domString_elim(lean_object* v_motive_3651_, lean_object* v_t_3652_, lean_object* v_h_3653_, lean_object* v_domString_3654_){
_start:
{
lean_object* v___x_3655_; 
v___x_3655_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_3652_, v_domString_3654_);
return v___x_3655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_uint8Array_elim___redArg(lean_object* v_t_3656_, lean_object* v_uint8Array_3657_){
_start:
{
lean_object* v___x_3658_; 
v___x_3658_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_3656_, v_uint8Array_3657_);
return v___x_3658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_uint8Array_elim(lean_object* v_motive_3659_, lean_object* v_t_3660_, lean_object* v_h_3661_, lean_object* v_uint8Array_3662_){
_start:
{
lean_object* v___x_3663_; 
v___x_3663_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_3660_, v_uint8Array_3662_);
return v___x_3663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_dirent_elim___redArg(lean_object* v_t_3664_, lean_object* v_dirent_3665_){
_start:
{
lean_object* v___x_3666_; 
v___x_3666_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_3664_, v_dirent_3665_);
return v___x_3666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_dirent_elim(lean_object* v_motive_3667_, lean_object* v_t_3668_, lean_object* v_h_3669_, lean_object* v_dirent_3670_){
_start:
{
lean_object* v___x_3671_; 
v___x_3671_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_3668_, v_dirent_3670_);
return v___x_3671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFsDOMStringOrUint8ArrayOrDirent___lam__0(lean_object* v_x_3672_){
_start:
{
switch(lean_obj_tag(v_x_3672_))
{
case 4:
{
lean_object* v_s_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3681_; 
v_s_3673_ = lean_ctor_get(v_x_3672_, 0);
v_isSharedCheck_3681_ = !lean_is_exclusive(v_x_3672_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3675_ = v_x_3672_;
v_isShared_3676_ = v_isSharedCheck_3681_;
goto v_resetjp_3674_;
}
else
{
lean_inc(v_s_3673_);
lean_dec(v_x_3672_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3681_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
lean_object* v___x_3678_; 
if (v_isShared_3676_ == 0)
{
lean_ctor_set_tag(v___x_3675_, 0);
v___x_3678_ = v___x_3675_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_s_3673_);
v___x_3678_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
lean_object* v___x_3679_; 
v___x_3679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3679_, 0, v___x_3678_);
return v___x_3679_;
}
}
}
case 6:
{
lean_object* v_b_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3690_; 
v_b_3682_ = lean_ctor_get(v_x_3672_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v_x_3672_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3684_ = v_x_3672_;
v_isShared_3685_ = v_isSharedCheck_3690_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_b_3682_);
lean_dec(v_x_3672_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3690_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
lean_ctor_set_tag(v___x_3684_, 1);
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_b_3682_);
v___x_3687_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
lean_object* v___x_3688_; 
v___x_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3687_);
return v___x_3688_;
}
}
}
case 9:
{
lean_object* v_value_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v_value_3691_ = lean_ctor_get(v_x_3672_, 0);
lean_inc(v_value_3691_);
lean_dec_ref_known(v_x_3672_, 2);
v___x_3692_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3692_, 0, v_value_3691_);
v___x_3693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
return v___x_3693_;
}
default: 
{
lean_object* v___x_3694_; lean_object* v___x_3695_; 
lean_dec(v_x_3672_);
v___x_3694_ = lean_mk_string_unchecked("", 0, 0);
v___x_3695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3695_, 0, v___x_3694_);
return v___x_3695_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFsDOMStringOrUint8ArrayOrDirent(void){
_start:
{
lean_object* v___f_3696_; lean_object* v___x_3697_; uint8_t v___x_3698_; lean_object* v___x_3699_; 
v___f_3696_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSFsDOMStringOrUint8ArrayOrDirent___lam__0), 1, 0);
v___x_3697_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.DOMStringOrUint8ArrayOrDirent", 45, 45);
v___x_3698_ = 0;
v___x_3699_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3699_, 0, v___f_3696_);
lean_ctor_set(v___x_3699_, 1, v___x_3697_);
lean_ctor_set_uint8(v___x_3699_, sizeof(void*)*2, v___x_3698_);
return v___x_3699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesReadFileOptions___lam__0(lean_object* v___f_3700_, lean_object* v___f_3701_, lean_object* v___f_3702_, lean_object* v_d_3703_){
_start:
{
lean_object* v_encoding_3704_; lean_object* v_flag_3705_; lean_object* v_signal_3706_; lean_object* v_buffer_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v_encoding_3704_ = lean_ctor_get(v_d_3703_, 0);
lean_inc(v_encoding_3704_);
v_flag_3705_ = lean_ctor_get(v_d_3703_, 1);
lean_inc(v_flag_3705_);
v_signal_3706_ = lean_ctor_get(v_d_3703_, 2);
lean_inc(v_signal_3706_);
v_buffer_3707_ = lean_ctor_get(v_d_3703_, 3);
lean_inc(v_buffer_3707_);
lean_dec_ref(v_d_3703_);
v___x_3708_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_3700_);
v___x_3709_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3700_, v_encoding_3704_);
v___x_3710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3710_, 0, v___x_3708_);
lean_ctor_set(v___x_3710_, 1, v___x_3709_);
v___x_3711_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_3712_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3700_, v_flag_3705_);
v___x_3713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3711_);
lean_ctor_set(v___x_3713_, 1, v___x_3712_);
v___x_3714_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_3715_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3701_, v_signal_3706_);
v___x_3716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3714_);
lean_ctor_set(v___x_3716_, 1, v___x_3715_);
v___x_3717_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_3718_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3702_, v_buffer_3707_);
v___x_3719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3717_);
lean_ctor_set(v___x_3719_, 1, v___x_3718_);
v___x_3720_ = lean_unsigned_to_nat(4u);
v___x_3721_ = lean_mk_empty_array_with_capacity(v___x_3720_);
v___x_3722_ = lean_array_push(v___x_3721_, v___x_3710_);
v___x_3723_ = lean_array_push(v___x_3722_, v___x_3713_);
v___x_3724_ = lean_array_push(v___x_3723_, v___x_3716_);
v___x_3725_ = lean_array_push(v___x_3724_, v___x_3719_);
v___x_3726_ = l_Lasm_JS_Web_Internal_fields(v___x_3725_);
lean_dec_ref(v___x_3725_);
return v___x_3726_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesReadFileOptions(void){
_start:
{
lean_object* v___f_3727_; lean_object* v___f_3728_; lean_object* v___f_3729_; lean_object* v___f_3730_; 
v___f_3727_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_3728_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_3729_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___f_3730_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesReadFileOptions___lam__0), 4, 3);
lean_closure_set(v___f_3730_, 0, v___f_3727_);
lean_closure_set(v___f_3730_, 1, v___f_3728_);
lean_closure_set(v___f_3730_, 2, v___f_3729_);
return v___f_3730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx(lean_object* v_x_3731_){
_start:
{
if (lean_obj_tag(v_x_3731_) == 0)
{
lean_object* v___x_3732_; 
v___x_3732_ = lean_unsigned_to_nat(0u);
return v___x_3732_;
}
else
{
lean_object* v___x_3733_; 
v___x_3733_ = lean_unsigned_to_nat(1u);
return v___x_3733_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx(v_x_3734_);
lean_dec_ref(v_x_3734_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_3736_, lean_object* v_k_3737_){
_start:
{
lean_object* v_value_3738_; lean_object* v___x_3739_; 
v_value_3738_ = lean_ctor_get(v_t_3736_, 0);
lean_inc_ref(v_value_3738_);
lean_dec_ref(v_t_3736_);
v___x_3739_ = lean_apply_1(v_k_3737_, v_value_3738_);
return v___x_3739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim(lean_object* v_motive_3740_, lean_object* v_ctorIdx_3741_, lean_object* v_t_3742_, lean_object* v_h_3743_, lean_object* v_k_3744_){
_start:
{
lean_object* v___x_3745_; 
v___x_3745_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_3742_, v_k_3744_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_3746_, lean_object* v_ctorIdx_3747_, lean_object* v_t_3748_, lean_object* v_h_3749_, lean_object* v_k_3750_){
_start:
{
lean_object* v_res_3751_; 
v_res_3751_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim(v_motive_3746_, v_ctorIdx_3747_, v_t_3748_, v_h_3749_, v_k_3750_);
lean_dec(v_ctorIdx_3747_);
return v_res_3751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object* v_t_3752_, lean_object* v_readFileOptions_3753_){
_start:
{
lean_object* v___x_3754_; 
v___x_3754_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_3752_, v_readFileOptions_3753_);
return v___x_3754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object* v_motive_3755_, lean_object* v_t_3756_, lean_object* v_h_3757_, lean_object* v_readFileOptions_3758_){
_start:
{
lean_object* v___x_3759_; 
v___x_3759_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_3756_, v_readFileOptions_3758_);
return v___x_3759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_3760_, lean_object* v_domString_3761_){
_start:
{
lean_object* v___x_3762_; 
v___x_3762_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_3760_, v_domString_3761_);
return v___x_3762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_domString_elim(lean_object* v_motive_3763_, lean_object* v_t_3764_, lean_object* v_h_3765_, lean_object* v_domString_3766_){
_start:
{
lean_object* v___x_3767_; 
v___x_3767_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_3764_, v_domString_3766_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesReadFileOptionsOrDOMString___lam__0(lean_object* v_x_3768_){
_start:
{
if (lean_obj_tag(v_x_3768_) == 0)
{
lean_object* v_value_3769_; lean_object* v_encoding_3770_; lean_object* v_flag_3771_; lean_object* v_signal_3772_; lean_object* v_buffer_3773_; lean_object* v___f_3774_; lean_object* v___f_3775_; lean_object* v___f_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
v_value_3769_ = lean_ctor_get(v_x_3768_, 0);
lean_inc_ref(v_value_3769_);
lean_dec_ref_known(v_x_3768_, 1);
v_encoding_3770_ = lean_ctor_get(v_value_3769_, 0);
lean_inc(v_encoding_3770_);
v_flag_3771_ = lean_ctor_get(v_value_3769_, 1);
lean_inc(v_flag_3771_);
v_signal_3772_ = lean_ctor_get(v_value_3769_, 2);
lean_inc(v_signal_3772_);
v_buffer_3773_ = lean_ctor_get(v_value_3769_, 3);
lean_inc(v_buffer_3773_);
lean_dec_ref(v_value_3769_);
v___f_3774_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_3775_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_3776_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___x_3777_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_3774_);
v___x_3778_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3774_, v_encoding_3770_);
v___x_3779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3777_);
lean_ctor_set(v___x_3779_, 1, v___x_3778_);
v___x_3780_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_3781_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3774_, v_flag_3771_);
v___x_3782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3780_);
lean_ctor_set(v___x_3782_, 1, v___x_3781_);
v___x_3783_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_3784_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3775_, v_signal_3772_);
v___x_3785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3783_);
lean_ctor_set(v___x_3785_, 1, v___x_3784_);
v___x_3786_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_3787_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3776_, v_buffer_3773_);
v___x_3788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3786_);
lean_ctor_set(v___x_3788_, 1, v___x_3787_);
v___x_3789_ = lean_unsigned_to_nat(4u);
v___x_3790_ = lean_mk_empty_array_with_capacity(v___x_3789_);
v___x_3791_ = lean_array_push(v___x_3790_, v___x_3779_);
v___x_3792_ = lean_array_push(v___x_3791_, v___x_3782_);
v___x_3793_ = lean_array_push(v___x_3792_, v___x_3785_);
v___x_3794_ = lean_array_push(v___x_3793_, v___x_3788_);
v___x_3795_ = l_Lasm_JS_Web_Internal_fields(v___x_3794_);
lean_dec_ref(v___x_3794_);
return v___x_3795_;
}
else
{
lean_object* v_value_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
v_value_3796_ = lean_ctor_get(v_x_3768_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v_x_3768_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v_x_3768_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_value_3796_);
lean_dec(v_x_3768_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
lean_ctor_set_tag(v___x_3798_, 4);
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_value_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesReadFileOptionsFsPromisesReadFileOptionsOrDOMString___lam__0(lean_object* v_value_3805_){
_start:
{
lean_object* v___x_3806_; 
v___x_3806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3806_, 0, v_value_3805_);
return v___x_3806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesReadFileOptionsOrDOMString___lam__0(lean_object* v_value_3808_){
_start:
{
lean_object* v___x_3809_; 
v___x_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3809_, 0, v_value_3808_);
return v___x_3809_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesReadlinkOptions(void){
_start:
{
lean_object* v___f_3811_; lean_object* v___f_3812_; 
v___f_3811_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_3812_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_3812_, 0, v___f_3811_);
return v___f_3812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx(lean_object* v_x_3813_){
_start:
{
if (lean_obj_tag(v_x_3813_) == 0)
{
lean_object* v___x_3814_; 
v___x_3814_ = lean_unsigned_to_nat(0u);
return v___x_3814_;
}
else
{
lean_object* v___x_3815_; 
v___x_3815_ = lean_unsigned_to_nat(1u);
return v___x_3815_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx___boxed(lean_object* v_x_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx(v_x_3816_);
lean_dec_ref(v_x_3816_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(lean_object* v_t_3818_, lean_object* v_k_3819_){
_start:
{
if (lean_obj_tag(v_t_3818_) == 0)
{
lean_object* v_value_3820_; lean_object* v___x_3821_; 
v_value_3820_ = lean_ctor_get(v_t_3818_, 0);
lean_inc_ref(v_value_3820_);
lean_dec_ref_known(v_t_3818_, 1);
v___x_3821_ = lean_apply_1(v_k_3819_, v_value_3820_);
return v___x_3821_;
}
else
{
lean_object* v_value_3822_; lean_object* v___x_3823_; 
v_value_3822_ = lean_ctor_get(v_t_3818_, 0);
lean_inc(v_value_3822_);
lean_dec_ref_known(v_t_3818_, 1);
v___x_3823_ = lean_apply_1(v_k_3819_, v_value_3822_);
return v___x_3823_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim(lean_object* v_motive_3824_, lean_object* v_ctorIdx_3825_, lean_object* v_t_3826_, lean_object* v_h_3827_, lean_object* v_k_3828_){
_start:
{
lean_object* v___x_3829_; 
v___x_3829_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_3826_, v_k_3828_);
return v___x_3829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___boxed(lean_object* v_motive_3830_, lean_object* v_ctorIdx_3831_, lean_object* v_t_3832_, lean_object* v_h_3833_, lean_object* v_k_3834_){
_start:
{
lean_object* v_res_3835_; 
v_res_3835_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim(v_motive_3830_, v_ctorIdx_3831_, v_t_3832_, v_h_3833_, v_k_3834_);
lean_dec(v_ctorIdx_3831_);
return v_res_3835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_domString_elim___redArg(lean_object* v_t_3836_, lean_object* v_domString_3837_){
_start:
{
lean_object* v___x_3838_; 
v___x_3838_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_3836_, v_domString_3837_);
return v___x_3838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_domString_elim(lean_object* v_motive_3839_, lean_object* v_t_3840_, lean_object* v_h_3841_, lean_object* v_domString_3842_){
_start:
{
lean_object* v___x_3843_; 
v___x_3843_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_3840_, v_domString_3842_);
return v___x_3843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_readlinkOptions_elim___redArg(lean_object* v_t_3844_, lean_object* v_readlinkOptions_3845_){
_start:
{
lean_object* v___x_3846_; 
v___x_3846_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_3844_, v_readlinkOptions_3845_);
return v___x_3846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_readlinkOptions_elim(lean_object* v_motive_3847_, lean_object* v_t_3848_, lean_object* v_h_3849_, lean_object* v_readlinkOptions_3850_){
_start:
{
lean_object* v___x_3851_; 
v___x_3851_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_3848_, v_readlinkOptions_3850_);
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrReadlinkOptions___lam__0(lean_object* v_x_3852_){
_start:
{
if (lean_obj_tag(v_x_3852_) == 0)
{
lean_object* v_value_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3860_; 
v_value_3853_ = lean_ctor_get(v_x_3852_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v_x_3852_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3855_ = v_x_3852_;
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_value_3853_);
lean_dec(v_x_3852_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3858_; 
if (v_isShared_3856_ == 0)
{
lean_ctor_set_tag(v___x_3855_, 4);
v___x_3858_ = v___x_3855_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_value_3853_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
else
{
lean_object* v_value_3861_; lean_object* v___f_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
v_value_3861_ = lean_ctor_get(v_x_3852_, 0);
lean_inc(v_value_3861_);
lean_dec_ref_known(v_x_3852_, 1);
v___f_3862_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_3863_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_3864_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3862_, v_value_3861_);
v___x_3865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3865_, 0, v___x_3863_);
lean_ctor_set(v___x_3865_, 1, v___x_3864_);
v___x_3866_ = lean_unsigned_to_nat(1u);
v___x_3867_ = lean_mk_empty_array_with_capacity(v___x_3866_);
v___x_3868_ = lean_array_push(v___x_3867_, v___x_3865_);
v___x_3869_ = l_Lasm_JS_Web_Internal_fields(v___x_3868_);
lean_dec_ref(v___x_3868_);
return v___x_3869_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrReadlinkOptions___lam__0(lean_object* v_value_3871_){
_start:
{
lean_object* v___x_3872_; 
v___x_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3872_, 0, v_value_3871_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesReadlinkOptionsFsPromisesDOMStringOrReadlinkOptions___lam__0(lean_object* v_value_3874_){
_start:
{
lean_object* v___x_3875_; 
v___x_3875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3875_, 0, v_value_3874_);
return v___x_3875_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesRealpathOptions(void){
_start:
{
lean_object* v___f_3877_; lean_object* v___f_3878_; 
v___f_3877_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_3878_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_3878_, 0, v___f_3877_);
return v___f_3878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx(lean_object* v_x_3879_){
_start:
{
if (lean_obj_tag(v_x_3879_) == 0)
{
lean_object* v___x_3880_; 
v___x_3880_ = lean_unsigned_to_nat(0u);
return v___x_3880_;
}
else
{
lean_object* v___x_3881_; 
v___x_3881_ = lean_unsigned_to_nat(1u);
return v___x_3881_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx___boxed(lean_object* v_x_3882_){
_start:
{
lean_object* v_res_3883_; 
v_res_3883_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx(v_x_3882_);
lean_dec_ref(v_x_3882_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(lean_object* v_t_3884_, lean_object* v_k_3885_){
_start:
{
if (lean_obj_tag(v_t_3884_) == 0)
{
lean_object* v_value_3886_; lean_object* v___x_3887_; 
v_value_3886_ = lean_ctor_get(v_t_3884_, 0);
lean_inc_ref(v_value_3886_);
lean_dec_ref_known(v_t_3884_, 1);
v___x_3887_ = lean_apply_1(v_k_3885_, v_value_3886_);
return v___x_3887_;
}
else
{
lean_object* v_value_3888_; lean_object* v___x_3889_; 
v_value_3888_ = lean_ctor_get(v_t_3884_, 0);
lean_inc(v_value_3888_);
lean_dec_ref_known(v_t_3884_, 1);
v___x_3889_ = lean_apply_1(v_k_3885_, v_value_3888_);
return v___x_3889_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim(lean_object* v_motive_3890_, lean_object* v_ctorIdx_3891_, lean_object* v_t_3892_, lean_object* v_h_3893_, lean_object* v_k_3894_){
_start:
{
lean_object* v___x_3895_; 
v___x_3895_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_3892_, v_k_3894_);
return v___x_3895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___boxed(lean_object* v_motive_3896_, lean_object* v_ctorIdx_3897_, lean_object* v_t_3898_, lean_object* v_h_3899_, lean_object* v_k_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim(v_motive_3896_, v_ctorIdx_3897_, v_t_3898_, v_h_3899_, v_k_3900_);
lean_dec(v_ctorIdx_3897_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_domString_elim___redArg(lean_object* v_t_3902_, lean_object* v_domString_3903_){
_start:
{
lean_object* v___x_3904_; 
v___x_3904_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_3902_, v_domString_3903_);
return v___x_3904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_domString_elim(lean_object* v_motive_3905_, lean_object* v_t_3906_, lean_object* v_h_3907_, lean_object* v_domString_3908_){
_start:
{
lean_object* v___x_3909_; 
v___x_3909_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_3906_, v_domString_3908_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_realpathOptions_elim___redArg(lean_object* v_t_3910_, lean_object* v_realpathOptions_3911_){
_start:
{
lean_object* v___x_3912_; 
v___x_3912_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_3910_, v_realpathOptions_3911_);
return v___x_3912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_realpathOptions_elim(lean_object* v_motive_3913_, lean_object* v_t_3914_, lean_object* v_h_3915_, lean_object* v_realpathOptions_3916_){
_start:
{
lean_object* v___x_3917_; 
v___x_3917_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_3914_, v_realpathOptions_3916_);
return v___x_3917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrRealpathOptions___lam__0(lean_object* v_x_3918_){
_start:
{
if (lean_obj_tag(v_x_3918_) == 0)
{
lean_object* v_value_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
v_value_3919_ = lean_ctor_get(v_x_3918_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v_x_3918_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v_x_3918_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_value_3919_);
lean_dec(v_x_3918_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3922_ == 0)
{
lean_ctor_set_tag(v___x_3921_, 4);
v___x_3924_ = v___x_3921_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_value_3919_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
else
{
lean_object* v_value_3927_; lean_object* v___f_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; 
v_value_3927_ = lean_ctor_get(v_x_3918_, 0);
lean_inc(v_value_3927_);
lean_dec_ref_known(v_x_3918_, 1);
v___f_3928_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_3929_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_3930_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3928_, v_value_3927_);
v___x_3931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3929_);
lean_ctor_set(v___x_3931_, 1, v___x_3930_);
v___x_3932_ = lean_unsigned_to_nat(1u);
v___x_3933_ = lean_mk_empty_array_with_capacity(v___x_3932_);
v___x_3934_ = lean_array_push(v___x_3933_, v___x_3931_);
v___x_3935_ = l_Lasm_JS_Web_Internal_fields(v___x_3934_);
lean_dec_ref(v___x_3934_);
return v___x_3935_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrRealpathOptions___lam__0(lean_object* v_value_3937_){
_start:
{
lean_object* v___x_3938_; 
v___x_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3938_, 0, v_value_3937_);
return v___x_3938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesRealpathOptionsFsPromisesDOMStringOrRealpathOptions___lam__0(lean_object* v_value_3940_){
_start:
{
lean_object* v___x_3941_; 
v___x_3941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3941_, 0, v_value_3940_);
return v___x_3941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesRmdirOptions___lam__0(lean_object* v___f_3943_, lean_object* v___f_3944_, lean_object* v_d_3945_){
_start:
{
lean_object* v_maxRetries_3946_; lean_object* v_recursive_3947_; lean_object* v_retryDelay_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
v_maxRetries_3946_ = lean_ctor_get(v_d_3945_, 0);
lean_inc(v_maxRetries_3946_);
v_recursive_3947_ = lean_ctor_get(v_d_3945_, 1);
lean_inc(v_recursive_3947_);
v_retryDelay_3948_ = lean_ctor_get(v_d_3945_, 2);
lean_inc(v_retryDelay_3948_);
lean_dec_ref(v_d_3945_);
v___x_3949_ = lean_mk_string_unchecked("maxRetries", 10, 10);
lean_inc_ref(v___f_3943_);
v___x_3950_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3943_, v_maxRetries_3946_);
v___x_3951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3951_, 0, v___x_3949_);
lean_ctor_set(v___x_3951_, 1, v___x_3950_);
v___x_3952_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_3953_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3944_, v_recursive_3947_);
v___x_3954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3952_);
lean_ctor_set(v___x_3954_, 1, v___x_3953_);
v___x_3955_ = lean_mk_string_unchecked("retryDelay", 10, 10);
v___x_3956_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3943_, v_retryDelay_3948_);
v___x_3957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3955_);
lean_ctor_set(v___x_3957_, 1, v___x_3956_);
v___x_3958_ = lean_unsigned_to_nat(3u);
v___x_3959_ = lean_mk_empty_array_with_capacity(v___x_3958_);
v___x_3960_ = lean_array_push(v___x_3959_, v___x_3951_);
v___x_3961_ = lean_array_push(v___x_3960_, v___x_3954_);
v___x_3962_ = lean_array_push(v___x_3961_, v___x_3957_);
v___x_3963_ = l_Lasm_JS_Web_Internal_fields(v___x_3962_);
lean_dec_ref(v___x_3962_);
return v___x_3963_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesRmdirOptions(void){
_start:
{
lean_object* v___f_3964_; lean_object* v___f_3965_; lean_object* v___f_3966_; 
v___f_3964_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_3965_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_3966_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesRmdirOptions___lam__0), 3, 2);
lean_closure_set(v___f_3966_, 0, v___f_3964_);
lean_closure_set(v___f_3966_, 1, v___f_3965_);
return v___f_3966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesRmOptions___lam__0(lean_object* v___f_3967_, lean_object* v___f_3968_, lean_object* v_d_3969_){
_start:
{
lean_object* v_force_3970_; lean_object* v_maxRetries_3971_; lean_object* v_recursive_3972_; lean_object* v_retryDelay_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; 
v_force_3970_ = lean_ctor_get(v_d_3969_, 0);
lean_inc(v_force_3970_);
v_maxRetries_3971_ = lean_ctor_get(v_d_3969_, 1);
lean_inc(v_maxRetries_3971_);
v_recursive_3972_ = lean_ctor_get(v_d_3969_, 2);
lean_inc(v_recursive_3972_);
v_retryDelay_3973_ = lean_ctor_get(v_d_3969_, 3);
lean_inc(v_retryDelay_3973_);
lean_dec_ref(v_d_3969_);
v___x_3974_ = lean_mk_string_unchecked("force", 5, 5);
lean_inc_ref(v___f_3967_);
v___x_3975_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3967_, v_force_3970_);
v___x_3976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3974_);
lean_ctor_set(v___x_3976_, 1, v___x_3975_);
v___x_3977_ = lean_mk_string_unchecked("maxRetries", 10, 10);
lean_inc_ref(v___f_3968_);
v___x_3978_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3968_, v_maxRetries_3971_);
v___x_3979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3979_, 0, v___x_3977_);
lean_ctor_set(v___x_3979_, 1, v___x_3978_);
v___x_3980_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_3981_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3967_, v_recursive_3972_);
v___x_3982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3982_, 0, v___x_3980_);
lean_ctor_set(v___x_3982_, 1, v___x_3981_);
v___x_3983_ = lean_mk_string_unchecked("retryDelay", 10, 10);
v___x_3984_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3968_, v_retryDelay_3973_);
v___x_3985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3985_, 0, v___x_3983_);
lean_ctor_set(v___x_3985_, 1, v___x_3984_);
v___x_3986_ = lean_unsigned_to_nat(4u);
v___x_3987_ = lean_mk_empty_array_with_capacity(v___x_3986_);
v___x_3988_ = lean_array_push(v___x_3987_, v___x_3976_);
v___x_3989_ = lean_array_push(v___x_3988_, v___x_3979_);
v___x_3990_ = lean_array_push(v___x_3989_, v___x_3982_);
v___x_3991_ = lean_array_push(v___x_3990_, v___x_3985_);
v___x_3992_ = l_Lasm_JS_Web_Internal_fields(v___x_3991_);
lean_dec_ref(v___x_3991_);
return v___x_3992_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesRmOptions(void){
_start:
{
lean_object* v___f_3993_; lean_object* v___f_3994_; lean_object* v___f_3995_; 
v___f_3993_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_3994_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_3995_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesRmOptions___lam__0), 3, 2);
lean_closure_set(v___f_3995_, 0, v___f_3993_);
lean_closure_set(v___f_3995_, 1, v___f_3994_);
return v___f_3995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesStatOptions___lam__0(lean_object* v___f_3996_, lean_object* v_d_3997_){
_start:
{
lean_object* v_bigint_3998_; lean_object* v_throwIfNoEntry_3999_; lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4016_; 
v_bigint_3998_ = lean_ctor_get(v_d_3997_, 0);
v_throwIfNoEntry_3999_ = lean_ctor_get(v_d_3997_, 1);
v_isSharedCheck_4016_ = !lean_is_exclusive(v_d_3997_);
if (v_isSharedCheck_4016_ == 0)
{
v___x_4001_ = v_d_3997_;
v_isShared_4002_ = v_isSharedCheck_4016_;
goto v_resetjp_4000_;
}
else
{
lean_inc(v_throwIfNoEntry_3999_);
lean_inc(v_bigint_3998_);
lean_dec(v_d_3997_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4016_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4006_; 
v___x_4003_ = lean_mk_string_unchecked("bigint", 6, 6);
lean_inc_ref(v___f_3996_);
v___x_4004_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3996_, v_bigint_3998_);
if (v_isShared_4002_ == 0)
{
lean_ctor_set(v___x_4001_, 1, v___x_4004_);
lean_ctor_set(v___x_4001_, 0, v___x_4003_);
v___x_4006_ = v___x_4001_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v___x_4003_);
lean_ctor_set(v_reuseFailAlloc_4015_, 1, v___x_4004_);
v___x_4006_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4007_ = lean_mk_string_unchecked("throwIfNoEntry", 14, 14);
v___x_4008_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3996_, v_throwIfNoEntry_3999_);
v___x_4009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4009_, 0, v___x_4007_);
lean_ctor_set(v___x_4009_, 1, v___x_4008_);
v___x_4010_ = lean_unsigned_to_nat(2u);
v___x_4011_ = lean_mk_empty_array_with_capacity(v___x_4010_);
v___x_4012_ = lean_array_push(v___x_4011_, v___x_4006_);
v___x_4013_ = lean_array_push(v___x_4012_, v___x_4009_);
v___x_4014_ = l_Lasm_JS_Web_Internal_fields(v___x_4013_);
lean_dec_ref(v___x_4013_);
return v___x_4014_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesStatOptions(void){
_start:
{
lean_object* v___f_4017_; lean_object* v___f_4018_; 
v___f_4017_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4018_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesStatOptions___lam__0), 2, 1);
lean_closure_set(v___f_4018_, 0, v___f_4017_);
return v___f_4018_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesStatfsOptions(void){
_start:
{
lean_object* v___f_4019_; lean_object* v___f_4020_; 
v___f_4019_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4020_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesLstatOptions___lam__0), 2, 1);
lean_closure_set(v___f_4020_, 0, v___f_4019_);
return v___f_4020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorIdx(lean_object* v_x_4021_){
_start:
{
switch(lean_obj_tag(v_x_4021_))
{
case 0:
{
lean_object* v___x_4022_; 
v___x_4022_ = lean_unsigned_to_nat(0u);
return v___x_4022_;
}
case 1:
{
lean_object* v___x_4023_; 
v___x_4023_ = lean_unsigned_to_nat(1u);
return v___x_4023_;
}
case 2:
{
lean_object* v___x_4024_; 
v___x_4024_ = lean_unsigned_to_nat(2u);
return v___x_4024_;
}
default: 
{
lean_object* v___x_4025_; 
v___x_4025_ = lean_unsigned_to_nat(3u);
return v___x_4025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorIdx___boxed(lean_object* v_x_4026_){
_start:
{
lean_object* v_res_4027_; 
v_res_4027_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorIdx(v_x_4026_);
lean_dec_ref(v_x_4026_);
return v_res_4027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(lean_object* v_t_4028_, lean_object* v_k_4029_){
_start:
{
switch(lean_obj_tag(v_t_4028_))
{
case 1:
{
lean_object* v_value_4030_; lean_object* v___x_4031_; 
v_value_4030_ = lean_ctor_get(v_t_4028_, 0);
lean_inc(v_value_4030_);
lean_dec_ref_known(v_t_4028_, 1);
v___x_4031_ = lean_apply_1(v_k_4029_, v_value_4030_);
return v___x_4031_;
}
case 2:
{
lean_object* v_value_4032_; lean_object* v___x_4033_; 
v_value_4032_ = lean_ctor_get(v_t_4028_, 0);
lean_inc(v_value_4032_);
lean_dec_ref_known(v_t_4028_, 1);
v___x_4033_ = lean_apply_1(v_k_4029_, v_value_4032_);
return v___x_4033_;
}
default: 
{
lean_object* v_value_4034_; lean_object* v___x_4035_; 
v_value_4034_ = lean_ctor_get(v_t_4028_, 0);
lean_inc_ref(v_value_4034_);
lean_dec_ref(v_t_4028_);
v___x_4035_ = lean_apply_1(v_k_4029_, v_value_4034_);
return v___x_4035_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim(lean_object* v_motive_4036_, lean_object* v_ctorIdx_4037_, lean_object* v_t_4038_, lean_object* v_h_4039_, lean_object* v_k_4040_){
_start:
{
lean_object* v___x_4041_; 
v___x_4041_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(v_t_4038_, v_k_4040_);
return v___x_4041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___boxed(lean_object* v_motive_4042_, lean_object* v_ctorIdx_4043_, lean_object* v_t_4044_, lean_object* v_h_4045_, lean_object* v_k_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim(v_motive_4042_, v_ctorIdx_4043_, v_t_4044_, v_h_4045_, v_k_4046_);
lean_dec(v_ctorIdx_4043_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_domString_elim___redArg(lean_object* v_t_4048_, lean_object* v_domString_4049_){
_start:
{
lean_object* v___x_4050_; 
v___x_4050_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(v_t_4048_, v_domString_4049_);
return v___x_4050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_domString_elim(lean_object* v_motive_4051_, lean_object* v_t_4052_, lean_object* v_h_4053_, lean_object* v_domString_4054_){
_start:
{
lean_object* v___x_4055_; 
v___x_4055_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(v_t_4052_, v_domString_4054_);
return v___x_4055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_object_elim___redArg(lean_object* v_t_4056_, lean_object* v_object_4057_){
_start:
{
lean_object* v___x_4058_; 
v___x_4058_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(v_t_4056_, v_object_4057_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_object_elim(lean_object* v_motive_4059_, lean_object* v_t_4060_, lean_object* v_h_4061_, lean_object* v_object_4062_){
_start:
{
lean_object* v___x_4063_; 
v___x_4063_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(v_t_4060_, v_object_4062_);
return v___x_4063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_jsFunction_elim___redArg(lean_object* v_t_4064_, lean_object* v_jsFunction_4065_){
_start:
{
lean_object* v___x_4066_; 
v___x_4066_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(v_t_4064_, v_jsFunction_4065_);
return v___x_4066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_jsFunction_elim(lean_object* v_motive_4067_, lean_object* v_t_4068_, lean_object* v_h_4069_, lean_object* v_jsFunction_4070_){
_start:
{
lean_object* v___x_4071_; 
v___x_4071_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(v_t_4068_, v_jsFunction_4070_);
return v___x_4071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_sequence_elim___redArg(lean_object* v_t_4072_, lean_object* v_sequence_4073_){
_start:
{
lean_object* v___x_4074_; 
v___x_4074_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(v_t_4072_, v_sequence_4073_);
return v___x_4074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_sequence_elim(lean_object* v_motive_4075_, lean_object* v_t_4076_, lean_object* v_h_4077_, lean_object* v_sequence_4078_){
_start:
{
lean_object* v___x_4079_; 
v___x_4079_ = l_Lasm_JS_Node_DOMStringOrObjectOrJSFunctionOrSequenceOfAny_ctorElim___redArg(v_t_4076_, v_sequence_4078_);
return v___x_4079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0(lean_object* v_x_4080_){
_start:
{
lean_inc(v_x_4080_);
return v_x_4080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0___boxed(lean_object* v_x_4081_){
_start:
{
lean_object* v_res_4082_; 
v_res_4082_ = l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0(v_x_4081_);
lean_dec(v_x_4081_);
return v_res_4082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__1(lean_object* v___f_4083_, lean_object* v_x_4084_){
_start:
{
switch(lean_obj_tag(v_x_4084_))
{
case 0:
{
lean_object* v_value_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4092_; 
lean_dec_ref(v___f_4083_);
v_value_4085_ = lean_ctor_get(v_x_4084_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v_x_4084_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4087_ = v_x_4084_;
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_value_4085_);
lean_dec(v_x_4084_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4090_; 
if (v_isShared_4088_ == 0)
{
lean_ctor_set_tag(v___x_4087_, 4);
v___x_4090_ = v___x_4087_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v_value_4085_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
}
case 1:
{
lean_object* v_value_4093_; 
lean_dec_ref(v___f_4083_);
v_value_4093_ = lean_ctor_get(v_x_4084_, 0);
lean_inc(v_value_4093_);
lean_dec_ref_known(v_x_4084_, 1);
return v_value_4093_;
}
case 2:
{
lean_object* v_value_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; 
lean_dec_ref(v___f_4083_);
v_value_4094_ = lean_ctor_get(v_x_4084_, 0);
lean_inc(v_value_4094_);
lean_dec_ref_known(v_x_4084_, 1);
v___x_4095_ = lean_mk_string_unchecked("", 0, 0);
v___x_4096_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4096_, 0, v_value_4094_);
lean_ctor_set(v___x_4096_, 1, v___x_4095_);
return v___x_4096_;
}
default: 
{
lean_object* v_value_4097_; lean_object* v___x_4099_; uint8_t v_isShared_4100_; uint8_t v_isSharedCheck_4117_; 
v_value_4097_ = lean_ctor_get(v_x_4084_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v_x_4084_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4099_ = v_x_4084_;
v_isShared_4100_ = v_isSharedCheck_4117_;
goto v_resetjp_4098_;
}
else
{
lean_inc(v_value_4097_);
lean_dec(v_x_4084_);
v___x_4099_ = lean_box(0);
v_isShared_4100_ = v_isSharedCheck_4117_;
goto v_resetjp_4098_;
}
v_resetjp_4098_:
{
lean_object* v___f_4101_; lean_object* v___f_4102_; lean_object* v___f_4103_; lean_object* v___f_4104_; lean_object* v___f_4105_; lean_object* v___f_4106_; lean_object* v___f_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; size_t v_sz_4111_; size_t v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4115_; 
v___f_4101_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_4102_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_4103_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_4104_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_4105_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_4106_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_4107_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_4108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4108_, 0, v___f_4101_);
lean_ctor_set(v___x_4108_, 1, v___f_4102_);
v___x_4109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4109_, 0, v___x_4108_);
lean_ctor_set(v___x_4109_, 1, v___f_4103_);
lean_ctor_set(v___x_4109_, 2, v___f_4104_);
lean_ctor_set(v___x_4109_, 3, v___f_4105_);
lean_ctor_set(v___x_4109_, 4, v___f_4106_);
v___x_4110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4110_, 0, v___x_4109_);
lean_ctor_set(v___x_4110_, 1, v___f_4107_);
v_sz_4111_ = lean_array_size(v_value_4097_);
v___x_4112_ = ((size_t)0ULL);
v___x_4113_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_4110_, v___f_4083_, v_sz_4111_, v___x_4112_, v_value_4097_);
if (v_isShared_4100_ == 0)
{
lean_ctor_set_tag(v___x_4099_, 7);
lean_ctor_set(v___x_4099_, 0, v___x_4113_);
v___x_4115_ = v___x_4099_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v___x_4113_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny(void){
_start:
{
lean_object* v___f_4118_; lean_object* v___f_4119_; 
v___f_4118_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0___boxed), 1, 0);
v___f_4119_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__1), 2, 1);
lean_closure_set(v___f_4119_, 0, v___f_4118_);
return v___f_4119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0(lean_object* v_value_4120_){
_start:
{
lean_object* v___x_4121_; 
v___x_4121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4121_, 0, v_value_4120_);
return v___x_4121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0(lean_object* v_value_4123_){
_start:
{
lean_object* v___x_4124_; 
v___x_4124_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4124_, 0, v_value_4123_);
return v___x_4124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataDOMStringOrObjectOrJSFunctionOrSequenceOfAny___lam__0(lean_object* v_value_4126_){
_start:
{
lean_object* v___x_4127_; 
v___x_4127_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4127_, 0, v_value_4126_);
return v___x_4127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesWatchOptions___lam__0(lean_object* v___f_4129_, lean_object* v___f_4130_, lean_object* v___f_4131_, lean_object* v___f_4132_, lean_object* v___x_4133_, lean_object* v_d_4134_){
_start:
{
lean_object* v_persistent_4135_; lean_object* v_recursive_4136_; lean_object* v_encoding_4137_; lean_object* v_signal_4138_; lean_object* v_maxQueue_4139_; lean_object* v_overflow_4140_; lean_object* v_ignore_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; 
v_persistent_4135_ = lean_ctor_get(v_d_4134_, 0);
lean_inc(v_persistent_4135_);
v_recursive_4136_ = lean_ctor_get(v_d_4134_, 1);
lean_inc(v_recursive_4136_);
v_encoding_4137_ = lean_ctor_get(v_d_4134_, 2);
lean_inc(v_encoding_4137_);
v_signal_4138_ = lean_ctor_get(v_d_4134_, 3);
lean_inc(v_signal_4138_);
v_maxQueue_4139_ = lean_ctor_get(v_d_4134_, 4);
lean_inc(v_maxQueue_4139_);
v_overflow_4140_ = lean_ctor_get(v_d_4134_, 5);
lean_inc(v_overflow_4140_);
v_ignore_4141_ = lean_ctor_get(v_d_4134_, 6);
lean_inc(v_ignore_4141_);
lean_dec_ref(v_d_4134_);
v___x_4142_ = lean_mk_string_unchecked("persistent", 10, 10);
lean_inc_ref(v___f_4129_);
v___x_4143_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4129_, v_persistent_4135_);
v___x_4144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4144_, 0, v___x_4142_);
lean_ctor_set(v___x_4144_, 1, v___x_4143_);
v___x_4145_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_4146_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4129_, v_recursive_4136_);
v___x_4147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4145_);
lean_ctor_set(v___x_4147_, 1, v___x_4146_);
v___x_4148_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_4130_);
v___x_4149_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4130_, v_encoding_4137_);
v___x_4150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4150_, 0, v___x_4148_);
lean_ctor_set(v___x_4150_, 1, v___x_4149_);
v___x_4151_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_4152_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4131_, v_signal_4138_);
v___x_4153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4151_);
lean_ctor_set(v___x_4153_, 1, v___x_4152_);
v___x_4154_ = lean_mk_string_unchecked("maxQueue", 8, 8);
v___x_4155_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4132_, v_maxQueue_4139_);
v___x_4156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4156_, 0, v___x_4154_);
lean_ctor_set(v___x_4156_, 1, v___x_4155_);
v___x_4157_ = lean_mk_string_unchecked("overflow", 8, 8);
v___x_4158_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4130_, v_overflow_4140_);
v___x_4159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4157_);
lean_ctor_set(v___x_4159_, 1, v___x_4158_);
v___x_4160_ = lean_mk_string_unchecked("ignore", 6, 6);
v___x_4161_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_4133_, v_ignore_4141_);
v___x_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4160_);
lean_ctor_set(v___x_4162_, 1, v___x_4161_);
v___x_4163_ = lean_unsigned_to_nat(7u);
v___x_4164_ = lean_mk_empty_array_with_capacity(v___x_4163_);
v___x_4165_ = lean_array_push(v___x_4164_, v___x_4144_);
v___x_4166_ = lean_array_push(v___x_4165_, v___x_4147_);
v___x_4167_ = lean_array_push(v___x_4166_, v___x_4150_);
v___x_4168_ = lean_array_push(v___x_4167_, v___x_4153_);
v___x_4169_ = lean_array_push(v___x_4168_, v___x_4156_);
v___x_4170_ = lean_array_push(v___x_4169_, v___x_4159_);
v___x_4171_ = lean_array_push(v___x_4170_, v___x_4162_);
v___x_4172_ = l_Lasm_JS_Web_Internal_fields(v___x_4171_);
lean_dec_ref(v___x_4171_);
return v___x_4172_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesWatchOptions(void){
_start:
{
lean_object* v___f_4173_; lean_object* v___f_4174_; lean_object* v___f_4175_; lean_object* v___f_4176_; lean_object* v___x_4177_; lean_object* v___f_4178_; 
v___f_4173_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4174_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_4175_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_4176_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___x_4177_ = l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny;
v___f_4178_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesWatchOptions___lam__0), 6, 5);
lean_closure_set(v___f_4178_, 0, v___f_4173_);
lean_closure_set(v___f_4178_, 1, v___f_4174_);
lean_closure_set(v___f_4178_, 2, v___f_4175_);
lean_closure_set(v___f_4178_, 3, v___f_4176_);
lean_closure_set(v___f_4178_, 4, v___x_4177_);
return v___f_4178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorIdx(lean_object* v_x_4179_){
_start:
{
if (lean_obj_tag(v_x_4179_) == 0)
{
lean_object* v___x_4180_; 
v___x_4180_ = lean_unsigned_to_nat(0u);
return v___x_4180_;
}
else
{
lean_object* v___x_4181_; 
v___x_4181_ = lean_unsigned_to_nat(1u);
return v___x_4181_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorIdx___boxed(lean_object* v_x_4182_){
_start:
{
lean_object* v_res_4183_; 
v_res_4183_ = l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorIdx(v_x_4182_);
lean_dec_ref(v_x_4182_);
return v_res_4183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim___redArg(lean_object* v_t_4184_, lean_object* v_k_4185_){
_start:
{
lean_object* v_value_4186_; lean_object* v___x_4187_; 
v_value_4186_ = lean_ctor_get(v_t_4184_, 0);
lean_inc_ref(v_value_4186_);
lean_dec_ref(v_t_4184_);
v___x_4187_ = lean_apply_1(v_k_4185_, v_value_4186_);
return v___x_4187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim(lean_object* v_motive_4188_, lean_object* v_ctorIdx_4189_, lean_object* v_t_4190_, lean_object* v_h_4191_, lean_object* v_k_4192_){
_start:
{
lean_object* v___x_4193_; 
v___x_4193_ = l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim___redArg(v_t_4190_, v_k_4192_);
return v___x_4193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim___boxed(lean_object* v_motive_4194_, lean_object* v_ctorIdx_4195_, lean_object* v_t_4196_, lean_object* v_h_4197_, lean_object* v_k_4198_){
_start:
{
lean_object* v_res_4199_; 
v_res_4199_ = l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim(v_motive_4194_, v_ctorIdx_4195_, v_t_4196_, v_h_4197_, v_k_4198_);
lean_dec(v_ctorIdx_4195_);
return v_res_4199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_domString_elim___redArg(lean_object* v_t_4200_, lean_object* v_domString_4201_){
_start:
{
lean_object* v___x_4202_; 
v___x_4202_ = l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim___redArg(v_t_4200_, v_domString_4201_);
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_domString_elim(lean_object* v_motive_4203_, lean_object* v_t_4204_, lean_object* v_h_4205_, lean_object* v_domString_4206_){
_start:
{
lean_object* v___x_4207_; 
v___x_4207_ = l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim___redArg(v_t_4204_, v_domString_4206_);
return v___x_4207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_watchOptions_elim___redArg(lean_object* v_t_4208_, lean_object* v_watchOptions_4209_){
_start:
{
lean_object* v___x_4210_; 
v___x_4210_ = l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim___redArg(v_t_4208_, v_watchOptions_4209_);
return v___x_4210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_watchOptions_elim(lean_object* v_motive_4211_, lean_object* v_t_4212_, lean_object* v_h_4213_, lean_object* v_watchOptions_4214_){
_start:
{
lean_object* v___x_4215_; 
v___x_4215_ = l_Lasm_JS_Node_fsPromises_DOMStringOrWatchOptions_ctorElim___redArg(v_t_4212_, v_watchOptions_4214_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesDOMStringOrWatchOptions___lam__0(lean_object* v_x_4216_){
_start:
{
if (lean_obj_tag(v_x_4216_) == 0)
{
lean_object* v_value_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4224_; 
v_value_4217_ = lean_ctor_get(v_x_4216_, 0);
v_isSharedCheck_4224_ = !lean_is_exclusive(v_x_4216_);
if (v_isSharedCheck_4224_ == 0)
{
v___x_4219_ = v_x_4216_;
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_value_4217_);
lean_dec(v_x_4216_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v___x_4222_; 
if (v_isShared_4220_ == 0)
{
lean_ctor_set_tag(v___x_4219_, 4);
v___x_4222_ = v___x_4219_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v_value_4217_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
}
else
{
lean_object* v_value_4225_; lean_object* v_persistent_4226_; lean_object* v_recursive_4227_; lean_object* v_encoding_4228_; lean_object* v_signal_4229_; lean_object* v_maxQueue_4230_; lean_object* v_overflow_4231_; lean_object* v_ignore_4232_; lean_object* v___f_4233_; lean_object* v___f_4234_; lean_object* v___f_4235_; lean_object* v___f_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; 
v_value_4225_ = lean_ctor_get(v_x_4216_, 0);
lean_inc_ref(v_value_4225_);
lean_dec_ref_known(v_x_4216_, 1);
v_persistent_4226_ = lean_ctor_get(v_value_4225_, 0);
lean_inc(v_persistent_4226_);
v_recursive_4227_ = lean_ctor_get(v_value_4225_, 1);
lean_inc(v_recursive_4227_);
v_encoding_4228_ = lean_ctor_get(v_value_4225_, 2);
lean_inc(v_encoding_4228_);
v_signal_4229_ = lean_ctor_get(v_value_4225_, 3);
lean_inc(v_signal_4229_);
v_maxQueue_4230_ = lean_ctor_get(v_value_4225_, 4);
lean_inc(v_maxQueue_4230_);
v_overflow_4231_ = lean_ctor_get(v_value_4225_, 5);
lean_inc(v_overflow_4231_);
v_ignore_4232_ = lean_ctor_get(v_value_4225_, 6);
lean_inc(v_ignore_4232_);
lean_dec_ref(v_value_4225_);
v___f_4233_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4234_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_4235_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_4236_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___x_4237_ = l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny;
v___x_4238_ = lean_mk_string_unchecked("persistent", 10, 10);
lean_inc_ref(v___f_4233_);
v___x_4239_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4233_, v_persistent_4226_);
v___x_4240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4238_);
lean_ctor_set(v___x_4240_, 1, v___x_4239_);
v___x_4241_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_4242_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4233_, v_recursive_4227_);
v___x_4243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4241_);
lean_ctor_set(v___x_4243_, 1, v___x_4242_);
v___x_4244_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_4234_);
v___x_4245_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4234_, v_encoding_4228_);
v___x_4246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4246_, 0, v___x_4244_);
lean_ctor_set(v___x_4246_, 1, v___x_4245_);
v___x_4247_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_4248_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4235_, v_signal_4229_);
v___x_4249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4249_, 0, v___x_4247_);
lean_ctor_set(v___x_4249_, 1, v___x_4248_);
v___x_4250_ = lean_mk_string_unchecked("maxQueue", 8, 8);
v___x_4251_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4236_, v_maxQueue_4230_);
v___x_4252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4252_, 0, v___x_4250_);
lean_ctor_set(v___x_4252_, 1, v___x_4251_);
v___x_4253_ = lean_mk_string_unchecked("overflow", 8, 8);
v___x_4254_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4234_, v_overflow_4231_);
v___x_4255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4255_, 0, v___x_4253_);
lean_ctor_set(v___x_4255_, 1, v___x_4254_);
v___x_4256_ = lean_mk_string_unchecked("ignore", 6, 6);
v___x_4257_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_4237_, v_ignore_4232_);
v___x_4258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4258_, 0, v___x_4256_);
lean_ctor_set(v___x_4258_, 1, v___x_4257_);
v___x_4259_ = lean_unsigned_to_nat(7u);
v___x_4260_ = lean_mk_empty_array_with_capacity(v___x_4259_);
v___x_4261_ = lean_array_push(v___x_4260_, v___x_4240_);
v___x_4262_ = lean_array_push(v___x_4261_, v___x_4243_);
v___x_4263_ = lean_array_push(v___x_4262_, v___x_4246_);
v___x_4264_ = lean_array_push(v___x_4263_, v___x_4249_);
v___x_4265_ = lean_array_push(v___x_4264_, v___x_4252_);
v___x_4266_ = lean_array_push(v___x_4265_, v___x_4255_);
v___x_4267_ = lean_array_push(v___x_4266_, v___x_4258_);
v___x_4268_ = l_Lasm_JS_Web_Internal_fields(v___x_4267_);
lean_dec_ref(v___x_4267_);
return v___x_4268_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesDOMStringOrWatchOptions___lam__0(lean_object* v_value_4270_){
_start:
{
lean_object* v___x_4271_; 
v___x_4271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4271_, 0, v_value_4270_);
return v___x_4271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesWatchOptionsFsPromisesDOMStringOrWatchOptions___lam__0(lean_object* v_value_4273_){
_start:
{
lean_object* v___x_4274_; 
v___x_4274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4274_, 0, v_value_4273_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptions___lam__0(lean_object* v___f_4276_, lean_object* v___f_4277_, lean_object* v___f_4278_, lean_object* v___f_4279_, lean_object* v_d_4280_){
_start:
{
lean_object* v_encoding_4281_; lean_object* v_mode_4282_; lean_object* v_flag_4283_; lean_object* v_flush_4284_; lean_object* v_signal_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; 
v_encoding_4281_ = lean_ctor_get(v_d_4280_, 0);
lean_inc(v_encoding_4281_);
v_mode_4282_ = lean_ctor_get(v_d_4280_, 1);
lean_inc(v_mode_4282_);
v_flag_4283_ = lean_ctor_get(v_d_4280_, 2);
lean_inc(v_flag_4283_);
v_flush_4284_ = lean_ctor_get(v_d_4280_, 3);
lean_inc(v_flush_4284_);
v_signal_4285_ = lean_ctor_get(v_d_4280_, 4);
lean_inc(v_signal_4285_);
lean_dec_ref(v_d_4280_);
v___x_4286_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_4276_);
v___x_4287_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4276_, v_encoding_4281_);
v___x_4288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4288_, 0, v___x_4286_);
lean_ctor_set(v___x_4288_, 1, v___x_4287_);
v___x_4289_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_4290_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4277_, v_mode_4282_);
v___x_4291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4291_, 0, v___x_4289_);
lean_ctor_set(v___x_4291_, 1, v___x_4290_);
v___x_4292_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_4293_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4276_, v_flag_4283_);
v___x_4294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4294_, 0, v___x_4292_);
lean_ctor_set(v___x_4294_, 1, v___x_4293_);
v___x_4295_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_4296_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4278_, v_flush_4284_);
v___x_4297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4295_);
lean_ctor_set(v___x_4297_, 1, v___x_4296_);
v___x_4298_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_4299_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4279_, v_signal_4285_);
v___x_4300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4300_, 0, v___x_4298_);
lean_ctor_set(v___x_4300_, 1, v___x_4299_);
v___x_4301_ = lean_unsigned_to_nat(5u);
v___x_4302_ = lean_mk_empty_array_with_capacity(v___x_4301_);
v___x_4303_ = lean_array_push(v___x_4302_, v___x_4288_);
v___x_4304_ = lean_array_push(v___x_4303_, v___x_4291_);
v___x_4305_ = lean_array_push(v___x_4304_, v___x_4294_);
v___x_4306_ = lean_array_push(v___x_4305_, v___x_4297_);
v___x_4307_ = lean_array_push(v___x_4306_, v___x_4300_);
v___x_4308_ = l_Lasm_JS_Web_Internal_fields(v___x_4307_);
lean_dec_ref(v___x_4307_);
return v___x_4308_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptions(void){
_start:
{
lean_object* v___f_4309_; lean_object* v___f_4310_; lean_object* v___f_4311_; lean_object* v___f_4312_; lean_object* v___f_4313_; 
v___f_4309_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_4310_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_4311_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4312_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_4313_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptions___lam__0), 5, 4);
lean_closure_set(v___f_4313_, 0, v___f_4309_);
lean_closure_set(v___f_4313_, 1, v___f_4310_);
lean_closure_set(v___f_4313_, 2, v___f_4311_);
lean_closure_set(v___f_4313_, 3, v___f_4312_);
return v___f_4313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx(lean_object* v_x_4314_){
_start:
{
if (lean_obj_tag(v_x_4314_) == 0)
{
lean_object* v___x_4315_; 
v___x_4315_ = lean_unsigned_to_nat(0u);
return v___x_4315_;
}
else
{
lean_object* v___x_4316_; 
v___x_4316_ = lean_unsigned_to_nat(1u);
return v___x_4316_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_4317_){
_start:
{
lean_object* v_res_4318_; 
v_res_4318_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx(v_x_4317_);
lean_dec_ref(v_x_4317_);
return v_res_4318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_4319_, lean_object* v_k_4320_){
_start:
{
lean_object* v_value_4321_; lean_object* v___x_4322_; 
v_value_4321_ = lean_ctor_get(v_t_4319_, 0);
lean_inc_ref(v_value_4321_);
lean_dec_ref(v_t_4319_);
v___x_4322_ = lean_apply_1(v_k_4320_, v_value_4321_);
return v___x_4322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim(lean_object* v_motive_4323_, lean_object* v_ctorIdx_4324_, lean_object* v_t_4325_, lean_object* v_h_4326_, lean_object* v_k_4327_){
_start:
{
lean_object* v___x_4328_; 
v___x_4328_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_4325_, v_k_4327_);
return v___x_4328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_4329_, lean_object* v_ctorIdx_4330_, lean_object* v_t_4331_, lean_object* v_h_4332_, lean_object* v_k_4333_){
_start:
{
lean_object* v_res_4334_; 
v_res_4334_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim(v_motive_4329_, v_ctorIdx_4330_, v_t_4331_, v_h_4332_, v_k_4333_);
lean_dec(v_ctorIdx_4330_);
return v_res_4334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object* v_t_4335_, lean_object* v_writeFileOptions_4336_){
_start:
{
lean_object* v___x_4337_; 
v___x_4337_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_4335_, v_writeFileOptions_4336_);
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object* v_motive_4338_, lean_object* v_t_4339_, lean_object* v_h_4340_, lean_object* v_writeFileOptions_4341_){
_start:
{
lean_object* v___x_4342_; 
v___x_4342_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_4339_, v_writeFileOptions_4341_);
return v___x_4342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_4343_, lean_object* v_domString_4344_){
_start:
{
lean_object* v___x_4345_; 
v___x_4345_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_4343_, v_domString_4344_);
return v___x_4345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_domString_elim(lean_object* v_motive_4346_, lean_object* v_t_4347_, lean_object* v_h_4348_, lean_object* v_domString_4349_){
_start:
{
lean_object* v___x_4350_; 
v___x_4350_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_4347_, v_domString_4349_);
return v___x_4350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptionsOrDOMString___lam__0(lean_object* v_x_4351_){
_start:
{
if (lean_obj_tag(v_x_4351_) == 0)
{
lean_object* v_value_4352_; lean_object* v_encoding_4353_; lean_object* v_mode_4354_; lean_object* v_flag_4355_; lean_object* v_flush_4356_; lean_object* v_signal_4357_; lean_object* v___f_4358_; lean_object* v___f_4359_; lean_object* v___f_4360_; lean_object* v___f_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; 
v_value_4352_ = lean_ctor_get(v_x_4351_, 0);
lean_inc_ref(v_value_4352_);
lean_dec_ref_known(v_x_4351_, 1);
v_encoding_4353_ = lean_ctor_get(v_value_4352_, 0);
lean_inc(v_encoding_4353_);
v_mode_4354_ = lean_ctor_get(v_value_4352_, 1);
lean_inc(v_mode_4354_);
v_flag_4355_ = lean_ctor_get(v_value_4352_, 2);
lean_inc(v_flag_4355_);
v_flush_4356_ = lean_ctor_get(v_value_4352_, 3);
lean_inc(v_flush_4356_);
v_signal_4357_ = lean_ctor_get(v_value_4352_, 4);
lean_inc(v_signal_4357_);
lean_dec_ref(v_value_4352_);
v___f_4358_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_4359_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_4360_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4361_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_4362_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_4358_);
v___x_4363_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4358_, v_encoding_4353_);
v___x_4364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4364_, 0, v___x_4362_);
lean_ctor_set(v___x_4364_, 1, v___x_4363_);
v___x_4365_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_4366_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4359_, v_mode_4354_);
v___x_4367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4367_, 0, v___x_4365_);
lean_ctor_set(v___x_4367_, 1, v___x_4366_);
v___x_4368_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_4369_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4358_, v_flag_4355_);
v___x_4370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4370_, 0, v___x_4368_);
lean_ctor_set(v___x_4370_, 1, v___x_4369_);
v___x_4371_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_4372_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4360_, v_flush_4356_);
v___x_4373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4373_, 0, v___x_4371_);
lean_ctor_set(v___x_4373_, 1, v___x_4372_);
v___x_4374_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_4375_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4361_, v_signal_4357_);
v___x_4376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4376_, 0, v___x_4374_);
lean_ctor_set(v___x_4376_, 1, v___x_4375_);
v___x_4377_ = lean_unsigned_to_nat(5u);
v___x_4378_ = lean_mk_empty_array_with_capacity(v___x_4377_);
v___x_4379_ = lean_array_push(v___x_4378_, v___x_4364_);
v___x_4380_ = lean_array_push(v___x_4379_, v___x_4367_);
v___x_4381_ = lean_array_push(v___x_4380_, v___x_4370_);
v___x_4382_ = lean_array_push(v___x_4381_, v___x_4373_);
v___x_4383_ = lean_array_push(v___x_4382_, v___x_4376_);
v___x_4384_ = l_Lasm_JS_Web_Internal_fields(v___x_4383_);
lean_dec_ref(v___x_4383_);
return v___x_4384_;
}
else
{
lean_object* v_value_4385_; lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4392_; 
v_value_4385_ = lean_ctor_get(v_x_4351_, 0);
v_isSharedCheck_4392_ = !lean_is_exclusive(v_x_4351_);
if (v_isSharedCheck_4392_ == 0)
{
v___x_4387_ = v_x_4351_;
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
else
{
lean_inc(v_value_4385_);
lean_dec(v_x_4351_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v___x_4390_; 
if (v_isShared_4388_ == 0)
{
lean_ctor_set_tag(v___x_4387_, 4);
v___x_4390_ = v___x_4387_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v_value_4385_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
return v___x_4390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsPromisesWriteFileOptionsFsPromisesWriteFileOptionsOrDOMString___lam__0(lean_object* v_value_4394_){
_start:
{
lean_object* v___x_4395_; 
v___x_4395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4395_, 0, v_value_4394_);
return v___x_4395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsPromisesWriteFileOptionsOrDOMString___lam__0(lean_object* v_value_4397_){
_start:
{
lean_object* v___x_4398_; 
v___x_4398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4398_, 0, v_value_4397_);
return v___x_4398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorIdx(lean_object* v_x_4400_){
_start:
{
switch(lean_obj_tag(v_x_4400_))
{
case 0:
{
lean_object* v___x_4401_; 
v___x_4401_ = lean_unsigned_to_nat(0u);
return v___x_4401_;
}
case 1:
{
lean_object* v___x_4402_; 
v___x_4402_ = lean_unsigned_to_nat(1u);
return v___x_4402_;
}
case 2:
{
lean_object* v___x_4403_; 
v___x_4403_ = lean_unsigned_to_nat(2u);
return v___x_4403_;
}
default: 
{
lean_object* v___x_4404_; 
v___x_4404_ = lean_unsigned_to_nat(3u);
return v___x_4404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorIdx___boxed(lean_object* v_x_4405_){
_start:
{
lean_object* v_res_4406_; 
v_res_4406_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorIdx(v_x_4405_);
lean_dec_ref(v_x_4405_);
return v_res_4406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(lean_object* v_t_4407_, lean_object* v_k_4408_){
_start:
{
switch(lean_obj_tag(v_t_4407_))
{
case 2:
{
lean_object* v_value_4409_; lean_object* v___x_4410_; 
v_value_4409_ = lean_ctor_get(v_t_4407_, 0);
lean_inc(v_value_4409_);
lean_dec_ref_known(v_t_4407_, 1);
v___x_4410_ = lean_apply_1(v_k_4408_, v_value_4409_);
return v___x_4410_;
}
case 3:
{
double v_value_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; 
v_value_4411_ = lean_ctor_get_float(v_t_4407_, 0);
lean_dec_ref_known(v_t_4407_, 0);
v___x_4412_ = lean_box_float(v_value_4411_);
v___x_4413_ = lean_apply_1(v_k_4408_, v___x_4412_);
return v___x_4413_;
}
default: 
{
lean_object* v_value_4414_; lean_object* v___x_4415_; 
v_value_4414_ = lean_ctor_get(v_t_4407_, 0);
lean_inc_ref(v_value_4414_);
lean_dec_ref(v_t_4407_);
v___x_4415_ = lean_apply_1(v_k_4408_, v_value_4414_);
return v___x_4415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim(lean_object* v_motive_4416_, lean_object* v_ctorIdx_4417_, lean_object* v_t_4418_, lean_object* v_h_4419_, lean_object* v_k_4420_){
_start:
{
lean_object* v___x_4421_; 
v___x_4421_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(v_t_4418_, v_k_4420_);
return v___x_4421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___boxed(lean_object* v_motive_4422_, lean_object* v_ctorIdx_4423_, lean_object* v_t_4424_, lean_object* v_h_4425_, lean_object* v_k_4426_){
_start:
{
lean_object* v_res_4427_; 
v_res_4427_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim(v_motive_4422_, v_ctorIdx_4423_, v_t_4424_, v_h_4425_, v_k_4426_);
lean_dec(v_ctorIdx_4423_);
return v_res_4427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_domString_elim___redArg(lean_object* v_t_4428_, lean_object* v_domString_4429_){
_start:
{
lean_object* v___x_4430_; 
v___x_4430_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(v_t_4428_, v_domString_4429_);
return v___x_4430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_domString_elim(lean_object* v_motive_4431_, lean_object* v_t_4432_, lean_object* v_h_4433_, lean_object* v_domString_4434_){
_start:
{
lean_object* v___x_4435_; 
v___x_4435_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(v_t_4432_, v_domString_4434_);
return v___x_4435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_uint8Array_elim___redArg(lean_object* v_t_4436_, lean_object* v_uint8Array_4437_){
_start:
{
lean_object* v___x_4438_; 
v___x_4438_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(v_t_4436_, v_uint8Array_4437_);
return v___x_4438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_uint8Array_elim(lean_object* v_motive_4439_, lean_object* v_t_4440_, lean_object* v_h_4441_, lean_object* v_uint8Array_4442_){
_start:
{
lean_object* v___x_4443_; 
v___x_4443_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(v_t_4440_, v_uint8Array_4442_);
return v___x_4443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_url_elim___redArg(lean_object* v_t_4444_, lean_object* v_url_4445_){
_start:
{
lean_object* v___x_4446_; 
v___x_4446_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(v_t_4444_, v_url_4445_);
return v___x_4446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_url_elim(lean_object* v_motive_4447_, lean_object* v_t_4448_, lean_object* v_h_4449_, lean_object* v_url_4450_){
_start:
{
lean_object* v___x_4451_; 
v___x_4451_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(v_t_4448_, v_url_4450_);
return v___x_4451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_double_elim___redArg(lean_object* v_t_4452_, lean_object* v_double_4453_){
_start:
{
lean_object* v___x_4454_; 
v___x_4454_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(v_t_4452_, v_double_4453_);
return v___x_4454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_double_elim(lean_object* v_motive_4455_, lean_object* v_t_4456_, lean_object* v_h_4457_, lean_object* v_double_4458_){
_start:
{
lean_object* v___x_4459_; 
v___x_4459_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrDouble_ctorElim___redArg(v_t_4456_, v_double_4458_);
return v___x_4459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrDouble___lam__0(lean_object* v_x_4460_){
_start:
{
switch(lean_obj_tag(v_x_4460_))
{
case 0:
{
lean_object* v_value_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4468_; 
v_value_4461_ = lean_ctor_get(v_x_4460_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v_x_4460_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4463_ = v_x_4460_;
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_value_4461_);
lean_dec(v_x_4460_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4466_; 
if (v_isShared_4464_ == 0)
{
lean_ctor_set_tag(v___x_4463_, 4);
v___x_4466_ = v___x_4463_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v_value_4461_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
case 1:
{
lean_object* v_value_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4476_; 
v_value_4469_ = lean_ctor_get(v_x_4460_, 0);
v_isSharedCheck_4476_ = !lean_is_exclusive(v_x_4460_);
if (v_isSharedCheck_4476_ == 0)
{
v___x_4471_ = v_x_4460_;
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_value_4469_);
lean_dec(v_x_4460_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4474_; 
if (v_isShared_4472_ == 0)
{
lean_ctor_set_tag(v___x_4471_, 6);
v___x_4474_ = v___x_4471_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4475_; 
v_reuseFailAlloc_4475_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4475_, 0, v_value_4469_);
v___x_4474_ = v_reuseFailAlloc_4475_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
return v___x_4474_;
}
}
}
case 2:
{
lean_object* v_value_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; 
v_value_4477_ = lean_ctor_get(v_x_4460_, 0);
lean_inc(v_value_4477_);
lean_dec_ref_known(v_x_4460_, 1);
v___x_4478_ = lean_mk_string_unchecked("", 0, 0);
v___x_4479_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4479_, 0, v_value_4477_);
lean_ctor_set(v___x_4479_, 1, v___x_4478_);
return v___x_4479_;
}
default: 
{
double v_value_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4487_; 
v_value_4480_ = lean_ctor_get_float(v_x_4460_, 0);
v_isSharedCheck_4487_ = !lean_is_exclusive(v_x_4460_);
if (v_isSharedCheck_4487_ == 0)
{
v___x_4482_ = v_x_4460_;
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
else
{
lean_dec(v_x_4460_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v___x_4485_; 
if (v_isShared_4483_ == 0)
{
v___x_4485_ = v___x_4482_;
goto v_reusejp_4484_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_4486_, 0, v_value_4480_);
v___x_4485_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4484_;
}
v_reusejp_4484_:
{
return v___x_4485_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrDouble___lam__0(lean_object* v_value_4489_){
_start:
{
lean_object* v___x_4490_; 
v___x_4490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4490_, 0, v_value_4489_);
return v___x_4490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrDouble___lam__0(lean_object* v_value_4492_){
_start:
{
lean_object* v___x_4493_; 
v___x_4493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4493_, 0, v_value_4492_);
return v___x_4493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrDouble___lam__0(lean_object* v_value_4495_){
_start:
{
lean_object* v___x_4496_; 
v___x_4496_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4496_, 0, v_value_4495_);
return v___x_4496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrUint8ArrayOrURLOrDouble___lam__0(double v_value_4498_){
_start:
{
lean_object* v___x_4499_; 
v___x_4499_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4499_, 0, v_value_4498_);
return v___x_4499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrUint8ArrayOrURLOrDouble___lam__0___boxed(lean_object* v_value_4500_){
_start:
{
double v_value_boxed_4501_; lean_object* v_res_4502_; 
v_value_boxed_4501_ = lean_unbox_float(v_value_4500_);
lean_dec_ref(v_value_4500_);
v_res_4502_ = l_Lasm_JS_Node_instCoeFloatDOMStringOrUint8ArrayOrURLOrDouble___lam__0(v_value_boxed_4501_);
return v_res_4502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileOptions___lam__0(lean_object* v___f_4504_, lean_object* v___f_4505_, lean_object* v___f_4506_, lean_object* v_d_4507_){
_start:
{
lean_object* v_encoding_4508_; lean_object* v_mode_4509_; lean_object* v_flag_4510_; lean_object* v_flush_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; 
v_encoding_4508_ = lean_ctor_get(v_d_4507_, 0);
lean_inc(v_encoding_4508_);
v_mode_4509_ = lean_ctor_get(v_d_4507_, 1);
lean_inc(v_mode_4509_);
v_flag_4510_ = lean_ctor_get(v_d_4507_, 2);
lean_inc(v_flag_4510_);
v_flush_4511_ = lean_ctor_get(v_d_4507_, 3);
lean_inc(v_flush_4511_);
lean_dec_ref(v_d_4507_);
v___x_4512_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_4504_);
v___x_4513_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4504_, v_encoding_4508_);
v___x_4514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4512_);
lean_ctor_set(v___x_4514_, 1, v___x_4513_);
v___x_4515_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_4516_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4505_, v_mode_4509_);
v___x_4517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4517_, 0, v___x_4515_);
lean_ctor_set(v___x_4517_, 1, v___x_4516_);
v___x_4518_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_4519_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4504_, v_flag_4510_);
v___x_4520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4520_, 0, v___x_4518_);
lean_ctor_set(v___x_4520_, 1, v___x_4519_);
v___x_4521_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_4522_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4506_, v_flush_4511_);
v___x_4523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4521_);
lean_ctor_set(v___x_4523_, 1, v___x_4522_);
v___x_4524_ = lean_unsigned_to_nat(4u);
v___x_4525_ = lean_mk_empty_array_with_capacity(v___x_4524_);
v___x_4526_ = lean_array_push(v___x_4525_, v___x_4514_);
v___x_4527_ = lean_array_push(v___x_4526_, v___x_4517_);
v___x_4528_ = lean_array_push(v___x_4527_, v___x_4520_);
v___x_4529_ = lean_array_push(v___x_4528_, v___x_4523_);
v___x_4530_ = l_Lasm_JS_Web_Internal_fields(v___x_4529_);
lean_dec_ref(v___x_4529_);
return v___x_4530_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsAppendFileOptions(void){
_start:
{
lean_object* v___f_4531_; lean_object* v___f_4532_; lean_object* v___f_4533_; lean_object* v___f_4534_; 
v___f_4531_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_4532_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_4533_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4534_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsAppendFileOptions___lam__0), 4, 3);
lean_closure_set(v___f_4534_, 0, v___f_4531_);
lean_closure_set(v___f_4534_, 1, v___f_4532_);
lean_closure_set(v___f_4534_, 2, v___f_4533_);
return v___f_4534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorIdx(lean_object* v_x_4535_){
_start:
{
if (lean_obj_tag(v_x_4535_) == 0)
{
lean_object* v___x_4536_; 
v___x_4536_ = lean_unsigned_to_nat(0u);
return v___x_4536_;
}
else
{
lean_object* v___x_4537_; 
v___x_4537_ = lean_unsigned_to_nat(1u);
return v___x_4537_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_4538_){
_start:
{
lean_object* v_res_4539_; 
v_res_4539_ = l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorIdx(v_x_4538_);
lean_dec_ref(v_x_4538_);
return v_res_4539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_4540_, lean_object* v_k_4541_){
_start:
{
lean_object* v_value_4542_; lean_object* v___x_4543_; 
v_value_4542_ = lean_ctor_get(v_t_4540_, 0);
lean_inc_ref(v_value_4542_);
lean_dec_ref(v_t_4540_);
v___x_4543_ = lean_apply_1(v_k_4541_, v_value_4542_);
return v___x_4543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim(lean_object* v_motive_4544_, lean_object* v_ctorIdx_4545_, lean_object* v_t_4546_, lean_object* v_h_4547_, lean_object* v_k_4548_){
_start:
{
lean_object* v___x_4549_; 
v___x_4549_ = l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_4546_, v_k_4548_);
return v___x_4549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_4550_, lean_object* v_ctorIdx_4551_, lean_object* v_t_4552_, lean_object* v_h_4553_, lean_object* v_k_4554_){
_start:
{
lean_object* v_res_4555_; 
v_res_4555_ = l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim(v_motive_4550_, v_ctorIdx_4551_, v_t_4552_, v_h_4553_, v_k_4554_);
lean_dec(v_ctorIdx_4551_);
return v_res_4555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object* v_t_4556_, lean_object* v_appendFileOptions_4557_){
_start:
{
lean_object* v___x_4558_; 
v___x_4558_ = l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_4556_, v_appendFileOptions_4557_);
return v___x_4558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object* v_motive_4559_, lean_object* v_t_4560_, lean_object* v_h_4561_, lean_object* v_appendFileOptions_4562_){
_start:
{
lean_object* v___x_4563_; 
v___x_4563_ = l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_4560_, v_appendFileOptions_4562_);
return v___x_4563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_4564_, lean_object* v_domString_4565_){
_start:
{
lean_object* v___x_4566_; 
v___x_4566_ = l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_4564_, v_domString_4565_);
return v___x_4566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_domString_elim(lean_object* v_motive_4567_, lean_object* v_t_4568_, lean_object* v_h_4569_, lean_object* v_domString_4570_){
_start:
{
lean_object* v___x_4571_; 
v___x_4571_ = l_Lasm_JS_Node_fs_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_4568_, v_domString_4570_);
return v___x_4571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileOptionsOrDOMString___lam__0(lean_object* v_x_4572_){
_start:
{
if (lean_obj_tag(v_x_4572_) == 0)
{
lean_object* v_value_4573_; lean_object* v_encoding_4574_; lean_object* v_mode_4575_; lean_object* v_flag_4576_; lean_object* v_flush_4577_; lean_object* v___f_4578_; lean_object* v___f_4579_; lean_object* v___f_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v_value_4573_ = lean_ctor_get(v_x_4572_, 0);
lean_inc_ref(v_value_4573_);
lean_dec_ref_known(v_x_4572_, 1);
v_encoding_4574_ = lean_ctor_get(v_value_4573_, 0);
lean_inc(v_encoding_4574_);
v_mode_4575_ = lean_ctor_get(v_value_4573_, 1);
lean_inc(v_mode_4575_);
v_flag_4576_ = lean_ctor_get(v_value_4573_, 2);
lean_inc(v_flag_4576_);
v_flush_4577_ = lean_ctor_get(v_value_4573_, 3);
lean_inc(v_flush_4577_);
lean_dec_ref(v_value_4573_);
v___f_4578_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_4579_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_4580_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_4581_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_4578_);
v___x_4582_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4578_, v_encoding_4574_);
v___x_4583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4583_, 0, v___x_4581_);
lean_ctor_set(v___x_4583_, 1, v___x_4582_);
v___x_4584_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_4585_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4579_, v_mode_4575_);
v___x_4586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4586_, 0, v___x_4584_);
lean_ctor_set(v___x_4586_, 1, v___x_4585_);
v___x_4587_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_4588_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4578_, v_flag_4576_);
v___x_4589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4589_, 0, v___x_4587_);
lean_ctor_set(v___x_4589_, 1, v___x_4588_);
v___x_4590_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_4591_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4580_, v_flush_4577_);
v___x_4592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4592_, 0, v___x_4590_);
lean_ctor_set(v___x_4592_, 1, v___x_4591_);
v___x_4593_ = lean_unsigned_to_nat(4u);
v___x_4594_ = lean_mk_empty_array_with_capacity(v___x_4593_);
v___x_4595_ = lean_array_push(v___x_4594_, v___x_4583_);
v___x_4596_ = lean_array_push(v___x_4595_, v___x_4586_);
v___x_4597_ = lean_array_push(v___x_4596_, v___x_4589_);
v___x_4598_ = lean_array_push(v___x_4597_, v___x_4592_);
v___x_4599_ = l_Lasm_JS_Web_Internal_fields(v___x_4598_);
lean_dec_ref(v___x_4598_);
return v___x_4599_;
}
else
{
lean_object* v_value_4600_; lean_object* v___x_4602_; uint8_t v_isShared_4603_; uint8_t v_isSharedCheck_4607_; 
v_value_4600_ = lean_ctor_get(v_x_4572_, 0);
v_isSharedCheck_4607_ = !lean_is_exclusive(v_x_4572_);
if (v_isSharedCheck_4607_ == 0)
{
v___x_4602_ = v_x_4572_;
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
else
{
lean_inc(v_value_4600_);
lean_dec(v_x_4572_);
v___x_4602_ = lean_box(0);
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
v_resetjp_4601_:
{
lean_object* v___x_4605_; 
if (v_isShared_4603_ == 0)
{
lean_ctor_set_tag(v___x_4602_, 4);
v___x_4605_ = v___x_4602_;
goto v_reusejp_4604_;
}
else
{
lean_object* v_reuseFailAlloc_4606_; 
v_reuseFailAlloc_4606_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4606_, 0, v_value_4600_);
v___x_4605_ = v_reuseFailAlloc_4606_;
goto v_reusejp_4604_;
}
v_reusejp_4604_:
{
return v___x_4605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsAppendFileOptionsFsAppendFileOptionsOrDOMString___lam__0(lean_object* v_value_4609_){
_start:
{
lean_object* v___x_4610_; 
v___x_4610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4610_, 0, v_value_4609_);
return v___x_4610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsAppendFileOptionsOrDOMString___lam__0(lean_object* v_value_4612_){
_start:
{
lean_object* v___x_4613_; 
v___x_4613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4613_, 0, v_value_4612_);
return v___x_4613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCpOptions___lam__0(lean_object* v___f_4615_, lean_object* v___f_4616_, lean_object* v___f_4617_, lean_object* v_d_4618_){
_start:
{
lean_object* v_dereference_4619_; lean_object* v_errorOnExist_4620_; lean_object* v_filter_4621_; lean_object* v_force_4622_; lean_object* v_mode_4623_; lean_object* v_preserveTimestamps_4624_; lean_object* v_recursive_4625_; lean_object* v_verbatimSymlinks_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; 
v_dereference_4619_ = lean_ctor_get(v_d_4618_, 0);
lean_inc(v_dereference_4619_);
v_errorOnExist_4620_ = lean_ctor_get(v_d_4618_, 1);
lean_inc(v_errorOnExist_4620_);
v_filter_4621_ = lean_ctor_get(v_d_4618_, 2);
lean_inc(v_filter_4621_);
v_force_4622_ = lean_ctor_get(v_d_4618_, 3);
lean_inc(v_force_4622_);
v_mode_4623_ = lean_ctor_get(v_d_4618_, 4);
lean_inc(v_mode_4623_);
v_preserveTimestamps_4624_ = lean_ctor_get(v_d_4618_, 5);
lean_inc(v_preserveTimestamps_4624_);
v_recursive_4625_ = lean_ctor_get(v_d_4618_, 6);
lean_inc(v_recursive_4625_);
v_verbatimSymlinks_4626_ = lean_ctor_get(v_d_4618_, 7);
lean_inc(v_verbatimSymlinks_4626_);
lean_dec_ref(v_d_4618_);
v___x_4627_ = lean_mk_string_unchecked("dereference", 11, 11);
lean_inc_ref_n(v___f_4615_, 5);
v___x_4628_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4615_, v_dereference_4619_);
v___x_4629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4629_, 0, v___x_4627_);
lean_ctor_set(v___x_4629_, 1, v___x_4628_);
v___x_4630_ = lean_mk_string_unchecked("errorOnExist", 12, 12);
v___x_4631_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4615_, v_errorOnExist_4620_);
v___x_4632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4632_, 0, v___x_4630_);
lean_ctor_set(v___x_4632_, 1, v___x_4631_);
v___x_4633_ = lean_mk_string_unchecked("filter", 6, 6);
v___x_4634_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4616_, v_filter_4621_);
v___x_4635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4635_, 0, v___x_4633_);
lean_ctor_set(v___x_4635_, 1, v___x_4634_);
v___x_4636_ = lean_mk_string_unchecked("force", 5, 5);
v___x_4637_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4615_, v_force_4622_);
v___x_4638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4638_, 0, v___x_4636_);
lean_ctor_set(v___x_4638_, 1, v___x_4637_);
v___x_4639_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_4640_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4617_, v_mode_4623_);
v___x_4641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4641_, 0, v___x_4639_);
lean_ctor_set(v___x_4641_, 1, v___x_4640_);
v___x_4642_ = lean_mk_string_unchecked("preserveTimestamps", 18, 18);
v___x_4643_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4615_, v_preserveTimestamps_4624_);
v___x_4644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4644_, 0, v___x_4642_);
lean_ctor_set(v___x_4644_, 1, v___x_4643_);
v___x_4645_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_4646_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4615_, v_recursive_4625_);
v___x_4647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4647_, 0, v___x_4645_);
lean_ctor_set(v___x_4647_, 1, v___x_4646_);
v___x_4648_ = lean_mk_string_unchecked("verbatimSymlinks", 16, 16);
v___x_4649_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4615_, v_verbatimSymlinks_4626_);
v___x_4650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4650_, 0, v___x_4648_);
lean_ctor_set(v___x_4650_, 1, v___x_4649_);
v___x_4651_ = lean_unsigned_to_nat(8u);
v___x_4652_ = lean_mk_empty_array_with_capacity(v___x_4651_);
v___x_4653_ = lean_array_push(v___x_4652_, v___x_4629_);
v___x_4654_ = lean_array_push(v___x_4653_, v___x_4632_);
v___x_4655_ = lean_array_push(v___x_4654_, v___x_4635_);
v___x_4656_ = lean_array_push(v___x_4655_, v___x_4638_);
v___x_4657_ = lean_array_push(v___x_4656_, v___x_4641_);
v___x_4658_ = lean_array_push(v___x_4657_, v___x_4644_);
v___x_4659_ = lean_array_push(v___x_4658_, v___x_4647_);
v___x_4660_ = lean_array_push(v___x_4659_, v___x_4650_);
v___x_4661_ = l_Lasm_JS_Web_Internal_fields(v___x_4660_);
lean_dec_ref(v___x_4660_);
return v___x_4661_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsCpOptions(void){
_start:
{
lean_object* v___f_4662_; lean_object* v___f_4663_; lean_object* v___f_4664_; lean_object* v___f_4665_; 
v___f_4662_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4663_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_4664_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_4665_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsCpOptions___lam__0), 4, 3);
lean_closure_set(v___f_4665_, 0, v___f_4662_);
lean_closure_set(v___f_4665_, 1, v___f_4663_);
lean_closure_set(v___f_4665_, 2, v___f_4664_);
return v___f_4665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorIdx(lean_object* v_x_4666_){
_start:
{
if (lean_obj_tag(v_x_4666_) == 0)
{
lean_object* v___x_4667_; 
v___x_4667_ = lean_unsigned_to_nat(0u);
return v___x_4667_;
}
else
{
lean_object* v___x_4668_; 
v___x_4668_ = lean_unsigned_to_nat(1u);
return v___x_4668_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorIdx___boxed(lean_object* v_x_4669_){
_start:
{
lean_object* v_res_4670_; 
v_res_4670_ = l_Lasm_JS_Node_LongLongOrFileHandle_ctorIdx(v_x_4669_);
lean_dec_ref(v_x_4669_);
return v_res_4670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim___redArg(lean_object* v_t_4671_, lean_object* v_k_4672_){
_start:
{
lean_object* v_value_4673_; lean_object* v___x_4674_; 
v_value_4673_ = lean_ctor_get(v_t_4671_, 0);
lean_inc(v_value_4673_);
lean_dec_ref(v_t_4671_);
v___x_4674_ = lean_apply_1(v_k_4672_, v_value_4673_);
return v___x_4674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim(lean_object* v_motive_4675_, lean_object* v_ctorIdx_4676_, lean_object* v_t_4677_, lean_object* v_h_4678_, lean_object* v_k_4679_){
_start:
{
lean_object* v___x_4680_; 
v___x_4680_ = l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim___redArg(v_t_4677_, v_k_4679_);
return v___x_4680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim___boxed(lean_object* v_motive_4681_, lean_object* v_ctorIdx_4682_, lean_object* v_t_4683_, lean_object* v_h_4684_, lean_object* v_k_4685_){
_start:
{
lean_object* v_res_4686_; 
v_res_4686_ = l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim(v_motive_4681_, v_ctorIdx_4682_, v_t_4683_, v_h_4684_, v_k_4685_);
lean_dec(v_ctorIdx_4682_);
return v_res_4686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_longLong_elim___redArg(lean_object* v_t_4687_, lean_object* v_longLong_4688_){
_start:
{
lean_object* v___x_4689_; 
v___x_4689_ = l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim___redArg(v_t_4687_, v_longLong_4688_);
return v___x_4689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_longLong_elim(lean_object* v_motive_4690_, lean_object* v_t_4691_, lean_object* v_h_4692_, lean_object* v_longLong_4693_){
_start:
{
lean_object* v___x_4694_; 
v___x_4694_ = l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim___redArg(v_t_4691_, v_longLong_4693_);
return v___x_4694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_fileHandle_elim___redArg(lean_object* v_t_4695_, lean_object* v_fileHandle_4696_){
_start:
{
lean_object* v___x_4697_; 
v___x_4697_ = l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim___redArg(v_t_4695_, v_fileHandle_4696_);
return v___x_4697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrFileHandle_fileHandle_elim(lean_object* v_motive_4698_, lean_object* v_t_4699_, lean_object* v_h_4700_, lean_object* v_fileHandle_4701_){
_start:
{
lean_object* v___x_4702_; 
v___x_4702_ = l_Lasm_JS_Node_LongLongOrFileHandle_ctorElim___redArg(v_t_4699_, v_fileHandle_4701_);
return v___x_4702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrFileHandle___lam__0(lean_object* v_x_4703_){
_start:
{
if (lean_obj_tag(v_x_4703_) == 0)
{
lean_object* v_value_4704_; lean_object* v___x_4706_; uint8_t v_isShared_4707_; uint8_t v_isSharedCheck_4716_; 
v_value_4704_ = lean_ctor_get(v_x_4703_, 0);
v_isSharedCheck_4716_ = !lean_is_exclusive(v_x_4703_);
if (v_isSharedCheck_4716_ == 0)
{
v___x_4706_ = v_x_4703_;
v_isShared_4707_ = v_isSharedCheck_4716_;
goto v_resetjp_4705_;
}
else
{
lean_inc(v_value_4704_);
lean_dec(v_x_4703_);
v___x_4706_ = lean_box(0);
v_isShared_4707_ = v_isSharedCheck_4716_;
goto v_resetjp_4705_;
}
v_resetjp_4705_:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; uint8_t v___x_4710_; 
v___x_4708_ = lean_nat_abs(v_value_4704_);
v___x_4709_ = lean_cstr_to_nat("9007199254740991");
v___x_4710_ = lean_nat_dec_le(v___x_4708_, v___x_4709_);
lean_dec(v___x_4708_);
if (v___x_4710_ == 0)
{
lean_object* v___x_4712_; 
if (v_isShared_4707_ == 0)
{
lean_ctor_set_tag(v___x_4706_, 5);
v___x_4712_ = v___x_4706_;
goto v_reusejp_4711_;
}
else
{
lean_object* v_reuseFailAlloc_4713_; 
v_reuseFailAlloc_4713_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4713_, 0, v_value_4704_);
v___x_4712_ = v_reuseFailAlloc_4713_;
goto v_reusejp_4711_;
}
v_reusejp_4711_:
{
return v___x_4712_;
}
}
else
{
double v___x_4714_; lean_object* v___x_4715_; 
lean_del_object(v___x_4706_);
v___x_4714_ = l_Float_ofInt(v_value_4704_);
lean_dec(v_value_4704_);
v___x_4715_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4715_, 0, v___x_4714_);
return v___x_4715_;
}
}
}
else
{
lean_object* v_value_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v_value_4717_ = lean_ctor_get(v_x_4703_, 0);
lean_inc(v_value_4717_);
lean_dec_ref_known(v_x_4703_, 1);
v___x_4718_ = lean_mk_string_unchecked("", 0, 0);
v___x_4719_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4719_, 0, v_value_4717_);
lean_ctor_set(v___x_4719_, 1, v___x_4718_);
return v___x_4719_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrFileHandle___lam__0(lean_object* v_value_4721_){
_start:
{
lean_object* v___x_4722_; 
v___x_4722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4722_, 0, v_value_4721_);
return v___x_4722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleLongLongOrFileHandle___lam__0(lean_object* v_value_4724_){
_start:
{
lean_object* v___x_4725_; 
v___x_4725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4725_, 0, v_value_4724_);
return v___x_4725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCreateReadStreamOptions___lam__0(lean_object* v___f_4727_, lean_object* v___f_4728_, lean_object* v___f_4729_, lean_object* v___f_4730_, lean_object* v___f_4731_, lean_object* v_d_4732_){
_start:
{
lean_object* v_flags_4733_; lean_object* v_encoding_4734_; lean_object* v_fd_4735_; lean_object* v_mode_4736_; lean_object* v_autoClose_4737_; lean_object* v_emitClose_4738_; lean_object* v_start_4739_; lean_object* v_end_4740_; lean_object* v_highWaterMark_4741_; lean_object* v_fs_4742_; lean_object* v_signal_4743_; lean_object* v_windowsHandle_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; 
v_flags_4733_ = lean_ctor_get(v_d_4732_, 0);
lean_inc(v_flags_4733_);
v_encoding_4734_ = lean_ctor_get(v_d_4732_, 1);
lean_inc(v_encoding_4734_);
v_fd_4735_ = lean_ctor_get(v_d_4732_, 2);
lean_inc(v_fd_4735_);
v_mode_4736_ = lean_ctor_get(v_d_4732_, 3);
lean_inc(v_mode_4736_);
v_autoClose_4737_ = lean_ctor_get(v_d_4732_, 4);
lean_inc(v_autoClose_4737_);
v_emitClose_4738_ = lean_ctor_get(v_d_4732_, 5);
lean_inc(v_emitClose_4738_);
v_start_4739_ = lean_ctor_get(v_d_4732_, 6);
lean_inc(v_start_4739_);
v_end_4740_ = lean_ctor_get(v_d_4732_, 7);
lean_inc(v_end_4740_);
v_highWaterMark_4741_ = lean_ctor_get(v_d_4732_, 8);
lean_inc(v_highWaterMark_4741_);
v_fs_4742_ = lean_ctor_get(v_d_4732_, 9);
lean_inc(v_fs_4742_);
v_signal_4743_ = lean_ctor_get(v_d_4732_, 10);
lean_inc(v_signal_4743_);
v_windowsHandle_4744_ = lean_ctor_get(v_d_4732_, 11);
lean_inc(v_windowsHandle_4744_);
lean_dec_ref(v_d_4732_);
v___x_4745_ = lean_mk_string_unchecked("flags", 5, 5);
lean_inc_ref(v___f_4727_);
v___x_4746_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4727_, v_flags_4733_);
v___x_4747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4745_);
lean_ctor_set(v___x_4747_, 1, v___x_4746_);
v___x_4748_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_4749_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4727_, v_encoding_4734_);
v___x_4750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4750_, 0, v___x_4748_);
lean_ctor_set(v___x_4750_, 1, v___x_4749_);
v___x_4751_ = lean_mk_string_unchecked("fd", 2, 2);
v___x_4752_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4728_, v_fd_4735_);
v___x_4753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4753_, 0, v___x_4751_);
lean_ctor_set(v___x_4753_, 1, v___x_4752_);
v___x_4754_ = lean_mk_string_unchecked("mode", 4, 4);
lean_inc_ref_n(v___f_4729_, 4);
v___x_4755_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4729_, v_mode_4736_);
v___x_4756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4756_, 0, v___x_4754_);
lean_ctor_set(v___x_4756_, 1, v___x_4755_);
v___x_4757_ = lean_mk_string_unchecked("autoClose", 9, 9);
lean_inc_ref(v___f_4730_);
v___x_4758_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4730_, v_autoClose_4737_);
v___x_4759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4759_, 0, v___x_4757_);
lean_ctor_set(v___x_4759_, 1, v___x_4758_);
v___x_4760_ = lean_mk_string_unchecked("emitClose", 9, 9);
v___x_4761_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4730_, v_emitClose_4738_);
v___x_4762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4762_, 0, v___x_4760_);
lean_ctor_set(v___x_4762_, 1, v___x_4761_);
v___x_4763_ = lean_mk_string_unchecked("start", 5, 5);
v___x_4764_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4729_, v_start_4739_);
v___x_4765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4765_, 0, v___x_4763_);
lean_ctor_set(v___x_4765_, 1, v___x_4764_);
v___x_4766_ = lean_mk_string_unchecked("end", 3, 3);
v___x_4767_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4729_, v_end_4740_);
v___x_4768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4768_, 0, v___x_4766_);
lean_ctor_set(v___x_4768_, 1, v___x_4767_);
v___x_4769_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_4770_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4729_, v_highWaterMark_4741_);
v___x_4771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4771_, 0, v___x_4769_);
lean_ctor_set(v___x_4771_, 1, v___x_4770_);
v___x_4772_ = lean_mk_string_unchecked("fs", 2, 2);
v___x_4773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4773_, 0, v___x_4772_);
lean_ctor_set(v___x_4773_, 1, v_fs_4742_);
v___x_4774_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_4775_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4731_, v_signal_4743_);
v___x_4776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4776_, 0, v___x_4774_);
lean_ctor_set(v___x_4776_, 1, v___x_4775_);
v___x_4777_ = lean_mk_string_unchecked("windowsHandle", 13, 13);
v___x_4778_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4729_, v_windowsHandle_4744_);
v___x_4779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4779_, 0, v___x_4777_);
lean_ctor_set(v___x_4779_, 1, v___x_4778_);
v___x_4780_ = lean_unsigned_to_nat(12u);
v___x_4781_ = lean_mk_empty_array_with_capacity(v___x_4780_);
v___x_4782_ = lean_array_push(v___x_4781_, v___x_4747_);
v___x_4783_ = lean_array_push(v___x_4782_, v___x_4750_);
v___x_4784_ = lean_array_push(v___x_4783_, v___x_4753_);
v___x_4785_ = lean_array_push(v___x_4784_, v___x_4756_);
v___x_4786_ = lean_array_push(v___x_4785_, v___x_4759_);
v___x_4787_ = lean_array_push(v___x_4786_, v___x_4762_);
v___x_4788_ = lean_array_push(v___x_4787_, v___x_4765_);
v___x_4789_ = lean_array_push(v___x_4788_, v___x_4768_);
v___x_4790_ = lean_array_push(v___x_4789_, v___x_4771_);
v___x_4791_ = lean_array_push(v___x_4790_, v___x_4773_);
v___x_4792_ = lean_array_push(v___x_4791_, v___x_4776_);
v___x_4793_ = lean_array_push(v___x_4792_, v___x_4779_);
v___x_4794_ = l_Lasm_JS_Web_Internal_fields(v___x_4793_);
lean_dec_ref(v___x_4793_);
return v___x_4794_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsCreateReadStreamOptions(void){
_start:
{
lean_object* v___f_4795_; lean_object* v___f_4796_; lean_object* v___f_4797_; lean_object* v___f_4798_; lean_object* v___f_4799_; lean_object* v___f_4800_; 
v___f_4795_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_4796_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrFileHandle___lam__0), 1, 0);
v___f_4797_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_4798_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4799_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_4800_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsCreateReadStreamOptions___lam__0), 6, 5);
lean_closure_set(v___f_4800_, 0, v___f_4795_);
lean_closure_set(v___f_4800_, 1, v___f_4796_);
lean_closure_set(v___f_4800_, 2, v___f_4797_);
lean_closure_set(v___f_4800_, 3, v___f_4798_);
lean_closure_set(v___f_4800_, 4, v___f_4799_);
return v___f_4800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorIdx(lean_object* v_x_4801_){
_start:
{
if (lean_obj_tag(v_x_4801_) == 0)
{
lean_object* v___x_4802_; 
v___x_4802_ = lean_unsigned_to_nat(0u);
return v___x_4802_;
}
else
{
lean_object* v___x_4803_; 
v___x_4803_ = lean_unsigned_to_nat(1u);
return v___x_4803_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorIdx___boxed(lean_object* v_x_4804_){
_start:
{
lean_object* v_res_4805_; 
v_res_4805_ = l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorIdx(v_x_4804_);
lean_dec_ref(v_x_4804_);
return v_res_4805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim___redArg(lean_object* v_t_4806_, lean_object* v_k_4807_){
_start:
{
lean_object* v_value_4808_; lean_object* v___x_4809_; 
v_value_4808_ = lean_ctor_get(v_t_4806_, 0);
lean_inc_ref(v_value_4808_);
lean_dec_ref(v_t_4806_);
v___x_4809_ = lean_apply_1(v_k_4807_, v_value_4808_);
return v___x_4809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim(lean_object* v_motive_4810_, lean_object* v_ctorIdx_4811_, lean_object* v_t_4812_, lean_object* v_h_4813_, lean_object* v_k_4814_){
_start:
{
lean_object* v___x_4815_; 
v___x_4815_ = l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim___redArg(v_t_4812_, v_k_4814_);
return v___x_4815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim___boxed(lean_object* v_motive_4816_, lean_object* v_ctorIdx_4817_, lean_object* v_t_4818_, lean_object* v_h_4819_, lean_object* v_k_4820_){
_start:
{
lean_object* v_res_4821_; 
v_res_4821_ = l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim(v_motive_4816_, v_ctorIdx_4817_, v_t_4818_, v_h_4819_, v_k_4820_);
lean_dec(v_ctorIdx_4817_);
return v_res_4821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_domString_elim___redArg(lean_object* v_t_4822_, lean_object* v_domString_4823_){
_start:
{
lean_object* v___x_4824_; 
v___x_4824_ = l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim___redArg(v_t_4822_, v_domString_4823_);
return v___x_4824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_domString_elim(lean_object* v_motive_4825_, lean_object* v_t_4826_, lean_object* v_h_4827_, lean_object* v_domString_4828_){
_start:
{
lean_object* v___x_4829_; 
v___x_4829_ = l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim___redArg(v_t_4826_, v_domString_4828_);
return v___x_4829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_createReadStreamOptions_elim___redArg(lean_object* v_t_4830_, lean_object* v_createReadStreamOptions_4831_){
_start:
{
lean_object* v___x_4832_; 
v___x_4832_ = l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim___redArg(v_t_4830_, v_createReadStreamOptions_4831_);
return v___x_4832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_createReadStreamOptions_elim(lean_object* v_motive_4833_, lean_object* v_t_4834_, lean_object* v_h_4835_, lean_object* v_createReadStreamOptions_4836_){
_start:
{
lean_object* v___x_4837_; 
v___x_4837_ = l_Lasm_JS_Node_fs_DOMStringOrCreateReadStreamOptions_ctorElim___redArg(v_t_4834_, v_createReadStreamOptions_4836_);
return v___x_4837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrCreateReadStreamOptions___lam__0(lean_object* v_x_4838_){
_start:
{
if (lean_obj_tag(v_x_4838_) == 0)
{
lean_object* v_value_4839_; lean_object* v___x_4841_; uint8_t v_isShared_4842_; uint8_t v_isSharedCheck_4846_; 
v_value_4839_ = lean_ctor_get(v_x_4838_, 0);
v_isSharedCheck_4846_ = !lean_is_exclusive(v_x_4838_);
if (v_isSharedCheck_4846_ == 0)
{
v___x_4841_ = v_x_4838_;
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
else
{
lean_inc(v_value_4839_);
lean_dec(v_x_4838_);
v___x_4841_ = lean_box(0);
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
v_resetjp_4840_:
{
lean_object* v___x_4844_; 
if (v_isShared_4842_ == 0)
{
lean_ctor_set_tag(v___x_4841_, 4);
v___x_4844_ = v___x_4841_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v_value_4839_);
v___x_4844_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
return v___x_4844_;
}
}
}
else
{
lean_object* v_value_4847_; lean_object* v_flags_4848_; lean_object* v_encoding_4849_; lean_object* v_fd_4850_; lean_object* v_mode_4851_; lean_object* v_autoClose_4852_; lean_object* v_emitClose_4853_; lean_object* v_start_4854_; lean_object* v_end_4855_; lean_object* v_highWaterMark_4856_; lean_object* v_fs_4857_; lean_object* v_signal_4858_; lean_object* v_windowsHandle_4859_; lean_object* v___f_4860_; lean_object* v___f_4861_; lean_object* v___f_4862_; lean_object* v___f_4863_; lean_object* v___f_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; 
v_value_4847_ = lean_ctor_get(v_x_4838_, 0);
lean_inc_ref(v_value_4847_);
lean_dec_ref_known(v_x_4838_, 1);
v_flags_4848_ = lean_ctor_get(v_value_4847_, 0);
lean_inc(v_flags_4848_);
v_encoding_4849_ = lean_ctor_get(v_value_4847_, 1);
lean_inc(v_encoding_4849_);
v_fd_4850_ = lean_ctor_get(v_value_4847_, 2);
lean_inc(v_fd_4850_);
v_mode_4851_ = lean_ctor_get(v_value_4847_, 3);
lean_inc(v_mode_4851_);
v_autoClose_4852_ = lean_ctor_get(v_value_4847_, 4);
lean_inc(v_autoClose_4852_);
v_emitClose_4853_ = lean_ctor_get(v_value_4847_, 5);
lean_inc(v_emitClose_4853_);
v_start_4854_ = lean_ctor_get(v_value_4847_, 6);
lean_inc(v_start_4854_);
v_end_4855_ = lean_ctor_get(v_value_4847_, 7);
lean_inc(v_end_4855_);
v_highWaterMark_4856_ = lean_ctor_get(v_value_4847_, 8);
lean_inc(v_highWaterMark_4856_);
v_fs_4857_ = lean_ctor_get(v_value_4847_, 9);
lean_inc(v_fs_4857_);
v_signal_4858_ = lean_ctor_get(v_value_4847_, 10);
lean_inc(v_signal_4858_);
v_windowsHandle_4859_ = lean_ctor_get(v_value_4847_, 11);
lean_inc(v_windowsHandle_4859_);
lean_dec_ref(v_value_4847_);
v___f_4860_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_4861_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrFileHandle___lam__0), 1, 0);
v___f_4862_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_4863_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4864_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_4865_ = lean_mk_string_unchecked("flags", 5, 5);
lean_inc_ref(v___f_4860_);
v___x_4866_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4860_, v_flags_4848_);
v___x_4867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4865_);
lean_ctor_set(v___x_4867_, 1, v___x_4866_);
v___x_4868_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_4869_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4860_, v_encoding_4849_);
v___x_4870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4870_, 0, v___x_4868_);
lean_ctor_set(v___x_4870_, 1, v___x_4869_);
v___x_4871_ = lean_mk_string_unchecked("fd", 2, 2);
v___x_4872_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4861_, v_fd_4850_);
v___x_4873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4873_, 0, v___x_4871_);
lean_ctor_set(v___x_4873_, 1, v___x_4872_);
v___x_4874_ = lean_mk_string_unchecked("mode", 4, 4);
lean_inc_ref_n(v___f_4862_, 4);
v___x_4875_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4862_, v_mode_4851_);
v___x_4876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4876_, 0, v___x_4874_);
lean_ctor_set(v___x_4876_, 1, v___x_4875_);
v___x_4877_ = lean_mk_string_unchecked("autoClose", 9, 9);
lean_inc_ref(v___f_4863_);
v___x_4878_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4863_, v_autoClose_4852_);
v___x_4879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4879_, 0, v___x_4877_);
lean_ctor_set(v___x_4879_, 1, v___x_4878_);
v___x_4880_ = lean_mk_string_unchecked("emitClose", 9, 9);
v___x_4881_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4863_, v_emitClose_4853_);
v___x_4882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4882_, 0, v___x_4880_);
lean_ctor_set(v___x_4882_, 1, v___x_4881_);
v___x_4883_ = lean_mk_string_unchecked("start", 5, 5);
v___x_4884_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4862_, v_start_4854_);
v___x_4885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4885_, 0, v___x_4883_);
lean_ctor_set(v___x_4885_, 1, v___x_4884_);
v___x_4886_ = lean_mk_string_unchecked("end", 3, 3);
v___x_4887_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4862_, v_end_4855_);
v___x_4888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4888_, 0, v___x_4886_);
lean_ctor_set(v___x_4888_, 1, v___x_4887_);
v___x_4889_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_4890_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4862_, v_highWaterMark_4856_);
v___x_4891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4891_, 0, v___x_4889_);
lean_ctor_set(v___x_4891_, 1, v___x_4890_);
v___x_4892_ = lean_mk_string_unchecked("fs", 2, 2);
v___x_4893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4893_, 0, v___x_4892_);
lean_ctor_set(v___x_4893_, 1, v_fs_4857_);
v___x_4894_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_4895_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4864_, v_signal_4858_);
v___x_4896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4896_, 0, v___x_4894_);
lean_ctor_set(v___x_4896_, 1, v___x_4895_);
v___x_4897_ = lean_mk_string_unchecked("windowsHandle", 13, 13);
v___x_4898_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4862_, v_windowsHandle_4859_);
v___x_4899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4897_);
lean_ctor_set(v___x_4899_, 1, v___x_4898_);
v___x_4900_ = lean_unsigned_to_nat(12u);
v___x_4901_ = lean_mk_empty_array_with_capacity(v___x_4900_);
v___x_4902_ = lean_array_push(v___x_4901_, v___x_4867_);
v___x_4903_ = lean_array_push(v___x_4902_, v___x_4870_);
v___x_4904_ = lean_array_push(v___x_4903_, v___x_4873_);
v___x_4905_ = lean_array_push(v___x_4904_, v___x_4876_);
v___x_4906_ = lean_array_push(v___x_4905_, v___x_4879_);
v___x_4907_ = lean_array_push(v___x_4906_, v___x_4882_);
v___x_4908_ = lean_array_push(v___x_4907_, v___x_4885_);
v___x_4909_ = lean_array_push(v___x_4908_, v___x_4888_);
v___x_4910_ = lean_array_push(v___x_4909_, v___x_4891_);
v___x_4911_ = lean_array_push(v___x_4910_, v___x_4893_);
v___x_4912_ = lean_array_push(v___x_4911_, v___x_4896_);
v___x_4913_ = lean_array_push(v___x_4912_, v___x_4899_);
v___x_4914_ = l_Lasm_JS_Web_Internal_fields(v___x_4913_);
lean_dec_ref(v___x_4913_);
return v___x_4914_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateReadStreamOptions___lam__0(lean_object* v_value_4916_){
_start:
{
lean_object* v___x_4917_; 
v___x_4917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4917_, 0, v_value_4916_);
return v___x_4917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsCreateReadStreamOptionsFsDOMStringOrCreateReadStreamOptions___lam__0(lean_object* v_value_4919_){
_start:
{
lean_object* v___x_4920_; 
v___x_4920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4920_, 0, v_value_4919_);
return v___x_4920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCreateWriteStreamOptions___lam__0(lean_object* v___f_4922_, lean_object* v___f_4923_, lean_object* v___f_4924_, lean_object* v___f_4925_, lean_object* v___f_4926_, lean_object* v___f_4927_, lean_object* v_d_4928_){
_start:
{
lean_object* v_flags_4929_; lean_object* v_encoding_4930_; lean_object* v_fd_4931_; lean_object* v_mode_4932_; lean_object* v_autoClose_4933_; lean_object* v_emitClose_4934_; lean_object* v_start_4935_; lean_object* v_fs_4936_; lean_object* v_signal_4937_; lean_object* v_highWaterMark_4938_; lean_object* v_flush_4939_; lean_object* v_windowsHandle_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; 
v_flags_4929_ = lean_ctor_get(v_d_4928_, 0);
lean_inc(v_flags_4929_);
v_encoding_4930_ = lean_ctor_get(v_d_4928_, 1);
lean_inc(v_encoding_4930_);
v_fd_4931_ = lean_ctor_get(v_d_4928_, 2);
lean_inc(v_fd_4931_);
v_mode_4932_ = lean_ctor_get(v_d_4928_, 3);
lean_inc(v_mode_4932_);
v_autoClose_4933_ = lean_ctor_get(v_d_4928_, 4);
lean_inc(v_autoClose_4933_);
v_emitClose_4934_ = lean_ctor_get(v_d_4928_, 5);
lean_inc(v_emitClose_4934_);
v_start_4935_ = lean_ctor_get(v_d_4928_, 6);
lean_inc(v_start_4935_);
v_fs_4936_ = lean_ctor_get(v_d_4928_, 7);
lean_inc(v_fs_4936_);
v_signal_4937_ = lean_ctor_get(v_d_4928_, 8);
lean_inc(v_signal_4937_);
v_highWaterMark_4938_ = lean_ctor_get(v_d_4928_, 9);
lean_inc(v_highWaterMark_4938_);
v_flush_4939_ = lean_ctor_get(v_d_4928_, 10);
lean_inc(v_flush_4939_);
v_windowsHandle_4940_ = lean_ctor_get(v_d_4928_, 11);
lean_inc(v_windowsHandle_4940_);
lean_dec_ref(v_d_4928_);
v___x_4941_ = lean_mk_string_unchecked("flags", 5, 5);
lean_inc_ref(v___f_4922_);
v___x_4942_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4922_, v_flags_4929_);
v___x_4943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4943_, 0, v___x_4941_);
lean_ctor_set(v___x_4943_, 1, v___x_4942_);
v___x_4944_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_4945_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4922_, v_encoding_4930_);
v___x_4946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4946_, 0, v___x_4944_);
lean_ctor_set(v___x_4946_, 1, v___x_4945_);
v___x_4947_ = lean_mk_string_unchecked("fd", 2, 2);
v___x_4948_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4923_, v_fd_4931_);
v___x_4949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4947_);
lean_ctor_set(v___x_4949_, 1, v___x_4948_);
v___x_4950_ = lean_mk_string_unchecked("mode", 4, 4);
lean_inc_ref_n(v___f_4924_, 2);
v___x_4951_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4924_, v_mode_4932_);
v___x_4952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4952_, 0, v___x_4950_);
lean_ctor_set(v___x_4952_, 1, v___x_4951_);
v___x_4953_ = lean_mk_string_unchecked("autoClose", 9, 9);
lean_inc_ref_n(v___f_4925_, 2);
v___x_4954_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4925_, v_autoClose_4933_);
v___x_4955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4955_, 0, v___x_4953_);
lean_ctor_set(v___x_4955_, 1, v___x_4954_);
v___x_4956_ = lean_mk_string_unchecked("emitClose", 9, 9);
v___x_4957_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4925_, v_emitClose_4934_);
v___x_4958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4958_, 0, v___x_4956_);
lean_ctor_set(v___x_4958_, 1, v___x_4957_);
v___x_4959_ = lean_mk_string_unchecked("start", 5, 5);
v___x_4960_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4924_, v_start_4935_);
v___x_4961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4961_, 0, v___x_4959_);
lean_ctor_set(v___x_4961_, 1, v___x_4960_);
v___x_4962_ = lean_mk_string_unchecked("fs", 2, 2);
v___x_4963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4963_, 0, v___x_4962_);
lean_ctor_set(v___x_4963_, 1, v_fs_4936_);
v___x_4964_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_4965_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4926_, v_signal_4937_);
v___x_4966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4966_, 0, v___x_4964_);
lean_ctor_set(v___x_4966_, 1, v___x_4965_);
v___x_4967_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_4968_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4927_, v_highWaterMark_4938_);
v___x_4969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4969_, 0, v___x_4967_);
lean_ctor_set(v___x_4969_, 1, v___x_4968_);
v___x_4970_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_4971_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4925_, v_flush_4939_);
v___x_4972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4970_);
lean_ctor_set(v___x_4972_, 1, v___x_4971_);
v___x_4973_ = lean_mk_string_unchecked("windowsHandle", 13, 13);
v___x_4974_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_4924_, v_windowsHandle_4940_);
v___x_4975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4975_, 0, v___x_4973_);
lean_ctor_set(v___x_4975_, 1, v___x_4974_);
v___x_4976_ = lean_unsigned_to_nat(12u);
v___x_4977_ = lean_mk_empty_array_with_capacity(v___x_4976_);
v___x_4978_ = lean_array_push(v___x_4977_, v___x_4943_);
v___x_4979_ = lean_array_push(v___x_4978_, v___x_4946_);
v___x_4980_ = lean_array_push(v___x_4979_, v___x_4949_);
v___x_4981_ = lean_array_push(v___x_4980_, v___x_4952_);
v___x_4982_ = lean_array_push(v___x_4981_, v___x_4955_);
v___x_4983_ = lean_array_push(v___x_4982_, v___x_4958_);
v___x_4984_ = lean_array_push(v___x_4983_, v___x_4961_);
v___x_4985_ = lean_array_push(v___x_4984_, v___x_4963_);
v___x_4986_ = lean_array_push(v___x_4985_, v___x_4966_);
v___x_4987_ = lean_array_push(v___x_4986_, v___x_4969_);
v___x_4988_ = lean_array_push(v___x_4987_, v___x_4972_);
v___x_4989_ = lean_array_push(v___x_4988_, v___x_4975_);
v___x_4990_ = l_Lasm_JS_Web_Internal_fields(v___x_4989_);
lean_dec_ref(v___x_4989_);
return v___x_4990_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsCreateWriteStreamOptions(void){
_start:
{
lean_object* v___f_4991_; lean_object* v___f_4992_; lean_object* v___f_4993_; lean_object* v___f_4994_; lean_object* v___f_4995_; lean_object* v___f_4996_; lean_object* v___f_4997_; 
v___f_4991_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_4992_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrFileHandle___lam__0), 1, 0);
v___f_4993_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_4994_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_4995_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_4996_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_4997_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsCreateWriteStreamOptions___lam__0), 7, 6);
lean_closure_set(v___f_4997_, 0, v___f_4991_);
lean_closure_set(v___f_4997_, 1, v___f_4992_);
lean_closure_set(v___f_4997_, 2, v___f_4993_);
lean_closure_set(v___f_4997_, 3, v___f_4994_);
lean_closure_set(v___f_4997_, 4, v___f_4995_);
lean_closure_set(v___f_4997_, 5, v___f_4996_);
return v___f_4997_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorIdx(lean_object* v_x_4998_){
_start:
{
if (lean_obj_tag(v_x_4998_) == 0)
{
lean_object* v___x_4999_; 
v___x_4999_ = lean_unsigned_to_nat(0u);
return v___x_4999_;
}
else
{
lean_object* v___x_5000_; 
v___x_5000_ = lean_unsigned_to_nat(1u);
return v___x_5000_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorIdx___boxed(lean_object* v_x_5001_){
_start:
{
lean_object* v_res_5002_; 
v_res_5002_ = l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorIdx(v_x_5001_);
lean_dec_ref(v_x_5001_);
return v_res_5002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim___redArg(lean_object* v_t_5003_, lean_object* v_k_5004_){
_start:
{
lean_object* v_value_5005_; lean_object* v___x_5006_; 
v_value_5005_ = lean_ctor_get(v_t_5003_, 0);
lean_inc_ref(v_value_5005_);
lean_dec_ref(v_t_5003_);
v___x_5006_ = lean_apply_1(v_k_5004_, v_value_5005_);
return v___x_5006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim(lean_object* v_motive_5007_, lean_object* v_ctorIdx_5008_, lean_object* v_t_5009_, lean_object* v_h_5010_, lean_object* v_k_5011_){
_start:
{
lean_object* v___x_5012_; 
v___x_5012_ = l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim___redArg(v_t_5009_, v_k_5011_);
return v___x_5012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim___boxed(lean_object* v_motive_5013_, lean_object* v_ctorIdx_5014_, lean_object* v_t_5015_, lean_object* v_h_5016_, lean_object* v_k_5017_){
_start:
{
lean_object* v_res_5018_; 
v_res_5018_ = l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim(v_motive_5013_, v_ctorIdx_5014_, v_t_5015_, v_h_5016_, v_k_5017_);
lean_dec(v_ctorIdx_5014_);
return v_res_5018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_domString_elim___redArg(lean_object* v_t_5019_, lean_object* v_domString_5020_){
_start:
{
lean_object* v___x_5021_; 
v___x_5021_ = l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim___redArg(v_t_5019_, v_domString_5020_);
return v___x_5021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_domString_elim(lean_object* v_motive_5022_, lean_object* v_t_5023_, lean_object* v_h_5024_, lean_object* v_domString_5025_){
_start:
{
lean_object* v___x_5026_; 
v___x_5026_ = l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim___redArg(v_t_5023_, v_domString_5025_);
return v___x_5026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_createWriteStreamOptions_elim___redArg(lean_object* v_t_5027_, lean_object* v_createWriteStreamOptions_5028_){
_start:
{
lean_object* v___x_5029_; 
v___x_5029_ = l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim___redArg(v_t_5027_, v_createWriteStreamOptions_5028_);
return v___x_5029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_createWriteStreamOptions_elim(lean_object* v_motive_5030_, lean_object* v_t_5031_, lean_object* v_h_5032_, lean_object* v_createWriteStreamOptions_5033_){
_start:
{
lean_object* v___x_5034_; 
v___x_5034_ = l_Lasm_JS_Node_fs_DOMStringOrCreateWriteStreamOptions_ctorElim___redArg(v_t_5031_, v_createWriteStreamOptions_5033_);
return v___x_5034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrCreateWriteStreamOptions___lam__0(lean_object* v_x_5035_){
_start:
{
if (lean_obj_tag(v_x_5035_) == 0)
{
lean_object* v_value_5036_; lean_object* v___x_5038_; uint8_t v_isShared_5039_; uint8_t v_isSharedCheck_5043_; 
v_value_5036_ = lean_ctor_get(v_x_5035_, 0);
v_isSharedCheck_5043_ = !lean_is_exclusive(v_x_5035_);
if (v_isSharedCheck_5043_ == 0)
{
v___x_5038_ = v_x_5035_;
v_isShared_5039_ = v_isSharedCheck_5043_;
goto v_resetjp_5037_;
}
else
{
lean_inc(v_value_5036_);
lean_dec(v_x_5035_);
v___x_5038_ = lean_box(0);
v_isShared_5039_ = v_isSharedCheck_5043_;
goto v_resetjp_5037_;
}
v_resetjp_5037_:
{
lean_object* v___x_5041_; 
if (v_isShared_5039_ == 0)
{
lean_ctor_set_tag(v___x_5038_, 4);
v___x_5041_ = v___x_5038_;
goto v_reusejp_5040_;
}
else
{
lean_object* v_reuseFailAlloc_5042_; 
v_reuseFailAlloc_5042_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5042_, 0, v_value_5036_);
v___x_5041_ = v_reuseFailAlloc_5042_;
goto v_reusejp_5040_;
}
v_reusejp_5040_:
{
return v___x_5041_;
}
}
}
else
{
lean_object* v_value_5044_; lean_object* v_flags_5045_; lean_object* v_encoding_5046_; lean_object* v_fd_5047_; lean_object* v_mode_5048_; lean_object* v_autoClose_5049_; lean_object* v_emitClose_5050_; lean_object* v_start_5051_; lean_object* v_fs_5052_; lean_object* v_signal_5053_; lean_object* v_highWaterMark_5054_; lean_object* v_flush_5055_; lean_object* v_windowsHandle_5056_; lean_object* v___f_5057_; lean_object* v___f_5058_; lean_object* v___f_5059_; lean_object* v___f_5060_; lean_object* v___f_5061_; lean_object* v___f_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; 
v_value_5044_ = lean_ctor_get(v_x_5035_, 0);
lean_inc_ref(v_value_5044_);
lean_dec_ref_known(v_x_5035_, 1);
v_flags_5045_ = lean_ctor_get(v_value_5044_, 0);
lean_inc(v_flags_5045_);
v_encoding_5046_ = lean_ctor_get(v_value_5044_, 1);
lean_inc(v_encoding_5046_);
v_fd_5047_ = lean_ctor_get(v_value_5044_, 2);
lean_inc(v_fd_5047_);
v_mode_5048_ = lean_ctor_get(v_value_5044_, 3);
lean_inc(v_mode_5048_);
v_autoClose_5049_ = lean_ctor_get(v_value_5044_, 4);
lean_inc(v_autoClose_5049_);
v_emitClose_5050_ = lean_ctor_get(v_value_5044_, 5);
lean_inc(v_emitClose_5050_);
v_start_5051_ = lean_ctor_get(v_value_5044_, 6);
lean_inc(v_start_5051_);
v_fs_5052_ = lean_ctor_get(v_value_5044_, 7);
lean_inc(v_fs_5052_);
v_signal_5053_ = lean_ctor_get(v_value_5044_, 8);
lean_inc(v_signal_5053_);
v_highWaterMark_5054_ = lean_ctor_get(v_value_5044_, 9);
lean_inc(v_highWaterMark_5054_);
v_flush_5055_ = lean_ctor_get(v_value_5044_, 10);
lean_inc(v_flush_5055_);
v_windowsHandle_5056_ = lean_ctor_get(v_value_5044_, 11);
lean_inc(v_windowsHandle_5056_);
lean_dec_ref(v_value_5044_);
v___f_5057_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5058_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrFileHandle___lam__0), 1, 0);
v___f_5059_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_5060_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5061_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_5062_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___x_5063_ = lean_mk_string_unchecked("flags", 5, 5);
lean_inc_ref(v___f_5057_);
v___x_5064_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5057_, v_flags_5045_);
v___x_5065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5065_, 0, v___x_5063_);
lean_ctor_set(v___x_5065_, 1, v___x_5064_);
v___x_5066_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_5067_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5057_, v_encoding_5046_);
v___x_5068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5068_, 0, v___x_5066_);
lean_ctor_set(v___x_5068_, 1, v___x_5067_);
v___x_5069_ = lean_mk_string_unchecked("fd", 2, 2);
v___x_5070_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5058_, v_fd_5047_);
v___x_5071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5071_, 0, v___x_5069_);
lean_ctor_set(v___x_5071_, 1, v___x_5070_);
v___x_5072_ = lean_mk_string_unchecked("mode", 4, 4);
lean_inc_ref_n(v___f_5059_, 2);
v___x_5073_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5059_, v_mode_5048_);
v___x_5074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5074_, 0, v___x_5072_);
lean_ctor_set(v___x_5074_, 1, v___x_5073_);
v___x_5075_ = lean_mk_string_unchecked("autoClose", 9, 9);
lean_inc_ref_n(v___f_5060_, 2);
v___x_5076_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5060_, v_autoClose_5049_);
v___x_5077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5077_, 0, v___x_5075_);
lean_ctor_set(v___x_5077_, 1, v___x_5076_);
v___x_5078_ = lean_mk_string_unchecked("emitClose", 9, 9);
v___x_5079_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5060_, v_emitClose_5050_);
v___x_5080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5080_, 0, v___x_5078_);
lean_ctor_set(v___x_5080_, 1, v___x_5079_);
v___x_5081_ = lean_mk_string_unchecked("start", 5, 5);
v___x_5082_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5059_, v_start_5051_);
v___x_5083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5083_, 0, v___x_5081_);
lean_ctor_set(v___x_5083_, 1, v___x_5082_);
v___x_5084_ = lean_mk_string_unchecked("fs", 2, 2);
v___x_5085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5085_, 0, v___x_5084_);
lean_ctor_set(v___x_5085_, 1, v_fs_5052_);
v___x_5086_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_5087_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5061_, v_signal_5053_);
v___x_5088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5088_, 0, v___x_5086_);
lean_ctor_set(v___x_5088_, 1, v___x_5087_);
v___x_5089_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_5090_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5062_, v_highWaterMark_5054_);
v___x_5091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5091_, 0, v___x_5089_);
lean_ctor_set(v___x_5091_, 1, v___x_5090_);
v___x_5092_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_5093_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5060_, v_flush_5055_);
v___x_5094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5094_, 0, v___x_5092_);
lean_ctor_set(v___x_5094_, 1, v___x_5093_);
v___x_5095_ = lean_mk_string_unchecked("windowsHandle", 13, 13);
v___x_5096_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5059_, v_windowsHandle_5056_);
v___x_5097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5097_, 0, v___x_5095_);
lean_ctor_set(v___x_5097_, 1, v___x_5096_);
v___x_5098_ = lean_unsigned_to_nat(12u);
v___x_5099_ = lean_mk_empty_array_with_capacity(v___x_5098_);
v___x_5100_ = lean_array_push(v___x_5099_, v___x_5065_);
v___x_5101_ = lean_array_push(v___x_5100_, v___x_5068_);
v___x_5102_ = lean_array_push(v___x_5101_, v___x_5071_);
v___x_5103_ = lean_array_push(v___x_5102_, v___x_5074_);
v___x_5104_ = lean_array_push(v___x_5103_, v___x_5077_);
v___x_5105_ = lean_array_push(v___x_5104_, v___x_5080_);
v___x_5106_ = lean_array_push(v___x_5105_, v___x_5083_);
v___x_5107_ = lean_array_push(v___x_5106_, v___x_5085_);
v___x_5108_ = lean_array_push(v___x_5107_, v___x_5088_);
v___x_5109_ = lean_array_push(v___x_5108_, v___x_5091_);
v___x_5110_ = lean_array_push(v___x_5109_, v___x_5094_);
v___x_5111_ = lean_array_push(v___x_5110_, v___x_5097_);
v___x_5112_ = l_Lasm_JS_Web_Internal_fields(v___x_5111_);
lean_dec_ref(v___x_5111_);
return v___x_5112_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrCreateWriteStreamOptions___lam__0(lean_object* v_value_5114_){
_start:
{
lean_object* v___x_5115_; 
v___x_5115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5115_, 0, v_value_5114_);
return v___x_5115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsCreateWriteStreamOptionsFsDOMStringOrCreateWriteStreamOptions___lam__0(lean_object* v_value_5117_){
_start:
{
lean_object* v___x_5118_; 
v___x_5118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5118_, 0, v_value_5117_);
return v___x_5118_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsFstatOptions(void){
_start:
{
lean_object* v___f_5120_; lean_object* v___f_5121_; 
v___f_5120_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5121_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesLstatOptions___lam__0), 2, 1);
lean_closure_set(v___f_5121_, 0, v___f_5120_);
return v___f_5121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsGlobOptions___lam__0(lean_object* v___f_5122_, lean_object* v___x_5123_, lean_object* v___f_5124_, lean_object* v_d_5125_){
_start:
{
lean_object* v_cwd_5126_; lean_object* v_exclude_5127_; lean_object* v_followSymlinks_5128_; lean_object* v_withFileTypes_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; 
v_cwd_5126_ = lean_ctor_get(v_d_5125_, 0);
lean_inc(v_cwd_5126_);
v_exclude_5127_ = lean_ctor_get(v_d_5125_, 1);
lean_inc(v_exclude_5127_);
v_followSymlinks_5128_ = lean_ctor_get(v_d_5125_, 2);
lean_inc(v_followSymlinks_5128_);
v_withFileTypes_5129_ = lean_ctor_get(v_d_5125_, 3);
lean_inc(v_withFileTypes_5129_);
lean_dec_ref(v_d_5125_);
v___x_5130_ = lean_mk_string_unchecked("cwd", 3, 3);
v___x_5131_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5122_, v_cwd_5126_);
v___x_5132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5132_, 0, v___x_5130_);
lean_ctor_set(v___x_5132_, 1, v___x_5131_);
v___x_5133_ = lean_mk_string_unchecked("exclude", 7, 7);
v___x_5134_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_5123_, v_exclude_5127_);
v___x_5135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5135_, 0, v___x_5133_);
lean_ctor_set(v___x_5135_, 1, v___x_5134_);
v___x_5136_ = lean_mk_string_unchecked("followSymlinks", 14, 14);
lean_inc_ref(v___f_5124_);
v___x_5137_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5124_, v_followSymlinks_5128_);
v___x_5138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5138_, 0, v___x_5136_);
lean_ctor_set(v___x_5138_, 1, v___x_5137_);
v___x_5139_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
v___x_5140_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5124_, v_withFileTypes_5129_);
v___x_5141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5141_, 0, v___x_5139_);
lean_ctor_set(v___x_5141_, 1, v___x_5140_);
v___x_5142_ = lean_unsigned_to_nat(4u);
v___x_5143_ = lean_mk_empty_array_with_capacity(v___x_5142_);
v___x_5144_ = lean_array_push(v___x_5143_, v___x_5132_);
v___x_5145_ = lean_array_push(v___x_5144_, v___x_5135_);
v___x_5146_ = lean_array_push(v___x_5145_, v___x_5138_);
v___x_5147_ = lean_array_push(v___x_5146_, v___x_5141_);
v___x_5148_ = l_Lasm_JS_Web_Internal_fields(v___x_5147_);
lean_dec_ref(v___x_5147_);
return v___x_5148_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsGlobOptions(void){
_start:
{
lean_object* v___f_5149_; lean_object* v___x_5150_; lean_object* v___f_5151_; lean_object* v___f_5152_; 
v___f_5149_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0), 1, 0);
v___x_5150_ = l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString;
v___f_5151_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5152_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsGlobOptions___lam__0), 4, 3);
lean_closure_set(v___f_5152_, 0, v___f_5149_);
lean_closure_set(v___f_5152_, 1, v___x_5150_);
lean_closure_set(v___f_5152_, 2, v___f_5151_);
return v___f_5152_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsLstatOptions(void){
_start:
{
lean_object* v___f_5153_; lean_object* v___f_5154_; 
v___f_5153_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5154_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesLstatOptions___lam__0), 2, 1);
lean_closure_set(v___f_5154_, 0, v___f_5153_);
return v___f_5154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirOptions___lam__0(lean_object* v___f_5155_, lean_object* v___f_5156_, lean_object* v_d_5157_){
_start:
{
lean_object* v_recursive_5158_; lean_object* v_mode_5159_; lean_object* v___x_5161_; uint8_t v_isShared_5162_; uint8_t v_isSharedCheck_5176_; 
v_recursive_5158_ = lean_ctor_get(v_d_5157_, 0);
v_mode_5159_ = lean_ctor_get(v_d_5157_, 1);
v_isSharedCheck_5176_ = !lean_is_exclusive(v_d_5157_);
if (v_isSharedCheck_5176_ == 0)
{
v___x_5161_ = v_d_5157_;
v_isShared_5162_ = v_isSharedCheck_5176_;
goto v_resetjp_5160_;
}
else
{
lean_inc(v_mode_5159_);
lean_inc(v_recursive_5158_);
lean_dec(v_d_5157_);
v___x_5161_ = lean_box(0);
v_isShared_5162_ = v_isSharedCheck_5176_;
goto v_resetjp_5160_;
}
v_resetjp_5160_:
{
lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5166_; 
v___x_5163_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_5164_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5155_, v_recursive_5158_);
if (v_isShared_5162_ == 0)
{
lean_ctor_set(v___x_5161_, 1, v___x_5164_);
lean_ctor_set(v___x_5161_, 0, v___x_5163_);
v___x_5166_ = v___x_5161_;
goto v_reusejp_5165_;
}
else
{
lean_object* v_reuseFailAlloc_5175_; 
v_reuseFailAlloc_5175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5175_, 0, v___x_5163_);
lean_ctor_set(v_reuseFailAlloc_5175_, 1, v___x_5164_);
v___x_5166_ = v_reuseFailAlloc_5175_;
goto v_reusejp_5165_;
}
v_reusejp_5165_:
{
lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; 
v___x_5167_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_5168_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5156_, v_mode_5159_);
v___x_5169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5169_, 0, v___x_5167_);
lean_ctor_set(v___x_5169_, 1, v___x_5168_);
v___x_5170_ = lean_unsigned_to_nat(2u);
v___x_5171_ = lean_mk_empty_array_with_capacity(v___x_5170_);
v___x_5172_ = lean_array_push(v___x_5171_, v___x_5166_);
v___x_5173_ = lean_array_push(v___x_5172_, v___x_5169_);
v___x_5174_ = l_Lasm_JS_Web_Internal_fields(v___x_5173_);
lean_dec_ref(v___x_5173_);
return v___x_5174_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsMkdirOptions(void){
_start:
{
lean_object* v___f_5177_; lean_object* v___f_5178_; lean_object* v___f_5179_; 
v___f_5177_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5178_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0), 1, 0);
v___f_5179_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsMkdirOptions___lam__0), 3, 2);
lean_closure_set(v___f_5179_, 0, v___f_5177_);
lean_closure_set(v___f_5179_, 1, v___f_5178_);
return v___f_5179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorIdx(lean_object* v_x_5180_){
_start:
{
if (lean_obj_tag(v_x_5180_) == 0)
{
lean_object* v___x_5181_; 
v___x_5181_ = lean_unsigned_to_nat(0u);
return v___x_5181_;
}
else
{
lean_object* v___x_5182_; 
v___x_5182_ = lean_unsigned_to_nat(1u);
return v___x_5182_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorIdx___boxed(lean_object* v_x_5183_){
_start:
{
lean_object* v_res_5184_; 
v_res_5184_ = l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorIdx(v_x_5183_);
lean_dec_ref(v_x_5183_);
return v_res_5184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim___redArg(lean_object* v_t_5185_, lean_object* v_k_5186_){
_start:
{
if (lean_obj_tag(v_t_5185_) == 0)
{
lean_object* v_value_5187_; lean_object* v___x_5188_; 
v_value_5187_ = lean_ctor_get(v_t_5185_, 0);
lean_inc_ref(v_value_5187_);
lean_dec_ref_known(v_t_5185_, 1);
v___x_5188_ = lean_apply_1(v_k_5186_, v_value_5187_);
return v___x_5188_;
}
else
{
lean_object* v_value_5189_; lean_object* v___x_5190_; 
v_value_5189_ = lean_ctor_get(v_t_5185_, 0);
lean_inc(v_value_5189_);
lean_dec_ref_known(v_t_5185_, 1);
v___x_5190_ = lean_apply_1(v_k_5186_, v_value_5189_);
return v___x_5190_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim(lean_object* v_motive_5191_, lean_object* v_ctorIdx_5192_, lean_object* v_t_5193_, lean_object* v_h_5194_, lean_object* v_k_5195_){
_start:
{
lean_object* v___x_5196_; 
v___x_5196_ = l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_5193_, v_k_5195_);
return v___x_5196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim___boxed(lean_object* v_motive_5197_, lean_object* v_ctorIdx_5198_, lean_object* v_t_5199_, lean_object* v_h_5200_, lean_object* v_k_5201_){
_start:
{
lean_object* v_res_5202_; 
v_res_5202_ = l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim(v_motive_5197_, v_ctorIdx_5198_, v_t_5199_, v_h_5200_, v_k_5201_);
lean_dec(v_ctorIdx_5198_);
return v_res_5202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_mkdirOptions_elim___redArg(lean_object* v_t_5203_, lean_object* v_mkdirOptions_5204_){
_start:
{
lean_object* v___x_5205_; 
v___x_5205_ = l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_5203_, v_mkdirOptions_5204_);
return v___x_5205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_mkdirOptions_elim(lean_object* v_motive_5206_, lean_object* v_t_5207_, lean_object* v_h_5208_, lean_object* v_mkdirOptions_5209_){
_start:
{
lean_object* v___x_5210_; 
v___x_5210_ = l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_5207_, v_mkdirOptions_5209_);
return v___x_5210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_longLong_elim___redArg(lean_object* v_t_5211_, lean_object* v_longLong_5212_){
_start:
{
lean_object* v___x_5213_; 
v___x_5213_ = l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_5211_, v_longLong_5212_);
return v___x_5213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_longLong_elim(lean_object* v_motive_5214_, lean_object* v_t_5215_, lean_object* v_h_5216_, lean_object* v_longLong_5217_){
_start:
{
lean_object* v___x_5218_; 
v___x_5218_ = l_Lasm_JS_Node_fs_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_5215_, v_longLong_5217_);
return v___x_5218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirOptionsOrLongLong___lam__0(lean_object* v_x_5219_){
_start:
{
if (lean_obj_tag(v_x_5219_) == 0)
{
lean_object* v_value_5220_; lean_object* v_recursive_5221_; lean_object* v_mode_5222_; lean_object* v___x_5224_; uint8_t v_isShared_5225_; uint8_t v_isSharedCheck_5241_; 
v_value_5220_ = lean_ctor_get(v_x_5219_, 0);
lean_inc_ref(v_value_5220_);
lean_dec_ref_known(v_x_5219_, 1);
v_recursive_5221_ = lean_ctor_get(v_value_5220_, 0);
v_mode_5222_ = lean_ctor_get(v_value_5220_, 1);
v_isSharedCheck_5241_ = !lean_is_exclusive(v_value_5220_);
if (v_isSharedCheck_5241_ == 0)
{
v___x_5224_ = v_value_5220_;
v_isShared_5225_ = v_isSharedCheck_5241_;
goto v_resetjp_5223_;
}
else
{
lean_inc(v_mode_5222_);
lean_inc(v_recursive_5221_);
lean_dec(v_value_5220_);
v___x_5224_ = lean_box(0);
v_isShared_5225_ = v_isSharedCheck_5241_;
goto v_resetjp_5223_;
}
v_resetjp_5223_:
{
lean_object* v___f_5226_; lean_object* v___f_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5231_; 
v___f_5226_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5227_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0), 1, 0);
v___x_5228_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_5229_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5226_, v_recursive_5221_);
if (v_isShared_5225_ == 0)
{
lean_ctor_set(v___x_5224_, 1, v___x_5229_);
lean_ctor_set(v___x_5224_, 0, v___x_5228_);
v___x_5231_ = v___x_5224_;
goto v_reusejp_5230_;
}
else
{
lean_object* v_reuseFailAlloc_5240_; 
v_reuseFailAlloc_5240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5240_, 0, v___x_5228_);
lean_ctor_set(v_reuseFailAlloc_5240_, 1, v___x_5229_);
v___x_5231_ = v_reuseFailAlloc_5240_;
goto v_reusejp_5230_;
}
v_reusejp_5230_:
{
lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; lean_object* v___x_5239_; 
v___x_5232_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_5233_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5227_, v_mode_5222_);
v___x_5234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5234_, 0, v___x_5232_);
lean_ctor_set(v___x_5234_, 1, v___x_5233_);
v___x_5235_ = lean_unsigned_to_nat(2u);
v___x_5236_ = lean_mk_empty_array_with_capacity(v___x_5235_);
v___x_5237_ = lean_array_push(v___x_5236_, v___x_5231_);
v___x_5238_ = lean_array_push(v___x_5237_, v___x_5234_);
v___x_5239_ = l_Lasm_JS_Web_Internal_fields(v___x_5238_);
lean_dec_ref(v___x_5238_);
return v___x_5239_;
}
}
}
else
{
lean_object* v_value_5242_; lean_object* v___x_5244_; uint8_t v_isShared_5245_; uint8_t v_isSharedCheck_5254_; 
v_value_5242_ = lean_ctor_get(v_x_5219_, 0);
v_isSharedCheck_5254_ = !lean_is_exclusive(v_x_5219_);
if (v_isSharedCheck_5254_ == 0)
{
v___x_5244_ = v_x_5219_;
v_isShared_5245_ = v_isSharedCheck_5254_;
goto v_resetjp_5243_;
}
else
{
lean_inc(v_value_5242_);
lean_dec(v_x_5219_);
v___x_5244_ = lean_box(0);
v_isShared_5245_ = v_isSharedCheck_5254_;
goto v_resetjp_5243_;
}
v_resetjp_5243_:
{
lean_object* v___x_5246_; lean_object* v___x_5247_; uint8_t v___x_5248_; 
v___x_5246_ = lean_nat_abs(v_value_5242_);
v___x_5247_ = lean_cstr_to_nat("9007199254740991");
v___x_5248_ = lean_nat_dec_le(v___x_5246_, v___x_5247_);
lean_dec(v___x_5246_);
if (v___x_5248_ == 0)
{
lean_object* v___x_5250_; 
if (v_isShared_5245_ == 0)
{
lean_ctor_set_tag(v___x_5244_, 5);
v___x_5250_ = v___x_5244_;
goto v_reusejp_5249_;
}
else
{
lean_object* v_reuseFailAlloc_5251_; 
v_reuseFailAlloc_5251_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5251_, 0, v_value_5242_);
v___x_5250_ = v_reuseFailAlloc_5251_;
goto v_reusejp_5249_;
}
v_reusejp_5249_:
{
return v___x_5250_;
}
}
else
{
double v___x_5252_; lean_object* v___x_5253_; 
lean_del_object(v___x_5244_);
v___x_5252_ = l_Float_ofInt(v_value_5242_);
lean_dec(v_value_5242_);
v___x_5253_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5253_, 0, v___x_5252_);
return v___x_5253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdirOptionsFsMkdirOptionsOrLongLong___lam__0(lean_object* v_value_5256_){
_start:
{
lean_object* v___x_5257_; 
v___x_5257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5257_, 0, v_value_5256_);
return v___x_5257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntFsMkdirOptionsOrLongLong___lam__0(lean_object* v_value_5259_){
_start:
{
lean_object* v___x_5260_; 
v___x_5260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5260_, 0, v_value_5259_);
return v___x_5260_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsMkdtempOptions(void){
_start:
{
lean_object* v___f_5262_; lean_object* v___f_5263_; 
v___f_5262_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5263_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_5263_, 0, v___f_5262_);
return v___f_5263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorIdx(lean_object* v_x_5264_){
_start:
{
if (lean_obj_tag(v_x_5264_) == 0)
{
lean_object* v___x_5265_; 
v___x_5265_ = lean_unsigned_to_nat(0u);
return v___x_5265_;
}
else
{
lean_object* v___x_5266_; 
v___x_5266_ = lean_unsigned_to_nat(1u);
return v___x_5266_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorIdx___boxed(lean_object* v_x_5267_){
_start:
{
lean_object* v_res_5268_; 
v_res_5268_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorIdx(v_x_5267_);
lean_dec_ref(v_x_5267_);
return v_res_5268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim___redArg(lean_object* v_t_5269_, lean_object* v_k_5270_){
_start:
{
if (lean_obj_tag(v_t_5269_) == 0)
{
lean_object* v_value_5271_; lean_object* v___x_5272_; 
v_value_5271_ = lean_ctor_get(v_t_5269_, 0);
lean_inc_ref(v_value_5271_);
lean_dec_ref_known(v_t_5269_, 1);
v___x_5272_ = lean_apply_1(v_k_5270_, v_value_5271_);
return v___x_5272_;
}
else
{
lean_object* v_value_5273_; lean_object* v___x_5274_; 
v_value_5273_ = lean_ctor_get(v_t_5269_, 0);
lean_inc(v_value_5273_);
lean_dec_ref_known(v_t_5269_, 1);
v___x_5274_ = lean_apply_1(v_k_5270_, v_value_5273_);
return v___x_5274_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim(lean_object* v_motive_5275_, lean_object* v_ctorIdx_5276_, lean_object* v_t_5277_, lean_object* v_h_5278_, lean_object* v_k_5279_){
_start:
{
lean_object* v___x_5280_; 
v___x_5280_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_5277_, v_k_5279_);
return v___x_5280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim___boxed(lean_object* v_motive_5281_, lean_object* v_ctorIdx_5282_, lean_object* v_t_5283_, lean_object* v_h_5284_, lean_object* v_k_5285_){
_start:
{
lean_object* v_res_5286_; 
v_res_5286_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim(v_motive_5281_, v_ctorIdx_5282_, v_t_5283_, v_h_5284_, v_k_5285_);
lean_dec(v_ctorIdx_5282_);
return v_res_5286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_domString_elim___redArg(lean_object* v_t_5287_, lean_object* v_domString_5288_){
_start:
{
lean_object* v___x_5289_; 
v___x_5289_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_5287_, v_domString_5288_);
return v___x_5289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_domString_elim(lean_object* v_motive_5290_, lean_object* v_t_5291_, lean_object* v_h_5292_, lean_object* v_domString_5293_){
_start:
{
lean_object* v___x_5294_; 
v___x_5294_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_5291_, v_domString_5293_);
return v___x_5294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_mkdtempOptions_elim___redArg(lean_object* v_t_5295_, lean_object* v_mkdtempOptions_5296_){
_start:
{
lean_object* v___x_5297_; 
v___x_5297_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_5295_, v_mkdtempOptions_5296_);
return v___x_5297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_mkdtempOptions_elim(lean_object* v_motive_5298_, lean_object* v_t_5299_, lean_object* v_h_5300_, lean_object* v_mkdtempOptions_5301_){
_start:
{
lean_object* v___x_5302_; 
v___x_5302_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_5299_, v_mkdtempOptions_5301_);
return v___x_5302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempOptions___lam__0(lean_object* v_x_5303_){
_start:
{
if (lean_obj_tag(v_x_5303_) == 0)
{
lean_object* v_value_5304_; lean_object* v___x_5306_; uint8_t v_isShared_5307_; uint8_t v_isSharedCheck_5311_; 
v_value_5304_ = lean_ctor_get(v_x_5303_, 0);
v_isSharedCheck_5311_ = !lean_is_exclusive(v_x_5303_);
if (v_isSharedCheck_5311_ == 0)
{
v___x_5306_ = v_x_5303_;
v_isShared_5307_ = v_isSharedCheck_5311_;
goto v_resetjp_5305_;
}
else
{
lean_inc(v_value_5304_);
lean_dec(v_x_5303_);
v___x_5306_ = lean_box(0);
v_isShared_5307_ = v_isSharedCheck_5311_;
goto v_resetjp_5305_;
}
v_resetjp_5305_:
{
lean_object* v___x_5309_; 
if (v_isShared_5307_ == 0)
{
lean_ctor_set_tag(v___x_5306_, 4);
v___x_5309_ = v___x_5306_;
goto v_reusejp_5308_;
}
else
{
lean_object* v_reuseFailAlloc_5310_; 
v_reuseFailAlloc_5310_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5310_, 0, v_value_5304_);
v___x_5309_ = v_reuseFailAlloc_5310_;
goto v_reusejp_5308_;
}
v_reusejp_5308_:
{
return v___x_5309_;
}
}
}
else
{
lean_object* v_value_5312_; lean_object* v___f_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; 
v_value_5312_ = lean_ctor_get(v_x_5303_, 0);
lean_inc(v_value_5312_);
lean_dec_ref_known(v_x_5303_, 1);
v___f_5313_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_5314_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_5315_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5313_, v_value_5312_);
v___x_5316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5316_, 0, v___x_5314_);
lean_ctor_set(v___x_5316_, 1, v___x_5315_);
v___x_5317_ = lean_unsigned_to_nat(1u);
v___x_5318_ = lean_mk_empty_array_with_capacity(v___x_5317_);
v___x_5319_ = lean_array_push(v___x_5318_, v___x_5316_);
v___x_5320_ = l_Lasm_JS_Web_Internal_fields(v___x_5319_);
lean_dec_ref(v___x_5319_);
return v___x_5320_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempOptions___lam__0(lean_object* v_value_5322_){
_start:
{
lean_object* v___x_5323_; 
v___x_5323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5323_, 0, v_value_5322_);
return v___x_5323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdtempOptionsFsDOMStringOrMkdtempOptions___lam__0(lean_object* v_value_5325_){
_start:
{
lean_object* v___x_5326_; 
v___x_5326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5326_, 0, v_value_5325_);
return v___x_5326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpenAsBlobOptions___lam__0(lean_object* v___f_5328_, lean_object* v_d_5329_){
_start:
{
lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; 
v___x_5330_ = lean_mk_string_unchecked("type", 4, 4);
v___x_5331_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5328_, v_d_5329_);
v___x_5332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5332_, 0, v___x_5330_);
lean_ctor_set(v___x_5332_, 1, v___x_5331_);
v___x_5333_ = lean_unsigned_to_nat(1u);
v___x_5334_ = lean_mk_empty_array_with_capacity(v___x_5333_);
v___x_5335_ = lean_array_push(v___x_5334_, v___x_5332_);
v___x_5336_ = l_Lasm_JS_Web_Internal_fields(v___x_5335_);
lean_dec_ref(v___x_5335_);
return v___x_5336_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsOpenAsBlobOptions(void){
_start:
{
lean_object* v___f_5337_; lean_object* v___f_5338_; 
v___f_5337_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5338_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsOpenAsBlobOptions___lam__0), 2, 1);
lean_closure_set(v___f_5338_, 0, v___f_5337_);
return v___f_5338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpendirOptions___lam__0(lean_object* v___f_5339_, lean_object* v___f_5340_, lean_object* v___f_5341_, lean_object* v_d_5342_){
_start:
{
lean_object* v_encoding_5343_; lean_object* v_bufferSize_5344_; lean_object* v_recursive_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; 
v_encoding_5343_ = lean_ctor_get(v_d_5342_, 0);
lean_inc(v_encoding_5343_);
v_bufferSize_5344_ = lean_ctor_get(v_d_5342_, 1);
lean_inc(v_bufferSize_5344_);
v_recursive_5345_ = lean_ctor_get(v_d_5342_, 2);
lean_inc(v_recursive_5345_);
lean_dec_ref(v_d_5342_);
v___x_5346_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_5347_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5339_, v_encoding_5343_);
v___x_5348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5348_, 0, v___x_5346_);
lean_ctor_set(v___x_5348_, 1, v___x_5347_);
v___x_5349_ = lean_mk_string_unchecked("bufferSize", 10, 10);
v___x_5350_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5340_, v_bufferSize_5344_);
v___x_5351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5351_, 0, v___x_5349_);
lean_ctor_set(v___x_5351_, 1, v___x_5350_);
v___x_5352_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_5353_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5341_, v_recursive_5345_);
v___x_5354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5354_, 0, v___x_5352_);
lean_ctor_set(v___x_5354_, 1, v___x_5353_);
v___x_5355_ = lean_unsigned_to_nat(3u);
v___x_5356_ = lean_mk_empty_array_with_capacity(v___x_5355_);
v___x_5357_ = lean_array_push(v___x_5356_, v___x_5348_);
v___x_5358_ = lean_array_push(v___x_5357_, v___x_5351_);
v___x_5359_ = lean_array_push(v___x_5358_, v___x_5354_);
v___x_5360_ = l_Lasm_JS_Web_Internal_fields(v___x_5359_);
lean_dec_ref(v___x_5359_);
return v___x_5360_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsOpendirOptions(void){
_start:
{
lean_object* v___f_5361_; lean_object* v___f_5362_; lean_object* v___f_5363_; lean_object* v___f_5364_; 
v___f_5361_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5362_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_5363_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5364_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsOpendirOptions___lam__0), 4, 3);
lean_closure_set(v___f_5364_, 0, v___f_5361_);
lean_closure_set(v___f_5364_, 1, v___f_5362_);
lean_closure_set(v___f_5364_, 2, v___f_5363_);
return v___f_5364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadOptions___lam__0(lean_object* v___f_5365_, lean_object* v___f_5366_, lean_object* v___f_5367_, lean_object* v_d_5368_){
_start:
{
lean_object* v_buffer_5369_; lean_object* v_offset_5370_; lean_object* v_length_5371_; lean_object* v_position_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; 
v_buffer_5369_ = lean_ctor_get(v_d_5368_, 0);
lean_inc(v_buffer_5369_);
v_offset_5370_ = lean_ctor_get(v_d_5368_, 1);
lean_inc(v_offset_5370_);
v_length_5371_ = lean_ctor_get(v_d_5368_, 2);
lean_inc(v_length_5371_);
v_position_5372_ = lean_ctor_get(v_d_5368_, 3);
lean_inc(v_position_5372_);
lean_dec_ref(v_d_5368_);
v___x_5373_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_5374_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5365_, v_buffer_5369_);
v___x_5375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5375_, 0, v___x_5373_);
lean_ctor_set(v___x_5375_, 1, v___x_5374_);
v___x_5376_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref(v___f_5366_);
v___x_5377_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5366_, v_offset_5370_);
v___x_5378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5378_, 0, v___x_5376_);
lean_ctor_set(v___x_5378_, 1, v___x_5377_);
v___x_5379_ = lean_mk_string_unchecked("length", 6, 6);
v___x_5380_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5366_, v_length_5371_);
v___x_5381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5381_, 0, v___x_5379_);
lean_ctor_set(v___x_5381_, 1, v___x_5380_);
v___x_5382_ = lean_mk_string_unchecked("position", 8, 8);
v___x_5383_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5367_, v_position_5372_);
v___x_5384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5384_, 0, v___x_5382_);
lean_ctor_set(v___x_5384_, 1, v___x_5383_);
v___x_5385_ = lean_unsigned_to_nat(4u);
v___x_5386_ = lean_mk_empty_array_with_capacity(v___x_5385_);
v___x_5387_ = lean_array_push(v___x_5386_, v___x_5375_);
v___x_5388_ = lean_array_push(v___x_5387_, v___x_5378_);
v___x_5389_ = lean_array_push(v___x_5388_, v___x_5381_);
v___x_5390_ = lean_array_push(v___x_5389_, v___x_5384_);
v___x_5391_ = l_Lasm_JS_Web_Internal_fields(v___x_5390_);
lean_dec_ref(v___x_5390_);
return v___x_5391_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsReadOptions(void){
_start:
{
lean_object* v___f_5392_; lean_object* v___f_5393_; lean_object* v___f_5394_; lean_object* v___f_5395_; 
v___f_5392_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSByteArray___lam__0), 1, 0);
v___f_5393_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_5394_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0), 1, 0);
v___f_5395_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsReadOptions___lam__0), 4, 3);
lean_closure_set(v___f_5395_, 0, v___f_5392_);
lean_closure_set(v___f_5395_, 1, v___f_5393_);
lean_closure_set(v___f_5395_, 2, v___f_5394_);
return v___f_5395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadOptions2___lam__0(lean_object* v___f_5396_, lean_object* v___f_5397_, lean_object* v_d_5398_){
_start:
{
lean_object* v_offset_5399_; lean_object* v_length_5400_; lean_object* v_position_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; 
v_offset_5399_ = lean_ctor_get(v_d_5398_, 0);
lean_inc(v_offset_5399_);
v_length_5400_ = lean_ctor_get(v_d_5398_, 1);
lean_inc(v_length_5400_);
v_position_5401_ = lean_ctor_get(v_d_5398_, 2);
lean_inc(v_position_5401_);
lean_dec_ref(v_d_5398_);
v___x_5402_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref(v___f_5396_);
v___x_5403_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5396_, v_offset_5399_);
v___x_5404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5404_, 0, v___x_5402_);
lean_ctor_set(v___x_5404_, 1, v___x_5403_);
v___x_5405_ = lean_mk_string_unchecked("length", 6, 6);
v___x_5406_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5396_, v_length_5400_);
v___x_5407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5407_, 0, v___x_5405_);
lean_ctor_set(v___x_5407_, 1, v___x_5406_);
v___x_5408_ = lean_mk_string_unchecked("position", 8, 8);
v___x_5409_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5397_, v_position_5401_);
v___x_5410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5410_, 0, v___x_5408_);
lean_ctor_set(v___x_5410_, 1, v___x_5409_);
v___x_5411_ = lean_unsigned_to_nat(3u);
v___x_5412_ = lean_mk_empty_array_with_capacity(v___x_5411_);
v___x_5413_ = lean_array_push(v___x_5412_, v___x_5404_);
v___x_5414_ = lean_array_push(v___x_5413_, v___x_5407_);
v___x_5415_ = lean_array_push(v___x_5414_, v___x_5410_);
v___x_5416_ = l_Lasm_JS_Web_Internal_fields(v___x_5415_);
lean_dec_ref(v___x_5415_);
return v___x_5416_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsReadOptions2(void){
_start:
{
lean_object* v___f_5417_; lean_object* v___f_5418_; lean_object* v___f_5419_; 
v___f_5417_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_5418_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0), 1, 0);
v___f_5419_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsReadOptions2___lam__0), 3, 2);
lean_closure_set(v___f_5419_, 0, v___f_5417_);
lean_closure_set(v___f_5419_, 1, v___f_5418_);
return v___f_5419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReaddirOptions___lam__0(lean_object* v___f_5420_, lean_object* v___f_5421_, lean_object* v_d_5422_){
_start:
{
lean_object* v_encoding_5423_; lean_object* v_withFileTypes_5424_; lean_object* v_recursive_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; 
v_encoding_5423_ = lean_ctor_get(v_d_5422_, 0);
lean_inc(v_encoding_5423_);
v_withFileTypes_5424_ = lean_ctor_get(v_d_5422_, 1);
lean_inc(v_withFileTypes_5424_);
v_recursive_5425_ = lean_ctor_get(v_d_5422_, 2);
lean_inc(v_recursive_5425_);
lean_dec_ref(v_d_5422_);
v___x_5426_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_5427_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5420_, v_encoding_5423_);
v___x_5428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5428_, 0, v___x_5426_);
lean_ctor_set(v___x_5428_, 1, v___x_5427_);
v___x_5429_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
lean_inc_ref(v___f_5421_);
v___x_5430_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5421_, v_withFileTypes_5424_);
v___x_5431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5431_, 0, v___x_5429_);
lean_ctor_set(v___x_5431_, 1, v___x_5430_);
v___x_5432_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_5433_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5421_, v_recursive_5425_);
v___x_5434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5434_, 0, v___x_5432_);
lean_ctor_set(v___x_5434_, 1, v___x_5433_);
v___x_5435_ = lean_unsigned_to_nat(3u);
v___x_5436_ = lean_mk_empty_array_with_capacity(v___x_5435_);
v___x_5437_ = lean_array_push(v___x_5436_, v___x_5428_);
v___x_5438_ = lean_array_push(v___x_5437_, v___x_5431_);
v___x_5439_ = lean_array_push(v___x_5438_, v___x_5434_);
v___x_5440_ = l_Lasm_JS_Web_Internal_fields(v___x_5439_);
lean_dec_ref(v___x_5439_);
return v___x_5440_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsReaddirOptions(void){
_start:
{
lean_object* v___f_5441_; lean_object* v___f_5442_; lean_object* v___f_5443_; 
v___f_5441_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5442_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5443_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsReaddirOptions___lam__0), 3, 2);
lean_closure_set(v___f_5443_, 0, v___f_5441_);
lean_closure_set(v___f_5443_, 1, v___f_5442_);
return v___f_5443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorIdx(lean_object* v_x_5444_){
_start:
{
if (lean_obj_tag(v_x_5444_) == 0)
{
lean_object* v___x_5445_; 
v___x_5445_ = lean_unsigned_to_nat(0u);
return v___x_5445_;
}
else
{
lean_object* v___x_5446_; 
v___x_5446_ = lean_unsigned_to_nat(1u);
return v___x_5446_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorIdx___boxed(lean_object* v_x_5447_){
_start:
{
lean_object* v_res_5448_; 
v_res_5448_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorIdx(v_x_5447_);
lean_dec_ref(v_x_5447_);
return v_res_5448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim___redArg(lean_object* v_t_5449_, lean_object* v_k_5450_){
_start:
{
lean_object* v_value_5451_; lean_object* v___x_5452_; 
v_value_5451_ = lean_ctor_get(v_t_5449_, 0);
lean_inc_ref(v_value_5451_);
lean_dec_ref(v_t_5449_);
v___x_5452_ = lean_apply_1(v_k_5450_, v_value_5451_);
return v___x_5452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim(lean_object* v_motive_5453_, lean_object* v_ctorIdx_5454_, lean_object* v_t_5455_, lean_object* v_h_5456_, lean_object* v_k_5457_){
_start:
{
lean_object* v___x_5458_; 
v___x_5458_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_5455_, v_k_5457_);
return v___x_5458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim___boxed(lean_object* v_motive_5459_, lean_object* v_ctorIdx_5460_, lean_object* v_t_5461_, lean_object* v_h_5462_, lean_object* v_k_5463_){
_start:
{
lean_object* v_res_5464_; 
v_res_5464_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim(v_motive_5459_, v_ctorIdx_5460_, v_t_5461_, v_h_5462_, v_k_5463_);
lean_dec(v_ctorIdx_5460_);
return v_res_5464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_domString_elim___redArg(lean_object* v_t_5465_, lean_object* v_domString_5466_){
_start:
{
lean_object* v___x_5467_; 
v___x_5467_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_5465_, v_domString_5466_);
return v___x_5467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_domString_elim(lean_object* v_motive_5468_, lean_object* v_t_5469_, lean_object* v_h_5470_, lean_object* v_domString_5471_){
_start:
{
lean_object* v___x_5472_; 
v___x_5472_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_5469_, v_domString_5471_);
return v___x_5472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_readdirOptions_elim___redArg(lean_object* v_t_5473_, lean_object* v_readdirOptions_5474_){
_start:
{
lean_object* v___x_5475_; 
v___x_5475_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_5473_, v_readdirOptions_5474_);
return v___x_5475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_readdirOptions_elim(lean_object* v_motive_5476_, lean_object* v_t_5477_, lean_object* v_h_5478_, lean_object* v_readdirOptions_5479_){
_start:
{
lean_object* v___x_5480_; 
v___x_5480_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_5477_, v_readdirOptions_5479_);
return v___x_5480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirOptions___lam__0(lean_object* v_x_5481_){
_start:
{
if (lean_obj_tag(v_x_5481_) == 0)
{
lean_object* v_value_5482_; lean_object* v___x_5484_; uint8_t v_isShared_5485_; uint8_t v_isSharedCheck_5489_; 
v_value_5482_ = lean_ctor_get(v_x_5481_, 0);
v_isSharedCheck_5489_ = !lean_is_exclusive(v_x_5481_);
if (v_isSharedCheck_5489_ == 0)
{
v___x_5484_ = v_x_5481_;
v_isShared_5485_ = v_isSharedCheck_5489_;
goto v_resetjp_5483_;
}
else
{
lean_inc(v_value_5482_);
lean_dec(v_x_5481_);
v___x_5484_ = lean_box(0);
v_isShared_5485_ = v_isSharedCheck_5489_;
goto v_resetjp_5483_;
}
v_resetjp_5483_:
{
lean_object* v___x_5487_; 
if (v_isShared_5485_ == 0)
{
lean_ctor_set_tag(v___x_5484_, 4);
v___x_5487_ = v___x_5484_;
goto v_reusejp_5486_;
}
else
{
lean_object* v_reuseFailAlloc_5488_; 
v_reuseFailAlloc_5488_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5488_, 0, v_value_5482_);
v___x_5487_ = v_reuseFailAlloc_5488_;
goto v_reusejp_5486_;
}
v_reusejp_5486_:
{
return v___x_5487_;
}
}
}
else
{
lean_object* v_value_5490_; lean_object* v_encoding_5491_; lean_object* v_withFileTypes_5492_; lean_object* v_recursive_5493_; lean_object* v___f_5494_; lean_object* v___f_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; 
v_value_5490_ = lean_ctor_get(v_x_5481_, 0);
lean_inc_ref(v_value_5490_);
lean_dec_ref_known(v_x_5481_, 1);
v_encoding_5491_ = lean_ctor_get(v_value_5490_, 0);
lean_inc(v_encoding_5491_);
v_withFileTypes_5492_ = lean_ctor_get(v_value_5490_, 1);
lean_inc(v_withFileTypes_5492_);
v_recursive_5493_ = lean_ctor_get(v_value_5490_, 2);
lean_inc(v_recursive_5493_);
lean_dec_ref(v_value_5490_);
v___f_5494_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5495_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_5496_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_5497_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5494_, v_encoding_5491_);
v___x_5498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5498_, 0, v___x_5496_);
lean_ctor_set(v___x_5498_, 1, v___x_5497_);
v___x_5499_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
lean_inc_ref(v___f_5495_);
v___x_5500_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5495_, v_withFileTypes_5492_);
v___x_5501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5501_, 0, v___x_5499_);
lean_ctor_set(v___x_5501_, 1, v___x_5500_);
v___x_5502_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_5503_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5495_, v_recursive_5493_);
v___x_5504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5504_, 0, v___x_5502_);
lean_ctor_set(v___x_5504_, 1, v___x_5503_);
v___x_5505_ = lean_unsigned_to_nat(3u);
v___x_5506_ = lean_mk_empty_array_with_capacity(v___x_5505_);
v___x_5507_ = lean_array_push(v___x_5506_, v___x_5498_);
v___x_5508_ = lean_array_push(v___x_5507_, v___x_5501_);
v___x_5509_ = lean_array_push(v___x_5508_, v___x_5504_);
v___x_5510_ = l_Lasm_JS_Web_Internal_fields(v___x_5509_);
lean_dec_ref(v___x_5509_);
return v___x_5510_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirOptions___lam__0(lean_object* v_value_5512_){
_start:
{
lean_object* v___x_5513_; 
v___x_5513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5513_, 0, v_value_5512_);
return v___x_5513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReaddirOptionsFsDOMStringOrReaddirOptions___lam__0(lean_object* v_value_5515_){
_start:
{
lean_object* v___x_5516_; 
v___x_5516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5516_, 0, v_value_5515_);
return v___x_5516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorIdx(lean_object* v_x_5518_){
_start:
{
switch(lean_obj_tag(v_x_5518_))
{
case 0:
{
lean_object* v___x_5519_; 
v___x_5519_ = lean_unsigned_to_nat(0u);
return v___x_5519_;
}
case 1:
{
lean_object* v___x_5520_; 
v___x_5520_ = lean_unsigned_to_nat(1u);
return v___x_5520_;
}
case 2:
{
lean_object* v___x_5521_; 
v___x_5521_ = lean_unsigned_to_nat(2u);
return v___x_5521_;
}
default: 
{
lean_object* v___x_5522_; 
v___x_5522_ = lean_unsigned_to_nat(3u);
return v___x_5522_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorIdx___boxed(lean_object* v_x_5523_){
_start:
{
lean_object* v_res_5524_; 
v_res_5524_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorIdx(v_x_5523_);
lean_dec_ref(v_x_5523_);
return v_res_5524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(lean_object* v_t_5525_, lean_object* v_k_5526_){
_start:
{
switch(lean_obj_tag(v_t_5525_))
{
case 2:
{
lean_object* v_value_5527_; lean_object* v___x_5528_; 
v_value_5527_ = lean_ctor_get(v_t_5525_, 0);
lean_inc(v_value_5527_);
lean_dec_ref_known(v_t_5525_, 1);
v___x_5528_ = lean_apply_1(v_k_5526_, v_value_5527_);
return v___x_5528_;
}
case 3:
{
lean_object* v_value_5529_; lean_object* v___x_5530_; 
v_value_5529_ = lean_ctor_get(v_t_5525_, 0);
lean_inc(v_value_5529_);
lean_dec_ref_known(v_t_5525_, 1);
v___x_5530_ = lean_apply_1(v_k_5526_, v_value_5529_);
return v___x_5530_;
}
default: 
{
lean_object* v_value_5531_; lean_object* v___x_5532_; 
v_value_5531_ = lean_ctor_get(v_t_5525_, 0);
lean_inc_ref(v_value_5531_);
lean_dec_ref(v_t_5525_);
v___x_5532_ = lean_apply_1(v_k_5526_, v_value_5531_);
return v___x_5532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim(lean_object* v_motive_5533_, lean_object* v_ctorIdx_5534_, lean_object* v_t_5535_, lean_object* v_h_5536_, lean_object* v_k_5537_){
_start:
{
lean_object* v___x_5538_; 
v___x_5538_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(v_t_5535_, v_k_5537_);
return v___x_5538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___boxed(lean_object* v_motive_5539_, lean_object* v_ctorIdx_5540_, lean_object* v_t_5541_, lean_object* v_h_5542_, lean_object* v_k_5543_){
_start:
{
lean_object* v_res_5544_; 
v_res_5544_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim(v_motive_5539_, v_ctorIdx_5540_, v_t_5541_, v_h_5542_, v_k_5543_);
lean_dec(v_ctorIdx_5540_);
return v_res_5544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_domString_elim___redArg(lean_object* v_t_5545_, lean_object* v_domString_5546_){
_start:
{
lean_object* v___x_5547_; 
v___x_5547_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(v_t_5545_, v_domString_5546_);
return v___x_5547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_domString_elim(lean_object* v_motive_5548_, lean_object* v_t_5549_, lean_object* v_h_5550_, lean_object* v_domString_5551_){
_start:
{
lean_object* v___x_5552_; 
v___x_5552_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(v_t_5549_, v_domString_5551_);
return v___x_5552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_uint8Array_elim___redArg(lean_object* v_t_5553_, lean_object* v_uint8Array_5554_){
_start:
{
lean_object* v___x_5555_; 
v___x_5555_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(v_t_5553_, v_uint8Array_5554_);
return v___x_5555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_uint8Array_elim(lean_object* v_motive_5556_, lean_object* v_t_5557_, lean_object* v_h_5558_, lean_object* v_uint8Array_5559_){
_start:
{
lean_object* v___x_5560_; 
v___x_5560_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(v_t_5557_, v_uint8Array_5559_);
return v___x_5560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_url_elim___redArg(lean_object* v_t_5561_, lean_object* v_url_5562_){
_start:
{
lean_object* v___x_5563_; 
v___x_5563_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(v_t_5561_, v_url_5562_);
return v___x_5563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_url_elim(lean_object* v_motive_5564_, lean_object* v_t_5565_, lean_object* v_h_5566_, lean_object* v_url_5567_){
_start:
{
lean_object* v___x_5568_; 
v___x_5568_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(v_t_5565_, v_url_5567_);
return v___x_5568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_longLong_elim___redArg(lean_object* v_t_5569_, lean_object* v_longLong_5570_){
_start:
{
lean_object* v___x_5571_; 
v___x_5571_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(v_t_5569_, v_longLong_5570_);
return v___x_5571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_longLong_elim(lean_object* v_motive_5572_, lean_object* v_t_5573_, lean_object* v_h_5574_, lean_object* v_longLong_5575_){
_start:
{
lean_object* v___x_5576_; 
v___x_5576_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrLongLong_ctorElim___redArg(v_t_5573_, v_longLong_5575_);
return v___x_5576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object* v_x_5577_){
_start:
{
switch(lean_obj_tag(v_x_5577_))
{
case 0:
{
lean_object* v_value_5578_; lean_object* v___x_5580_; uint8_t v_isShared_5581_; uint8_t v_isSharedCheck_5585_; 
v_value_5578_ = lean_ctor_get(v_x_5577_, 0);
v_isSharedCheck_5585_ = !lean_is_exclusive(v_x_5577_);
if (v_isSharedCheck_5585_ == 0)
{
v___x_5580_ = v_x_5577_;
v_isShared_5581_ = v_isSharedCheck_5585_;
goto v_resetjp_5579_;
}
else
{
lean_inc(v_value_5578_);
lean_dec(v_x_5577_);
v___x_5580_ = lean_box(0);
v_isShared_5581_ = v_isSharedCheck_5585_;
goto v_resetjp_5579_;
}
v_resetjp_5579_:
{
lean_object* v___x_5583_; 
if (v_isShared_5581_ == 0)
{
lean_ctor_set_tag(v___x_5580_, 4);
v___x_5583_ = v___x_5580_;
goto v_reusejp_5582_;
}
else
{
lean_object* v_reuseFailAlloc_5584_; 
v_reuseFailAlloc_5584_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5584_, 0, v_value_5578_);
v___x_5583_ = v_reuseFailAlloc_5584_;
goto v_reusejp_5582_;
}
v_reusejp_5582_:
{
return v___x_5583_;
}
}
}
case 1:
{
lean_object* v_value_5586_; lean_object* v___x_5588_; uint8_t v_isShared_5589_; uint8_t v_isSharedCheck_5593_; 
v_value_5586_ = lean_ctor_get(v_x_5577_, 0);
v_isSharedCheck_5593_ = !lean_is_exclusive(v_x_5577_);
if (v_isSharedCheck_5593_ == 0)
{
v___x_5588_ = v_x_5577_;
v_isShared_5589_ = v_isSharedCheck_5593_;
goto v_resetjp_5587_;
}
else
{
lean_inc(v_value_5586_);
lean_dec(v_x_5577_);
v___x_5588_ = lean_box(0);
v_isShared_5589_ = v_isSharedCheck_5593_;
goto v_resetjp_5587_;
}
v_resetjp_5587_:
{
lean_object* v___x_5591_; 
if (v_isShared_5589_ == 0)
{
lean_ctor_set_tag(v___x_5588_, 6);
v___x_5591_ = v___x_5588_;
goto v_reusejp_5590_;
}
else
{
lean_object* v_reuseFailAlloc_5592_; 
v_reuseFailAlloc_5592_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5592_, 0, v_value_5586_);
v___x_5591_ = v_reuseFailAlloc_5592_;
goto v_reusejp_5590_;
}
v_reusejp_5590_:
{
return v___x_5591_;
}
}
}
case 2:
{
lean_object* v_value_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; 
v_value_5594_ = lean_ctor_get(v_x_5577_, 0);
lean_inc(v_value_5594_);
lean_dec_ref_known(v_x_5577_, 1);
v___x_5595_ = lean_mk_string_unchecked("", 0, 0);
v___x_5596_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5596_, 0, v_value_5594_);
lean_ctor_set(v___x_5596_, 1, v___x_5595_);
return v___x_5596_;
}
default: 
{
lean_object* v_value_5597_; lean_object* v___x_5599_; uint8_t v_isShared_5600_; uint8_t v_isSharedCheck_5609_; 
v_value_5597_ = lean_ctor_get(v_x_5577_, 0);
v_isSharedCheck_5609_ = !lean_is_exclusive(v_x_5577_);
if (v_isSharedCheck_5609_ == 0)
{
v___x_5599_ = v_x_5577_;
v_isShared_5600_ = v_isSharedCheck_5609_;
goto v_resetjp_5598_;
}
else
{
lean_inc(v_value_5597_);
lean_dec(v_x_5577_);
v___x_5599_ = lean_box(0);
v_isShared_5600_ = v_isSharedCheck_5609_;
goto v_resetjp_5598_;
}
v_resetjp_5598_:
{
lean_object* v___x_5601_; lean_object* v___x_5602_; uint8_t v___x_5603_; 
v___x_5601_ = lean_nat_abs(v_value_5597_);
v___x_5602_ = lean_cstr_to_nat("9007199254740991");
v___x_5603_ = lean_nat_dec_le(v___x_5601_, v___x_5602_);
lean_dec(v___x_5601_);
if (v___x_5603_ == 0)
{
lean_object* v___x_5605_; 
if (v_isShared_5600_ == 0)
{
lean_ctor_set_tag(v___x_5599_, 5);
v___x_5605_ = v___x_5599_;
goto v_reusejp_5604_;
}
else
{
lean_object* v_reuseFailAlloc_5606_; 
v_reuseFailAlloc_5606_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5606_, 0, v_value_5597_);
v___x_5605_ = v_reuseFailAlloc_5606_;
goto v_reusejp_5604_;
}
v_reusejp_5604_:
{
return v___x_5605_;
}
}
else
{
double v___x_5607_; lean_object* v___x_5608_; 
lean_del_object(v___x_5599_);
v___x_5607_ = l_Float_ofInt(v_value_5597_);
lean_dec(v_value_5597_);
v___x_5608_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5608_, 0, v___x_5607_);
return v___x_5608_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object* v_value_5611_){
_start:
{
lean_object* v___x_5612_; 
v___x_5612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5612_, 0, v_value_5611_);
return v___x_5612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object* v_value_5614_){
_start:
{
lean_object* v___x_5615_; 
v___x_5615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5615_, 0, v_value_5614_);
return v___x_5615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object* v_value_5617_){
_start:
{
lean_object* v___x_5618_; 
v___x_5618_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5618_, 0, v_value_5617_);
return v___x_5618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrURLOrLongLong___lam__0(lean_object* v_value_5620_){
_start:
{
lean_object* v___x_5621_; 
v___x_5621_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5621_, 0, v_value_5620_);
return v___x_5621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileOptions___lam__0(lean_object* v___f_5623_, lean_object* v___f_5624_, lean_object* v___f_5625_, lean_object* v_d_5626_){
_start:
{
lean_object* v_encoding_5627_; lean_object* v_flag_5628_; lean_object* v_signal_5629_; lean_object* v_buffer_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; 
v_encoding_5627_ = lean_ctor_get(v_d_5626_, 0);
lean_inc(v_encoding_5627_);
v_flag_5628_ = lean_ctor_get(v_d_5626_, 1);
lean_inc(v_flag_5628_);
v_signal_5629_ = lean_ctor_get(v_d_5626_, 2);
lean_inc(v_signal_5629_);
v_buffer_5630_ = lean_ctor_get(v_d_5626_, 3);
lean_inc(v_buffer_5630_);
lean_dec_ref(v_d_5626_);
v___x_5631_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_5623_);
v___x_5632_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5623_, v_encoding_5627_);
v___x_5633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5633_, 0, v___x_5631_);
lean_ctor_set(v___x_5633_, 1, v___x_5632_);
v___x_5634_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_5635_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5623_, v_flag_5628_);
v___x_5636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5636_, 0, v___x_5634_);
lean_ctor_set(v___x_5636_, 1, v___x_5635_);
v___x_5637_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_5638_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5624_, v_signal_5629_);
v___x_5639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5639_, 0, v___x_5637_);
lean_ctor_set(v___x_5639_, 1, v___x_5638_);
v___x_5640_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_5641_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5625_, v_buffer_5630_);
v___x_5642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5642_, 0, v___x_5640_);
lean_ctor_set(v___x_5642_, 1, v___x_5641_);
v___x_5643_ = lean_unsigned_to_nat(4u);
v___x_5644_ = lean_mk_empty_array_with_capacity(v___x_5643_);
v___x_5645_ = lean_array_push(v___x_5644_, v___x_5633_);
v___x_5646_ = lean_array_push(v___x_5645_, v___x_5636_);
v___x_5647_ = lean_array_push(v___x_5646_, v___x_5639_);
v___x_5648_ = lean_array_push(v___x_5647_, v___x_5642_);
v___x_5649_ = l_Lasm_JS_Web_Internal_fields(v___x_5648_);
lean_dec_ref(v___x_5648_);
return v___x_5649_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsReadFileOptions(void){
_start:
{
lean_object* v___f_5650_; lean_object* v___f_5651_; lean_object* v___f_5652_; lean_object* v___f_5653_; 
v___f_5650_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5651_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_5652_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___f_5653_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsReadFileOptions___lam__0), 4, 3);
lean_closure_set(v___f_5653_, 0, v___f_5650_);
lean_closure_set(v___f_5653_, 1, v___f_5651_);
lean_closure_set(v___f_5653_, 2, v___f_5652_);
return v___f_5653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorIdx(lean_object* v_x_5654_){
_start:
{
if (lean_obj_tag(v_x_5654_) == 0)
{
lean_object* v___x_5655_; 
v___x_5655_ = lean_unsigned_to_nat(0u);
return v___x_5655_;
}
else
{
lean_object* v___x_5656_; 
v___x_5656_ = lean_unsigned_to_nat(1u);
return v___x_5656_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_5657_){
_start:
{
lean_object* v_res_5658_; 
v_res_5658_ = l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorIdx(v_x_5657_);
lean_dec_ref(v_x_5657_);
return v_res_5658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_5659_, lean_object* v_k_5660_){
_start:
{
lean_object* v_value_5661_; lean_object* v___x_5662_; 
v_value_5661_ = lean_ctor_get(v_t_5659_, 0);
lean_inc_ref(v_value_5661_);
lean_dec_ref(v_t_5659_);
v___x_5662_ = lean_apply_1(v_k_5660_, v_value_5661_);
return v___x_5662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim(lean_object* v_motive_5663_, lean_object* v_ctorIdx_5664_, lean_object* v_t_5665_, lean_object* v_h_5666_, lean_object* v_k_5667_){
_start:
{
lean_object* v___x_5668_; 
v___x_5668_ = l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_5665_, v_k_5667_);
return v___x_5668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_5669_, lean_object* v_ctorIdx_5670_, lean_object* v_t_5671_, lean_object* v_h_5672_, lean_object* v_k_5673_){
_start:
{
lean_object* v_res_5674_; 
v_res_5674_ = l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim(v_motive_5669_, v_ctorIdx_5670_, v_t_5671_, v_h_5672_, v_k_5673_);
lean_dec(v_ctorIdx_5670_);
return v_res_5674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object* v_t_5675_, lean_object* v_readFileOptions_5676_){
_start:
{
lean_object* v___x_5677_; 
v___x_5677_ = l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_5675_, v_readFileOptions_5676_);
return v___x_5677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object* v_motive_5678_, lean_object* v_t_5679_, lean_object* v_h_5680_, lean_object* v_readFileOptions_5681_){
_start:
{
lean_object* v___x_5682_; 
v___x_5682_ = l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_5679_, v_readFileOptions_5681_);
return v___x_5682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_5683_, lean_object* v_domString_5684_){
_start:
{
lean_object* v___x_5685_; 
v___x_5685_ = l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_5683_, v_domString_5684_);
return v___x_5685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_domString_elim(lean_object* v_motive_5686_, lean_object* v_t_5687_, lean_object* v_h_5688_, lean_object* v_domString_5689_){
_start:
{
lean_object* v___x_5690_; 
v___x_5690_ = l_Lasm_JS_Node_fs_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_5687_, v_domString_5689_);
return v___x_5690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileOptionsOrDOMString___lam__0(lean_object* v_x_5691_){
_start:
{
if (lean_obj_tag(v_x_5691_) == 0)
{
lean_object* v_value_5692_; lean_object* v_encoding_5693_; lean_object* v_flag_5694_; lean_object* v_signal_5695_; lean_object* v_buffer_5696_; lean_object* v___f_5697_; lean_object* v___f_5698_; lean_object* v___f_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; 
v_value_5692_ = lean_ctor_get(v_x_5691_, 0);
lean_inc_ref(v_value_5692_);
lean_dec_ref_known(v_x_5691_, 1);
v_encoding_5693_ = lean_ctor_get(v_value_5692_, 0);
lean_inc(v_encoding_5693_);
v_flag_5694_ = lean_ctor_get(v_value_5692_, 1);
lean_inc(v_flag_5694_);
v_signal_5695_ = lean_ctor_get(v_value_5692_, 2);
lean_inc(v_signal_5695_);
v_buffer_5696_ = lean_ctor_get(v_value_5692_, 3);
lean_inc(v_buffer_5696_);
lean_dec_ref(v_value_5692_);
v___f_5697_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5698_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_5699_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___x_5700_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_5697_);
v___x_5701_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5697_, v_encoding_5693_);
v___x_5702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5702_, 0, v___x_5700_);
lean_ctor_set(v___x_5702_, 1, v___x_5701_);
v___x_5703_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_5704_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5697_, v_flag_5694_);
v___x_5705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5705_, 0, v___x_5703_);
lean_ctor_set(v___x_5705_, 1, v___x_5704_);
v___x_5706_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_5707_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5698_, v_signal_5695_);
v___x_5708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5708_, 0, v___x_5706_);
lean_ctor_set(v___x_5708_, 1, v___x_5707_);
v___x_5709_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_5710_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5699_, v_buffer_5696_);
v___x_5711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5711_, 0, v___x_5709_);
lean_ctor_set(v___x_5711_, 1, v___x_5710_);
v___x_5712_ = lean_unsigned_to_nat(4u);
v___x_5713_ = lean_mk_empty_array_with_capacity(v___x_5712_);
v___x_5714_ = lean_array_push(v___x_5713_, v___x_5702_);
v___x_5715_ = lean_array_push(v___x_5714_, v___x_5705_);
v___x_5716_ = lean_array_push(v___x_5715_, v___x_5708_);
v___x_5717_ = lean_array_push(v___x_5716_, v___x_5711_);
v___x_5718_ = l_Lasm_JS_Web_Internal_fields(v___x_5717_);
lean_dec_ref(v___x_5717_);
return v___x_5718_;
}
else
{
lean_object* v_value_5719_; lean_object* v___x_5721_; uint8_t v_isShared_5722_; uint8_t v_isSharedCheck_5726_; 
v_value_5719_ = lean_ctor_get(v_x_5691_, 0);
v_isSharedCheck_5726_ = !lean_is_exclusive(v_x_5691_);
if (v_isSharedCheck_5726_ == 0)
{
v___x_5721_ = v_x_5691_;
v_isShared_5722_ = v_isSharedCheck_5726_;
goto v_resetjp_5720_;
}
else
{
lean_inc(v_value_5719_);
lean_dec(v_x_5691_);
v___x_5721_ = lean_box(0);
v_isShared_5722_ = v_isSharedCheck_5726_;
goto v_resetjp_5720_;
}
v_resetjp_5720_:
{
lean_object* v___x_5724_; 
if (v_isShared_5722_ == 0)
{
lean_ctor_set_tag(v___x_5721_, 4);
v___x_5724_ = v___x_5721_;
goto v_reusejp_5723_;
}
else
{
lean_object* v_reuseFailAlloc_5725_; 
v_reuseFailAlloc_5725_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5725_, 0, v_value_5719_);
v___x_5724_ = v_reuseFailAlloc_5725_;
goto v_reusejp_5723_;
}
v_reusejp_5723_:
{
return v___x_5724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadFileOptionsFsReadFileOptionsOrDOMString___lam__0(lean_object* v_value_5728_){
_start:
{
lean_object* v___x_5729_; 
v___x_5729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5729_, 0, v_value_5728_);
return v___x_5729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsReadFileOptionsOrDOMString___lam__0(lean_object* v_value_5731_){
_start:
{
lean_object* v___x_5732_; 
v___x_5732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5732_, 0, v_value_5731_);
return v___x_5732_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsReadlinkOptions(void){
_start:
{
lean_object* v___f_5734_; lean_object* v___f_5735_; 
v___f_5734_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5735_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_5735_, 0, v___f_5734_);
return v___f_5735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorIdx(lean_object* v_x_5736_){
_start:
{
if (lean_obj_tag(v_x_5736_) == 0)
{
lean_object* v___x_5737_; 
v___x_5737_ = lean_unsigned_to_nat(0u);
return v___x_5737_;
}
else
{
lean_object* v___x_5738_; 
v___x_5738_ = lean_unsigned_to_nat(1u);
return v___x_5738_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorIdx___boxed(lean_object* v_x_5739_){
_start:
{
lean_object* v_res_5740_; 
v_res_5740_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorIdx(v_x_5739_);
lean_dec_ref(v_x_5739_);
return v_res_5740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim___redArg(lean_object* v_t_5741_, lean_object* v_k_5742_){
_start:
{
if (lean_obj_tag(v_t_5741_) == 0)
{
lean_object* v_value_5743_; lean_object* v___x_5744_; 
v_value_5743_ = lean_ctor_get(v_t_5741_, 0);
lean_inc_ref(v_value_5743_);
lean_dec_ref_known(v_t_5741_, 1);
v___x_5744_ = lean_apply_1(v_k_5742_, v_value_5743_);
return v___x_5744_;
}
else
{
lean_object* v_value_5745_; lean_object* v___x_5746_; 
v_value_5745_ = lean_ctor_get(v_t_5741_, 0);
lean_inc(v_value_5745_);
lean_dec_ref_known(v_t_5741_, 1);
v___x_5746_ = lean_apply_1(v_k_5742_, v_value_5745_);
return v___x_5746_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim(lean_object* v_motive_5747_, lean_object* v_ctorIdx_5748_, lean_object* v_t_5749_, lean_object* v_h_5750_, lean_object* v_k_5751_){
_start:
{
lean_object* v___x_5752_; 
v___x_5752_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_5749_, v_k_5751_);
return v___x_5752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim___boxed(lean_object* v_motive_5753_, lean_object* v_ctorIdx_5754_, lean_object* v_t_5755_, lean_object* v_h_5756_, lean_object* v_k_5757_){
_start:
{
lean_object* v_res_5758_; 
v_res_5758_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim(v_motive_5753_, v_ctorIdx_5754_, v_t_5755_, v_h_5756_, v_k_5757_);
lean_dec(v_ctorIdx_5754_);
return v_res_5758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_domString_elim___redArg(lean_object* v_t_5759_, lean_object* v_domString_5760_){
_start:
{
lean_object* v___x_5761_; 
v___x_5761_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_5759_, v_domString_5760_);
return v___x_5761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_domString_elim(lean_object* v_motive_5762_, lean_object* v_t_5763_, lean_object* v_h_5764_, lean_object* v_domString_5765_){
_start:
{
lean_object* v___x_5766_; 
v___x_5766_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_5763_, v_domString_5765_);
return v___x_5766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_readlinkOptions_elim___redArg(lean_object* v_t_5767_, lean_object* v_readlinkOptions_5768_){
_start:
{
lean_object* v___x_5769_; 
v___x_5769_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_5767_, v_readlinkOptions_5768_);
return v___x_5769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_readlinkOptions_elim(lean_object* v_motive_5770_, lean_object* v_t_5771_, lean_object* v_h_5772_, lean_object* v_readlinkOptions_5773_){
_start:
{
lean_object* v___x_5774_; 
v___x_5774_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_5771_, v_readlinkOptions_5773_);
return v___x_5774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkOptions___lam__0(lean_object* v_x_5775_){
_start:
{
if (lean_obj_tag(v_x_5775_) == 0)
{
lean_object* v_value_5776_; lean_object* v___x_5778_; uint8_t v_isShared_5779_; uint8_t v_isSharedCheck_5783_; 
v_value_5776_ = lean_ctor_get(v_x_5775_, 0);
v_isSharedCheck_5783_ = !lean_is_exclusive(v_x_5775_);
if (v_isSharedCheck_5783_ == 0)
{
v___x_5778_ = v_x_5775_;
v_isShared_5779_ = v_isSharedCheck_5783_;
goto v_resetjp_5777_;
}
else
{
lean_inc(v_value_5776_);
lean_dec(v_x_5775_);
v___x_5778_ = lean_box(0);
v_isShared_5779_ = v_isSharedCheck_5783_;
goto v_resetjp_5777_;
}
v_resetjp_5777_:
{
lean_object* v___x_5781_; 
if (v_isShared_5779_ == 0)
{
lean_ctor_set_tag(v___x_5778_, 4);
v___x_5781_ = v___x_5778_;
goto v_reusejp_5780_;
}
else
{
lean_object* v_reuseFailAlloc_5782_; 
v_reuseFailAlloc_5782_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5782_, 0, v_value_5776_);
v___x_5781_ = v_reuseFailAlloc_5782_;
goto v_reusejp_5780_;
}
v_reusejp_5780_:
{
return v___x_5781_;
}
}
}
else
{
lean_object* v_value_5784_; lean_object* v___f_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; 
v_value_5784_ = lean_ctor_get(v_x_5775_, 0);
lean_inc(v_value_5784_);
lean_dec_ref_known(v_x_5775_, 1);
v___f_5785_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_5786_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_5787_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5785_, v_value_5784_);
v___x_5788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5788_, 0, v___x_5786_);
lean_ctor_set(v___x_5788_, 1, v___x_5787_);
v___x_5789_ = lean_unsigned_to_nat(1u);
v___x_5790_ = lean_mk_empty_array_with_capacity(v___x_5789_);
v___x_5791_ = lean_array_push(v___x_5790_, v___x_5788_);
v___x_5792_ = l_Lasm_JS_Web_Internal_fields(v___x_5791_);
lean_dec_ref(v___x_5791_);
return v___x_5792_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkOptions___lam__0(lean_object* v_value_5794_){
_start:
{
lean_object* v___x_5795_; 
v___x_5795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5795_, 0, v_value_5794_);
return v___x_5795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadlinkOptionsFsDOMStringOrReadlinkOptions___lam__0(lean_object* v_value_5797_){
_start:
{
lean_object* v___x_5798_; 
v___x_5798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5798_, 0, v_value_5797_);
return v___x_5798_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsRealpathOptions(void){
_start:
{
lean_object* v___f_5800_; lean_object* v___f_5801_; 
v___f_5800_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5801_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_5801_, 0, v___f_5800_);
return v___f_5801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorIdx(lean_object* v_x_5802_){
_start:
{
if (lean_obj_tag(v_x_5802_) == 0)
{
lean_object* v___x_5803_; 
v___x_5803_ = lean_unsigned_to_nat(0u);
return v___x_5803_;
}
else
{
lean_object* v___x_5804_; 
v___x_5804_ = lean_unsigned_to_nat(1u);
return v___x_5804_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorIdx___boxed(lean_object* v_x_5805_){
_start:
{
lean_object* v_res_5806_; 
v_res_5806_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorIdx(v_x_5805_);
lean_dec_ref(v_x_5805_);
return v_res_5806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim___redArg(lean_object* v_t_5807_, lean_object* v_k_5808_){
_start:
{
if (lean_obj_tag(v_t_5807_) == 0)
{
lean_object* v_value_5809_; lean_object* v___x_5810_; 
v_value_5809_ = lean_ctor_get(v_t_5807_, 0);
lean_inc_ref(v_value_5809_);
lean_dec_ref_known(v_t_5807_, 1);
v___x_5810_ = lean_apply_1(v_k_5808_, v_value_5809_);
return v___x_5810_;
}
else
{
lean_object* v_value_5811_; lean_object* v___x_5812_; 
v_value_5811_ = lean_ctor_get(v_t_5807_, 0);
lean_inc(v_value_5811_);
lean_dec_ref_known(v_t_5807_, 1);
v___x_5812_ = lean_apply_1(v_k_5808_, v_value_5811_);
return v___x_5812_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim(lean_object* v_motive_5813_, lean_object* v_ctorIdx_5814_, lean_object* v_t_5815_, lean_object* v_h_5816_, lean_object* v_k_5817_){
_start:
{
lean_object* v___x_5818_; 
v___x_5818_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_5815_, v_k_5817_);
return v___x_5818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim___boxed(lean_object* v_motive_5819_, lean_object* v_ctorIdx_5820_, lean_object* v_t_5821_, lean_object* v_h_5822_, lean_object* v_k_5823_){
_start:
{
lean_object* v_res_5824_; 
v_res_5824_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim(v_motive_5819_, v_ctorIdx_5820_, v_t_5821_, v_h_5822_, v_k_5823_);
lean_dec(v_ctorIdx_5820_);
return v_res_5824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_domString_elim___redArg(lean_object* v_t_5825_, lean_object* v_domString_5826_){
_start:
{
lean_object* v___x_5827_; 
v___x_5827_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_5825_, v_domString_5826_);
return v___x_5827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_domString_elim(lean_object* v_motive_5828_, lean_object* v_t_5829_, lean_object* v_h_5830_, lean_object* v_domString_5831_){
_start:
{
lean_object* v___x_5832_; 
v___x_5832_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_5829_, v_domString_5831_);
return v___x_5832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_realpathOptions_elim___redArg(lean_object* v_t_5833_, lean_object* v_realpathOptions_5834_){
_start:
{
lean_object* v___x_5835_; 
v___x_5835_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_5833_, v_realpathOptions_5834_);
return v___x_5835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_realpathOptions_elim(lean_object* v_motive_5836_, lean_object* v_t_5837_, lean_object* v_h_5838_, lean_object* v_realpathOptions_5839_){
_start:
{
lean_object* v___x_5840_; 
v___x_5840_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_5837_, v_realpathOptions_5839_);
return v___x_5840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathOptions___lam__0(lean_object* v_x_5841_){
_start:
{
if (lean_obj_tag(v_x_5841_) == 0)
{
lean_object* v_value_5842_; lean_object* v___x_5844_; uint8_t v_isShared_5845_; uint8_t v_isSharedCheck_5849_; 
v_value_5842_ = lean_ctor_get(v_x_5841_, 0);
v_isSharedCheck_5849_ = !lean_is_exclusive(v_x_5841_);
if (v_isSharedCheck_5849_ == 0)
{
v___x_5844_ = v_x_5841_;
v_isShared_5845_ = v_isSharedCheck_5849_;
goto v_resetjp_5843_;
}
else
{
lean_inc(v_value_5842_);
lean_dec(v_x_5841_);
v___x_5844_ = lean_box(0);
v_isShared_5845_ = v_isSharedCheck_5849_;
goto v_resetjp_5843_;
}
v_resetjp_5843_:
{
lean_object* v___x_5847_; 
if (v_isShared_5845_ == 0)
{
lean_ctor_set_tag(v___x_5844_, 4);
v___x_5847_ = v___x_5844_;
goto v_reusejp_5846_;
}
else
{
lean_object* v_reuseFailAlloc_5848_; 
v_reuseFailAlloc_5848_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5848_, 0, v_value_5842_);
v___x_5847_ = v_reuseFailAlloc_5848_;
goto v_reusejp_5846_;
}
v_reusejp_5846_:
{
return v___x_5847_;
}
}
}
else
{
lean_object* v_value_5850_; lean_object* v___f_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; 
v_value_5850_ = lean_ctor_get(v_x_5841_, 0);
lean_inc(v_value_5850_);
lean_dec_ref_known(v_x_5841_, 1);
v___f_5851_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_5852_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_5853_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5851_, v_value_5850_);
v___x_5854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5854_, 0, v___x_5852_);
lean_ctor_set(v___x_5854_, 1, v___x_5853_);
v___x_5855_ = lean_unsigned_to_nat(1u);
v___x_5856_ = lean_mk_empty_array_with_capacity(v___x_5855_);
v___x_5857_ = lean_array_push(v___x_5856_, v___x_5854_);
v___x_5858_ = l_Lasm_JS_Web_Internal_fields(v___x_5857_);
lean_dec_ref(v___x_5857_);
return v___x_5858_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathOptions___lam__0(lean_object* v_value_5860_){
_start:
{
lean_object* v___x_5861_; 
v___x_5861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5861_, 0, v_value_5860_);
return v___x_5861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsRealpathOptionsFsDOMStringOrRealpathOptions___lam__0(lean_object* v_value_5863_){
_start:
{
lean_object* v___x_5864_; 
v___x_5864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5864_, 0, v_value_5863_);
return v___x_5864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmdirOptions___lam__0(lean_object* v___f_5866_, lean_object* v___f_5867_, lean_object* v_d_5868_){
_start:
{
lean_object* v_maxRetries_5869_; lean_object* v_recursive_5870_; lean_object* v_retryDelay_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; 
v_maxRetries_5869_ = lean_ctor_get(v_d_5868_, 0);
lean_inc(v_maxRetries_5869_);
v_recursive_5870_ = lean_ctor_get(v_d_5868_, 1);
lean_inc(v_recursive_5870_);
v_retryDelay_5871_ = lean_ctor_get(v_d_5868_, 2);
lean_inc(v_retryDelay_5871_);
lean_dec_ref(v_d_5868_);
v___x_5872_ = lean_mk_string_unchecked("maxRetries", 10, 10);
lean_inc_ref(v___f_5866_);
v___x_5873_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5866_, v_maxRetries_5869_);
v___x_5874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5874_, 0, v___x_5872_);
lean_ctor_set(v___x_5874_, 1, v___x_5873_);
v___x_5875_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_5876_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5867_, v_recursive_5870_);
v___x_5877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5877_, 0, v___x_5875_);
lean_ctor_set(v___x_5877_, 1, v___x_5876_);
v___x_5878_ = lean_mk_string_unchecked("retryDelay", 10, 10);
v___x_5879_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5866_, v_retryDelay_5871_);
v___x_5880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5880_, 0, v___x_5878_);
lean_ctor_set(v___x_5880_, 1, v___x_5879_);
v___x_5881_ = lean_unsigned_to_nat(3u);
v___x_5882_ = lean_mk_empty_array_with_capacity(v___x_5881_);
v___x_5883_ = lean_array_push(v___x_5882_, v___x_5874_);
v___x_5884_ = lean_array_push(v___x_5883_, v___x_5877_);
v___x_5885_ = lean_array_push(v___x_5884_, v___x_5880_);
v___x_5886_ = l_Lasm_JS_Web_Internal_fields(v___x_5885_);
lean_dec_ref(v___x_5885_);
return v___x_5886_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsRmdirOptions(void){
_start:
{
lean_object* v___f_5887_; lean_object* v___f_5888_; lean_object* v___f_5889_; 
v___f_5887_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_5888_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5889_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsRmdirOptions___lam__0), 3, 2);
lean_closure_set(v___f_5889_, 0, v___f_5887_);
lean_closure_set(v___f_5889_, 1, v___f_5888_);
return v___f_5889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmOptions___lam__0(lean_object* v___f_5890_, lean_object* v___f_5891_, lean_object* v_d_5892_){
_start:
{
lean_object* v_force_5893_; lean_object* v_maxRetries_5894_; lean_object* v_recursive_5895_; lean_object* v_retryDelay_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; 
v_force_5893_ = lean_ctor_get(v_d_5892_, 0);
lean_inc(v_force_5893_);
v_maxRetries_5894_ = lean_ctor_get(v_d_5892_, 1);
lean_inc(v_maxRetries_5894_);
v_recursive_5895_ = lean_ctor_get(v_d_5892_, 2);
lean_inc(v_recursive_5895_);
v_retryDelay_5896_ = lean_ctor_get(v_d_5892_, 3);
lean_inc(v_retryDelay_5896_);
lean_dec_ref(v_d_5892_);
v___x_5897_ = lean_mk_string_unchecked("force", 5, 5);
lean_inc_ref(v___f_5890_);
v___x_5898_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5890_, v_force_5893_);
v___x_5899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5899_, 0, v___x_5897_);
lean_ctor_set(v___x_5899_, 1, v___x_5898_);
v___x_5900_ = lean_mk_string_unchecked("maxRetries", 10, 10);
lean_inc_ref(v___f_5891_);
v___x_5901_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5891_, v_maxRetries_5894_);
v___x_5902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5902_, 0, v___x_5900_);
lean_ctor_set(v___x_5902_, 1, v___x_5901_);
v___x_5903_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_5904_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5890_, v_recursive_5895_);
v___x_5905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5905_, 0, v___x_5903_);
lean_ctor_set(v___x_5905_, 1, v___x_5904_);
v___x_5906_ = lean_mk_string_unchecked("retryDelay", 10, 10);
v___x_5907_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5891_, v_retryDelay_5896_);
v___x_5908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5908_, 0, v___x_5906_);
lean_ctor_set(v___x_5908_, 1, v___x_5907_);
v___x_5909_ = lean_unsigned_to_nat(4u);
v___x_5910_ = lean_mk_empty_array_with_capacity(v___x_5909_);
v___x_5911_ = lean_array_push(v___x_5910_, v___x_5899_);
v___x_5912_ = lean_array_push(v___x_5911_, v___x_5902_);
v___x_5913_ = lean_array_push(v___x_5912_, v___x_5905_);
v___x_5914_ = lean_array_push(v___x_5913_, v___x_5908_);
v___x_5915_ = l_Lasm_JS_Web_Internal_fields(v___x_5914_);
lean_dec_ref(v___x_5914_);
return v___x_5915_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsRmOptions(void){
_start:
{
lean_object* v___f_5916_; lean_object* v___f_5917_; lean_object* v___f_5918_; 
v___f_5916_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5917_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_5918_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsRmOptions___lam__0), 3, 2);
lean_closure_set(v___f_5918_, 0, v___f_5916_);
lean_closure_set(v___f_5918_, 1, v___f_5917_);
return v___f_5918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsStatOptions___lam__0(lean_object* v___f_5919_, lean_object* v_d_5920_){
_start:
{
lean_object* v_bigint_5921_; lean_object* v_throwIfNoEntry_5922_; lean_object* v___x_5924_; uint8_t v_isShared_5925_; uint8_t v_isSharedCheck_5939_; 
v_bigint_5921_ = lean_ctor_get(v_d_5920_, 0);
v_throwIfNoEntry_5922_ = lean_ctor_get(v_d_5920_, 1);
v_isSharedCheck_5939_ = !lean_is_exclusive(v_d_5920_);
if (v_isSharedCheck_5939_ == 0)
{
v___x_5924_ = v_d_5920_;
v_isShared_5925_ = v_isSharedCheck_5939_;
goto v_resetjp_5923_;
}
else
{
lean_inc(v_throwIfNoEntry_5922_);
lean_inc(v_bigint_5921_);
lean_dec(v_d_5920_);
v___x_5924_ = lean_box(0);
v_isShared_5925_ = v_isSharedCheck_5939_;
goto v_resetjp_5923_;
}
v_resetjp_5923_:
{
lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5929_; 
v___x_5926_ = lean_mk_string_unchecked("bigint", 6, 6);
lean_inc_ref(v___f_5919_);
v___x_5927_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5919_, v_bigint_5921_);
if (v_isShared_5925_ == 0)
{
lean_ctor_set(v___x_5924_, 1, v___x_5927_);
lean_ctor_set(v___x_5924_, 0, v___x_5926_);
v___x_5929_ = v___x_5924_;
goto v_reusejp_5928_;
}
else
{
lean_object* v_reuseFailAlloc_5938_; 
v_reuseFailAlloc_5938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5938_, 0, v___x_5926_);
lean_ctor_set(v_reuseFailAlloc_5938_, 1, v___x_5927_);
v___x_5929_ = v_reuseFailAlloc_5938_;
goto v_reusejp_5928_;
}
v_reusejp_5928_:
{
lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; 
v___x_5930_ = lean_mk_string_unchecked("throwIfNoEntry", 14, 14);
v___x_5931_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5919_, v_throwIfNoEntry_5922_);
v___x_5932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5932_, 0, v___x_5930_);
lean_ctor_set(v___x_5932_, 1, v___x_5931_);
v___x_5933_ = lean_unsigned_to_nat(2u);
v___x_5934_ = lean_mk_empty_array_with_capacity(v___x_5933_);
v___x_5935_ = lean_array_push(v___x_5934_, v___x_5929_);
v___x_5936_ = lean_array_push(v___x_5935_, v___x_5932_);
v___x_5937_ = l_Lasm_JS_Web_Internal_fields(v___x_5936_);
lean_dec_ref(v___x_5936_);
return v___x_5937_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsStatOptions(void){
_start:
{
lean_object* v___f_5940_; lean_object* v___f_5941_; 
v___f_5940_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5941_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsStatOptions___lam__0), 2, 1);
lean_closure_set(v___f_5941_, 0, v___f_5940_);
return v___f_5941_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsStatfsOptions(void){
_start:
{
lean_object* v___f_5942_; lean_object* v___f_5943_; 
v___f_5942_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5943_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesLstatOptions___lam__0), 2, 1);
lean_closure_set(v___f_5943_, 0, v___f_5942_);
return v___f_5943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWatchOptions___lam__0(lean_object* v___f_5944_, lean_object* v___f_5945_, lean_object* v___f_5946_, lean_object* v___x_5947_, lean_object* v_d_5948_){
_start:
{
lean_object* v_persistent_5949_; lean_object* v_recursive_5950_; lean_object* v_encoding_5951_; lean_object* v_signal_5952_; lean_object* v_throwIfNoEntry_5953_; lean_object* v_ignore_5954_; lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; 
v_persistent_5949_ = lean_ctor_get(v_d_5948_, 0);
lean_inc(v_persistent_5949_);
v_recursive_5950_ = lean_ctor_get(v_d_5948_, 1);
lean_inc(v_recursive_5950_);
v_encoding_5951_ = lean_ctor_get(v_d_5948_, 2);
lean_inc(v_encoding_5951_);
v_signal_5952_ = lean_ctor_get(v_d_5948_, 3);
lean_inc(v_signal_5952_);
v_throwIfNoEntry_5953_ = lean_ctor_get(v_d_5948_, 4);
lean_inc(v_throwIfNoEntry_5953_);
v_ignore_5954_ = lean_ctor_get(v_d_5948_, 5);
lean_inc(v_ignore_5954_);
lean_dec_ref(v_d_5948_);
v___x_5955_ = lean_mk_string_unchecked("persistent", 10, 10);
lean_inc_ref_n(v___f_5944_, 2);
v___x_5956_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5944_, v_persistent_5949_);
v___x_5957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5957_, 0, v___x_5955_);
lean_ctor_set(v___x_5957_, 1, v___x_5956_);
v___x_5958_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_5959_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5944_, v_recursive_5950_);
v___x_5960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5960_, 0, v___x_5958_);
lean_ctor_set(v___x_5960_, 1, v___x_5959_);
v___x_5961_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_5962_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5945_, v_encoding_5951_);
v___x_5963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5963_, 0, v___x_5961_);
lean_ctor_set(v___x_5963_, 1, v___x_5962_);
v___x_5964_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_5965_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5946_, v_signal_5952_);
v___x_5966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5966_, 0, v___x_5964_);
lean_ctor_set(v___x_5966_, 1, v___x_5965_);
v___x_5967_ = lean_mk_string_unchecked("throwIfNoEntry", 14, 14);
v___x_5968_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_5944_, v_throwIfNoEntry_5953_);
v___x_5969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5969_, 0, v___x_5967_);
lean_ctor_set(v___x_5969_, 1, v___x_5968_);
v___x_5970_ = lean_mk_string_unchecked("ignore", 6, 6);
v___x_5971_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_5947_, v_ignore_5954_);
v___x_5972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5972_, 0, v___x_5970_);
lean_ctor_set(v___x_5972_, 1, v___x_5971_);
v___x_5973_ = lean_unsigned_to_nat(6u);
v___x_5974_ = lean_mk_empty_array_with_capacity(v___x_5973_);
v___x_5975_ = lean_array_push(v___x_5974_, v___x_5957_);
v___x_5976_ = lean_array_push(v___x_5975_, v___x_5960_);
v___x_5977_ = lean_array_push(v___x_5976_, v___x_5963_);
v___x_5978_ = lean_array_push(v___x_5977_, v___x_5966_);
v___x_5979_ = lean_array_push(v___x_5978_, v___x_5969_);
v___x_5980_ = lean_array_push(v___x_5979_, v___x_5972_);
v___x_5981_ = l_Lasm_JS_Web_Internal_fields(v___x_5980_);
lean_dec_ref(v___x_5980_);
return v___x_5981_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsWatchOptions(void){
_start:
{
lean_object* v___f_5982_; lean_object* v___f_5983_; lean_object* v___f_5984_; lean_object* v___x_5985_; lean_object* v___f_5986_; 
v___f_5982_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_5983_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_5984_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_5985_ = l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny;
v___f_5986_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsWatchOptions___lam__0), 5, 4);
lean_closure_set(v___f_5986_, 0, v___f_5982_);
lean_closure_set(v___f_5986_, 1, v___f_5983_);
lean_closure_set(v___f_5986_, 2, v___f_5984_);
lean_closure_set(v___f_5986_, 3, v___x_5985_);
return v___f_5986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorIdx(lean_object* v_x_5987_){
_start:
{
if (lean_obj_tag(v_x_5987_) == 0)
{
lean_object* v___x_5988_; 
v___x_5988_ = lean_unsigned_to_nat(0u);
return v___x_5988_;
}
else
{
lean_object* v___x_5989_; 
v___x_5989_ = lean_unsigned_to_nat(1u);
return v___x_5989_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorIdx___boxed(lean_object* v_x_5990_){
_start:
{
lean_object* v_res_5991_; 
v_res_5991_ = l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorIdx(v_x_5990_);
lean_dec_ref(v_x_5990_);
return v_res_5991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim___redArg(lean_object* v_t_5992_, lean_object* v_k_5993_){
_start:
{
lean_object* v_value_5994_; lean_object* v___x_5995_; 
v_value_5994_ = lean_ctor_get(v_t_5992_, 0);
lean_inc_ref(v_value_5994_);
lean_dec_ref(v_t_5992_);
v___x_5995_ = lean_apply_1(v_k_5993_, v_value_5994_);
return v___x_5995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim(lean_object* v_motive_5996_, lean_object* v_ctorIdx_5997_, lean_object* v_t_5998_, lean_object* v_h_5999_, lean_object* v_k_6000_){
_start:
{
lean_object* v___x_6001_; 
v___x_6001_ = l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim___redArg(v_t_5998_, v_k_6000_);
return v___x_6001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim___boxed(lean_object* v_motive_6002_, lean_object* v_ctorIdx_6003_, lean_object* v_t_6004_, lean_object* v_h_6005_, lean_object* v_k_6006_){
_start:
{
lean_object* v_res_6007_; 
v_res_6007_ = l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim(v_motive_6002_, v_ctorIdx_6003_, v_t_6004_, v_h_6005_, v_k_6006_);
lean_dec(v_ctorIdx_6003_);
return v_res_6007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_domString_elim___redArg(lean_object* v_t_6008_, lean_object* v_domString_6009_){
_start:
{
lean_object* v___x_6010_; 
v___x_6010_ = l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim___redArg(v_t_6008_, v_domString_6009_);
return v___x_6010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_domString_elim(lean_object* v_motive_6011_, lean_object* v_t_6012_, lean_object* v_h_6013_, lean_object* v_domString_6014_){
_start:
{
lean_object* v___x_6015_; 
v___x_6015_ = l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim___redArg(v_t_6012_, v_domString_6014_);
return v___x_6015_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_watchOptions_elim___redArg(lean_object* v_t_6016_, lean_object* v_watchOptions_6017_){
_start:
{
lean_object* v___x_6018_; 
v___x_6018_ = l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim___redArg(v_t_6016_, v_watchOptions_6017_);
return v___x_6018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_watchOptions_elim(lean_object* v_motive_6019_, lean_object* v_t_6020_, lean_object* v_h_6021_, lean_object* v_watchOptions_6022_){
_start:
{
lean_object* v___x_6023_; 
v___x_6023_ = l_Lasm_JS_Node_fs_DOMStringOrWatchOptions_ctorElim___redArg(v_t_6020_, v_watchOptions_6022_);
return v___x_6023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrWatchOptions___lam__0(lean_object* v_x_6024_){
_start:
{
if (lean_obj_tag(v_x_6024_) == 0)
{
lean_object* v_value_6025_; lean_object* v___x_6027_; uint8_t v_isShared_6028_; uint8_t v_isSharedCheck_6032_; 
v_value_6025_ = lean_ctor_get(v_x_6024_, 0);
v_isSharedCheck_6032_ = !lean_is_exclusive(v_x_6024_);
if (v_isSharedCheck_6032_ == 0)
{
v___x_6027_ = v_x_6024_;
v_isShared_6028_ = v_isSharedCheck_6032_;
goto v_resetjp_6026_;
}
else
{
lean_inc(v_value_6025_);
lean_dec(v_x_6024_);
v___x_6027_ = lean_box(0);
v_isShared_6028_ = v_isSharedCheck_6032_;
goto v_resetjp_6026_;
}
v_resetjp_6026_:
{
lean_object* v___x_6030_; 
if (v_isShared_6028_ == 0)
{
lean_ctor_set_tag(v___x_6027_, 4);
v___x_6030_ = v___x_6027_;
goto v_reusejp_6029_;
}
else
{
lean_object* v_reuseFailAlloc_6031_; 
v_reuseFailAlloc_6031_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6031_, 0, v_value_6025_);
v___x_6030_ = v_reuseFailAlloc_6031_;
goto v_reusejp_6029_;
}
v_reusejp_6029_:
{
return v___x_6030_;
}
}
}
else
{
lean_object* v_value_6033_; lean_object* v_persistent_6034_; lean_object* v_recursive_6035_; lean_object* v_encoding_6036_; lean_object* v_signal_6037_; lean_object* v_throwIfNoEntry_6038_; lean_object* v_ignore_6039_; lean_object* v___f_6040_; lean_object* v___f_6041_; lean_object* v___f_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; lean_object* v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6050_; lean_object* v___x_6051_; lean_object* v___x_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6069_; lean_object* v___x_6070_; 
v_value_6033_ = lean_ctor_get(v_x_6024_, 0);
lean_inc_ref(v_value_6033_);
lean_dec_ref_known(v_x_6024_, 1);
v_persistent_6034_ = lean_ctor_get(v_value_6033_, 0);
lean_inc(v_persistent_6034_);
v_recursive_6035_ = lean_ctor_get(v_value_6033_, 1);
lean_inc(v_recursive_6035_);
v_encoding_6036_ = lean_ctor_get(v_value_6033_, 2);
lean_inc(v_encoding_6036_);
v_signal_6037_ = lean_ctor_get(v_value_6033_, 3);
lean_inc(v_signal_6037_);
v_throwIfNoEntry_6038_ = lean_ctor_get(v_value_6033_, 4);
lean_inc(v_throwIfNoEntry_6038_);
v_ignore_6039_ = lean_ctor_get(v_value_6033_, 5);
lean_inc(v_ignore_6039_);
lean_dec_ref(v_value_6033_);
v___f_6040_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6041_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6042_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_6043_ = l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny;
v___x_6044_ = lean_mk_string_unchecked("persistent", 10, 10);
lean_inc_ref_n(v___f_6040_, 2);
v___x_6045_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6040_, v_persistent_6034_);
v___x_6046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6046_, 0, v___x_6044_);
lean_ctor_set(v___x_6046_, 1, v___x_6045_);
v___x_6047_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_6048_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6040_, v_recursive_6035_);
v___x_6049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6049_, 0, v___x_6047_);
lean_ctor_set(v___x_6049_, 1, v___x_6048_);
v___x_6050_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_6051_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6041_, v_encoding_6036_);
v___x_6052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6052_, 0, v___x_6050_);
lean_ctor_set(v___x_6052_, 1, v___x_6051_);
v___x_6053_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_6054_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6042_, v_signal_6037_);
v___x_6055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6055_, 0, v___x_6053_);
lean_ctor_set(v___x_6055_, 1, v___x_6054_);
v___x_6056_ = lean_mk_string_unchecked("throwIfNoEntry", 14, 14);
v___x_6057_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6040_, v_throwIfNoEntry_6038_);
v___x_6058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6058_, 0, v___x_6056_);
lean_ctor_set(v___x_6058_, 1, v___x_6057_);
v___x_6059_ = lean_mk_string_unchecked("ignore", 6, 6);
v___x_6060_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_6043_, v_ignore_6039_);
v___x_6061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6061_, 0, v___x_6059_);
lean_ctor_set(v___x_6061_, 1, v___x_6060_);
v___x_6062_ = lean_unsigned_to_nat(6u);
v___x_6063_ = lean_mk_empty_array_with_capacity(v___x_6062_);
v___x_6064_ = lean_array_push(v___x_6063_, v___x_6046_);
v___x_6065_ = lean_array_push(v___x_6064_, v___x_6049_);
v___x_6066_ = lean_array_push(v___x_6065_, v___x_6052_);
v___x_6067_ = lean_array_push(v___x_6066_, v___x_6055_);
v___x_6068_ = lean_array_push(v___x_6067_, v___x_6058_);
v___x_6069_ = lean_array_push(v___x_6068_, v___x_6061_);
v___x_6070_ = l_Lasm_JS_Web_Internal_fields(v___x_6069_);
lean_dec_ref(v___x_6069_);
return v___x_6070_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrWatchOptions___lam__0(lean_object* v_value_6072_){
_start:
{
lean_object* v___x_6073_; 
v___x_6073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6073_, 0, v_value_6072_);
return v___x_6073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsWatchOptionsFsDOMStringOrWatchOptions___lam__0(lean_object* v_value_6075_){
_start:
{
lean_object* v___x_6076_; 
v___x_6076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6076_, 0, v_value_6075_);
return v___x_6076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWatchFileOptions___lam__0(lean_object* v___f_6078_, lean_object* v___f_6079_, lean_object* v_d_6080_){
_start:
{
lean_object* v_bigint_6081_; lean_object* v_persistent_6082_; lean_object* v_interval_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; 
v_bigint_6081_ = lean_ctor_get(v_d_6080_, 0);
lean_inc(v_bigint_6081_);
v_persistent_6082_ = lean_ctor_get(v_d_6080_, 1);
lean_inc(v_persistent_6082_);
v_interval_6083_ = lean_ctor_get(v_d_6080_, 2);
lean_inc(v_interval_6083_);
lean_dec_ref(v_d_6080_);
v___x_6084_ = lean_mk_string_unchecked("bigint", 6, 6);
lean_inc_ref(v___f_6078_);
v___x_6085_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6078_, v_bigint_6081_);
v___x_6086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6086_, 0, v___x_6084_);
lean_ctor_set(v___x_6086_, 1, v___x_6085_);
v___x_6087_ = lean_mk_string_unchecked("persistent", 10, 10);
v___x_6088_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6078_, v_persistent_6082_);
v___x_6089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6089_, 0, v___x_6087_);
lean_ctor_set(v___x_6089_, 1, v___x_6088_);
v___x_6090_ = lean_mk_string_unchecked("interval", 8, 8);
v___x_6091_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6079_, v_interval_6083_);
v___x_6092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6092_, 0, v___x_6090_);
lean_ctor_set(v___x_6092_, 1, v___x_6091_);
v___x_6093_ = lean_unsigned_to_nat(3u);
v___x_6094_ = lean_mk_empty_array_with_capacity(v___x_6093_);
v___x_6095_ = lean_array_push(v___x_6094_, v___x_6086_);
v___x_6096_ = lean_array_push(v___x_6095_, v___x_6089_);
v___x_6097_ = lean_array_push(v___x_6096_, v___x_6092_);
v___x_6098_ = l_Lasm_JS_Web_Internal_fields(v___x_6097_);
lean_dec_ref(v___x_6097_);
return v___x_6098_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsWatchFileOptions(void){
_start:
{
lean_object* v___f_6099_; lean_object* v___f_6100_; lean_object* v___f_6101_; 
v___f_6099_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6100_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_6101_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsWatchFileOptions___lam__0), 3, 2);
lean_closure_set(v___f_6101_, 0, v___f_6099_);
lean_closure_set(v___f_6101_, 1, v___f_6100_);
return v___f_6101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteOptions___lam__0(lean_object* v___f_6102_, lean_object* v_d_6103_){
_start:
{
lean_object* v_offset_6104_; lean_object* v_length_6105_; lean_object* v_position_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; 
v_offset_6104_ = lean_ctor_get(v_d_6103_, 0);
lean_inc(v_offset_6104_);
v_length_6105_ = lean_ctor_get(v_d_6103_, 1);
lean_inc(v_length_6105_);
v_position_6106_ = lean_ctor_get(v_d_6103_, 2);
lean_inc(v_position_6106_);
lean_dec_ref(v_d_6103_);
v___x_6107_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref_n(v___f_6102_, 2);
v___x_6108_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6102_, v_offset_6104_);
v___x_6109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6109_, 0, v___x_6107_);
lean_ctor_set(v___x_6109_, 1, v___x_6108_);
v___x_6110_ = lean_mk_string_unchecked("length", 6, 6);
v___x_6111_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6102_, v_length_6105_);
v___x_6112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6112_, 0, v___x_6110_);
lean_ctor_set(v___x_6112_, 1, v___x_6111_);
v___x_6113_ = lean_mk_string_unchecked("position", 8, 8);
v___x_6114_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6102_, v_position_6106_);
v___x_6115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6115_, 0, v___x_6113_);
lean_ctor_set(v___x_6115_, 1, v___x_6114_);
v___x_6116_ = lean_unsigned_to_nat(3u);
v___x_6117_ = lean_mk_empty_array_with_capacity(v___x_6116_);
v___x_6118_ = lean_array_push(v___x_6117_, v___x_6109_);
v___x_6119_ = lean_array_push(v___x_6118_, v___x_6112_);
v___x_6120_ = lean_array_push(v___x_6119_, v___x_6115_);
v___x_6121_ = l_Lasm_JS_Web_Internal_fields(v___x_6120_);
lean_dec_ref(v___x_6120_);
return v___x_6121_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsWriteOptions(void){
_start:
{
lean_object* v___f_6122_; lean_object* v___f_6123_; 
v___f_6122_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_6123_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsWriteOptions___lam__0), 2, 1);
lean_closure_set(v___f_6123_, 0, v___f_6122_);
return v___f_6123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileOptions___lam__0(lean_object* v___f_6124_, lean_object* v___f_6125_, lean_object* v___f_6126_, lean_object* v___f_6127_, lean_object* v_d_6128_){
_start:
{
lean_object* v_encoding_6129_; lean_object* v_mode_6130_; lean_object* v_flag_6131_; lean_object* v_flush_6132_; lean_object* v_signal_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; 
v_encoding_6129_ = lean_ctor_get(v_d_6128_, 0);
lean_inc(v_encoding_6129_);
v_mode_6130_ = lean_ctor_get(v_d_6128_, 1);
lean_inc(v_mode_6130_);
v_flag_6131_ = lean_ctor_get(v_d_6128_, 2);
lean_inc(v_flag_6131_);
v_flush_6132_ = lean_ctor_get(v_d_6128_, 3);
lean_inc(v_flush_6132_);
v_signal_6133_ = lean_ctor_get(v_d_6128_, 4);
lean_inc(v_signal_6133_);
lean_dec_ref(v_d_6128_);
v___x_6134_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_6124_);
v___x_6135_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6124_, v_encoding_6129_);
v___x_6136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6136_, 0, v___x_6134_);
lean_ctor_set(v___x_6136_, 1, v___x_6135_);
v___x_6137_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_6138_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6125_, v_mode_6130_);
v___x_6139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6139_, 0, v___x_6137_);
lean_ctor_set(v___x_6139_, 1, v___x_6138_);
v___x_6140_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_6141_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6124_, v_flag_6131_);
v___x_6142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6142_, 0, v___x_6140_);
lean_ctor_set(v___x_6142_, 1, v___x_6141_);
v___x_6143_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_6144_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6126_, v_flush_6132_);
v___x_6145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6145_, 0, v___x_6143_);
lean_ctor_set(v___x_6145_, 1, v___x_6144_);
v___x_6146_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_6147_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6127_, v_signal_6133_);
v___x_6148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6148_, 0, v___x_6146_);
lean_ctor_set(v___x_6148_, 1, v___x_6147_);
v___x_6149_ = lean_unsigned_to_nat(5u);
v___x_6150_ = lean_mk_empty_array_with_capacity(v___x_6149_);
v___x_6151_ = lean_array_push(v___x_6150_, v___x_6136_);
v___x_6152_ = lean_array_push(v___x_6151_, v___x_6139_);
v___x_6153_ = lean_array_push(v___x_6152_, v___x_6142_);
v___x_6154_ = lean_array_push(v___x_6153_, v___x_6145_);
v___x_6155_ = lean_array_push(v___x_6154_, v___x_6148_);
v___x_6156_ = l_Lasm_JS_Web_Internal_fields(v___x_6155_);
lean_dec_ref(v___x_6155_);
return v___x_6156_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsWriteFileOptions(void){
_start:
{
lean_object* v___f_6157_; lean_object* v___f_6158_; lean_object* v___f_6159_; lean_object* v___f_6160_; lean_object* v___f_6161_; 
v___f_6157_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6158_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_6159_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6160_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_6161_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsWriteFileOptions___lam__0), 5, 4);
lean_closure_set(v___f_6161_, 0, v___f_6157_);
lean_closure_set(v___f_6161_, 1, v___f_6158_);
lean_closure_set(v___f_6161_, 2, v___f_6159_);
lean_closure_set(v___f_6161_, 3, v___f_6160_);
return v___f_6161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorIdx(lean_object* v_x_6162_){
_start:
{
if (lean_obj_tag(v_x_6162_) == 0)
{
lean_object* v___x_6163_; 
v___x_6163_ = lean_unsigned_to_nat(0u);
return v___x_6163_;
}
else
{
lean_object* v___x_6164_; 
v___x_6164_ = lean_unsigned_to_nat(1u);
return v___x_6164_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_6165_){
_start:
{
lean_object* v_res_6166_; 
v_res_6166_ = l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorIdx(v_x_6165_);
lean_dec_ref(v_x_6165_);
return v_res_6166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_6167_, lean_object* v_k_6168_){
_start:
{
lean_object* v_value_6169_; lean_object* v___x_6170_; 
v_value_6169_ = lean_ctor_get(v_t_6167_, 0);
lean_inc_ref(v_value_6169_);
lean_dec_ref(v_t_6167_);
v___x_6170_ = lean_apply_1(v_k_6168_, v_value_6169_);
return v___x_6170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim(lean_object* v_motive_6171_, lean_object* v_ctorIdx_6172_, lean_object* v_t_6173_, lean_object* v_h_6174_, lean_object* v_k_6175_){
_start:
{
lean_object* v___x_6176_; 
v___x_6176_ = l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_6173_, v_k_6175_);
return v___x_6176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_6177_, lean_object* v_ctorIdx_6178_, lean_object* v_t_6179_, lean_object* v_h_6180_, lean_object* v_k_6181_){
_start:
{
lean_object* v_res_6182_; 
v_res_6182_ = l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim(v_motive_6177_, v_ctorIdx_6178_, v_t_6179_, v_h_6180_, v_k_6181_);
lean_dec(v_ctorIdx_6178_);
return v_res_6182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object* v_t_6183_, lean_object* v_writeFileOptions_6184_){
_start:
{
lean_object* v___x_6185_; 
v___x_6185_ = l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_6183_, v_writeFileOptions_6184_);
return v___x_6185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object* v_motive_6186_, lean_object* v_t_6187_, lean_object* v_h_6188_, lean_object* v_writeFileOptions_6189_){
_start:
{
lean_object* v___x_6190_; 
v___x_6190_ = l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_6187_, v_writeFileOptions_6189_);
return v___x_6190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_6191_, lean_object* v_domString_6192_){
_start:
{
lean_object* v___x_6193_; 
v___x_6193_ = l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_6191_, v_domString_6192_);
return v___x_6193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_domString_elim(lean_object* v_motive_6194_, lean_object* v_t_6195_, lean_object* v_h_6196_, lean_object* v_domString_6197_){
_start:
{
lean_object* v___x_6198_; 
v___x_6198_ = l_Lasm_JS_Node_fs_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_6195_, v_domString_6197_);
return v___x_6198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileOptionsOrDOMString___lam__0(lean_object* v_x_6199_){
_start:
{
if (lean_obj_tag(v_x_6199_) == 0)
{
lean_object* v_value_6200_; lean_object* v_encoding_6201_; lean_object* v_mode_6202_; lean_object* v_flag_6203_; lean_object* v_flush_6204_; lean_object* v_signal_6205_; lean_object* v___f_6206_; lean_object* v___f_6207_; lean_object* v___f_6208_; lean_object* v___f_6209_; lean_object* v___x_6210_; lean_object* v___x_6211_; lean_object* v___x_6212_; lean_object* v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; lean_object* v___x_6224_; lean_object* v___x_6225_; lean_object* v___x_6226_; lean_object* v___x_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; lean_object* v___x_6230_; lean_object* v___x_6231_; lean_object* v___x_6232_; 
v_value_6200_ = lean_ctor_get(v_x_6199_, 0);
lean_inc_ref(v_value_6200_);
lean_dec_ref_known(v_x_6199_, 1);
v_encoding_6201_ = lean_ctor_get(v_value_6200_, 0);
lean_inc(v_encoding_6201_);
v_mode_6202_ = lean_ctor_get(v_value_6200_, 1);
lean_inc(v_mode_6202_);
v_flag_6203_ = lean_ctor_get(v_value_6200_, 2);
lean_inc(v_flag_6203_);
v_flush_6204_ = lean_ctor_get(v_value_6200_, 3);
lean_inc(v_flush_6204_);
v_signal_6205_ = lean_ctor_get(v_value_6200_, 4);
lean_inc(v_signal_6205_);
lean_dec_ref(v_value_6200_);
v___f_6206_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6207_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_6208_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6209_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_6210_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_6206_);
v___x_6211_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6206_, v_encoding_6201_);
v___x_6212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6212_, 0, v___x_6210_);
lean_ctor_set(v___x_6212_, 1, v___x_6211_);
v___x_6213_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_6214_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6207_, v_mode_6202_);
v___x_6215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6215_, 0, v___x_6213_);
lean_ctor_set(v___x_6215_, 1, v___x_6214_);
v___x_6216_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_6217_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6206_, v_flag_6203_);
v___x_6218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6218_, 0, v___x_6216_);
lean_ctor_set(v___x_6218_, 1, v___x_6217_);
v___x_6219_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_6220_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6208_, v_flush_6204_);
v___x_6221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6221_, 0, v___x_6219_);
lean_ctor_set(v___x_6221_, 1, v___x_6220_);
v___x_6222_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_6223_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6209_, v_signal_6205_);
v___x_6224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6224_, 0, v___x_6222_);
lean_ctor_set(v___x_6224_, 1, v___x_6223_);
v___x_6225_ = lean_unsigned_to_nat(5u);
v___x_6226_ = lean_mk_empty_array_with_capacity(v___x_6225_);
v___x_6227_ = lean_array_push(v___x_6226_, v___x_6212_);
v___x_6228_ = lean_array_push(v___x_6227_, v___x_6215_);
v___x_6229_ = lean_array_push(v___x_6228_, v___x_6218_);
v___x_6230_ = lean_array_push(v___x_6229_, v___x_6221_);
v___x_6231_ = lean_array_push(v___x_6230_, v___x_6224_);
v___x_6232_ = l_Lasm_JS_Web_Internal_fields(v___x_6231_);
lean_dec_ref(v___x_6231_);
return v___x_6232_;
}
else
{
lean_object* v_value_6233_; lean_object* v___x_6235_; uint8_t v_isShared_6236_; uint8_t v_isSharedCheck_6240_; 
v_value_6233_ = lean_ctor_get(v_x_6199_, 0);
v_isSharedCheck_6240_ = !lean_is_exclusive(v_x_6199_);
if (v_isSharedCheck_6240_ == 0)
{
v___x_6235_ = v_x_6199_;
v_isShared_6236_ = v_isSharedCheck_6240_;
goto v_resetjp_6234_;
}
else
{
lean_inc(v_value_6233_);
lean_dec(v_x_6199_);
v___x_6235_ = lean_box(0);
v_isShared_6236_ = v_isSharedCheck_6240_;
goto v_resetjp_6234_;
}
v_resetjp_6234_:
{
lean_object* v___x_6238_; 
if (v_isShared_6236_ == 0)
{
lean_ctor_set_tag(v___x_6235_, 4);
v___x_6238_ = v___x_6235_;
goto v_reusejp_6237_;
}
else
{
lean_object* v_reuseFailAlloc_6239_; 
v_reuseFailAlloc_6239_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6239_, 0, v_value_6233_);
v___x_6238_ = v_reuseFailAlloc_6239_;
goto v_reusejp_6237_;
}
v_reusejp_6237_:
{
return v___x_6238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsWriteFileOptionsFsWriteFileOptionsOrDOMString___lam__0(lean_object* v_value_6242_){
_start:
{
lean_object* v___x_6243_; 
v___x_6243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6243_, 0, v_value_6242_);
return v___x_6243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsWriteFileOptionsOrDOMString___lam__0(lean_object* v_value_6245_){
_start:
{
lean_object* v___x_6246_; 
v___x_6246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6246_, 0, v_value_6245_);
return v___x_6246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileSyncOptions___lam__0(lean_object* v___f_6248_, lean_object* v___f_6249_, lean_object* v___f_6250_, lean_object* v_d_6251_){
_start:
{
lean_object* v_encoding_6252_; lean_object* v_mode_6253_; lean_object* v_flag_6254_; lean_object* v_flush_6255_; lean_object* v___x_6256_; lean_object* v___x_6257_; lean_object* v___x_6258_; lean_object* v___x_6259_; lean_object* v___x_6260_; lean_object* v___x_6261_; lean_object* v___x_6262_; lean_object* v___x_6263_; lean_object* v___x_6264_; lean_object* v___x_6265_; lean_object* v___x_6266_; lean_object* v___x_6267_; lean_object* v___x_6268_; lean_object* v___x_6269_; lean_object* v___x_6270_; lean_object* v___x_6271_; lean_object* v___x_6272_; lean_object* v___x_6273_; lean_object* v___x_6274_; 
v_encoding_6252_ = lean_ctor_get(v_d_6251_, 0);
lean_inc(v_encoding_6252_);
v_mode_6253_ = lean_ctor_get(v_d_6251_, 1);
lean_inc(v_mode_6253_);
v_flag_6254_ = lean_ctor_get(v_d_6251_, 2);
lean_inc(v_flag_6254_);
v_flush_6255_ = lean_ctor_get(v_d_6251_, 3);
lean_inc(v_flush_6255_);
lean_dec_ref(v_d_6251_);
v___x_6256_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_6248_);
v___x_6257_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6248_, v_encoding_6252_);
v___x_6258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6258_, 0, v___x_6256_);
lean_ctor_set(v___x_6258_, 1, v___x_6257_);
v___x_6259_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_6260_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6249_, v_mode_6253_);
v___x_6261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6261_, 0, v___x_6259_);
lean_ctor_set(v___x_6261_, 1, v___x_6260_);
v___x_6262_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_6263_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6248_, v_flag_6254_);
v___x_6264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6264_, 0, v___x_6262_);
lean_ctor_set(v___x_6264_, 1, v___x_6263_);
v___x_6265_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_6266_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6250_, v_flush_6255_);
v___x_6267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6267_, 0, v___x_6265_);
lean_ctor_set(v___x_6267_, 1, v___x_6266_);
v___x_6268_ = lean_unsigned_to_nat(4u);
v___x_6269_ = lean_mk_empty_array_with_capacity(v___x_6268_);
v___x_6270_ = lean_array_push(v___x_6269_, v___x_6258_);
v___x_6271_ = lean_array_push(v___x_6270_, v___x_6261_);
v___x_6272_ = lean_array_push(v___x_6271_, v___x_6264_);
v___x_6273_ = lean_array_push(v___x_6272_, v___x_6267_);
v___x_6274_ = l_Lasm_JS_Web_Internal_fields(v___x_6273_);
lean_dec_ref(v___x_6273_);
return v___x_6274_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsAppendFileSyncOptions(void){
_start:
{
lean_object* v___f_6275_; lean_object* v___f_6276_; lean_object* v___f_6277_; lean_object* v___f_6278_; 
v___f_6275_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6276_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_6277_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6278_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsAppendFileSyncOptions___lam__0), 4, 3);
lean_closure_set(v___f_6278_, 0, v___f_6275_);
lean_closure_set(v___f_6278_, 1, v___f_6276_);
lean_closure_set(v___f_6278_, 2, v___f_6277_);
return v___f_6278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorIdx(lean_object* v_x_6279_){
_start:
{
if (lean_obj_tag(v_x_6279_) == 0)
{
lean_object* v___x_6280_; 
v___x_6280_ = lean_unsigned_to_nat(0u);
return v___x_6280_;
}
else
{
lean_object* v___x_6281_; 
v___x_6281_ = lean_unsigned_to_nat(1u);
return v___x_6281_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_6282_){
_start:
{
lean_object* v_res_6283_; 
v_res_6283_ = l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorIdx(v_x_6282_);
lean_dec_ref(v_x_6282_);
return v_res_6283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_6284_, lean_object* v_k_6285_){
_start:
{
lean_object* v_value_6286_; lean_object* v___x_6287_; 
v_value_6286_ = lean_ctor_get(v_t_6284_, 0);
lean_inc_ref(v_value_6286_);
lean_dec_ref(v_t_6284_);
v___x_6287_ = lean_apply_1(v_k_6285_, v_value_6286_);
return v___x_6287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim(lean_object* v_motive_6288_, lean_object* v_ctorIdx_6289_, lean_object* v_t_6290_, lean_object* v_h_6291_, lean_object* v_k_6292_){
_start:
{
lean_object* v___x_6293_; 
v___x_6293_ = l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6290_, v_k_6292_);
return v___x_6293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_6294_, lean_object* v_ctorIdx_6295_, lean_object* v_t_6296_, lean_object* v_h_6297_, lean_object* v_k_6298_){
_start:
{
lean_object* v_res_6299_; 
v_res_6299_ = l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim(v_motive_6294_, v_ctorIdx_6295_, v_t_6296_, v_h_6297_, v_k_6298_);
lean_dec(v_ctorIdx_6295_);
return v_res_6299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_appendFileSyncOptions_elim___redArg(lean_object* v_t_6300_, lean_object* v_appendFileSyncOptions_6301_){
_start:
{
lean_object* v___x_6302_; 
v___x_6302_ = l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6300_, v_appendFileSyncOptions_6301_);
return v___x_6302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_appendFileSyncOptions_elim(lean_object* v_motive_6303_, lean_object* v_t_6304_, lean_object* v_h_6305_, lean_object* v_appendFileSyncOptions_6306_){
_start:
{
lean_object* v___x_6307_; 
v___x_6307_ = l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6304_, v_appendFileSyncOptions_6306_);
return v___x_6307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_6308_, lean_object* v_domString_6309_){
_start:
{
lean_object* v___x_6310_; 
v___x_6310_ = l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6308_, v_domString_6309_);
return v___x_6310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_domString_elim(lean_object* v_motive_6311_, lean_object* v_t_6312_, lean_object* v_h_6313_, lean_object* v_domString_6314_){
_start:
{
lean_object* v___x_6315_; 
v___x_6315_ = l_Lasm_JS_Node_fs_AppendFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6312_, v_domString_6314_);
return v___x_6315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsAppendFileSyncOptionsOrDOMString___lam__0(lean_object* v_x_6316_){
_start:
{
if (lean_obj_tag(v_x_6316_) == 0)
{
lean_object* v_value_6317_; lean_object* v_encoding_6318_; lean_object* v_mode_6319_; lean_object* v_flag_6320_; lean_object* v_flush_6321_; lean_object* v___f_6322_; lean_object* v___f_6323_; lean_object* v___f_6324_; lean_object* v___x_6325_; lean_object* v___x_6326_; lean_object* v___x_6327_; lean_object* v___x_6328_; lean_object* v___x_6329_; lean_object* v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; lean_object* v___x_6343_; 
v_value_6317_ = lean_ctor_get(v_x_6316_, 0);
lean_inc_ref(v_value_6317_);
lean_dec_ref_known(v_x_6316_, 1);
v_encoding_6318_ = lean_ctor_get(v_value_6317_, 0);
lean_inc(v_encoding_6318_);
v_mode_6319_ = lean_ctor_get(v_value_6317_, 1);
lean_inc(v_mode_6319_);
v_flag_6320_ = lean_ctor_get(v_value_6317_, 2);
lean_inc(v_flag_6320_);
v_flush_6321_ = lean_ctor_get(v_value_6317_, 3);
lean_inc(v_flush_6321_);
lean_dec_ref(v_value_6317_);
v___f_6322_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6323_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_6324_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_6325_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_6322_);
v___x_6326_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6322_, v_encoding_6318_);
v___x_6327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6327_, 0, v___x_6325_);
lean_ctor_set(v___x_6327_, 1, v___x_6326_);
v___x_6328_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_6329_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6323_, v_mode_6319_);
v___x_6330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6330_, 0, v___x_6328_);
lean_ctor_set(v___x_6330_, 1, v___x_6329_);
v___x_6331_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_6332_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6322_, v_flag_6320_);
v___x_6333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6333_, 0, v___x_6331_);
lean_ctor_set(v___x_6333_, 1, v___x_6332_);
v___x_6334_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_6335_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6324_, v_flush_6321_);
v___x_6336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6336_, 0, v___x_6334_);
lean_ctor_set(v___x_6336_, 1, v___x_6335_);
v___x_6337_ = lean_unsigned_to_nat(4u);
v___x_6338_ = lean_mk_empty_array_with_capacity(v___x_6337_);
v___x_6339_ = lean_array_push(v___x_6338_, v___x_6327_);
v___x_6340_ = lean_array_push(v___x_6339_, v___x_6330_);
v___x_6341_ = lean_array_push(v___x_6340_, v___x_6333_);
v___x_6342_ = lean_array_push(v___x_6341_, v___x_6336_);
v___x_6343_ = l_Lasm_JS_Web_Internal_fields(v___x_6342_);
lean_dec_ref(v___x_6342_);
return v___x_6343_;
}
else
{
lean_object* v_value_6344_; lean_object* v___x_6346_; uint8_t v_isShared_6347_; uint8_t v_isSharedCheck_6351_; 
v_value_6344_ = lean_ctor_get(v_x_6316_, 0);
v_isSharedCheck_6351_ = !lean_is_exclusive(v_x_6316_);
if (v_isSharedCheck_6351_ == 0)
{
v___x_6346_ = v_x_6316_;
v_isShared_6347_ = v_isSharedCheck_6351_;
goto v_resetjp_6345_;
}
else
{
lean_inc(v_value_6344_);
lean_dec(v_x_6316_);
v___x_6346_ = lean_box(0);
v_isShared_6347_ = v_isSharedCheck_6351_;
goto v_resetjp_6345_;
}
v_resetjp_6345_:
{
lean_object* v___x_6349_; 
if (v_isShared_6347_ == 0)
{
lean_ctor_set_tag(v___x_6346_, 4);
v___x_6349_ = v___x_6346_;
goto v_reusejp_6348_;
}
else
{
lean_object* v_reuseFailAlloc_6350_; 
v_reuseFailAlloc_6350_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6350_, 0, v_value_6344_);
v___x_6349_ = v_reuseFailAlloc_6350_;
goto v_reusejp_6348_;
}
v_reusejp_6348_:
{
return v___x_6349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsAppendFileSyncOptionsFsAppendFileSyncOptionsOrDOMString___lam__0(lean_object* v_value_6353_){
_start:
{
lean_object* v___x_6354_; 
v___x_6354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6354_, 0, v_value_6353_);
return v___x_6354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsAppendFileSyncOptionsOrDOMString___lam__0(lean_object* v_value_6356_){
_start:
{
lean_object* v___x_6357_; 
v___x_6357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6357_, 0, v_value_6356_);
return v___x_6357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsCpSyncOptions___lam__0(lean_object* v___f_6359_, lean_object* v___f_6360_, lean_object* v___f_6361_, lean_object* v_d_6362_){
_start:
{
lean_object* v_dereference_6363_; lean_object* v_errorOnExist_6364_; lean_object* v_filter_6365_; lean_object* v_force_6366_; lean_object* v_mode_6367_; lean_object* v_preserveTimestamps_6368_; lean_object* v_recursive_6369_; lean_object* v_verbatimSymlinks_6370_; lean_object* v___x_6371_; lean_object* v___x_6372_; lean_object* v___x_6373_; lean_object* v___x_6374_; lean_object* v___x_6375_; lean_object* v___x_6376_; lean_object* v___x_6377_; lean_object* v___x_6378_; lean_object* v___x_6379_; lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; lean_object* v___x_6383_; lean_object* v___x_6384_; lean_object* v___x_6385_; lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; lean_object* v___x_6390_; lean_object* v___x_6391_; lean_object* v___x_6392_; lean_object* v___x_6393_; lean_object* v___x_6394_; lean_object* v___x_6395_; lean_object* v___x_6396_; lean_object* v___x_6397_; lean_object* v___x_6398_; lean_object* v___x_6399_; lean_object* v___x_6400_; lean_object* v___x_6401_; lean_object* v___x_6402_; lean_object* v___x_6403_; lean_object* v___x_6404_; lean_object* v___x_6405_; 
v_dereference_6363_ = lean_ctor_get(v_d_6362_, 0);
lean_inc(v_dereference_6363_);
v_errorOnExist_6364_ = lean_ctor_get(v_d_6362_, 1);
lean_inc(v_errorOnExist_6364_);
v_filter_6365_ = lean_ctor_get(v_d_6362_, 2);
lean_inc(v_filter_6365_);
v_force_6366_ = lean_ctor_get(v_d_6362_, 3);
lean_inc(v_force_6366_);
v_mode_6367_ = lean_ctor_get(v_d_6362_, 4);
lean_inc(v_mode_6367_);
v_preserveTimestamps_6368_ = lean_ctor_get(v_d_6362_, 5);
lean_inc(v_preserveTimestamps_6368_);
v_recursive_6369_ = lean_ctor_get(v_d_6362_, 6);
lean_inc(v_recursive_6369_);
v_verbatimSymlinks_6370_ = lean_ctor_get(v_d_6362_, 7);
lean_inc(v_verbatimSymlinks_6370_);
lean_dec_ref(v_d_6362_);
v___x_6371_ = lean_mk_string_unchecked("dereference", 11, 11);
lean_inc_ref_n(v___f_6359_, 5);
v___x_6372_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6359_, v_dereference_6363_);
v___x_6373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6373_, 0, v___x_6371_);
lean_ctor_set(v___x_6373_, 1, v___x_6372_);
v___x_6374_ = lean_mk_string_unchecked("errorOnExist", 12, 12);
v___x_6375_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6359_, v_errorOnExist_6364_);
v___x_6376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6376_, 0, v___x_6374_);
lean_ctor_set(v___x_6376_, 1, v___x_6375_);
v___x_6377_ = lean_mk_string_unchecked("filter", 6, 6);
v___x_6378_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6360_, v_filter_6365_);
v___x_6379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6379_, 0, v___x_6377_);
lean_ctor_set(v___x_6379_, 1, v___x_6378_);
v___x_6380_ = lean_mk_string_unchecked("force", 5, 5);
v___x_6381_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6359_, v_force_6366_);
v___x_6382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6382_, 0, v___x_6380_);
lean_ctor_set(v___x_6382_, 1, v___x_6381_);
v___x_6383_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_6384_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6361_, v_mode_6367_);
v___x_6385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6385_, 0, v___x_6383_);
lean_ctor_set(v___x_6385_, 1, v___x_6384_);
v___x_6386_ = lean_mk_string_unchecked("preserveTimestamps", 18, 18);
v___x_6387_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6359_, v_preserveTimestamps_6368_);
v___x_6388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6388_, 0, v___x_6386_);
lean_ctor_set(v___x_6388_, 1, v___x_6387_);
v___x_6389_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_6390_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6359_, v_recursive_6369_);
v___x_6391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6391_, 0, v___x_6389_);
lean_ctor_set(v___x_6391_, 1, v___x_6390_);
v___x_6392_ = lean_mk_string_unchecked("verbatimSymlinks", 16, 16);
v___x_6393_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6359_, v_verbatimSymlinks_6370_);
v___x_6394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6394_, 0, v___x_6392_);
lean_ctor_set(v___x_6394_, 1, v___x_6393_);
v___x_6395_ = lean_unsigned_to_nat(8u);
v___x_6396_ = lean_mk_empty_array_with_capacity(v___x_6395_);
v___x_6397_ = lean_array_push(v___x_6396_, v___x_6373_);
v___x_6398_ = lean_array_push(v___x_6397_, v___x_6376_);
v___x_6399_ = lean_array_push(v___x_6398_, v___x_6379_);
v___x_6400_ = lean_array_push(v___x_6399_, v___x_6382_);
v___x_6401_ = lean_array_push(v___x_6400_, v___x_6385_);
v___x_6402_ = lean_array_push(v___x_6401_, v___x_6388_);
v___x_6403_ = lean_array_push(v___x_6402_, v___x_6391_);
v___x_6404_ = lean_array_push(v___x_6403_, v___x_6394_);
v___x_6405_ = l_Lasm_JS_Web_Internal_fields(v___x_6404_);
lean_dec_ref(v___x_6404_);
return v___x_6405_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsCpSyncOptions(void){
_start:
{
lean_object* v___f_6406_; lean_object* v___f_6407_; lean_object* v___f_6408_; lean_object* v___f_6409_; 
v___f_6406_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6407_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_6408_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_6409_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsCpSyncOptions___lam__0), 4, 3);
lean_closure_set(v___f_6409_, 0, v___f_6406_);
lean_closure_set(v___f_6409_, 1, v___f_6407_);
lean_closure_set(v___f_6409_, 2, v___f_6408_);
return v___f_6409_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsFstatSyncOptions(void){
_start:
{
lean_object* v___f_6410_; lean_object* v___f_6411_; 
v___f_6410_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6411_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesLstatOptions___lam__0), 2, 1);
lean_closure_set(v___f_6411_, 0, v___f_6410_);
return v___f_6411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsGlobSyncOptions___lam__0(lean_object* v___f_6412_, lean_object* v___x_6413_, lean_object* v___f_6414_, lean_object* v_d_6415_){
_start:
{
lean_object* v_cwd_6416_; lean_object* v_exclude_6417_; lean_object* v_followSymlinks_6418_; lean_object* v_withFileTypes_6419_; lean_object* v___x_6420_; lean_object* v___x_6421_; lean_object* v___x_6422_; lean_object* v___x_6423_; lean_object* v___x_6424_; lean_object* v___x_6425_; lean_object* v___x_6426_; lean_object* v___x_6427_; lean_object* v___x_6428_; lean_object* v___x_6429_; lean_object* v___x_6430_; lean_object* v___x_6431_; lean_object* v___x_6432_; lean_object* v___x_6433_; lean_object* v___x_6434_; lean_object* v___x_6435_; lean_object* v___x_6436_; lean_object* v___x_6437_; lean_object* v___x_6438_; 
v_cwd_6416_ = lean_ctor_get(v_d_6415_, 0);
lean_inc(v_cwd_6416_);
v_exclude_6417_ = lean_ctor_get(v_d_6415_, 1);
lean_inc(v_exclude_6417_);
v_followSymlinks_6418_ = lean_ctor_get(v_d_6415_, 2);
lean_inc(v_followSymlinks_6418_);
v_withFileTypes_6419_ = lean_ctor_get(v_d_6415_, 3);
lean_inc(v_withFileTypes_6419_);
lean_dec_ref(v_d_6415_);
v___x_6420_ = lean_mk_string_unchecked("cwd", 3, 3);
v___x_6421_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6412_, v_cwd_6416_);
v___x_6422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6422_, 0, v___x_6420_);
lean_ctor_set(v___x_6422_, 1, v___x_6421_);
v___x_6423_ = lean_mk_string_unchecked("exclude", 7, 7);
v___x_6424_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_6413_, v_exclude_6417_);
v___x_6425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6425_, 0, v___x_6423_);
lean_ctor_set(v___x_6425_, 1, v___x_6424_);
v___x_6426_ = lean_mk_string_unchecked("followSymlinks", 14, 14);
lean_inc_ref(v___f_6414_);
v___x_6427_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6414_, v_followSymlinks_6418_);
v___x_6428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6428_, 0, v___x_6426_);
lean_ctor_set(v___x_6428_, 1, v___x_6427_);
v___x_6429_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
v___x_6430_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6414_, v_withFileTypes_6419_);
v___x_6431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6431_, 0, v___x_6429_);
lean_ctor_set(v___x_6431_, 1, v___x_6430_);
v___x_6432_ = lean_unsigned_to_nat(4u);
v___x_6433_ = lean_mk_empty_array_with_capacity(v___x_6432_);
v___x_6434_ = lean_array_push(v___x_6433_, v___x_6422_);
v___x_6435_ = lean_array_push(v___x_6434_, v___x_6425_);
v___x_6436_ = lean_array_push(v___x_6435_, v___x_6428_);
v___x_6437_ = lean_array_push(v___x_6436_, v___x_6431_);
v___x_6438_ = l_Lasm_JS_Web_Internal_fields(v___x_6437_);
lean_dec_ref(v___x_6437_);
return v___x_6438_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsGlobSyncOptions(void){
_start:
{
lean_object* v___f_6439_; lean_object* v___x_6440_; lean_object* v___f_6441_; lean_object* v___f_6442_; 
v___f_6439_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0), 1, 0);
v___x_6440_ = l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString;
v___f_6441_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6442_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsGlobSyncOptions___lam__0), 4, 3);
lean_closure_set(v___f_6442_, 0, v___f_6439_);
lean_closure_set(v___f_6442_, 1, v___x_6440_);
lean_closure_set(v___f_6442_, 2, v___f_6441_);
return v___f_6442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsLstatSyncOptions___lam__0(lean_object* v___f_6443_, lean_object* v_d_6444_){
_start:
{
lean_object* v_bigint_6445_; lean_object* v_throwIfNoEntry_6446_; lean_object* v___x_6448_; uint8_t v_isShared_6449_; uint8_t v_isSharedCheck_6463_; 
v_bigint_6445_ = lean_ctor_get(v_d_6444_, 0);
v_throwIfNoEntry_6446_ = lean_ctor_get(v_d_6444_, 1);
v_isSharedCheck_6463_ = !lean_is_exclusive(v_d_6444_);
if (v_isSharedCheck_6463_ == 0)
{
v___x_6448_ = v_d_6444_;
v_isShared_6449_ = v_isSharedCheck_6463_;
goto v_resetjp_6447_;
}
else
{
lean_inc(v_throwIfNoEntry_6446_);
lean_inc(v_bigint_6445_);
lean_dec(v_d_6444_);
v___x_6448_ = lean_box(0);
v_isShared_6449_ = v_isSharedCheck_6463_;
goto v_resetjp_6447_;
}
v_resetjp_6447_:
{
lean_object* v___x_6450_; lean_object* v___x_6451_; lean_object* v___x_6453_; 
v___x_6450_ = lean_mk_string_unchecked("bigint", 6, 6);
lean_inc_ref(v___f_6443_);
v___x_6451_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6443_, v_bigint_6445_);
if (v_isShared_6449_ == 0)
{
lean_ctor_set(v___x_6448_, 1, v___x_6451_);
lean_ctor_set(v___x_6448_, 0, v___x_6450_);
v___x_6453_ = v___x_6448_;
goto v_reusejp_6452_;
}
else
{
lean_object* v_reuseFailAlloc_6462_; 
v_reuseFailAlloc_6462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6462_, 0, v___x_6450_);
lean_ctor_set(v_reuseFailAlloc_6462_, 1, v___x_6451_);
v___x_6453_ = v_reuseFailAlloc_6462_;
goto v_reusejp_6452_;
}
v_reusejp_6452_:
{
lean_object* v___x_6454_; lean_object* v___x_6455_; lean_object* v___x_6456_; lean_object* v___x_6457_; lean_object* v___x_6458_; lean_object* v___x_6459_; lean_object* v___x_6460_; lean_object* v___x_6461_; 
v___x_6454_ = lean_mk_string_unchecked("throwIfNoEntry", 14, 14);
v___x_6455_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6443_, v_throwIfNoEntry_6446_);
v___x_6456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6456_, 0, v___x_6454_);
lean_ctor_set(v___x_6456_, 1, v___x_6455_);
v___x_6457_ = lean_unsigned_to_nat(2u);
v___x_6458_ = lean_mk_empty_array_with_capacity(v___x_6457_);
v___x_6459_ = lean_array_push(v___x_6458_, v___x_6453_);
v___x_6460_ = lean_array_push(v___x_6459_, v___x_6456_);
v___x_6461_ = l_Lasm_JS_Web_Internal_fields(v___x_6460_);
lean_dec_ref(v___x_6460_);
return v___x_6461_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsLstatSyncOptions(void){
_start:
{
lean_object* v___f_6464_; lean_object* v___f_6465_; 
v___f_6464_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6465_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsLstatSyncOptions___lam__0), 2, 1);
lean_closure_set(v___f_6465_, 0, v___f_6464_);
return v___f_6465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirSyncOptions___lam__0(lean_object* v___f_6466_, lean_object* v___f_6467_, lean_object* v_d_6468_){
_start:
{
lean_object* v_recursive_6469_; lean_object* v_mode_6470_; lean_object* v___x_6472_; uint8_t v_isShared_6473_; uint8_t v_isSharedCheck_6487_; 
v_recursive_6469_ = lean_ctor_get(v_d_6468_, 0);
v_mode_6470_ = lean_ctor_get(v_d_6468_, 1);
v_isSharedCheck_6487_ = !lean_is_exclusive(v_d_6468_);
if (v_isSharedCheck_6487_ == 0)
{
v___x_6472_ = v_d_6468_;
v_isShared_6473_ = v_isSharedCheck_6487_;
goto v_resetjp_6471_;
}
else
{
lean_inc(v_mode_6470_);
lean_inc(v_recursive_6469_);
lean_dec(v_d_6468_);
v___x_6472_ = lean_box(0);
v_isShared_6473_ = v_isSharedCheck_6487_;
goto v_resetjp_6471_;
}
v_resetjp_6471_:
{
lean_object* v___x_6474_; lean_object* v___x_6475_; lean_object* v___x_6477_; 
v___x_6474_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_6475_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6466_, v_recursive_6469_);
if (v_isShared_6473_ == 0)
{
lean_ctor_set(v___x_6472_, 1, v___x_6475_);
lean_ctor_set(v___x_6472_, 0, v___x_6474_);
v___x_6477_ = v___x_6472_;
goto v_reusejp_6476_;
}
else
{
lean_object* v_reuseFailAlloc_6486_; 
v_reuseFailAlloc_6486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6486_, 0, v___x_6474_);
lean_ctor_set(v_reuseFailAlloc_6486_, 1, v___x_6475_);
v___x_6477_ = v_reuseFailAlloc_6486_;
goto v_reusejp_6476_;
}
v_reusejp_6476_:
{
lean_object* v___x_6478_; lean_object* v___x_6479_; lean_object* v___x_6480_; lean_object* v___x_6481_; lean_object* v___x_6482_; lean_object* v___x_6483_; lean_object* v___x_6484_; lean_object* v___x_6485_; 
v___x_6478_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_6479_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6467_, v_mode_6470_);
v___x_6480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6480_, 0, v___x_6478_);
lean_ctor_set(v___x_6480_, 1, v___x_6479_);
v___x_6481_ = lean_unsigned_to_nat(2u);
v___x_6482_ = lean_mk_empty_array_with_capacity(v___x_6481_);
v___x_6483_ = lean_array_push(v___x_6482_, v___x_6477_);
v___x_6484_ = lean_array_push(v___x_6483_, v___x_6480_);
v___x_6485_ = l_Lasm_JS_Web_Internal_fields(v___x_6484_);
lean_dec_ref(v___x_6484_);
return v___x_6485_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsMkdirSyncOptions(void){
_start:
{
lean_object* v___f_6488_; lean_object* v___f_6489_; lean_object* v___f_6490_; 
v___f_6488_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6489_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0), 1, 0);
v___f_6490_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsMkdirSyncOptions___lam__0), 3, 2);
lean_closure_set(v___f_6490_, 0, v___f_6488_);
lean_closure_set(v___f_6490_, 1, v___f_6489_);
return v___f_6490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorIdx(lean_object* v_x_6491_){
_start:
{
if (lean_obj_tag(v_x_6491_) == 0)
{
lean_object* v___x_6492_; 
v___x_6492_ = lean_unsigned_to_nat(0u);
return v___x_6492_;
}
else
{
lean_object* v___x_6493_; 
v___x_6493_ = lean_unsigned_to_nat(1u);
return v___x_6493_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorIdx___boxed(lean_object* v_x_6494_){
_start:
{
lean_object* v_res_6495_; 
v_res_6495_ = l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorIdx(v_x_6494_);
lean_dec_ref(v_x_6494_);
return v_res_6495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim___redArg(lean_object* v_t_6496_, lean_object* v_k_6497_){
_start:
{
if (lean_obj_tag(v_t_6496_) == 0)
{
lean_object* v_value_6498_; lean_object* v___x_6499_; 
v_value_6498_ = lean_ctor_get(v_t_6496_, 0);
lean_inc_ref(v_value_6498_);
lean_dec_ref_known(v_t_6496_, 1);
v___x_6499_ = lean_apply_1(v_k_6497_, v_value_6498_);
return v___x_6499_;
}
else
{
lean_object* v_value_6500_; lean_object* v___x_6501_; 
v_value_6500_ = lean_ctor_get(v_t_6496_, 0);
lean_inc(v_value_6500_);
lean_dec_ref_known(v_t_6496_, 1);
v___x_6501_ = lean_apply_1(v_k_6497_, v_value_6500_);
return v___x_6501_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim(lean_object* v_motive_6502_, lean_object* v_ctorIdx_6503_, lean_object* v_t_6504_, lean_object* v_h_6505_, lean_object* v_k_6506_){
_start:
{
lean_object* v___x_6507_; 
v___x_6507_ = l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim___redArg(v_t_6504_, v_k_6506_);
return v___x_6507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim___boxed(lean_object* v_motive_6508_, lean_object* v_ctorIdx_6509_, lean_object* v_t_6510_, lean_object* v_h_6511_, lean_object* v_k_6512_){
_start:
{
lean_object* v_res_6513_; 
v_res_6513_ = l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim(v_motive_6508_, v_ctorIdx_6509_, v_t_6510_, v_h_6511_, v_k_6512_);
lean_dec(v_ctorIdx_6509_);
return v_res_6513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_mkdirSyncOptions_elim___redArg(lean_object* v_t_6514_, lean_object* v_mkdirSyncOptions_6515_){
_start:
{
lean_object* v___x_6516_; 
v___x_6516_ = l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim___redArg(v_t_6514_, v_mkdirSyncOptions_6515_);
return v___x_6516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_mkdirSyncOptions_elim(lean_object* v_motive_6517_, lean_object* v_t_6518_, lean_object* v_h_6519_, lean_object* v_mkdirSyncOptions_6520_){
_start:
{
lean_object* v___x_6521_; 
v___x_6521_ = l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim___redArg(v_t_6518_, v_mkdirSyncOptions_6520_);
return v___x_6521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_longLong_elim___redArg(lean_object* v_t_6522_, lean_object* v_longLong_6523_){
_start:
{
lean_object* v___x_6524_; 
v___x_6524_ = l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim___redArg(v_t_6522_, v_longLong_6523_);
return v___x_6524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_longLong_elim(lean_object* v_motive_6525_, lean_object* v_t_6526_, lean_object* v_h_6527_, lean_object* v_longLong_6528_){
_start:
{
lean_object* v___x_6529_; 
v___x_6529_ = l_Lasm_JS_Node_fs_MkdirSyncOptionsOrLongLong_ctorElim___redArg(v_t_6526_, v_longLong_6528_);
return v___x_6529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsMkdirSyncOptionsOrLongLong___lam__0(lean_object* v_x_6530_){
_start:
{
if (lean_obj_tag(v_x_6530_) == 0)
{
lean_object* v_value_6531_; lean_object* v_recursive_6532_; lean_object* v_mode_6533_; lean_object* v___x_6535_; uint8_t v_isShared_6536_; uint8_t v_isSharedCheck_6552_; 
v_value_6531_ = lean_ctor_get(v_x_6530_, 0);
lean_inc_ref(v_value_6531_);
lean_dec_ref_known(v_x_6530_, 1);
v_recursive_6532_ = lean_ctor_get(v_value_6531_, 0);
v_mode_6533_ = lean_ctor_get(v_value_6531_, 1);
v_isSharedCheck_6552_ = !lean_is_exclusive(v_value_6531_);
if (v_isSharedCheck_6552_ == 0)
{
v___x_6535_ = v_value_6531_;
v_isShared_6536_ = v_isSharedCheck_6552_;
goto v_resetjp_6534_;
}
else
{
lean_inc(v_mode_6533_);
lean_inc(v_recursive_6532_);
lean_dec(v_value_6531_);
v___x_6535_ = lean_box(0);
v_isShared_6536_ = v_isSharedCheck_6552_;
goto v_resetjp_6534_;
}
v_resetjp_6534_:
{
lean_object* v___f_6537_; lean_object* v___f_6538_; lean_object* v___x_6539_; lean_object* v___x_6540_; lean_object* v___x_6542_; 
v___f_6537_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6538_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0), 1, 0);
v___x_6539_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_6540_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6537_, v_recursive_6532_);
if (v_isShared_6536_ == 0)
{
lean_ctor_set(v___x_6535_, 1, v___x_6540_);
lean_ctor_set(v___x_6535_, 0, v___x_6539_);
v___x_6542_ = v___x_6535_;
goto v_reusejp_6541_;
}
else
{
lean_object* v_reuseFailAlloc_6551_; 
v_reuseFailAlloc_6551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6551_, 0, v___x_6539_);
lean_ctor_set(v_reuseFailAlloc_6551_, 1, v___x_6540_);
v___x_6542_ = v_reuseFailAlloc_6551_;
goto v_reusejp_6541_;
}
v_reusejp_6541_:
{
lean_object* v___x_6543_; lean_object* v___x_6544_; lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; 
v___x_6543_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_6544_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6538_, v_mode_6533_);
v___x_6545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6545_, 0, v___x_6543_);
lean_ctor_set(v___x_6545_, 1, v___x_6544_);
v___x_6546_ = lean_unsigned_to_nat(2u);
v___x_6547_ = lean_mk_empty_array_with_capacity(v___x_6546_);
v___x_6548_ = lean_array_push(v___x_6547_, v___x_6542_);
v___x_6549_ = lean_array_push(v___x_6548_, v___x_6545_);
v___x_6550_ = l_Lasm_JS_Web_Internal_fields(v___x_6549_);
lean_dec_ref(v___x_6549_);
return v___x_6550_;
}
}
}
else
{
lean_object* v_value_6553_; lean_object* v___x_6555_; uint8_t v_isShared_6556_; uint8_t v_isSharedCheck_6565_; 
v_value_6553_ = lean_ctor_get(v_x_6530_, 0);
v_isSharedCheck_6565_ = !lean_is_exclusive(v_x_6530_);
if (v_isSharedCheck_6565_ == 0)
{
v___x_6555_ = v_x_6530_;
v_isShared_6556_ = v_isSharedCheck_6565_;
goto v_resetjp_6554_;
}
else
{
lean_inc(v_value_6553_);
lean_dec(v_x_6530_);
v___x_6555_ = lean_box(0);
v_isShared_6556_ = v_isSharedCheck_6565_;
goto v_resetjp_6554_;
}
v_resetjp_6554_:
{
lean_object* v___x_6557_; lean_object* v___x_6558_; uint8_t v___x_6559_; 
v___x_6557_ = lean_nat_abs(v_value_6553_);
v___x_6558_ = lean_cstr_to_nat("9007199254740991");
v___x_6559_ = lean_nat_dec_le(v___x_6557_, v___x_6558_);
lean_dec(v___x_6557_);
if (v___x_6559_ == 0)
{
lean_object* v___x_6561_; 
if (v_isShared_6556_ == 0)
{
lean_ctor_set_tag(v___x_6555_, 5);
v___x_6561_ = v___x_6555_;
goto v_reusejp_6560_;
}
else
{
lean_object* v_reuseFailAlloc_6562_; 
v_reuseFailAlloc_6562_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6562_, 0, v_value_6553_);
v___x_6561_ = v_reuseFailAlloc_6562_;
goto v_reusejp_6560_;
}
v_reusejp_6560_:
{
return v___x_6561_;
}
}
else
{
double v___x_6563_; lean_object* v___x_6564_; 
lean_del_object(v___x_6555_);
v___x_6563_ = l_Float_ofInt(v_value_6553_);
lean_dec(v_value_6553_);
v___x_6564_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_6564_, 0, v___x_6563_);
return v___x_6564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdirSyncOptionsFsMkdirSyncOptionsOrLongLong___lam__0(lean_object* v_value_6567_){
_start:
{
lean_object* v___x_6568_; 
v___x_6568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6568_, 0, v_value_6567_);
return v___x_6568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntFsMkdirSyncOptionsOrLongLong___lam__0(lean_object* v_value_6570_){
_start:
{
lean_object* v___x_6571_; 
v___x_6571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6571_, 0, v_value_6570_);
return v___x_6571_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsMkdtempSyncOptions(void){
_start:
{
lean_object* v___f_6573_; lean_object* v___f_6574_; 
v___f_6573_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6574_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_6574_, 0, v___f_6573_);
return v___f_6574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorIdx(lean_object* v_x_6575_){
_start:
{
if (lean_obj_tag(v_x_6575_) == 0)
{
lean_object* v___x_6576_; 
v___x_6576_ = lean_unsigned_to_nat(0u);
return v___x_6576_;
}
else
{
lean_object* v___x_6577_; 
v___x_6577_ = lean_unsigned_to_nat(1u);
return v___x_6577_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorIdx___boxed(lean_object* v_x_6578_){
_start:
{
lean_object* v_res_6579_; 
v_res_6579_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorIdx(v_x_6578_);
lean_dec_ref(v_x_6578_);
return v_res_6579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim___redArg(lean_object* v_t_6580_, lean_object* v_k_6581_){
_start:
{
if (lean_obj_tag(v_t_6580_) == 0)
{
lean_object* v_value_6582_; lean_object* v___x_6583_; 
v_value_6582_ = lean_ctor_get(v_t_6580_, 0);
lean_inc_ref(v_value_6582_);
lean_dec_ref_known(v_t_6580_, 1);
v___x_6583_ = lean_apply_1(v_k_6581_, v_value_6582_);
return v___x_6583_;
}
else
{
lean_object* v_value_6584_; lean_object* v___x_6585_; 
v_value_6584_ = lean_ctor_get(v_t_6580_, 0);
lean_inc(v_value_6584_);
lean_dec_ref_known(v_t_6580_, 1);
v___x_6585_ = lean_apply_1(v_k_6581_, v_value_6584_);
return v___x_6585_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim(lean_object* v_motive_6586_, lean_object* v_ctorIdx_6587_, lean_object* v_t_6588_, lean_object* v_h_6589_, lean_object* v_k_6590_){
_start:
{
lean_object* v___x_6591_; 
v___x_6591_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim___redArg(v_t_6588_, v_k_6590_);
return v___x_6591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim___boxed(lean_object* v_motive_6592_, lean_object* v_ctorIdx_6593_, lean_object* v_t_6594_, lean_object* v_h_6595_, lean_object* v_k_6596_){
_start:
{
lean_object* v_res_6597_; 
v_res_6597_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim(v_motive_6592_, v_ctorIdx_6593_, v_t_6594_, v_h_6595_, v_k_6596_);
lean_dec(v_ctorIdx_6593_);
return v_res_6597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_domString_elim___redArg(lean_object* v_t_6598_, lean_object* v_domString_6599_){
_start:
{
lean_object* v___x_6600_; 
v___x_6600_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim___redArg(v_t_6598_, v_domString_6599_);
return v___x_6600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_domString_elim(lean_object* v_motive_6601_, lean_object* v_t_6602_, lean_object* v_h_6603_, lean_object* v_domString_6604_){
_start:
{
lean_object* v___x_6605_; 
v___x_6605_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim___redArg(v_t_6602_, v_domString_6604_);
return v___x_6605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_mkdtempSyncOptions_elim___redArg(lean_object* v_t_6606_, lean_object* v_mkdtempSyncOptions_6607_){
_start:
{
lean_object* v___x_6608_; 
v___x_6608_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim___redArg(v_t_6606_, v_mkdtempSyncOptions_6607_);
return v___x_6608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_mkdtempSyncOptions_elim(lean_object* v_motive_6609_, lean_object* v_t_6610_, lean_object* v_h_6611_, lean_object* v_mkdtempSyncOptions_6612_){
_start:
{
lean_object* v___x_6613_; 
v___x_6613_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempSyncOptions_ctorElim___redArg(v_t_6610_, v_mkdtempSyncOptions_6612_);
return v___x_6613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempSyncOptions___lam__0(lean_object* v_x_6614_){
_start:
{
if (lean_obj_tag(v_x_6614_) == 0)
{
lean_object* v_value_6615_; lean_object* v___x_6617_; uint8_t v_isShared_6618_; uint8_t v_isSharedCheck_6622_; 
v_value_6615_ = lean_ctor_get(v_x_6614_, 0);
v_isSharedCheck_6622_ = !lean_is_exclusive(v_x_6614_);
if (v_isSharedCheck_6622_ == 0)
{
v___x_6617_ = v_x_6614_;
v_isShared_6618_ = v_isSharedCheck_6622_;
goto v_resetjp_6616_;
}
else
{
lean_inc(v_value_6615_);
lean_dec(v_x_6614_);
v___x_6617_ = lean_box(0);
v_isShared_6618_ = v_isSharedCheck_6622_;
goto v_resetjp_6616_;
}
v_resetjp_6616_:
{
lean_object* v___x_6620_; 
if (v_isShared_6618_ == 0)
{
lean_ctor_set_tag(v___x_6617_, 4);
v___x_6620_ = v___x_6617_;
goto v_reusejp_6619_;
}
else
{
lean_object* v_reuseFailAlloc_6621_; 
v_reuseFailAlloc_6621_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6621_, 0, v_value_6615_);
v___x_6620_ = v_reuseFailAlloc_6621_;
goto v_reusejp_6619_;
}
v_reusejp_6619_:
{
return v___x_6620_;
}
}
}
else
{
lean_object* v_value_6623_; lean_object* v___f_6624_; lean_object* v___x_6625_; lean_object* v___x_6626_; lean_object* v___x_6627_; lean_object* v___x_6628_; lean_object* v___x_6629_; lean_object* v___x_6630_; lean_object* v___x_6631_; 
v_value_6623_ = lean_ctor_get(v_x_6614_, 0);
lean_inc(v_value_6623_);
lean_dec_ref_known(v_x_6614_, 1);
v___f_6624_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_6625_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_6626_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6624_, v_value_6623_);
v___x_6627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6627_, 0, v___x_6625_);
lean_ctor_set(v___x_6627_, 1, v___x_6626_);
v___x_6628_ = lean_unsigned_to_nat(1u);
v___x_6629_ = lean_mk_empty_array_with_capacity(v___x_6628_);
v___x_6630_ = lean_array_push(v___x_6629_, v___x_6627_);
v___x_6631_ = l_Lasm_JS_Web_Internal_fields(v___x_6630_);
lean_dec_ref(v___x_6630_);
return v___x_6631_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempSyncOptions___lam__0(lean_object* v_value_6633_){
_start:
{
lean_object* v___x_6634_; 
v___x_6634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6634_, 0, v_value_6633_);
return v___x_6634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdtempSyncOptionsFsDOMStringOrMkdtempSyncOptions___lam__0(lean_object* v_value_6636_){
_start:
{
lean_object* v___x_6637_; 
v___x_6637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6637_, 0, v_value_6636_);
return v___x_6637_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsMkdtempDisposableSyncOptions(void){
_start:
{
lean_object* v___f_6639_; lean_object* v___f_6640_; 
v___f_6639_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6640_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_6640_, 0, v___f_6639_);
return v___f_6640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorIdx(lean_object* v_x_6641_){
_start:
{
if (lean_obj_tag(v_x_6641_) == 0)
{
lean_object* v___x_6642_; 
v___x_6642_ = lean_unsigned_to_nat(0u);
return v___x_6642_;
}
else
{
lean_object* v___x_6643_; 
v___x_6643_ = lean_unsigned_to_nat(1u);
return v___x_6643_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorIdx___boxed(lean_object* v_x_6644_){
_start:
{
lean_object* v_res_6645_; 
v_res_6645_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorIdx(v_x_6644_);
lean_dec_ref(v_x_6644_);
return v_res_6645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim___redArg(lean_object* v_t_6646_, lean_object* v_k_6647_){
_start:
{
if (lean_obj_tag(v_t_6646_) == 0)
{
lean_object* v_value_6648_; lean_object* v___x_6649_; 
v_value_6648_ = lean_ctor_get(v_t_6646_, 0);
lean_inc_ref(v_value_6648_);
lean_dec_ref_known(v_t_6646_, 1);
v___x_6649_ = lean_apply_1(v_k_6647_, v_value_6648_);
return v___x_6649_;
}
else
{
lean_object* v_value_6650_; lean_object* v___x_6651_; 
v_value_6650_ = lean_ctor_get(v_t_6646_, 0);
lean_inc(v_value_6650_);
lean_dec_ref_known(v_t_6646_, 1);
v___x_6651_ = lean_apply_1(v_k_6647_, v_value_6650_);
return v___x_6651_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim(lean_object* v_motive_6652_, lean_object* v_ctorIdx_6653_, lean_object* v_t_6654_, lean_object* v_h_6655_, lean_object* v_k_6656_){
_start:
{
lean_object* v___x_6657_; 
v___x_6657_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim___redArg(v_t_6654_, v_k_6656_);
return v___x_6657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim___boxed(lean_object* v_motive_6658_, lean_object* v_ctorIdx_6659_, lean_object* v_t_6660_, lean_object* v_h_6661_, lean_object* v_k_6662_){
_start:
{
lean_object* v_res_6663_; 
v_res_6663_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim(v_motive_6658_, v_ctorIdx_6659_, v_t_6660_, v_h_6661_, v_k_6662_);
lean_dec(v_ctorIdx_6659_);
return v_res_6663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_domString_elim___redArg(lean_object* v_t_6664_, lean_object* v_domString_6665_){
_start:
{
lean_object* v___x_6666_; 
v___x_6666_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim___redArg(v_t_6664_, v_domString_6665_);
return v___x_6666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_domString_elim(lean_object* v_motive_6667_, lean_object* v_t_6668_, lean_object* v_h_6669_, lean_object* v_domString_6670_){
_start:
{
lean_object* v___x_6671_; 
v___x_6671_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim___redArg(v_t_6668_, v_domString_6670_);
return v___x_6671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_mkdtempDisposableSyncOptions_elim___redArg(lean_object* v_t_6672_, lean_object* v_mkdtempDisposableSyncOptions_6673_){
_start:
{
lean_object* v___x_6674_; 
v___x_6674_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim___redArg(v_t_6672_, v_mkdtempDisposableSyncOptions_6673_);
return v___x_6674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_mkdtempDisposableSyncOptions_elim(lean_object* v_motive_6675_, lean_object* v_t_6676_, lean_object* v_h_6677_, lean_object* v_mkdtempDisposableSyncOptions_6678_){
_start:
{
lean_object* v___x_6679_; 
v___x_6679_ = l_Lasm_JS_Node_fs_DOMStringOrMkdtempDisposableSyncOptions_ctorElim___redArg(v_t_6676_, v_mkdtempDisposableSyncOptions_6678_);
return v___x_6679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrMkdtempDisposableSyncOptions___lam__0(lean_object* v_x_6680_){
_start:
{
if (lean_obj_tag(v_x_6680_) == 0)
{
lean_object* v_value_6681_; lean_object* v___x_6683_; uint8_t v_isShared_6684_; uint8_t v_isSharedCheck_6688_; 
v_value_6681_ = lean_ctor_get(v_x_6680_, 0);
v_isSharedCheck_6688_ = !lean_is_exclusive(v_x_6680_);
if (v_isSharedCheck_6688_ == 0)
{
v___x_6683_ = v_x_6680_;
v_isShared_6684_ = v_isSharedCheck_6688_;
goto v_resetjp_6682_;
}
else
{
lean_inc(v_value_6681_);
lean_dec(v_x_6680_);
v___x_6683_ = lean_box(0);
v_isShared_6684_ = v_isSharedCheck_6688_;
goto v_resetjp_6682_;
}
v_resetjp_6682_:
{
lean_object* v___x_6686_; 
if (v_isShared_6684_ == 0)
{
lean_ctor_set_tag(v___x_6683_, 4);
v___x_6686_ = v___x_6683_;
goto v_reusejp_6685_;
}
else
{
lean_object* v_reuseFailAlloc_6687_; 
v_reuseFailAlloc_6687_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6687_, 0, v_value_6681_);
v___x_6686_ = v_reuseFailAlloc_6687_;
goto v_reusejp_6685_;
}
v_reusejp_6685_:
{
return v___x_6686_;
}
}
}
else
{
lean_object* v_value_6689_; lean_object* v___f_6690_; lean_object* v___x_6691_; lean_object* v___x_6692_; lean_object* v___x_6693_; lean_object* v___x_6694_; lean_object* v___x_6695_; lean_object* v___x_6696_; lean_object* v___x_6697_; 
v_value_6689_ = lean_ctor_get(v_x_6680_, 0);
lean_inc(v_value_6689_);
lean_dec_ref_known(v_x_6680_, 1);
v___f_6690_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_6691_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_6692_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6690_, v_value_6689_);
v___x_6693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6693_, 0, v___x_6691_);
lean_ctor_set(v___x_6693_, 1, v___x_6692_);
v___x_6694_ = lean_unsigned_to_nat(1u);
v___x_6695_ = lean_mk_empty_array_with_capacity(v___x_6694_);
v___x_6696_ = lean_array_push(v___x_6695_, v___x_6693_);
v___x_6697_ = l_Lasm_JS_Web_Internal_fields(v___x_6696_);
lean_dec_ref(v___x_6696_);
return v___x_6697_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrMkdtempDisposableSyncOptions___lam__0(lean_object* v_value_6699_){
_start:
{
lean_object* v___x_6700_; 
v___x_6700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6700_, 0, v_value_6699_);
return v___x_6700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsMkdtempDisposableSyncOptionsFsDOMStringOrMkdtempDisposableSyncOptions___lam__0(lean_object* v_value_6702_){
_start:
{
lean_object* v___x_6703_; 
v___x_6703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6703_, 0, v_value_6702_);
return v___x_6703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsOpendirSyncOptions___lam__0(lean_object* v___f_6705_, lean_object* v___f_6706_, lean_object* v___f_6707_, lean_object* v_d_6708_){
_start:
{
lean_object* v_encoding_6709_; lean_object* v_bufferSize_6710_; lean_object* v_recursive_6711_; lean_object* v___x_6712_; lean_object* v___x_6713_; lean_object* v___x_6714_; lean_object* v___x_6715_; lean_object* v___x_6716_; lean_object* v___x_6717_; lean_object* v___x_6718_; lean_object* v___x_6719_; lean_object* v___x_6720_; lean_object* v___x_6721_; lean_object* v___x_6722_; lean_object* v___x_6723_; lean_object* v___x_6724_; lean_object* v___x_6725_; lean_object* v___x_6726_; 
v_encoding_6709_ = lean_ctor_get(v_d_6708_, 0);
lean_inc(v_encoding_6709_);
v_bufferSize_6710_ = lean_ctor_get(v_d_6708_, 1);
lean_inc(v_bufferSize_6710_);
v_recursive_6711_ = lean_ctor_get(v_d_6708_, 2);
lean_inc(v_recursive_6711_);
lean_dec_ref(v_d_6708_);
v___x_6712_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_6713_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6705_, v_encoding_6709_);
v___x_6714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6714_, 0, v___x_6712_);
lean_ctor_set(v___x_6714_, 1, v___x_6713_);
v___x_6715_ = lean_mk_string_unchecked("bufferSize", 10, 10);
v___x_6716_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6706_, v_bufferSize_6710_);
v___x_6717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6717_, 0, v___x_6715_);
lean_ctor_set(v___x_6717_, 1, v___x_6716_);
v___x_6718_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_6719_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6707_, v_recursive_6711_);
v___x_6720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6720_, 0, v___x_6718_);
lean_ctor_set(v___x_6720_, 1, v___x_6719_);
v___x_6721_ = lean_unsigned_to_nat(3u);
v___x_6722_ = lean_mk_empty_array_with_capacity(v___x_6721_);
v___x_6723_ = lean_array_push(v___x_6722_, v___x_6714_);
v___x_6724_ = lean_array_push(v___x_6723_, v___x_6717_);
v___x_6725_ = lean_array_push(v___x_6724_, v___x_6720_);
v___x_6726_ = l_Lasm_JS_Web_Internal_fields(v___x_6725_);
lean_dec_ref(v___x_6725_);
return v___x_6726_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsOpendirSyncOptions(void){
_start:
{
lean_object* v___f_6727_; lean_object* v___f_6728_; lean_object* v___f_6729_; lean_object* v___f_6730_; 
v___f_6727_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6728_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_6729_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6730_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsOpendirSyncOptions___lam__0), 4, 3);
lean_closure_set(v___f_6730_, 0, v___f_6727_);
lean_closure_set(v___f_6730_, 1, v___f_6728_);
lean_closure_set(v___f_6730_, 2, v___f_6729_);
return v___f_6730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReaddirSyncOptions___lam__0(lean_object* v___f_6731_, lean_object* v___f_6732_, lean_object* v_d_6733_){
_start:
{
lean_object* v_encoding_6734_; lean_object* v_withFileTypes_6735_; lean_object* v_recursive_6736_; lean_object* v___x_6737_; lean_object* v___x_6738_; lean_object* v___x_6739_; lean_object* v___x_6740_; lean_object* v___x_6741_; lean_object* v___x_6742_; lean_object* v___x_6743_; lean_object* v___x_6744_; lean_object* v___x_6745_; lean_object* v___x_6746_; lean_object* v___x_6747_; lean_object* v___x_6748_; lean_object* v___x_6749_; lean_object* v___x_6750_; lean_object* v___x_6751_; 
v_encoding_6734_ = lean_ctor_get(v_d_6733_, 0);
lean_inc(v_encoding_6734_);
v_withFileTypes_6735_ = lean_ctor_get(v_d_6733_, 1);
lean_inc(v_withFileTypes_6735_);
v_recursive_6736_ = lean_ctor_get(v_d_6733_, 2);
lean_inc(v_recursive_6736_);
lean_dec_ref(v_d_6733_);
v___x_6737_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_6738_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6731_, v_encoding_6734_);
v___x_6739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6739_, 0, v___x_6737_);
lean_ctor_set(v___x_6739_, 1, v___x_6738_);
v___x_6740_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
lean_inc_ref(v___f_6732_);
v___x_6741_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6732_, v_withFileTypes_6735_);
v___x_6742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6742_, 0, v___x_6740_);
lean_ctor_set(v___x_6742_, 1, v___x_6741_);
v___x_6743_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_6744_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6732_, v_recursive_6736_);
v___x_6745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6745_, 0, v___x_6743_);
lean_ctor_set(v___x_6745_, 1, v___x_6744_);
v___x_6746_ = lean_unsigned_to_nat(3u);
v___x_6747_ = lean_mk_empty_array_with_capacity(v___x_6746_);
v___x_6748_ = lean_array_push(v___x_6747_, v___x_6739_);
v___x_6749_ = lean_array_push(v___x_6748_, v___x_6742_);
v___x_6750_ = lean_array_push(v___x_6749_, v___x_6745_);
v___x_6751_ = l_Lasm_JS_Web_Internal_fields(v___x_6750_);
lean_dec_ref(v___x_6750_);
return v___x_6751_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsReaddirSyncOptions(void){
_start:
{
lean_object* v___f_6752_; lean_object* v___f_6753_; lean_object* v___f_6754_; 
v___f_6752_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6753_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_6754_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsReaddirSyncOptions___lam__0), 3, 2);
lean_closure_set(v___f_6754_, 0, v___f_6752_);
lean_closure_set(v___f_6754_, 1, v___f_6753_);
return v___f_6754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorIdx(lean_object* v_x_6755_){
_start:
{
if (lean_obj_tag(v_x_6755_) == 0)
{
lean_object* v___x_6756_; 
v___x_6756_ = lean_unsigned_to_nat(0u);
return v___x_6756_;
}
else
{
lean_object* v___x_6757_; 
v___x_6757_ = lean_unsigned_to_nat(1u);
return v___x_6757_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorIdx___boxed(lean_object* v_x_6758_){
_start:
{
lean_object* v_res_6759_; 
v_res_6759_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorIdx(v_x_6758_);
lean_dec_ref(v_x_6758_);
return v_res_6759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim___redArg(lean_object* v_t_6760_, lean_object* v_k_6761_){
_start:
{
lean_object* v_value_6762_; lean_object* v___x_6763_; 
v_value_6762_ = lean_ctor_get(v_t_6760_, 0);
lean_inc_ref(v_value_6762_);
lean_dec_ref(v_t_6760_);
v___x_6763_ = lean_apply_1(v_k_6761_, v_value_6762_);
return v___x_6763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim(lean_object* v_motive_6764_, lean_object* v_ctorIdx_6765_, lean_object* v_t_6766_, lean_object* v_h_6767_, lean_object* v_k_6768_){
_start:
{
lean_object* v___x_6769_; 
v___x_6769_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim___redArg(v_t_6766_, v_k_6768_);
return v___x_6769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim___boxed(lean_object* v_motive_6770_, lean_object* v_ctorIdx_6771_, lean_object* v_t_6772_, lean_object* v_h_6773_, lean_object* v_k_6774_){
_start:
{
lean_object* v_res_6775_; 
v_res_6775_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim(v_motive_6770_, v_ctorIdx_6771_, v_t_6772_, v_h_6773_, v_k_6774_);
lean_dec(v_ctorIdx_6771_);
return v_res_6775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_domString_elim___redArg(lean_object* v_t_6776_, lean_object* v_domString_6777_){
_start:
{
lean_object* v___x_6778_; 
v___x_6778_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim___redArg(v_t_6776_, v_domString_6777_);
return v___x_6778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_domString_elim(lean_object* v_motive_6779_, lean_object* v_t_6780_, lean_object* v_h_6781_, lean_object* v_domString_6782_){
_start:
{
lean_object* v___x_6783_; 
v___x_6783_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim___redArg(v_t_6780_, v_domString_6782_);
return v___x_6783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_readdirSyncOptions_elim___redArg(lean_object* v_t_6784_, lean_object* v_readdirSyncOptions_6785_){
_start:
{
lean_object* v___x_6786_; 
v___x_6786_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim___redArg(v_t_6784_, v_readdirSyncOptions_6785_);
return v___x_6786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_readdirSyncOptions_elim(lean_object* v_motive_6787_, lean_object* v_t_6788_, lean_object* v_h_6789_, lean_object* v_readdirSyncOptions_6790_){
_start:
{
lean_object* v___x_6791_; 
v___x_6791_ = l_Lasm_JS_Node_fs_DOMStringOrReaddirSyncOptions_ctorElim___redArg(v_t_6788_, v_readdirSyncOptions_6790_);
return v___x_6791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReaddirSyncOptions___lam__0(lean_object* v_x_6792_){
_start:
{
if (lean_obj_tag(v_x_6792_) == 0)
{
lean_object* v_value_6793_; lean_object* v___x_6795_; uint8_t v_isShared_6796_; uint8_t v_isSharedCheck_6800_; 
v_value_6793_ = lean_ctor_get(v_x_6792_, 0);
v_isSharedCheck_6800_ = !lean_is_exclusive(v_x_6792_);
if (v_isSharedCheck_6800_ == 0)
{
v___x_6795_ = v_x_6792_;
v_isShared_6796_ = v_isSharedCheck_6800_;
goto v_resetjp_6794_;
}
else
{
lean_inc(v_value_6793_);
lean_dec(v_x_6792_);
v___x_6795_ = lean_box(0);
v_isShared_6796_ = v_isSharedCheck_6800_;
goto v_resetjp_6794_;
}
v_resetjp_6794_:
{
lean_object* v___x_6798_; 
if (v_isShared_6796_ == 0)
{
lean_ctor_set_tag(v___x_6795_, 4);
v___x_6798_ = v___x_6795_;
goto v_reusejp_6797_;
}
else
{
lean_object* v_reuseFailAlloc_6799_; 
v_reuseFailAlloc_6799_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6799_, 0, v_value_6793_);
v___x_6798_ = v_reuseFailAlloc_6799_;
goto v_reusejp_6797_;
}
v_reusejp_6797_:
{
return v___x_6798_;
}
}
}
else
{
lean_object* v_value_6801_; lean_object* v_encoding_6802_; lean_object* v_withFileTypes_6803_; lean_object* v_recursive_6804_; lean_object* v___f_6805_; lean_object* v___f_6806_; lean_object* v___x_6807_; lean_object* v___x_6808_; lean_object* v___x_6809_; lean_object* v___x_6810_; lean_object* v___x_6811_; lean_object* v___x_6812_; lean_object* v___x_6813_; lean_object* v___x_6814_; lean_object* v___x_6815_; lean_object* v___x_6816_; lean_object* v___x_6817_; lean_object* v___x_6818_; lean_object* v___x_6819_; lean_object* v___x_6820_; lean_object* v___x_6821_; 
v_value_6801_ = lean_ctor_get(v_x_6792_, 0);
lean_inc_ref(v_value_6801_);
lean_dec_ref_known(v_x_6792_, 1);
v_encoding_6802_ = lean_ctor_get(v_value_6801_, 0);
lean_inc(v_encoding_6802_);
v_withFileTypes_6803_ = lean_ctor_get(v_value_6801_, 1);
lean_inc(v_withFileTypes_6803_);
v_recursive_6804_ = lean_ctor_get(v_value_6801_, 2);
lean_inc(v_recursive_6804_);
lean_dec_ref(v_value_6801_);
v___f_6805_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6806_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_6807_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_6808_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6805_, v_encoding_6802_);
v___x_6809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6809_, 0, v___x_6807_);
lean_ctor_set(v___x_6809_, 1, v___x_6808_);
v___x_6810_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
lean_inc_ref(v___f_6806_);
v___x_6811_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6806_, v_withFileTypes_6803_);
v___x_6812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6812_, 0, v___x_6810_);
lean_ctor_set(v___x_6812_, 1, v___x_6811_);
v___x_6813_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_6814_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6806_, v_recursive_6804_);
v___x_6815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6815_, 0, v___x_6813_);
lean_ctor_set(v___x_6815_, 1, v___x_6814_);
v___x_6816_ = lean_unsigned_to_nat(3u);
v___x_6817_ = lean_mk_empty_array_with_capacity(v___x_6816_);
v___x_6818_ = lean_array_push(v___x_6817_, v___x_6809_);
v___x_6819_ = lean_array_push(v___x_6818_, v___x_6812_);
v___x_6820_ = lean_array_push(v___x_6819_, v___x_6815_);
v___x_6821_ = l_Lasm_JS_Web_Internal_fields(v___x_6820_);
lean_dec_ref(v___x_6820_);
return v___x_6821_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReaddirSyncOptions___lam__0(lean_object* v_value_6823_){
_start:
{
lean_object* v___x_6824_; 
v___x_6824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6824_, 0, v_value_6823_);
return v___x_6824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReaddirSyncOptionsFsDOMStringOrReaddirSyncOptions___lam__0(lean_object* v_value_6826_){
_start:
{
lean_object* v___x_6827_; 
v___x_6827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6827_, 0, v_value_6826_);
return v___x_6827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileSyncOptions___lam__0(lean_object* v___f_6829_, lean_object* v___f_6830_, lean_object* v_d_6831_){
_start:
{
lean_object* v_encoding_6832_; lean_object* v_flag_6833_; lean_object* v_buffer_6834_; lean_object* v___x_6835_; lean_object* v___x_6836_; lean_object* v___x_6837_; lean_object* v___x_6838_; lean_object* v___x_6839_; lean_object* v___x_6840_; lean_object* v___x_6841_; lean_object* v___x_6842_; lean_object* v___x_6843_; lean_object* v___x_6844_; lean_object* v___x_6845_; lean_object* v___x_6846_; lean_object* v___x_6847_; lean_object* v___x_6848_; lean_object* v___x_6849_; 
v_encoding_6832_ = lean_ctor_get(v_d_6831_, 0);
lean_inc(v_encoding_6832_);
v_flag_6833_ = lean_ctor_get(v_d_6831_, 1);
lean_inc(v_flag_6833_);
v_buffer_6834_ = lean_ctor_get(v_d_6831_, 2);
lean_inc(v_buffer_6834_);
lean_dec_ref(v_d_6831_);
v___x_6835_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_6829_);
v___x_6836_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6829_, v_encoding_6832_);
v___x_6837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6837_, 0, v___x_6835_);
lean_ctor_set(v___x_6837_, 1, v___x_6836_);
v___x_6838_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_6839_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6829_, v_flag_6833_);
v___x_6840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6840_, 0, v___x_6838_);
lean_ctor_set(v___x_6840_, 1, v___x_6839_);
v___x_6841_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_6842_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6830_, v_buffer_6834_);
v___x_6843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6843_, 0, v___x_6841_);
lean_ctor_set(v___x_6843_, 1, v___x_6842_);
v___x_6844_ = lean_unsigned_to_nat(3u);
v___x_6845_ = lean_mk_empty_array_with_capacity(v___x_6844_);
v___x_6846_ = lean_array_push(v___x_6845_, v___x_6837_);
v___x_6847_ = lean_array_push(v___x_6846_, v___x_6840_);
v___x_6848_ = lean_array_push(v___x_6847_, v___x_6843_);
v___x_6849_ = l_Lasm_JS_Web_Internal_fields(v___x_6848_);
lean_dec_ref(v___x_6848_);
return v___x_6849_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsReadFileSyncOptions(void){
_start:
{
lean_object* v___f_6850_; lean_object* v___f_6851_; lean_object* v___f_6852_; 
v___f_6850_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6851_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___f_6852_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsReadFileSyncOptions___lam__0), 3, 2);
lean_closure_set(v___f_6852_, 0, v___f_6850_);
lean_closure_set(v___f_6852_, 1, v___f_6851_);
return v___f_6852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorIdx(lean_object* v_x_6853_){
_start:
{
if (lean_obj_tag(v_x_6853_) == 0)
{
lean_object* v___x_6854_; 
v___x_6854_ = lean_unsigned_to_nat(0u);
return v___x_6854_;
}
else
{
lean_object* v___x_6855_; 
v___x_6855_ = lean_unsigned_to_nat(1u);
return v___x_6855_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_6856_){
_start:
{
lean_object* v_res_6857_; 
v_res_6857_ = l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorIdx(v_x_6856_);
lean_dec_ref(v_x_6856_);
return v_res_6857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_6858_, lean_object* v_k_6859_){
_start:
{
lean_object* v_value_6860_; lean_object* v___x_6861_; 
v_value_6860_ = lean_ctor_get(v_t_6858_, 0);
lean_inc_ref(v_value_6860_);
lean_dec_ref(v_t_6858_);
v___x_6861_ = lean_apply_1(v_k_6859_, v_value_6860_);
return v___x_6861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim(lean_object* v_motive_6862_, lean_object* v_ctorIdx_6863_, lean_object* v_t_6864_, lean_object* v_h_6865_, lean_object* v_k_6866_){
_start:
{
lean_object* v___x_6867_; 
v___x_6867_ = l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6864_, v_k_6866_);
return v___x_6867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_6868_, lean_object* v_ctorIdx_6869_, lean_object* v_t_6870_, lean_object* v_h_6871_, lean_object* v_k_6872_){
_start:
{
lean_object* v_res_6873_; 
v_res_6873_ = l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim(v_motive_6868_, v_ctorIdx_6869_, v_t_6870_, v_h_6871_, v_k_6872_);
lean_dec(v_ctorIdx_6869_);
return v_res_6873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_readFileSyncOptions_elim___redArg(lean_object* v_t_6874_, lean_object* v_readFileSyncOptions_6875_){
_start:
{
lean_object* v___x_6876_; 
v___x_6876_ = l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6874_, v_readFileSyncOptions_6875_);
return v___x_6876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_readFileSyncOptions_elim(lean_object* v_motive_6877_, lean_object* v_t_6878_, lean_object* v_h_6879_, lean_object* v_readFileSyncOptions_6880_){
_start:
{
lean_object* v___x_6881_; 
v___x_6881_ = l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6878_, v_readFileSyncOptions_6880_);
return v___x_6881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_6882_, lean_object* v_domString_6883_){
_start:
{
lean_object* v___x_6884_; 
v___x_6884_ = l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6882_, v_domString_6883_);
return v___x_6884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_domString_elim(lean_object* v_motive_6885_, lean_object* v_t_6886_, lean_object* v_h_6887_, lean_object* v_domString_6888_){
_start:
{
lean_object* v___x_6889_; 
v___x_6889_ = l_Lasm_JS_Node_fs_ReadFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_6886_, v_domString_6888_);
return v___x_6889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadFileSyncOptionsOrDOMString___lam__0(lean_object* v_x_6890_){
_start:
{
if (lean_obj_tag(v_x_6890_) == 0)
{
lean_object* v_value_6891_; lean_object* v_encoding_6892_; lean_object* v_flag_6893_; lean_object* v_buffer_6894_; lean_object* v___f_6895_; lean_object* v___f_6896_; lean_object* v___x_6897_; lean_object* v___x_6898_; lean_object* v___x_6899_; lean_object* v___x_6900_; lean_object* v___x_6901_; lean_object* v___x_6902_; lean_object* v___x_6903_; lean_object* v___x_6904_; lean_object* v___x_6905_; lean_object* v___x_6906_; lean_object* v___x_6907_; lean_object* v___x_6908_; lean_object* v___x_6909_; lean_object* v___x_6910_; lean_object* v___x_6911_; 
v_value_6891_ = lean_ctor_get(v_x_6890_, 0);
lean_inc_ref(v_value_6891_);
lean_dec_ref_known(v_x_6890_, 1);
v_encoding_6892_ = lean_ctor_get(v_value_6891_, 0);
lean_inc(v_encoding_6892_);
v_flag_6893_ = lean_ctor_get(v_value_6891_, 1);
lean_inc(v_flag_6893_);
v_buffer_6894_ = lean_ctor_get(v_value_6891_, 2);
lean_inc(v_buffer_6894_);
lean_dec_ref(v_value_6891_);
v___f_6895_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6896_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___x_6897_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_6895_);
v___x_6898_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6895_, v_encoding_6892_);
v___x_6899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6899_, 0, v___x_6897_);
lean_ctor_set(v___x_6899_, 1, v___x_6898_);
v___x_6900_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_6901_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6895_, v_flag_6893_);
v___x_6902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6902_, 0, v___x_6900_);
lean_ctor_set(v___x_6902_, 1, v___x_6901_);
v___x_6903_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_6904_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6896_, v_buffer_6894_);
v___x_6905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6905_, 0, v___x_6903_);
lean_ctor_set(v___x_6905_, 1, v___x_6904_);
v___x_6906_ = lean_unsigned_to_nat(3u);
v___x_6907_ = lean_mk_empty_array_with_capacity(v___x_6906_);
v___x_6908_ = lean_array_push(v___x_6907_, v___x_6899_);
v___x_6909_ = lean_array_push(v___x_6908_, v___x_6902_);
v___x_6910_ = lean_array_push(v___x_6909_, v___x_6905_);
v___x_6911_ = l_Lasm_JS_Web_Internal_fields(v___x_6910_);
lean_dec_ref(v___x_6910_);
return v___x_6911_;
}
else
{
lean_object* v_value_6912_; lean_object* v___x_6914_; uint8_t v_isShared_6915_; uint8_t v_isSharedCheck_6919_; 
v_value_6912_ = lean_ctor_get(v_x_6890_, 0);
v_isSharedCheck_6919_ = !lean_is_exclusive(v_x_6890_);
if (v_isSharedCheck_6919_ == 0)
{
v___x_6914_ = v_x_6890_;
v_isShared_6915_ = v_isSharedCheck_6919_;
goto v_resetjp_6913_;
}
else
{
lean_inc(v_value_6912_);
lean_dec(v_x_6890_);
v___x_6914_ = lean_box(0);
v_isShared_6915_ = v_isSharedCheck_6919_;
goto v_resetjp_6913_;
}
v_resetjp_6913_:
{
lean_object* v___x_6917_; 
if (v_isShared_6915_ == 0)
{
lean_ctor_set_tag(v___x_6914_, 4);
v___x_6917_ = v___x_6914_;
goto v_reusejp_6916_;
}
else
{
lean_object* v_reuseFailAlloc_6918_; 
v_reuseFailAlloc_6918_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6918_, 0, v_value_6912_);
v___x_6917_ = v_reuseFailAlloc_6918_;
goto v_reusejp_6916_;
}
v_reusejp_6916_:
{
return v___x_6917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadFileSyncOptionsFsReadFileSyncOptionsOrDOMString___lam__0(lean_object* v_value_6921_){
_start:
{
lean_object* v___x_6922_; 
v___x_6922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6922_, 0, v_value_6921_);
return v___x_6922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsReadFileSyncOptionsOrDOMString___lam__0(lean_object* v_value_6924_){
_start:
{
lean_object* v___x_6925_; 
v___x_6925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6925_, 0, v_value_6924_);
return v___x_6925_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsReadlinkSyncOptions(void){
_start:
{
lean_object* v___f_6927_; lean_object* v___f_6928_; 
v___f_6927_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_6928_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_6928_, 0, v___f_6927_);
return v___f_6928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorIdx(lean_object* v_x_6929_){
_start:
{
if (lean_obj_tag(v_x_6929_) == 0)
{
lean_object* v___x_6930_; 
v___x_6930_ = lean_unsigned_to_nat(0u);
return v___x_6930_;
}
else
{
lean_object* v___x_6931_; 
v___x_6931_ = lean_unsigned_to_nat(1u);
return v___x_6931_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorIdx___boxed(lean_object* v_x_6932_){
_start:
{
lean_object* v_res_6933_; 
v_res_6933_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorIdx(v_x_6932_);
lean_dec_ref(v_x_6932_);
return v_res_6933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim___redArg(lean_object* v_t_6934_, lean_object* v_k_6935_){
_start:
{
if (lean_obj_tag(v_t_6934_) == 0)
{
lean_object* v_value_6936_; lean_object* v___x_6937_; 
v_value_6936_ = lean_ctor_get(v_t_6934_, 0);
lean_inc_ref(v_value_6936_);
lean_dec_ref_known(v_t_6934_, 1);
v___x_6937_ = lean_apply_1(v_k_6935_, v_value_6936_);
return v___x_6937_;
}
else
{
lean_object* v_value_6938_; lean_object* v___x_6939_; 
v_value_6938_ = lean_ctor_get(v_t_6934_, 0);
lean_inc(v_value_6938_);
lean_dec_ref_known(v_t_6934_, 1);
v___x_6939_ = lean_apply_1(v_k_6935_, v_value_6938_);
return v___x_6939_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim(lean_object* v_motive_6940_, lean_object* v_ctorIdx_6941_, lean_object* v_t_6942_, lean_object* v_h_6943_, lean_object* v_k_6944_){
_start:
{
lean_object* v___x_6945_; 
v___x_6945_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim___redArg(v_t_6942_, v_k_6944_);
return v___x_6945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim___boxed(lean_object* v_motive_6946_, lean_object* v_ctorIdx_6947_, lean_object* v_t_6948_, lean_object* v_h_6949_, lean_object* v_k_6950_){
_start:
{
lean_object* v_res_6951_; 
v_res_6951_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim(v_motive_6946_, v_ctorIdx_6947_, v_t_6948_, v_h_6949_, v_k_6950_);
lean_dec(v_ctorIdx_6947_);
return v_res_6951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_domString_elim___redArg(lean_object* v_t_6952_, lean_object* v_domString_6953_){
_start:
{
lean_object* v___x_6954_; 
v___x_6954_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim___redArg(v_t_6952_, v_domString_6953_);
return v___x_6954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_domString_elim(lean_object* v_motive_6955_, lean_object* v_t_6956_, lean_object* v_h_6957_, lean_object* v_domString_6958_){
_start:
{
lean_object* v___x_6959_; 
v___x_6959_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim___redArg(v_t_6956_, v_domString_6958_);
return v___x_6959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_readlinkSyncOptions_elim___redArg(lean_object* v_t_6960_, lean_object* v_readlinkSyncOptions_6961_){
_start:
{
lean_object* v___x_6962_; 
v___x_6962_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim___redArg(v_t_6960_, v_readlinkSyncOptions_6961_);
return v___x_6962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_readlinkSyncOptions_elim(lean_object* v_motive_6963_, lean_object* v_t_6964_, lean_object* v_h_6965_, lean_object* v_readlinkSyncOptions_6966_){
_start:
{
lean_object* v___x_6967_; 
v___x_6967_ = l_Lasm_JS_Node_fs_DOMStringOrReadlinkSyncOptions_ctorElim___redArg(v_t_6964_, v_readlinkSyncOptions_6966_);
return v___x_6967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrReadlinkSyncOptions___lam__0(lean_object* v_x_6968_){
_start:
{
if (lean_obj_tag(v_x_6968_) == 0)
{
lean_object* v_value_6969_; lean_object* v___x_6971_; uint8_t v_isShared_6972_; uint8_t v_isSharedCheck_6976_; 
v_value_6969_ = lean_ctor_get(v_x_6968_, 0);
v_isSharedCheck_6976_ = !lean_is_exclusive(v_x_6968_);
if (v_isSharedCheck_6976_ == 0)
{
v___x_6971_ = v_x_6968_;
v_isShared_6972_ = v_isSharedCheck_6976_;
goto v_resetjp_6970_;
}
else
{
lean_inc(v_value_6969_);
lean_dec(v_x_6968_);
v___x_6971_ = lean_box(0);
v_isShared_6972_ = v_isSharedCheck_6976_;
goto v_resetjp_6970_;
}
v_resetjp_6970_:
{
lean_object* v___x_6974_; 
if (v_isShared_6972_ == 0)
{
lean_ctor_set_tag(v___x_6971_, 4);
v___x_6974_ = v___x_6971_;
goto v_reusejp_6973_;
}
else
{
lean_object* v_reuseFailAlloc_6975_; 
v_reuseFailAlloc_6975_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6975_, 0, v_value_6969_);
v___x_6974_ = v_reuseFailAlloc_6975_;
goto v_reusejp_6973_;
}
v_reusejp_6973_:
{
return v___x_6974_;
}
}
}
else
{
lean_object* v_value_6977_; lean_object* v___f_6978_; lean_object* v___x_6979_; lean_object* v___x_6980_; lean_object* v___x_6981_; lean_object* v___x_6982_; lean_object* v___x_6983_; lean_object* v___x_6984_; lean_object* v___x_6985_; 
v_value_6977_ = lean_ctor_get(v_x_6968_, 0);
lean_inc(v_value_6977_);
lean_dec_ref_known(v_x_6968_, 1);
v___f_6978_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_6979_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_6980_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6978_, v_value_6977_);
v___x_6981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6981_, 0, v___x_6979_);
lean_ctor_set(v___x_6981_, 1, v___x_6980_);
v___x_6982_ = lean_unsigned_to_nat(1u);
v___x_6983_ = lean_mk_empty_array_with_capacity(v___x_6982_);
v___x_6984_ = lean_array_push(v___x_6983_, v___x_6981_);
v___x_6985_ = l_Lasm_JS_Web_Internal_fields(v___x_6984_);
lean_dec_ref(v___x_6984_);
return v___x_6985_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrReadlinkSyncOptions___lam__0(lean_object* v_value_6987_){
_start:
{
lean_object* v___x_6988_; 
v___x_6988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6988_, 0, v_value_6987_);
return v___x_6988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsReadlinkSyncOptionsFsDOMStringOrReadlinkSyncOptions___lam__0(lean_object* v_value_6990_){
_start:
{
lean_object* v___x_6991_; 
v___x_6991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6991_, 0, v_value_6990_);
return v___x_6991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsReadSyncOptions___lam__0(lean_object* v___f_6993_, lean_object* v___f_6994_, lean_object* v_d_6995_){
_start:
{
lean_object* v_offset_6996_; lean_object* v_length_6997_; lean_object* v_position_6998_; lean_object* v___x_6999_; lean_object* v___x_7000_; lean_object* v___x_7001_; lean_object* v___x_7002_; lean_object* v___x_7003_; lean_object* v___x_7004_; lean_object* v___x_7005_; lean_object* v___x_7006_; lean_object* v___x_7007_; lean_object* v___x_7008_; lean_object* v___x_7009_; lean_object* v___x_7010_; lean_object* v___x_7011_; lean_object* v___x_7012_; lean_object* v___x_7013_; 
v_offset_6996_ = lean_ctor_get(v_d_6995_, 0);
lean_inc(v_offset_6996_);
v_length_6997_ = lean_ctor_get(v_d_6995_, 1);
lean_inc(v_length_6997_);
v_position_6998_ = lean_ctor_get(v_d_6995_, 2);
lean_inc(v_position_6998_);
lean_dec_ref(v_d_6995_);
v___x_6999_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref(v___f_6993_);
v___x_7000_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6993_, v_offset_6996_);
v___x_7001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7001_, 0, v___x_6999_);
lean_ctor_set(v___x_7001_, 1, v___x_7000_);
v___x_7002_ = lean_mk_string_unchecked("length", 6, 6);
v___x_7003_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6993_, v_length_6997_);
v___x_7004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7004_, 0, v___x_7002_);
lean_ctor_set(v___x_7004_, 1, v___x_7003_);
v___x_7005_ = lean_mk_string_unchecked("position", 8, 8);
v___x_7006_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_6994_, v_position_6998_);
v___x_7007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7007_, 0, v___x_7005_);
lean_ctor_set(v___x_7007_, 1, v___x_7006_);
v___x_7008_ = lean_unsigned_to_nat(3u);
v___x_7009_ = lean_mk_empty_array_with_capacity(v___x_7008_);
v___x_7010_ = lean_array_push(v___x_7009_, v___x_7001_);
v___x_7011_ = lean_array_push(v___x_7010_, v___x_7004_);
v___x_7012_ = lean_array_push(v___x_7011_, v___x_7007_);
v___x_7013_ = l_Lasm_JS_Web_Internal_fields(v___x_7012_);
lean_dec_ref(v___x_7012_);
return v___x_7013_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsReadSyncOptions(void){
_start:
{
lean_object* v___f_7014_; lean_object* v___f_7015_; lean_object* v___f_7016_; 
v___f_7014_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_7015_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0), 1, 0);
v___f_7016_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsReadSyncOptions___lam__0), 3, 2);
lean_closure_set(v___f_7016_, 0, v___f_7014_);
lean_closure_set(v___f_7016_, 1, v___f_7015_);
return v___f_7016_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsRealpathSyncOptions(void){
_start:
{
lean_object* v___f_7017_; lean_object* v___f_7018_; 
v___f_7017_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_7018_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_7018_, 0, v___f_7017_);
return v___f_7018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorIdx(lean_object* v_x_7019_){
_start:
{
if (lean_obj_tag(v_x_7019_) == 0)
{
lean_object* v___x_7020_; 
v___x_7020_ = lean_unsigned_to_nat(0u);
return v___x_7020_;
}
else
{
lean_object* v___x_7021_; 
v___x_7021_ = lean_unsigned_to_nat(1u);
return v___x_7021_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorIdx___boxed(lean_object* v_x_7022_){
_start:
{
lean_object* v_res_7023_; 
v_res_7023_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorIdx(v_x_7022_);
lean_dec_ref(v_x_7022_);
return v_res_7023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim___redArg(lean_object* v_t_7024_, lean_object* v_k_7025_){
_start:
{
if (lean_obj_tag(v_t_7024_) == 0)
{
lean_object* v_value_7026_; lean_object* v___x_7027_; 
v_value_7026_ = lean_ctor_get(v_t_7024_, 0);
lean_inc_ref(v_value_7026_);
lean_dec_ref_known(v_t_7024_, 1);
v___x_7027_ = lean_apply_1(v_k_7025_, v_value_7026_);
return v___x_7027_;
}
else
{
lean_object* v_value_7028_; lean_object* v___x_7029_; 
v_value_7028_ = lean_ctor_get(v_t_7024_, 0);
lean_inc(v_value_7028_);
lean_dec_ref_known(v_t_7024_, 1);
v___x_7029_ = lean_apply_1(v_k_7025_, v_value_7028_);
return v___x_7029_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim(lean_object* v_motive_7030_, lean_object* v_ctorIdx_7031_, lean_object* v_t_7032_, lean_object* v_h_7033_, lean_object* v_k_7034_){
_start:
{
lean_object* v___x_7035_; 
v___x_7035_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim___redArg(v_t_7032_, v_k_7034_);
return v___x_7035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim___boxed(lean_object* v_motive_7036_, lean_object* v_ctorIdx_7037_, lean_object* v_t_7038_, lean_object* v_h_7039_, lean_object* v_k_7040_){
_start:
{
lean_object* v_res_7041_; 
v_res_7041_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim(v_motive_7036_, v_ctorIdx_7037_, v_t_7038_, v_h_7039_, v_k_7040_);
lean_dec(v_ctorIdx_7037_);
return v_res_7041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_domString_elim___redArg(lean_object* v_t_7042_, lean_object* v_domString_7043_){
_start:
{
lean_object* v___x_7044_; 
v___x_7044_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim___redArg(v_t_7042_, v_domString_7043_);
return v___x_7044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_domString_elim(lean_object* v_motive_7045_, lean_object* v_t_7046_, lean_object* v_h_7047_, lean_object* v_domString_7048_){
_start:
{
lean_object* v___x_7049_; 
v___x_7049_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim___redArg(v_t_7046_, v_domString_7048_);
return v___x_7049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_realpathSyncOptions_elim___redArg(lean_object* v_t_7050_, lean_object* v_realpathSyncOptions_7051_){
_start:
{
lean_object* v___x_7052_; 
v___x_7052_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim___redArg(v_t_7050_, v_realpathSyncOptions_7051_);
return v___x_7052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_realpathSyncOptions_elim(lean_object* v_motive_7053_, lean_object* v_t_7054_, lean_object* v_h_7055_, lean_object* v_realpathSyncOptions_7056_){
_start:
{
lean_object* v___x_7057_; 
v___x_7057_ = l_Lasm_JS_Node_fs_DOMStringOrRealpathSyncOptions_ctorElim___redArg(v_t_7054_, v_realpathSyncOptions_7056_);
return v___x_7057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsDOMStringOrRealpathSyncOptions___lam__0(lean_object* v_x_7058_){
_start:
{
if (lean_obj_tag(v_x_7058_) == 0)
{
lean_object* v_value_7059_; lean_object* v___x_7061_; uint8_t v_isShared_7062_; uint8_t v_isSharedCheck_7066_; 
v_value_7059_ = lean_ctor_get(v_x_7058_, 0);
v_isSharedCheck_7066_ = !lean_is_exclusive(v_x_7058_);
if (v_isSharedCheck_7066_ == 0)
{
v___x_7061_ = v_x_7058_;
v_isShared_7062_ = v_isSharedCheck_7066_;
goto v_resetjp_7060_;
}
else
{
lean_inc(v_value_7059_);
lean_dec(v_x_7058_);
v___x_7061_ = lean_box(0);
v_isShared_7062_ = v_isSharedCheck_7066_;
goto v_resetjp_7060_;
}
v_resetjp_7060_:
{
lean_object* v___x_7064_; 
if (v_isShared_7062_ == 0)
{
lean_ctor_set_tag(v___x_7061_, 4);
v___x_7064_ = v___x_7061_;
goto v_reusejp_7063_;
}
else
{
lean_object* v_reuseFailAlloc_7065_; 
v_reuseFailAlloc_7065_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7065_, 0, v_value_7059_);
v___x_7064_ = v_reuseFailAlloc_7065_;
goto v_reusejp_7063_;
}
v_reusejp_7063_:
{
return v___x_7064_;
}
}
}
else
{
lean_object* v_value_7067_; lean_object* v___f_7068_; lean_object* v___x_7069_; lean_object* v___x_7070_; lean_object* v___x_7071_; lean_object* v___x_7072_; lean_object* v___x_7073_; lean_object* v___x_7074_; lean_object* v___x_7075_; 
v_value_7067_ = lean_ctor_get(v_x_7058_, 0);
lean_inc(v_value_7067_);
lean_dec_ref_known(v_x_7058_, 1);
v___f_7068_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_7069_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_7070_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7068_, v_value_7067_);
v___x_7071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7071_, 0, v___x_7069_);
lean_ctor_set(v___x_7071_, 1, v___x_7070_);
v___x_7072_ = lean_unsigned_to_nat(1u);
v___x_7073_ = lean_mk_empty_array_with_capacity(v___x_7072_);
v___x_7074_ = lean_array_push(v___x_7073_, v___x_7071_);
v___x_7075_ = l_Lasm_JS_Web_Internal_fields(v___x_7074_);
lean_dec_ref(v___x_7074_);
return v___x_7075_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsDOMStringOrRealpathSyncOptions___lam__0(lean_object* v_value_7077_){
_start:
{
lean_object* v___x_7078_; 
v___x_7078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7078_, 0, v_value_7077_);
return v___x_7078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsRealpathSyncOptionsFsDOMStringOrRealpathSyncOptions___lam__0(lean_object* v_value_7080_){
_start:
{
lean_object* v___x_7081_; 
v___x_7081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7081_, 0, v_value_7080_);
return v___x_7081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmdirSyncOptions___lam__0(lean_object* v___f_7083_, lean_object* v___f_7084_, lean_object* v_d_7085_){
_start:
{
lean_object* v_maxRetries_7086_; lean_object* v_recursive_7087_; lean_object* v_retryDelay_7088_; lean_object* v___x_7089_; lean_object* v___x_7090_; lean_object* v___x_7091_; lean_object* v___x_7092_; lean_object* v___x_7093_; lean_object* v___x_7094_; lean_object* v___x_7095_; lean_object* v___x_7096_; lean_object* v___x_7097_; lean_object* v___x_7098_; lean_object* v___x_7099_; lean_object* v___x_7100_; lean_object* v___x_7101_; lean_object* v___x_7102_; lean_object* v___x_7103_; 
v_maxRetries_7086_ = lean_ctor_get(v_d_7085_, 0);
lean_inc(v_maxRetries_7086_);
v_recursive_7087_ = lean_ctor_get(v_d_7085_, 1);
lean_inc(v_recursive_7087_);
v_retryDelay_7088_ = lean_ctor_get(v_d_7085_, 2);
lean_inc(v_retryDelay_7088_);
lean_dec_ref(v_d_7085_);
v___x_7089_ = lean_mk_string_unchecked("maxRetries", 10, 10);
lean_inc_ref(v___f_7083_);
v___x_7090_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7083_, v_maxRetries_7086_);
v___x_7091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7091_, 0, v___x_7089_);
lean_ctor_set(v___x_7091_, 1, v___x_7090_);
v___x_7092_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_7093_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7084_, v_recursive_7087_);
v___x_7094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7094_, 0, v___x_7092_);
lean_ctor_set(v___x_7094_, 1, v___x_7093_);
v___x_7095_ = lean_mk_string_unchecked("retryDelay", 10, 10);
v___x_7096_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7083_, v_retryDelay_7088_);
v___x_7097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7097_, 0, v___x_7095_);
lean_ctor_set(v___x_7097_, 1, v___x_7096_);
v___x_7098_ = lean_unsigned_to_nat(3u);
v___x_7099_ = lean_mk_empty_array_with_capacity(v___x_7098_);
v___x_7100_ = lean_array_push(v___x_7099_, v___x_7091_);
v___x_7101_ = lean_array_push(v___x_7100_, v___x_7094_);
v___x_7102_ = lean_array_push(v___x_7101_, v___x_7097_);
v___x_7103_ = l_Lasm_JS_Web_Internal_fields(v___x_7102_);
lean_dec_ref(v___x_7102_);
return v___x_7103_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsRmdirSyncOptions(void){
_start:
{
lean_object* v___f_7104_; lean_object* v___f_7105_; lean_object* v___f_7106_; 
v___f_7104_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_7105_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_7106_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsRmdirSyncOptions___lam__0), 3, 2);
lean_closure_set(v___f_7106_, 0, v___f_7104_);
lean_closure_set(v___f_7106_, 1, v___f_7105_);
return v___f_7106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRmSyncOptions___lam__0(lean_object* v___f_7107_, lean_object* v___f_7108_, lean_object* v_d_7109_){
_start:
{
lean_object* v_force_7110_; lean_object* v_maxRetries_7111_; lean_object* v_recursive_7112_; lean_object* v_retryDelay_7113_; lean_object* v___x_7114_; lean_object* v___x_7115_; lean_object* v___x_7116_; lean_object* v___x_7117_; lean_object* v___x_7118_; lean_object* v___x_7119_; lean_object* v___x_7120_; lean_object* v___x_7121_; lean_object* v___x_7122_; lean_object* v___x_7123_; lean_object* v___x_7124_; lean_object* v___x_7125_; lean_object* v___x_7126_; lean_object* v___x_7127_; lean_object* v___x_7128_; lean_object* v___x_7129_; lean_object* v___x_7130_; lean_object* v___x_7131_; lean_object* v___x_7132_; 
v_force_7110_ = lean_ctor_get(v_d_7109_, 0);
lean_inc(v_force_7110_);
v_maxRetries_7111_ = lean_ctor_get(v_d_7109_, 1);
lean_inc(v_maxRetries_7111_);
v_recursive_7112_ = lean_ctor_get(v_d_7109_, 2);
lean_inc(v_recursive_7112_);
v_retryDelay_7113_ = lean_ctor_get(v_d_7109_, 3);
lean_inc(v_retryDelay_7113_);
lean_dec_ref(v_d_7109_);
v___x_7114_ = lean_mk_string_unchecked("force", 5, 5);
lean_inc_ref(v___f_7107_);
v___x_7115_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7107_, v_force_7110_);
v___x_7116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7116_, 0, v___x_7114_);
lean_ctor_set(v___x_7116_, 1, v___x_7115_);
v___x_7117_ = lean_mk_string_unchecked("maxRetries", 10, 10);
lean_inc_ref(v___f_7108_);
v___x_7118_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7108_, v_maxRetries_7111_);
v___x_7119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7119_, 0, v___x_7117_);
lean_ctor_set(v___x_7119_, 1, v___x_7118_);
v___x_7120_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_7121_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7107_, v_recursive_7112_);
v___x_7122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7122_, 0, v___x_7120_);
lean_ctor_set(v___x_7122_, 1, v___x_7121_);
v___x_7123_ = lean_mk_string_unchecked("retryDelay", 10, 10);
v___x_7124_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7108_, v_retryDelay_7113_);
v___x_7125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7125_, 0, v___x_7123_);
lean_ctor_set(v___x_7125_, 1, v___x_7124_);
v___x_7126_ = lean_unsigned_to_nat(4u);
v___x_7127_ = lean_mk_empty_array_with_capacity(v___x_7126_);
v___x_7128_ = lean_array_push(v___x_7127_, v___x_7116_);
v___x_7129_ = lean_array_push(v___x_7128_, v___x_7119_);
v___x_7130_ = lean_array_push(v___x_7129_, v___x_7122_);
v___x_7131_ = lean_array_push(v___x_7130_, v___x_7125_);
v___x_7132_ = l_Lasm_JS_Web_Internal_fields(v___x_7131_);
lean_dec_ref(v___x_7131_);
return v___x_7132_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsRmSyncOptions(void){
_start:
{
lean_object* v___f_7133_; lean_object* v___f_7134_; lean_object* v___f_7135_; 
v___f_7133_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_7134_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_7135_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsRmSyncOptions___lam__0), 3, 2);
lean_closure_set(v___f_7135_, 0, v___f_7133_);
lean_closure_set(v___f_7135_, 1, v___f_7134_);
return v___f_7135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsStatSyncOptions___lam__0(lean_object* v___f_7136_, lean_object* v_d_7137_){
_start:
{
lean_object* v_bigint_7138_; lean_object* v_throwIfNoEntry_7139_; lean_object* v___x_7141_; uint8_t v_isShared_7142_; uint8_t v_isSharedCheck_7156_; 
v_bigint_7138_ = lean_ctor_get(v_d_7137_, 0);
v_throwIfNoEntry_7139_ = lean_ctor_get(v_d_7137_, 1);
v_isSharedCheck_7156_ = !lean_is_exclusive(v_d_7137_);
if (v_isSharedCheck_7156_ == 0)
{
v___x_7141_ = v_d_7137_;
v_isShared_7142_ = v_isSharedCheck_7156_;
goto v_resetjp_7140_;
}
else
{
lean_inc(v_throwIfNoEntry_7139_);
lean_inc(v_bigint_7138_);
lean_dec(v_d_7137_);
v___x_7141_ = lean_box(0);
v_isShared_7142_ = v_isSharedCheck_7156_;
goto v_resetjp_7140_;
}
v_resetjp_7140_:
{
lean_object* v___x_7143_; lean_object* v___x_7144_; lean_object* v___x_7146_; 
v___x_7143_ = lean_mk_string_unchecked("bigint", 6, 6);
lean_inc_ref(v___f_7136_);
v___x_7144_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7136_, v_bigint_7138_);
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 1, v___x_7144_);
lean_ctor_set(v___x_7141_, 0, v___x_7143_);
v___x_7146_ = v___x_7141_;
goto v_reusejp_7145_;
}
else
{
lean_object* v_reuseFailAlloc_7155_; 
v_reuseFailAlloc_7155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7155_, 0, v___x_7143_);
lean_ctor_set(v_reuseFailAlloc_7155_, 1, v___x_7144_);
v___x_7146_ = v_reuseFailAlloc_7155_;
goto v_reusejp_7145_;
}
v_reusejp_7145_:
{
lean_object* v___x_7147_; lean_object* v___x_7148_; lean_object* v___x_7149_; lean_object* v___x_7150_; lean_object* v___x_7151_; lean_object* v___x_7152_; lean_object* v___x_7153_; lean_object* v___x_7154_; 
v___x_7147_ = lean_mk_string_unchecked("throwIfNoEntry", 14, 14);
v___x_7148_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7136_, v_throwIfNoEntry_7139_);
v___x_7149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7149_, 0, v___x_7147_);
lean_ctor_set(v___x_7149_, 1, v___x_7148_);
v___x_7150_ = lean_unsigned_to_nat(2u);
v___x_7151_ = lean_mk_empty_array_with_capacity(v___x_7150_);
v___x_7152_ = lean_array_push(v___x_7151_, v___x_7146_);
v___x_7153_ = lean_array_push(v___x_7152_, v___x_7149_);
v___x_7154_ = l_Lasm_JS_Web_Internal_fields(v___x_7153_);
lean_dec_ref(v___x_7153_);
return v___x_7154_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsStatSyncOptions(void){
_start:
{
lean_object* v___f_7157_; lean_object* v___f_7158_; 
v___f_7157_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_7158_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsStatSyncOptions___lam__0), 2, 1);
lean_closure_set(v___f_7158_, 0, v___f_7157_);
return v___f_7158_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsStatfsSyncOptions(void){
_start:
{
lean_object* v___f_7159_; lean_object* v___f_7160_; 
v___f_7159_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_7160_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesLstatOptions___lam__0), 2, 1);
lean_closure_set(v___f_7160_, 0, v___f_7159_);
return v___f_7160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileSyncOptions___lam__0(lean_object* v___f_7161_, lean_object* v___f_7162_, lean_object* v___f_7163_, lean_object* v_d_7164_){
_start:
{
lean_object* v_encoding_7165_; lean_object* v_mode_7166_; lean_object* v_flag_7167_; lean_object* v_flush_7168_; lean_object* v___x_7169_; lean_object* v___x_7170_; lean_object* v___x_7171_; lean_object* v___x_7172_; lean_object* v___x_7173_; lean_object* v___x_7174_; lean_object* v___x_7175_; lean_object* v___x_7176_; lean_object* v___x_7177_; lean_object* v___x_7178_; lean_object* v___x_7179_; lean_object* v___x_7180_; lean_object* v___x_7181_; lean_object* v___x_7182_; lean_object* v___x_7183_; lean_object* v___x_7184_; lean_object* v___x_7185_; lean_object* v___x_7186_; lean_object* v___x_7187_; 
v_encoding_7165_ = lean_ctor_get(v_d_7164_, 0);
lean_inc(v_encoding_7165_);
v_mode_7166_ = lean_ctor_get(v_d_7164_, 1);
lean_inc(v_mode_7166_);
v_flag_7167_ = lean_ctor_get(v_d_7164_, 2);
lean_inc(v_flag_7167_);
v_flush_7168_ = lean_ctor_get(v_d_7164_, 3);
lean_inc(v_flush_7168_);
lean_dec_ref(v_d_7164_);
v___x_7169_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_7161_);
v___x_7170_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7161_, v_encoding_7165_);
v___x_7171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7171_, 0, v___x_7169_);
lean_ctor_set(v___x_7171_, 1, v___x_7170_);
v___x_7172_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_7173_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7162_, v_mode_7166_);
v___x_7174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7174_, 0, v___x_7172_);
lean_ctor_set(v___x_7174_, 1, v___x_7173_);
v___x_7175_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_7176_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7161_, v_flag_7167_);
v___x_7177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7177_, 0, v___x_7175_);
lean_ctor_set(v___x_7177_, 1, v___x_7176_);
v___x_7178_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_7179_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7163_, v_flush_7168_);
v___x_7180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7180_, 0, v___x_7178_);
lean_ctor_set(v___x_7180_, 1, v___x_7179_);
v___x_7181_ = lean_unsigned_to_nat(4u);
v___x_7182_ = lean_mk_empty_array_with_capacity(v___x_7181_);
v___x_7183_ = lean_array_push(v___x_7182_, v___x_7171_);
v___x_7184_ = lean_array_push(v___x_7183_, v___x_7174_);
v___x_7185_ = lean_array_push(v___x_7184_, v___x_7177_);
v___x_7186_ = lean_array_push(v___x_7185_, v___x_7180_);
v___x_7187_ = l_Lasm_JS_Web_Internal_fields(v___x_7186_);
lean_dec_ref(v___x_7186_);
return v___x_7187_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsWriteFileSyncOptions(void){
_start:
{
lean_object* v___f_7188_; lean_object* v___f_7189_; lean_object* v___f_7190_; lean_object* v___f_7191_; 
v___f_7188_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_7189_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_7190_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_7191_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsWriteFileSyncOptions___lam__0), 4, 3);
lean_closure_set(v___f_7191_, 0, v___f_7188_);
lean_closure_set(v___f_7191_, 1, v___f_7189_);
lean_closure_set(v___f_7191_, 2, v___f_7190_);
return v___f_7191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorIdx(lean_object* v_x_7192_){
_start:
{
if (lean_obj_tag(v_x_7192_) == 0)
{
lean_object* v___x_7193_; 
v___x_7193_ = lean_unsigned_to_nat(0u);
return v___x_7193_;
}
else
{
lean_object* v___x_7194_; 
v___x_7194_ = lean_unsigned_to_nat(1u);
return v___x_7194_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_7195_){
_start:
{
lean_object* v_res_7196_; 
v_res_7196_ = l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorIdx(v_x_7195_);
lean_dec_ref(v_x_7195_);
return v_res_7196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_7197_, lean_object* v_k_7198_){
_start:
{
lean_object* v_value_7199_; lean_object* v___x_7200_; 
v_value_7199_ = lean_ctor_get(v_t_7197_, 0);
lean_inc_ref(v_value_7199_);
lean_dec_ref(v_t_7197_);
v___x_7200_ = lean_apply_1(v_k_7198_, v_value_7199_);
return v___x_7200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim(lean_object* v_motive_7201_, lean_object* v_ctorIdx_7202_, lean_object* v_t_7203_, lean_object* v_h_7204_, lean_object* v_k_7205_){
_start:
{
lean_object* v___x_7206_; 
v___x_7206_ = l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_7203_, v_k_7205_);
return v___x_7206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_7207_, lean_object* v_ctorIdx_7208_, lean_object* v_t_7209_, lean_object* v_h_7210_, lean_object* v_k_7211_){
_start:
{
lean_object* v_res_7212_; 
v_res_7212_ = l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim(v_motive_7207_, v_ctorIdx_7208_, v_t_7209_, v_h_7210_, v_k_7211_);
lean_dec(v_ctorIdx_7208_);
return v_res_7212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_writeFileSyncOptions_elim___redArg(lean_object* v_t_7213_, lean_object* v_writeFileSyncOptions_7214_){
_start:
{
lean_object* v___x_7215_; 
v___x_7215_ = l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_7213_, v_writeFileSyncOptions_7214_);
return v___x_7215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_writeFileSyncOptions_elim(lean_object* v_motive_7216_, lean_object* v_t_7217_, lean_object* v_h_7218_, lean_object* v_writeFileSyncOptions_7219_){
_start:
{
lean_object* v___x_7220_; 
v___x_7220_ = l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_7217_, v_writeFileSyncOptions_7219_);
return v___x_7220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_7221_, lean_object* v_domString_7222_){
_start:
{
lean_object* v___x_7223_; 
v___x_7223_ = l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_7221_, v_domString_7222_);
return v___x_7223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_domString_elim(lean_object* v_motive_7224_, lean_object* v_t_7225_, lean_object* v_h_7226_, lean_object* v_domString_7227_){
_start:
{
lean_object* v___x_7228_; 
v___x_7228_ = l_Lasm_JS_Node_fs_WriteFileSyncOptionsOrDOMString_ctorElim___redArg(v_t_7225_, v_domString_7227_);
return v___x_7228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteFileSyncOptionsOrDOMString___lam__0(lean_object* v_x_7229_){
_start:
{
if (lean_obj_tag(v_x_7229_) == 0)
{
lean_object* v_value_7230_; lean_object* v_encoding_7231_; lean_object* v_mode_7232_; lean_object* v_flag_7233_; lean_object* v_flush_7234_; lean_object* v___f_7235_; lean_object* v___f_7236_; lean_object* v___f_7237_; lean_object* v___x_7238_; lean_object* v___x_7239_; lean_object* v___x_7240_; lean_object* v___x_7241_; lean_object* v___x_7242_; lean_object* v___x_7243_; lean_object* v___x_7244_; lean_object* v___x_7245_; lean_object* v___x_7246_; lean_object* v___x_7247_; lean_object* v___x_7248_; lean_object* v___x_7249_; lean_object* v___x_7250_; lean_object* v___x_7251_; lean_object* v___x_7252_; lean_object* v___x_7253_; lean_object* v___x_7254_; lean_object* v___x_7255_; lean_object* v___x_7256_; 
v_value_7230_ = lean_ctor_get(v_x_7229_, 0);
lean_inc_ref(v_value_7230_);
lean_dec_ref_known(v_x_7229_, 1);
v_encoding_7231_ = lean_ctor_get(v_value_7230_, 0);
lean_inc(v_encoding_7231_);
v_mode_7232_ = lean_ctor_get(v_value_7230_, 1);
lean_inc(v_mode_7232_);
v_flag_7233_ = lean_ctor_get(v_value_7230_, 2);
lean_inc(v_flag_7233_);
v_flush_7234_ = lean_ctor_get(v_value_7230_, 3);
lean_inc(v_flush_7234_);
lean_dec_ref(v_value_7230_);
v___f_7235_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_7236_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_7237_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_7238_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_7235_);
v___x_7239_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7235_, v_encoding_7231_);
v___x_7240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7240_, 0, v___x_7238_);
lean_ctor_set(v___x_7240_, 1, v___x_7239_);
v___x_7241_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_7242_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7236_, v_mode_7232_);
v___x_7243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7243_, 0, v___x_7241_);
lean_ctor_set(v___x_7243_, 1, v___x_7242_);
v___x_7244_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_7245_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7235_, v_flag_7233_);
v___x_7246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7246_, 0, v___x_7244_);
lean_ctor_set(v___x_7246_, 1, v___x_7245_);
v___x_7247_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_7248_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7237_, v_flush_7234_);
v___x_7249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7249_, 0, v___x_7247_);
lean_ctor_set(v___x_7249_, 1, v___x_7248_);
v___x_7250_ = lean_unsigned_to_nat(4u);
v___x_7251_ = lean_mk_empty_array_with_capacity(v___x_7250_);
v___x_7252_ = lean_array_push(v___x_7251_, v___x_7240_);
v___x_7253_ = lean_array_push(v___x_7252_, v___x_7243_);
v___x_7254_ = lean_array_push(v___x_7253_, v___x_7246_);
v___x_7255_ = lean_array_push(v___x_7254_, v___x_7249_);
v___x_7256_ = l_Lasm_JS_Web_Internal_fields(v___x_7255_);
lean_dec_ref(v___x_7255_);
return v___x_7256_;
}
else
{
lean_object* v_value_7257_; lean_object* v___x_7259_; uint8_t v_isShared_7260_; uint8_t v_isSharedCheck_7264_; 
v_value_7257_ = lean_ctor_get(v_x_7229_, 0);
v_isSharedCheck_7264_ = !lean_is_exclusive(v_x_7229_);
if (v_isSharedCheck_7264_ == 0)
{
v___x_7259_ = v_x_7229_;
v_isShared_7260_ = v_isSharedCheck_7264_;
goto v_resetjp_7258_;
}
else
{
lean_inc(v_value_7257_);
lean_dec(v_x_7229_);
v___x_7259_ = lean_box(0);
v_isShared_7260_ = v_isSharedCheck_7264_;
goto v_resetjp_7258_;
}
v_resetjp_7258_:
{
lean_object* v___x_7262_; 
if (v_isShared_7260_ == 0)
{
lean_ctor_set_tag(v___x_7259_, 4);
v___x_7262_ = v___x_7259_;
goto v_reusejp_7261_;
}
else
{
lean_object* v_reuseFailAlloc_7263_; 
v_reuseFailAlloc_7263_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7263_, 0, v_value_7257_);
v___x_7262_ = v_reuseFailAlloc_7263_;
goto v_reusejp_7261_;
}
v_reusejp_7261_:
{
return v___x_7262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsWriteFileSyncOptionsFsWriteFileSyncOptionsOrDOMString___lam__0(lean_object* v_value_7266_){
_start:
{
lean_object* v___x_7267_; 
v___x_7267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7267_, 0, v_value_7266_);
return v___x_7267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsWriteFileSyncOptionsOrDOMString___lam__0(lean_object* v_value_7269_){
_start:
{
lean_object* v___x_7270_; 
v___x_7270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7270_, 0, v_value_7269_);
return v___x_7270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsWriteSyncOptions___lam__0(lean_object* v___f_7272_, lean_object* v_d_7273_){
_start:
{
lean_object* v_offset_7274_; lean_object* v_length_7275_; lean_object* v_position_7276_; lean_object* v___x_7277_; lean_object* v___x_7278_; lean_object* v___x_7279_; lean_object* v___x_7280_; lean_object* v___x_7281_; lean_object* v___x_7282_; lean_object* v___x_7283_; lean_object* v___x_7284_; lean_object* v___x_7285_; lean_object* v___x_7286_; lean_object* v___x_7287_; lean_object* v___x_7288_; lean_object* v___x_7289_; lean_object* v___x_7290_; lean_object* v___x_7291_; 
v_offset_7274_ = lean_ctor_get(v_d_7273_, 0);
lean_inc(v_offset_7274_);
v_length_7275_ = lean_ctor_get(v_d_7273_, 1);
lean_inc(v_length_7275_);
v_position_7276_ = lean_ctor_get(v_d_7273_, 2);
lean_inc(v_position_7276_);
lean_dec_ref(v_d_7273_);
v___x_7277_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref_n(v___f_7272_, 2);
v___x_7278_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7272_, v_offset_7274_);
v___x_7279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7279_, 0, v___x_7277_);
lean_ctor_set(v___x_7279_, 1, v___x_7278_);
v___x_7280_ = lean_mk_string_unchecked("length", 6, 6);
v___x_7281_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7272_, v_length_7275_);
v___x_7282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7282_, 0, v___x_7280_);
lean_ctor_set(v___x_7282_, 1, v___x_7281_);
v___x_7283_ = lean_mk_string_unchecked("position", 8, 8);
v___x_7284_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7272_, v_position_7276_);
v___x_7285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7285_, 0, v___x_7283_);
lean_ctor_set(v___x_7285_, 1, v___x_7284_);
v___x_7286_ = lean_unsigned_to_nat(3u);
v___x_7287_ = lean_mk_empty_array_with_capacity(v___x_7286_);
v___x_7288_ = lean_array_push(v___x_7287_, v___x_7279_);
v___x_7289_ = lean_array_push(v___x_7288_, v___x_7282_);
v___x_7290_ = lean_array_push(v___x_7289_, v___x_7285_);
v___x_7291_ = l_Lasm_JS_Web_Internal_fields(v___x_7290_);
lean_dec_ref(v___x_7290_);
return v___x_7291_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsWriteSyncOptions(void){
_start:
{
lean_object* v___f_7292_; lean_object* v___f_7293_; 
v___f_7292_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_7293_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsWriteSyncOptions___lam__0), 2, 1);
lean_closure_set(v___f_7293_, 0, v___f_7292_);
return v___f_7293_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsOpenAsBlobSyncOptions(void){
_start:
{
lean_object* v___f_7294_; lean_object* v___f_7295_; 
v___f_7294_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_7295_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsOpenAsBlobOptions___lam__0), 2, 1);
lean_closure_set(v___f_7295_, 0, v___f_7294_);
return v___f_7295_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsRealpathNativeOptions(void){
_start:
{
lean_object* v___f_7296_; lean_object* v___f_7297_; 
v___f_7296_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_7297_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_7297_, 0, v___f_7296_);
return v___f_7297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorIdx(lean_object* v_x_7298_){
_start:
{
if (lean_obj_tag(v_x_7298_) == 0)
{
lean_object* v___x_7299_; 
v___x_7299_ = lean_unsigned_to_nat(0u);
return v___x_7299_;
}
else
{
lean_object* v___x_7300_; 
v___x_7300_ = lean_unsigned_to_nat(1u);
return v___x_7300_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorIdx___boxed(lean_object* v_x_7301_){
_start:
{
lean_object* v_res_7302_; 
v_res_7302_ = l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorIdx(v_x_7301_);
lean_dec_ref(v_x_7301_);
return v_res_7302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim___redArg(lean_object* v_t_7303_, lean_object* v_k_7304_){
_start:
{
if (lean_obj_tag(v_t_7303_) == 0)
{
lean_object* v_value_7305_; lean_object* v___x_7306_; 
v_value_7305_ = lean_ctor_get(v_t_7303_, 0);
lean_inc_ref(v_value_7305_);
lean_dec_ref_known(v_t_7303_, 1);
v___x_7306_ = lean_apply_1(v_k_7304_, v_value_7305_);
return v___x_7306_;
}
else
{
lean_object* v_value_7307_; lean_object* v___x_7308_; 
v_value_7307_ = lean_ctor_get(v_t_7303_, 0);
lean_inc(v_value_7307_);
lean_dec_ref_known(v_t_7303_, 1);
v___x_7308_ = lean_apply_1(v_k_7304_, v_value_7307_);
return v___x_7308_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim(lean_object* v_motive_7309_, lean_object* v_ctorIdx_7310_, lean_object* v_t_7311_, lean_object* v_h_7312_, lean_object* v_k_7313_){
_start:
{
lean_object* v___x_7314_; 
v___x_7314_ = l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7311_, v_k_7313_);
return v___x_7314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim___boxed(lean_object* v_motive_7315_, lean_object* v_ctorIdx_7316_, lean_object* v_t_7317_, lean_object* v_h_7318_, lean_object* v_k_7319_){
_start:
{
lean_object* v_res_7320_; 
v_res_7320_ = l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim(v_motive_7315_, v_ctorIdx_7316_, v_t_7317_, v_h_7318_, v_k_7319_);
lean_dec(v_ctorIdx_7316_);
return v_res_7320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_domString_elim___redArg(lean_object* v_t_7321_, lean_object* v_domString_7322_){
_start:
{
lean_object* v___x_7323_; 
v___x_7323_ = l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7321_, v_domString_7322_);
return v___x_7323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_domString_elim(lean_object* v_motive_7324_, lean_object* v_t_7325_, lean_object* v_h_7326_, lean_object* v_domString_7327_){
_start:
{
lean_object* v___x_7328_; 
v___x_7328_ = l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7325_, v_domString_7327_);
return v___x_7328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_nativeOptions_elim___redArg(lean_object* v_t_7329_, lean_object* v_nativeOptions_7330_){
_start:
{
lean_object* v___x_7331_; 
v___x_7331_ = l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7329_, v_nativeOptions_7330_);
return v___x_7331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_nativeOptions_elim(lean_object* v_motive_7332_, lean_object* v_t_7333_, lean_object* v_h_7334_, lean_object* v_nativeOptions_7335_){
_start:
{
lean_object* v___x_7336_; 
v___x_7336_ = l_Lasm_JS_Node_fs_realpath_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7333_, v_nativeOptions_7335_);
return v___x_7336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRealpathDOMStringOrNativeOptions___lam__0(lean_object* v_x_7337_){
_start:
{
if (lean_obj_tag(v_x_7337_) == 0)
{
lean_object* v_value_7338_; lean_object* v___x_7340_; uint8_t v_isShared_7341_; uint8_t v_isSharedCheck_7345_; 
v_value_7338_ = lean_ctor_get(v_x_7337_, 0);
v_isSharedCheck_7345_ = !lean_is_exclusive(v_x_7337_);
if (v_isSharedCheck_7345_ == 0)
{
v___x_7340_ = v_x_7337_;
v_isShared_7341_ = v_isSharedCheck_7345_;
goto v_resetjp_7339_;
}
else
{
lean_inc(v_value_7338_);
lean_dec(v_x_7337_);
v___x_7340_ = lean_box(0);
v_isShared_7341_ = v_isSharedCheck_7345_;
goto v_resetjp_7339_;
}
v_resetjp_7339_:
{
lean_object* v___x_7343_; 
if (v_isShared_7341_ == 0)
{
lean_ctor_set_tag(v___x_7340_, 4);
v___x_7343_ = v___x_7340_;
goto v_reusejp_7342_;
}
else
{
lean_object* v_reuseFailAlloc_7344_; 
v_reuseFailAlloc_7344_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7344_, 0, v_value_7338_);
v___x_7343_ = v_reuseFailAlloc_7344_;
goto v_reusejp_7342_;
}
v_reusejp_7342_:
{
return v___x_7343_;
}
}
}
else
{
lean_object* v_value_7346_; lean_object* v___f_7347_; lean_object* v___x_7348_; lean_object* v___x_7349_; lean_object* v___x_7350_; lean_object* v___x_7351_; lean_object* v___x_7352_; lean_object* v___x_7353_; lean_object* v___x_7354_; 
v_value_7346_ = lean_ctor_get(v_x_7337_, 0);
lean_inc(v_value_7346_);
lean_dec_ref_known(v_x_7337_, 1);
v___f_7347_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_7348_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_7349_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7347_, v_value_7346_);
v___x_7350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7350_, 0, v___x_7348_);
lean_ctor_set(v___x_7350_, 1, v___x_7349_);
v___x_7351_ = lean_unsigned_to_nat(1u);
v___x_7352_ = lean_mk_empty_array_with_capacity(v___x_7351_);
v___x_7353_ = lean_array_push(v___x_7352_, v___x_7350_);
v___x_7354_ = l_Lasm_JS_Web_Internal_fields(v___x_7353_);
lean_dec_ref(v___x_7353_);
return v___x_7354_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsRealpathDOMStringOrNativeOptions___lam__0(lean_object* v_value_7356_){
_start:
{
lean_object* v___x_7357_; 
v___x_7357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7357_, 0, v_value_7356_);
return v___x_7357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsRealpathNativeOptionsFsRealpathDOMStringOrNativeOptions___lam__0(lean_object* v_value_7359_){
_start:
{
lean_object* v___x_7360_; 
v___x_7360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7360_, 0, v_value_7359_);
return v___x_7360_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFsRealpathSyncNativeOptions(void){
_start:
{
lean_object* v___f_7362_; lean_object* v___f_7363_; 
v___f_7362_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_7363_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_7363_, 0, v___f_7362_);
return v___f_7363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorIdx(lean_object* v_x_7364_){
_start:
{
if (lean_obj_tag(v_x_7364_) == 0)
{
lean_object* v___x_7365_; 
v___x_7365_ = lean_unsigned_to_nat(0u);
return v___x_7365_;
}
else
{
lean_object* v___x_7366_; 
v___x_7366_ = lean_unsigned_to_nat(1u);
return v___x_7366_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorIdx___boxed(lean_object* v_x_7367_){
_start:
{
lean_object* v_res_7368_; 
v_res_7368_ = l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorIdx(v_x_7367_);
lean_dec_ref(v_x_7367_);
return v_res_7368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim___redArg(lean_object* v_t_7369_, lean_object* v_k_7370_){
_start:
{
if (lean_obj_tag(v_t_7369_) == 0)
{
lean_object* v_value_7371_; lean_object* v___x_7372_; 
v_value_7371_ = lean_ctor_get(v_t_7369_, 0);
lean_inc_ref(v_value_7371_);
lean_dec_ref_known(v_t_7369_, 1);
v___x_7372_ = lean_apply_1(v_k_7370_, v_value_7371_);
return v___x_7372_;
}
else
{
lean_object* v_value_7373_; lean_object* v___x_7374_; 
v_value_7373_ = lean_ctor_get(v_t_7369_, 0);
lean_inc(v_value_7373_);
lean_dec_ref_known(v_t_7369_, 1);
v___x_7374_ = lean_apply_1(v_k_7370_, v_value_7373_);
return v___x_7374_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim(lean_object* v_motive_7375_, lean_object* v_ctorIdx_7376_, lean_object* v_t_7377_, lean_object* v_h_7378_, lean_object* v_k_7379_){
_start:
{
lean_object* v___x_7380_; 
v___x_7380_ = l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7377_, v_k_7379_);
return v___x_7380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim___boxed(lean_object* v_motive_7381_, lean_object* v_ctorIdx_7382_, lean_object* v_t_7383_, lean_object* v_h_7384_, lean_object* v_k_7385_){
_start:
{
lean_object* v_res_7386_; 
v_res_7386_ = l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim(v_motive_7381_, v_ctorIdx_7382_, v_t_7383_, v_h_7384_, v_k_7385_);
lean_dec(v_ctorIdx_7382_);
return v_res_7386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_domString_elim___redArg(lean_object* v_t_7387_, lean_object* v_domString_7388_){
_start:
{
lean_object* v___x_7389_; 
v___x_7389_ = l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7387_, v_domString_7388_);
return v___x_7389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_domString_elim(lean_object* v_motive_7390_, lean_object* v_t_7391_, lean_object* v_h_7392_, lean_object* v_domString_7393_){
_start:
{
lean_object* v___x_7394_; 
v___x_7394_ = l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7391_, v_domString_7393_);
return v___x_7394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_nativeOptions_elim___redArg(lean_object* v_t_7395_, lean_object* v_nativeOptions_7396_){
_start:
{
lean_object* v___x_7397_; 
v___x_7397_ = l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7395_, v_nativeOptions_7396_);
return v___x_7397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_nativeOptions_elim(lean_object* v_motive_7398_, lean_object* v_t_7399_, lean_object* v_h_7400_, lean_object* v_nativeOptions_7401_){
_start:
{
lean_object* v___x_7402_; 
v___x_7402_ = l_Lasm_JS_Node_fs_realpathSync_DOMStringOrNativeOptions_ctorElim___redArg(v_t_7399_, v_nativeOptions_7401_);
return v___x_7402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFsRealpathSyncDOMStringOrNativeOptions___lam__0(lean_object* v_x_7403_){
_start:
{
if (lean_obj_tag(v_x_7403_) == 0)
{
lean_object* v_value_7404_; lean_object* v___x_7406_; uint8_t v_isShared_7407_; uint8_t v_isSharedCheck_7411_; 
v_value_7404_ = lean_ctor_get(v_x_7403_, 0);
v_isSharedCheck_7411_ = !lean_is_exclusive(v_x_7403_);
if (v_isSharedCheck_7411_ == 0)
{
v___x_7406_ = v_x_7403_;
v_isShared_7407_ = v_isSharedCheck_7411_;
goto v_resetjp_7405_;
}
else
{
lean_inc(v_value_7404_);
lean_dec(v_x_7403_);
v___x_7406_ = lean_box(0);
v_isShared_7407_ = v_isSharedCheck_7411_;
goto v_resetjp_7405_;
}
v_resetjp_7405_:
{
lean_object* v___x_7409_; 
if (v_isShared_7407_ == 0)
{
lean_ctor_set_tag(v___x_7406_, 4);
v___x_7409_ = v___x_7406_;
goto v_reusejp_7408_;
}
else
{
lean_object* v_reuseFailAlloc_7410_; 
v_reuseFailAlloc_7410_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7410_, 0, v_value_7404_);
v___x_7409_ = v_reuseFailAlloc_7410_;
goto v_reusejp_7408_;
}
v_reusejp_7408_:
{
return v___x_7409_;
}
}
}
else
{
lean_object* v_value_7412_; lean_object* v___f_7413_; lean_object* v___x_7414_; lean_object* v___x_7415_; lean_object* v___x_7416_; lean_object* v___x_7417_; lean_object* v___x_7418_; lean_object* v___x_7419_; lean_object* v___x_7420_; 
v_value_7412_ = lean_ctor_get(v_x_7403_, 0);
lean_inc(v_value_7412_);
lean_dec_ref_known(v_x_7403_, 1);
v___f_7413_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_7414_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_7415_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_7413_, v_value_7412_);
v___x_7416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7416_, 0, v___x_7414_);
lean_ctor_set(v___x_7416_, 1, v___x_7415_);
v___x_7417_ = lean_unsigned_to_nat(1u);
v___x_7418_ = lean_mk_empty_array_with_capacity(v___x_7417_);
v___x_7419_ = lean_array_push(v___x_7418_, v___x_7416_);
v___x_7420_ = l_Lasm_JS_Web_Internal_fields(v___x_7419_);
lean_dec_ref(v___x_7419_);
return v___x_7420_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringFsRealpathSyncDOMStringOrNativeOptions___lam__0(lean_object* v_value_7422_){
_start:
{
lean_object* v___x_7423_; 
v___x_7423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7423_, 0, v_value_7422_);
return v___x_7423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFsRealpathSyncNativeOptionsFsRealpathSyncDOMStringOrNativeOptions___lam__0(lean_object* v_value_7425_){
_start:
{
lean_object* v___x_7426_; 
v___x_7426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7426_, 0, v_value_7425_);
return v___x_7426_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_FileAPI(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_WebAnimationsAndWebAnimations2(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Stream(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Net(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Process(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Readline(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Fs(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_FileAPI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Webidl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_WebAnimationsAndWebAnimations2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Buffer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Readline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSFileHandle = _init_l_Lasm_JS_Node_instFromJSFileHandle();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFileHandle);
l_Lasm_JS_Node_instFromJSFsDir = _init_l_Lasm_JS_Node_instFromJSFsDir();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsDir);
l_Lasm_JS_Node_instFromJSFsDirent = _init_l_Lasm_JS_Node_instFromJSFsDirent();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsDirent);
l_Lasm_JS_Node_instFromJSFsFSWatcher = _init_l_Lasm_JS_Node_instFromJSFsFSWatcher();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsFSWatcher);
l_Lasm_JS_Node_instFromJSFsStatWatcher = _init_l_Lasm_JS_Node_instFromJSFsStatWatcher();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsStatWatcher);
l_Lasm_JS_Node_instFromJSFsReadStream = _init_l_Lasm_JS_Node_instFromJSFsReadStream();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsReadStream);
l_Lasm_JS_Node_instFromJSFsStats = _init_l_Lasm_JS_Node_instFromJSFsStats();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsStats);
l_Lasm_JS_Node_instFromJSFsStatFs = _init_l_Lasm_JS_Node_instFromJSFsStatFs();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsStatFs);
l_Lasm_JS_Node_instFromJSFsUtf8Stream = _init_l_Lasm_JS_Node_instFromJSFsUtf8Stream();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsUtf8Stream);
l_Lasm_JS_Node_instFromJSFsWriteStream = _init_l_Lasm_JS_Node_instFromJSFsWriteStream();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsWriteStream);
l_Lasm_JS_Node_instFromJSFileHandleCloseListener = _init_l_Lasm_JS_Node_instFromJSFileHandleCloseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFileHandleCloseListener);
l_Lasm_JS_Node_instToJSFileHandleAppendFileOptions = _init_l_Lasm_JS_Node_instToJSFileHandleAppendFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleAppendFileOptions);
l_Lasm_JS_Node_instToJSFileHandleCreateReadStreamOptions = _init_l_Lasm_JS_Node_instToJSFileHandleCreateReadStreamOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleCreateReadStreamOptions);
l_Lasm_JS_Node_instToJSFileHandleCreateWriteStreamOptions = _init_l_Lasm_JS_Node_instToJSFileHandleCreateWriteStreamOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleCreateWriteStreamOptions);
l_Lasm_JS_Node_instToJSFileHandlePullOptions = _init_l_Lasm_JS_Node_instToJSFileHandlePullOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandlePullOptions);
l_Lasm_JS_Node_instToJSFileHandlePullSyncOptions = _init_l_Lasm_JS_Node_instToJSFileHandlePullSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandlePullSyncOptions);
l_Lasm_JS_Node_instFromJSFileHandleReadResult = _init_l_Lasm_JS_Node_instFromJSFileHandleReadResult();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFileHandleReadResult);
l_Lasm_JS_Node_instToJSFileHandleReadOptions = _init_l_Lasm_JS_Node_instToJSFileHandleReadOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleReadOptions);
l_Lasm_JS_Node_instToJSFileHandleReadOptions2 = _init_l_Lasm_JS_Node_instToJSFileHandleReadOptions2();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleReadOptions2);
l_Lasm_JS_Node_instToJSFileHandleReadableWebStreamOptions = _init_l_Lasm_JS_Node_instToJSFileHandleReadableWebStreamOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleReadableWebStreamOptions);
l_Lasm_JS_Node_instToJSFileHandleReadFileOptions = _init_l_Lasm_JS_Node_instToJSFileHandleReadFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleReadFileOptions);
l_Lasm_JS_Node_instToJSFileHandleReadLinesOptions = _init_l_Lasm_JS_Node_instToJSFileHandleReadLinesOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleReadLinesOptions);
l_Lasm_JS_Node_instToJSFileHandleStatOptions = _init_l_Lasm_JS_Node_instToJSFileHandleStatOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleStatOptions);
l_Lasm_JS_Node_instFromJSFileHandleWriteResult = _init_l_Lasm_JS_Node_instFromJSFileHandleWriteResult();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFileHandleWriteResult);
l_Lasm_JS_Node_instToJSFileHandleWriteOptions = _init_l_Lasm_JS_Node_instToJSFileHandleWriteOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleWriteOptions);
l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult = _init_l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFileHandleWriteStringResult);
l_Lasm_JS_Node_instToJSFileHandleWriteFileOptions = _init_l_Lasm_JS_Node_instToJSFileHandleWriteFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleWriteFileOptions);
l_Lasm_JS_Node_instToJSFileHandleWriterOptions = _init_l_Lasm_JS_Node_instToJSFileHandleWriterOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFileHandleWriterOptions);
l_Lasm_JS_Node_instFromJSFsFSWatcherChangeListener = _init_l_Lasm_JS_Node_instFromJSFsFSWatcherChangeListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsFSWatcherChangeListener);
l_Lasm_JS_Node_instFromJSFsFSWatcherCloseListener = _init_l_Lasm_JS_Node_instFromJSFsFSWatcherCloseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsFSWatcherCloseListener);
l_Lasm_JS_Node_instFromJSFsFSWatcherErrorListener = _init_l_Lasm_JS_Node_instFromJSFsFSWatcherErrorListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsFSWatcherErrorListener);
l_Lasm_JS_Node_instFromJSFsReadStreamCloseListener = _init_l_Lasm_JS_Node_instFromJSFsReadStreamCloseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsReadStreamCloseListener);
l_Lasm_JS_Node_instFromJSFsReadStreamOpenListener = _init_l_Lasm_JS_Node_instFromJSFsReadStreamOpenListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsReadStreamOpenListener);
l_Lasm_JS_Node_instFromJSFsReadStreamReadyListener = _init_l_Lasm_JS_Node_instFromJSFsReadStreamReadyListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsReadStreamReadyListener);
l_Lasm_JS_Node_instFromJSDoubleOrBigint = _init_l_Lasm_JS_Node_instFromJSDoubleOrBigint();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDoubleOrBigint);
l_Lasm_JS_Node_instFromJSFsUtf8StreamCloseListener = _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamCloseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsUtf8StreamCloseListener);
l_Lasm_JS_Node_instFromJSFsUtf8StreamDrainListener = _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamDrainListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsUtf8StreamDrainListener);
l_Lasm_JS_Node_instFromJSFsUtf8StreamDropListener = _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamDropListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsUtf8StreamDropListener);
l_Lasm_JS_Node_instFromJSFsUtf8StreamErrorListener = _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamErrorListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsUtf8StreamErrorListener);
l_Lasm_JS_Node_instFromJSFsUtf8StreamFinishListener = _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamFinishListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsUtf8StreamFinishListener);
l_Lasm_JS_Node_instFromJSFsUtf8StreamReadyListener = _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamReadyListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsUtf8StreamReadyListener);
l_Lasm_JS_Node_instFromJSFsUtf8StreamWriteListener = _init_l_Lasm_JS_Node_instFromJSFsUtf8StreamWriteListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsUtf8StreamWriteListener);
l_Lasm_JS_Node_instFromJSDoubleOrDOMString = _init_l_Lasm_JS_Node_instFromJSDoubleOrDOMString();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDoubleOrDOMString);
l_Lasm_JS_Node_instFromJSFsWriteStreamCloseListener = _init_l_Lasm_JS_Node_instFromJSFsWriteStreamCloseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsWriteStreamCloseListener);
l_Lasm_JS_Node_instFromJSFsWriteStreamOpenListener = _init_l_Lasm_JS_Node_instFromJSFsWriteStreamOpenListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsWriteStreamOpenListener);
l_Lasm_JS_Node_instFromJSFsWriteStreamReadyListener = _init_l_Lasm_JS_Node_instFromJSFsWriteStreamReadyListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsWriteStreamReadyListener);
l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesAppendFileOptions);
l_Lasm_JS_Node_instToJSFsPromisesCpOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesCpOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesCpOptions);
l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString = _init_l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString();
lean_mark_persistent(l_Lasm_JS_Node_instToJSJSFunctionOrSequenceOfDOMString);
l_Lasm_JS_Node_instToJSFsPromisesGlobOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesGlobOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesGlobOptions);
l_Lasm_JS_Node_instToJSFsPromisesLstatOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesLstatOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesLstatOptions);
l_Lasm_JS_Node_instToJSFsPromisesMkdirOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesMkdirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesMkdirOptions);
l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesMkdtempOptions);
l_Lasm_JS_Node_instToJSFsPromisesMkdtempDisposableOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesMkdtempDisposableOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesMkdtempDisposableOptions);
l_Lasm_JS_Node_instToJSFsPromisesOpendirOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesOpendirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesOpendirOptions);
l_Lasm_JS_Node_instToJSFsPromisesReaddirOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesReaddirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesReaddirOptions);
l_Lasm_JS_Node_instFromJSFsDOMStringOrUint8ArrayOrDirent = _init_l_Lasm_JS_Node_instFromJSFsDOMStringOrUint8ArrayOrDirent();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFsDOMStringOrUint8ArrayOrDirent);
l_Lasm_JS_Node_instToJSFsPromisesReadFileOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesReadFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesReadFileOptions);
l_Lasm_JS_Node_instToJSFsPromisesReadlinkOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesReadlinkOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesReadlinkOptions);
l_Lasm_JS_Node_instToJSFsPromisesRealpathOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesRealpathOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesRealpathOptions);
l_Lasm_JS_Node_instToJSFsPromisesRmdirOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesRmdirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesRmdirOptions);
l_Lasm_JS_Node_instToJSFsPromisesRmOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesRmOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesRmOptions);
l_Lasm_JS_Node_instToJSFsPromisesStatOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesStatOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesStatOptions);
l_Lasm_JS_Node_instToJSFsPromisesStatfsOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesStatfsOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesStatfsOptions);
l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny = _init_l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny();
lean_mark_persistent(l_Lasm_JS_Node_instToJSDOMStringOrObjectOrJSFunctionOrSequenceOfAny);
l_Lasm_JS_Node_instToJSFsPromisesWatchOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesWatchOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesWatchOptions);
l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptions = _init_l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsPromisesWriteFileOptions);
l_Lasm_JS_Node_instToJSFsAppendFileOptions = _init_l_Lasm_JS_Node_instToJSFsAppendFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsAppendFileOptions);
l_Lasm_JS_Node_instToJSFsCpOptions = _init_l_Lasm_JS_Node_instToJSFsCpOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsCpOptions);
l_Lasm_JS_Node_instToJSFsCreateReadStreamOptions = _init_l_Lasm_JS_Node_instToJSFsCreateReadStreamOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsCreateReadStreamOptions);
l_Lasm_JS_Node_instToJSFsCreateWriteStreamOptions = _init_l_Lasm_JS_Node_instToJSFsCreateWriteStreamOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsCreateWriteStreamOptions);
l_Lasm_JS_Node_instToJSFsFstatOptions = _init_l_Lasm_JS_Node_instToJSFsFstatOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsFstatOptions);
l_Lasm_JS_Node_instToJSFsGlobOptions = _init_l_Lasm_JS_Node_instToJSFsGlobOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsGlobOptions);
l_Lasm_JS_Node_instToJSFsLstatOptions = _init_l_Lasm_JS_Node_instToJSFsLstatOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsLstatOptions);
l_Lasm_JS_Node_instToJSFsMkdirOptions = _init_l_Lasm_JS_Node_instToJSFsMkdirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsMkdirOptions);
l_Lasm_JS_Node_instToJSFsMkdtempOptions = _init_l_Lasm_JS_Node_instToJSFsMkdtempOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsMkdtempOptions);
l_Lasm_JS_Node_instToJSFsOpenAsBlobOptions = _init_l_Lasm_JS_Node_instToJSFsOpenAsBlobOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsOpenAsBlobOptions);
l_Lasm_JS_Node_instToJSFsOpendirOptions = _init_l_Lasm_JS_Node_instToJSFsOpendirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsOpendirOptions);
l_Lasm_JS_Node_instToJSFsReadOptions = _init_l_Lasm_JS_Node_instToJSFsReadOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsReadOptions);
l_Lasm_JS_Node_instToJSFsReadOptions2 = _init_l_Lasm_JS_Node_instToJSFsReadOptions2();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsReadOptions2);
l_Lasm_JS_Node_instToJSFsReaddirOptions = _init_l_Lasm_JS_Node_instToJSFsReaddirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsReaddirOptions);
l_Lasm_JS_Node_instToJSFsReadFileOptions = _init_l_Lasm_JS_Node_instToJSFsReadFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsReadFileOptions);
l_Lasm_JS_Node_instToJSFsReadlinkOptions = _init_l_Lasm_JS_Node_instToJSFsReadlinkOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsReadlinkOptions);
l_Lasm_JS_Node_instToJSFsRealpathOptions = _init_l_Lasm_JS_Node_instToJSFsRealpathOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsRealpathOptions);
l_Lasm_JS_Node_instToJSFsRmdirOptions = _init_l_Lasm_JS_Node_instToJSFsRmdirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsRmdirOptions);
l_Lasm_JS_Node_instToJSFsRmOptions = _init_l_Lasm_JS_Node_instToJSFsRmOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsRmOptions);
l_Lasm_JS_Node_instToJSFsStatOptions = _init_l_Lasm_JS_Node_instToJSFsStatOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsStatOptions);
l_Lasm_JS_Node_instToJSFsStatfsOptions = _init_l_Lasm_JS_Node_instToJSFsStatfsOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsStatfsOptions);
l_Lasm_JS_Node_instToJSFsWatchOptions = _init_l_Lasm_JS_Node_instToJSFsWatchOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsWatchOptions);
l_Lasm_JS_Node_instToJSFsWatchFileOptions = _init_l_Lasm_JS_Node_instToJSFsWatchFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsWatchFileOptions);
l_Lasm_JS_Node_instToJSFsWriteOptions = _init_l_Lasm_JS_Node_instToJSFsWriteOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsWriteOptions);
l_Lasm_JS_Node_instToJSFsWriteFileOptions = _init_l_Lasm_JS_Node_instToJSFsWriteFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsWriteFileOptions);
l_Lasm_JS_Node_instToJSFsAppendFileSyncOptions = _init_l_Lasm_JS_Node_instToJSFsAppendFileSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsAppendFileSyncOptions);
l_Lasm_JS_Node_instToJSFsCpSyncOptions = _init_l_Lasm_JS_Node_instToJSFsCpSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsCpSyncOptions);
l_Lasm_JS_Node_instToJSFsFstatSyncOptions = _init_l_Lasm_JS_Node_instToJSFsFstatSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsFstatSyncOptions);
l_Lasm_JS_Node_instToJSFsGlobSyncOptions = _init_l_Lasm_JS_Node_instToJSFsGlobSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsGlobSyncOptions);
l_Lasm_JS_Node_instToJSFsLstatSyncOptions = _init_l_Lasm_JS_Node_instToJSFsLstatSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsLstatSyncOptions);
l_Lasm_JS_Node_instToJSFsMkdirSyncOptions = _init_l_Lasm_JS_Node_instToJSFsMkdirSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsMkdirSyncOptions);
l_Lasm_JS_Node_instToJSFsMkdtempSyncOptions = _init_l_Lasm_JS_Node_instToJSFsMkdtempSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsMkdtempSyncOptions);
l_Lasm_JS_Node_instToJSFsMkdtempDisposableSyncOptions = _init_l_Lasm_JS_Node_instToJSFsMkdtempDisposableSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsMkdtempDisposableSyncOptions);
l_Lasm_JS_Node_instToJSFsOpendirSyncOptions = _init_l_Lasm_JS_Node_instToJSFsOpendirSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsOpendirSyncOptions);
l_Lasm_JS_Node_instToJSFsReaddirSyncOptions = _init_l_Lasm_JS_Node_instToJSFsReaddirSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsReaddirSyncOptions);
l_Lasm_JS_Node_instToJSFsReadFileSyncOptions = _init_l_Lasm_JS_Node_instToJSFsReadFileSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsReadFileSyncOptions);
l_Lasm_JS_Node_instToJSFsReadlinkSyncOptions = _init_l_Lasm_JS_Node_instToJSFsReadlinkSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsReadlinkSyncOptions);
l_Lasm_JS_Node_instToJSFsReadSyncOptions = _init_l_Lasm_JS_Node_instToJSFsReadSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsReadSyncOptions);
l_Lasm_JS_Node_instToJSFsRealpathSyncOptions = _init_l_Lasm_JS_Node_instToJSFsRealpathSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsRealpathSyncOptions);
l_Lasm_JS_Node_instToJSFsRmdirSyncOptions = _init_l_Lasm_JS_Node_instToJSFsRmdirSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsRmdirSyncOptions);
l_Lasm_JS_Node_instToJSFsRmSyncOptions = _init_l_Lasm_JS_Node_instToJSFsRmSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsRmSyncOptions);
l_Lasm_JS_Node_instToJSFsStatSyncOptions = _init_l_Lasm_JS_Node_instToJSFsStatSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsStatSyncOptions);
l_Lasm_JS_Node_instToJSFsStatfsSyncOptions = _init_l_Lasm_JS_Node_instToJSFsStatfsSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsStatfsSyncOptions);
l_Lasm_JS_Node_instToJSFsWriteFileSyncOptions = _init_l_Lasm_JS_Node_instToJSFsWriteFileSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsWriteFileSyncOptions);
l_Lasm_JS_Node_instToJSFsWriteSyncOptions = _init_l_Lasm_JS_Node_instToJSFsWriteSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsWriteSyncOptions);
l_Lasm_JS_Node_instToJSFsOpenAsBlobSyncOptions = _init_l_Lasm_JS_Node_instToJSFsOpenAsBlobSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsOpenAsBlobSyncOptions);
l_Lasm_JS_Node_instToJSFsRealpathNativeOptions = _init_l_Lasm_JS_Node_instToJSFsRealpathNativeOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsRealpathNativeOptions);
l_Lasm_JS_Node_instToJSFsRealpathSyncNativeOptions = _init_l_Lasm_JS_Node_instToJSFsRealpathSyncNativeOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFsRealpathSyncNativeOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
