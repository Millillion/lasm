// Lean compiler output
// Module: Lasm.JS.Node.Readline
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Streams public import Lasm.JS.Node.Events public import Lasm.JS.Node.Stream
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_stream_Readable_unpipe_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_stream_isErrored_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_stream_Readable_forEach_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSReadableStream___lam__0(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSStreamWritable___lam__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(lean_object*, lean_object*, uint8_t);
static const lean_string_object l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructor = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Node.InterfaceConstructor"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterface = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSReadlinePromisesInterface___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Node.readlinePromises.Interface"};
static const lean_object* l_Lasm_JS_Node_instFromJSReadlinePromisesInterface___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSReadlinePromisesInterface___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSReadlinePromisesInterface___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSReadlinePromisesInterface___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSReadlinePromisesInterface___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSReadlinePromisesInterface___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSReadlinePromisesInterface = (const lean_object*)&l_Lasm_JS_Node_instFromJSReadlinePromisesInterface___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadlinePromisesInterfaceInterfaceConstructor = (const lean_object*)&l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesReadline = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSReadlinePromisesReadline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Node.readlinePromises.Readline"};
static const lean_object* l_Lasm_JS_Node_instFromJSReadlinePromisesReadline___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSReadlinePromisesReadline___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSReadlinePromisesReadline___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSReadlinePromisesReadline___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSReadlinePromisesReadline___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSReadlinePromisesReadline___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSReadlinePromisesReadline = (const lean_object*)&l_Lasm_JS_Node_instFromJSReadlinePromisesReadline___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadlineInterface = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSReadlineInterface___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Node.readline.Interface"};
static const lean_object* l_Lasm_JS_Node_instFromJSReadlineInterface___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSReadlineInterface___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSReadlineInterface___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSReadlineInterface___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSReadlineInterface___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSReadlineInterface___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSReadlineInterface = (const lean_object*)&l_Lasm_JS_Node_instFromJSReadlineInterface___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadlineInterfaceInterfaceConstructor = (const lean_object*)&l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.JS.Node.InterfaceConstructor.CloseListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorErrorListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.JS.Node.InterfaceConstructor.ErrorListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorLineListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lasm.JS.Node.InterfaceConstructor.LineListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorHistoryListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Node.InterfaceConstructor.HistoryListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorPauseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.JS.Node.InterfaceConstructor.PauseListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorResumeListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Node.InterfaceConstructor.ResumeListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorSIGCONTListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Node.InterfaceConstructor.SIGCONTListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorSIGINTListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Node.InterfaceConstructor.SIGINTListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorSIGTSTPListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Node.InterfaceConstructor.SIGTSTPListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ctrl"};
static const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "shift"};
static const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__1_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadlineInterfaceQuestionOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "input"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "output"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "completer"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "terminal"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "history"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "historySize"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "removeHistoryDuplicates"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prompt"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "crlfDelay"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "escapeCodeTimeout"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tabSize"};
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__2;
static const lean_closure_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__3_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__4_value;
static lean_once_cell_t l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "node:readline"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "InterfaceConstructor"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_line___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "line"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_line___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_line___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_line(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_line___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_cursor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cursor"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_cursor___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cursor___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cursor(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cursor___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "on"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__1 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__2 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onClose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onClose___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "once"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceClose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceClose___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_onError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onError___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_onError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onError___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onError___closed__1 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onError___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_onError___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_onError___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onError___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceError___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_line___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onLine___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceLine___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onHistory(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onHistory___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceHistory(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceHistory___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pause"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__1 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onPause(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onPause___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_oncePause(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_oncePause___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "resume"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__1 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onResume(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onResume___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceResume(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceResume___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGCONT"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__1 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGCONT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGCONT___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGINT"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__1 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGINT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGINT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGINT___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTSTP"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__1 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGTSTP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGTSTP___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Node_InterfaceConstructor_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_close___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_close___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Node_InterfaceConstructor_close___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_InterfaceConstructor_close___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_close(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_pause(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_pause___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_prompt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_prompt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_resume(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_resume___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_setPrompt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "setPrompt"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_setPrompt___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_setPrompt___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_setPrompt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_setPrompt___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_getPrompt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getPrompt"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_getPrompt___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_getPrompt___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_getPrompt(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_getPrompt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_InterfaceConstructor_write_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_write___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "write"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_write___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_write___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_write(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_write___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_InterfaceConstructor_getCursorPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "getCursorPos"};
static const lean_object* l_Lasm_JS_Node_InterfaceConstructor_getCursorPos___closed__0 = (const lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_getCursorPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_getCursorPos(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_getCursorPos___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "node:readline/promises"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Interface"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readlinePromises_Interface_question_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readlinePromises_Interface_question_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Interface_question___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "question"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Interface_question___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_question___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Interface_question(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Interface_question___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Readline"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Readline_clearLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "clearLine"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearLine___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_clearLine___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearLine___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "clearScreenDown"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Readline_commit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "commit"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Readline_commit___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_commit___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_commit(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_commit___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Readline_cursorTo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cursorTo"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cursorTo___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_cursorTo___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cursorTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cursorTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Readline_moveCursor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "moveCursor"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Readline_moveCursor___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_moveCursor___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_moveCursor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_moveCursor___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_Readline_rollback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rollback"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_Readline_rollback___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_rollback___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_rollback(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_rollback___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_readline_Interface_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Node_readline_Interface_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readline_Interface_cast_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_question(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_question___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_questionWithOptions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_questionWithOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_emitKeypressEvents_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_emitKeypressEvents_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_readline_emitKeypressEvents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Node.readline.emitKeypressEvents"};
static const lean_object* l_Lasm_JS_Node_readline_emitKeypressEvents___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readline_emitKeypressEvents___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_readline_emitKeypressEvents___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "emitKeypressEvents"};
static const lean_object* l_Lasm_JS_Node_readline_emitKeypressEvents___closed__1 = (const lean_object*)&l_Lasm_JS_Node_readline_emitKeypressEvents___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_readline_emitKeypressEvents___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readline_emitKeypressEvents___closed__0_value),((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readline_emitKeypressEvents___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_readline_emitKeypressEvents___closed__2 = (const lean_object*)&l_Lasm_JS_Node_readline_emitKeypressEvents___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_emitKeypressEvents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_emitKeypressEvents___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readline_clearLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Node.readline.clearLine"};
static const lean_object* l_Lasm_JS_Node_readline_clearLine___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readline_clearLine___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_readline_clearLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readline_clearLine___closed__0_value),((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_clearLine___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_readline_clearLine___closed__1 = (const lean_object*)&l_Lasm_JS_Node_readline_clearLine___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_clearLine(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_clearLine___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readline_clearScreenDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Node.readline.clearScreenDown"};
static const lean_object* l_Lasm_JS_Node_readline_clearScreenDown___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readline_clearScreenDown___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_readline_clearScreenDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readline_clearScreenDown___closed__0_value),((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_readline_clearScreenDown___closed__1 = (const lean_object*)&l_Lasm_JS_Node_readline_clearScreenDown___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_clearScreenDown(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_clearScreenDown___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_createInterface_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_createInterface_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_readline_createInterface___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Node.readline.createInterface"};
static const lean_object* l_Lasm_JS_Node_readline_createInterface___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readline_createInterface___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_readline_createInterface___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "createInterface"};
static const lean_object* l_Lasm_JS_Node_readline_createInterface___closed__1 = (const lean_object*)&l_Lasm_JS_Node_readline_createInterface___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_readline_createInterface___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readline_createInterface___closed__0_value),((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readline_createInterface___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_readline_createInterface___closed__2 = (const lean_object*)&l_Lasm_JS_Node_readline_createInterface___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_createInterface(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_createInterface___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readline_cursorTo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.readline.cursorTo"};
static const lean_object* l_Lasm_JS_Node_readline_cursorTo___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readline_cursorTo___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_readline_cursorTo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readline_cursorTo___closed__0_value),((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_cursorTo___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_readline_cursorTo___closed__1 = (const lean_object*)&l_Lasm_JS_Node_readline_cursorTo___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_cursorTo(lean_object*, double, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_cursorTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readline_moveCursor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.readline.moveCursor"};
static const lean_object* l_Lasm_JS_Node_readline_moveCursor___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readline_moveCursor___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_readline_moveCursor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readline_moveCursor___closed__0_value),((lean_object*)&l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readlinePromises_Readline_moveCursor___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_readline_moveCursor___closed__1 = (const lean_object*)&l_Lasm_JS_Node_readline_moveCursor___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_moveCursor(lean_object*, double, double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_moveCursor___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_readlinePromises_createInterface___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lasm.JS.Node.readlinePromises.createInterface"};
static const lean_object* l_Lasm_JS_Node_readlinePromises_createInterface___closed__0 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_createInterface___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_readlinePromises_createInterface___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_readlinePromises_createInterface___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_readline_createInterface___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_readlinePromises_createInterface___closed__1 = (const lean_object*)&l_Lasm_JS_Node_readlinePromises_createInterface___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_createInterface(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_createInterface___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0(lean_object* v_self_22_){
_start:
{
lean_inc(v_self_22_);
return v_self_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0___boxed(lean_object* v_self_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0(v_self_23_);
lean_dec(v_self_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0(lean_object* v_x_61_){
_start:
{
if (lean_obj_tag(v_x_61_) == 0)
{
lean_object* v_a_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_71_; 
v_a_63_ = lean_ctor_get(v_x_61_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v_x_61_);
if (v_isSharedCheck_71_ == 0)
{
v___x_65_ = v_x_61_;
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_a_63_);
lean_dec(v_x_61_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
if (v_isShared_66_ == 0)
{
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_a_63_);
v___x_68_ = v_reuseFailAlloc_70_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
lean_object* v___x_69_; 
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
}
}
else
{
lean_object* v___x_72_; 
lean_dec_ref_known(v_x_61_, 1);
v___x_72_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___closed__1));
return v___x_72_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed(lean_object* v_x_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0(v_x_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1(lean_object* v_f_76_, lean_object* v___f_77_, lean_object* v_x_78_){
_start:
{
lean_object* v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_80_ = lean_unsigned_to_nat(0u);
v___x_81_ = 0;
v___x_82_ = lean_apply_1(v_f_76_, lean_box(0));
v___x_83_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_80_, v___x_81_, v___x_82_, v___f_77_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed(lean_object* v_f_84_, lean_object* v___f_85_, lean_object* v_x_86_, lean_object* v___y_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1(v_f_84_, v___f_85_, v_x_86_);
lean_dec_ref(v_x_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn(lean_object* v_f_90_){
_start:
{
lean_object* v___f_92_; lean_object* v___f_93_; lean_object* v___x_94_; 
v___f_92_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0));
v___f_93_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_93_, 0, v_f_90_);
lean_closure_set(v___f_93_, 1, v___f_92_);
v___x_94_ = l_Lasm_JS_Function_ofFn(v___f_93_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_a_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
else
{
lean_object* v_a_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_110_; 
v_a_103_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_110_ == 0)
{
v___x_105_ = v___x_94_;
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_a_103_);
lean_dec(v___x_94_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_108_; 
if (v_isShared_106_ == 0)
{
v___x_108_ = v___x_105_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_a_103_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___boxed(lean_object* v_f_111_, lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn(v_f_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0(lean_object* v_f_114_, lean_object* v_x_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_apply_1(v_f_114_, lean_box(0));
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_125_; 
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_125_ == 0)
{
lean_object* v_unused_126_; 
v_unused_126_ = lean_ctor_get(v___x_117_, 0);
lean_dec(v_unused_126_);
v___x_119_ = v___x_117_;
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
else
{
lean_dec(v___x_117_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_121_ = lean_box(0);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_121_);
v___x_123_ = v___x_119_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
else
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_134_; 
v_a_127_ = lean_ctor_get(v___x_117_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_134_ == 0)
{
v___x_129_ = v___x_117_;
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_117_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_132_; 
if (v_isShared_130_ == 0)
{
v___x_132_ = v___x_129_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_a_127_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed(lean_object* v_f_135_, lean_object* v_x_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0(v_f_135_, v_x_136_);
lean_dec_ref(v_x_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn(lean_object* v_f_139_){
_start:
{
lean_object* v___f_141_; lean_object* v___x_142_; 
v___f_141_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_141_, 0, v_f_139_);
v___x_142_ = l_Lasm_JS_Function_ofSyncFn(v___f_141_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v___x_142_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
else
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
v_a_151_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_142_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_142_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___boxed(lean_object* v_f_159_, lean_object* v_a_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn(v_f_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn(lean_object* v_f_169_){
_start:
{
lean_object* v___f_171_; lean_object* v___f_172_; lean_object* v___x_173_; 
v___f_171_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0));
v___f_172_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_172_, 0, v_f_169_);
lean_closure_set(v___f_172_, 1, v___f_171_);
v___x_173_ = l_Lasm_JS_Function_ofFn(v___f_172_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_181_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_181_ == 0)
{
v___x_176_ = v___x_173_;
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_179_; 
if (v_isShared_177_ == 0)
{
v___x_179_ = v___x_176_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_a_174_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
else
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_189_; 
v_a_182_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_189_ == 0)
{
v___x_184_ = v___x_173_;
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_173_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_a_182_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn___boxed(lean_object* v_f_190_, lean_object* v_a_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn(v_f_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn(lean_object* v_f_193_){
_start:
{
lean_object* v___f_195_; lean_object* v___x_196_; 
v___f_195_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_195_, 0, v_f_193_);
v___x_196_ = l_Lasm_JS_Function_ofSyncFn(v___f_195_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
else
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
v_a_205_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_196_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_196_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn___boxed(lean_object* v_f_213_, lean_object* v_a_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn(v_f_213_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn(lean_object* v_f_223_){
_start:
{
lean_object* v___f_225_; lean_object* v___f_226_; lean_object* v___x_227_; 
v___f_225_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0));
v___f_226_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_226_, 0, v_f_223_);
lean_closure_set(v___f_226_, 1, v___f_225_);
v___x_227_ = l_Lasm_JS_Function_ofFn(v___f_226_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_235_ == 0)
{
v___x_230_ = v___x_227_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_227_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
else
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
v_a_236_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_243_ == 0)
{
v___x_238_ = v___x_227_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_227_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn___boxed(lean_object* v_f_244_, lean_object* v_a_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn(v_f_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn(lean_object* v_f_247_){
_start:
{
lean_object* v___f_249_; lean_object* v___x_250_; 
v___f_249_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_249_, 0, v_f_247_);
v___x_250_ = l_Lasm_JS_Function_ofSyncFn(v___f_249_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_258_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_258_ == 0)
{
v___x_253_ = v___x_250_;
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v___x_250_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_254_ == 0)
{
v___x_256_ = v___x_253_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_a_251_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
else
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_266_; 
v_a_259_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_266_ == 0)
{
v___x_261_ = v___x_250_;
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_250_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_264_; 
if (v_isShared_262_ == 0)
{
v___x_264_ = v___x_261_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_a_259_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn___boxed(lean_object* v_f_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn(v_f_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn(lean_object* v_f_277_){
_start:
{
lean_object* v___f_279_; lean_object* v___f_280_; lean_object* v___x_281_; 
v___f_279_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0));
v___f_280_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_280_, 0, v_f_277_);
lean_closure_set(v___f_280_, 1, v___f_279_);
v___x_281_ = l_Lasm_JS_Function_ofFn(v___f_280_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
v_a_282_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_281_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_281_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
v_a_290_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_281_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_281_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_290_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn___boxed(lean_object* v_f_298_, lean_object* v_a_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn(v_f_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn(lean_object* v_f_301_){
_start:
{
lean_object* v___f_303_; lean_object* v___x_304_; 
v___f_303_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_303_, 0, v_f_301_);
v___x_304_ = l_Lasm_JS_Function_ofSyncFn(v___f_303_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
v_a_305_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_304_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_304_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
v___x_310_ = v___x_307_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_305_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
v_a_313_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_304_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_304_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn___boxed(lean_object* v_f_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn(v_f_321_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn(lean_object* v_f_331_){
_start:
{
lean_object* v___f_333_; lean_object* v___f_334_; lean_object* v___x_335_; 
v___f_333_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0));
v___f_334_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_334_, 0, v_f_331_);
lean_closure_set(v___f_334_, 1, v___f_333_);
v___x_335_ = l_Lasm_JS_Function_ofFn(v___f_334_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
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
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_335_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_335_);
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
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn___boxed(lean_object* v_f_352_, lean_object* v_a_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn(v_f_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn(lean_object* v_f_355_){
_start:
{
lean_object* v___f_357_; lean_object* v___x_358_; 
v___f_357_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_357_, 0, v_f_355_);
v___x_358_ = l_Lasm_JS_Function_ofSyncFn(v___f_357_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_358_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
v_a_367_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_358_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_358_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn___boxed(lean_object* v_f_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn(v_f_375_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn(lean_object* v_f_385_){
_start:
{
lean_object* v___f_387_; lean_object* v___f_388_; lean_object* v___x_389_; 
v___f_387_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0));
v___f_388_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_388_, 0, v_f_385_);
lean_closure_set(v___f_388_, 1, v___f_387_);
v___x_389_ = l_Lasm_JS_Function_ofFn(v___f_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
v_a_398_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_389_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_389_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn___boxed(lean_object* v_f_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn(v_f_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn(lean_object* v_f_409_){
_start:
{
lean_object* v___f_411_; lean_object* v___x_412_; 
v___f_411_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_411_, 0, v_f_409_);
v___x_412_ = l_Lasm_JS_Function_ofSyncFn(v___f_411_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_412_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_412_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
v_a_421_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_412_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_412_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn___boxed(lean_object* v_f_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn(v_f_429_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn(lean_object* v_f_439_){
_start:
{
lean_object* v___f_441_; lean_object* v___f_442_; lean_object* v___x_443_; 
v___f_441_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0));
v___f_442_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_442_, 0, v_f_439_);
lean_closure_set(v___f_442_, 1, v___f_441_);
v___x_443_ = l_Lasm_JS_Function_ofFn(v___f_442_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_443_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_443_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
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
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_459_; 
v_a_452_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_459_ == 0)
{
v___x_454_ = v___x_443_;
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_443_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_455_ == 0)
{
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_a_452_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn___boxed(lean_object* v_f_460_, lean_object* v_a_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn(v_f_460_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn(lean_object* v_f_463_){
_start:
{
lean_object* v___f_465_; lean_object* v___x_466_; 
v___f_465_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_465_, 0, v_f_463_);
v___x_466_ = l_Lasm_JS_Function_ofSyncFn(v___f_465_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_466_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_466_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
if (v_isShared_470_ == 0)
{
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
v_a_475_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_466_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_466_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn___boxed(lean_object* v_f_483_, lean_object* v_a_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn(v_f_483_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn(lean_object* v_f_493_){
_start:
{
lean_object* v___f_495_; lean_object* v___f_496_; lean_object* v___x_497_; 
v___f_495_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0));
v___f_496_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_496_, 0, v_f_493_);
lean_closure_set(v___f_496_, 1, v___f_495_);
v___x_497_ = l_Lasm_JS_Function_ofFn(v___f_496_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_505_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_505_ == 0)
{
v___x_500_ = v___x_497_;
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v___x_497_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_a_498_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
else
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
v_a_506_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_513_ == 0)
{
v___x_508_ = v___x_497_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_497_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_506_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn___boxed(lean_object* v_f_514_, lean_object* v_a_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn(v_f_514_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn(lean_object* v_f_517_){
_start:
{
lean_object* v___f_519_; lean_object* v___x_520_; 
v___f_519_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_519_, 0, v_f_517_);
v___x_520_ = l_Lasm_JS_Function_ofSyncFn(v___f_519_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
v_a_529_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_520_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_520_);
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
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn___boxed(lean_object* v_f_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn(v_f_537_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn(lean_object* v_f_547_){
_start:
{
lean_object* v___f_549_; lean_object* v___f_550_; lean_object* v___x_551_; 
v___f_549_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___closed__0));
v___f_550_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_550_, 0, v_f_547_);
lean_closure_set(v___f_550_, 1, v___f_549_);
v___x_551_ = l_Lasm_JS_Function_ofFn(v___f_550_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_551_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_551_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
v_a_560_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_551_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_551_);
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
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn___boxed(lean_object* v_f_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn(v_f_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn(lean_object* v_f_571_){
_start:
{
lean_object* v___f_573_; lean_object* v___x_574_; 
v___f_573_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_573_, 0, v_f_571_);
v___x_574_ = l_Lasm_JS_Function_ofSyncFn(v___f_573_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
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
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
v_a_583_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_574_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_574_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn___boxed(lean_object* v_f_591_, lean_object* v_a_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn(v_f_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0(lean_object* v___f_598_, lean_object* v___f_599_, lean_object* v_d_600_){
_start:
{
lean_object* v_ctrl_601_; lean_object* v_meta_602_; lean_object* v_shift_603_; lean_object* v_name_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v_ctrl_601_ = lean_ctor_get(v_d_600_, 0);
lean_inc(v_ctrl_601_);
v_meta_602_ = lean_ctor_get(v_d_600_, 1);
lean_inc(v_meta_602_);
v_shift_603_ = lean_ctor_get(v_d_600_, 2);
lean_inc(v_shift_603_);
v_name_604_ = lean_ctor_get(v_d_600_, 3);
lean_inc(v_name_604_);
lean_dec_ref(v_d_600_);
v___x_605_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__0));
lean_inc_ref_n(v___f_598_, 2);
v___x_606_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_598_, v_ctrl_601_);
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_605_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__1));
v___x_609_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_598_, v_meta_602_);
v___x_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_608_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
v___x_611_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__2));
v___x_612_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_598_, v_shift_603_);
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v___x_614_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__3));
v___x_615_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_599_, v_name_604_);
v___x_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_614_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
v___x_617_ = lean_unsigned_to_nat(4u);
v___x_618_ = lean_mk_empty_array_with_capacity(v___x_617_);
v___x_619_ = lean_array_push(v___x_618_, v___x_607_);
v___x_620_ = lean_array_push(v___x_619_, v___x_610_);
v___x_621_ = lean_array_push(v___x_620_, v___x_613_);
v___x_622_ = lean_array_push(v___x_621_, v___x_616_);
v___x_623_ = l_Lasm_JS_Web_Support_fields(v___x_622_);
lean_dec_ref(v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0(lean_object* v___f_631_, lean_object* v_d_632_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_633_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0));
v___x_634_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_631_, v_d_632_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = lean_unsigned_to_nat(1u);
v___x_637_ = lean_mk_empty_array_with_capacity(v___x_636_);
v___x_638_ = lean_array_push(v___x_637_, v___x_635_);
v___x_639_ = l_Lasm_JS_Web_Support_fields(v___x_638_);
lean_dec_ref(v___x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0(lean_object* v___f_656_, lean_object* v___f_657_, lean_object* v___f_658_, lean_object* v___f_659_, lean_object* v___x_660_, lean_object* v___f_661_, lean_object* v___f_662_, lean_object* v___f_663_, lean_object* v___f_664_, lean_object* v_d_665_){
_start:
{
lean_object* v_input_666_; lean_object* v_output_667_; lean_object* v_completer_668_; lean_object* v_terminal_669_; lean_object* v_history_670_; lean_object* v_historySize_671_; lean_object* v_removeHistoryDuplicates_672_; lean_object* v_prompt_673_; lean_object* v_crlfDelay_674_; lean_object* v_escapeCodeTimeout_675_; lean_object* v_tabSize_676_; lean_object* v_signal_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v_input_666_ = lean_ctor_get(v_d_665_, 0);
lean_inc(v_input_666_);
v_output_667_ = lean_ctor_get(v_d_665_, 1);
lean_inc(v_output_667_);
v_completer_668_ = lean_ctor_get(v_d_665_, 2);
lean_inc(v_completer_668_);
v_terminal_669_ = lean_ctor_get(v_d_665_, 3);
lean_inc(v_terminal_669_);
v_history_670_ = lean_ctor_get(v_d_665_, 4);
lean_inc(v_history_670_);
v_historySize_671_ = lean_ctor_get(v_d_665_, 5);
lean_inc(v_historySize_671_);
v_removeHistoryDuplicates_672_ = lean_ctor_get(v_d_665_, 6);
lean_inc(v_removeHistoryDuplicates_672_);
v_prompt_673_ = lean_ctor_get(v_d_665_, 7);
lean_inc(v_prompt_673_);
v_crlfDelay_674_ = lean_ctor_get(v_d_665_, 8);
lean_inc(v_crlfDelay_674_);
v_escapeCodeTimeout_675_ = lean_ctor_get(v_d_665_, 9);
lean_inc(v_escapeCodeTimeout_675_);
v_tabSize_676_ = lean_ctor_get(v_d_665_, 10);
lean_inc(v_tabSize_676_);
v_signal_677_ = lean_ctor_get(v_d_665_, 11);
lean_inc(v_signal_677_);
lean_dec_ref(v_d_665_);
v___x_678_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__0));
v___x_679_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_656_, v_input_666_);
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v___x_678_);
lean_ctor_set(v___x_680_, 1, v___x_679_);
v___x_681_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__1));
v___x_682_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_657_, v_output_667_);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_681_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
v___x_684_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__2));
v___x_685_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_658_, v_completer_668_);
v___x_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_684_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
v___x_687_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__3));
lean_inc_ref(v___f_659_);
v___x_688_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_659_, v_terminal_669_);
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_687_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v___x_690_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__4));
v___x_691_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_660_, v_history_670_);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_690_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
v___x_693_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__5));
lean_inc_ref_n(v___f_661_, 2);
v___x_694_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_661_, v_historySize_671_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_693_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__6));
v___x_697_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_659_, v_removeHistoryDuplicates_672_);
v___x_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_696_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
v___x_699_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__7));
v___x_700_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_662_, v_prompt_673_);
v___x_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_699_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__8));
v___x_703_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_661_, v_crlfDelay_674_);
v___x_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_704_, 0, v___x_702_);
lean_ctor_set(v___x_704_, 1, v___x_703_);
v___x_705_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__9));
v___x_706_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_661_, v_escapeCodeTimeout_675_);
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_705_);
lean_ctor_set(v___x_707_, 1, v___x_706_);
v___x_708_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__10));
v___x_709_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_663_, v_tabSize_676_);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_708_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0));
v___x_712_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_664_, v_signal_677_);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_711_);
lean_ctor_set(v___x_713_, 1, v___x_712_);
v___x_714_ = lean_unsigned_to_nat(12u);
v___x_715_ = lean_mk_empty_array_with_capacity(v___x_714_);
v___x_716_ = lean_array_push(v___x_715_, v___x_680_);
v___x_717_ = lean_array_push(v___x_716_, v___x_683_);
v___x_718_ = lean_array_push(v___x_717_, v___x_686_);
v___x_719_ = lean_array_push(v___x_718_, v___x_689_);
v___x_720_ = lean_array_push(v___x_719_, v___x_692_);
v___x_721_ = lean_array_push(v___x_720_, v___x_695_);
v___x_722_ = lean_array_push(v___x_721_, v___x_698_);
v___x_723_ = lean_array_push(v___x_722_, v___x_701_);
v___x_724_ = lean_array_push(v___x_723_, v___x_704_);
v___x_725_ = lean_array_push(v___x_724_, v___x_707_);
v___x_726_ = lean_array_push(v___x_725_, v___x_710_);
v___x_727_ = lean_array_push(v___x_726_, v___x_713_);
v___x_728_ = l_Lasm_JS_Web_Support_fields(v___x_727_);
lean_dec_ref(v___x_727_);
return v___x_728_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__2(void){
_start:
{
lean_object* v___f_731_; lean_object* v___x_732_; 
v___f_731_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__1));
v___x_732_ = l_Lasm_JS_instToJSArray___redArg(v___f_731_);
return v___x_732_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__5(void){
_start:
{
lean_object* v___f_735_; lean_object* v___f_736_; lean_object* v___f_737_; lean_object* v___f_738_; lean_object* v___x_739_; lean_object* v___f_740_; lean_object* v___f_741_; lean_object* v___f_742_; lean_object* v___f_743_; 
v___f_735_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__0));
v___f_736_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__4));
v___f_737_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__1));
v___f_738_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__3));
v___x_739_ = lean_obj_once(&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__2, &l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__2);
v___f_740_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__0));
v___f_741_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__1));
v___f_742_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__0));
v___f_743_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0), 10, 9);
lean_closure_set(v___f_743_, 0, v___f_742_);
lean_closure_set(v___f_743_, 1, v___f_742_);
lean_closure_set(v___f_743_, 2, v___f_741_);
lean_closure_set(v___f_743_, 3, v___f_740_);
lean_closure_set(v___f_743_, 4, v___x_739_);
lean_closure_set(v___f_743_, 5, v___f_738_);
lean_closure_set(v___f_743_, 6, v___f_737_);
lean_closure_set(v___f_743_, 7, v___f_736_);
lean_closure_set(v___f_743_, 8, v___f_735_);
return v___f_743_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions(void){
_start:
{
lean_object* v___f_744_; 
v___f_744_ = lean_obj_once(&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__5, &l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__5_once, _init_l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__5);
return v___f_744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___lam__0(lean_object* v___f_745_, lean_object* v___f_746_, lean_object* v___f_747_, lean_object* v___f_748_, lean_object* v___x_749_, lean_object* v___f_750_, lean_object* v___f_751_, lean_object* v___f_752_, lean_object* v___f_753_, lean_object* v_d_754_){
_start:
{
lean_object* v_input_755_; lean_object* v_output_756_; lean_object* v_completer_757_; lean_object* v_terminal_758_; lean_object* v_history_759_; lean_object* v_historySize_760_; lean_object* v_removeHistoryDuplicates_761_; lean_object* v_prompt_762_; lean_object* v_crlfDelay_763_; lean_object* v_escapeCodeTimeout_764_; lean_object* v_tabSize_765_; lean_object* v_signal_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_input_755_ = lean_ctor_get(v_d_754_, 0);
lean_inc(v_input_755_);
v_output_756_ = lean_ctor_get(v_d_754_, 1);
lean_inc(v_output_756_);
v_completer_757_ = lean_ctor_get(v_d_754_, 2);
lean_inc(v_completer_757_);
v_terminal_758_ = lean_ctor_get(v_d_754_, 3);
lean_inc(v_terminal_758_);
v_history_759_ = lean_ctor_get(v_d_754_, 4);
lean_inc(v_history_759_);
v_historySize_760_ = lean_ctor_get(v_d_754_, 5);
lean_inc(v_historySize_760_);
v_removeHistoryDuplicates_761_ = lean_ctor_get(v_d_754_, 6);
lean_inc(v_removeHistoryDuplicates_761_);
v_prompt_762_ = lean_ctor_get(v_d_754_, 7);
lean_inc(v_prompt_762_);
v_crlfDelay_763_ = lean_ctor_get(v_d_754_, 8);
lean_inc(v_crlfDelay_763_);
v_escapeCodeTimeout_764_ = lean_ctor_get(v_d_754_, 9);
lean_inc(v_escapeCodeTimeout_764_);
v_tabSize_765_ = lean_ctor_get(v_d_754_, 10);
lean_inc(v_tabSize_765_);
v_signal_766_ = lean_ctor_get(v_d_754_, 11);
lean_inc(v_signal_766_);
lean_dec_ref(v_d_754_);
v___x_767_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__0));
v___x_768_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_745_, v_input_755_);
v___x_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_767_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__1));
v___x_771_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_746_, v_output_756_);
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_770_);
lean_ctor_set(v___x_772_, 1, v___x_771_);
v___x_773_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__2));
v___x_774_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_747_, v_completer_757_);
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_773_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__3));
lean_inc_ref(v___f_748_);
v___x_777_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_748_, v_terminal_758_);
v___x_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__4));
v___x_780_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_749_, v_history_759_);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_779_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__5));
lean_inc_ref_n(v___f_750_, 2);
v___x_783_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_750_, v_historySize_760_);
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_782_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__6));
v___x_786_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_748_, v_removeHistoryDuplicates_761_);
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_785_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__7));
v___x_789_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_751_, v_prompt_762_);
v___x_790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_790_, 0, v___x_788_);
lean_ctor_set(v___x_790_, 1, v___x_789_);
v___x_791_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__8));
v___x_792_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_750_, v_crlfDelay_763_);
v___x_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_793_, 0, v___x_791_);
lean_ctor_set(v___x_793_, 1, v___x_792_);
v___x_794_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__9));
v___x_795_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_750_, v_escapeCodeTimeout_764_);
v___x_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_794_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
v___x_797_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__10));
v___x_798_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_752_, v_tabSize_765_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_797_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0));
v___x_801_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_753_, v_signal_766_);
v___x_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_800_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = lean_unsigned_to_nat(12u);
v___x_804_ = lean_mk_empty_array_with_capacity(v___x_803_);
v___x_805_ = lean_array_push(v___x_804_, v___x_769_);
v___x_806_ = lean_array_push(v___x_805_, v___x_772_);
v___x_807_ = lean_array_push(v___x_806_, v___x_775_);
v___x_808_ = lean_array_push(v___x_807_, v___x_778_);
v___x_809_ = lean_array_push(v___x_808_, v___x_781_);
v___x_810_ = lean_array_push(v___x_809_, v___x_784_);
v___x_811_ = lean_array_push(v___x_810_, v___x_787_);
v___x_812_ = lean_array_push(v___x_811_, v___x_790_);
v___x_813_ = lean_array_push(v___x_812_, v___x_793_);
v___x_814_ = lean_array_push(v___x_813_, v___x_796_);
v___x_815_ = lean_array_push(v___x_814_, v___x_799_);
v___x_816_ = lean_array_push(v___x_815_, v___x_802_);
v___x_817_ = l_Lasm_JS_Web_Support_fields(v___x_816_);
lean_dec_ref(v___x_816_);
return v___x_817_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___closed__0(void){
_start:
{
lean_object* v___f_818_; lean_object* v___f_819_; lean_object* v___f_820_; lean_object* v___f_821_; lean_object* v___x_822_; lean_object* v___f_823_; lean_object* v___f_824_; lean_object* v___f_825_; lean_object* v___f_826_; 
v___f_818_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___closed__0));
v___f_819_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__4));
v___f_820_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__1));
v___f_821_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__3));
v___x_822_ = lean_obj_once(&l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__2, &l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__2);
v___f_823_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___closed__0));
v___f_824_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__1));
v___f_825_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___closed__0));
v___f_826_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___lam__0), 10, 9);
lean_closure_set(v___f_826_, 0, v___f_825_);
lean_closure_set(v___f_826_, 1, v___f_825_);
lean_closure_set(v___f_826_, 2, v___f_824_);
lean_closure_set(v___f_826_, 3, v___f_823_);
lean_closure_set(v___f_826_, 4, v___x_822_);
lean_closure_set(v___f_826_, 5, v___f_821_);
lean_closure_set(v___f_826_, 6, v___f_820_);
lean_closure_set(v___f_826_, 7, v___f_819_);
lean_closure_set(v___f_826_, 8, v___f_818_);
return v___f_826_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions(void){
_start:
{
lean_object* v___f_827_; 
v___f_827_ = lean_obj_once(&l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___closed__0, &l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___closed__0_once, _init_l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___closed__0);
return v___f_827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___lam__0(lean_object* v___x_828_, lean_object* v___x_829_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0(v___x_828_, v___x_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___lam__0___boxed(lean_object* v___x_832_, lean_object* v___x_833_, lean_object* v___y_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___lam__0(v___x_832_, v___x_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f(lean_object* v_v_844_){
_start:
{
lean_object* v___f_846_; lean_object* v___x_847_; 
v___f_846_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___closed__3));
lean_inc(v_v_844_);
v___x_847_ = l_Lasm_JS_Web_Support_isInstance(v___f_846_, v_v_844_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_861_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_861_ == 0)
{
v___x_850_ = v___x_847_;
v_isShared_851_ = v_isSharedCheck_861_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_847_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_861_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
uint8_t v___x_852_; 
v___x_852_ = lean_unbox(v_a_848_);
lean_dec(v_a_848_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; lean_object* v___x_855_; 
lean_dec(v_v_844_);
v___x_853_ = lean_box(0);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 0, v___x_853_);
v___x_855_ = v___x_850_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_853_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
else
{
lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_857_, 0, v_v_844_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 0, v___x_857_);
v___x_859_ = v___x_850_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
lean_dec(v_v_844_);
v_a_862_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_847_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_847_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cast_x3f___boxed(lean_object* v_v_870_, lean_object* v_a_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lasm_JS_Node_InterfaceConstructor_cast_x3f(v_v_870_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_line(lean_object* v_self_874_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_line___closed__0));
v___x_877_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_874_, v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_line___boxed(lean_object* v_self_878_, lean_object* v_a_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lasm_JS_Node_InterfaceConstructor_line(v_self_878_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cursor(lean_object* v_self_882_){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_cursor___closed__0));
v___x_885_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_882_, v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_cursor___boxed(lean_object* v_self_886_, lean_object* v_a_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lasm_JS_Node_InterfaceConstructor_cursor(v_self_886_);
return v_res_888_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__3(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_893_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__2));
v___x_894_ = lean_unsigned_to_nat(2u);
v___x_895_ = lean_mk_empty_array_with_capacity(v___x_894_);
v___x_896_ = lean_array_push(v___x_895_, v___x_893_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onClose(lean_object* v_self_897_, lean_object* v_listener_898_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_900_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0));
v___x_901_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_902_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_902_, 0, v_listener_898_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__3, &l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__3_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__3);
v___x_904_ = lean_array_push(v___x_903_, v___x_902_);
v___x_905_ = l_Lasm_JS_Web_Support_args(v___x_904_);
v___x_906_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_897_, v___x_900_, v___x_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
v_a_915_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_906_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_906_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onClose___boxed(lean_object* v_self_923_, lean_object* v_listener_924_, lean_object* v_a_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Lasm_JS_Node_InterfaceConstructor_onClose(v_self_923_, v_listener_924_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceClose(lean_object* v_self_928_, lean_object* v_listener_929_){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_931_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0));
v___x_932_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_933_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_933_, 0, v_listener_929_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__3, &l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__3_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__3);
v___x_935_ = lean_array_push(v___x_934_, v___x_933_);
v___x_936_ = l_Lasm_JS_Web_Support_args(v___x_935_);
v___x_937_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_928_, v___x_931_, v___x_936_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_937_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_937_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
v_a_946_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_937_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_937_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceClose___boxed(lean_object* v_self_954_, lean_object* v_listener_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lasm_JS_Node_InterfaceConstructor_onceClose(v_self_954_, v_listener_955_);
return v_res_957_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_onError___closed__2(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_961_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onError___closed__1));
v___x_962_ = lean_unsigned_to_nat(2u);
v___x_963_ = lean_mk_empty_array_with_capacity(v___x_962_);
v___x_964_ = lean_array_push(v___x_963_, v___x_961_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onError(lean_object* v_self_965_, lean_object* v_listener_966_){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_968_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0));
v___x_969_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_970_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_970_, 0, v_listener_966_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onError___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onError___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onError___closed__2);
v___x_972_ = lean_array_push(v___x_971_, v___x_970_);
v___x_973_ = l_Lasm_JS_Web_Support_args(v___x_972_);
v___x_974_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_965_, v___x_968_, v___x_973_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_974_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_974_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
v_a_983_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_974_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_974_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onError___boxed(lean_object* v_self_991_, lean_object* v_listener_992_, lean_object* v_a_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lasm_JS_Node_InterfaceConstructor_onError(v_self_991_, v_listener_992_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceError(lean_object* v_self_995_, lean_object* v_listener_996_){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_998_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0));
v___x_999_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1000_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1000_, 0, v_listener_996_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_unsigned_to_nat(2u);
v___x_1002_ = lean_mk_empty_array_with_capacity(v___x_1001_);
lean_dec_ref(v___x_1002_);
v___x_1003_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onError___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onError___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onError___closed__2);
v___x_1004_ = lean_array_push(v___x_1003_, v___x_1000_);
v___x_1005_ = l_Lasm_JS_Web_Support_args(v___x_1004_);
v___x_1006_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_995_, v___x_998_, v___x_1005_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1006_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
v_a_1015_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_1006_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1006_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceError___boxed(lean_object* v_self_1023_, lean_object* v_listener_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lasm_JS_Node_InterfaceConstructor_onceError(v_self_1023_, v_listener_1024_);
return v_res_1026_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__1(void){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1029_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__0));
v___x_1030_ = lean_unsigned_to_nat(2u);
v___x_1031_ = lean_mk_empty_array_with_capacity(v___x_1030_);
v___x_1032_ = lean_array_push(v___x_1031_, v___x_1029_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onLine(lean_object* v_self_1033_, lean_object* v_listener_1034_){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1036_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0));
v___x_1037_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1038_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1038_, 0, v_listener_1034_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v___x_1039_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__1);
v___x_1040_ = lean_array_push(v___x_1039_, v___x_1038_);
v___x_1041_ = l_Lasm_JS_Web_Support_args(v___x_1040_);
v___x_1042_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1033_, v___x_1036_, v___x_1041_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1042_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1042_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
v_a_1051_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1042_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1042_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onLine___boxed(lean_object* v_self_1059_, lean_object* v_listener_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lasm_JS_Node_InterfaceConstructor_onLine(v_self_1059_, v_listener_1060_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceLine(lean_object* v_self_1063_, lean_object* v_listener_1064_){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1066_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0));
v___x_1067_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1068_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1068_, 0, v_listener_1064_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = lean_unsigned_to_nat(2u);
v___x_1070_ = lean_mk_empty_array_with_capacity(v___x_1069_);
lean_dec_ref(v___x_1070_);
v___x_1071_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onLine___closed__1);
v___x_1072_ = lean_array_push(v___x_1071_, v___x_1068_);
v___x_1073_ = l_Lasm_JS_Web_Support_args(v___x_1072_);
v___x_1074_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1063_, v___x_1066_, v___x_1073_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1077_ = v___x_1074_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1074_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
v_a_1083_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1074_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1074_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceLine___boxed(lean_object* v_self_1091_, lean_object* v_listener_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lasm_JS_Node_InterfaceConstructor_onceLine(v_self_1091_, v_listener_1092_);
return v_res_1094_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__1(void){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1097_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__0));
v___x_1098_ = lean_unsigned_to_nat(2u);
v___x_1099_ = lean_mk_empty_array_with_capacity(v___x_1098_);
v___x_1100_ = lean_array_push(v___x_1099_, v___x_1097_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onHistory(lean_object* v_self_1101_, lean_object* v_listener_1102_){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1104_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0));
v___x_1105_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1106_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1106_, 0, v_listener_1102_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__1);
v___x_1108_ = lean_array_push(v___x_1107_, v___x_1106_);
v___x_1109_ = l_Lasm_JS_Web_Support_args(v___x_1108_);
v___x_1110_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1101_, v___x_1104_, v___x_1109_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1110_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1110_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1119_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1110_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1110_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onHistory___boxed(lean_object* v_self_1127_, lean_object* v_listener_1128_, lean_object* v_a_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lasm_JS_Node_InterfaceConstructor_onHistory(v_self_1127_, v_listener_1128_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceHistory(lean_object* v_self_1131_, lean_object* v_listener_1132_){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1134_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0));
v___x_1135_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1136_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1136_, 0, v_listener_1132_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = lean_unsigned_to_nat(2u);
v___x_1138_ = lean_mk_empty_array_with_capacity(v___x_1137_);
lean_dec_ref(v___x_1138_);
v___x_1139_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onHistory___closed__1);
v___x_1140_ = lean_array_push(v___x_1139_, v___x_1136_);
v___x_1141_ = l_Lasm_JS_Web_Support_args(v___x_1140_);
v___x_1142_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1131_, v___x_1134_, v___x_1141_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1142_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
v_a_1151_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1142_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1142_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceHistory___boxed(lean_object* v_self_1159_, lean_object* v_listener_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lasm_JS_Node_InterfaceConstructor_onceHistory(v_self_1159_, v_listener_1160_);
return v_res_1162_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__2(void){
_start:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1166_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__1));
v___x_1167_ = lean_unsigned_to_nat(2u);
v___x_1168_ = lean_mk_empty_array_with_capacity(v___x_1167_);
v___x_1169_ = lean_array_push(v___x_1168_, v___x_1166_);
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onPause(lean_object* v_self_1170_, lean_object* v_listener_1171_){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1173_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0));
v___x_1174_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1175_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_listener_1171_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
v___x_1176_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__2);
v___x_1177_ = lean_array_push(v___x_1176_, v___x_1175_);
v___x_1178_ = l_Lasm_JS_Web_Support_args(v___x_1177_);
v___x_1179_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1170_, v___x_1173_, v___x_1178_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v___x_1179_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1179_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1180_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
v_a_1188_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1179_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1179_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_a_1188_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onPause___boxed(lean_object* v_self_1196_, lean_object* v_listener_1197_, lean_object* v_a_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lasm_JS_Node_InterfaceConstructor_onPause(v_self_1196_, v_listener_1197_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_oncePause(lean_object* v_self_1200_, lean_object* v_listener_1201_){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1203_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0));
v___x_1204_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1205_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1205_, 0, v_listener_1201_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
v___x_1206_ = lean_unsigned_to_nat(2u);
v___x_1207_ = lean_mk_empty_array_with_capacity(v___x_1206_);
lean_dec_ref(v___x_1207_);
v___x_1208_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__2);
v___x_1209_ = lean_array_push(v___x_1208_, v___x_1205_);
v___x_1210_ = l_Lasm_JS_Web_Support_args(v___x_1209_);
v___x_1211_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1200_, v___x_1203_, v___x_1210_);
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1211_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1211_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
v_a_1220_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1211_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1211_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_oncePause___boxed(lean_object* v_self_1228_, lean_object* v_listener_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lasm_JS_Node_InterfaceConstructor_oncePause(v_self_1228_, v_listener_1229_);
return v_res_1231_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__2(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1235_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__1));
v___x_1236_ = lean_unsigned_to_nat(2u);
v___x_1237_ = lean_mk_empty_array_with_capacity(v___x_1236_);
v___x_1238_ = lean_array_push(v___x_1237_, v___x_1235_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onResume(lean_object* v_self_1239_, lean_object* v_listener_1240_){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1242_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0));
v___x_1243_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1244_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1244_, 0, v_listener_1240_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
v___x_1245_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__2);
v___x_1246_ = lean_array_push(v___x_1245_, v___x_1244_);
v___x_1247_ = l_Lasm_JS_Web_Support_args(v___x_1246_);
v___x_1248_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1239_, v___x_1242_, v___x_1247_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1256_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1251_ = v___x_1248_;
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v___x_1248_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1256_;
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
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1249_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
v_a_1257_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1248_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1248_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onResume___boxed(lean_object* v_self_1265_, lean_object* v_listener_1266_, lean_object* v_a_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lasm_JS_Node_InterfaceConstructor_onResume(v_self_1265_, v_listener_1266_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceResume(lean_object* v_self_1269_, lean_object* v_listener_1270_){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1272_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0));
v___x_1273_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1274_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1274_, 0, v_listener_1270_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = lean_unsigned_to_nat(2u);
v___x_1276_ = lean_mk_empty_array_with_capacity(v___x_1275_);
lean_dec_ref(v___x_1276_);
v___x_1277_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__2);
v___x_1278_ = lean_array_push(v___x_1277_, v___x_1274_);
v___x_1279_ = l_Lasm_JS_Web_Support_args(v___x_1278_);
v___x_1280_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1269_, v___x_1272_, v___x_1279_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1280_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1280_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_a_1281_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
v_a_1289_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1280_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1280_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
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
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceResume___boxed(lean_object* v_self_1297_, lean_object* v_listener_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Lasm_JS_Node_InterfaceConstructor_onceResume(v_self_1297_, v_listener_1298_);
return v_res_1300_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__2(void){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1304_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__1));
v___x_1305_ = lean_unsigned_to_nat(2u);
v___x_1306_ = lean_mk_empty_array_with_capacity(v___x_1305_);
v___x_1307_ = lean_array_push(v___x_1306_, v___x_1304_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT(lean_object* v_self_1308_, lean_object* v_listener_1309_){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1311_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0));
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1313_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1313_, 0, v_listener_1309_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__2);
v___x_1315_ = lean_array_push(v___x_1314_, v___x_1313_);
v___x_1316_ = l_Lasm_JS_Web_Support_args(v___x_1315_);
v___x_1317_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1308_, v___x_1311_, v___x_1316_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
v_a_1326_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1317_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1317_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___boxed(lean_object* v_self_1334_, lean_object* v_listener_1335_, lean_object* v_a_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT(v_self_1334_, v_listener_1335_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGCONT(lean_object* v_self_1338_, lean_object* v_listener_1339_){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1341_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0));
v___x_1342_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1343_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1343_, 0, v_listener_1339_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = lean_unsigned_to_nat(2u);
v___x_1345_ = lean_mk_empty_array_with_capacity(v___x_1344_);
lean_dec_ref(v___x_1345_);
v___x_1346_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onSIGCONT___closed__2);
v___x_1347_ = lean_array_push(v___x_1346_, v___x_1343_);
v___x_1348_ = l_Lasm_JS_Web_Support_args(v___x_1347_);
v___x_1349_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1338_, v___x_1341_, v___x_1348_);
if (lean_obj_tag(v___x_1349_) == 0)
{
lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1357_; 
v_a_1350_ = lean_ctor_get(v___x_1349_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1352_ = v___x_1349_;
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_dec(v___x_1349_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1355_; 
if (v_isShared_1353_ == 0)
{
v___x_1355_ = v___x_1352_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_a_1350_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
else
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
v_a_1358_ = lean_ctor_get(v___x_1349_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___x_1349_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___x_1349_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGCONT___boxed(lean_object* v_self_1366_, lean_object* v_listener_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Lasm_JS_Node_InterfaceConstructor_onceSIGCONT(v_self_1366_, v_listener_1367_);
return v_res_1369_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__2(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1373_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__1));
v___x_1374_ = lean_unsigned_to_nat(2u);
v___x_1375_ = lean_mk_empty_array_with_capacity(v___x_1374_);
v___x_1376_ = lean_array_push(v___x_1375_, v___x_1373_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGINT(lean_object* v_self_1377_, lean_object* v_listener_1378_){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1380_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0));
v___x_1381_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1382_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1382_, 0, v_listener_1378_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
v___x_1383_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__2);
v___x_1384_ = lean_array_push(v___x_1383_, v___x_1382_);
v___x_1385_ = l_Lasm_JS_Web_Support_args(v___x_1384_);
v___x_1386_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1377_, v___x_1380_, v___x_1385_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1394_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1389_ = v___x_1386_;
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1386_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
if (v_isShared_1390_ == 0)
{
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_a_1387_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
else
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1402_; 
v_a_1395_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1397_ = v___x_1386_;
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1386_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1400_; 
if (v_isShared_1398_ == 0)
{
v___x_1400_ = v___x_1397_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_a_1395_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___boxed(lean_object* v_self_1403_, lean_object* v_listener_1404_, lean_object* v_a_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_Lasm_JS_Node_InterfaceConstructor_onSIGINT(v_self_1403_, v_listener_1404_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGINT(lean_object* v_self_1407_, lean_object* v_listener_1408_){
_start:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1410_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0));
v___x_1411_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1412_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1412_, 0, v_listener_1408_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
v___x_1413_ = lean_unsigned_to_nat(2u);
v___x_1414_ = lean_mk_empty_array_with_capacity(v___x_1413_);
lean_dec_ref(v___x_1414_);
v___x_1415_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onSIGINT___closed__2);
v___x_1416_ = lean_array_push(v___x_1415_, v___x_1412_);
v___x_1417_ = l_Lasm_JS_Web_Support_args(v___x_1416_);
v___x_1418_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1407_, v___x_1410_, v___x_1417_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1418_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1418_);
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
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
v_a_1427_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1418_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1418_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGINT___boxed(lean_object* v_self_1435_, lean_object* v_listener_1436_, lean_object* v_a_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l_Lasm_JS_Node_InterfaceConstructor_onceSIGINT(v_self_1435_, v_listener_1436_);
return v_res_1438_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__2(void){
_start:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1442_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__1));
v___x_1443_ = lean_unsigned_to_nat(2u);
v___x_1444_ = lean_mk_empty_array_with_capacity(v___x_1443_);
v___x_1445_ = lean_array_push(v___x_1444_, v___x_1442_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP(lean_object* v_self_1446_, lean_object* v_listener_1447_){
_start:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1449_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__0));
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1451_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1451_, 0, v_listener_1447_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__2);
v___x_1453_ = lean_array_push(v___x_1452_, v___x_1451_);
v___x_1454_ = l_Lasm_JS_Web_Support_args(v___x_1453_);
v___x_1455_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1446_, v___x_1449_, v___x_1454_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1455_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1455_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_a_1456_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
else
{
lean_object* v_a_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1471_; 
v_a_1464_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1466_ = v___x_1455_;
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_a_1464_);
lean_dec(v___x_1455_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1469_; 
if (v_isShared_1467_ == 0)
{
v___x_1469_ = v___x_1466_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_a_1464_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___boxed(lean_object* v_self_1472_, lean_object* v_listener_1473_, lean_object* v_a_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP(v_self_1472_, v_listener_1473_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGTSTP(lean_object* v_self_1476_, lean_object* v_listener_1477_){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1479_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onceClose___closed__0));
v___x_1480_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1481_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1481_, 0, v_listener_1477_);
lean_ctor_set(v___x_1481_, 1, v___x_1480_);
v___x_1482_ = lean_unsigned_to_nat(2u);
v___x_1483_ = lean_mk_empty_array_with_capacity(v___x_1482_);
lean_dec_ref(v___x_1483_);
v___x_1484_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__2, &l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__2_once, _init_l_Lasm_JS_Node_InterfaceConstructor_onSIGTSTP___closed__2);
v___x_1485_ = lean_array_push(v___x_1484_, v___x_1481_);
v___x_1486_ = l_Lasm_JS_Web_Support_args(v___x_1485_);
v___x_1487_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1476_, v___x_1479_, v___x_1486_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1490_ = v___x_1487_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1487_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_a_1488_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
v_a_1496_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1487_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1487_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_onceSIGTSTP___boxed(lean_object* v_self_1504_, lean_object* v_listener_1505_, lean_object* v_a_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lasm_JS_Node_InterfaceConstructor_onceSIGTSTP(v_self_1504_, v_listener_1505_);
return v_res_1507_;
}
}
static lean_object* _init_l_Lasm_JS_Node_InterfaceConstructor_close___closed__1(void){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_close___closed__0));
v___x_1511_ = l_Lasm_JS_Web_Support_args(v___x_1510_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_close(lean_object* v_self_1512_){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1514_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onClose___closed__1));
v___x_1515_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_close___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_close___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_close___closed__1);
v___x_1516_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1512_, v___x_1514_, v___x_1515_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_close___boxed(lean_object* v_self_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_Lasm_JS_Node_InterfaceConstructor_close(v_self_1517_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_pause(lean_object* v_self_1520_){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1522_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onPause___closed__0));
v___x_1523_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_close___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_close___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_close___closed__1);
v___x_1524_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1520_, v___x_1522_, v___x_1523_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_pause___boxed(lean_object* v_self_1525_, lean_object* v_a_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Lasm_JS_Node_InterfaceConstructor_pause(v_self_1525_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_prompt(lean_object* v_self_1528_, lean_object* v_preserveCursor_1529_){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1531_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__7));
v___x_1532_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preserveCursor_1529_);
v___x_1533_ = lean_unsigned_to_nat(1u);
v___x_1534_ = lean_mk_empty_array_with_capacity(v___x_1533_);
v___x_1535_ = lean_array_push(v___x_1534_, v___x_1532_);
v___x_1536_ = l_Lasm_JS_Web_Support_args(v___x_1535_);
v___x_1537_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1528_, v___x_1531_, v___x_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_prompt___boxed(lean_object* v_self_1538_, lean_object* v_preserveCursor_1539_, lean_object* v_a_1540_){
_start:
{
lean_object* v_res_1541_; 
v_res_1541_ = l_Lasm_JS_Node_InterfaceConstructor_prompt(v_self_1538_, v_preserveCursor_1539_);
lean_dec(v_preserveCursor_1539_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_resume(lean_object* v_self_1542_){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1544_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_onResume___closed__0));
v___x_1545_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_close___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_close___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_close___closed__1);
v___x_1546_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1542_, v___x_1544_, v___x_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_resume___boxed(lean_object* v_self_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Lasm_JS_Node_InterfaceConstructor_resume(v_self_1547_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_setPrompt(lean_object* v_self_1551_, lean_object* v_prompt_1552_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1554_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_setPrompt___closed__0));
v___x_1555_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1555_, 0, v_prompt_1552_);
v___x_1556_ = lean_unsigned_to_nat(1u);
v___x_1557_ = lean_mk_empty_array_with_capacity(v___x_1556_);
v___x_1558_ = lean_array_push(v___x_1557_, v___x_1555_);
v___x_1559_ = l_Lasm_JS_Web_Support_args(v___x_1558_);
v___x_1560_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1551_, v___x_1554_, v___x_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_setPrompt___boxed(lean_object* v_self_1561_, lean_object* v_prompt_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lasm_JS_Node_InterfaceConstructor_setPrompt(v_self_1561_, v_prompt_1562_);
return v_res_1564_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1565_; uint64_t v___x_1566_; 
v___x_1565_ = 0;
v___x_1566_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0(uint8_t v_await_1567_, uint64_t v_extra_1568_){
_start:
{
uint64_t v___x_1569_; uint64_t v___y_1571_; 
v___x_1569_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0___closed__0);
if (v_await_1567_ == 0)
{
uint64_t v___x_1574_; 
v___x_1574_ = 0ULL;
v___y_1571_ = v___x_1574_;
goto v___jp_1570_;
}
else
{
uint64_t v___x_1575_; 
v___x_1575_ = 2ULL;
v___y_1571_ = v___x_1575_;
goto v___jp_1570_;
}
v___jp_1570_:
{
uint64_t v___x_1572_; uint64_t v___x_1573_; 
v___x_1572_ = lean_uint64_lor(v___x_1569_, v___y_1571_);
v___x_1573_ = lean_uint64_lor(v___x_1572_, v_extra_1568_);
return v___x_1573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0___boxed(lean_object* v_await_1576_, lean_object* v_extra_1577_){
_start:
{
uint8_t v_await_boxed_1578_; uint64_t v_extra_boxed_1579_; uint64_t v_res_1580_; lean_object* v_r_1581_; 
v_await_boxed_1578_ = lean_unbox(v_await_1576_);
v_extra_boxed_1579_ = lean_unbox_uint64(v_extra_1577_);
lean_dec_ref(v_extra_1577_);
v_res_1580_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0(v_await_boxed_1578_, v_extra_boxed_1579_);
v_r_1581_ = lean_box_uint64(v_res_1580_);
return v_r_1581_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1582_; uint8_t v___x_1583_; uint64_t v___x_1584_; 
v___x_1582_ = 8ULL;
v___x_1583_ = 0;
v___x_1584_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0_spec__0(v___x_1583_, v___x_1582_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0(lean_object* v_o_1586_, lean_object* v_name_1587_, lean_object* v_args_1588_){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; uint64_t v___x_1593_; lean_object* v___x_1594_; 
v___x_1590_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1591_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1591_, 0, v_o_1586_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
lean_inc_ref(v_name_1587_);
v___x_1592_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1592_, 0, v_name_1587_);
v___x_1593_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__0);
v___x_1594_ = l_Lasm_JS_Value_invokeRaw(v___x_1591_, v___x_1592_, v_args_1588_, v___x_1593_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1594_, 1);
v___x_1596_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___closed__1));
v___x_1597_ = lean_string_append(v___x_1596_, v_name_1587_);
lean_dec_ref(v_name_1587_);
v___x_1598_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_1597_, v_a_1595_);
lean_dec(v_a_1595_);
lean_dec_ref(v___x_1597_);
return v___x_1598_;
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
lean_dec_ref(v_name_1587_);
v_a_1599_ = lean_ctor_get(v___x_1594_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1594_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1594_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0___boxed(lean_object* v_o_1607_, lean_object* v_name_1608_, lean_object* v_args_1609_, lean_object* v_a_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0(v_o_1607_, v_name_1608_, v_args_1609_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_getPrompt(lean_object* v_self_1613_){
_start:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1615_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_getPrompt___closed__0));
v___x_1616_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_close___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_close___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_close___closed__1);
v___x_1617_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_InterfaceConstructor_getPrompt_spec__0(v_self_1613_, v___x_1615_, v___x_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_getPrompt___boxed(lean_object* v_self_1618_, lean_object* v_a_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Lasm_JS_Node_InterfaceConstructor_getPrompt(v_self_1618_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_InterfaceConstructor_write_spec__0(lean_object* v_x_1621_){
_start:
{
if (lean_obj_tag(v_x_1621_) == 0)
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_box(0);
return v___x_1622_;
}
else
{
lean_object* v_val_1623_; lean_object* v_ctrl_1624_; lean_object* v_meta_1625_; lean_object* v_shift_1626_; lean_object* v_name_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v_val_1623_ = lean_ctor_get(v_x_1621_, 0);
lean_inc(v_val_1623_);
lean_dec_ref_known(v_x_1621_, 1);
v_ctrl_1624_ = lean_ctor_get(v_val_1623_, 0);
lean_inc(v_ctrl_1624_);
v_meta_1625_ = lean_ctor_get(v_val_1623_, 1);
lean_inc(v_meta_1625_);
v_shift_1626_ = lean_ctor_get(v_val_1623_, 2);
lean_inc(v_shift_1626_);
v_name_1627_ = lean_ctor_get(v_val_1623_, 3);
lean_inc(v_name_1627_);
lean_dec(v_val_1623_);
v___x_1628_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__0));
v___x_1629_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrl_1624_);
lean_dec(v_ctrl_1624_);
v___x_1630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1628_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__1));
v___x_1632_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_meta_1625_);
lean_dec(v_meta_1625_);
v___x_1633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1631_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__2));
v___x_1635_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shift_1626_);
lean_dec(v_shift_1626_);
v___x_1636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1634_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
v___x_1637_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0___closed__3));
v___x_1638_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_name_1627_);
v___x_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1637_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v___x_1640_ = lean_unsigned_to_nat(4u);
v___x_1641_ = lean_mk_empty_array_with_capacity(v___x_1640_);
v___x_1642_ = lean_array_push(v___x_1641_, v___x_1630_);
v___x_1643_ = lean_array_push(v___x_1642_, v___x_1633_);
v___x_1644_ = lean_array_push(v___x_1643_, v___x_1636_);
v___x_1645_ = lean_array_push(v___x_1644_, v___x_1639_);
v___x_1646_ = l_Lasm_JS_Web_Support_fields(v___x_1645_);
lean_dec_ref(v___x_1645_);
return v___x_1646_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_write(lean_object* v_self_1648_, lean_object* v_data_1649_, lean_object* v_key_1650_){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1652_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_write___closed__0));
v___x_1653_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1653_, 0, v_data_1649_);
v___x_1654_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_InterfaceConstructor_write_spec__0(v_key_1650_);
v___x_1655_ = lean_unsigned_to_nat(2u);
v___x_1656_ = lean_mk_empty_array_with_capacity(v___x_1655_);
v___x_1657_ = lean_array_push(v___x_1656_, v___x_1653_);
v___x_1658_ = lean_array_push(v___x_1657_, v___x_1654_);
v___x_1659_ = l_Lasm_JS_Web_Support_args(v___x_1658_);
v___x_1660_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1648_, v___x_1652_, v___x_1659_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_write___boxed(lean_object* v_self_1661_, lean_object* v_data_1662_, lean_object* v_key_1663_, lean_object* v_a_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l_Lasm_JS_Node_InterfaceConstructor_write(v_self_1661_, v_data_1662_, v_key_1663_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_getCursorPos(lean_object* v_self_1667_){
_start:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Node_InterfaceConstructor_getCursorPos___closed__0));
v___x_1670_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_close___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_close___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_close___closed__1);
v___x_1671_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(v_self_1667_, v___x_1669_, v___x_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_getCursorPos___boxed(lean_object* v_self_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lasm_JS_Node_InterfaceConstructor_getCursorPos(v_self_1672_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f(lean_object* v_v_1683_){
_start:
{
lean_object* v___f_1685_; lean_object* v___x_1686_; 
v___f_1685_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___closed__3));
lean_inc(v_v_1683_);
v___x_1686_ = l_Lasm_JS_Web_Support_isInstance(v___f_1685_, v_v_1683_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1700_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1689_ = v___x_1686_;
v_isShared_1690_ = v_isSharedCheck_1700_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1686_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1700_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
uint8_t v___x_1691_; 
v___x_1691_ = lean_unbox(v_a_1687_);
lean_dec(v_a_1687_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; lean_object* v___x_1694_; 
lean_dec(v_v_1683_);
v___x_1692_ = lean_box(0);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1692_);
v___x_1694_ = v___x_1689_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1698_; 
v___x_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1696_, 0, v_v_1683_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1696_);
v___x_1698_ = v___x_1689_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v___x_1696_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
else
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1708_; 
lean_dec(v_v_1683_);
v_a_1701_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1703_ = v___x_1686_;
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v___x_1686_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1706_; 
if (v_isShared_1704_ == 0)
{
v___x_1706_ = v___x_1703_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_a_1701_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f___boxed(lean_object* v_v_1709_, lean_object* v_a_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_Lasm_JS_Node_readlinePromises_Interface_cast_x3f(v_v_1709_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readlinePromises_Interface_question_spec__0(lean_object* v_x_1712_){
_start:
{
if (lean_obj_tag(v_x_1712_) == 0)
{
lean_object* v___x_1713_; 
v___x_1713_ = lean_box(0);
return v___x_1713_;
}
else
{
lean_object* v_val_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v_val_1714_ = lean_ctor_get(v_x_1712_, 0);
v___x_1715_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0));
v___x_1716_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_1714_);
v___x_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1715_);
lean_ctor_set(v___x_1717_, 1, v___x_1716_);
v___x_1718_ = lean_unsigned_to_nat(1u);
v___x_1719_ = lean_mk_empty_array_with_capacity(v___x_1718_);
v___x_1720_ = lean_array_push(v___x_1719_, v___x_1717_);
v___x_1721_ = l_Lasm_JS_Web_Support_fields(v___x_1720_);
lean_dec_ref(v___x_1720_);
return v___x_1721_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readlinePromises_Interface_question_spec__0___boxed(lean_object* v_x_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readlinePromises_Interface_question_spec__0(v_x_1722_);
lean_dec(v_x_1722_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Interface_question(lean_object* v_self_1725_, lean_object* v_query_1726_, lean_object* v_options_1727_){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1729_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Interface_question___closed__0));
v___x_1730_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1730_, 0, v_query_1726_);
v___x_1731_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readlinePromises_Interface_question_spec__0(v_options_1727_);
v___x_1732_ = lean_unsigned_to_nat(2u);
v___x_1733_ = lean_mk_empty_array_with_capacity(v___x_1732_);
v___x_1734_ = lean_array_push(v___x_1733_, v___x_1730_);
v___x_1735_ = lean_array_push(v___x_1734_, v___x_1731_);
v___x_1736_ = l_Lasm_JS_Web_Support_args(v___x_1735_);
v___x_1737_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_stream_Readable_forEach_spec__1(v_self_1725_, v___x_1729_, v___x_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Interface_question___boxed(lean_object* v_self_1738_, lean_object* v_query_1739_, lean_object* v_options_1740_, lean_object* v_a_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Lasm_JS_Node_readlinePromises_Interface_question(v_self_1738_, v_query_1739_, v_options_1740_);
lean_dec(v_options_1740_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f(lean_object* v_v_1750_){
_start:
{
lean_object* v___f_1752_; lean_object* v___x_1753_; 
v___f_1752_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___closed__2));
lean_inc(v_v_1750_);
v___x_1753_ = l_Lasm_JS_Web_Support_isInstance(v___f_1752_, v_v_1750_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1767_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1756_ = v___x_1753_;
v_isShared_1757_ = v_isSharedCheck_1767_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1753_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1767_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
uint8_t v___x_1758_; 
v___x_1758_ = lean_unbox(v_a_1754_);
lean_dec(v_a_1754_);
if (v___x_1758_ == 0)
{
lean_object* v___x_1759_; lean_object* v___x_1761_; 
lean_dec(v_v_1750_);
v___x_1759_ = lean_box(0);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 0, v___x_1759_);
v___x_1761_ = v___x_1756_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1759_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
else
{
lean_object* v___x_1763_; lean_object* v___x_1765_; 
v___x_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_v_1750_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 0, v___x_1763_);
v___x_1765_ = v___x_1756_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v___x_1763_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
lean_dec(v_v_1750_);
v_a_1768_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1753_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1753_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f___boxed(lean_object* v_v_1776_, lean_object* v_a_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lasm_JS_Node_readlinePromises_Readline_cast_x3f(v_v_1776_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearLine(lean_object* v_self_1780_, lean_object* v_dir_1781_){
_start:
{
lean_object* v___x_1783_; lean_object* v___y_1785_; lean_object* v___x_1791_; lean_object* v___x_1792_; uint8_t v___x_1793_; 
v___x_1783_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Readline_clearLine___closed__0));
v___x_1791_ = lean_nat_abs(v_dir_1781_);
v___x_1792_ = lean_cstr_to_nat("9007199254740991");
v___x_1793_ = lean_nat_dec_le(v___x_1791_, v___x_1792_);
lean_dec(v___x_1791_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; 
v___x_1794_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1794_, 0, v_dir_1781_);
v___y_1785_ = v___x_1794_;
goto v___jp_1784_;
}
else
{
double v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = l_Float_ofInt(v_dir_1781_);
lean_dec(v_dir_1781_);
v___x_1796_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1796_, 0, v___x_1795_);
v___y_1785_ = v___x_1796_;
goto v___jp_1784_;
}
v___jp_1784_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1786_ = lean_unsigned_to_nat(1u);
v___x_1787_ = lean_mk_empty_array_with_capacity(v___x_1786_);
v___x_1788_ = lean_array_push(v___x_1787_, v___y_1785_);
v___x_1789_ = l_Lasm_JS_Web_Support_args(v___x_1788_);
v___x_1790_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(v_self_1780_, v___x_1783_, v___x_1789_);
return v___x_1790_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearLine___boxed(lean_object* v_self_1797_, lean_object* v_dir_1798_, lean_object* v_a_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l_Lasm_JS_Node_readlinePromises_Readline_clearLine(v_self_1797_, v_dir_1798_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown(lean_object* v_self_1802_){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1804_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown___closed__0));
v___x_1805_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_close___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_close___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_close___closed__1);
v___x_1806_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(v_self_1802_, v___x_1804_, v___x_1805_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown___boxed(lean_object* v_self_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lasm_JS_Node_readlinePromises_Readline_clearScreenDown(v_self_1807_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_commit(lean_object* v_self_1811_){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1813_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Readline_commit___closed__0));
v___x_1814_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_close___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_close___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_close___closed__1);
v___x_1815_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_stream_Readable_forEach_spec__1(v_self_1811_, v___x_1813_, v___x_1814_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_commit___boxed(lean_object* v_self_1816_, lean_object* v_a_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l_Lasm_JS_Node_readlinePromises_Readline_commit(v_self_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cursorTo(lean_object* v_self_1820_, lean_object* v_x_1821_, lean_object* v_y_1822_){
_start:
{
lean_object* v___x_1824_; lean_object* v___y_1826_; lean_object* v___x_1834_; lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1824_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Readline_cursorTo___closed__0));
v___x_1834_ = lean_nat_abs(v_x_1821_);
v___x_1835_ = lean_cstr_to_nat("9007199254740991");
v___x_1836_ = lean_nat_dec_le(v___x_1834_, v___x_1835_);
lean_dec(v___x_1834_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; 
v___x_1837_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1837_, 0, v_x_1821_);
v___y_1826_ = v___x_1837_;
goto v___jp_1825_;
}
else
{
double v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = l_Float_ofInt(v_x_1821_);
lean_dec(v_x_1821_);
v___x_1839_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1839_, 0, v___x_1838_);
v___y_1826_ = v___x_1839_;
goto v___jp_1825_;
}
v___jp_1825_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1827_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__1(v_y_1822_);
v___x_1828_ = lean_unsigned_to_nat(2u);
v___x_1829_ = lean_mk_empty_array_with_capacity(v___x_1828_);
v___x_1830_ = lean_array_push(v___x_1829_, v___y_1826_);
v___x_1831_ = lean_array_push(v___x_1830_, v___x_1827_);
v___x_1832_ = l_Lasm_JS_Web_Support_args(v___x_1831_);
v___x_1833_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(v_self_1820_, v___x_1824_, v___x_1832_);
return v___x_1833_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_cursorTo___boxed(lean_object* v_self_1840_, lean_object* v_x_1841_, lean_object* v_y_1842_, lean_object* v_a_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lasm_JS_Node_readlinePromises_Readline_cursorTo(v_self_1840_, v_x_1841_, v_y_1842_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_moveCursor(lean_object* v_self_1846_, lean_object* v_dx_1847_, lean_object* v_dy_1848_){
_start:
{
lean_object* v___x_1850_; lean_object* v___y_1852_; lean_object* v___y_1853_; lean_object* v___y_1861_; lean_object* v___x_1868_; lean_object* v___x_1869_; uint8_t v___x_1870_; 
v___x_1850_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Readline_moveCursor___closed__0));
v___x_1868_ = lean_nat_abs(v_dx_1847_);
v___x_1869_ = lean_cstr_to_nat("9007199254740991");
v___x_1870_ = lean_nat_dec_le(v___x_1868_, v___x_1869_);
lean_dec(v___x_1868_);
if (v___x_1870_ == 0)
{
lean_object* v___x_1871_; 
v___x_1871_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1871_, 0, v_dx_1847_);
v___y_1861_ = v___x_1871_;
goto v___jp_1860_;
}
else
{
double v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = l_Float_ofInt(v_dx_1847_);
lean_dec(v_dx_1847_);
v___x_1873_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1873_, 0, v___x_1872_);
v___y_1861_ = v___x_1873_;
goto v___jp_1860_;
}
v___jp_1851_:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1854_ = lean_unsigned_to_nat(2u);
v___x_1855_ = lean_mk_empty_array_with_capacity(v___x_1854_);
v___x_1856_ = lean_array_push(v___x_1855_, v___y_1852_);
v___x_1857_ = lean_array_push(v___x_1856_, v___y_1853_);
v___x_1858_ = l_Lasm_JS_Web_Support_args(v___x_1857_);
v___x_1859_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(v_self_1846_, v___x_1850_, v___x_1858_);
return v___x_1859_;
}
v___jp_1860_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; uint8_t v___x_1864_; 
v___x_1862_ = lean_nat_abs(v_dy_1848_);
v___x_1863_ = lean_cstr_to_nat("9007199254740991");
v___x_1864_ = lean_nat_dec_le(v___x_1862_, v___x_1863_);
lean_dec(v___x_1862_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1865_, 0, v_dy_1848_);
v___y_1852_ = v___y_1861_;
v___y_1853_ = v___x_1865_;
goto v___jp_1851_;
}
else
{
double v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = l_Float_ofInt(v_dy_1848_);
lean_dec(v_dy_1848_);
v___x_1867_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1867_, 0, v___x_1866_);
v___y_1852_ = v___y_1861_;
v___y_1853_ = v___x_1867_;
goto v___jp_1851_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_moveCursor___boxed(lean_object* v_self_1874_, lean_object* v_dx_1875_, lean_object* v_dy_1876_, lean_object* v_a_1877_){
_start:
{
lean_object* v_res_1878_; 
v_res_1878_ = l_Lasm_JS_Node_readlinePromises_Readline_moveCursor(v_self_1874_, v_dx_1875_, v_dy_1876_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_rollback(lean_object* v_self_1880_){
_start:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1882_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Readline_rollback___closed__0));
v___x_1883_ = lean_obj_once(&l_Lasm_JS_Node_InterfaceConstructor_close___closed__1, &l_Lasm_JS_Node_InterfaceConstructor_close___closed__1_once, _init_l_Lasm_JS_Node_InterfaceConstructor_close___closed__1);
v___x_1884_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(v_self_1880_, v___x_1882_, v___x_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_Readline_rollback___boxed(lean_object* v_self_1885_, lean_object* v_a_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l_Lasm_JS_Node_readlinePromises_Readline_rollback(v_self_1885_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_cast_x3f(lean_object* v_v_1891_){
_start:
{
lean_object* v___f_1893_; lean_object* v___x_1894_; 
v___f_1893_ = ((lean_object*)(l_Lasm_JS_Node_readline_Interface_cast_x3f___closed__0));
lean_inc(v_v_1891_);
v___x_1894_ = l_Lasm_JS_Web_Support_isInstance(v___f_1893_, v_v_1891_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1908_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1897_ = v___x_1894_;
v_isShared_1898_ = v_isSharedCheck_1908_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1894_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1908_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
uint8_t v___x_1899_; 
v___x_1899_ = lean_unbox(v_a_1895_);
lean_dec(v_a_1895_);
if (v___x_1899_ == 0)
{
lean_object* v___x_1900_; lean_object* v___x_1902_; 
lean_dec(v_v_1891_);
v___x_1900_ = lean_box(0);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1900_);
v___x_1902_ = v___x_1897_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
else
{
lean_object* v___x_1904_; lean_object* v___x_1906_; 
v___x_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1904_, 0, v_v_1891_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1904_);
v___x_1906_ = v___x_1897_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v___x_1904_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec(v_v_1891_);
v_a_1909_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1894_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1894_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_cast_x3f___boxed(lean_object* v_v_1917_, lean_object* v_a_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lasm_JS_Node_readline_Interface_cast_x3f(v_v_1917_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_question(lean_object* v_self_1920_, lean_object* v_query_1921_, lean_object* v_callback_1922_){
_start:
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1924_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Interface_question___closed__0));
v___x_1925_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1925_, 0, v_query_1921_);
v___x_1926_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1927_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1927_, 0, v_callback_1922_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
v___x_1928_ = lean_unsigned_to_nat(2u);
v___x_1929_ = lean_mk_empty_array_with_capacity(v___x_1928_);
v___x_1930_ = lean_array_push(v___x_1929_, v___x_1925_);
v___x_1931_ = lean_array_push(v___x_1930_, v___x_1927_);
v___x_1932_ = l_Lasm_JS_Web_Support_args(v___x_1931_);
v___x_1933_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1920_, v___x_1924_, v___x_1932_);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_question___boxed(lean_object* v_self_1934_, lean_object* v_query_1935_, lean_object* v_callback_1936_, lean_object* v_a_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Lasm_JS_Node_readline_Interface_question(v_self_1934_, v_query_1935_, v_callback_1936_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_questionWithOptions(lean_object* v_self_1939_, lean_object* v_query_1940_, lean_object* v_options_1941_, lean_object* v_callback_1942_){
_start:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1944_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_Interface_question___closed__0));
v___x_1945_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1945_, 0, v_query_1940_);
v___x_1946_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0));
v___x_1947_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_options_1941_);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1946_);
lean_ctor_set(v___x_1948_, 1, v___x_1947_);
v___x_1949_ = lean_unsigned_to_nat(1u);
v___x_1950_ = lean_mk_empty_array_with_capacity(v___x_1949_);
v___x_1951_ = lean_array_push(v___x_1950_, v___x_1948_);
v___x_1952_ = l_Lasm_JS_Web_Support_fields(v___x_1951_);
lean_dec_ref(v___x_1951_);
v___x_1953_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1954_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1954_, 0, v_callback_1942_);
lean_ctor_set(v___x_1954_, 1, v___x_1953_);
v___x_1955_ = lean_unsigned_to_nat(3u);
v___x_1956_ = lean_mk_empty_array_with_capacity(v___x_1955_);
v___x_1957_ = lean_array_push(v___x_1956_, v___x_1945_);
v___x_1958_ = lean_array_push(v___x_1957_, v___x_1952_);
v___x_1959_ = lean_array_push(v___x_1958_, v___x_1954_);
v___x_1960_ = l_Lasm_JS_Web_Support_args(v___x_1959_);
v___x_1961_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1939_, v___x_1944_, v___x_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_Interface_questionWithOptions___boxed(lean_object* v_self_1962_, lean_object* v_query_1963_, lean_object* v_options_1964_, lean_object* v_callback_1965_, lean_object* v_a_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_Lasm_JS_Node_readline_Interface_questionWithOptions(v_self_1962_, v_query_1963_, v_options_1964_, v_callback_1965_);
lean_dec(v_options_1964_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_emitKeypressEvents_spec__0(lean_object* v_x_1968_){
_start:
{
if (lean_obj_tag(v_x_1968_) == 0)
{
lean_object* v___x_1969_; 
v___x_1969_ = lean_box(0);
return v___x_1969_;
}
else
{
lean_object* v_val_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
v_val_1970_ = lean_ctor_get(v_x_1968_, 0);
v___x_1971_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
lean_inc(v_val_1970_);
v___x_1972_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1972_, 0, v_val_1970_);
lean_ctor_set(v___x_1972_, 1, v___x_1971_);
return v___x_1972_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_emitKeypressEvents_spec__0___boxed(lean_object* v_x_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_emitKeypressEvents_spec__0(v_x_1973_);
lean_dec(v_x_1973_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_emitKeypressEvents(lean_object* v_stream___1983_, lean_object* v_interface_1984_){
_start:
{
uint8_t v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1986_ = 0;
v___x_1987_ = lean_unsigned_to_nat(2u);
v___x_1988_ = ((lean_object*)(l_Lasm_JS_Node_readline_emitKeypressEvents___closed__2));
v___x_1989_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_1990_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1990_, 0, v_stream___1983_);
lean_ctor_set(v___x_1990_, 1, v___x_1989_);
v___x_1991_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_emitKeypressEvents_spec__0(v_interface_1984_);
v___x_1992_ = lean_mk_empty_array_with_capacity(v___x_1987_);
v___x_1993_ = lean_array_push(v___x_1992_, v___x_1990_);
v___x_1994_ = lean_array_push(v___x_1993_, v___x_1991_);
v___x_1995_ = l_Lasm_JS_Web_Support_args(v___x_1994_);
v___x_1996_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1988_, v___x_1995_, v___x_1986_);
return v___x_1996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_emitKeypressEvents___boxed(lean_object* v_stream___1997_, lean_object* v_interface_1998_, lean_object* v_a_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l_Lasm_JS_Node_readline_emitKeypressEvents(v_stream___1997_, v_interface_1998_);
lean_dec(v_interface_1998_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_clearLine(lean_object* v_stream___2008_, double v_dir_2009_){
_start:
{
uint8_t v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2011_ = 0;
v___x_2012_ = lean_unsigned_to_nat(2u);
v___x_2013_ = ((lean_object*)(l_Lasm_JS_Node_readline_clearLine___closed__1));
v___x_2014_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_2015_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2015_, 0, v_stream___2008_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2016_, 0, v_dir_2009_);
v___x_2017_ = lean_mk_empty_array_with_capacity(v___x_2012_);
v___x_2018_ = lean_array_push(v___x_2017_, v___x_2015_);
v___x_2019_ = lean_array_push(v___x_2018_, v___x_2016_);
v___x_2020_ = l_Lasm_JS_Web_Support_args(v___x_2019_);
v___x_2021_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_stream_isErrored_spec__0(v___x_2013_, v___x_2020_, v___x_2011_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_clearLine___boxed(lean_object* v_stream___2022_, lean_object* v_dir_2023_, lean_object* v_a_2024_){
_start:
{
double v_dir_boxed_2025_; lean_object* v_res_2026_; 
v_dir_boxed_2025_ = lean_unbox_float(v_dir_2023_);
lean_dec_ref(v_dir_2023_);
v_res_2026_ = l_Lasm_JS_Node_readline_clearLine(v_stream___2022_, v_dir_boxed_2025_);
return v_res_2026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_clearScreenDown(lean_object* v_stream___2034_){
_start:
{
uint8_t v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2036_ = 0;
v___x_2037_ = lean_unsigned_to_nat(1u);
v___x_2038_ = ((lean_object*)(l_Lasm_JS_Node_readline_clearScreenDown___closed__1));
v___x_2039_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_2040_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2040_, 0, v_stream___2034_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
v___x_2041_ = lean_mk_empty_array_with_capacity(v___x_2037_);
v___x_2042_ = lean_array_push(v___x_2041_, v___x_2040_);
v___x_2043_ = l_Lasm_JS_Web_Support_args(v___x_2042_);
v___x_2044_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_stream_isErrored_spec__0(v___x_2038_, v___x_2043_, v___x_2036_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_clearScreenDown___boxed(lean_object* v_stream___2045_, lean_object* v_a_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l_Lasm_JS_Node_readline_clearScreenDown(v_stream___2045_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_createInterface_spec__0(lean_object* v_x_2048_){
_start:
{
if (lean_obj_tag(v_x_2048_) == 0)
{
lean_object* v___x_2049_; 
v___x_2049_ = lean_box(0);
return v___x_2049_;
}
else
{
lean_object* v_val_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
v_val_2050_ = lean_ctor_get(v_x_2048_, 0);
v___x_2051_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
lean_inc(v_val_2050_);
v___x_2052_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2052_, 0, v_val_2050_);
lean_ctor_set(v___x_2052_, 1, v___x_2051_);
return v___x_2052_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_createInterface_spec__0___boxed(lean_object* v_x_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_createInterface_spec__0(v_x_2053_);
lean_dec(v_x_2053_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_createInterface(lean_object* v_options_2063_){
_start:
{
lean_object* v_input_2065_; lean_object* v_output_2066_; lean_object* v_completer_2067_; lean_object* v_terminal_2068_; lean_object* v_history_2069_; lean_object* v_historySize_2070_; lean_object* v_removeHistoryDuplicates_2071_; lean_object* v_prompt_2072_; lean_object* v_crlfDelay_2073_; lean_object* v_escapeCodeTimeout_2074_; lean_object* v_tabSize_2075_; lean_object* v_signal_2076_; uint8_t v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v_input_2065_ = lean_ctor_get(v_options_2063_, 0);
lean_inc(v_input_2065_);
v_output_2066_ = lean_ctor_get(v_options_2063_, 1);
lean_inc(v_output_2066_);
v_completer_2067_ = lean_ctor_get(v_options_2063_, 2);
lean_inc(v_completer_2067_);
v_terminal_2068_ = lean_ctor_get(v_options_2063_, 3);
lean_inc(v_terminal_2068_);
v_history_2069_ = lean_ctor_get(v_options_2063_, 4);
lean_inc(v_history_2069_);
v_historySize_2070_ = lean_ctor_get(v_options_2063_, 5);
lean_inc(v_historySize_2070_);
v_removeHistoryDuplicates_2071_ = lean_ctor_get(v_options_2063_, 6);
lean_inc(v_removeHistoryDuplicates_2071_);
v_prompt_2072_ = lean_ctor_get(v_options_2063_, 7);
lean_inc(v_prompt_2072_);
v_crlfDelay_2073_ = lean_ctor_get(v_options_2063_, 8);
lean_inc(v_crlfDelay_2073_);
v_escapeCodeTimeout_2074_ = lean_ctor_get(v_options_2063_, 9);
lean_inc(v_escapeCodeTimeout_2074_);
v_tabSize_2075_ = lean_ctor_get(v_options_2063_, 10);
lean_inc(v_tabSize_2075_);
v_signal_2076_ = lean_ctor_get(v_options_2063_, 11);
lean_inc(v_signal_2076_);
lean_dec_ref(v_options_2063_);
v___x_2077_ = 0;
v___x_2078_ = lean_unsigned_to_nat(1u);
v___x_2079_ = ((lean_object*)(l_Lasm_JS_Node_readline_createInterface___closed__2));
v___x_2080_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__0));
v___x_2081_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_createInterface_spec__0(v_input_2065_);
lean_dec(v_input_2065_);
v___x_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2080_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2083_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__1));
v___x_2084_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_stream_Readable_unpipe_spec__0(v_output_2066_);
lean_dec(v_output_2066_);
v___x_2085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2083_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
v___x_2086_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__2));
v___x_2087_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_completer_2067_);
lean_dec(v_completer_2067_);
v___x_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2086_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__3));
v___x_2090_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_terminal_2068_);
lean_dec(v_terminal_2068_);
v___x_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2089_);
lean_ctor_set(v___x_2091_, 1, v___x_2090_);
v___x_2092_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__4));
v___x_2093_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_history_2069_);
v___x_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2092_);
lean_ctor_set(v___x_2094_, 1, v___x_2093_);
v___x_2095_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__5));
v___x_2096_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_historySize_2070_);
lean_dec(v_historySize_2070_);
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2095_);
lean_ctor_set(v___x_2097_, 1, v___x_2096_);
v___x_2098_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__6));
v___x_2099_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_removeHistoryDuplicates_2071_);
lean_dec(v_removeHistoryDuplicates_2071_);
v___x_2100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2098_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
v___x_2101_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__7));
v___x_2102_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prompt_2072_);
v___x_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2101_);
lean_ctor_set(v___x_2103_, 1, v___x_2102_);
v___x_2104_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__8));
v___x_2105_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_crlfDelay_2073_);
lean_dec(v_crlfDelay_2073_);
v___x_2106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2104_);
lean_ctor_set(v___x_2106_, 1, v___x_2105_);
v___x_2107_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__9));
v___x_2108_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_escapeCodeTimeout_2074_);
lean_dec(v_escapeCodeTimeout_2074_);
v___x_2109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2107_);
lean_ctor_set(v___x_2109_, 1, v___x_2108_);
v___x_2110_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__10));
v___x_2111_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__1(v_tabSize_2075_);
v___x_2112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2110_);
lean_ctor_set(v___x_2112_, 1, v___x_2111_);
v___x_2113_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0));
v___x_2114_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2076_);
lean_dec(v_signal_2076_);
v___x_2115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2113_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v___x_2116_ = lean_unsigned_to_nat(12u);
v___x_2117_ = lean_mk_empty_array_with_capacity(v___x_2116_);
v___x_2118_ = lean_array_push(v___x_2117_, v___x_2082_);
v___x_2119_ = lean_array_push(v___x_2118_, v___x_2085_);
v___x_2120_ = lean_array_push(v___x_2119_, v___x_2088_);
v___x_2121_ = lean_array_push(v___x_2120_, v___x_2091_);
v___x_2122_ = lean_array_push(v___x_2121_, v___x_2094_);
v___x_2123_ = lean_array_push(v___x_2122_, v___x_2097_);
v___x_2124_ = lean_array_push(v___x_2123_, v___x_2100_);
v___x_2125_ = lean_array_push(v___x_2124_, v___x_2103_);
v___x_2126_ = lean_array_push(v___x_2125_, v___x_2106_);
v___x_2127_ = lean_array_push(v___x_2126_, v___x_2109_);
v___x_2128_ = lean_array_push(v___x_2127_, v___x_2112_);
v___x_2129_ = lean_array_push(v___x_2128_, v___x_2115_);
v___x_2130_ = l_Lasm_JS_Web_Support_fields(v___x_2129_);
lean_dec_ref(v___x_2129_);
v___x_2131_ = lean_mk_empty_array_with_capacity(v___x_2078_);
v___x_2132_ = lean_array_push(v___x_2131_, v___x_2130_);
v___x_2133_ = l_Lasm_JS_Web_Support_args(v___x_2132_);
v___x_2134_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2079_, v___x_2133_, v___x_2077_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2142_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2137_ = v___x_2134_;
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2134_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2140_; 
if (v_isShared_2138_ == 0)
{
v___x_2140_ = v___x_2137_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_a_2135_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
v_a_2143_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2145_ = v___x_2134_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v___x_2134_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_createInterface___boxed(lean_object* v_options_2151_, lean_object* v_a_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l_Lasm_JS_Node_readline_createInterface(v_options_2151_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_cursorTo(lean_object* v_stream___2161_, double v_x_2162_, lean_object* v_y_2163_){
_start:
{
uint8_t v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2165_ = 0;
v___x_2166_ = lean_unsigned_to_nat(3u);
v___x_2167_ = ((lean_object*)(l_Lasm_JS_Node_readline_cursorTo___closed__1));
v___x_2168_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_2169_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2169_, 0, v_stream___2161_);
lean_ctor_set(v___x_2169_, 1, v___x_2168_);
v___x_2170_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2170_, 0, v_x_2162_);
v___x_2171_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_y_2163_);
v___x_2172_ = lean_mk_empty_array_with_capacity(v___x_2166_);
v___x_2173_ = lean_array_push(v___x_2172_, v___x_2169_);
v___x_2174_ = lean_array_push(v___x_2173_, v___x_2170_);
v___x_2175_ = lean_array_push(v___x_2174_, v___x_2171_);
v___x_2176_ = l_Lasm_JS_Web_Support_args(v___x_2175_);
v___x_2177_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_stream_isErrored_spec__0(v___x_2167_, v___x_2176_, v___x_2165_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_cursorTo___boxed(lean_object* v_stream___2178_, lean_object* v_x_2179_, lean_object* v_y_2180_, lean_object* v_a_2181_){
_start:
{
double v_x_boxed_2182_; lean_object* v_res_2183_; 
v_x_boxed_2182_ = lean_unbox_float(v_x_2179_);
lean_dec_ref(v_x_2179_);
v_res_2183_ = l_Lasm_JS_Node_readline_cursorTo(v_stream___2178_, v_x_boxed_2182_, v_y_2180_);
lean_dec(v_y_2180_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_moveCursor(lean_object* v_stream___2191_, double v_dx_2192_, double v_dy_2193_){
_start:
{
uint8_t v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2195_ = 0;
v___x_2196_ = lean_unsigned_to_nat(3u);
v___x_2197_ = ((lean_object*)(l_Lasm_JS_Node_readline_moveCursor___closed__1));
v___x_2198_ = ((lean_object*)(l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0___closed__0));
v___x_2199_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2199_, 0, v_stream___2191_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2200_, 0, v_dx_2192_);
v___x_2201_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2201_, 0, v_dy_2193_);
v___x_2202_ = lean_mk_empty_array_with_capacity(v___x_2196_);
v___x_2203_ = lean_array_push(v___x_2202_, v___x_2199_);
v___x_2204_ = lean_array_push(v___x_2203_, v___x_2200_);
v___x_2205_ = lean_array_push(v___x_2204_, v___x_2201_);
v___x_2206_ = l_Lasm_JS_Web_Support_args(v___x_2205_);
v___x_2207_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_stream_isErrored_spec__0(v___x_2197_, v___x_2206_, v___x_2195_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readline_moveCursor___boxed(lean_object* v_stream___2208_, lean_object* v_dx_2209_, lean_object* v_dy_2210_, lean_object* v_a_2211_){
_start:
{
double v_dx_boxed_2212_; double v_dy_boxed_2213_; lean_object* v_res_2214_; 
v_dx_boxed_2212_ = lean_unbox_float(v_dx_2209_);
lean_dec_ref(v_dx_2209_);
v_dy_boxed_2213_ = lean_unbox_float(v_dy_2210_);
lean_dec_ref(v_dy_2210_);
v_res_2214_ = l_Lasm_JS_Node_readline_moveCursor(v_stream___2208_, v_dx_boxed_2212_, v_dy_boxed_2213_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_createInterface(lean_object* v_options_2222_){
_start:
{
lean_object* v_input_2224_; lean_object* v_output_2225_; lean_object* v_completer_2226_; lean_object* v_terminal_2227_; lean_object* v_history_2228_; lean_object* v_historySize_2229_; lean_object* v_removeHistoryDuplicates_2230_; lean_object* v_prompt_2231_; lean_object* v_crlfDelay_2232_; lean_object* v_escapeCodeTimeout_2233_; lean_object* v_tabSize_2234_; lean_object* v_signal_2235_; uint8_t v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v_input_2224_ = lean_ctor_get(v_options_2222_, 0);
lean_inc(v_input_2224_);
v_output_2225_ = lean_ctor_get(v_options_2222_, 1);
lean_inc(v_output_2225_);
v_completer_2226_ = lean_ctor_get(v_options_2222_, 2);
lean_inc(v_completer_2226_);
v_terminal_2227_ = lean_ctor_get(v_options_2222_, 3);
lean_inc(v_terminal_2227_);
v_history_2228_ = lean_ctor_get(v_options_2222_, 4);
lean_inc(v_history_2228_);
v_historySize_2229_ = lean_ctor_get(v_options_2222_, 5);
lean_inc(v_historySize_2229_);
v_removeHistoryDuplicates_2230_ = lean_ctor_get(v_options_2222_, 6);
lean_inc(v_removeHistoryDuplicates_2230_);
v_prompt_2231_ = lean_ctor_get(v_options_2222_, 7);
lean_inc(v_prompt_2231_);
v_crlfDelay_2232_ = lean_ctor_get(v_options_2222_, 8);
lean_inc(v_crlfDelay_2232_);
v_escapeCodeTimeout_2233_ = lean_ctor_get(v_options_2222_, 9);
lean_inc(v_escapeCodeTimeout_2233_);
v_tabSize_2234_ = lean_ctor_get(v_options_2222_, 10);
lean_inc(v_tabSize_2234_);
v_signal_2235_ = lean_ctor_get(v_options_2222_, 11);
lean_inc(v_signal_2235_);
lean_dec_ref(v_options_2222_);
v___x_2236_ = 0;
v___x_2237_ = lean_unsigned_to_nat(1u);
v___x_2238_ = ((lean_object*)(l_Lasm_JS_Node_readlinePromises_createInterface___closed__1));
v___x_2239_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__0));
v___x_2240_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_readline_createInterface_spec__0(v_input_2224_);
lean_dec(v_input_2224_);
v___x_2241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2239_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
v___x_2242_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__1));
v___x_2243_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_stream_Readable_unpipe_spec__0(v_output_2225_);
lean_dec(v_output_2225_);
v___x_2244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2242_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__2));
v___x_2246_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_completer_2226_);
lean_dec(v_completer_2226_);
v___x_2247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2245_);
lean_ctor_set(v___x_2247_, 1, v___x_2246_);
v___x_2248_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__3));
v___x_2249_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_terminal_2227_);
lean_dec(v_terminal_2227_);
v___x_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2248_);
lean_ctor_set(v___x_2250_, 1, v___x_2249_);
v___x_2251_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__4));
v___x_2252_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_history_2228_);
v___x_2253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2251_);
lean_ctor_set(v___x_2253_, 1, v___x_2252_);
v___x_2254_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__5));
v___x_2255_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_historySize_2229_);
lean_dec(v_historySize_2229_);
v___x_2256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2254_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
v___x_2257_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__6));
v___x_2258_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_removeHistoryDuplicates_2230_);
lean_dec(v_removeHistoryDuplicates_2230_);
v___x_2259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2257_);
lean_ctor_set(v___x_2259_, 1, v___x_2258_);
v___x_2260_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__7));
v___x_2261_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prompt_2231_);
v___x_2262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2260_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__8));
v___x_2264_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_crlfDelay_2232_);
lean_dec(v_crlfDelay_2232_);
v___x_2265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2263_);
lean_ctor_set(v___x_2265_, 1, v___x_2264_);
v___x_2266_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__9));
v___x_2267_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_escapeCodeTimeout_2233_);
lean_dec(v_escapeCodeTimeout_2233_);
v___x_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2266_);
lean_ctor_set(v___x_2268_, 1, v___x_2267_);
v___x_2269_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0___closed__10));
v___x_2270_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__1(v_tabSize_2234_);
v___x_2271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2269_);
lean_ctor_set(v___x_2271_, 1, v___x_2270_);
v___x_2272_ = ((lean_object*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0___closed__0));
v___x_2273_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2235_);
lean_dec(v_signal_2235_);
v___x_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2272_);
lean_ctor_set(v___x_2274_, 1, v___x_2273_);
v___x_2275_ = lean_unsigned_to_nat(12u);
v___x_2276_ = lean_mk_empty_array_with_capacity(v___x_2275_);
v___x_2277_ = lean_array_push(v___x_2276_, v___x_2241_);
v___x_2278_ = lean_array_push(v___x_2277_, v___x_2244_);
v___x_2279_ = lean_array_push(v___x_2278_, v___x_2247_);
v___x_2280_ = lean_array_push(v___x_2279_, v___x_2250_);
v___x_2281_ = lean_array_push(v___x_2280_, v___x_2253_);
v___x_2282_ = lean_array_push(v___x_2281_, v___x_2256_);
v___x_2283_ = lean_array_push(v___x_2282_, v___x_2259_);
v___x_2284_ = lean_array_push(v___x_2283_, v___x_2262_);
v___x_2285_ = lean_array_push(v___x_2284_, v___x_2265_);
v___x_2286_ = lean_array_push(v___x_2285_, v___x_2268_);
v___x_2287_ = lean_array_push(v___x_2286_, v___x_2271_);
v___x_2288_ = lean_array_push(v___x_2287_, v___x_2274_);
v___x_2289_ = l_Lasm_JS_Web_Support_fields(v___x_2288_);
lean_dec_ref(v___x_2288_);
v___x_2290_ = lean_mk_empty_array_with_capacity(v___x_2237_);
v___x_2291_ = lean_array_push(v___x_2290_, v___x_2289_);
v___x_2292_ = l_Lasm_JS_Web_Support_args(v___x_2291_);
v___x_2293_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2238_, v___x_2292_, v___x_2236_);
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2293_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2293_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
v_a_2302_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2293_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2293_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_readlinePromises_createInterface___boxed(lean_object* v_options_2310_, lean_object* v_a_2311_){
_start:
{
lean_object* v_res_2312_; 
v_res_2312_ = l_Lasm_JS_Node_readlinePromises_createInterface(v_options_2310_);
return v_res_2312_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Events(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Stream(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Readline(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Events(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions = _init_l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions);
l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions = _init_l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
