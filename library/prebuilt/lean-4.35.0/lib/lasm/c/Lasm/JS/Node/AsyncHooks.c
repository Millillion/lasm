// Lean compiler output
// Module: Lasm.JS.Node.AsyncHooks
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Streams
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
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSReadableStream___lam__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
static const lean_string_object l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAsyncResource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSAsyncResource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSAsyncResource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSAsyncResource___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsyncResource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSAsyncResource = (const lean_object*)&l_Lasm_JS_Node_instToJSAsyncResource___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSAsyncResource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncResource___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSAsyncResource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.AsyncResource"};
static const lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncResource___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSAsyncResource___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSAsyncResource___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSAsyncResource___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncResource___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSAsyncResource = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncResource___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSAsyncHook = (const lean_object*)&l_Lasm_JS_Node_instToJSAsyncResource___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSAsyncHook___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Node.AsyncHook"};
static const lean_object* l_Lasm_JS_Node_instFromJSAsyncHook___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncHook___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSAsyncHook___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSAsyncResource___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSAsyncHook___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSAsyncHook___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncHook___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSAsyncHook = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncHook___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSAsyncLocalStorage = (const lean_object*)&l_Lasm_JS_Node_instToJSAsyncResource___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSAsyncLocalStorage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.AsyncLocalStorage"};
static const lean_object* l_Lasm_JS_Node_instFromJSAsyncLocalStorage___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncLocalStorage___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSAsyncLocalStorage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSAsyncResource___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSAsyncLocalStorage___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSAsyncLocalStorage___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncLocalStorage___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSAsyncLocalStorage = (const lean_object*)&l_Lasm_JS_Node_instFromJSAsyncLocalStorage___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "init"};
static const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "before"};
static const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "after"};
static const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "destroy"};
static const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "promiseResolve"};
static const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "trackPromises"};
static const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__1_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "node:async_hooks"};
static const lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "AsyncResource"};
static const lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_AsyncResource_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncResource_bind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Node.AsyncResource.bind"};
static const lean_object* l_Lasm_JS_Node_AsyncResource_bind___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncResource_bind___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_AsyncResource_bind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "AsyncResource.bind"};
static const lean_object* l_Lasm_JS_Node_AsyncResource_bind___closed__1 = (const lean_object*)&l_Lasm_JS_Node_AsyncResource_bind___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_AsyncResource_bind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_AsyncResource_bind___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncResource_bind___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_AsyncResource_bind___closed__2 = (const lean_object*)&l_Lasm_JS_Node_AsyncResource_bind___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_bind(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "AsyncHook"};
static const lean_object* l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_AsyncResource_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncHook_asyncWrapProviders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "asyncWrapProviders"};
static const lean_object* l_Lasm_JS_Node_AsyncHook_asyncWrapProviders___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncHook_asyncWrapProviders___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_asyncWrapProviders(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_asyncWrapProviders___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "executionAsyncResource"};
static const lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__0_value;
static const lean_array_object l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__1 = (const lean_object*)&l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncResource(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncResource___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncHook_executionAsyncId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "executionAsyncId"};
static const lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncId___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncHook_executionAsyncId___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncId(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncId___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncHook_triggerAsyncId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "triggerAsyncId"};
static const lean_object* l_Lasm_JS_Node_AsyncHook_triggerAsyncId___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncHook_triggerAsyncId___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_triggerAsyncId(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_triggerAsyncId___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "AsyncLocalStorage"};
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_AsyncResource_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncLocalStorage_name___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_name___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_name___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_name(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_name___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncLocalStorage_bind_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncLocalStorage_bind_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Node.AsyncLocalStorage.bind"};
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "AsyncLocalStorage.bind"};
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__1 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__2 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_bind(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_bind___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Node.AsyncLocalStorage.snapshot"};
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__0 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "AsyncLocalStorage.snapshot"};
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__1 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__2 = (const lean_object*)&l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_snapshot();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_snapshot___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_async__hooks_createHook___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Node.async_hooks.createHook"};
static const lean_object* l_Lasm_JS_Node_async__hooks_createHook___closed__0 = (const lean_object*)&l_Lasm_JS_Node_async__hooks_createHook___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_async__hooks_createHook___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "createHook"};
static const lean_object* l_Lasm_JS_Node_async__hooks_createHook___closed__1 = (const lean_object*)&l_Lasm_JS_Node_async__hooks_createHook___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_async__hooks_createHook___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_async__hooks_createHook___closed__0_value),((lean_object*)&l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_async__hooks_createHook___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_async__hooks_createHook___closed__2 = (const lean_object*)&l_Lasm_JS_Node_async__hooks_createHook___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_async__hooks_createHook(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_async__hooks_createHook___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAsyncResource___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Node_instFromJSAsyncResource___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0(lean_object* v___f_42_, lean_object* v___f_43_, lean_object* v_d_44_){
_start:
{
lean_object* v_init_45_; lean_object* v_before_46_; lean_object* v_after_47_; lean_object* v_destroy_48_; lean_object* v_promiseResolve_49_; lean_object* v_trackPromises_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v_init_45_ = lean_ctor_get(v_d_44_, 0);
lean_inc(v_init_45_);
v_before_46_ = lean_ctor_get(v_d_44_, 1);
lean_inc(v_before_46_);
v_after_47_ = lean_ctor_get(v_d_44_, 2);
lean_inc(v_after_47_);
v_destroy_48_ = lean_ctor_get(v_d_44_, 3);
lean_inc(v_destroy_48_);
v_promiseResolve_49_ = lean_ctor_get(v_d_44_, 4);
lean_inc(v_promiseResolve_49_);
v_trackPromises_50_ = lean_ctor_get(v_d_44_, 5);
lean_inc(v_trackPromises_50_);
lean_dec_ref(v_d_44_);
v___x_51_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_42_, 4);
v___x_52_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_42_, v_init_45_);
v___x_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_51_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__1));
v___x_55_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_42_, v_before_46_);
v___x_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_54_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__2));
v___x_58_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_42_, v_after_47_);
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__3));
v___x_61_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_42_, v_destroy_48_);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__4));
v___x_64_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_42_, v_promiseResolve_49_);
v___x_65_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__5));
v___x_67_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_43_, v_trackPromises_50_);
v___x_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_unsigned_to_nat(6u);
v___x_70_ = lean_mk_empty_array_with_capacity(v___x_69_);
v___x_71_ = lean_array_push(v___x_70_, v___x_53_);
v___x_72_ = lean_array_push(v___x_71_, v___x_56_);
v___x_73_ = lean_array_push(v___x_72_, v___x_59_);
v___x_74_ = lean_array_push(v___x_73_, v___x_62_);
v___x_75_ = lean_array_push(v___x_74_, v___x_65_);
v___x_76_ = lean_array_push(v___x_75_, v___x_68_);
v___x_77_ = l_Lasm_JS_Web_Support_fields(v___x_76_);
lean_dec_ref(v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1(lean_object* v_module_85_, lean_object* v_o_86_, lean_object* v_a_87_){
_start:
{
if (lean_obj_tag(v_a_87_) == 0)
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
lean_dec(v_o_86_);
v___x_89_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1___closed__0));
v___x_90_ = lean_string_append(v___x_89_, v_module_85_);
v___x_91_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
v___x_92_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
else
{
lean_object* v_tail_93_; 
v_tail_93_ = lean_ctor_get(v_a_87_, 1);
if (lean_obj_tag(v_tail_93_) == 0)
{
lean_object* v_head_94_; lean_object* v___x_95_; 
v_head_94_ = lean_ctor_get(v_a_87_, 0);
lean_inc(v_head_94_);
lean_dec_ref_known(v_a_87_, 2);
v___x_95_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_86_, v_head_94_);
return v___x_95_;
}
else
{
lean_object* v_head_96_; lean_object* v___x_97_; 
lean_inc(v_tail_93_);
v_head_96_ = lean_ctor_get(v_a_87_, 0);
lean_inc(v_head_96_);
lean_dec_ref_known(v_a_87_, 2);
v___x_97_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_86_, v_head_96_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; 
v_a_98_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_a_98_);
lean_dec_ref_known(v___x_97_, 1);
v_o_86_ = v_a_98_;
v_a_87_ = v_tail_93_;
goto _start;
}
else
{
lean_dec(v_tail_93_);
return v___x_97_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1___boxed(lean_object* v_module_100_, lean_object* v_o_101_, lean_object* v_a_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1(v_module_100_, v_o_101_, v_a_102_);
lean_dec_ref(v_module_100_);
return v_res_104_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_105_; uint64_t v___x_106_; 
v___x_105_ = 1;
v___x_106_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0(lean_object* v_specifier_108_){
_start:
{
uint32_t v___x_110_; uint32_t v___x_111_; uint64_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_110_ = 201;
v___x_111_ = 0;
v___x_112_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__0);
v___x_113_ = lean_string_to_utf8(v_specifier_108_);
v___x_114_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_110_, v___x_111_, v___x_112_, v___x_113_);
lean_dec_ref(v___x_113_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v_a_115_ = lean_ctor_get(v___x_114_, 0);
lean_inc(v_a_115_);
lean_dec_ref_known(v___x_114_, 1);
v___x_116_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___closed__1));
v___x_117_ = l_String_quote(v_specifier_108_);
v___x_118_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
v___x_119_ = lean_unsigned_to_nat(120u);
v___x_120_ = lean_unsigned_to_nat(0u);
v___x_121_ = l_Std_Format_pretty(v___x_118_, v___x_119_, v___x_120_, v___x_120_);
v___x_122_ = lean_string_append(v___x_116_, v___x_121_);
lean_dec_ref(v___x_121_);
v___x_123_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_122_, v_a_115_);
lean_dec(v_a_115_);
lean_dec_ref(v___x_122_);
return v___x_123_;
}
else
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
lean_dec_ref(v_specifier_108_);
v_a_124_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_114_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_114_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_a_124_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0___boxed(lean_object* v_specifier_132_, lean_object* v_a_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0(v_specifier_132_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0(lean_object* v_module_135_, lean_object* v_path_136_){
_start:
{
lean_object* v___x_138_; 
lean_inc_ref(v_module_135_);
v___x_138_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0(v_module_135_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v___x_140_; 
v_a_139_ = lean_ctor_get(v___x_138_, 0);
lean_inc(v_a_139_);
lean_dec_ref_known(v___x_138_, 1);
v___x_140_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__1(v_module_135_, v_a_139_, v_path_136_);
lean_dec_ref(v_module_135_);
return v___x_140_;
}
else
{
lean_dec(v_path_136_);
lean_dec_ref(v_module_135_);
return v___x_138_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0___boxed(lean_object* v_module_141_, lean_object* v_path_142_, lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0(v_module_141_, v_path_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___lam__0(lean_object* v___x_145_, lean_object* v___x_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0(v___x_145_, v___x_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___lam__0___boxed(lean_object* v___x_149_, lean_object* v___x_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lasm_JS_Node_AsyncResource_cast_x3f___lam__0(v___x_149_, v___x_150_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f(lean_object* v_v_161_){
_start:
{
lean_object* v___f_163_; lean_object* v___x_164_; 
v___f_163_ = ((lean_object*)(l_Lasm_JS_Node_AsyncResource_cast_x3f___closed__3));
lean_inc(v_v_161_);
v___x_164_ = l_Lasm_JS_Web_Support_isInstance(v___f_163_, v_v_161_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_178_; 
v_a_165_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_178_ == 0)
{
v___x_167_ = v___x_164_;
v_isShared_168_ = v_isSharedCheck_178_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_164_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_178_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
uint8_t v___x_169_; 
v___x_169_ = lean_unbox(v_a_165_);
lean_dec(v_a_165_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; lean_object* v___x_172_; 
lean_dec(v_v_161_);
v___x_170_ = lean_box(0);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_170_);
v___x_172_ = v___x_167_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_170_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
else
{
lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_174_, 0, v_v_161_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_174_);
v___x_176_ = v___x_167_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
lean_dec(v_v_161_);
v_a_179_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_164_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_164_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_cast_x3f___boxed(lean_object* v_v_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lasm_JS_Node_AsyncResource_cast_x3f(v_v_187_);
return v_res_189_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2(void){
_start:
{
uint8_t v___x_192_; uint64_t v___x_193_; 
v___x_192_ = 0;
v___x_193_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(lean_object* v_b_194_, lean_object* v_args_195_, uint8_t v_await_196_){
_start:
{
uint64_t v___y_199_; uint64_t v___y_200_; uint64_t v___x_241_; uint64_t v___y_243_; 
v___x_241_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2);
if (v_await_196_ == 0)
{
uint64_t v___x_248_; 
v___x_248_ = 0ULL;
v___y_243_ = v___x_248_;
goto v___jp_242_;
}
else
{
uint64_t v___x_249_; 
v___x_249_ = 2ULL;
v___y_243_ = v___x_249_;
goto v___jp_242_;
}
v___jp_198_:
{
uint64_t v_flags_201_; uint32_t v___x_202_; lean_object* v___x_203_; uint32_t v___x_204_; lean_object* v___x_205_; 
v_flags_201_ = lean_uint64_lor(v___y_199_, v___y_200_);
v___x_202_ = 214;
v___x_203_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_194_, v_args_195_);
v___x_204_ = 0;
v___x_205_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_202_, v_flags_201_, v___x_203_, v___x_204_);
lean_dec(v___x_203_);
if (lean_obj_tag(v___x_205_) == 0)
{
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_207_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
lean_inc(v_a_206_);
lean_dec_ref_known(v___x_205_, 1);
v___x_207_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_206_);
lean_dec(v_a_206_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v___x_208_; 
lean_dec_ref_known(v___x_207_, 1);
v___x_208_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_208_;
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_216_; 
v_a_209_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_216_ == 0)
{
v___x_211_ = v___x_207_;
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_207_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_214_; 
if (v_isShared_212_ == 0)
{
v___x_214_ = v___x_211_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_a_209_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
else
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
v_a_217_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_205_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_205_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set_tag(v___x_219_, 1);
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_240_; 
v_a_225_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_240_ == 0)
{
v___x_227_ = v___x_205_;
v_isShared_228_ = v_isSharedCheck_240_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_205_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_240_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_229_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__0));
v___x_230_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_194_);
v___x_231_ = lean_string_append(v___x_229_, v___x_230_);
lean_dec_ref(v___x_230_);
v___x_232_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__1));
v___x_233_ = lean_string_append(v___x_231_, v___x_232_);
v___x_234_ = lean_io_error_to_string(v_a_225_);
v___x_235_ = lean_string_append(v___x_233_, v___x_234_);
lean_dec_ref(v___x_234_);
v___x_236_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 0, v___x_236_);
v___x_238_ = v___x_227_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
v___jp_242_:
{
uint8_t v_construct_244_; uint64_t v___x_245_; 
v_construct_244_ = lean_ctor_get_uint8(v_b_194_, sizeof(void*)*4);
v___x_245_ = lean_uint64_lor(v___x_241_, v___y_243_);
if (v_construct_244_ == 0)
{
uint64_t v___x_246_; 
v___x_246_ = 0ULL;
v___y_199_ = v___x_245_;
v___y_200_ = v___x_246_;
goto v___jp_198_;
}
else
{
uint64_t v___x_247_; 
v___x_247_ = 4ULL;
v___y_199_ = v___x_245_;
v___y_200_ = v___x_247_;
goto v___jp_198_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___boxed(lean_object* v_b_250_, lean_object* v_args_251_, lean_object* v_await_252_, lean_object* v_a_253_){
_start:
{
uint8_t v_await_boxed_254_; lean_object* v_res_255_; 
v_await_boxed_254_ = lean_unbox(v_await_252_);
v_res_255_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v_b_250_, v_args_251_, v_await_boxed_254_);
lean_dec_ref(v_b_250_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_bind(lean_object* v_fn_264_, lean_object* v_type_265_, lean_object* v_thisArg_266_){
_start:
{
uint8_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_268_ = 0;
v___x_269_ = lean_unsigned_to_nat(3u);
v___x_270_ = ((lean_object*)(l_Lasm_JS_Node_AsyncResource_bind___closed__2));
v___x_271_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0));
v___x_272_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_272_, 0, v_fn_264_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_265_);
v___x_274_ = lean_mk_empty_array_with_capacity(v___x_269_);
v___x_275_ = lean_array_push(v___x_274_, v___x_272_);
v___x_276_ = lean_array_push(v___x_275_, v___x_273_);
v___x_277_ = lean_array_push(v___x_276_, v_thisArg_266_);
v___x_278_ = l_Lasm_JS_Web_Support_args(v___x_277_);
v___x_279_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_270_, v___x_278_, v___x_268_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncResource_bind___boxed(lean_object* v_fn_280_, lean_object* v_type_281_, lean_object* v_thisArg_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lasm_JS_Node_AsyncResource_bind(v_fn_280_, v_type_281_, v_thisArg_282_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_cast_x3f(lean_object* v_v_292_){
_start:
{
lean_object* v___f_294_; lean_object* v___x_295_; 
v___f_294_ = ((lean_object*)(l_Lasm_JS_Node_AsyncHook_cast_x3f___closed__2));
lean_inc(v_v_292_);
v___x_295_ = l_Lasm_JS_Web_Support_isInstance(v___f_294_, v_v_292_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_309_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_309_ == 0)
{
v___x_298_ = v___x_295_;
v_isShared_299_ = v_isSharedCheck_309_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_295_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_309_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
uint8_t v___x_300_; 
v___x_300_ = lean_unbox(v_a_296_);
lean_dec(v_a_296_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; lean_object* v___x_303_; 
lean_dec(v_v_292_);
v___x_301_ = lean_box(0);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 0, v___x_301_);
v___x_303_ = v___x_298_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
else
{
lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_305_, 0, v_v_292_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 0, v___x_305_);
v___x_307_ = v___x_298_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
else
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
lean_dec(v_v_292_);
v_a_310_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_295_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_295_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_cast_x3f___boxed(lean_object* v_v_318_, lean_object* v_a_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lasm_JS_Node_AsyncHook_cast_x3f(v_v_318_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_asyncWrapProviders(lean_object* v_self_322_){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = ((lean_object*)(l_Lasm_JS_Node_AsyncHook_asyncWrapProviders___closed__0));
v___x_325_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_322_, v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_asyncWrapProviders___boxed(lean_object* v_self_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lasm_JS_Node_AsyncHook_asyncWrapProviders(v_self_326_);
return v_res_328_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0_spec__0(uint8_t v_await_329_, uint64_t v_extra_330_){
_start:
{
uint64_t v___x_331_; uint64_t v___y_333_; 
v___x_331_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2);
if (v_await_329_ == 0)
{
uint64_t v___x_336_; 
v___x_336_ = 0ULL;
v___y_333_ = v___x_336_;
goto v___jp_332_;
}
else
{
uint64_t v___x_337_; 
v___x_337_ = 2ULL;
v___y_333_ = v___x_337_;
goto v___jp_332_;
}
v___jp_332_:
{
uint64_t v___x_334_; uint64_t v___x_335_; 
v___x_334_ = lean_uint64_lor(v___x_331_, v___y_333_);
v___x_335_ = lean_uint64_lor(v___x_334_, v_extra_330_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0_spec__0___boxed(lean_object* v_await_338_, lean_object* v_extra_339_){
_start:
{
uint8_t v_await_boxed_340_; uint64_t v_extra_boxed_341_; uint64_t v_res_342_; lean_object* v_r_343_; 
v_await_boxed_340_ = lean_unbox(v_await_338_);
v_extra_boxed_341_ = lean_unbox_uint64(v_extra_339_);
lean_dec_ref(v_extra_339_);
v_res_342_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0_spec__0(v_await_boxed_340_, v_extra_boxed_341_);
v_r_343_ = lean_box_uint64(v_res_342_);
return v_r_343_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0___closed__0(void){
_start:
{
uint64_t v___x_344_; uint8_t v___x_345_; uint64_t v___x_346_; 
v___x_344_ = 8ULL;
v___x_345_ = 0;
v___x_346_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0_spec__0(v___x_345_, v___x_344_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(lean_object* v_o_347_, lean_object* v_name_348_, lean_object* v_args_349_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint64_t v___x_354_; lean_object* v___x_355_; 
v___x_351_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0));
v___x_352_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_352_, 0, v_o_347_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_353_, 0, v_name_348_);
v___x_354_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0___closed__0);
v___x_355_ = l_Lasm_JS_Value_invokeRaw(v___x_352_, v___x_353_, v_args_349_, v___x_354_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_357_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc(v_a_356_);
lean_dec_ref_known(v___x_355_, 1);
v___x_357_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_356_);
lean_dec(v_a_356_);
return v___x_357_;
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_365_; 
v_a_358_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_365_ == 0)
{
v___x_360_ = v___x_355_;
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_355_);
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
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0___boxed(lean_object* v_o_366_, lean_object* v_name_367_, lean_object* v_args_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(v_o_366_, v_name_367_, v_args_368_);
return v_res_370_;
}
}
static lean_object* _init_l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = ((lean_object*)(l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__1));
v___x_375_ = l_Lasm_JS_Web_Support_args(v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncResource(lean_object* v_self_376_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = ((lean_object*)(l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__0));
v___x_379_ = lean_obj_once(&l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2, &l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2_once, _init_l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2);
v___x_380_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(v_self_376_, v___x_378_, v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncResource___boxed(lean_object* v_self_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lasm_JS_Node_AsyncHook_executionAsyncResource(v_self_381_);
return v_res_383_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0_spec__0(uint8_t v_await_384_, uint64_t v_extra_385_){
_start:
{
uint64_t v___x_386_; uint64_t v___y_388_; 
v___x_386_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2);
if (v_await_384_ == 0)
{
uint64_t v___x_391_; 
v___x_391_ = 0ULL;
v___y_388_ = v___x_391_;
goto v___jp_387_;
}
else
{
uint64_t v___x_392_; 
v___x_392_ = 2ULL;
v___y_388_ = v___x_392_;
goto v___jp_387_;
}
v___jp_387_:
{
uint64_t v___x_389_; uint64_t v___x_390_; 
v___x_389_ = lean_uint64_lor(v___x_386_, v___y_388_);
v___x_390_ = lean_uint64_lor(v___x_389_, v_extra_385_);
return v___x_390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0_spec__0___boxed(lean_object* v_await_393_, lean_object* v_extra_394_){
_start:
{
uint8_t v_await_boxed_395_; uint64_t v_extra_boxed_396_; uint64_t v_res_397_; lean_object* v_r_398_; 
v_await_boxed_395_ = lean_unbox(v_await_393_);
v_extra_boxed_396_ = lean_unbox_uint64(v_extra_394_);
lean_dec_ref(v_extra_394_);
v_res_397_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0_spec__0(v_await_boxed_395_, v_extra_boxed_396_);
v_r_398_ = lean_box_uint64(v_res_397_);
return v_r_398_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__0(void){
_start:
{
uint64_t v___x_399_; uint8_t v___x_400_; uint64_t v___x_401_; 
v___x_399_ = 8ULL;
v___x_400_ = 0;
v___x_401_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0_spec__0(v___x_400_, v___x_399_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0(lean_object* v_o_403_, lean_object* v_name_404_, lean_object* v_args_405_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; uint64_t v___x_410_; lean_object* v___x_411_; 
v___x_407_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0));
v___x_408_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_408_, 0, v_o_403_);
lean_ctor_set(v___x_408_, 1, v___x_407_);
lean_inc_ref(v_name_404_);
v___x_409_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_409_, 0, v_name_404_);
v___x_410_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__0);
v___x_411_ = l_Lasm_JS_Value_invokeRaw(v___x_408_, v___x_409_, v_args_405_, v___x_410_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_a_412_);
lean_dec_ref_known(v___x_411_, 1);
v___x_413_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___closed__1));
v___x_414_ = lean_string_append(v___x_413_, v_name_404_);
lean_dec_ref(v_name_404_);
v___x_415_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(v___x_414_, v_a_412_);
lean_dec(v_a_412_);
lean_dec_ref(v___x_414_);
return v___x_415_;
}
else
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
lean_dec_ref(v_name_404_);
v_a_416_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v___x_411_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_411_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0___boxed(lean_object* v_o_424_, lean_object* v_name_425_, lean_object* v_args_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0(v_o_424_, v_name_425_, v_args_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncId(lean_object* v_self_430_){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = ((lean_object*)(l_Lasm_JS_Node_AsyncHook_executionAsyncId___closed__0));
v___x_433_ = lean_obj_once(&l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2, &l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2_once, _init_l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2);
v___x_434_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0(v_self_430_, v___x_432_, v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_executionAsyncId___boxed(lean_object* v_self_435_, lean_object* v_a_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lasm_JS_Node_AsyncHook_executionAsyncId(v_self_435_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_triggerAsyncId(lean_object* v_self_439_){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_441_ = ((lean_object*)(l_Lasm_JS_Node_AsyncHook_triggerAsyncId___closed__0));
v___x_442_ = lean_obj_once(&l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2, &l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2_once, _init_l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2);
v___x_443_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0(v_self_439_, v___x_441_, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncHook_triggerAsyncId___boxed(lean_object* v_self_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lasm_JS_Node_AsyncHook_triggerAsyncId(v_self_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f(lean_object* v_v_454_){
_start:
{
lean_object* v___f_456_; lean_object* v___x_457_; 
v___f_456_ = ((lean_object*)(l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___closed__2));
lean_inc(v_v_454_);
v___x_457_ = l_Lasm_JS_Web_Support_isInstance(v___f_456_, v_v_454_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_471_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_471_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_471_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_471_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
uint8_t v___x_462_; 
v___x_462_ = lean_unbox(v_a_458_);
lean_dec(v_a_458_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; lean_object* v___x_465_; 
lean_dec(v_v_454_);
v___x_463_ = lean_box(0);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_463_);
v___x_465_ = v___x_460_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_463_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
else
{
lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_467_, 0, v_v_454_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_467_);
v___x_469_ = v___x_460_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec(v_v_454_);
v_a_472_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_457_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_457_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f___boxed(lean_object* v_v_480_, lean_object* v_a_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lasm_JS_Node_AsyncLocalStorage_cast_x3f(v_v_480_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_name(lean_object* v_self_484_){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = ((lean_object*)(l_Lasm_JS_Node_AsyncLocalStorage_name___closed__0));
v___x_487_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_484_, v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_name___boxed(lean_object* v_self_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lasm_JS_Node_AsyncLocalStorage_name(v_self_488_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncLocalStorage_bind_spec__0(lean_object* v_b_491_, lean_object* v_args_492_, uint8_t v_await_493_){
_start:
{
uint64_t v___y_496_; uint64_t v___y_497_; uint64_t v___x_540_; uint64_t v___y_542_; 
v___x_540_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__2);
if (v_await_493_ == 0)
{
uint64_t v___x_547_; 
v___x_547_ = 0ULL;
v___y_542_ = v___x_547_;
goto v___jp_541_;
}
else
{
uint64_t v___x_548_; 
v___x_548_ = 2ULL;
v___y_542_ = v___x_548_;
goto v___jp_541_;
}
v___jp_495_:
{
uint64_t v_flags_498_; uint32_t v___x_499_; lean_object* v___x_500_; uint32_t v___x_501_; lean_object* v___x_502_; 
v_flags_498_ = lean_uint64_lor(v___y_496_, v___y_497_);
v___x_499_ = 214;
v___x_500_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_491_, v_args_492_);
v___x_501_ = 0;
v___x_502_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_499_, v_flags_498_, v___x_500_, v___x_501_);
lean_dec(v___x_500_);
if (lean_obj_tag(v___x_502_) == 0)
{
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_504_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_503_);
lean_dec_ref_known(v___x_502_, 1);
v___x_504_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_503_);
lean_dec(v_a_503_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
lean_inc(v_a_505_);
lean_dec_ref_known(v___x_504_, 1);
v___x_506_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_491_);
v___x_507_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v___x_506_, v_a_505_);
lean_dec_ref(v___x_506_);
return v___x_507_;
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
v_a_508_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_504_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_504_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
v_a_516_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_502_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_502_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
lean_ctor_set_tag(v___x_518_, 1);
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_539_; 
v_a_524_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_539_ == 0)
{
v___x_526_ = v___x_502_;
v_isShared_527_ = v_isSharedCheck_539_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_502_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_539_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_528_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__0));
v___x_529_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_491_);
v___x_530_ = lean_string_append(v___x_528_, v___x_529_);
lean_dec_ref(v___x_529_);
v___x_531_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0___closed__1));
v___x_532_ = lean_string_append(v___x_530_, v___x_531_);
v___x_533_ = lean_io_error_to_string(v_a_524_);
v___x_534_ = lean_string_append(v___x_532_, v___x_533_);
lean_dec_ref(v___x_533_);
v___x_535_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_535_);
v___x_537_ = v___x_526_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
v___jp_541_:
{
uint8_t v_construct_543_; uint64_t v___x_544_; 
v_construct_543_ = lean_ctor_get_uint8(v_b_491_, sizeof(void*)*4);
v___x_544_ = lean_uint64_lor(v___x_540_, v___y_542_);
if (v_construct_543_ == 0)
{
uint64_t v___x_545_; 
v___x_545_ = 0ULL;
v___y_496_ = v___x_544_;
v___y_497_ = v___x_545_;
goto v___jp_495_;
}
else
{
uint64_t v___x_546_; 
v___x_546_ = 4ULL;
v___y_496_ = v___x_544_;
v___y_497_ = v___x_546_;
goto v___jp_495_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncLocalStorage_bind_spec__0___boxed(lean_object* v_b_549_, lean_object* v_args_550_, lean_object* v_await_551_, lean_object* v_a_552_){
_start:
{
uint8_t v_await_boxed_553_; lean_object* v_res_554_; 
v_await_boxed_553_ = lean_unbox(v_await_551_);
v_res_554_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncLocalStorage_bind_spec__0(v_b_549_, v_args_550_, v_await_boxed_553_);
lean_dec_ref(v_b_549_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_bind(lean_object* v_fn_563_){
_start:
{
uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_565_ = 0;
v___x_566_ = lean_unsigned_to_nat(1u);
v___x_567_ = ((lean_object*)(l_Lasm_JS_Node_AsyncLocalStorage_bind___closed__2));
v___x_568_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0));
v___x_569_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_569_, 0, v_fn_563_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
v___x_570_ = lean_mk_empty_array_with_capacity(v___x_566_);
v___x_571_ = lean_array_push(v___x_570_, v___x_569_);
v___x_572_ = l_Lasm_JS_Web_Support_args(v___x_571_);
v___x_573_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncLocalStorage_bind_spec__0(v___x_567_, v___x_572_, v___x_565_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_bind___boxed(lean_object* v_fn_574_, lean_object* v_a_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lasm_JS_Node_AsyncLocalStorage_bind(v_fn_574_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_snapshot(){
_start:
{
uint8_t v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_586_ = 0;
v___x_587_ = ((lean_object*)(l_Lasm_JS_Node_AsyncLocalStorage_snapshot___closed__2));
v___x_588_ = lean_obj_once(&l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2, &l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2_once, _init_l_Lasm_JS_Node_AsyncHook_executionAsyncResource___closed__2);
v___x_589_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncLocalStorage_bind_spec__0(v___x_587_, v___x_588_, v___x_586_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_AsyncLocalStorage_snapshot___boxed(lean_object* v_a_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lasm_JS_Node_AsyncLocalStorage_snapshot();
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(lean_object* v_x_592_){
_start:
{
if (lean_obj_tag(v_x_592_) == 0)
{
lean_object* v___x_593_; 
v___x_593_ = lean_box(0);
return v___x_593_;
}
else
{
lean_object* v_val_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_val_594_ = lean_ctor_get(v_x_592_, 0);
v___x_595_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsyncResource___lam__0___closed__0));
lean_inc(v_val_594_);
v___x_596_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_596_, 0, v_val_594_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
return v___x_596_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0___boxed(lean_object* v_x_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_x_597_);
lean_dec(v_x_597_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_async__hooks_createHook(lean_object* v_options_607_){
_start:
{
lean_object* v_init_609_; lean_object* v_before_610_; lean_object* v_after_611_; lean_object* v_destroy_612_; lean_object* v_promiseResolve_613_; lean_object* v_trackPromises_614_; uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v_init_609_ = lean_ctor_get(v_options_607_, 0);
v_before_610_ = lean_ctor_get(v_options_607_, 1);
v_after_611_ = lean_ctor_get(v_options_607_, 2);
v_destroy_612_ = lean_ctor_get(v_options_607_, 3);
v_promiseResolve_613_ = lean_ctor_get(v_options_607_, 4);
v_trackPromises_614_ = lean_ctor_get(v_options_607_, 5);
v___x_615_ = 0;
v___x_616_ = lean_unsigned_to_nat(1u);
v___x_617_ = ((lean_object*)(l_Lasm_JS_Node_async__hooks_createHook___closed__2));
v___x_618_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__0));
v___x_619_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_init_609_);
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_618_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__1));
v___x_622_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_before_610_);
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__2));
v___x_625_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_after_611_);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_624_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
v___x_627_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__3));
v___x_628_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_destroy_612_);
v___x_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_627_);
lean_ctor_set(v___x_629_, 1, v___x_628_);
v___x_630_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__4));
v___x_631_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_promiseResolve_613_);
v___x_632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
v___x_633_ = ((lean_object*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0___closed__5));
v___x_634_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_trackPromises_614_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = lean_unsigned_to_nat(6u);
v___x_637_ = lean_mk_empty_array_with_capacity(v___x_636_);
v___x_638_ = lean_array_push(v___x_637_, v___x_620_);
v___x_639_ = lean_array_push(v___x_638_, v___x_623_);
v___x_640_ = lean_array_push(v___x_639_, v___x_626_);
v___x_641_ = lean_array_push(v___x_640_, v___x_629_);
v___x_642_ = lean_array_push(v___x_641_, v___x_632_);
v___x_643_ = lean_array_push(v___x_642_, v___x_635_);
v___x_644_ = l_Lasm_JS_Web_Support_fields(v___x_643_);
lean_dec_ref(v___x_643_);
v___x_645_ = lean_mk_empty_array_with_capacity(v___x_616_);
v___x_646_ = lean_array_push(v___x_645_, v___x_644_);
v___x_647_ = l_Lasm_JS_Web_Support_args(v___x_646_);
v___x_648_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_617_, v___x_647_, v___x_615_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_656_; 
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
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
v_a_657_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_648_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_648_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_async__hooks_createHook___boxed(lean_object* v_options_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lasm_JS_Node_async__hooks_createHook(v_options_665_);
lean_dec_ref(v_options_665_);
return v_res_667_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_AsyncHooks(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
