// Lean compiler output
// Module: Lasm.JS.Node.Fs
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Streams public import Lasm.JS.Web.Types.Url public import Lasm.JS.Web.Webidl public import Lasm.JS.Node.Buffer public import Lasm.JS.Node.Process
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
lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSInt;
extern lean_object* l_Lasm_JS_instFromJSByteArray;
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSJSFunction___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSByteArray___lam__0(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStats___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStats_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStats___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStats = (const lean_object*)&l_Lasm_JS_Node_instToJSStats_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStats___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStats___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStats;
static const lean_closure_object l_Lasm_JS_Node_instToJSDirent_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStats___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDirent = (const lean_object*)&l_Lasm_JS_Node_instToJSDirent_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDirent;
static const lean_closure_object l_Lasm_JS_Node_instToJSFileHandle_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStats___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSFileHandle = (const lean_object*)&l_Lasm_JS_Node_instToJSFileHandle_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSFileHandle;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_bigint_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_bigint_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDoubleOrBigint___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDoubleOrBigint;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadOptions2___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadOptions2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadableWebStreamOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadableWebStreamOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionUint8ArrayOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionUint8ArrayOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionUint8ArrayOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionUint8ArrayOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionUint8ArrayOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSUint8ArrayOrDOMString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSUint8ArrayOrDOMString;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStatOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStatOptions;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteStringResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteStringResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteStringResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptions__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptions__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString__1___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString__1___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString__1 = (const lean_object*)&l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString__1___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString__1 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCpOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCpOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLstatOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLstatOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSMkdirOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSMkdirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_mkdirOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_mkdirOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSMkdirOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSMkdirOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSMkdirOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSMkdirOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSMkdirOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeMkdirOptionsMkdirOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeMkdirOptionsMkdirOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeMkdirOptionsMkdirOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeMkdirOptionsMkdirOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeMkdirOptionsMkdirOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntMkdirOptionsOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntMkdirOptionsOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntMkdirOptionsOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntMkdirOptionsOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntMkdirOptionsOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSMkdtempOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSMkdtempOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_mkdtempOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_mkdtempOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrMkdtempOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrMkdtempOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrMkdtempOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrMkdtempOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrMkdtempOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrMkdtempOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrMkdtempOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrMkdtempOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrMkdtempOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrMkdtempOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeMkdtempOptionsDOMStringOrMkdtempOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeMkdtempOptionsDOMStringOrMkdtempOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeMkdtempOptionsDOMStringOrMkdtempOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeMkdtempOptionsDOMStringOrMkdtempOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeMkdtempOptionsDOMStringOrMkdtempOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReaddirOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReaddirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_readdirOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_readdirOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrReaddirOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrReaddirOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrReaddirOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrReaddirOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrReaddirOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrReaddirOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrReaddirOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrReaddirOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrReaddirOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrReaddirOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReaddirOptionsDOMStringOrReaddirOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeReaddirOptionsDOMStringOrReaddirOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeReaddirOptionsDOMStringOrReaddirOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReaddirOptionsDOMStringOrReaddirOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeReaddirOptionsDOMStringOrReaddirOptions_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8ArrayOrDirent___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8ArrayOrDirent;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptions__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptions__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString__1___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString__1___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString__1 = (const lean_object*)&l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString__1___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString__1 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinkOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_readlinkOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_readlinkOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrReadlinkOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrReadlinkOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrReadlinkOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrReadlinkOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrReadlinkOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrReadlinkOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrReadlinkOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrReadlinkOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrReadlinkOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrReadlinkOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadlinkOptionsDOMStringOrReadlinkOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeReadlinkOptionsDOMStringOrReadlinkOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeReadlinkOptionsDOMStringOrReadlinkOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadlinkOptionsDOMStringOrReadlinkOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeReadlinkOptionsDOMStringOrReadlinkOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSRealpathOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_realpathOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_realpathOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrRealpathOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrRealpathOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrRealpathOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrRealpathOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrRealpathOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrRealpathOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrRealpathOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrRealpathOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrRealpathOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrRealpathOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeRealpathOptionsDOMStringOrRealpathOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeRealpathOptionsDOMStringOrRealpathOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeRealpathOptionsDOMStringOrRealpathOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeRealpathOptionsDOMStringOrRealpathOptions = (const lean_object*)&l_Lasm_JS_Node_instCoeRealpathOptionsDOMStringOrRealpathOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSRmdirOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSRmdirOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSRmOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSRmOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStatOptions__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStatOptions__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptions__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptions__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString__1___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString__1___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString__1 = (const lean_object*)&l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString__1___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString__1 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStats___lam__0(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStats___lam__0(lean_object* v_x_5_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStats___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSStats___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStats(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStats___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Stats", 21, 21);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDirent(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStats___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.Dirent", 22, 22);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSFileHandle(void){
_start:
{
lean_object* v___f_22_; lean_object* v___x_23_; uint8_t v___x_24_; lean_object* v___x_25_; 
v___f_22_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStats___lam__0___boxed), 1, 0);
v___x_23_ = lean_mk_string_unchecked("Lasm.JS.Node.FileHandle", 23, 23);
v___x_24_ = 0;
v___x_25_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_25_, 0, v___f_22_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set_uint8(v___x_25_, sizeof(void*)*2, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorIdx(lean_object* v_x_26_){
_start:
{
if (lean_obj_tag(v_x_26_) == 0)
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(0u);
return v___x_27_;
}
else
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(1u);
return v___x_28_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorIdx___boxed(lean_object* v_x_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lasm_JS_Node_DoubleOrBigint_ctorIdx(v_x_29_);
lean_dec_ref(v_x_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(lean_object* v_t_31_, lean_object* v_k_32_){
_start:
{
if (lean_obj_tag(v_t_31_) == 0)
{
double v_value_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_value_33_ = lean_ctor_get_float(v_t_31_, 0);
lean_dec_ref_known(v_t_31_, 0);
v___x_34_ = lean_box_float(v_value_33_);
v___x_35_ = lean_apply_1(v_k_32_, v___x_34_);
return v___x_35_;
}
else
{
lean_object* v_value_36_; lean_object* v___x_37_; 
v_value_36_ = lean_ctor_get(v_t_31_, 0);
lean_inc(v_value_36_);
lean_dec_ref_known(v_t_31_, 1);
v___x_37_ = lean_apply_1(v_k_32_, v_value_36_);
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim(lean_object* v_motive_38_, lean_object* v_ctorIdx_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_k_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_40_, v_k_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_ctorElim___boxed(lean_object* v_motive_44_, lean_object* v_ctorIdx_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_k_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim(v_motive_44_, v_ctorIdx_45_, v_t_46_, v_h_47_, v_k_48_);
lean_dec(v_ctorIdx_45_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_double_elim___redArg(lean_object* v_t_50_, lean_object* v_double_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_50_, v_double_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_double_elim(lean_object* v_motive_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_double_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_54_, v_double_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_bigint_elim___redArg(lean_object* v_t_58_, lean_object* v_bigint_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_58_, v_bigint_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrBigint_bigint_elim(lean_object* v_motive_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_bigint_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lasm_JS_Node_DoubleOrBigint_ctorElim___redArg(v_t_62_, v_bigint_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDoubleOrBigint___lam__0(lean_object* v_x_66_){
_start:
{
switch(lean_obj_tag(v_x_66_))
{
case 3:
{
double v_n_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_75_; 
v_n_67_ = lean_ctor_get_float(v_x_66_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v_x_66_);
if (v_isSharedCheck_75_ == 0)
{
v___x_69_ = v_x_66_;
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
else
{
lean_dec(v_x_66_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_72_; 
if (v_isShared_70_ == 0)
{
lean_ctor_set_tag(v___x_69_, 0);
v___x_72_ = v___x_69_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_74_, 0, v_n_67_);
v___x_72_ = v_reuseFailAlloc_74_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
lean_object* v___x_73_; 
v___x_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
return v___x_73_;
}
}
}
case 5:
{
lean_object* v_i_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_84_; 
v_i_76_ = lean_ctor_get(v_x_66_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v_x_66_);
if (v_isSharedCheck_84_ == 0)
{
v___x_78_ = v_x_66_;
v_isShared_79_ = v_isSharedCheck_84_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_i_76_);
lean_dec(v_x_66_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_84_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 1);
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_i_76_);
v___x_81_ = v_reuseFailAlloc_83_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
}
default: 
{
lean_object* v___x_85_; lean_object* v___x_86_; 
lean_dec(v_x_66_);
v___x_85_ = lean_mk_string_unchecked("", 0, 0);
v___x_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
return v___x_86_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDoubleOrBigint(void){
_start:
{
lean_object* v___f_87_; lean_object* v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; 
v___f_87_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSDoubleOrBigint___lam__0), 1, 0);
v___x_88_ = lean_mk_string_unchecked("Lasm.JS.Node.DoubleOrBigint", 27, 27);
v___x_89_ = 0;
v___x_90_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_90_, 0, v___f_87_);
lean_ctor_set(v___x_90_, 1, v___x_88_);
lean_ctor_set_uint8(v___x_90_, sizeof(void*)*2, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorIdx(lean_object* v_x_91_){
_start:
{
switch(lean_obj_tag(v_x_91_))
{
case 0:
{
lean_object* v___x_92_; 
v___x_92_ = lean_unsigned_to_nat(0u);
return v___x_92_;
}
case 1:
{
lean_object* v___x_93_; 
v___x_93_ = lean_unsigned_to_nat(1u);
return v___x_93_;
}
default: 
{
lean_object* v___x_94_; 
v___x_94_ = lean_unsigned_to_nat(2u);
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorIdx___boxed(lean_object* v_x_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorIdx(v_x_95_);
lean_dec_ref(v_x_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(lean_object* v_t_97_, lean_object* v_k_98_){
_start:
{
if (lean_obj_tag(v_t_97_) == 2)
{
lean_object* v_value_99_; lean_object* v___x_100_; 
v_value_99_ = lean_ctor_get(v_t_97_, 0);
lean_inc(v_value_99_);
lean_dec_ref_known(v_t_97_, 1);
v___x_100_ = lean_apply_1(v_k_98_, v_value_99_);
return v___x_100_;
}
else
{
lean_object* v_value_101_; lean_object* v___x_102_; 
v_value_101_ = lean_ctor_get(v_t_97_, 0);
lean_inc_ref(v_value_101_);
lean_dec_ref(v_t_97_);
v___x_102_ = lean_apply_1(v_k_98_, v_value_101_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim(lean_object* v_motive_103_, lean_object* v_ctorIdx_104_, lean_object* v_t_105_, lean_object* v_h_106_, lean_object* v_k_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_105_, v_k_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___boxed(lean_object* v_motive_109_, lean_object* v_ctorIdx_110_, lean_object* v_t_111_, lean_object* v_h_112_, lean_object* v_k_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim(v_motive_109_, v_ctorIdx_110_, v_t_111_, v_h_112_, v_k_113_);
lean_dec(v_ctorIdx_110_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_domString_elim___redArg(lean_object* v_t_115_, lean_object* v_domString_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_115_, v_domString_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_domString_elim(lean_object* v_motive_118_, lean_object* v_t_119_, lean_object* v_h_120_, lean_object* v_domString_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_119_, v_domString_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_uint8Array_elim___redArg(lean_object* v_t_123_, lean_object* v_uint8Array_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_123_, v_uint8Array_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_uint8Array_elim(lean_object* v_motive_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_uint8Array_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_127_, v_uint8Array_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_object_elim___redArg(lean_object* v_t_131_, lean_object* v_object_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_131_, v_object_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_object_elim(lean_object* v_motive_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_object_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrObject_ctorElim___redArg(v_t_135_, v_object_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrObject___lam__0(lean_object* v_x_139_){
_start:
{
switch(lean_obj_tag(v_x_139_))
{
case 0:
{
lean_object* v_value_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
v_value_140_ = lean_ctor_get(v_x_139_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v_x_139_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_value_140_);
lean_dec(v_x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
lean_ctor_set_tag(v___x_142_, 4);
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_value_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
case 1:
{
lean_object* v_value_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
v_value_148_ = lean_ctor_get(v_x_139_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v_x_139_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_value_148_);
lean_dec(v_x_139_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
lean_ctor_set_tag(v___x_150_, 6);
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_value_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
default: 
{
lean_object* v_value_156_; 
v_value_156_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_value_156_);
lean_dec_ref_known(v_x_139_, 1);
return v_value_156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrObject___lam__0(lean_object* v_value_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_159_, 0, v_value_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrObject___lam__0(lean_object* v_value_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_162_, 0, v_value_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptions___lam__0(lean_object* v___f_164_, lean_object* v___f_165_, lean_object* v_d_166_){
_start:
{
lean_object* v_encoding_167_; lean_object* v_signal_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_185_; 
v_encoding_167_ = lean_ctor_get(v_d_166_, 0);
v_signal_168_ = lean_ctor_get(v_d_166_, 1);
v_isSharedCheck_185_ = !lean_is_exclusive(v_d_166_);
if (v_isSharedCheck_185_ == 0)
{
v___x_170_ = v_d_166_;
v_isShared_171_ = v_isSharedCheck_185_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_signal_168_);
lean_inc(v_encoding_167_);
lean_dec(v_d_166_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_185_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_175_; 
v___x_172_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_173_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_164_, v_encoding_167_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 1, v___x_173_);
lean_ctor_set(v___x_170_, 0, v___x_172_);
v___x_175_ = v___x_170_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_172_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v___x_173_);
v___x_175_ = v_reuseFailAlloc_184_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_176_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_177_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_165_, v_signal_168_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = lean_unsigned_to_nat(2u);
v___x_180_ = lean_mk_empty_array_with_capacity(v___x_179_);
v___x_181_ = lean_array_push(v___x_180_, v___x_175_);
v___x_182_ = lean_array_push(v___x_181_, v___x_178_);
v___x_183_ = l_Lasm_JS_Web_Internal_fields(v___x_182_);
lean_dec_ref(v___x_182_);
return v___x_183_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSAppendFileOptions(void){
_start:
{
lean_object* v___f_186_; lean_object* v___f_187_; lean_object* v___f_188_; 
v___f_186_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_187_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_188_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSAppendFileOptions___lam__0), 3, 2);
lean_closure_set(v___f_188_, 0, v___f_186_);
lean_closure_set(v___f_188_, 1, v___f_187_);
return v___f_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx(lean_object* v_x_189_){
_start:
{
if (lean_obj_tag(v_x_189_) == 0)
{
lean_object* v___x_190_; 
v___x_190_ = lean_unsigned_to_nat(0u);
return v___x_190_;
}
else
{
lean_object* v___x_191_; 
v___x_191_ = lean_unsigned_to_nat(1u);
return v___x_191_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorIdx(v_x_192_);
lean_dec_ref(v_x_192_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_194_, lean_object* v_k_195_){
_start:
{
lean_object* v_value_196_; lean_object* v___x_197_; 
v_value_196_ = lean_ctor_get(v_t_194_, 0);
lean_inc_ref(v_value_196_);
lean_dec_ref(v_t_194_);
v___x_197_ = lean_apply_1(v_k_195_, v_value_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim(lean_object* v_motive_198_, lean_object* v_ctorIdx_199_, lean_object* v_t_200_, lean_object* v_h_201_, lean_object* v_k_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_200_, v_k_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_204_, lean_object* v_ctorIdx_205_, lean_object* v_t_206_, lean_object* v_h_207_, lean_object* v_k_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim(v_motive_204_, v_ctorIdx_205_, v_t_206_, v_h_207_, v_k_208_);
lean_dec(v_ctorIdx_205_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object* v_t_210_, lean_object* v_appendFileOptions_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_210_, v_appendFileOptions_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object* v_motive_213_, lean_object* v_t_214_, lean_object* v_h_215_, lean_object* v_appendFileOptions_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_214_, v_appendFileOptions_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_218_, lean_object* v_domString_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_218_, v_domString_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_domString_elim(lean_object* v_motive_221_, lean_object* v_t_222_, lean_object* v_h_223_, lean_object* v_domString_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = l_Lasm_JS_Node_FileHandle_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_222_, v_domString_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString___lam__0(lean_object* v_x_226_){
_start:
{
if (lean_obj_tag(v_x_226_) == 0)
{
lean_object* v_value_227_; lean_object* v_encoding_228_; lean_object* v_signal_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_248_; 
v_value_227_ = lean_ctor_get(v_x_226_, 0);
lean_inc_ref(v_value_227_);
lean_dec_ref_known(v_x_226_, 1);
v_encoding_228_ = lean_ctor_get(v_value_227_, 0);
v_signal_229_ = lean_ctor_get(v_value_227_, 1);
v_isSharedCheck_248_ = !lean_is_exclusive(v_value_227_);
if (v_isSharedCheck_248_ == 0)
{
v___x_231_ = v_value_227_;
v_isShared_232_ = v_isSharedCheck_248_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_signal_229_);
lean_inc(v_encoding_228_);
lean_dec(v_value_227_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_248_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___f_233_; lean_object* v___f_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
v___f_233_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_234_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_235_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_236_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_233_, v_encoding_228_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v___x_236_);
lean_ctor_set(v___x_231_, 0, v___x_235_);
v___x_238_ = v___x_231_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_235_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v___x_236_);
v___x_238_ = v_reuseFailAlloc_247_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_239_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_240_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_234_, v_signal_229_);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_unsigned_to_nat(2u);
v___x_243_ = lean_mk_empty_array_with_capacity(v___x_242_);
v___x_244_ = lean_array_push(v___x_243_, v___x_238_);
v___x_245_ = lean_array_push(v___x_244_, v___x_241_);
v___x_246_ = l_Lasm_JS_Web_Internal_fields(v___x_245_);
lean_dec_ref(v___x_245_);
return v___x_246_;
}
}
}
else
{
lean_object* v_value_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
v_value_249_ = lean_ctor_get(v_x_226_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v_x_226_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v_x_226_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_value_249_);
lean_dec(v_x_226_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
lean_ctor_set_tag(v___x_251_, 4);
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_value_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString___lam__0(lean_object* v_value_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v_value_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString___lam__0(lean_object* v_value_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_262_, 0, v_value_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorIdx(lean_object* v_x_264_){
_start:
{
if (lean_obj_tag(v_x_264_) == 0)
{
lean_object* v___x_265_; 
v___x_265_ = lean_unsigned_to_nat(0u);
return v___x_265_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_unsigned_to_nat(1u);
return v___x_266_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorIdx___boxed(lean_object* v_x_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lasm_JS_Node_LongLongOrBigint_ctorIdx(v_x_267_);
lean_dec_ref(v_x_267_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(lean_object* v_t_269_, lean_object* v_k_270_){
_start:
{
lean_object* v_value_271_; lean_object* v___x_272_; 
v_value_271_ = lean_ctor_get(v_t_269_, 0);
lean_inc(v_value_271_);
lean_dec_ref(v_t_269_);
v___x_272_ = lean_apply_1(v_k_270_, v_value_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorElim(lean_object* v_motive_273_, lean_object* v_ctorIdx_274_, lean_object* v_t_275_, lean_object* v_h_276_, lean_object* v_k_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_275_, v_k_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_ctorElim___boxed(lean_object* v_motive_279_, lean_object* v_ctorIdx_280_, lean_object* v_t_281_, lean_object* v_h_282_, lean_object* v_k_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim(v_motive_279_, v_ctorIdx_280_, v_t_281_, v_h_282_, v_k_283_);
lean_dec(v_ctorIdx_280_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_longLong_elim___redArg(lean_object* v_t_285_, lean_object* v_longLong_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_285_, v_longLong_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_longLong_elim(lean_object* v_motive_288_, lean_object* v_t_289_, lean_object* v_h_290_, lean_object* v_longLong_291_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_289_, v_longLong_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_bigint_elim___redArg(lean_object* v_t_293_, lean_object* v_bigint_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_293_, v_bigint_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrBigint_bigint_elim(lean_object* v_motive_296_, lean_object* v_t_297_, lean_object* v_h_298_, lean_object* v_bigint_299_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = l_Lasm_JS_Node_LongLongOrBigint_ctorElim___redArg(v_t_297_, v_bigint_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0(lean_object* v_x_301_){
_start:
{
lean_object* v_v_303_; lean_object* v_value_310_; 
v_value_310_ = lean_ctor_get(v_x_301_, 0);
lean_inc(v_value_310_);
lean_dec_ref(v_x_301_);
v_v_303_ = v_value_310_;
goto v___jp_302_;
v___jp_302_:
{
lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_304_ = lean_nat_abs(v_v_303_);
v___x_305_ = lean_cstr_to_nat("9007199254740991");
v___x_306_ = lean_nat_dec_le(v___x_304_, v___x_305_);
lean_dec(v___x_304_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; 
v___x_307_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_307_, 0, v_v_303_);
return v___x_307_;
}
else
{
double v___x_308_; lean_object* v___x_309_; 
v___x_308_ = l_Float_ofInt(v_v_303_);
lean_dec(v_v_303_);
v___x_309_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_309_, 0, v___x_308_);
return v___x_309_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadResult___lam__0(lean_object* v___x_312_, lean_object* v___x_313_, lean_object* v_d_314_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_mk_string_unchecked("bytesRead", 9, 9);
v___x_316_ = l_Lasm_JS_readField___redArg(v___x_312_, v_d_314_, v___x_315_);
lean_dec_ref(v___x_315_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
lean_dec_ref(v___x_313_);
v_a_317_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_316_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_316_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v_a_325_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_a_325_);
lean_dec_ref_known(v___x_316_, 1);
v___x_326_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_327_ = l_Lasm_JS_readField___redArg(v___x_313_, v_d_314_, v___x_326_);
lean_dec_ref(v___x_326_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec(v_a_325_);
v_a_328_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_327_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_327_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_344_; 
v_a_336_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_344_ == 0)
{
v___x_338_ = v___x_327_;
v_isShared_339_ = v_isSharedCheck_344_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_327_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_344_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_340_, 0, v_a_325_);
lean_ctor_set(v___x_340_, 1, v_a_336_);
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 0, v___x_340_);
v___x_342_ = v___x_338_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadResult___lam__0___boxed(lean_object* v___x_345_, lean_object* v___x_346_, lean_object* v_d_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lasm_JS_Node_instFromJSReadResult___lam__0(v___x_345_, v___x_346_, v_d_347_);
lean_dec(v_d_347_);
return v_res_348_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSReadResult(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___f_351_; lean_object* v___x_352_; uint8_t v___x_353_; lean_object* v___x_354_; 
v___x_349_ = l_Lasm_JS_instFromJSInt;
v___x_350_ = l_Lasm_JS_instFromJSByteArray;
v___f_351_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSReadResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_351_, 0, v___x_349_);
lean_closure_set(v___f_351_, 1, v___x_350_);
v___x_352_ = lean_mk_string_unchecked("Lasm.JS.Node.FileHandle.ReadResult", 34, 34);
v___x_353_ = 0;
v___x_354_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_354_, 0, v___f_351_);
lean_ctor_set(v___x_354_, 1, v___x_352_);
lean_ctor_set_uint8(v___x_354_, sizeof(void*)*2, v___x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadOptions___lam__0(lean_object* v___f_355_, lean_object* v___f_356_, lean_object* v___f_357_, lean_object* v_d_358_){
_start:
{
lean_object* v_buffer_359_; lean_object* v_offset_360_; lean_object* v_length_361_; lean_object* v_position_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v_buffer_359_ = lean_ctor_get(v_d_358_, 0);
lean_inc(v_buffer_359_);
v_offset_360_ = lean_ctor_get(v_d_358_, 1);
lean_inc(v_offset_360_);
v_length_361_ = lean_ctor_get(v_d_358_, 2);
lean_inc(v_length_361_);
v_position_362_ = lean_ctor_get(v_d_358_, 3);
lean_inc(v_position_362_);
lean_dec_ref(v_d_358_);
v___x_363_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_364_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_355_, v_buffer_359_);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_363_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref(v___f_356_);
v___x_367_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_356_, v_offset_360_);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = lean_mk_string_unchecked("length", 6, 6);
v___x_370_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_356_, v_length_361_);
v___x_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
v___x_372_ = lean_mk_string_unchecked("position", 8, 8);
v___x_373_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_357_, v_position_362_);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = lean_unsigned_to_nat(4u);
v___x_376_ = lean_mk_empty_array_with_capacity(v___x_375_);
v___x_377_ = lean_array_push(v___x_376_, v___x_365_);
v___x_378_ = lean_array_push(v___x_377_, v___x_368_);
v___x_379_ = lean_array_push(v___x_378_, v___x_371_);
v___x_380_ = lean_array_push(v___x_379_, v___x_374_);
v___x_381_ = l_Lasm_JS_Web_Internal_fields(v___x_380_);
lean_dec_ref(v___x_380_);
return v___x_381_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadOptions(void){
_start:
{
lean_object* v___f_382_; lean_object* v___f_383_; lean_object* v___f_384_; lean_object* v___f_385_; 
v___f_382_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSByteArray___lam__0), 1, 0);
v___f_383_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_384_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0), 1, 0);
v___f_385_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadOptions___lam__0), 4, 3);
lean_closure_set(v___f_385_, 0, v___f_382_);
lean_closure_set(v___f_385_, 1, v___f_383_);
lean_closure_set(v___f_385_, 2, v___f_384_);
return v___f_385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadOptions2___lam__0(lean_object* v___f_386_, lean_object* v___f_387_, lean_object* v_d_388_){
_start:
{
lean_object* v_offset_389_; lean_object* v_length_390_; lean_object* v_position_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v_offset_389_ = lean_ctor_get(v_d_388_, 0);
lean_inc(v_offset_389_);
v_length_390_ = lean_ctor_get(v_d_388_, 1);
lean_inc(v_length_390_);
v_position_391_ = lean_ctor_get(v_d_388_, 2);
lean_inc(v_position_391_);
lean_dec_ref(v_d_388_);
v___x_392_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref(v___f_386_);
v___x_393_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_386_, v_offset_389_);
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_392_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = lean_mk_string_unchecked("length", 6, 6);
v___x_396_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_386_, v_length_390_);
v___x_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = lean_mk_string_unchecked("position", 8, 8);
v___x_399_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_387_, v_position_391_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = lean_unsigned_to_nat(3u);
v___x_402_ = lean_mk_empty_array_with_capacity(v___x_401_);
v___x_403_ = lean_array_push(v___x_402_, v___x_394_);
v___x_404_ = lean_array_push(v___x_403_, v___x_397_);
v___x_405_ = lean_array_push(v___x_404_, v___x_400_);
v___x_406_ = l_Lasm_JS_Web_Internal_fields(v___x_405_);
lean_dec_ref(v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadOptions2(void){
_start:
{
lean_object* v___f_407_; lean_object* v___f_408_; lean_object* v___f_409_; 
v___f_407_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_408_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLongLongOrBigint___lam__0), 1, 0);
v___f_409_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadOptions2___lam__0), 3, 2);
lean_closure_set(v___f_409_, 0, v___f_407_);
lean_closure_set(v___f_409_, 1, v___f_408_);
return v___f_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadableWebStreamOptions___lam__0(lean_object* v___f_410_, lean_object* v_d_411_){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_412_ = lean_mk_string_unchecked("autoClose", 9, 9);
v___x_413_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_410_, v_d_411_);
v___x_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = lean_unsigned_to_nat(1u);
v___x_416_ = lean_mk_empty_array_with_capacity(v___x_415_);
v___x_417_ = lean_array_push(v___x_416_, v___x_414_);
v___x_418_ = l_Lasm_JS_Web_Internal_fields(v___x_417_);
lean_dec_ref(v___x_417_);
return v___x_418_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadableWebStreamOptions(void){
_start:
{
lean_object* v___f_419_; lean_object* v___f_420_; 
v___f_419_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_420_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadableWebStreamOptions___lam__0), 2, 1);
lean_closure_set(v___f_420_, 0, v___f_419_);
return v___f_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorIdx(lean_object* v_x_421_){
_start:
{
if (lean_obj_tag(v_x_421_) == 0)
{
lean_object* v___x_422_; 
v___x_422_ = lean_unsigned_to_nat(0u);
return v___x_422_;
}
else
{
lean_object* v___x_423_; 
v___x_423_ = lean_unsigned_to_nat(1u);
return v___x_423_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorIdx___boxed(lean_object* v_x_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorIdx(v_x_424_);
lean_dec_ref(v_x_424_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim___redArg(lean_object* v_t_426_, lean_object* v_k_427_){
_start:
{
if (lean_obj_tag(v_t_426_) == 0)
{
lean_object* v_value_428_; lean_object* v___x_429_; 
v_value_428_ = lean_ctor_get(v_t_426_, 0);
lean_inc_ref(v_value_428_);
lean_dec_ref_known(v_t_426_, 1);
v___x_429_ = lean_apply_1(v_k_427_, v_value_428_);
return v___x_429_;
}
else
{
lean_object* v_value_430_; lean_object* v___x_431_; 
v_value_430_ = lean_ctor_get(v_t_426_, 0);
lean_inc(v_value_430_);
lean_dec_ref_known(v_t_426_, 1);
v___x_431_ = lean_apply_1(v_k_427_, v_value_430_);
return v___x_431_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim(lean_object* v_motive_432_, lean_object* v_ctorIdx_433_, lean_object* v_t_434_, lean_object* v_h_435_, lean_object* v_k_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim___redArg(v_t_434_, v_k_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim___boxed(lean_object* v_motive_438_, lean_object* v_ctorIdx_439_, lean_object* v_t_440_, lean_object* v_h_441_, lean_object* v_k_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim(v_motive_438_, v_ctorIdx_439_, v_t_440_, v_h_441_, v_k_442_);
lean_dec(v_ctorIdx_439_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_uint8Array_elim___redArg(lean_object* v_t_444_, lean_object* v_uint8Array_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim___redArg(v_t_444_, v_uint8Array_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_uint8Array_elim(lean_object* v_motive_447_, lean_object* v_t_448_, lean_object* v_h_449_, lean_object* v_uint8Array_450_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim___redArg(v_t_448_, v_uint8Array_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_jsFunction_elim___redArg(lean_object* v_t_452_, lean_object* v_jsFunction_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim___redArg(v_t_452_, v_jsFunction_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrJSFunction_jsFunction_elim(lean_object* v_motive_455_, lean_object* v_t_456_, lean_object* v_h_457_, lean_object* v_jsFunction_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lasm_JS_Node_Uint8ArrayOrJSFunction_ctorElim___redArg(v_t_456_, v_jsFunction_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0(lean_object* v_x_460_){
_start:
{
if (lean_obj_tag(v_x_460_) == 0)
{
lean_object* v_value_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
v_value_461_ = lean_ctor_get(v_x_460_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v_x_460_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v_x_460_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_value_461_);
lean_dec(v_x_460_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
lean_ctor_set_tag(v___x_463_, 6);
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_value_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
else
{
lean_object* v_value_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_value_469_ = lean_ctor_get(v_x_460_, 0);
lean_inc(v_value_469_);
lean_dec_ref_known(v_x_460_, 1);
v___x_470_ = lean_mk_string_unchecked("", 0, 0);
v___x_471_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_471_, 0, v_value_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
return v___x_471_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrJSFunction___lam__0(lean_object* v_value_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_474_, 0, v_value_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionUint8ArrayOrJSFunction___lam__0(lean_object* v_value_476_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_477_, 0, v_value_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptions___lam__0(lean_object* v___f_479_, lean_object* v___f_480_, lean_object* v___f_481_, lean_object* v_d_482_){
_start:
{
lean_object* v_encoding_483_; lean_object* v_signal_484_; lean_object* v_buffer_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v_encoding_483_ = lean_ctor_get(v_d_482_, 0);
lean_inc(v_encoding_483_);
v_signal_484_ = lean_ctor_get(v_d_482_, 1);
lean_inc(v_signal_484_);
v_buffer_485_ = lean_ctor_get(v_d_482_, 2);
lean_inc(v_buffer_485_);
lean_dec_ref(v_d_482_);
v___x_486_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_487_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_479_, v_encoding_483_);
v___x_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_486_);
lean_ctor_set(v___x_488_, 1, v___x_487_);
v___x_489_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_490_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_480_, v_signal_484_);
v___x_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_489_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
v___x_492_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_493_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_481_, v_buffer_485_);
v___x_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = lean_unsigned_to_nat(3u);
v___x_496_ = lean_mk_empty_array_with_capacity(v___x_495_);
v___x_497_ = lean_array_push(v___x_496_, v___x_488_);
v___x_498_ = lean_array_push(v___x_497_, v___x_491_);
v___x_499_ = lean_array_push(v___x_498_, v___x_494_);
v___x_500_ = l_Lasm_JS_Web_Internal_fields(v___x_499_);
lean_dec_ref(v___x_499_);
return v___x_500_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadFileOptions(void){
_start:
{
lean_object* v___f_501_; lean_object* v___f_502_; lean_object* v___f_503_; lean_object* v___f_504_; 
v___f_501_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_502_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_503_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___f_504_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadFileOptions___lam__0), 4, 3);
lean_closure_set(v___f_504_, 0, v___f_501_);
lean_closure_set(v___f_504_, 1, v___f_502_);
lean_closure_set(v___f_504_, 2, v___f_503_);
return v___f_504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx(lean_object* v_x_505_){
_start:
{
if (lean_obj_tag(v_x_505_) == 0)
{
lean_object* v___x_506_; 
v___x_506_ = lean_unsigned_to_nat(0u);
return v___x_506_;
}
else
{
lean_object* v___x_507_; 
v___x_507_ = lean_unsigned_to_nat(1u);
return v___x_507_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorIdx(v_x_508_);
lean_dec_ref(v_x_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_510_, lean_object* v_k_511_){
_start:
{
lean_object* v_value_512_; lean_object* v___x_513_; 
v_value_512_ = lean_ctor_get(v_t_510_, 0);
lean_inc_ref(v_value_512_);
lean_dec_ref(v_t_510_);
v___x_513_ = lean_apply_1(v_k_511_, v_value_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim(lean_object* v_motive_514_, lean_object* v_ctorIdx_515_, lean_object* v_t_516_, lean_object* v_h_517_, lean_object* v_k_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_516_, v_k_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_520_, lean_object* v_ctorIdx_521_, lean_object* v_t_522_, lean_object* v_h_523_, lean_object* v_k_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim(v_motive_520_, v_ctorIdx_521_, v_t_522_, v_h_523_, v_k_524_);
lean_dec(v_ctorIdx_521_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object* v_t_526_, lean_object* v_readFileOptions_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_526_, v_readFileOptions_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object* v_motive_529_, lean_object* v_t_530_, lean_object* v_h_531_, lean_object* v_readFileOptions_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_530_, v_readFileOptions_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_534_, lean_object* v_domString_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_534_, v_domString_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_domString_elim(lean_object* v_motive_537_, lean_object* v_t_538_, lean_object* v_h_539_, lean_object* v_domString_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_Lasm_JS_Node_FileHandle_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_538_, v_domString_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString___lam__0(lean_object* v_x_542_){
_start:
{
if (lean_obj_tag(v_x_542_) == 0)
{
lean_object* v_value_543_; lean_object* v_encoding_544_; lean_object* v_signal_545_; lean_object* v_buffer_546_; lean_object* v___f_547_; lean_object* v___f_548_; lean_object* v___f_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v_value_543_ = lean_ctor_get(v_x_542_, 0);
lean_inc_ref(v_value_543_);
lean_dec_ref_known(v_x_542_, 1);
v_encoding_544_ = lean_ctor_get(v_value_543_, 0);
lean_inc(v_encoding_544_);
v_signal_545_ = lean_ctor_get(v_value_543_, 1);
lean_inc(v_signal_545_);
v_buffer_546_ = lean_ctor_get(v_value_543_, 2);
lean_inc(v_buffer_546_);
lean_dec_ref(v_value_543_);
v___f_547_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_548_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_549_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___x_550_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_551_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_547_, v_encoding_544_);
v___x_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_552_, 0, v___x_550_);
lean_ctor_set(v___x_552_, 1, v___x_551_);
v___x_553_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_554_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_548_, v_signal_545_);
v___x_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_553_);
lean_ctor_set(v___x_555_, 1, v___x_554_);
v___x_556_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_557_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_549_, v_buffer_546_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_556_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = lean_unsigned_to_nat(3u);
v___x_560_ = lean_mk_empty_array_with_capacity(v___x_559_);
v___x_561_ = lean_array_push(v___x_560_, v___x_552_);
v___x_562_ = lean_array_push(v___x_561_, v___x_555_);
v___x_563_ = lean_array_push(v___x_562_, v___x_558_);
v___x_564_ = l_Lasm_JS_Web_Internal_fields(v___x_563_);
lean_dec_ref(v___x_563_);
return v___x_564_;
}
else
{
lean_object* v_value_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
v_value_565_ = lean_ctor_get(v_x_542_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v_x_542_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_value_565_);
lean_dec(v_x_542_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
lean_ctor_set_tag(v___x_567_, 4);
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_value_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString___lam__0(lean_object* v_value_574_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v_value_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString___lam__0(lean_object* v_value_577_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_578_, 0, v_value_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorIdx(lean_object* v_x_580_){
_start:
{
if (lean_obj_tag(v_x_580_) == 0)
{
lean_object* v___x_581_; 
v___x_581_ = lean_unsigned_to_nat(0u);
return v___x_581_;
}
else
{
lean_object* v___x_582_; 
v___x_582_ = lean_unsigned_to_nat(1u);
return v___x_582_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorIdx___boxed(lean_object* v_x_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorIdx(v_x_583_);
lean_dec_ref(v_x_583_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim___redArg(lean_object* v_t_585_, lean_object* v_k_586_){
_start:
{
lean_object* v_value_587_; lean_object* v___x_588_; 
v_value_587_ = lean_ctor_get(v_t_585_, 0);
lean_inc_ref(v_value_587_);
lean_dec_ref(v_t_585_);
v___x_588_ = lean_apply_1(v_k_586_, v_value_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim(lean_object* v_motive_589_, lean_object* v_ctorIdx_590_, lean_object* v_t_591_, lean_object* v_h_592_, lean_object* v_k_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim___redArg(v_t_591_, v_k_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim___boxed(lean_object* v_motive_595_, lean_object* v_ctorIdx_596_, lean_object* v_t_597_, lean_object* v_h_598_, lean_object* v_k_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim(v_motive_595_, v_ctorIdx_596_, v_t_597_, v_h_598_, v_k_599_);
lean_dec(v_ctorIdx_596_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_uint8Array_elim___redArg(lean_object* v_t_601_, lean_object* v_uint8Array_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim___redArg(v_t_601_, v_uint8Array_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_uint8Array_elim(lean_object* v_motive_604_, lean_object* v_t_605_, lean_object* v_h_606_, lean_object* v_uint8Array_607_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim___redArg(v_t_605_, v_uint8Array_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_domString_elim___redArg(lean_object* v_t_609_, lean_object* v_domString_610_){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim___redArg(v_t_609_, v_domString_610_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrDOMString_domString_elim(lean_object* v_motive_612_, lean_object* v_t_613_, lean_object* v_h_614_, lean_object* v_domString_615_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lasm_JS_Node_Uint8ArrayOrDOMString_ctorElim___redArg(v_t_613_, v_domString_615_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSUint8ArrayOrDOMString___lam__0(lean_object* v_x_617_){
_start:
{
switch(lean_obj_tag(v_x_617_))
{
case 6:
{
lean_object* v_b_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_626_; 
v_b_618_ = lean_ctor_get(v_x_617_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v_x_617_);
if (v_isSharedCheck_626_ == 0)
{
v___x_620_ = v_x_617_;
v_isShared_621_ = v_isSharedCheck_626_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_b_618_);
lean_dec(v_x_617_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_626_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set_tag(v___x_620_, 0);
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_b_618_);
v___x_623_ = v_reuseFailAlloc_625_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_624_; 
v___x_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
return v___x_624_;
}
}
}
case 4:
{
lean_object* v_s_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_635_; 
v_s_627_ = lean_ctor_get(v_x_617_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v_x_617_);
if (v_isSharedCheck_635_ == 0)
{
v___x_629_ = v_x_617_;
v_isShared_630_ = v_isSharedCheck_635_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_s_627_);
lean_dec(v_x_617_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_635_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
lean_ctor_set_tag(v___x_629_, 1);
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_s_627_);
v___x_632_ = v_reuseFailAlloc_634_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_633_; 
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
return v___x_633_;
}
}
}
default: 
{
lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec(v_x_617_);
v___x_636_ = lean_mk_string_unchecked("", 0, 0);
v___x_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
return v___x_637_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSUint8ArrayOrDOMString(void){
_start:
{
lean_object* v___f_638_; lean_object* v___x_639_; uint8_t v___x_640_; lean_object* v___x_641_; 
v___f_638_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSUint8ArrayOrDOMString___lam__0), 1, 0);
v___x_639_ = lean_mk_string_unchecked("Lasm.JS.Node.Uint8ArrayOrDOMString", 34, 34);
v___x_640_ = 0;
v___x_641_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_641_, 0, v___f_638_);
lean_ctor_set(v___x_641_, 1, v___x_639_);
lean_ctor_set_uint8(v___x_641_, sizeof(void*)*2, v___x_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStatOptions___lam__0(lean_object* v___f_642_, lean_object* v___f_643_, lean_object* v_d_644_){
_start:
{
lean_object* v_bigint_645_; lean_object* v_signal_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_663_; 
v_bigint_645_ = lean_ctor_get(v_d_644_, 0);
v_signal_646_ = lean_ctor_get(v_d_644_, 1);
v_isSharedCheck_663_ = !lean_is_exclusive(v_d_644_);
if (v_isSharedCheck_663_ == 0)
{
v___x_648_ = v_d_644_;
v_isShared_649_ = v_isSharedCheck_663_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_signal_646_);
lean_inc(v_bigint_645_);
lean_dec(v_d_644_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_663_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_653_; 
v___x_650_ = lean_mk_string_unchecked("bigint", 6, 6);
v___x_651_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_642_, v_bigint_645_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 1, v___x_651_);
lean_ctor_set(v___x_648_, 0, v___x_650_);
v___x_653_ = v___x_648_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v___x_651_);
v___x_653_ = v_reuseFailAlloc_662_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_654_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_655_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_643_, v_signal_646_);
v___x_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_654_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = lean_unsigned_to_nat(2u);
v___x_658_ = lean_mk_empty_array_with_capacity(v___x_657_);
v___x_659_ = lean_array_push(v___x_658_, v___x_653_);
v___x_660_ = lean_array_push(v___x_659_, v___x_656_);
v___x_661_ = l_Lasm_JS_Web_Internal_fields(v___x_660_);
lean_dec_ref(v___x_660_);
return v___x_661_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStatOptions(void){
_start:
{
lean_object* v___f_664_; lean_object* v___f_665_; lean_object* v___f_666_; 
v___f_664_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_665_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_666_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStatOptions___lam__0), 3, 2);
lean_closure_set(v___f_666_, 0, v___f_664_);
lean_closure_set(v___f_666_, 1, v___f_665_);
return v___f_666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorIdx(lean_object* v_x_667_){
_start:
{
switch(lean_obj_tag(v_x_667_))
{
case 0:
{
lean_object* v___x_668_; 
v___x_668_ = lean_unsigned_to_nat(0u);
return v___x_668_;
}
case 1:
{
lean_object* v___x_669_; 
v___x_669_ = lean_unsigned_to_nat(1u);
return v___x_669_;
}
default: 
{
lean_object* v___x_670_; 
v___x_670_ = lean_unsigned_to_nat(2u);
return v___x_670_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorIdx___boxed(lean_object* v_x_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorIdx(v_x_671_);
lean_dec_ref(v_x_671_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(lean_object* v_t_673_, lean_object* v_k_674_){
_start:
{
switch(lean_obj_tag(v_t_673_))
{
case 0:
{
double v_value_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v_value_675_ = lean_ctor_get_float(v_t_673_, 0);
lean_dec_ref_known(v_t_673_, 0);
v___x_676_ = lean_box_float(v_value_675_);
v___x_677_ = lean_apply_1(v_k_674_, v___x_676_);
return v___x_677_;
}
case 1:
{
lean_object* v_value_678_; lean_object* v___x_679_; 
v_value_678_ = lean_ctor_get(v_t_673_, 0);
lean_inc_ref(v_value_678_);
lean_dec_ref_known(v_t_673_, 1);
v___x_679_ = lean_apply_1(v_k_674_, v_value_678_);
return v___x_679_;
}
default: 
{
lean_object* v_value_680_; lean_object* v___x_681_; 
v_value_680_ = lean_ctor_get(v_t_673_, 0);
lean_inc(v_value_680_);
lean_dec_ref_known(v_t_673_, 1);
v___x_681_ = lean_apply_1(v_k_674_, v_value_680_);
return v___x_681_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim(lean_object* v_motive_682_, lean_object* v_ctorIdx_683_, lean_object* v_t_684_, lean_object* v_h_685_, lean_object* v_k_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_684_, v_k_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___boxed(lean_object* v_motive_688_, lean_object* v_ctorIdx_689_, lean_object* v_t_690_, lean_object* v_h_691_, lean_object* v_k_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim(v_motive_688_, v_ctorIdx_689_, v_t_690_, v_h_691_, v_k_692_);
lean_dec(v_ctorIdx_689_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_double_elim___redArg(lean_object* v_t_694_, lean_object* v_double_695_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_694_, v_double_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_double_elim(lean_object* v_motive_697_, lean_object* v_t_698_, lean_object* v_h_699_, lean_object* v_double_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_698_, v_double_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_domString_elim___redArg(lean_object* v_t_702_, lean_object* v_domString_703_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_702_, v_domString_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_domString_elim(lean_object* v_motive_705_, lean_object* v_t_706_, lean_object* v_h_707_, lean_object* v_domString_708_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_706_, v_domString_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_object_elim___redArg(lean_object* v_t_710_, lean_object* v_object_711_){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_710_, v_object_711_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrObject_object_elim(lean_object* v_motive_713_, lean_object* v_t_714_, lean_object* v_h_715_, lean_object* v_object_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l_Lasm_JS_Node_DoubleOrDOMStringOrObject_ctorElim___redArg(v_t_714_, v_object_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrObject___lam__0(lean_object* v_x_718_){
_start:
{
switch(lean_obj_tag(v_x_718_))
{
case 0:
{
double v_value_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
v_value_719_ = lean_ctor_get_float(v_x_718_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v_x_718_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v_x_718_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_dec(v_x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set_tag(v___x_721_, 3);
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_725_, 0, v_value_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
case 1:
{
lean_object* v_value_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
v_value_727_ = lean_ctor_get(v_x_718_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v_x_718_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v_x_718_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_value_727_);
lean_dec(v_x_718_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
lean_ctor_set_tag(v___x_729_, 4);
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_value_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
default: 
{
lean_object* v_value_735_; 
v_value_735_ = lean_ctor_get(v_x_718_, 0);
lean_inc(v_value_735_);
lean_dec_ref_known(v_x_718_, 1);
return v_value_735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject___lam__0(double v_value_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_738_, 0, v_value_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject___lam__0___boxed(lean_object* v_value_739_){
_start:
{
double v_value_boxed_740_; lean_object* v_res_741_; 
v_value_boxed_740_ = lean_unbox_float(v_value_739_);
lean_dec_ref(v_value_739_);
v_res_741_ = l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrObject___lam__0(v_value_boxed_740_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrObject___lam__0(lean_object* v_value_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_744_, 0, v_value_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteResult___lam__0(lean_object* v___x_746_, lean_object* v___x_747_, lean_object* v_d_748_){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = lean_mk_string_unchecked("bytesWritten", 12, 12);
v___x_750_ = l_Lasm_JS_readField___redArg(v___x_746_, v_d_748_, v___x_749_);
lean_dec_ref(v___x_749_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec_ref(v___x_747_);
v_a_751_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_750_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_750_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
else
{
lean_object* v_a_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v_a_759_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_750_, 1);
v___x_760_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_761_ = l_Lasm_JS_readField___redArg(v___x_747_, v_d_748_, v___x_760_);
lean_dec_ref(v___x_760_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec(v_a_759_);
v_a_762_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_761_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_761_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_778_; 
v_a_770_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_778_ == 0)
{
v___x_772_ = v___x_761_;
v_isShared_773_ = v_isSharedCheck_778_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_761_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_778_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_774_, 0, v_a_759_);
lean_ctor_set(v___x_774_, 1, v_a_770_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v___x_774_);
v___x_776_ = v___x_772_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteResult___lam__0___boxed(lean_object* v___x_779_, lean_object* v___x_780_, lean_object* v_d_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lasm_JS_Node_instFromJSWriteResult___lam__0(v___x_779_, v___x_780_, v_d_781_);
lean_dec(v_d_781_);
return v_res_782_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSWriteResult(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___f_785_; lean_object* v___x_786_; uint8_t v___x_787_; lean_object* v___x_788_; 
v___x_783_ = l_Lasm_JS_instFromJSInt;
v___x_784_ = l_Lasm_JS_instFromJSByteArray;
v___f_785_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSWriteResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_785_, 0, v___x_783_);
lean_closure_set(v___f_785_, 1, v___x_784_);
v___x_786_ = lean_mk_string_unchecked("Lasm.JS.Node.FileHandle.WriteResult", 35, 35);
v___x_787_ = 0;
v___x_788_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_788_, 0, v___f_785_);
lean_ctor_set(v___x_788_, 1, v___x_786_);
lean_ctor_set_uint8(v___x_788_, sizeof(void*)*2, v___x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteOptions___lam__0(lean_object* v___f_789_, lean_object* v_d_790_){
_start:
{
lean_object* v_offset_791_; lean_object* v_length_792_; lean_object* v_position_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v_offset_791_ = lean_ctor_get(v_d_790_, 0);
lean_inc(v_offset_791_);
v_length_792_ = lean_ctor_get(v_d_790_, 1);
lean_inc(v_length_792_);
v_position_793_ = lean_ctor_get(v_d_790_, 2);
lean_inc(v_position_793_);
lean_dec_ref(v_d_790_);
v___x_794_ = lean_mk_string_unchecked("offset", 6, 6);
lean_inc_ref_n(v___f_789_, 2);
v___x_795_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_789_, v_offset_791_);
v___x_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_794_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
v___x_797_ = lean_mk_string_unchecked("length", 6, 6);
v___x_798_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_789_, v_length_792_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_797_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = lean_mk_string_unchecked("position", 8, 8);
v___x_801_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_789_, v_position_793_);
v___x_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_800_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = lean_unsigned_to_nat(3u);
v___x_804_ = lean_mk_empty_array_with_capacity(v___x_803_);
v___x_805_ = lean_array_push(v___x_804_, v___x_796_);
v___x_806_ = lean_array_push(v___x_805_, v___x_799_);
v___x_807_ = lean_array_push(v___x_806_, v___x_802_);
v___x_808_ = l_Lasm_JS_Web_Internal_fields(v___x_807_);
lean_dec_ref(v___x_807_);
return v___x_808_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSWriteOptions(void){
_start:
{
lean_object* v___f_809_; lean_object* v___f_810_; 
v___f_809_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_810_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSWriteOptions___lam__0), 2, 1);
lean_closure_set(v___f_810_, 0, v___f_809_);
return v___f_810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteStringResult___lam__0(lean_object* v___x_811_, lean_object* v___x_812_, lean_object* v_d_813_){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = lean_mk_string_unchecked("bytesWritten", 12, 12);
v___x_815_ = l_Lasm_JS_readField___redArg(v___x_811_, v_d_813_, v___x_814_);
lean_dec_ref(v___x_814_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_823_; 
lean_dec_ref(v___x_812_);
v_a_816_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_823_ == 0)
{
v___x_818_ = v___x_815_;
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_815_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_a_816_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v_a_824_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v___x_815_, 1);
v___x_825_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_826_ = l_Lasm_JS_readField___redArg(v___x_812_, v_d_813_, v___x_825_);
lean_dec_ref(v___x_825_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
lean_dec(v_a_824_);
v_a_827_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_826_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_826_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
else
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_843_; 
v_a_835_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_843_ == 0)
{
v___x_837_ = v___x_826_;
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_826_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_839_, 0, v_a_824_);
lean_ctor_set(v___x_839_, 1, v_a_835_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v___x_839_);
v___x_841_ = v___x_837_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWriteStringResult___lam__0___boxed(lean_object* v___x_844_, lean_object* v___x_845_, lean_object* v_d_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lasm_JS_Node_instFromJSWriteStringResult___lam__0(v___x_844_, v___x_845_, v_d_846_);
lean_dec(v_d_846_);
return v_res_847_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSWriteStringResult(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___f_850_; lean_object* v___x_851_; uint8_t v___x_852_; lean_object* v___x_853_; 
v___x_848_ = l_Lasm_JS_instFromJSInt;
v___x_849_ = l_Lasm_JS_instFromJSString;
v___f_850_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSWriteStringResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_850_, 0, v___x_848_);
lean_closure_set(v___f_850_, 1, v___x_849_);
v___x_851_ = lean_mk_string_unchecked("Lasm.JS.Node.FileHandle.WriteStringResult", 41, 41);
v___x_852_ = 0;
v___x_853_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_853_, 0, v___f_850_);
lean_ctor_set(v___x_853_, 1, v___x_851_);
lean_ctor_set_uint8(v___x_853_, sizeof(void*)*2, v___x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptions___lam__0(lean_object* v___f_854_, lean_object* v___f_855_, lean_object* v_d_856_){
_start:
{
lean_object* v_encoding_857_; lean_object* v_signal_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_875_; 
v_encoding_857_ = lean_ctor_get(v_d_856_, 0);
v_signal_858_ = lean_ctor_get(v_d_856_, 1);
v_isSharedCheck_875_ = !lean_is_exclusive(v_d_856_);
if (v_isSharedCheck_875_ == 0)
{
v___x_860_ = v_d_856_;
v_isShared_861_ = v_isSharedCheck_875_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_signal_858_);
lean_inc(v_encoding_857_);
lean_dec(v_d_856_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_875_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_865_; 
v___x_862_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_863_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_854_, v_encoding_857_);
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 1, v___x_863_);
lean_ctor_set(v___x_860_, 0, v___x_862_);
v___x_865_ = v___x_860_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_862_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v___x_863_);
v___x_865_ = v_reuseFailAlloc_874_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_866_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_867_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_855_, v_signal_858_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_866_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v___x_869_ = lean_unsigned_to_nat(2u);
v___x_870_ = lean_mk_empty_array_with_capacity(v___x_869_);
v___x_871_ = lean_array_push(v___x_870_, v___x_865_);
v___x_872_ = lean_array_push(v___x_871_, v___x_868_);
v___x_873_ = l_Lasm_JS_Web_Internal_fields(v___x_872_);
lean_dec_ref(v___x_872_);
return v___x_873_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSWriteFileOptions(void){
_start:
{
lean_object* v___f_876_; lean_object* v___f_877_; lean_object* v___f_878_; 
v___f_876_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_877_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_878_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSWriteFileOptions___lam__0), 3, 2);
lean_closure_set(v___f_878_, 0, v___f_876_);
lean_closure_set(v___f_878_, 1, v___f_877_);
return v___f_878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx(lean_object* v_x_879_){
_start:
{
if (lean_obj_tag(v_x_879_) == 0)
{
lean_object* v___x_880_; 
v___x_880_ = lean_unsigned_to_nat(0u);
return v___x_880_;
}
else
{
lean_object* v___x_881_; 
v___x_881_ = lean_unsigned_to_nat(1u);
return v___x_881_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorIdx(v_x_882_);
lean_dec_ref(v_x_882_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_884_, lean_object* v_k_885_){
_start:
{
lean_object* v_value_886_; lean_object* v___x_887_; 
v_value_886_ = lean_ctor_get(v_t_884_, 0);
lean_inc_ref(v_value_886_);
lean_dec_ref(v_t_884_);
v___x_887_ = lean_apply_1(v_k_885_, v_value_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim(lean_object* v_motive_888_, lean_object* v_ctorIdx_889_, lean_object* v_t_890_, lean_object* v_h_891_, lean_object* v_k_892_){
_start:
{
lean_object* v___x_893_; 
v___x_893_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_890_, v_k_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_894_, lean_object* v_ctorIdx_895_, lean_object* v_t_896_, lean_object* v_h_897_, lean_object* v_k_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim(v_motive_894_, v_ctorIdx_895_, v_t_896_, v_h_897_, v_k_898_);
lean_dec(v_ctorIdx_895_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object* v_t_900_, lean_object* v_writeFileOptions_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_900_, v_writeFileOptions_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object* v_motive_903_, lean_object* v_t_904_, lean_object* v_h_905_, lean_object* v_writeFileOptions_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_904_, v_writeFileOptions_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_908_, lean_object* v_domString_909_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_908_, v_domString_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_domString_elim(lean_object* v_motive_911_, lean_object* v_t_912_, lean_object* v_h_913_, lean_object* v_domString_914_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_Lasm_JS_Node_FileHandle_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_912_, v_domString_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString___lam__0(lean_object* v_x_916_){
_start:
{
if (lean_obj_tag(v_x_916_) == 0)
{
lean_object* v_value_917_; lean_object* v_encoding_918_; lean_object* v_signal_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_938_; 
v_value_917_ = lean_ctor_get(v_x_916_, 0);
lean_inc_ref(v_value_917_);
lean_dec_ref_known(v_x_916_, 1);
v_encoding_918_ = lean_ctor_get(v_value_917_, 0);
v_signal_919_ = lean_ctor_get(v_value_917_, 1);
v_isSharedCheck_938_ = !lean_is_exclusive(v_value_917_);
if (v_isSharedCheck_938_ == 0)
{
v___x_921_ = v_value_917_;
v_isShared_922_ = v_isSharedCheck_938_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_signal_919_);
lean_inc(v_encoding_918_);
lean_dec(v_value_917_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_938_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___f_923_; lean_object* v___f_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_928_; 
v___f_923_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_924_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_925_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_926_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_923_, v_encoding_918_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 1, v___x_926_);
lean_ctor_set(v___x_921_, 0, v___x_925_);
v___x_928_ = v___x_921_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_925_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v___x_926_);
v___x_928_ = v_reuseFailAlloc_937_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_929_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_930_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_924_, v_signal_919_);
v___x_931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_929_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = lean_unsigned_to_nat(2u);
v___x_933_ = lean_mk_empty_array_with_capacity(v___x_932_);
v___x_934_ = lean_array_push(v___x_933_, v___x_928_);
v___x_935_ = lean_array_push(v___x_934_, v___x_931_);
v___x_936_ = l_Lasm_JS_Web_Internal_fields(v___x_935_);
lean_dec_ref(v___x_935_);
return v___x_936_;
}
}
}
else
{
lean_object* v_value_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
v_value_939_ = lean_ctor_get(v_x_916_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v_x_916_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v_x_916_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_value_939_);
lean_dec(v_x_916_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
lean_ctor_set_tag(v___x_941_, 4);
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_value_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString___lam__0(lean_object* v_value_948_){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_949_, 0, v_value_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString___lam__0(lean_object* v_value_951_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_952_, 0, v_value_951_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorIdx(lean_object* v_x_954_){
_start:
{
switch(lean_obj_tag(v_x_954_))
{
case 0:
{
lean_object* v___x_955_; 
v___x_955_ = lean_unsigned_to_nat(0u);
return v___x_955_;
}
case 1:
{
lean_object* v___x_956_; 
v___x_956_ = lean_unsigned_to_nat(1u);
return v___x_956_;
}
default: 
{
lean_object* v___x_957_; 
v___x_957_ = lean_unsigned_to_nat(2u);
return v___x_957_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorIdx___boxed(lean_object* v_x_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorIdx(v_x_958_);
lean_dec_ref(v_x_958_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(lean_object* v_t_960_, lean_object* v_k_961_){
_start:
{
if (lean_obj_tag(v_t_960_) == 2)
{
lean_object* v_value_962_; lean_object* v___x_963_; 
v_value_962_ = lean_ctor_get(v_t_960_, 0);
lean_inc(v_value_962_);
lean_dec_ref_known(v_t_960_, 1);
v___x_963_ = lean_apply_1(v_k_961_, v_value_962_);
return v___x_963_;
}
else
{
lean_object* v_value_964_; lean_object* v___x_965_; 
v_value_964_ = lean_ctor_get(v_t_960_, 0);
lean_inc_ref(v_value_964_);
lean_dec_ref(v_t_960_);
v___x_965_ = lean_apply_1(v_k_961_, v_value_964_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim(lean_object* v_motive_966_, lean_object* v_ctorIdx_967_, lean_object* v_t_968_, lean_object* v_h_969_, lean_object* v_k_970_){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_968_, v_k_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___boxed(lean_object* v_motive_972_, lean_object* v_ctorIdx_973_, lean_object* v_t_974_, lean_object* v_h_975_, lean_object* v_k_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim(v_motive_972_, v_ctorIdx_973_, v_t_974_, v_h_975_, v_k_976_);
lean_dec(v_ctorIdx_973_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_domString_elim___redArg(lean_object* v_t_978_, lean_object* v_domString_979_){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_978_, v_domString_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_domString_elim(lean_object* v_motive_981_, lean_object* v_t_982_, lean_object* v_h_983_, lean_object* v_domString_984_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_982_, v_domString_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_uint8Array_elim___redArg(lean_object* v_t_986_, lean_object* v_uint8Array_987_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_986_, v_uint8Array_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_uint8Array_elim(lean_object* v_motive_989_, lean_object* v_t_990_, lean_object* v_h_991_, lean_object* v_uint8Array_992_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_990_, v_uint8Array_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_url_elim___redArg(lean_object* v_t_994_, lean_object* v_url_995_){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_994_, v_url_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_url_elim(lean_object* v_motive_997_, lean_object* v_t_998_, lean_object* v_h_999_, lean_object* v_url_1000_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURL_ctorElim___redArg(v_t_998_, v_url_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURL___lam__0(lean_object* v_x_1002_){
_start:
{
switch(lean_obj_tag(v_x_1002_))
{
case 0:
{
lean_object* v_value_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
v_value_1003_ = lean_ctor_get(v_x_1002_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_x_1002_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v_x_1002_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_value_1003_);
lean_dec(v_x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
lean_ctor_set_tag(v___x_1005_, 4);
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_value_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
case 1:
{
lean_object* v_value_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
v_value_1011_ = lean_ctor_get(v_x_1002_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_x_1002_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v_x_1002_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_value_1011_);
lean_dec(v_x_1002_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
lean_ctor_set_tag(v___x_1013_, 6);
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_value_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
default: 
{
lean_object* v_value_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_value_1019_ = lean_ctor_get(v_x_1002_, 0);
lean_inc(v_value_1019_);
lean_dec_ref_known(v_x_1002_, 1);
v___x_1020_ = lean_mk_string_unchecked("", 0, 0);
v___x_1021_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1021_, 0, v_value_1019_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
return v___x_1021_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURL___lam__0(lean_object* v_value_1023_){
_start:
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1024_, 0, v_value_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURL___lam__0(lean_object* v_value_1026_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1027_, 0, v_value_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURL___lam__0(lean_object* v_value_1029_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1030_, 0, v_value_1029_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorIdx(lean_object* v_x_1032_){
_start:
{
switch(lean_obj_tag(v_x_1032_))
{
case 0:
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_unsigned_to_nat(0u);
return v___x_1033_;
}
case 1:
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_unsigned_to_nat(1u);
return v___x_1034_;
}
case 2:
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_unsigned_to_nat(2u);
return v___x_1035_;
}
default: 
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_unsigned_to_nat(3u);
return v___x_1036_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorIdx___boxed(lean_object* v_x_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorIdx(v_x_1037_);
lean_dec_ref(v_x_1037_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(lean_object* v_t_1039_, lean_object* v_k_1040_){
_start:
{
switch(lean_obj_tag(v_t_1039_))
{
case 2:
{
lean_object* v_value_1041_; lean_object* v___x_1042_; 
v_value_1041_ = lean_ctor_get(v_t_1039_, 0);
lean_inc(v_value_1041_);
lean_dec_ref_known(v_t_1039_, 1);
v___x_1042_ = lean_apply_1(v_k_1040_, v_value_1041_);
return v___x_1042_;
}
case 3:
{
lean_object* v_value_1043_; lean_object* v___x_1044_; 
v_value_1043_ = lean_ctor_get(v_t_1039_, 0);
lean_inc(v_value_1043_);
lean_dec_ref_known(v_t_1039_, 1);
v___x_1044_ = lean_apply_1(v_k_1040_, v_value_1043_);
return v___x_1044_;
}
default: 
{
lean_object* v_value_1045_; lean_object* v___x_1046_; 
v_value_1045_ = lean_ctor_get(v_t_1039_, 0);
lean_inc_ref(v_value_1045_);
lean_dec_ref(v_t_1039_);
v___x_1046_ = lean_apply_1(v_k_1040_, v_value_1045_);
return v___x_1046_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim(lean_object* v_motive_1047_, lean_object* v_ctorIdx_1048_, lean_object* v_t_1049_, lean_object* v_h_1050_, lean_object* v_k_1051_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_1049_, v_k_1051_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___boxed(lean_object* v_motive_1053_, lean_object* v_ctorIdx_1054_, lean_object* v_t_1055_, lean_object* v_h_1056_, lean_object* v_k_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim(v_motive_1053_, v_ctorIdx_1054_, v_t_1055_, v_h_1056_, v_k_1057_);
lean_dec(v_ctorIdx_1054_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_domString_elim___redArg(lean_object* v_t_1059_, lean_object* v_domString_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_1059_, v_domString_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_domString_elim(lean_object* v_motive_1062_, lean_object* v_t_1063_, lean_object* v_h_1064_, lean_object* v_domString_1065_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_1063_, v_domString_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_uint8Array_elim___redArg(lean_object* v_t_1067_, lean_object* v_uint8Array_1068_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_1067_, v_uint8Array_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_uint8Array_elim(lean_object* v_motive_1070_, lean_object* v_t_1071_, lean_object* v_h_1072_, lean_object* v_uint8Array_1073_){
_start:
{
lean_object* v___x_1074_; 
v___x_1074_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_1071_, v_uint8Array_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_url_elim___redArg(lean_object* v_t_1075_, lean_object* v_url_1076_){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_1075_, v_url_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_url_elim(lean_object* v_motive_1078_, lean_object* v_t_1079_, lean_object* v_h_1080_, lean_object* v_url_1081_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_1079_, v_url_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_fileHandle_elim___redArg(lean_object* v_t_1083_, lean_object* v_fileHandle_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_1083_, v_fileHandle_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_fileHandle_elim(lean_object* v_motive_1086_, lean_object* v_t_1087_, lean_object* v_h_1088_, lean_object* v_fileHandle_1089_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrURLOrFileHandle_ctorElim___redArg(v_t_1087_, v_fileHandle_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_x_1091_){
_start:
{
switch(lean_obj_tag(v_x_1091_))
{
case 0:
{
lean_object* v_value_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1099_; 
v_value_1092_ = lean_ctor_get(v_x_1091_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v_x_1091_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1094_ = v_x_1091_;
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_value_1092_);
lean_dec(v_x_1091_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1097_; 
if (v_isShared_1095_ == 0)
{
lean_ctor_set_tag(v___x_1094_, 4);
v___x_1097_ = v___x_1094_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_value_1092_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
case 1:
{
lean_object* v_value_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
v_value_1100_ = lean_ctor_get(v_x_1091_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v_x_1091_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v_x_1091_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_value_1100_);
lean_dec(v_x_1091_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
lean_ctor_set_tag(v___x_1102_, 6);
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_value_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
default: 
{
lean_object* v_value_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v_value_1108_ = lean_ctor_get(v_x_1091_, 0);
lean_inc(v_value_1108_);
lean_dec_ref(v_x_1091_);
v___x_1109_ = lean_mk_string_unchecked("", 0, 0);
v___x_1110_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1110_, 0, v_value_1108_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
return v___x_1110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_value_1112_){
_start:
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v_value_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_value_1115_){
_start:
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1116_, 0, v_value_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_value_1118_){
_start:
{
lean_object* v___x_1119_; 
v___x_1119_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1119_, 0, v_value_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFileHandleDOMStringOrUint8ArrayOrURLOrFileHandle___lam__0(lean_object* v_value_1121_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1122_, 0, v_value_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptions__1___lam__0(lean_object* v___f_1124_, lean_object* v___f_1125_, lean_object* v___f_1126_, lean_object* v_d_1127_){
_start:
{
lean_object* v_encoding_1128_; lean_object* v_mode_1129_; lean_object* v_flag_1130_; lean_object* v_flush_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v_encoding_1128_ = lean_ctor_get(v_d_1127_, 0);
lean_inc(v_encoding_1128_);
v_mode_1129_ = lean_ctor_get(v_d_1127_, 1);
lean_inc(v_mode_1129_);
v_flag_1130_ = lean_ctor_get(v_d_1127_, 2);
lean_inc(v_flag_1130_);
v_flush_1131_ = lean_ctor_get(v_d_1127_, 3);
lean_inc(v_flush_1131_);
lean_dec_ref(v_d_1127_);
v___x_1132_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_1124_);
v___x_1133_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1124_, v_encoding_1128_);
v___x_1134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1132_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_1136_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1125_, v_mode_1129_);
v___x_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1135_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
v___x_1138_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_1139_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1124_, v_flag_1130_);
v___x_1140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1138_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_1142_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1126_, v_flush_1131_);
v___x_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = lean_unsigned_to_nat(4u);
v___x_1145_ = lean_mk_empty_array_with_capacity(v___x_1144_);
v___x_1146_ = lean_array_push(v___x_1145_, v___x_1134_);
v___x_1147_ = lean_array_push(v___x_1146_, v___x_1137_);
v___x_1148_ = lean_array_push(v___x_1147_, v___x_1140_);
v___x_1149_ = lean_array_push(v___x_1148_, v___x_1143_);
v___x_1150_ = l_Lasm_JS_Web_Internal_fields(v___x_1149_);
lean_dec_ref(v___x_1149_);
return v___x_1150_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSAppendFileOptions__1(void){
_start:
{
lean_object* v___f_1151_; lean_object* v___f_1152_; lean_object* v___f_1153_; lean_object* v___f_1154_; 
v___f_1151_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1152_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_1153_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1154_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSAppendFileOptions__1___lam__0), 4, 3);
lean_closure_set(v___f_1154_, 0, v___f_1151_);
lean_closure_set(v___f_1154_, 1, v___f_1152_);
lean_closure_set(v___f_1154_, 2, v___f_1153_);
return v___f_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx(lean_object* v_x_1155_){
_start:
{
if (lean_obj_tag(v_x_1155_) == 0)
{
lean_object* v___x_1156_; 
v___x_1156_ = lean_unsigned_to_nat(0u);
return v___x_1156_;
}
else
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_unsigned_to_nat(1u);
return v___x_1157_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorIdx(v_x_1158_);
lean_dec_ref(v_x_1158_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_1160_, lean_object* v_k_1161_){
_start:
{
lean_object* v_value_1162_; lean_object* v___x_1163_; 
v_value_1162_ = lean_ctor_get(v_t_1160_, 0);
lean_inc_ref(v_value_1162_);
lean_dec_ref(v_t_1160_);
v___x_1163_ = lean_apply_1(v_k_1161_, v_value_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim(lean_object* v_motive_1164_, lean_object* v_ctorIdx_1165_, lean_object* v_t_1166_, lean_object* v_h_1167_, lean_object* v_k_1168_){
_start:
{
lean_object* v___x_1169_; 
v___x_1169_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_1166_, v_k_1168_);
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_1170_, lean_object* v_ctorIdx_1171_, lean_object* v_t_1172_, lean_object* v_h_1173_, lean_object* v_k_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim(v_motive_1170_, v_ctorIdx_1171_, v_t_1172_, v_h_1173_, v_k_1174_);
lean_dec(v_ctorIdx_1171_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_appendFileOptions_elim___redArg(lean_object* v_t_1176_, lean_object* v_appendFileOptions_1177_){
_start:
{
lean_object* v___x_1178_; 
v___x_1178_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_1176_, v_appendFileOptions_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_appendFileOptions_elim(lean_object* v_motive_1179_, lean_object* v_t_1180_, lean_object* v_h_1181_, lean_object* v_appendFileOptions_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_1180_, v_appendFileOptions_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_1184_, lean_object* v_domString_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_1184_, v_domString_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_domString_elim(lean_object* v_motive_1187_, lean_object* v_t_1188_, lean_object* v_h_1189_, lean_object* v_domString_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Lasm_JS_Node_fsPromises_AppendFileOptionsOrDOMString_ctorElim___redArg(v_t_1188_, v_domString_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAppendFileOptionsOrDOMString__1___lam__0(lean_object* v_x_1192_){
_start:
{
if (lean_obj_tag(v_x_1192_) == 0)
{
lean_object* v_value_1193_; lean_object* v_encoding_1194_; lean_object* v_mode_1195_; lean_object* v_flag_1196_; lean_object* v_flush_1197_; lean_object* v___f_1198_; lean_object* v___f_1199_; lean_object* v___f_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v_value_1193_ = lean_ctor_get(v_x_1192_, 0);
lean_inc_ref(v_value_1193_);
lean_dec_ref_known(v_x_1192_, 1);
v_encoding_1194_ = lean_ctor_get(v_value_1193_, 0);
lean_inc(v_encoding_1194_);
v_mode_1195_ = lean_ctor_get(v_value_1193_, 1);
lean_inc(v_mode_1195_);
v_flag_1196_ = lean_ctor_get(v_value_1193_, 2);
lean_inc(v_flag_1196_);
v_flush_1197_ = lean_ctor_get(v_value_1193_, 3);
lean_inc(v_flush_1197_);
lean_dec_ref(v_value_1193_);
v___f_1198_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1199_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_1200_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_1201_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_1198_);
v___x_1202_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1198_, v_encoding_1194_);
v___x_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1201_);
lean_ctor_set(v___x_1203_, 1, v___x_1202_);
v___x_1204_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_1205_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1199_, v_mode_1195_);
v___x_1206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1204_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_1208_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1198_, v_flag_1196_);
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1207_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_1211_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1200_, v_flush_1197_);
v___x_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v___x_1213_ = lean_unsigned_to_nat(4u);
v___x_1214_ = lean_mk_empty_array_with_capacity(v___x_1213_);
v___x_1215_ = lean_array_push(v___x_1214_, v___x_1203_);
v___x_1216_ = lean_array_push(v___x_1215_, v___x_1206_);
v___x_1217_ = lean_array_push(v___x_1216_, v___x_1209_);
v___x_1218_ = lean_array_push(v___x_1217_, v___x_1212_);
v___x_1219_ = l_Lasm_JS_Web_Internal_fields(v___x_1218_);
lean_dec_ref(v___x_1218_);
return v___x_1219_;
}
else
{
lean_object* v_value_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
v_value_1220_ = lean_ctor_get(v_x_1192_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_x_1192_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v_x_1192_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_value_1220_);
lean_dec(v_x_1192_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
lean_ctor_set_tag(v___x_1222_, 4);
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_value_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeAppendFileOptionsAppendFileOptionsOrDOMString__1___lam__0(lean_object* v_value_1229_){
_start:
{
lean_object* v___x_1230_; 
v___x_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1230_, 0, v_value_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringAppendFileOptionsOrDOMString__1___lam__0(lean_object* v_value_1232_){
_start:
{
lean_object* v___x_1233_; 
v___x_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1233_, 0, v_value_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx(lean_object* v_x_1235_){
_start:
{
if (lean_obj_tag(v_x_1235_) == 0)
{
lean_object* v___x_1236_; 
v___x_1236_ = lean_unsigned_to_nat(0u);
return v___x_1236_;
}
else
{
lean_object* v___x_1237_; 
v___x_1237_ = lean_unsigned_to_nat(1u);
return v___x_1237_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx___boxed(lean_object* v_x_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx(v_x_1238_);
lean_dec_ref(v_x_1238_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(lean_object* v_t_1240_, lean_object* v_k_1241_){
_start:
{
if (lean_obj_tag(v_t_1240_) == 0)
{
lean_object* v_value_1242_; lean_object* v___x_1243_; 
v_value_1242_ = lean_ctor_get(v_t_1240_, 0);
lean_inc_ref(v_value_1242_);
lean_dec_ref_known(v_t_1240_, 1);
v___x_1243_ = lean_apply_1(v_k_1241_, v_value_1242_);
return v___x_1243_;
}
else
{
lean_object* v_value_1244_; lean_object* v___x_1245_; 
v_value_1244_ = lean_ctor_get(v_t_1240_, 0);
lean_inc(v_value_1244_);
lean_dec_ref_known(v_t_1240_, 1);
v___x_1245_ = lean_apply_1(v_k_1241_, v_value_1244_);
return v___x_1245_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim(lean_object* v_motive_1246_, lean_object* v_ctorIdx_1247_, lean_object* v_t_1248_, lean_object* v_h_1249_, lean_object* v_k_1250_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_1248_, v_k_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___boxed(lean_object* v_motive_1252_, lean_object* v_ctorIdx_1253_, lean_object* v_t_1254_, lean_object* v_h_1255_, lean_object* v_k_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim(v_motive_1252_, v_ctorIdx_1253_, v_t_1254_, v_h_1255_, v_k_1256_);
lean_dec(v_ctorIdx_1253_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim___redArg(lean_object* v_t_1258_, lean_object* v_domString_1259_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_1258_, v_domString_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim(lean_object* v_motive_1261_, lean_object* v_t_1262_, lean_object* v_h_1263_, lean_object* v_domString_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_1262_, v_domString_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim___redArg(lean_object* v_t_1266_, lean_object* v_longLong_1267_){
_start:
{
lean_object* v___x_1268_; 
v___x_1268_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_1266_, v_longLong_1267_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim(lean_object* v_motive_1269_, lean_object* v_t_1270_, lean_object* v_h_1271_, lean_object* v_longLong_1272_){
_start:
{
lean_object* v___x_1273_; 
v___x_1273_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_1270_, v_longLong_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object* v_x_1274_){
_start:
{
if (lean_obj_tag(v_x_1274_) == 0)
{
lean_object* v_value_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
v_value_1275_ = lean_ctor_get(v_x_1274_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v_x_1274_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v_x_1274_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_value_1275_);
lean_dec(v_x_1274_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
lean_ctor_set_tag(v___x_1277_, 4);
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_value_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
else
{
lean_object* v_value_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1295_; 
v_value_1283_ = lean_ctor_get(v_x_1274_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v_x_1274_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1285_ = v_x_1274_;
v_isShared_1286_ = v_isSharedCheck_1295_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_value_1283_);
lean_dec(v_x_1274_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1295_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1287_ = lean_nat_abs(v_value_1283_);
v___x_1288_ = lean_cstr_to_nat("9007199254740991");
v___x_1289_ = lean_nat_dec_le(v___x_1287_, v___x_1288_);
lean_dec(v___x_1287_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1291_; 
if (v_isShared_1286_ == 0)
{
lean_ctor_set_tag(v___x_1285_, 5);
v___x_1291_ = v___x_1285_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_value_1283_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
else
{
double v___x_1293_; lean_object* v___x_1294_; 
lean_del_object(v___x_1285_);
v___x_1293_ = l_Float_ofInt(v_value_1283_);
lean_dec(v_value_1283_);
v___x_1294_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1294_, 0, v___x_1293_);
return v___x_1294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___lam__0(lean_object* v_value_1297_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1298_, 0, v_value_1297_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___lam__0(lean_object* v_value_1300_){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1301_, 0, v_value_1300_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorIdx(lean_object* v_x_1303_){
_start:
{
if (lean_obj_tag(v_x_1303_) == 0)
{
lean_object* v___x_1304_; 
v___x_1304_ = lean_unsigned_to_nat(0u);
return v___x_1304_;
}
else
{
lean_object* v___x_1305_; 
v___x_1305_ = lean_unsigned_to_nat(1u);
return v___x_1305_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorIdx___boxed(lean_object* v_x_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l_Lasm_JS_Node_DOMStringOrURL_ctorIdx(v_x_1306_);
lean_dec_ref(v_x_1306_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(lean_object* v_t_1308_, lean_object* v_k_1309_){
_start:
{
if (lean_obj_tag(v_t_1308_) == 0)
{
lean_object* v_value_1310_; lean_object* v___x_1311_; 
v_value_1310_ = lean_ctor_get(v_t_1308_, 0);
lean_inc_ref(v_value_1310_);
lean_dec_ref_known(v_t_1308_, 1);
v___x_1311_ = lean_apply_1(v_k_1309_, v_value_1310_);
return v___x_1311_;
}
else
{
lean_object* v_value_1312_; lean_object* v___x_1313_; 
v_value_1312_ = lean_ctor_get(v_t_1308_, 0);
lean_inc(v_value_1312_);
lean_dec_ref_known(v_t_1308_, 1);
v___x_1313_ = lean_apply_1(v_k_1309_, v_value_1312_);
return v___x_1313_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorElim(lean_object* v_motive_1314_, lean_object* v_ctorIdx_1315_, lean_object* v_t_1316_, lean_object* v_h_1317_, lean_object* v_k_1318_){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_1316_, v_k_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_ctorElim___boxed(lean_object* v_motive_1320_, lean_object* v_ctorIdx_1321_, lean_object* v_t_1322_, lean_object* v_h_1323_, lean_object* v_k_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim(v_motive_1320_, v_ctorIdx_1321_, v_t_1322_, v_h_1323_, v_k_1324_);
lean_dec(v_ctorIdx_1321_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_domString_elim___redArg(lean_object* v_t_1326_, lean_object* v_domString_1327_){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_1326_, v_domString_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_domString_elim(lean_object* v_motive_1329_, lean_object* v_t_1330_, lean_object* v_h_1331_, lean_object* v_domString_1332_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_1330_, v_domString_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_url_elim___redArg(lean_object* v_t_1334_, lean_object* v_url_1335_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_1334_, v_url_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURL_url_elim(lean_object* v_motive_1337_, lean_object* v_t_1338_, lean_object* v_h_1339_, lean_object* v_url_1340_){
_start:
{
lean_object* v___x_1341_; 
v___x_1341_ = l_Lasm_JS_Node_DOMStringOrURL_ctorElim___redArg(v_t_1338_, v_url_1340_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0(lean_object* v_x_1342_){
_start:
{
if (lean_obj_tag(v_x_1342_) == 0)
{
lean_object* v_value_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
v_value_1343_ = lean_ctor_get(v_x_1342_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_x_1342_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v_x_1342_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_value_1343_);
lean_dec(v_x_1342_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
lean_ctor_set_tag(v___x_1345_, 4);
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_value_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
else
{
lean_object* v_value_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v_value_1351_ = lean_ctor_get(v_x_1342_, 0);
lean_inc(v_value_1351_);
lean_dec_ref_known(v_x_1342_, 1);
v___x_1352_ = lean_mk_string_unchecked("", 0, 0);
v___x_1353_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1353_, 0, v_value_1351_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
return v___x_1353_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURL___lam__0(lean_object* v_value_1355_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1356_, 0, v_value_1355_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURL___lam__0(lean_object* v_value_1358_){
_start:
{
lean_object* v___x_1359_; 
v___x_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1359_, 0, v_value_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCpOptions___lam__0(lean_object* v___f_1361_, lean_object* v___f_1362_, lean_object* v___f_1363_, lean_object* v_d_1364_){
_start:
{
lean_object* v_dereference_1365_; lean_object* v_errorOnExist_1366_; lean_object* v_filter_1367_; lean_object* v_force_1368_; lean_object* v_mode_1369_; lean_object* v_preserveTimestamps_1370_; lean_object* v_recursive_1371_; lean_object* v_verbatimSymlinks_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_dereference_1365_ = lean_ctor_get(v_d_1364_, 0);
lean_inc(v_dereference_1365_);
v_errorOnExist_1366_ = lean_ctor_get(v_d_1364_, 1);
lean_inc(v_errorOnExist_1366_);
v_filter_1367_ = lean_ctor_get(v_d_1364_, 2);
lean_inc(v_filter_1367_);
v_force_1368_ = lean_ctor_get(v_d_1364_, 3);
lean_inc(v_force_1368_);
v_mode_1369_ = lean_ctor_get(v_d_1364_, 4);
lean_inc(v_mode_1369_);
v_preserveTimestamps_1370_ = lean_ctor_get(v_d_1364_, 5);
lean_inc(v_preserveTimestamps_1370_);
v_recursive_1371_ = lean_ctor_get(v_d_1364_, 6);
lean_inc(v_recursive_1371_);
v_verbatimSymlinks_1372_ = lean_ctor_get(v_d_1364_, 7);
lean_inc(v_verbatimSymlinks_1372_);
lean_dec_ref(v_d_1364_);
v___x_1373_ = lean_mk_string_unchecked("dereference", 11, 11);
lean_inc_ref_n(v___f_1361_, 5);
v___x_1374_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1361_, v_dereference_1365_);
v___x_1375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
v___x_1376_ = lean_mk_string_unchecked("errorOnExist", 12, 12);
v___x_1377_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1361_, v_errorOnExist_1366_);
v___x_1378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1376_);
lean_ctor_set(v___x_1378_, 1, v___x_1377_);
v___x_1379_ = lean_mk_string_unchecked("filter", 6, 6);
v___x_1380_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1362_, v_filter_1367_);
v___x_1381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1379_);
lean_ctor_set(v___x_1381_, 1, v___x_1380_);
v___x_1382_ = lean_mk_string_unchecked("force", 5, 5);
v___x_1383_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1361_, v_force_1368_);
v___x_1384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1382_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
v___x_1385_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_1386_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1363_, v_mode_1369_);
v___x_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1385_);
lean_ctor_set(v___x_1387_, 1, v___x_1386_);
v___x_1388_ = lean_mk_string_unchecked("preserveTimestamps", 18, 18);
v___x_1389_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1361_, v_preserveTimestamps_1370_);
v___x_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1388_);
lean_ctor_set(v___x_1390_, 1, v___x_1389_);
v___x_1391_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_1392_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1361_, v_recursive_1371_);
v___x_1393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1391_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
v___x_1394_ = lean_mk_string_unchecked("verbatimSymlinks", 16, 16);
v___x_1395_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1361_, v_verbatimSymlinks_1372_);
v___x_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1394_);
lean_ctor_set(v___x_1396_, 1, v___x_1395_);
v___x_1397_ = lean_unsigned_to_nat(8u);
v___x_1398_ = lean_mk_empty_array_with_capacity(v___x_1397_);
v___x_1399_ = lean_array_push(v___x_1398_, v___x_1375_);
v___x_1400_ = lean_array_push(v___x_1399_, v___x_1378_);
v___x_1401_ = lean_array_push(v___x_1400_, v___x_1381_);
v___x_1402_ = lean_array_push(v___x_1401_, v___x_1384_);
v___x_1403_ = lean_array_push(v___x_1402_, v___x_1387_);
v___x_1404_ = lean_array_push(v___x_1403_, v___x_1390_);
v___x_1405_ = lean_array_push(v___x_1404_, v___x_1393_);
v___x_1406_ = lean_array_push(v___x_1405_, v___x_1396_);
v___x_1407_ = l_Lasm_JS_Web_Internal_fields(v___x_1406_);
lean_dec_ref(v___x_1406_);
return v___x_1407_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCpOptions(void){
_start:
{
lean_object* v___f_1408_; lean_object* v___f_1409_; lean_object* v___f_1410_; lean_object* v___f_1411_; 
v___f_1408_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1409_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_1410_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_1411_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCpOptions___lam__0), 4, 3);
lean_closure_set(v___f_1411_, 0, v___f_1408_);
lean_closure_set(v___f_1411_, 1, v___f_1409_);
lean_closure_set(v___f_1411_, 2, v___f_1410_);
return v___f_1411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLstatOptions___lam__0(lean_object* v___f_1412_, lean_object* v_d_1413_){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1414_ = lean_mk_string_unchecked("bigint", 6, 6);
v___x_1415_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1412_, v_d_1413_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = lean_unsigned_to_nat(1u);
v___x_1418_ = lean_mk_empty_array_with_capacity(v___x_1417_);
v___x_1419_ = lean_array_push(v___x_1418_, v___x_1416_);
v___x_1420_ = l_Lasm_JS_Web_Internal_fields(v___x_1419_);
lean_dec_ref(v___x_1419_);
return v___x_1420_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSLstatOptions(void){
_start:
{
lean_object* v___f_1421_; lean_object* v___f_1422_; 
v___f_1421_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1422_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSLstatOptions___lam__0), 2, 1);
lean_closure_set(v___f_1422_, 0, v___f_1421_);
return v___f_1422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSMkdirOptions___lam__0(lean_object* v___f_1423_, lean_object* v___f_1424_, lean_object* v_d_1425_){
_start:
{
lean_object* v_recursive_1426_; lean_object* v_mode_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1444_; 
v_recursive_1426_ = lean_ctor_get(v_d_1425_, 0);
v_mode_1427_ = lean_ctor_get(v_d_1425_, 1);
v_isSharedCheck_1444_ = !lean_is_exclusive(v_d_1425_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1429_ = v_d_1425_;
v_isShared_1430_ = v_isSharedCheck_1444_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_mode_1427_);
lean_inc(v_recursive_1426_);
lean_dec(v_d_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1444_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1434_; 
v___x_1431_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_1432_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1423_, v_recursive_1426_);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 1, v___x_1432_);
lean_ctor_set(v___x_1429_, 0, v___x_1431_);
v___x_1434_ = v___x_1429_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1431_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1435_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_1436_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1424_, v_mode_1427_);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = lean_unsigned_to_nat(2u);
v___x_1439_ = lean_mk_empty_array_with_capacity(v___x_1438_);
v___x_1440_ = lean_array_push(v___x_1439_, v___x_1434_);
v___x_1441_ = lean_array_push(v___x_1440_, v___x_1437_);
v___x_1442_ = l_Lasm_JS_Web_Internal_fields(v___x_1441_);
lean_dec_ref(v___x_1441_);
return v___x_1442_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSMkdirOptions(void){
_start:
{
lean_object* v___f_1445_; lean_object* v___f_1446_; lean_object* v___f_1447_; 
v___f_1445_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1446_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0), 1, 0);
v___f_1447_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSMkdirOptions___lam__0), 3, 2);
lean_closure_set(v___f_1447_, 0, v___f_1445_);
lean_closure_set(v___f_1447_, 1, v___f_1446_);
return v___f_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx(lean_object* v_x_1448_){
_start:
{
if (lean_obj_tag(v_x_1448_) == 0)
{
lean_object* v___x_1449_; 
v___x_1449_ = lean_unsigned_to_nat(0u);
return v___x_1449_;
}
else
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_unsigned_to_nat(1u);
return v___x_1450_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx___boxed(lean_object* v_x_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorIdx(v_x_1451_);
lean_dec_ref(v_x_1451_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(lean_object* v_t_1453_, lean_object* v_k_1454_){
_start:
{
if (lean_obj_tag(v_t_1453_) == 0)
{
lean_object* v_value_1455_; lean_object* v___x_1456_; 
v_value_1455_ = lean_ctor_get(v_t_1453_, 0);
lean_inc_ref(v_value_1455_);
lean_dec_ref_known(v_t_1453_, 1);
v___x_1456_ = lean_apply_1(v_k_1454_, v_value_1455_);
return v___x_1456_;
}
else
{
lean_object* v_value_1457_; lean_object* v___x_1458_; 
v_value_1457_ = lean_ctor_get(v_t_1453_, 0);
lean_inc(v_value_1457_);
lean_dec_ref_known(v_t_1453_, 1);
v___x_1458_ = lean_apply_1(v_k_1454_, v_value_1457_);
return v___x_1458_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim(lean_object* v_motive_1459_, lean_object* v_ctorIdx_1460_, lean_object* v_t_1461_, lean_object* v_h_1462_, lean_object* v_k_1463_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_1461_, v_k_1463_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___boxed(lean_object* v_motive_1465_, lean_object* v_ctorIdx_1466_, lean_object* v_t_1467_, lean_object* v_h_1468_, lean_object* v_k_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim(v_motive_1465_, v_ctorIdx_1466_, v_t_1467_, v_h_1468_, v_k_1469_);
lean_dec(v_ctorIdx_1466_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_mkdirOptions_elim___redArg(lean_object* v_t_1471_, lean_object* v_mkdirOptions_1472_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_1471_, v_mkdirOptions_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_mkdirOptions_elim(lean_object* v_motive_1474_, lean_object* v_t_1475_, lean_object* v_h_1476_, lean_object* v_mkdirOptions_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_1475_, v_mkdirOptions_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_longLong_elim___redArg(lean_object* v_t_1479_, lean_object* v_longLong_1480_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_1479_, v_longLong_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_longLong_elim(lean_object* v_motive_1482_, lean_object* v_t_1483_, lean_object* v_h_1484_, lean_object* v_longLong_1485_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lasm_JS_Node_fsPromises_MkdirOptionsOrLongLong_ctorElim___redArg(v_t_1483_, v_longLong_1485_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSMkdirOptionsOrLongLong___lam__0(lean_object* v_x_1487_){
_start:
{
if (lean_obj_tag(v_x_1487_) == 0)
{
lean_object* v_value_1488_; lean_object* v_recursive_1489_; lean_object* v_mode_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1509_; 
v_value_1488_ = lean_ctor_get(v_x_1487_, 0);
lean_inc_ref(v_value_1488_);
lean_dec_ref_known(v_x_1487_, 1);
v_recursive_1489_ = lean_ctor_get(v_value_1488_, 0);
v_mode_1490_ = lean_ctor_get(v_value_1488_, 1);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_value_1488_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1492_ = v_value_1488_;
v_isShared_1493_ = v_isSharedCheck_1509_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_mode_1490_);
lean_inc(v_recursive_1489_);
lean_dec(v_value_1488_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1509_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___f_1494_; lean_object* v___f_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1499_; 
v___f_1494_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1495_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0), 1, 0);
v___x_1496_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_1497_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1494_, v_recursive_1489_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 1, v___x_1497_);
lean_ctor_set(v___x_1492_, 0, v___x_1496_);
v___x_1499_ = v___x_1492_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1496_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v___x_1497_);
v___x_1499_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_1500_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_1501_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1495_, v_mode_1490_);
v___x_1502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1500_);
lean_ctor_set(v___x_1502_, 1, v___x_1501_);
v___x_1503_ = lean_unsigned_to_nat(2u);
v___x_1504_ = lean_mk_empty_array_with_capacity(v___x_1503_);
v___x_1505_ = lean_array_push(v___x_1504_, v___x_1499_);
v___x_1506_ = lean_array_push(v___x_1505_, v___x_1502_);
v___x_1507_ = l_Lasm_JS_Web_Internal_fields(v___x_1506_);
lean_dec_ref(v___x_1506_);
return v___x_1507_;
}
}
}
else
{
lean_object* v_value_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1522_; 
v_value_1510_ = lean_ctor_get(v_x_1487_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_x_1487_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1512_ = v_x_1487_;
v_isShared_1513_ = v_isSharedCheck_1522_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_value_1510_);
lean_dec(v_x_1487_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1522_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; uint8_t v___x_1516_; 
v___x_1514_ = lean_nat_abs(v_value_1510_);
v___x_1515_ = lean_cstr_to_nat("9007199254740991");
v___x_1516_ = lean_nat_dec_le(v___x_1514_, v___x_1515_);
lean_dec(v___x_1514_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1518_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set_tag(v___x_1512_, 5);
v___x_1518_ = v___x_1512_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_value_1510_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
else
{
double v___x_1520_; lean_object* v___x_1521_; 
lean_del_object(v___x_1512_);
v___x_1520_ = l_Float_ofInt(v_value_1510_);
lean_dec(v_value_1510_);
v___x_1521_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1521_, 0, v___x_1520_);
return v___x_1521_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeMkdirOptionsMkdirOptionsOrLongLong___lam__0(lean_object* v_value_1524_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1525_, 0, v_value_1524_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntMkdirOptionsOrLongLong___lam__0(lean_object* v_value_1527_){
_start:
{
lean_object* v___x_1528_; 
v___x_1528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1528_, 0, v_value_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSMkdtempOptions___lam__0(lean_object* v___f_1530_, lean_object* v_d_1531_){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1532_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1533_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1530_, v_d_1531_);
v___x_1534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1532_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
v___x_1535_ = lean_unsigned_to_nat(1u);
v___x_1536_ = lean_mk_empty_array_with_capacity(v___x_1535_);
v___x_1537_ = lean_array_push(v___x_1536_, v___x_1534_);
v___x_1538_ = l_Lasm_JS_Web_Internal_fields(v___x_1537_);
lean_dec_ref(v___x_1537_);
return v___x_1538_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSMkdtempOptions(void){
_start:
{
lean_object* v___f_1539_; lean_object* v___f_1540_; 
v___f_1539_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1540_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_1540_, 0, v___f_1539_);
return v___f_1540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx(lean_object* v_x_1541_){
_start:
{
if (lean_obj_tag(v_x_1541_) == 0)
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_unsigned_to_nat(0u);
return v___x_1542_;
}
else
{
lean_object* v___x_1543_; 
v___x_1543_ = lean_unsigned_to_nat(1u);
return v___x_1543_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx___boxed(lean_object* v_x_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorIdx(v_x_1544_);
lean_dec_ref(v_x_1544_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(lean_object* v_t_1546_, lean_object* v_k_1547_){
_start:
{
if (lean_obj_tag(v_t_1546_) == 0)
{
lean_object* v_value_1548_; lean_object* v___x_1549_; 
v_value_1548_ = lean_ctor_get(v_t_1546_, 0);
lean_inc_ref(v_value_1548_);
lean_dec_ref_known(v_t_1546_, 1);
v___x_1549_ = lean_apply_1(v_k_1547_, v_value_1548_);
return v___x_1549_;
}
else
{
lean_object* v_value_1550_; lean_object* v___x_1551_; 
v_value_1550_ = lean_ctor_get(v_t_1546_, 0);
lean_inc(v_value_1550_);
lean_dec_ref_known(v_t_1546_, 1);
v___x_1551_ = lean_apply_1(v_k_1547_, v_value_1550_);
return v___x_1551_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim(lean_object* v_motive_1552_, lean_object* v_ctorIdx_1553_, lean_object* v_t_1554_, lean_object* v_h_1555_, lean_object* v_k_1556_){
_start:
{
lean_object* v___x_1557_; 
v___x_1557_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_1554_, v_k_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___boxed(lean_object* v_motive_1558_, lean_object* v_ctorIdx_1559_, lean_object* v_t_1560_, lean_object* v_h_1561_, lean_object* v_k_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim(v_motive_1558_, v_ctorIdx_1559_, v_t_1560_, v_h_1561_, v_k_1562_);
lean_dec(v_ctorIdx_1559_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_domString_elim___redArg(lean_object* v_t_1564_, lean_object* v_domString_1565_){
_start:
{
lean_object* v___x_1566_; 
v___x_1566_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_1564_, v_domString_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_domString_elim(lean_object* v_motive_1567_, lean_object* v_t_1568_, lean_object* v_h_1569_, lean_object* v_domString_1570_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_1568_, v_domString_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_mkdtempOptions_elim___redArg(lean_object* v_t_1572_, lean_object* v_mkdtempOptions_1573_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_1572_, v_mkdtempOptions_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_mkdtempOptions_elim(lean_object* v_motive_1575_, lean_object* v_t_1576_, lean_object* v_h_1577_, lean_object* v_mkdtempOptions_1578_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lasm_JS_Node_fsPromises_DOMStringOrMkdtempOptions_ctorElim___redArg(v_t_1576_, v_mkdtempOptions_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrMkdtempOptions___lam__0(lean_object* v_x_1580_){
_start:
{
if (lean_obj_tag(v_x_1580_) == 0)
{
lean_object* v_value_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
v_value_1581_ = lean_ctor_get(v_x_1580_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_x_1580_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1583_ = v_x_1580_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_value_1581_);
lean_dec(v_x_1580_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
lean_ctor_set_tag(v___x_1583_, 4);
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_value_1581_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
else
{
lean_object* v_value_1589_; lean_object* v___f_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v_value_1589_ = lean_ctor_get(v_x_1580_, 0);
lean_inc(v_value_1589_);
lean_dec_ref_known(v_x_1580_, 1);
v___f_1590_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_1591_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1592_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1590_, v_value_1589_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = lean_unsigned_to_nat(1u);
v___x_1595_ = lean_mk_empty_array_with_capacity(v___x_1594_);
v___x_1596_ = lean_array_push(v___x_1595_, v___x_1593_);
v___x_1597_ = l_Lasm_JS_Web_Internal_fields(v___x_1596_);
lean_dec_ref(v___x_1596_);
return v___x_1597_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrMkdtempOptions___lam__0(lean_object* v_value_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1600_, 0, v_value_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeMkdtempOptionsDOMStringOrMkdtempOptions___lam__0(lean_object* v_value_1602_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1603_, 0, v_value_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReaddirOptions___lam__0(lean_object* v___f_1605_, lean_object* v___f_1606_, lean_object* v_d_1607_){
_start:
{
lean_object* v_encoding_1608_; lean_object* v_withFileTypes_1609_; lean_object* v_recursive_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v_encoding_1608_ = lean_ctor_get(v_d_1607_, 0);
lean_inc(v_encoding_1608_);
v_withFileTypes_1609_ = lean_ctor_get(v_d_1607_, 1);
lean_inc(v_withFileTypes_1609_);
v_recursive_1610_ = lean_ctor_get(v_d_1607_, 2);
lean_inc(v_recursive_1610_);
lean_dec_ref(v_d_1607_);
v___x_1611_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1612_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1605_, v_encoding_1608_);
v___x_1613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1611_);
lean_ctor_set(v___x_1613_, 1, v___x_1612_);
v___x_1614_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
lean_inc_ref(v___f_1606_);
v___x_1615_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1606_, v_withFileTypes_1609_);
v___x_1616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1614_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
v___x_1617_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_1618_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1606_, v_recursive_1610_);
v___x_1619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1617_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
v___x_1620_ = lean_unsigned_to_nat(3u);
v___x_1621_ = lean_mk_empty_array_with_capacity(v___x_1620_);
v___x_1622_ = lean_array_push(v___x_1621_, v___x_1613_);
v___x_1623_ = lean_array_push(v___x_1622_, v___x_1616_);
v___x_1624_ = lean_array_push(v___x_1623_, v___x_1619_);
v___x_1625_ = l_Lasm_JS_Web_Internal_fields(v___x_1624_);
lean_dec_ref(v___x_1624_);
return v___x_1625_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReaddirOptions(void){
_start:
{
lean_object* v___f_1626_; lean_object* v___f_1627_; lean_object* v___f_1628_; 
v___f_1626_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1627_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1628_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReaddirOptions___lam__0), 3, 2);
lean_closure_set(v___f_1628_, 0, v___f_1626_);
lean_closure_set(v___f_1628_, 1, v___f_1627_);
return v___f_1628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx(lean_object* v_x_1629_){
_start:
{
if (lean_obj_tag(v_x_1629_) == 0)
{
lean_object* v___x_1630_; 
v___x_1630_ = lean_unsigned_to_nat(0u);
return v___x_1630_;
}
else
{
lean_object* v___x_1631_; 
v___x_1631_ = lean_unsigned_to_nat(1u);
return v___x_1631_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx___boxed(lean_object* v_x_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorIdx(v_x_1632_);
lean_dec_ref(v_x_1632_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(lean_object* v_t_1634_, lean_object* v_k_1635_){
_start:
{
lean_object* v_value_1636_; lean_object* v___x_1637_; 
v_value_1636_ = lean_ctor_get(v_t_1634_, 0);
lean_inc_ref(v_value_1636_);
lean_dec_ref(v_t_1634_);
v___x_1637_ = lean_apply_1(v_k_1635_, v_value_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim(lean_object* v_motive_1638_, lean_object* v_ctorIdx_1639_, lean_object* v_t_1640_, lean_object* v_h_1641_, lean_object* v_k_1642_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_1640_, v_k_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___boxed(lean_object* v_motive_1644_, lean_object* v_ctorIdx_1645_, lean_object* v_t_1646_, lean_object* v_h_1647_, lean_object* v_k_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim(v_motive_1644_, v_ctorIdx_1645_, v_t_1646_, v_h_1647_, v_k_1648_);
lean_dec(v_ctorIdx_1645_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_domString_elim___redArg(lean_object* v_t_1650_, lean_object* v_domString_1651_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_1650_, v_domString_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_domString_elim(lean_object* v_motive_1653_, lean_object* v_t_1654_, lean_object* v_h_1655_, lean_object* v_domString_1656_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_1654_, v_domString_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_readdirOptions_elim___redArg(lean_object* v_t_1658_, lean_object* v_readdirOptions_1659_){
_start:
{
lean_object* v___x_1660_; 
v___x_1660_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_1658_, v_readdirOptions_1659_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_readdirOptions_elim(lean_object* v_motive_1661_, lean_object* v_t_1662_, lean_object* v_h_1663_, lean_object* v_readdirOptions_1664_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReaddirOptions_ctorElim___redArg(v_t_1662_, v_readdirOptions_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrReaddirOptions___lam__0(lean_object* v_x_1666_){
_start:
{
if (lean_obj_tag(v_x_1666_) == 0)
{
lean_object* v_value_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
v_value_1667_ = lean_ctor_get(v_x_1666_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_x_1666_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v_x_1666_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_value_1667_);
lean_dec(v_x_1666_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
lean_ctor_set_tag(v___x_1669_, 4);
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_value_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
else
{
lean_object* v_value_1675_; lean_object* v_encoding_1676_; lean_object* v_withFileTypes_1677_; lean_object* v_recursive_1678_; lean_object* v___f_1679_; lean_object* v___f_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v_value_1675_ = lean_ctor_get(v_x_1666_, 0);
lean_inc_ref(v_value_1675_);
lean_dec_ref_known(v_x_1666_, 1);
v_encoding_1676_ = lean_ctor_get(v_value_1675_, 0);
lean_inc(v_encoding_1676_);
v_withFileTypes_1677_ = lean_ctor_get(v_value_1675_, 1);
lean_inc(v_withFileTypes_1677_);
v_recursive_1678_ = lean_ctor_get(v_value_1675_, 2);
lean_inc(v_recursive_1678_);
lean_dec_ref(v_value_1675_);
v___f_1679_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1680_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_1681_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1682_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1679_, v_encoding_1676_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = lean_mk_string_unchecked("withFileTypes", 13, 13);
lean_inc_ref(v___f_1680_);
v___x_1685_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1680_, v_withFileTypes_1677_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1684_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
v___x_1687_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_1688_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1680_, v_recursive_1678_);
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1687_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = lean_unsigned_to_nat(3u);
v___x_1691_ = lean_mk_empty_array_with_capacity(v___x_1690_);
v___x_1692_ = lean_array_push(v___x_1691_, v___x_1683_);
v___x_1693_ = lean_array_push(v___x_1692_, v___x_1686_);
v___x_1694_ = lean_array_push(v___x_1693_, v___x_1689_);
v___x_1695_ = l_Lasm_JS_Web_Internal_fields(v___x_1694_);
lean_dec_ref(v___x_1694_);
return v___x_1695_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrReaddirOptions___lam__0(lean_object* v_value_1697_){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_value_1697_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReaddirOptionsDOMStringOrReaddirOptions___lam__0(lean_object* v_value_1700_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1701_, 0, v_value_1700_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorIdx(lean_object* v_x_1703_){
_start:
{
switch(lean_obj_tag(v_x_1703_))
{
case 0:
{
lean_object* v___x_1704_; 
v___x_1704_ = lean_unsigned_to_nat(0u);
return v___x_1704_;
}
case 1:
{
lean_object* v___x_1705_; 
v___x_1705_ = lean_unsigned_to_nat(1u);
return v___x_1705_;
}
default: 
{
lean_object* v___x_1706_; 
v___x_1706_ = lean_unsigned_to_nat(2u);
return v___x_1706_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorIdx___boxed(lean_object* v_x_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorIdx(v_x_1707_);
lean_dec_ref(v_x_1707_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(lean_object* v_t_1709_, lean_object* v_k_1710_){
_start:
{
if (lean_obj_tag(v_t_1709_) == 2)
{
lean_object* v_value_1711_; lean_object* v___x_1712_; 
v_value_1711_ = lean_ctor_get(v_t_1709_, 0);
lean_inc(v_value_1711_);
lean_dec_ref_known(v_t_1709_, 1);
v___x_1712_ = lean_apply_1(v_k_1710_, v_value_1711_);
return v___x_1712_;
}
else
{
lean_object* v_value_1713_; lean_object* v___x_1714_; 
v_value_1713_ = lean_ctor_get(v_t_1709_, 0);
lean_inc_ref(v_value_1713_);
lean_dec_ref(v_t_1709_);
v___x_1714_ = lean_apply_1(v_k_1710_, v_value_1713_);
return v___x_1714_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim(lean_object* v_motive_1715_, lean_object* v_ctorIdx_1716_, lean_object* v_t_1717_, lean_object* v_h_1718_, lean_object* v_k_1719_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_1717_, v_k_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___boxed(lean_object* v_motive_1721_, lean_object* v_ctorIdx_1722_, lean_object* v_t_1723_, lean_object* v_h_1724_, lean_object* v_k_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim(v_motive_1721_, v_ctorIdx_1722_, v_t_1723_, v_h_1724_, v_k_1725_);
lean_dec(v_ctorIdx_1722_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_domString_elim___redArg(lean_object* v_t_1727_, lean_object* v_domString_1728_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_1727_, v_domString_1728_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_domString_elim(lean_object* v_motive_1730_, lean_object* v_t_1731_, lean_object* v_h_1732_, lean_object* v_domString_1733_){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_1731_, v_domString_1733_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_uint8Array_elim___redArg(lean_object* v_t_1735_, lean_object* v_uint8Array_1736_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_1735_, v_uint8Array_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_uint8Array_elim(lean_object* v_motive_1738_, lean_object* v_t_1739_, lean_object* v_h_1740_, lean_object* v_uint8Array_1741_){
_start:
{
lean_object* v___x_1742_; 
v___x_1742_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_1739_, v_uint8Array_1741_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_dirent_elim___redArg(lean_object* v_t_1743_, lean_object* v_dirent_1744_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_1743_, v_dirent_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_dirent_elim(lean_object* v_motive_1746_, lean_object* v_t_1747_, lean_object* v_h_1748_, lean_object* v_dirent_1749_){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l_Lasm_JS_Node_fs_DOMStringOrUint8ArrayOrDirent_ctorElim___redArg(v_t_1747_, v_dirent_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8ArrayOrDirent___lam__0(lean_object* v_x_1751_){
_start:
{
switch(lean_obj_tag(v_x_1751_))
{
case 4:
{
lean_object* v_s_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1760_; 
v_s_1752_ = lean_ctor_get(v_x_1751_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v_x_1751_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1754_ = v_x_1751_;
v_isShared_1755_ = v_isSharedCheck_1760_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_s_1752_);
lean_dec(v_x_1751_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1760_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
lean_ctor_set_tag(v___x_1754_, 0);
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_s_1752_);
v___x_1757_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1757_);
return v___x_1758_;
}
}
}
case 6:
{
lean_object* v_b_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1769_; 
v_b_1761_ = lean_ctor_get(v_x_1751_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_x_1751_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1763_ = v_x_1751_;
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_b_1761_);
lean_dec(v_x_1751_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
lean_ctor_set_tag(v___x_1763_, 1);
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_b_1761_);
v___x_1766_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
return v___x_1767_;
}
}
}
case 9:
{
lean_object* v_value_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v_value_1770_ = lean_ctor_get(v_x_1751_, 0);
lean_inc(v_value_1770_);
lean_dec_ref_known(v_x_1751_, 2);
v___x_1771_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1771_, 0, v_value_1770_);
v___x_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
return v___x_1772_;
}
default: 
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
lean_dec(v_x_1751_);
v___x_1773_ = lean_mk_string_unchecked("", 0, 0);
v___x_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1773_);
return v___x_1774_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDOMStringOrUint8ArrayOrDirent(void){
_start:
{
lean_object* v___f_1775_; lean_object* v___x_1776_; uint8_t v___x_1777_; lean_object* v___x_1778_; 
v___f_1775_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8ArrayOrDirent___lam__0), 1, 0);
v___x_1776_ = lean_mk_string_unchecked("Lasm.JS.Node.fs.DOMStringOrUint8ArrayOrDirent", 45, 45);
v___x_1777_ = 0;
v___x_1778_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1778_, 0, v___f_1775_);
lean_ctor_set(v___x_1778_, 1, v___x_1776_);
lean_ctor_set_uint8(v___x_1778_, sizeof(void*)*2, v___x_1777_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptions__1___lam__0(lean_object* v___f_1779_, lean_object* v___f_1780_, lean_object* v___f_1781_, lean_object* v_d_1782_){
_start:
{
lean_object* v_encoding_1783_; lean_object* v_flag_1784_; lean_object* v_signal_1785_; lean_object* v_buffer_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v_encoding_1783_ = lean_ctor_get(v_d_1782_, 0);
lean_inc(v_encoding_1783_);
v_flag_1784_ = lean_ctor_get(v_d_1782_, 1);
lean_inc(v_flag_1784_);
v_signal_1785_ = lean_ctor_get(v_d_1782_, 2);
lean_inc(v_signal_1785_);
v_buffer_1786_ = lean_ctor_get(v_d_1782_, 3);
lean_inc(v_buffer_1786_);
lean_dec_ref(v_d_1782_);
v___x_1787_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_1779_);
v___x_1788_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1779_, v_encoding_1783_);
v___x_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1787_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_1791_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1779_, v_flag_1784_);
v___x_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1790_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1794_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1780_, v_signal_1785_);
v___x_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1793_);
lean_ctor_set(v___x_1795_, 1, v___x_1794_);
v___x_1796_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_1797_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1781_, v_buffer_1786_);
v___x_1798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1796_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
v___x_1799_ = lean_unsigned_to_nat(4u);
v___x_1800_ = lean_mk_empty_array_with_capacity(v___x_1799_);
v___x_1801_ = lean_array_push(v___x_1800_, v___x_1789_);
v___x_1802_ = lean_array_push(v___x_1801_, v___x_1792_);
v___x_1803_ = lean_array_push(v___x_1802_, v___x_1795_);
v___x_1804_ = lean_array_push(v___x_1803_, v___x_1798_);
v___x_1805_ = l_Lasm_JS_Web_Internal_fields(v___x_1804_);
lean_dec_ref(v___x_1804_);
return v___x_1805_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadFileOptions__1(void){
_start:
{
lean_object* v___f_1806_; lean_object* v___f_1807_; lean_object* v___f_1808_; lean_object* v___f_1809_; 
v___f_1806_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1807_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1808_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___f_1809_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadFileOptions__1___lam__0), 4, 3);
lean_closure_set(v___f_1809_, 0, v___f_1806_);
lean_closure_set(v___f_1809_, 1, v___f_1807_);
lean_closure_set(v___f_1809_, 2, v___f_1808_);
return v___f_1809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx(lean_object* v_x_1810_){
_start:
{
if (lean_obj_tag(v_x_1810_) == 0)
{
lean_object* v___x_1811_; 
v___x_1811_ = lean_unsigned_to_nat(0u);
return v___x_1811_;
}
else
{
lean_object* v___x_1812_; 
v___x_1812_ = lean_unsigned_to_nat(1u);
return v___x_1812_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorIdx(v_x_1813_);
lean_dec_ref(v_x_1813_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_1815_, lean_object* v_k_1816_){
_start:
{
lean_object* v_value_1817_; lean_object* v___x_1818_; 
v_value_1817_ = lean_ctor_get(v_t_1815_, 0);
lean_inc_ref(v_value_1817_);
lean_dec_ref(v_t_1815_);
v___x_1818_ = lean_apply_1(v_k_1816_, v_value_1817_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim(lean_object* v_motive_1819_, lean_object* v_ctorIdx_1820_, lean_object* v_t_1821_, lean_object* v_h_1822_, lean_object* v_k_1823_){
_start:
{
lean_object* v___x_1824_; 
v___x_1824_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_1821_, v_k_1823_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_1825_, lean_object* v_ctorIdx_1826_, lean_object* v_t_1827_, lean_object* v_h_1828_, lean_object* v_k_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim(v_motive_1825_, v_ctorIdx_1826_, v_t_1827_, v_h_1828_, v_k_1829_);
lean_dec(v_ctorIdx_1826_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_readFileOptions_elim___redArg(lean_object* v_t_1831_, lean_object* v_readFileOptions_1832_){
_start:
{
lean_object* v___x_1833_; 
v___x_1833_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_1831_, v_readFileOptions_1832_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_readFileOptions_elim(lean_object* v_motive_1834_, lean_object* v_t_1835_, lean_object* v_h_1836_, lean_object* v_readFileOptions_1837_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_1835_, v_readFileOptions_1837_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_1839_, lean_object* v_domString_1840_){
_start:
{
lean_object* v___x_1841_; 
v___x_1841_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_1839_, v_domString_1840_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_domString_elim(lean_object* v_motive_1842_, lean_object* v_t_1843_, lean_object* v_h_1844_, lean_object* v_domString_1845_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l_Lasm_JS_Node_fsPromises_ReadFileOptionsOrDOMString_ctorElim___redArg(v_t_1843_, v_domString_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadFileOptionsOrDOMString__1___lam__0(lean_object* v_x_1847_){
_start:
{
if (lean_obj_tag(v_x_1847_) == 0)
{
lean_object* v_value_1848_; lean_object* v_encoding_1849_; lean_object* v_flag_1850_; lean_object* v_signal_1851_; lean_object* v_buffer_1852_; lean_object* v___f_1853_; lean_object* v___f_1854_; lean_object* v___f_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v_value_1848_ = lean_ctor_get(v_x_1847_, 0);
lean_inc_ref(v_value_1848_);
lean_dec_ref_known(v_x_1847_, 1);
v_encoding_1849_ = lean_ctor_get(v_value_1848_, 0);
lean_inc(v_encoding_1849_);
v_flag_1850_ = lean_ctor_get(v_value_1848_, 1);
lean_inc(v_flag_1850_);
v_signal_1851_ = lean_ctor_get(v_value_1848_, 2);
lean_inc(v_signal_1851_);
v_buffer_1852_ = lean_ctor_get(v_value_1848_, 3);
lean_inc(v_buffer_1852_);
lean_dec_ref(v_value_1848_);
v___f_1853_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1854_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1855_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrJSFunction___lam__0), 1, 0);
v___x_1856_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_1853_);
v___x_1857_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1853_, v_encoding_1849_);
v___x_1858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1856_);
lean_ctor_set(v___x_1858_, 1, v___x_1857_);
v___x_1859_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_1860_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1853_, v_flag_1850_);
v___x_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1859_);
lean_ctor_set(v___x_1861_, 1, v___x_1860_);
v___x_1862_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1863_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1854_, v_signal_1851_);
v___x_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1862_);
lean_ctor_set(v___x_1864_, 1, v___x_1863_);
v___x_1865_ = lean_mk_string_unchecked("buffer", 6, 6);
v___x_1866_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1855_, v_buffer_1852_);
v___x_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1865_);
lean_ctor_set(v___x_1867_, 1, v___x_1866_);
v___x_1868_ = lean_unsigned_to_nat(4u);
v___x_1869_ = lean_mk_empty_array_with_capacity(v___x_1868_);
v___x_1870_ = lean_array_push(v___x_1869_, v___x_1858_);
v___x_1871_ = lean_array_push(v___x_1870_, v___x_1861_);
v___x_1872_ = lean_array_push(v___x_1871_, v___x_1864_);
v___x_1873_ = lean_array_push(v___x_1872_, v___x_1867_);
v___x_1874_ = l_Lasm_JS_Web_Internal_fields(v___x_1873_);
lean_dec_ref(v___x_1873_);
return v___x_1874_;
}
else
{
lean_object* v_value_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
v_value_1875_ = lean_ctor_get(v_x_1847_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v_x_1847_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v_x_1847_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_value_1875_);
lean_dec(v_x_1847_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
lean_ctor_set_tag(v___x_1877_, 4);
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_value_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadFileOptionsReadFileOptionsOrDOMString__1___lam__0(lean_object* v_value_1884_){
_start:
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1885_, 0, v_value_1884_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringReadFileOptionsOrDOMString__1___lam__0(lean_object* v_value_1887_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1888_, 0, v_value_1887_);
return v___x_1888_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlinkOptions(void){
_start:
{
lean_object* v___f_1890_; lean_object* v___f_1891_; 
v___f_1890_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1891_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_1891_, 0, v___f_1890_);
return v___f_1891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx(lean_object* v_x_1892_){
_start:
{
if (lean_obj_tag(v_x_1892_) == 0)
{
lean_object* v___x_1893_; 
v___x_1893_ = lean_unsigned_to_nat(0u);
return v___x_1893_;
}
else
{
lean_object* v___x_1894_; 
v___x_1894_ = lean_unsigned_to_nat(1u);
return v___x_1894_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx___boxed(lean_object* v_x_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorIdx(v_x_1895_);
lean_dec_ref(v_x_1895_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(lean_object* v_t_1897_, lean_object* v_k_1898_){
_start:
{
if (lean_obj_tag(v_t_1897_) == 0)
{
lean_object* v_value_1899_; lean_object* v___x_1900_; 
v_value_1899_ = lean_ctor_get(v_t_1897_, 0);
lean_inc_ref(v_value_1899_);
lean_dec_ref_known(v_t_1897_, 1);
v___x_1900_ = lean_apply_1(v_k_1898_, v_value_1899_);
return v___x_1900_;
}
else
{
lean_object* v_value_1901_; lean_object* v___x_1902_; 
v_value_1901_ = lean_ctor_get(v_t_1897_, 0);
lean_inc(v_value_1901_);
lean_dec_ref_known(v_t_1897_, 1);
v___x_1902_ = lean_apply_1(v_k_1898_, v_value_1901_);
return v___x_1902_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim(lean_object* v_motive_1903_, lean_object* v_ctorIdx_1904_, lean_object* v_t_1905_, lean_object* v_h_1906_, lean_object* v_k_1907_){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_1905_, v_k_1907_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___boxed(lean_object* v_motive_1909_, lean_object* v_ctorIdx_1910_, lean_object* v_t_1911_, lean_object* v_h_1912_, lean_object* v_k_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim(v_motive_1909_, v_ctorIdx_1910_, v_t_1911_, v_h_1912_, v_k_1913_);
lean_dec(v_ctorIdx_1910_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_domString_elim___redArg(lean_object* v_t_1915_, lean_object* v_domString_1916_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_1915_, v_domString_1916_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_domString_elim(lean_object* v_motive_1918_, lean_object* v_t_1919_, lean_object* v_h_1920_, lean_object* v_domString_1921_){
_start:
{
lean_object* v___x_1922_; 
v___x_1922_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_1919_, v_domString_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_readlinkOptions_elim___redArg(lean_object* v_t_1923_, lean_object* v_readlinkOptions_1924_){
_start:
{
lean_object* v___x_1925_; 
v___x_1925_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_1923_, v_readlinkOptions_1924_);
return v___x_1925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_readlinkOptions_elim(lean_object* v_motive_1926_, lean_object* v_t_1927_, lean_object* v_h_1928_, lean_object* v_readlinkOptions_1929_){
_start:
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lasm_JS_Node_fsPromises_DOMStringOrReadlinkOptions_ctorElim___redArg(v_t_1927_, v_readlinkOptions_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrReadlinkOptions___lam__0(lean_object* v_x_1931_){
_start:
{
if (lean_obj_tag(v_x_1931_) == 0)
{
lean_object* v_value_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
v_value_1932_ = lean_ctor_get(v_x_1931_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v_x_1931_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v_x_1931_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_value_1932_);
lean_dec(v_x_1931_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
lean_ctor_set_tag(v___x_1934_, 4);
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_value_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
else
{
lean_object* v_value_1940_; lean_object* v___f_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v_value_1940_ = lean_ctor_get(v_x_1931_, 0);
lean_inc(v_value_1940_);
lean_dec_ref_known(v_x_1931_, 1);
v___f_1941_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_1942_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1943_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1941_, v_value_1940_);
v___x_1944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1942_);
lean_ctor_set(v___x_1944_, 1, v___x_1943_);
v___x_1945_ = lean_unsigned_to_nat(1u);
v___x_1946_ = lean_mk_empty_array_with_capacity(v___x_1945_);
v___x_1947_ = lean_array_push(v___x_1946_, v___x_1944_);
v___x_1948_ = l_Lasm_JS_Web_Internal_fields(v___x_1947_);
lean_dec_ref(v___x_1947_);
return v___x_1948_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrReadlinkOptions___lam__0(lean_object* v_value_1950_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1951_, 0, v_value_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadlinkOptionsDOMStringOrReadlinkOptions___lam__0(lean_object* v_value_1953_){
_start:
{
lean_object* v___x_1954_; 
v___x_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1954_, 0, v_value_1953_);
return v___x_1954_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSRealpathOptions(void){
_start:
{
lean_object* v___f_1956_; lean_object* v___f_1957_; 
v___f_1956_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1957_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSMkdtempOptions___lam__0), 2, 1);
lean_closure_set(v___f_1957_, 0, v___f_1956_);
return v___f_1957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx(lean_object* v_x_1958_){
_start:
{
if (lean_obj_tag(v_x_1958_) == 0)
{
lean_object* v___x_1959_; 
v___x_1959_ = lean_unsigned_to_nat(0u);
return v___x_1959_;
}
else
{
lean_object* v___x_1960_; 
v___x_1960_ = lean_unsigned_to_nat(1u);
return v___x_1960_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx___boxed(lean_object* v_x_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorIdx(v_x_1961_);
lean_dec_ref(v_x_1961_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(lean_object* v_t_1963_, lean_object* v_k_1964_){
_start:
{
if (lean_obj_tag(v_t_1963_) == 0)
{
lean_object* v_value_1965_; lean_object* v___x_1966_; 
v_value_1965_ = lean_ctor_get(v_t_1963_, 0);
lean_inc_ref(v_value_1965_);
lean_dec_ref_known(v_t_1963_, 1);
v___x_1966_ = lean_apply_1(v_k_1964_, v_value_1965_);
return v___x_1966_;
}
else
{
lean_object* v_value_1967_; lean_object* v___x_1968_; 
v_value_1967_ = lean_ctor_get(v_t_1963_, 0);
lean_inc(v_value_1967_);
lean_dec_ref_known(v_t_1963_, 1);
v___x_1968_ = lean_apply_1(v_k_1964_, v_value_1967_);
return v___x_1968_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim(lean_object* v_motive_1969_, lean_object* v_ctorIdx_1970_, lean_object* v_t_1971_, lean_object* v_h_1972_, lean_object* v_k_1973_){
_start:
{
lean_object* v___x_1974_; 
v___x_1974_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_1971_, v_k_1973_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___boxed(lean_object* v_motive_1975_, lean_object* v_ctorIdx_1976_, lean_object* v_t_1977_, lean_object* v_h_1978_, lean_object* v_k_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim(v_motive_1975_, v_ctorIdx_1976_, v_t_1977_, v_h_1978_, v_k_1979_);
lean_dec(v_ctorIdx_1976_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_domString_elim___redArg(lean_object* v_t_1981_, lean_object* v_domString_1982_){
_start:
{
lean_object* v___x_1983_; 
v___x_1983_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_1981_, v_domString_1982_);
return v___x_1983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_domString_elim(lean_object* v_motive_1984_, lean_object* v_t_1985_, lean_object* v_h_1986_, lean_object* v_domString_1987_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_1985_, v_domString_1987_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_realpathOptions_elim___redArg(lean_object* v_t_1989_, lean_object* v_realpathOptions_1990_){
_start:
{
lean_object* v___x_1991_; 
v___x_1991_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_1989_, v_realpathOptions_1990_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_realpathOptions_elim(lean_object* v_motive_1992_, lean_object* v_t_1993_, lean_object* v_h_1994_, lean_object* v_realpathOptions_1995_){
_start:
{
lean_object* v___x_1996_; 
v___x_1996_ = l_Lasm_JS_Node_fsPromises_DOMStringOrRealpathOptions_ctorElim___redArg(v_t_1993_, v_realpathOptions_1995_);
return v___x_1996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrRealpathOptions___lam__0(lean_object* v_x_1997_){
_start:
{
if (lean_obj_tag(v_x_1997_) == 0)
{
lean_object* v_value_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
v_value_1998_ = lean_ctor_get(v_x_1997_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v_x_1997_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v_x_1997_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_value_1998_);
lean_dec(v_x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
lean_ctor_set_tag(v___x_2000_, 4);
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_value_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
else
{
lean_object* v_value_2006_; lean_object* v___f_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v_value_2006_ = lean_ctor_get(v_x_1997_, 0);
lean_inc(v_value_2006_);
lean_dec_ref_known(v_x_1997_, 1);
v___f_2007_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_2008_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_2009_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2007_, v_value_2006_);
v___x_2010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2010_, 0, v___x_2008_);
lean_ctor_set(v___x_2010_, 1, v___x_2009_);
v___x_2011_ = lean_unsigned_to_nat(1u);
v___x_2012_ = lean_mk_empty_array_with_capacity(v___x_2011_);
v___x_2013_ = lean_array_push(v___x_2012_, v___x_2010_);
v___x_2014_ = l_Lasm_JS_Web_Internal_fields(v___x_2013_);
lean_dec_ref(v___x_2013_);
return v___x_2014_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrRealpathOptions___lam__0(lean_object* v_value_2016_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v_value_2016_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeRealpathOptionsDOMStringOrRealpathOptions___lam__0(lean_object* v_value_2019_){
_start:
{
lean_object* v___x_2020_; 
v___x_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2020_, 0, v_value_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSRmdirOptions___lam__0(lean_object* v___f_2022_, lean_object* v___f_2023_, lean_object* v_d_2024_){
_start:
{
lean_object* v_maxRetries_2025_; lean_object* v_recursive_2026_; lean_object* v_retryDelay_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v_maxRetries_2025_ = lean_ctor_get(v_d_2024_, 0);
lean_inc(v_maxRetries_2025_);
v_recursive_2026_ = lean_ctor_get(v_d_2024_, 1);
lean_inc(v_recursive_2026_);
v_retryDelay_2027_ = lean_ctor_get(v_d_2024_, 2);
lean_inc(v_retryDelay_2027_);
lean_dec_ref(v_d_2024_);
v___x_2028_ = lean_mk_string_unchecked("maxRetries", 10, 10);
lean_inc_ref(v___f_2022_);
v___x_2029_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2022_, v_maxRetries_2025_);
v___x_2030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2028_);
lean_ctor_set(v___x_2030_, 1, v___x_2029_);
v___x_2031_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_2032_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2023_, v_recursive_2026_);
v___x_2033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2031_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
v___x_2034_ = lean_mk_string_unchecked("retryDelay", 10, 10);
v___x_2035_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2022_, v_retryDelay_2027_);
v___x_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2034_);
lean_ctor_set(v___x_2036_, 1, v___x_2035_);
v___x_2037_ = lean_unsigned_to_nat(3u);
v___x_2038_ = lean_mk_empty_array_with_capacity(v___x_2037_);
v___x_2039_ = lean_array_push(v___x_2038_, v___x_2030_);
v___x_2040_ = lean_array_push(v___x_2039_, v___x_2033_);
v___x_2041_ = lean_array_push(v___x_2040_, v___x_2036_);
v___x_2042_ = l_Lasm_JS_Web_Internal_fields(v___x_2041_);
lean_dec_ref(v___x_2041_);
return v___x_2042_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSRmdirOptions(void){
_start:
{
lean_object* v___f_2043_; lean_object* v___f_2044_; lean_object* v___f_2045_; 
v___f_2043_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_2044_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2045_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSRmdirOptions___lam__0), 3, 2);
lean_closure_set(v___f_2045_, 0, v___f_2043_);
lean_closure_set(v___f_2045_, 1, v___f_2044_);
return v___f_2045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSRmOptions___lam__0(lean_object* v___f_2046_, lean_object* v___f_2047_, lean_object* v_d_2048_){
_start:
{
lean_object* v_force_2049_; lean_object* v_maxRetries_2050_; lean_object* v_recursive_2051_; lean_object* v_retryDelay_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v_force_2049_ = lean_ctor_get(v_d_2048_, 0);
lean_inc(v_force_2049_);
v_maxRetries_2050_ = lean_ctor_get(v_d_2048_, 1);
lean_inc(v_maxRetries_2050_);
v_recursive_2051_ = lean_ctor_get(v_d_2048_, 2);
lean_inc(v_recursive_2051_);
v_retryDelay_2052_ = lean_ctor_get(v_d_2048_, 3);
lean_inc(v_retryDelay_2052_);
lean_dec_ref(v_d_2048_);
v___x_2053_ = lean_mk_string_unchecked("force", 5, 5);
lean_inc_ref(v___f_2046_);
v___x_2054_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2046_, v_force_2049_);
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = lean_mk_string_unchecked("maxRetries", 10, 10);
lean_inc_ref(v___f_2047_);
v___x_2057_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2047_, v_maxRetries_2050_);
v___x_2058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2056_);
lean_ctor_set(v___x_2058_, 1, v___x_2057_);
v___x_2059_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_2060_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2046_, v_recursive_2051_);
v___x_2061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2059_);
lean_ctor_set(v___x_2061_, 1, v___x_2060_);
v___x_2062_ = lean_mk_string_unchecked("retryDelay", 10, 10);
v___x_2063_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2047_, v_retryDelay_2052_);
v___x_2064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = lean_unsigned_to_nat(4u);
v___x_2066_ = lean_mk_empty_array_with_capacity(v___x_2065_);
v___x_2067_ = lean_array_push(v___x_2066_, v___x_2055_);
v___x_2068_ = lean_array_push(v___x_2067_, v___x_2058_);
v___x_2069_ = lean_array_push(v___x_2068_, v___x_2061_);
v___x_2070_ = lean_array_push(v___x_2069_, v___x_2064_);
v___x_2071_ = l_Lasm_JS_Web_Internal_fields(v___x_2070_);
lean_dec_ref(v___x_2070_);
return v___x_2071_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSRmOptions(void){
_start:
{
lean_object* v___f_2072_; lean_object* v___f_2073_; lean_object* v___f_2074_; 
v___f_2072_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2073_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_2074_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSRmOptions___lam__0), 3, 2);
lean_closure_set(v___f_2074_, 0, v___f_2072_);
lean_closure_set(v___f_2074_, 1, v___f_2073_);
return v___f_2074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStatOptions__1___lam__0(lean_object* v___f_2075_, lean_object* v_d_2076_){
_start:
{
lean_object* v_bigint_2077_; lean_object* v_throwIfNoEntry_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2095_; 
v_bigint_2077_ = lean_ctor_get(v_d_2076_, 0);
v_throwIfNoEntry_2078_ = lean_ctor_get(v_d_2076_, 1);
v_isSharedCheck_2095_ = !lean_is_exclusive(v_d_2076_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2080_ = v_d_2076_;
v_isShared_2081_ = v_isSharedCheck_2095_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_throwIfNoEntry_2078_);
lean_inc(v_bigint_2077_);
lean_dec(v_d_2076_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2095_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2085_; 
v___x_2082_ = lean_mk_string_unchecked("bigint", 6, 6);
lean_inc_ref(v___f_2075_);
v___x_2083_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2075_, v_bigint_2077_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 1, v___x_2083_);
lean_ctor_set(v___x_2080_, 0, v___x_2082_);
v___x_2085_ = v___x_2080_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v___x_2082_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2086_ = lean_mk_string_unchecked("throwIfNoEntry", 14, 14);
v___x_2087_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2075_, v_throwIfNoEntry_2078_);
v___x_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2086_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = lean_unsigned_to_nat(2u);
v___x_2090_ = lean_mk_empty_array_with_capacity(v___x_2089_);
v___x_2091_ = lean_array_push(v___x_2090_, v___x_2085_);
v___x_2092_ = lean_array_push(v___x_2091_, v___x_2088_);
v___x_2093_ = l_Lasm_JS_Web_Internal_fields(v___x_2092_);
lean_dec_ref(v___x_2092_);
return v___x_2093_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStatOptions__1(void){
_start:
{
lean_object* v___f_2096_; lean_object* v___f_2097_; 
v___f_2096_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2097_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStatOptions__1___lam__0), 2, 1);
lean_closure_set(v___f_2097_, 0, v___f_2096_);
return v___f_2097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptions__1___lam__0(lean_object* v___f_2098_, lean_object* v___f_2099_, lean_object* v___f_2100_, lean_object* v___f_2101_, lean_object* v_d_2102_){
_start:
{
lean_object* v_encoding_2103_; lean_object* v_mode_2104_; lean_object* v_flag_2105_; lean_object* v_flush_2106_; lean_object* v_signal_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v_encoding_2103_ = lean_ctor_get(v_d_2102_, 0);
lean_inc(v_encoding_2103_);
v_mode_2104_ = lean_ctor_get(v_d_2102_, 1);
lean_inc(v_mode_2104_);
v_flag_2105_ = lean_ctor_get(v_d_2102_, 2);
lean_inc(v_flag_2105_);
v_flush_2106_ = lean_ctor_get(v_d_2102_, 3);
lean_inc(v_flush_2106_);
v_signal_2107_ = lean_ctor_get(v_d_2102_, 4);
lean_inc(v_signal_2107_);
lean_dec_ref(v_d_2102_);
v___x_2108_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_2098_);
v___x_2109_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2098_, v_encoding_2103_);
v___x_2110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2108_);
lean_ctor_set(v___x_2110_, 1, v___x_2109_);
v___x_2111_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_2112_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2099_, v_mode_2104_);
v___x_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2111_);
lean_ctor_set(v___x_2113_, 1, v___x_2112_);
v___x_2114_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_2115_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2098_, v_flag_2105_);
v___x_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2114_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_2118_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2100_, v_flush_2106_);
v___x_2119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2117_);
lean_ctor_set(v___x_2119_, 1, v___x_2118_);
v___x_2120_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_2121_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2101_, v_signal_2107_);
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2120_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = lean_unsigned_to_nat(5u);
v___x_2124_ = lean_mk_empty_array_with_capacity(v___x_2123_);
v___x_2125_ = lean_array_push(v___x_2124_, v___x_2110_);
v___x_2126_ = lean_array_push(v___x_2125_, v___x_2113_);
v___x_2127_ = lean_array_push(v___x_2126_, v___x_2116_);
v___x_2128_ = lean_array_push(v___x_2127_, v___x_2119_);
v___x_2129_ = lean_array_push(v___x_2128_, v___x_2122_);
v___x_2130_ = l_Lasm_JS_Web_Internal_fields(v___x_2129_);
lean_dec_ref(v___x_2129_);
return v___x_2130_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSWriteFileOptions__1(void){
_start:
{
lean_object* v___f_2131_; lean_object* v___f_2132_; lean_object* v___f_2133_; lean_object* v___f_2134_; lean_object* v___f_2135_; 
v___f_2131_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_2132_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_2133_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2134_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_2135_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSWriteFileOptions__1___lam__0), 5, 4);
lean_closure_set(v___f_2135_, 0, v___f_2131_);
lean_closure_set(v___f_2135_, 1, v___f_2132_);
lean_closure_set(v___f_2135_, 2, v___f_2133_);
lean_closure_set(v___f_2135_, 3, v___f_2134_);
return v___f_2135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx(lean_object* v_x_2136_){
_start:
{
if (lean_obj_tag(v_x_2136_) == 0)
{
lean_object* v___x_2137_; 
v___x_2137_ = lean_unsigned_to_nat(0u);
return v___x_2137_;
}
else
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_unsigned_to_nat(1u);
return v___x_2138_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorIdx(v_x_2139_);
lean_dec_ref(v_x_2139_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_2141_, lean_object* v_k_2142_){
_start:
{
lean_object* v_value_2143_; lean_object* v___x_2144_; 
v_value_2143_ = lean_ctor_get(v_t_2141_, 0);
lean_inc_ref(v_value_2143_);
lean_dec_ref(v_t_2141_);
v___x_2144_ = lean_apply_1(v_k_2142_, v_value_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim(lean_object* v_motive_2145_, lean_object* v_ctorIdx_2146_, lean_object* v_t_2147_, lean_object* v_h_2148_, lean_object* v_k_2149_){
_start:
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_2147_, v_k_2149_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_2151_, lean_object* v_ctorIdx_2152_, lean_object* v_t_2153_, lean_object* v_h_2154_, lean_object* v_k_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim(v_motive_2151_, v_ctorIdx_2152_, v_t_2153_, v_h_2154_, v_k_2155_);
lean_dec(v_ctorIdx_2152_);
return v_res_2156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_writeFileOptions_elim___redArg(lean_object* v_t_2157_, lean_object* v_writeFileOptions_2158_){
_start:
{
lean_object* v___x_2159_; 
v___x_2159_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_2157_, v_writeFileOptions_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_writeFileOptions_elim(lean_object* v_motive_2160_, lean_object* v_t_2161_, lean_object* v_h_2162_, lean_object* v_writeFileOptions_2163_){
_start:
{
lean_object* v___x_2164_; 
v___x_2164_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_2161_, v_writeFileOptions_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_2165_, lean_object* v_domString_2166_){
_start:
{
lean_object* v___x_2167_; 
v___x_2167_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_2165_, v_domString_2166_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_domString_elim(lean_object* v_motive_2168_, lean_object* v_t_2169_, lean_object* v_h_2170_, lean_object* v_domString_2171_){
_start:
{
lean_object* v___x_2172_; 
v___x_2172_ = l_Lasm_JS_Node_fsPromises_WriteFileOptionsOrDOMString_ctorElim___redArg(v_t_2169_, v_domString_2171_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSWriteFileOptionsOrDOMString__1___lam__0(lean_object* v_x_2173_){
_start:
{
if (lean_obj_tag(v_x_2173_) == 0)
{
lean_object* v_value_2174_; lean_object* v_encoding_2175_; lean_object* v_mode_2176_; lean_object* v_flag_2177_; lean_object* v_flush_2178_; lean_object* v_signal_2179_; lean_object* v___f_2180_; lean_object* v___f_2181_; lean_object* v___f_2182_; lean_object* v___f_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
v_value_2174_ = lean_ctor_get(v_x_2173_, 0);
lean_inc_ref(v_value_2174_);
lean_dec_ref_known(v_x_2173_, 1);
v_encoding_2175_ = lean_ctor_get(v_value_2174_, 0);
lean_inc(v_encoding_2175_);
v_mode_2176_ = lean_ctor_get(v_value_2174_, 1);
lean_inc(v_mode_2176_);
v_flag_2177_ = lean_ctor_get(v_value_2174_, 2);
lean_inc(v_flag_2177_);
v_flush_2178_ = lean_ctor_get(v_value_2174_, 3);
lean_inc(v_flush_2178_);
v_signal_2179_ = lean_ctor_get(v_value_2174_, 4);
lean_inc(v_signal_2179_);
lean_dec_ref(v_value_2174_);
v___f_2180_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_2181_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_2182_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2183_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_2184_ = lean_mk_string_unchecked("encoding", 8, 8);
lean_inc_ref(v___f_2180_);
v___x_2185_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2180_, v_encoding_2175_);
v___x_2186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2184_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
v___x_2187_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_2188_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2181_, v_mode_2176_);
v___x_2189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2187_);
lean_ctor_set(v___x_2189_, 1, v___x_2188_);
v___x_2190_ = lean_mk_string_unchecked("flag", 4, 4);
v___x_2191_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2180_, v_flag_2177_);
v___x_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2190_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
v___x_2193_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_2194_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2182_, v_flush_2178_);
v___x_2195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2193_);
lean_ctor_set(v___x_2195_, 1, v___x_2194_);
v___x_2196_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_2197_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2183_, v_signal_2179_);
v___x_2198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2196_);
lean_ctor_set(v___x_2198_, 1, v___x_2197_);
v___x_2199_ = lean_unsigned_to_nat(5u);
v___x_2200_ = lean_mk_empty_array_with_capacity(v___x_2199_);
v___x_2201_ = lean_array_push(v___x_2200_, v___x_2186_);
v___x_2202_ = lean_array_push(v___x_2201_, v___x_2189_);
v___x_2203_ = lean_array_push(v___x_2202_, v___x_2192_);
v___x_2204_ = lean_array_push(v___x_2203_, v___x_2195_);
v___x_2205_ = lean_array_push(v___x_2204_, v___x_2198_);
v___x_2206_ = l_Lasm_JS_Web_Internal_fields(v___x_2205_);
lean_dec_ref(v___x_2205_);
return v___x_2206_;
}
else
{
lean_object* v_value_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2214_; 
v_value_2207_ = lean_ctor_get(v_x_2173_, 0);
v_isSharedCheck_2214_ = !lean_is_exclusive(v_x_2173_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2209_ = v_x_2173_;
v_isShared_2210_ = v_isSharedCheck_2214_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_value_2207_);
lean_dec(v_x_2173_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2214_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2212_; 
if (v_isShared_2210_ == 0)
{
lean_ctor_set_tag(v___x_2209_, 4);
v___x_2212_ = v___x_2209_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v_value_2207_);
v___x_2212_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
return v___x_2212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWriteFileOptionsWriteFileOptionsOrDOMString__1___lam__0(lean_object* v_value_2216_){
_start:
{
lean_object* v___x_2217_; 
v___x_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2217_, 0, v_value_2216_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringWriteFileOptionsOrDOMString__1___lam__0(lean_object* v_value_2219_){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2220_, 0, v_value_2219_);
return v___x_2220_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Process(uint8_t builtin);
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
res = initialize_Lasm_JS_Web_Types_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Webidl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Buffer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSStats = _init_l_Lasm_JS_Node_instFromJSStats();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStats);
l_Lasm_JS_Node_instFromJSDirent = _init_l_Lasm_JS_Node_instFromJSDirent();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDirent);
l_Lasm_JS_Node_instFromJSFileHandle = _init_l_Lasm_JS_Node_instFromJSFileHandle();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSFileHandle);
l_Lasm_JS_Node_instFromJSDoubleOrBigint = _init_l_Lasm_JS_Node_instFromJSDoubleOrBigint();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDoubleOrBigint);
l_Lasm_JS_Node_instToJSAppendFileOptions = _init_l_Lasm_JS_Node_instToJSAppendFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSAppendFileOptions);
l_Lasm_JS_Node_instFromJSReadResult = _init_l_Lasm_JS_Node_instFromJSReadResult();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSReadResult);
l_Lasm_JS_Node_instToJSReadOptions = _init_l_Lasm_JS_Node_instToJSReadOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadOptions);
l_Lasm_JS_Node_instToJSReadOptions2 = _init_l_Lasm_JS_Node_instToJSReadOptions2();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadOptions2);
l_Lasm_JS_Node_instToJSReadableWebStreamOptions = _init_l_Lasm_JS_Node_instToJSReadableWebStreamOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadableWebStreamOptions);
l_Lasm_JS_Node_instToJSReadFileOptions = _init_l_Lasm_JS_Node_instToJSReadFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadFileOptions);
l_Lasm_JS_Node_instFromJSUint8ArrayOrDOMString = _init_l_Lasm_JS_Node_instFromJSUint8ArrayOrDOMString();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSUint8ArrayOrDOMString);
l_Lasm_JS_Node_instToJSStatOptions = _init_l_Lasm_JS_Node_instToJSStatOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStatOptions);
l_Lasm_JS_Node_instFromJSWriteResult = _init_l_Lasm_JS_Node_instFromJSWriteResult();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSWriteResult);
l_Lasm_JS_Node_instToJSWriteOptions = _init_l_Lasm_JS_Node_instToJSWriteOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSWriteOptions);
l_Lasm_JS_Node_instFromJSWriteStringResult = _init_l_Lasm_JS_Node_instFromJSWriteStringResult();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSWriteStringResult);
l_Lasm_JS_Node_instToJSWriteFileOptions = _init_l_Lasm_JS_Node_instToJSWriteFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSWriteFileOptions);
l_Lasm_JS_Node_instToJSAppendFileOptions__1 = _init_l_Lasm_JS_Node_instToJSAppendFileOptions__1();
lean_mark_persistent(l_Lasm_JS_Node_instToJSAppendFileOptions__1);
l_Lasm_JS_Node_instToJSCpOptions = _init_l_Lasm_JS_Node_instToJSCpOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCpOptions);
l_Lasm_JS_Node_instToJSLstatOptions = _init_l_Lasm_JS_Node_instToJSLstatOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSLstatOptions);
l_Lasm_JS_Node_instToJSMkdirOptions = _init_l_Lasm_JS_Node_instToJSMkdirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSMkdirOptions);
l_Lasm_JS_Node_instToJSMkdtempOptions = _init_l_Lasm_JS_Node_instToJSMkdtempOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSMkdtempOptions);
l_Lasm_JS_Node_instToJSReaddirOptions = _init_l_Lasm_JS_Node_instToJSReaddirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReaddirOptions);
l_Lasm_JS_Node_instFromJSDOMStringOrUint8ArrayOrDirent = _init_l_Lasm_JS_Node_instFromJSDOMStringOrUint8ArrayOrDirent();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDOMStringOrUint8ArrayOrDirent);
l_Lasm_JS_Node_instToJSReadFileOptions__1 = _init_l_Lasm_JS_Node_instToJSReadFileOptions__1();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadFileOptions__1);
l_Lasm_JS_Node_instToJSReadlinkOptions = _init_l_Lasm_JS_Node_instToJSReadlinkOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadlinkOptions);
l_Lasm_JS_Node_instToJSRealpathOptions = _init_l_Lasm_JS_Node_instToJSRealpathOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSRealpathOptions);
l_Lasm_JS_Node_instToJSRmdirOptions = _init_l_Lasm_JS_Node_instToJSRmdirOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSRmdirOptions);
l_Lasm_JS_Node_instToJSRmOptions = _init_l_Lasm_JS_Node_instToJSRmOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSRmOptions);
l_Lasm_JS_Node_instToJSStatOptions__1 = _init_l_Lasm_JS_Node_instToJSStatOptions__1();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStatOptions__1);
l_Lasm_JS_Node_instToJSWriteFileOptions__1 = _init_l_Lasm_JS_Node_instToJSWriteFileOptions__1();
lean_mark_persistent(l_Lasm_JS_Node_instToJSWriteFileOptions__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
