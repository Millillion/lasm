// Lean compiler output
// Module: Lasm.JS.Deno.Subprocess
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Streams public import Lasm.JS.Deno.Runtime
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
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_await_into(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSRecord___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrURL___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
extern lean_object* l_Lasm_JS_Deno_instFromJSSignal;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
extern lean_object* l_Lasm_JS_instFromJSBool;
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSByteArray;
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(lean_object*, lean_object*, uint8_t);
static const lean_string_object l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSSubprocessReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSSubprocessReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSubprocessReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSSubprocessReadableStream = (const lean_object*)&l_Lasm_JS_Deno_instToJSSubprocessReadableStream___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Deno.SubprocessReadableStream"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSSubprocessReadableStream = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream = (const lean_object*)&l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSChildProcess = (const lean_object*)&l_Lasm_JS_Deno_instToJSSubprocessReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSChildProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.ChildProcess"};
static const lean_object* l_Lasm_JS_Deno_instFromJSChildProcess___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSChildProcess___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSChildProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSChildProcess___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSChildProcess___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSChildProcess___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSChildProcess = (const lean_object*)&l_Lasm_JS_Deno_instFromJSChildProcess___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCommand = (const lean_object*)&l_Lasm_JS_Deno_instToJSSubprocessReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.Command"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommand___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommand___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSCommand___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommand___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommand___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSCommand = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommand___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_null_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_null_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_null_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_null_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCommandOptionsStdin_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStdin_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqCommandOptionsStdin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqCommandOptionsStdin_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStdin___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqCommandOptionsStdin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStdin = (const lean_object*)&l_Lasm_JS_Deno_instBEqCommandOptionsStdin___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Deno.CommandOptionsStdin.piped"};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Deno.CommandOptionsStdin.inherit"};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Deno.CommandOptionsStdin.null"};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6;
static lean_once_cell_t l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprCommandOptionsStdin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdin___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedCommandOptionsStdin_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedCommandOptionsStdin;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "piped"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "inherit"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSCommandOptionsStdin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdin___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Deno.CommandOptionsStdin"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_null_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_null_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_null_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_null_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCommandOptionsStdout_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStdout_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqCommandOptionsStdout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqCommandOptionsStdout_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStdout___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqCommandOptionsStdout___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStdout = (const lean_object*)&l_Lasm_JS_Deno_instBEqCommandOptionsStdout___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Deno.CommandOptionsStdout.piped"};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Deno.CommandOptionsStdout.inherit"};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Deno.CommandOptionsStdout.null"};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprCommandOptionsStdout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStdout___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedCommandOptionsStdout_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedCommandOptionsStdout;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdout___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdout___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSCommandOptionsStdout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSCommandOptionsStdout___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdout___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdout___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdout = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStdout___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.CommandOptionsStdout"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_null_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_null_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_null_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_null_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCommandOptionsStderr_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStderr_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqCommandOptionsStderr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqCommandOptionsStderr_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStderr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqCommandOptionsStderr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStderr = (const lean_object*)&l_Lasm_JS_Deno_instBEqCommandOptionsStderr___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Deno.CommandOptionsStderr.piped"};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Deno.CommandOptionsStderr.inherit"};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Deno.CommandOptionsStderr.null"};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprCommandOptionsStderr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr = (const lean_object*)&l_Lasm_JS_Deno_instReprCommandOptionsStderr___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedCommandOptionsStderr_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedCommandOptionsStderr;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStderr___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStderr___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSCommandOptionsStderr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSCommandOptionsStderr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStderr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStderr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStderr = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptionsStderr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.CommandOptionsStderr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "success"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSCommandStatus___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSCommandStatus___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___closed__1;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandStatus___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.CommandStatus"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandStatus___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSCommandStatus___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stdout"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stderr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSCommandOutput___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput___closed__0;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCommandOutput___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.CommandOutput"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCommandOutput___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSCommandOutput___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_signal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_signal_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_signal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_signal_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_double_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_double_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGABRT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGALRM"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "SIGBREAK"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGBUS"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGCHLD"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGCONT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGEMT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGFPE"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGHUP"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__16_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__17_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGILL"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__18 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__18_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__19 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__19_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGINFO"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__20 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__20_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__21 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__21_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGINT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__22 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__22_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__23 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__23_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SIGIO"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__24 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__24_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__24_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__25 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__25_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGPOLL"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__26 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__26_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__26_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__27 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__27_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SIGUNUSED"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__28 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__28_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__28_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__29 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__29_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGKILL"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__30 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__30_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__30_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__31 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__31_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGPIPE"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__32 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__32_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__32_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__33 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__33_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGPROF"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__34 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__34_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__34_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__35 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__35_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGPWR"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__36 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__36_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__36_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__37 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__37_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGQUIT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__38 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__38_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__38_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__39 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__39_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGSEGV"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__40 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__40_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__40_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__41 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__41_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SIGSTKFLT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__42 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__42_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__42_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__43 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__43_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGSTOP"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__44 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__44_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__44_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__45 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__45_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGSYS"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__46 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__46_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__46_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__47 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__47_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTERM"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__48 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__48_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__48_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__49 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__49_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTRAP"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__50 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__50_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__50_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__51 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__51_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTSTP"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__52 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__52_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__52_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__53 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__53_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTTIN"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__54 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__54_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__54_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__55 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__55_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTTOU"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__56 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__56_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__56_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__57 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__57_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGURG"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__58 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__58_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__58_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__59 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__59_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGUSR1"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__60 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__60_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__60_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__61 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__61_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGUSR2"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__62 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__62_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__62_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__63 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__63_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SIGVTALRM"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__64 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__64_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__64_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__65 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__65_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "SIGWINCH"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__66 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__66_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__66_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__67 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__67_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGXCPU"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__68 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__68_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__68_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__69 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__69_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGXFSZ"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__70 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__70_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__70_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__71 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__71_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSSignalOrDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignalOrDouble___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeSignalSignalOrDouble = (const lean_object*)&l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatSignalOrDouble = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "args"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cwd"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "clearEnv"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uid"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gid"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stdin"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "windowsRawArguments"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "detached"};
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSCommandOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Deno_instToJSCommandOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___closed__1;
static const lean_closure_object l_Lasm_JS_Deno_instToJSCommandOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___closed__2_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSCommandOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Deno_instToJSCommandOptions___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___closed__4;
static const lean_closure_object l_Lasm_JS_Deno_instToJSCommandOptions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___closed__5_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSCommandOptions___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCommandOptions___closed__6_value;
static lean_once_cell_t l_Lasm_JS_Deno_instToJSCommandOptions___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___closed__7;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arrayBuffer"};
static const lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__1_value;
static const lean_array_object l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_SubprocessReadableStream_bytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bytes"};
static const lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_bytes___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_SubprocessReadableStream_bytes___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_bytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_bytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__0_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__1_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__1_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_SubprocessReadableStream_json___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "json"};
static const lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_json___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_SubprocessReadableStream_json___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_json(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_json___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_SubprocessReadableStream_text___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_text___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_SubprocessReadableStream_text___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_text(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_text___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stdin(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stdin___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stdout(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stdout___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stderr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stderr___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_ChildProcess_pid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pid"};
static const lean_object* l_Lasm_JS_Deno_ChildProcess_pid___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ChildProcess_pid___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_pid(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_pid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Option (Lasm.JS.Deno.Signal)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__4_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__5;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__6;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__7_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__9 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "await"};
static const lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___closed__0_value;
static const lean_closure_object l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___closed__0_value)} };
static const lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_status___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_status___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_ChildProcess_status___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_ChildProcess_status___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_ChildProcess_status___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ChildProcess_status___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_ChildProcess_status___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "status"};
static const lean_object* l_Lasm_JS_Deno_ChildProcess_status___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_ChildProcess_status___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_status(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_status___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__1;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__2;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__3_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_ChildProcess_output___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "output"};
static const lean_object* l_Lasm_JS_Deno_ChildProcess_output___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ChildProcess_output___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_output(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_output___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_ChildProcess_kill_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_ChildProcess_kill___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kill"};
static const lean_object* l_Lasm_JS_Deno_ChildProcess_kill___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ChildProcess_kill___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_kill(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_kill___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_ChildProcess_ref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l_Lasm_JS_Deno_ChildProcess_ref___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ChildProcess_ref___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_ref___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_ChildProcess_unref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unref"};
static const lean_object* l_Lasm_JS_Deno_ChildProcess_unref___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ChildProcess_unref___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_unref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_unref___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Command_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Deno.Command.new"};
static const lean_object* l_Lasm_JS_Deno_Command_new___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Command_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_Command_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Deno_Command_new___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_Command_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_Command_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Deno.Command"};
static const lean_object* l_Lasm_JS_Deno_Command_new___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_Command_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_Command_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_Command_new___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_Command_new___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_Command_new___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_Command_new___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_Command_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_output(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_output___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Command_outputSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "outputSync"};
static const lean_object* l_Lasm_JS_Deno_Command_outputSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Command_outputSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_outputSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_outputSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Command_spawn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "spawn"};
static const lean_object* l_Lasm_JS_Deno_Command_spawn___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Command_spawn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_spawn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_spawn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_kill___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.Deno.kill"};
static const lean_object* l_Lasm_JS_Deno_kill___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_kill___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_kill___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Deno.kill"};
static const lean_object* l_Lasm_JS_Deno_kill___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_kill___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_kill___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_kill___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_Command_new___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_kill___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_kill___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_kill___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_kill(double, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_kill___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Deno_instFromJSSubprocessReadableStream___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___lam__0(lean_object* v_self_22_){
_start:
{
lean_inc(v_self_22_);
return v_self_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___lam__0___boxed(lean_object* v_self_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_JS_Deno_instCoeSubprocessReadableStreamReadableStream___lam__0(v_self_23_);
lean_dec(v_self_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorIdx(uint8_t v_x_41_){
_start:
{
switch(v_x_41_)
{
case 0:
{
lean_object* v___x_42_; 
v___x_42_ = lean_unsigned_to_nat(0u);
return v___x_42_;
}
case 1:
{
lean_object* v___x_43_; 
v___x_43_ = lean_unsigned_to_nat(1u);
return v___x_43_;
}
default: 
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(2u);
return v___x_44_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorIdx___boxed(lean_object* v_x_45_){
_start:
{
uint8_t v_x_boxed_46_; lean_object* v_res_47_; 
v_x_boxed_46_ = lean_unbox(v_x_45_);
v_res_47_ = l_Lasm_JS_Deno_CommandOptionsStdin_ctorIdx(v_x_boxed_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim___redArg(lean_object* v_k_48_){
_start:
{
lean_inc(v_k_48_);
return v_k_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim___redArg___boxed(lean_object* v_k_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim___redArg(v_k_49_);
lean_dec(v_k_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim(lean_object* v_motive_51_, lean_object* v_ctorIdx_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_k_55_){
_start:
{
lean_inc(v_k_55_);
return v_k_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim___boxed(lean_object* v_motive_56_, lean_object* v_ctorIdx_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_k_60_){
_start:
{
uint8_t v_t_boxed_61_; lean_object* v_res_62_; 
v_t_boxed_61_ = lean_unbox(v_t_58_);
v_res_62_ = l_Lasm_JS_Deno_CommandOptionsStdin_ctorElim(v_motive_56_, v_ctorIdx_57_, v_t_boxed_61_, v_h_59_, v_k_60_);
lean_dec(v_k_60_);
lean_dec(v_ctorIdx_57_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim___redArg(lean_object* v_piped_63_){
_start:
{
lean_inc(v_piped_63_);
return v_piped_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim___redArg___boxed(lean_object* v_piped_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim___redArg(v_piped_64_);
lean_dec(v_piped_64_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim(lean_object* v_motive_66_, uint8_t v_t_67_, lean_object* v_h_68_, lean_object* v_piped_69_){
_start:
{
lean_inc(v_piped_69_);
return v_piped_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim___boxed(lean_object* v_motive_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_piped_73_){
_start:
{
uint8_t v_t_boxed_74_; lean_object* v_res_75_; 
v_t_boxed_74_ = lean_unbox(v_t_71_);
v_res_75_ = l_Lasm_JS_Deno_CommandOptionsStdin_piped_elim(v_motive_70_, v_t_boxed_74_, v_h_72_, v_piped_73_);
lean_dec(v_piped_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim___redArg(lean_object* v_inherit_76_){
_start:
{
lean_inc(v_inherit_76_);
return v_inherit_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim___redArg___boxed(lean_object* v_inherit_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim___redArg(v_inherit_77_);
lean_dec(v_inherit_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim(lean_object* v_motive_79_, uint8_t v_t_80_, lean_object* v_h_81_, lean_object* v_inherit_82_){
_start:
{
lean_inc(v_inherit_82_);
return v_inherit_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim___boxed(lean_object* v_motive_83_, lean_object* v_t_84_, lean_object* v_h_85_, lean_object* v_inherit_86_){
_start:
{
uint8_t v_t_boxed_87_; lean_object* v_res_88_; 
v_t_boxed_87_ = lean_unbox(v_t_84_);
v_res_88_ = l_Lasm_JS_Deno_CommandOptionsStdin_inherit_elim(v_motive_83_, v_t_boxed_87_, v_h_85_, v_inherit_86_);
lean_dec(v_inherit_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_null_elim___redArg(lean_object* v_null_89_){
_start:
{
lean_inc(v_null_89_);
return v_null_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_null_elim___redArg___boxed(lean_object* v_null_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lasm_JS_Deno_CommandOptionsStdin_null_elim___redArg(v_null_90_);
lean_dec(v_null_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_null_elim(lean_object* v_motive_92_, uint8_t v_t_93_, lean_object* v_h_94_, lean_object* v_null_95_){
_start:
{
lean_inc(v_null_95_);
return v_null_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdin_null_elim___boxed(lean_object* v_motive_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_null_99_){
_start:
{
uint8_t v_t_boxed_100_; lean_object* v_res_101_; 
v_t_boxed_100_ = lean_unbox(v_t_97_);
v_res_101_ = l_Lasm_JS_Deno_CommandOptionsStdin_null_elim(v_motive_96_, v_t_boxed_100_, v_h_98_, v_null_99_);
lean_dec(v_null_99_);
return v_res_101_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCommandOptionsStdin_beq(uint8_t v_x_102_, uint8_t v_y_103_){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_104_ = l_Lasm_JS_Deno_CommandOptionsStdin_ctorIdx(v_x_102_);
v___x_105_ = l_Lasm_JS_Deno_CommandOptionsStdin_ctorIdx(v_y_103_);
v___x_106_ = lean_nat_dec_eq(v___x_104_, v___x_105_);
lean_dec(v___x_105_);
lean_dec(v___x_104_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStdin_beq___boxed(lean_object* v_x_107_, lean_object* v_y_108_){
_start:
{
uint8_t v_x_21__boxed_109_; uint8_t v_y_22__boxed_110_; uint8_t v_res_111_; lean_object* v_r_112_; 
v_x_21__boxed_109_ = lean_unbox(v_x_107_);
v_y_22__boxed_110_ = lean_unbox(v_y_108_);
v_res_111_ = l_Lasm_JS_Deno_instBEqCommandOptionsStdin_beq(v_x_21__boxed_109_, v_y_22__boxed_110_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(2u);
v___x_125_ = lean_nat_to_int(v___x_124_);
return v___x_125_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_to_int(v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr(uint8_t v_x_128_, lean_object* v_prec_129_){
_start:
{
lean_object* v___y_131_; lean_object* v___y_138_; lean_object* v___y_145_; 
switch(v_x_128_)
{
case 0:
{
lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(1024u);
v___x_152_ = lean_nat_dec_le(v___x_151_, v_prec_129_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6);
v___y_131_ = v___x_153_;
goto v___jp_130_;
}
else
{
lean_object* v___x_154_; 
v___x_154_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7);
v___y_131_ = v___x_154_;
goto v___jp_130_;
}
}
case 1:
{
lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(1024u);
v___x_156_ = lean_nat_dec_le(v___x_155_, v_prec_129_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; 
v___x_157_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6);
v___y_138_ = v___x_157_;
goto v___jp_137_;
}
else
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7);
v___y_138_ = v___x_158_;
goto v___jp_137_;
}
}
default: 
{
lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(1024u);
v___x_160_ = lean_nat_dec_le(v___x_159_, v_prec_129_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; 
v___x_161_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6);
v___y_145_ = v___x_161_;
goto v___jp_144_;
}
else
{
lean_object* v___x_162_; 
v___x_162_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7);
v___y_145_ = v___x_162_;
goto v___jp_144_;
}
}
}
v___jp_130_:
{
lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_132_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__1));
lean_inc(v___y_131_);
v___x_133_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_133_, 0, v___y_131_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = 0;
v___x_135_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_135_, 0, v___x_133_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*1, v___x_134_);
v___x_136_ = l_Repr_addAppParen(v___x_135_, v_prec_129_);
return v___x_136_;
}
v___jp_137_:
{
lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_139_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__3));
lean_inc(v___y_138_);
v___x_140_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_140_, 0, v___y_138_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = 0;
v___x_142_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set_uint8(v___x_142_, sizeof(void*)*1, v___x_141_);
v___x_143_ = l_Repr_addAppParen(v___x_142_, v_prec_129_);
return v___x_143_;
}
v___jp_144_:
{
lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_146_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__5));
lean_inc(v___y_145_);
v___x_147_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_147_, 0, v___y_145_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = 0;
v___x_149_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set_uint8(v___x_149_, sizeof(void*)*1, v___x_148_);
v___x_150_ = l_Repr_addAppParen(v___x_149_, v_prec_129_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___boxed(lean_object* v_x_163_, lean_object* v_prec_164_){
_start:
{
uint8_t v_x_171__boxed_165_; lean_object* v_res_166_; 
v_x_171__boxed_165_ = lean_unbox(v_x_163_);
v_res_166_ = l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr(v_x_171__boxed_165_, v_prec_164_);
lean_dec(v_prec_164_);
return v_res_166_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStdin_default(void){
_start:
{
uint8_t v___x_169_; 
v___x_169_ = 0;
return v___x_169_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStdin(void){
_start:
{
uint8_t v___x_170_; 
v___x_170_ = 0;
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0(uint8_t v_x_180_){
_start:
{
switch(v_x_180_)
{
case 0:
{
lean_object* v___x_181_; 
v___x_181_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__1));
return v___x_181_;
}
case 1:
{
lean_object* v___x_182_; 
v___x_182_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__3));
return v___x_182_;
}
default: 
{
lean_object* v___x_183_; 
v___x_183_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__5));
return v___x_183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___boxed(lean_object* v_x_184_){
_start:
{
uint8_t v_x_57__boxed_185_; lean_object* v_res_186_; 
v_x_57__boxed_185_ = lean_unbox(v_x_184_);
v_res_186_ = l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0(v_x_57__boxed_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0(lean_object* v_x_201_){
_start:
{
if (lean_obj_tag(v_x_201_) == 4)
{
lean_object* v_s_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v_s_204_ = lean_ctor_get(v_x_201_, 0);
v___x_205_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__0));
v___x_206_ = lean_string_dec_eq(v_s_204_, v___x_205_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__2));
v___x_208_ = lean_string_dec_eq(v_s_204_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__4));
v___x_210_ = lean_string_dec_eq(v_s_204_, v___x_209_);
if (v___x_210_ == 0)
{
goto v___jp_202_;
}
else
{
lean_object* v___x_211_; 
v___x_211_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__2));
return v___x_211_;
}
}
else
{
lean_object* v___x_212_; 
v___x_212_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__3));
return v___x_212_;
}
}
else
{
lean_object* v___x_213_; 
v___x_213_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__4));
return v___x_213_;
}
}
else
{
goto v___jp_202_;
}
v___jp_202_:
{
lean_object* v___x_203_; 
v___x_203_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__1));
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___boxed(lean_object* v_x_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0(v_x_214_);
lean_dec(v_x_214_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorIdx(uint8_t v_x_223_){
_start:
{
switch(v_x_223_)
{
case 0:
{
lean_object* v___x_224_; 
v___x_224_ = lean_unsigned_to_nat(0u);
return v___x_224_;
}
case 1:
{
lean_object* v___x_225_; 
v___x_225_ = lean_unsigned_to_nat(1u);
return v___x_225_;
}
default: 
{
lean_object* v___x_226_; 
v___x_226_ = lean_unsigned_to_nat(2u);
return v___x_226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorIdx___boxed(lean_object* v_x_227_){
_start:
{
uint8_t v_x_boxed_228_; lean_object* v_res_229_; 
v_x_boxed_228_ = lean_unbox(v_x_227_);
v_res_229_ = l_Lasm_JS_Deno_CommandOptionsStdout_ctorIdx(v_x_boxed_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim___redArg(lean_object* v_k_230_){
_start:
{
lean_inc(v_k_230_);
return v_k_230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim___redArg___boxed(lean_object* v_k_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim___redArg(v_k_231_);
lean_dec(v_k_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim(lean_object* v_motive_233_, lean_object* v_ctorIdx_234_, uint8_t v_t_235_, lean_object* v_h_236_, lean_object* v_k_237_){
_start:
{
lean_inc(v_k_237_);
return v_k_237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim___boxed(lean_object* v_motive_238_, lean_object* v_ctorIdx_239_, lean_object* v_t_240_, lean_object* v_h_241_, lean_object* v_k_242_){
_start:
{
uint8_t v_t_boxed_243_; lean_object* v_res_244_; 
v_t_boxed_243_ = lean_unbox(v_t_240_);
v_res_244_ = l_Lasm_JS_Deno_CommandOptionsStdout_ctorElim(v_motive_238_, v_ctorIdx_239_, v_t_boxed_243_, v_h_241_, v_k_242_);
lean_dec(v_k_242_);
lean_dec(v_ctorIdx_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim___redArg(lean_object* v_piped_245_){
_start:
{
lean_inc(v_piped_245_);
return v_piped_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim___redArg___boxed(lean_object* v_piped_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim___redArg(v_piped_246_);
lean_dec(v_piped_246_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim(lean_object* v_motive_248_, uint8_t v_t_249_, lean_object* v_h_250_, lean_object* v_piped_251_){
_start:
{
lean_inc(v_piped_251_);
return v_piped_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim___boxed(lean_object* v_motive_252_, lean_object* v_t_253_, lean_object* v_h_254_, lean_object* v_piped_255_){
_start:
{
uint8_t v_t_boxed_256_; lean_object* v_res_257_; 
v_t_boxed_256_ = lean_unbox(v_t_253_);
v_res_257_ = l_Lasm_JS_Deno_CommandOptionsStdout_piped_elim(v_motive_252_, v_t_boxed_256_, v_h_254_, v_piped_255_);
lean_dec(v_piped_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim___redArg(lean_object* v_inherit_258_){
_start:
{
lean_inc(v_inherit_258_);
return v_inherit_258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim___redArg___boxed(lean_object* v_inherit_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim___redArg(v_inherit_259_);
lean_dec(v_inherit_259_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim(lean_object* v_motive_261_, uint8_t v_t_262_, lean_object* v_h_263_, lean_object* v_inherit_264_){
_start:
{
lean_inc(v_inherit_264_);
return v_inherit_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim___boxed(lean_object* v_motive_265_, lean_object* v_t_266_, lean_object* v_h_267_, lean_object* v_inherit_268_){
_start:
{
uint8_t v_t_boxed_269_; lean_object* v_res_270_; 
v_t_boxed_269_ = lean_unbox(v_t_266_);
v_res_270_ = l_Lasm_JS_Deno_CommandOptionsStdout_inherit_elim(v_motive_265_, v_t_boxed_269_, v_h_267_, v_inherit_268_);
lean_dec(v_inherit_268_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_null_elim___redArg(lean_object* v_null_271_){
_start:
{
lean_inc(v_null_271_);
return v_null_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_null_elim___redArg___boxed(lean_object* v_null_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Lasm_JS_Deno_CommandOptionsStdout_null_elim___redArg(v_null_272_);
lean_dec(v_null_272_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_null_elim(lean_object* v_motive_274_, uint8_t v_t_275_, lean_object* v_h_276_, lean_object* v_null_277_){
_start:
{
lean_inc(v_null_277_);
return v_null_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStdout_null_elim___boxed(lean_object* v_motive_278_, lean_object* v_t_279_, lean_object* v_h_280_, lean_object* v_null_281_){
_start:
{
uint8_t v_t_boxed_282_; lean_object* v_res_283_; 
v_t_boxed_282_ = lean_unbox(v_t_279_);
v_res_283_ = l_Lasm_JS_Deno_CommandOptionsStdout_null_elim(v_motive_278_, v_t_boxed_282_, v_h_280_, v_null_281_);
lean_dec(v_null_281_);
return v_res_283_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCommandOptionsStdout_beq(uint8_t v_x_284_, uint8_t v_y_285_){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_286_ = l_Lasm_JS_Deno_CommandOptionsStdout_ctorIdx(v_x_284_);
v___x_287_ = l_Lasm_JS_Deno_CommandOptionsStdout_ctorIdx(v_y_285_);
v___x_288_ = lean_nat_dec_eq(v___x_286_, v___x_287_);
lean_dec(v___x_287_);
lean_dec(v___x_286_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStdout_beq___boxed(lean_object* v_x_289_, lean_object* v_y_290_){
_start:
{
uint8_t v_x_21__boxed_291_; uint8_t v_y_22__boxed_292_; uint8_t v_res_293_; lean_object* v_r_294_; 
v_x_21__boxed_291_ = lean_unbox(v_x_289_);
v_y_22__boxed_292_ = lean_unbox(v_y_290_);
v_res_293_ = l_Lasm_JS_Deno_instBEqCommandOptionsStdout_beq(v_x_21__boxed_291_, v_y_22__boxed_292_);
v_r_294_ = lean_box(v_res_293_);
return v_r_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr(uint8_t v_x_306_, lean_object* v_prec_307_){
_start:
{
lean_object* v___y_309_; lean_object* v___y_316_; lean_object* v___y_323_; 
switch(v_x_306_)
{
case 0:
{
lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_329_ = lean_unsigned_to_nat(1024u);
v___x_330_ = lean_nat_dec_le(v___x_329_, v_prec_307_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
v___x_331_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6);
v___y_309_ = v___x_331_;
goto v___jp_308_;
}
else
{
lean_object* v___x_332_; 
v___x_332_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7);
v___y_309_ = v___x_332_;
goto v___jp_308_;
}
}
case 1:
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = lean_unsigned_to_nat(1024u);
v___x_334_ = lean_nat_dec_le(v___x_333_, v_prec_307_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; 
v___x_335_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6);
v___y_316_ = v___x_335_;
goto v___jp_315_;
}
else
{
lean_object* v___x_336_; 
v___x_336_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7);
v___y_316_ = v___x_336_;
goto v___jp_315_;
}
}
default: 
{
lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_337_ = lean_unsigned_to_nat(1024u);
v___x_338_ = lean_nat_dec_le(v___x_337_, v_prec_307_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; 
v___x_339_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6);
v___y_323_ = v___x_339_;
goto v___jp_322_;
}
else
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7);
v___y_323_ = v___x_340_;
goto v___jp_322_;
}
}
}
v___jp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; uint8_t v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_310_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__1));
lean_inc(v___y_309_);
v___x_311_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_311_, 0, v___y_309_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
v___x_312_ = 0;
v___x_313_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_313_, 0, v___x_311_);
lean_ctor_set_uint8(v___x_313_, sizeof(void*)*1, v___x_312_);
v___x_314_ = l_Repr_addAppParen(v___x_313_, v_prec_307_);
return v___x_314_;
}
v___jp_315_:
{
lean_object* v___x_317_; lean_object* v___x_318_; uint8_t v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_317_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__3));
lean_inc(v___y_316_);
v___x_318_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_318_, 0, v___y_316_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = 0;
v___x_320_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_320_, 0, v___x_318_);
lean_ctor_set_uint8(v___x_320_, sizeof(void*)*1, v___x_319_);
v___x_321_ = l_Repr_addAppParen(v___x_320_, v_prec_307_);
return v___x_321_;
}
v___jp_322_:
{
lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_324_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___closed__5));
lean_inc(v___y_323_);
v___x_325_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_325_, 0, v___y_323_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
v___x_326_ = 0;
v___x_327_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_327_, 0, v___x_325_);
lean_ctor_set_uint8(v___x_327_, sizeof(void*)*1, v___x_326_);
v___x_328_ = l_Repr_addAppParen(v___x_327_, v_prec_307_);
return v___x_328_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr___boxed(lean_object* v_x_341_, lean_object* v_prec_342_){
_start:
{
uint8_t v_x_167__boxed_343_; lean_object* v_res_344_; 
v_x_167__boxed_343_ = lean_unbox(v_x_341_);
v_res_344_ = l_Lasm_JS_Deno_instReprCommandOptionsStdout_repr(v_x_167__boxed_343_, v_prec_342_);
lean_dec(v_prec_342_);
return v_res_344_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStdout_default(void){
_start:
{
uint8_t v___x_347_; 
v___x_347_ = 0;
return v___x_347_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStdout(void){
_start:
{
uint8_t v___x_348_; 
v___x_348_ = 0;
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdout___lam__0(uint8_t v_x_349_){
_start:
{
switch(v_x_349_)
{
case 0:
{
lean_object* v___x_350_; 
v___x_350_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__1));
return v___x_350_;
}
case 1:
{
lean_object* v___x_351_; 
v___x_351_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__3));
return v___x_351_;
}
default: 
{
lean_object* v___x_352_; 
v___x_352_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__5));
return v___x_352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStdout___lam__0___boxed(lean_object* v_x_353_){
_start:
{
uint8_t v_x_48__boxed_354_; lean_object* v_res_355_; 
v_x_48__boxed_354_ = lean_unbox(v_x_353_);
v_res_355_ = l_Lasm_JS_Deno_instToJSCommandOptionsStdout___lam__0(v_x_48__boxed_354_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0(lean_object* v_x_369_){
_start:
{
if (lean_obj_tag(v_x_369_) == 4)
{
lean_object* v_s_372_; lean_object* v___x_373_; uint8_t v___x_374_; 
v_s_372_ = lean_ctor_get(v_x_369_, 0);
v___x_373_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__0));
v___x_374_ = lean_string_dec_eq(v_s_372_, v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_375_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__2));
v___x_376_ = lean_string_dec_eq(v_s_372_, v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_377_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__4));
v___x_378_ = lean_string_dec_eq(v_s_372_, v___x_377_);
if (v___x_378_ == 0)
{
goto v___jp_370_;
}
else
{
lean_object* v___x_379_; 
v___x_379_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__1));
return v___x_379_;
}
}
else
{
lean_object* v___x_380_; 
v___x_380_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__2));
return v___x_380_;
}
}
else
{
lean_object* v___x_381_; 
v___x_381_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__3));
return v___x_381_;
}
}
else
{
goto v___jp_370_;
}
v___jp_370_:
{
lean_object* v___x_371_; 
v___x_371_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___closed__0));
return v___x_371_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0___boxed(lean_object* v_x_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lasm_JS_Deno_instFromJSCommandOptionsStdout___lam__0(v_x_382_);
lean_dec(v_x_382_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorIdx(uint8_t v_x_391_){
_start:
{
switch(v_x_391_)
{
case 0:
{
lean_object* v___x_392_; 
v___x_392_ = lean_unsigned_to_nat(0u);
return v___x_392_;
}
case 1:
{
lean_object* v___x_393_; 
v___x_393_ = lean_unsigned_to_nat(1u);
return v___x_393_;
}
default: 
{
lean_object* v___x_394_; 
v___x_394_ = lean_unsigned_to_nat(2u);
return v___x_394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorIdx___boxed(lean_object* v_x_395_){
_start:
{
uint8_t v_x_boxed_396_; lean_object* v_res_397_; 
v_x_boxed_396_ = lean_unbox(v_x_395_);
v_res_397_ = l_Lasm_JS_Deno_CommandOptionsStderr_ctorIdx(v_x_boxed_396_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim___redArg(lean_object* v_k_398_){
_start:
{
lean_inc(v_k_398_);
return v_k_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim___redArg___boxed(lean_object* v_k_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim___redArg(v_k_399_);
lean_dec(v_k_399_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim(lean_object* v_motive_401_, lean_object* v_ctorIdx_402_, uint8_t v_t_403_, lean_object* v_h_404_, lean_object* v_k_405_){
_start:
{
lean_inc(v_k_405_);
return v_k_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim___boxed(lean_object* v_motive_406_, lean_object* v_ctorIdx_407_, lean_object* v_t_408_, lean_object* v_h_409_, lean_object* v_k_410_){
_start:
{
uint8_t v_t_boxed_411_; lean_object* v_res_412_; 
v_t_boxed_411_ = lean_unbox(v_t_408_);
v_res_412_ = l_Lasm_JS_Deno_CommandOptionsStderr_ctorElim(v_motive_406_, v_ctorIdx_407_, v_t_boxed_411_, v_h_409_, v_k_410_);
lean_dec(v_k_410_);
lean_dec(v_ctorIdx_407_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim___redArg(lean_object* v_piped_413_){
_start:
{
lean_inc(v_piped_413_);
return v_piped_413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim___redArg___boxed(lean_object* v_piped_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim___redArg(v_piped_414_);
lean_dec(v_piped_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim(lean_object* v_motive_416_, uint8_t v_t_417_, lean_object* v_h_418_, lean_object* v_piped_419_){
_start:
{
lean_inc(v_piped_419_);
return v_piped_419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim___boxed(lean_object* v_motive_420_, lean_object* v_t_421_, lean_object* v_h_422_, lean_object* v_piped_423_){
_start:
{
uint8_t v_t_boxed_424_; lean_object* v_res_425_; 
v_t_boxed_424_ = lean_unbox(v_t_421_);
v_res_425_ = l_Lasm_JS_Deno_CommandOptionsStderr_piped_elim(v_motive_420_, v_t_boxed_424_, v_h_422_, v_piped_423_);
lean_dec(v_piped_423_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim___redArg(lean_object* v_inherit_426_){
_start:
{
lean_inc(v_inherit_426_);
return v_inherit_426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim___redArg___boxed(lean_object* v_inherit_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim___redArg(v_inherit_427_);
lean_dec(v_inherit_427_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim(lean_object* v_motive_429_, uint8_t v_t_430_, lean_object* v_h_431_, lean_object* v_inherit_432_){
_start:
{
lean_inc(v_inherit_432_);
return v_inherit_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim___boxed(lean_object* v_motive_433_, lean_object* v_t_434_, lean_object* v_h_435_, lean_object* v_inherit_436_){
_start:
{
uint8_t v_t_boxed_437_; lean_object* v_res_438_; 
v_t_boxed_437_ = lean_unbox(v_t_434_);
v_res_438_ = l_Lasm_JS_Deno_CommandOptionsStderr_inherit_elim(v_motive_433_, v_t_boxed_437_, v_h_435_, v_inherit_436_);
lean_dec(v_inherit_436_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_null_elim___redArg(lean_object* v_null_439_){
_start:
{
lean_inc(v_null_439_);
return v_null_439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_null_elim___redArg___boxed(lean_object* v_null_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lasm_JS_Deno_CommandOptionsStderr_null_elim___redArg(v_null_440_);
lean_dec(v_null_440_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_null_elim(lean_object* v_motive_442_, uint8_t v_t_443_, lean_object* v_h_444_, lean_object* v_null_445_){
_start:
{
lean_inc(v_null_445_);
return v_null_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CommandOptionsStderr_null_elim___boxed(lean_object* v_motive_446_, lean_object* v_t_447_, lean_object* v_h_448_, lean_object* v_null_449_){
_start:
{
uint8_t v_t_boxed_450_; lean_object* v_res_451_; 
v_t_boxed_450_ = lean_unbox(v_t_447_);
v_res_451_ = l_Lasm_JS_Deno_CommandOptionsStderr_null_elim(v_motive_446_, v_t_boxed_450_, v_h_448_, v_null_449_);
lean_dec(v_null_449_);
return v_res_451_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCommandOptionsStderr_beq(uint8_t v_x_452_, uint8_t v_y_453_){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_454_ = l_Lasm_JS_Deno_CommandOptionsStderr_ctorIdx(v_x_452_);
v___x_455_ = l_Lasm_JS_Deno_CommandOptionsStderr_ctorIdx(v_y_453_);
v___x_456_ = lean_nat_dec_eq(v___x_454_, v___x_455_);
lean_dec(v___x_455_);
lean_dec(v___x_454_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCommandOptionsStderr_beq___boxed(lean_object* v_x_457_, lean_object* v_y_458_){
_start:
{
uint8_t v_x_21__boxed_459_; uint8_t v_y_22__boxed_460_; uint8_t v_res_461_; lean_object* v_r_462_; 
v_x_21__boxed_459_ = lean_unbox(v_x_457_);
v_y_22__boxed_460_ = lean_unbox(v_y_458_);
v_res_461_ = l_Lasm_JS_Deno_instBEqCommandOptionsStderr_beq(v_x_21__boxed_459_, v_y_22__boxed_460_);
v_r_462_ = lean_box(v_res_461_);
return v_r_462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr(uint8_t v_x_474_, lean_object* v_prec_475_){
_start:
{
lean_object* v___y_477_; lean_object* v___y_484_; lean_object* v___y_491_; 
switch(v_x_474_)
{
case 0:
{
lean_object* v___x_497_; uint8_t v___x_498_; 
v___x_497_ = lean_unsigned_to_nat(1024u);
v___x_498_ = lean_nat_dec_le(v___x_497_, v_prec_475_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
v___x_499_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6);
v___y_477_ = v___x_499_;
goto v___jp_476_;
}
else
{
lean_object* v___x_500_; 
v___x_500_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7);
v___y_477_ = v___x_500_;
goto v___jp_476_;
}
}
case 1:
{
lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_501_ = lean_unsigned_to_nat(1024u);
v___x_502_ = lean_nat_dec_le(v___x_501_, v_prec_475_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
v___x_503_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6);
v___y_484_ = v___x_503_;
goto v___jp_483_;
}
else
{
lean_object* v___x_504_; 
v___x_504_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7);
v___y_484_ = v___x_504_;
goto v___jp_483_;
}
}
default: 
{
lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_unsigned_to_nat(1024u);
v___x_506_ = lean_nat_dec_le(v___x_505_, v_prec_475_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
v___x_507_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__6);
v___y_491_ = v___x_507_;
goto v___jp_490_;
}
else
{
lean_object* v___x_508_; 
v___x_508_ = lean_obj_once(&l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7, &l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7_once, _init_l_Lasm_JS_Deno_instReprCommandOptionsStdin_repr___closed__7);
v___y_491_ = v___x_508_;
goto v___jp_490_;
}
}
}
v___jp_476_:
{
lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_478_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__1));
lean_inc(v___y_477_);
v___x_479_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_479_, 0, v___y_477_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = 0;
v___x_481_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*1, v___x_480_);
v___x_482_ = l_Repr_addAppParen(v___x_481_, v_prec_475_);
return v___x_482_;
}
v___jp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_485_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__3));
lean_inc(v___y_484_);
v___x_486_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_486_, 0, v___y_484_);
lean_ctor_set(v___x_486_, 1, v___x_485_);
v___x_487_ = 0;
v___x_488_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_488_, 0, v___x_486_);
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*1, v___x_487_);
v___x_489_ = l_Repr_addAppParen(v___x_488_, v_prec_475_);
return v___x_489_;
}
v___jp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; uint8_t v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_492_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___closed__5));
lean_inc(v___y_491_);
v___x_493_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_493_, 0, v___y_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = 0;
v___x_495_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_495_, 0, v___x_493_);
lean_ctor_set_uint8(v___x_495_, sizeof(void*)*1, v___x_494_);
v___x_496_ = l_Repr_addAppParen(v___x_495_, v_prec_475_);
return v___x_496_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr___boxed(lean_object* v_x_509_, lean_object* v_prec_510_){
_start:
{
uint8_t v_x_167__boxed_511_; lean_object* v_res_512_; 
v_x_167__boxed_511_ = lean_unbox(v_x_509_);
v_res_512_ = l_Lasm_JS_Deno_instReprCommandOptionsStderr_repr(v_x_167__boxed_511_, v_prec_510_);
lean_dec(v_prec_510_);
return v_res_512_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStderr_default(void){
_start:
{
uint8_t v___x_515_; 
v___x_515_ = 0;
return v___x_515_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStderr(void){
_start:
{
uint8_t v___x_516_; 
v___x_516_ = 0;
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStderr___lam__0(uint8_t v_x_517_){
_start:
{
switch(v_x_517_)
{
case 0:
{
lean_object* v___x_518_; 
v___x_518_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__1));
return v___x_518_;
}
case 1:
{
lean_object* v___x_519_; 
v___x_519_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__3));
return v___x_519_;
}
default: 
{
lean_object* v___x_520_; 
v___x_520_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__5));
return v___x_520_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptionsStderr___lam__0___boxed(lean_object* v_x_521_){
_start:
{
uint8_t v_x_48__boxed_522_; lean_object* v_res_523_; 
v_x_48__boxed_522_ = lean_unbox(v_x_521_);
v_res_523_ = l_Lasm_JS_Deno_instToJSCommandOptionsStderr___lam__0(v_x_48__boxed_522_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0(lean_object* v_x_537_){
_start:
{
if (lean_obj_tag(v_x_537_) == 4)
{
lean_object* v_s_540_; lean_object* v___x_541_; uint8_t v___x_542_; 
v_s_540_ = lean_ctor_get(v_x_537_, 0);
v___x_541_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__0));
v___x_542_ = lean_string_dec_eq(v_s_540_, v___x_541_);
if (v___x_542_ == 0)
{
lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_543_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__2));
v___x_544_ = lean_string_dec_eq(v_s_540_, v___x_543_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__4));
v___x_546_ = lean_string_dec_eq(v_s_540_, v___x_545_);
if (v___x_546_ == 0)
{
goto v___jp_538_;
}
else
{
lean_object* v___x_547_; 
v___x_547_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__1));
return v___x_547_;
}
}
else
{
lean_object* v___x_548_; 
v___x_548_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__2));
return v___x_548_;
}
}
else
{
lean_object* v___x_549_; 
v___x_549_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__3));
return v___x_549_;
}
}
else
{
goto v___jp_538_;
}
v___jp_538_:
{
lean_object* v___x_539_; 
v___x_539_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___closed__0));
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0___boxed(lean_object* v_x_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lasm_JS_Deno_instFromJSCommandOptionsStderr___lam__0(v_x_550_);
lean_dec(v_x_550_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0(lean_object* v___x_562_, lean_object* v___x_563_, lean_object* v___x_564_, lean_object* v_d_565_){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__0));
v___x_567_ = l_Lasm_JS_readField___redArg(v___x_562_, v_d_565_, v___x_566_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
lean_dec_ref(v___x_564_);
lean_dec_ref(v___x_563_);
v_a_568_ = lean_ctor_get(v___x_567_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v___x_567_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_567_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
else
{
lean_object* v_a_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_a_576_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_576_);
lean_dec_ref_known(v___x_567_, 1);
v___x_577_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__1));
v___x_578_ = l_Lasm_JS_readField___redArg(v___x_563_, v_d_565_, v___x_577_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_dec(v_a_576_);
lean_dec_ref(v___x_564_);
v_a_579_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_578_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_578_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
else
{
lean_object* v_a_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_a_587_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v___x_578_, 1);
v___x_588_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__2));
v___x_589_ = l_Lasm_JS_readField___redArg(v___x_564_, v_d_565_, v___x_588_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
lean_dec(v_a_587_);
lean_dec(v_a_576_);
v_a_590_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_589_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_589_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_608_; 
v_a_598_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_608_ == 0)
{
v___x_600_ = v___x_589_;
v_isShared_601_ = v_isSharedCheck_608_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_589_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_608_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; uint8_t v___x_603_; double v___x_604_; lean_object* v___x_606_; 
v___x_602_ = lean_alloc_ctor(0, 1, 9);
lean_ctor_set(v___x_602_, 0, v_a_598_);
v___x_603_ = lean_unbox(v_a_576_);
lean_dec(v_a_576_);
lean_ctor_set_uint8(v___x_602_, sizeof(void*)*1 + 8, v___x_603_);
v___x_604_ = lean_unbox_float(v_a_587_);
lean_dec(v_a_587_);
lean_ctor_set_float(v___x_602_, sizeof(void*)*1, v___x_604_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_602_);
v___x_606_ = v___x_600_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_602_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___boxed(lean_object* v___x_609_, lean_object* v___x_610_, lean_object* v___x_611_, lean_object* v_d_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0(v___x_609_, v___x_610_, v___x_611_, v_d_612_);
lean_dec(v_d_612_);
return v_res_613_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSCommandStatus___closed__0(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = l_Lasm_JS_Deno_instFromJSSignal;
v___x_615_ = l_Lasm_JS_instFromJSOption___redArg(v___x_614_);
return v___x_615_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSCommandStatus___closed__1(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___f_619_; 
v___x_616_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSCommandStatus___closed__0, &l_Lasm_JS_Deno_instFromJSCommandStatus___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSCommandStatus___closed__0);
v___x_617_ = l_Lasm_JS_instFromJSFloat;
v___x_618_ = l_Lasm_JS_instFromJSBool;
v___f_619_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___boxed), 4, 3);
lean_closure_set(v___f_619_, 0, v___x_618_);
lean_closure_set(v___f_619_, 1, v___x_617_);
lean_closure_set(v___f_619_, 2, v___x_616_);
return v___f_619_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSCommandStatus___closed__3(void){
_start:
{
uint8_t v___x_621_; lean_object* v___x_622_; lean_object* v___f_623_; lean_object* v___x_624_; 
v___x_621_ = 0;
v___x_622_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___closed__2));
v___f_623_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSCommandStatus___closed__1, &l_Lasm_JS_Deno_instFromJSCommandStatus___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSCommandStatus___closed__1);
v___x_624_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_624_, 0, v___f_623_);
lean_ctor_set(v___x_624_, 1, v___x_622_);
lean_ctor_set_uint8(v___x_624_, sizeof(void*)*2, v___x_621_);
return v___x_624_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSCommandStatus(void){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSCommandStatus___closed__3, &l_Lasm_JS_Deno_instFromJSCommandStatus___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSCommandStatus___closed__3);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0(lean_object* v___x_628_, lean_object* v___x_629_, lean_object* v___x_630_, lean_object* v___x_631_, lean_object* v_d_632_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__0));
v___x_634_ = l_Lasm_JS_readField___redArg(v___x_628_, v_d_632_, v___x_633_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
lean_dec_ref(v___x_631_);
lean_dec_ref(v___x_630_);
lean_dec_ref(v___x_629_);
v_a_635_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_634_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_634_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v_a_643_ = lean_ctor_get(v___x_634_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_634_, 1);
v___x_644_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__1));
v___x_645_ = l_Lasm_JS_readField___redArg(v___x_629_, v_d_632_, v___x_644_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec(v_a_643_);
lean_dec_ref(v___x_631_);
lean_dec_ref(v___x_630_);
v_a_646_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_645_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_645_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_a_654_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v___x_645_, 1);
v___x_655_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__2));
v___x_656_ = l_Lasm_JS_readField___redArg(v___x_630_, v_d_632_, v___x_655_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
lean_dec(v_a_654_);
lean_dec(v_a_643_);
lean_dec_ref(v___x_631_);
v_a_657_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_656_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_656_);
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
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_a_665_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_656_, 1);
v___x_666_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__0));
lean_inc_ref(v___x_631_);
v___x_667_ = l_Lasm_JS_readField___redArg(v___x_631_, v_d_632_, v___x_666_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec(v_a_665_);
lean_dec(v_a_654_);
lean_dec(v_a_643_);
lean_dec_ref(v___x_631_);
v_a_668_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_667_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_667_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v_a_676_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_a_676_);
lean_dec_ref_known(v___x_667_, 1);
v___x_677_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__1));
v___x_678_ = l_Lasm_JS_readField___redArg(v___x_631_, v_d_632_, v___x_677_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
lean_dec(v_a_676_);
lean_dec(v_a_665_);
lean_dec(v_a_654_);
lean_dec(v_a_643_);
v_a_679_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_678_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_678_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_679_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_697_; 
v_a_687_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_697_ == 0)
{
v___x_689_ = v___x_678_;
v_isShared_690_ = v_isSharedCheck_697_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_678_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_697_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; uint8_t v___x_692_; double v___x_693_; lean_object* v___x_695_; 
v___x_691_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_691_, 0, v_a_665_);
lean_ctor_set(v___x_691_, 1, v_a_676_);
lean_ctor_set(v___x_691_, 2, v_a_687_);
v___x_692_ = lean_unbox(v_a_643_);
lean_dec(v_a_643_);
lean_ctor_set_uint8(v___x_691_, sizeof(void*)*3 + 8, v___x_692_);
v___x_693_ = lean_unbox_float(v_a_654_);
lean_dec(v_a_654_);
lean_ctor_set_float(v___x_691_, sizeof(void*)*3, v___x_693_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v___x_691_);
v___x_695_ = v___x_689_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_691_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___boxed(lean_object* v___x_698_, lean_object* v___x_699_, lean_object* v___x_700_, lean_object* v___x_701_, lean_object* v_d_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0(v___x_698_, v___x_699_, v___x_700_, v___x_701_, v_d_702_);
lean_dec(v_d_702_);
return v_res_703_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSCommandOutput___closed__0(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___f_708_; 
v___x_704_ = l_Lasm_JS_instFromJSByteArray;
v___x_705_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSCommandStatus___closed__0, &l_Lasm_JS_Deno_instFromJSCommandStatus___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSCommandStatus___closed__0);
v___x_706_ = l_Lasm_JS_instFromJSFloat;
v___x_707_ = l_Lasm_JS_instFromJSBool;
v___f_708_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___boxed), 5, 4);
lean_closure_set(v___f_708_, 0, v___x_707_);
lean_closure_set(v___f_708_, 1, v___x_706_);
lean_closure_set(v___f_708_, 2, v___x_705_);
lean_closure_set(v___f_708_, 3, v___x_704_);
return v___f_708_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSCommandOutput___closed__2(void){
_start:
{
uint8_t v___x_710_; lean_object* v___x_711_; lean_object* v___f_712_; lean_object* v___x_713_; 
v___x_710_ = 0;
v___x_711_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___closed__1));
v___f_712_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSCommandOutput___closed__0, &l_Lasm_JS_Deno_instFromJSCommandOutput___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSCommandOutput___closed__0);
v___x_713_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_713_, 0, v___f_712_);
lean_ctor_set(v___x_713_, 1, v___x_711_);
lean_ctor_set_uint8(v___x_713_, sizeof(void*)*2, v___x_710_);
return v___x_713_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSCommandOutput(void){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSCommandOutput___closed__2, &l_Lasm_JS_Deno_instFromJSCommandOutput___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSCommandOutput___closed__2);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorIdx(lean_object* v_x_715_){
_start:
{
if (lean_obj_tag(v_x_715_) == 0)
{
lean_object* v___x_716_; 
v___x_716_ = lean_unsigned_to_nat(0u);
return v___x_716_;
}
else
{
lean_object* v___x_717_; 
v___x_717_ = lean_unsigned_to_nat(1u);
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorIdx___boxed(lean_object* v_x_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lasm_JS_Deno_SignalOrDouble_ctorIdx(v_x_718_);
lean_dec_ref(v_x_718_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg(lean_object* v_t_720_, lean_object* v_k_721_){
_start:
{
if (lean_obj_tag(v_t_720_) == 0)
{
uint8_t v_value_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v_value_722_ = lean_ctor_get_uint8(v_t_720_, 0);
v___x_723_ = lean_box(v_value_722_);
v___x_724_ = lean_apply_1(v_k_721_, v___x_723_);
return v___x_724_;
}
else
{
double v_value_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v_value_725_ = lean_ctor_get_float(v_t_720_, 0);
v___x_726_ = lean_box_float(v_value_725_);
v___x_727_ = lean_apply_1(v_k_721_, v___x_726_);
return v___x_727_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg___boxed(lean_object* v_t_728_, lean_object* v_k_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg(v_t_728_, v_k_729_);
lean_dec_ref(v_t_728_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorElim(lean_object* v_motive_731_, lean_object* v_ctorIdx_732_, lean_object* v_t_733_, lean_object* v_h_734_, lean_object* v_k_735_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg(v_t_733_, v_k_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_ctorElim___boxed(lean_object* v_motive_737_, lean_object* v_ctorIdx_738_, lean_object* v_t_739_, lean_object* v_h_740_, lean_object* v_k_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lasm_JS_Deno_SignalOrDouble_ctorElim(v_motive_737_, v_ctorIdx_738_, v_t_739_, v_h_740_, v_k_741_);
lean_dec_ref(v_t_739_);
lean_dec(v_ctorIdx_738_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_signal_elim___redArg(lean_object* v_t_743_, lean_object* v_signal_744_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg(v_t_743_, v_signal_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_signal_elim___redArg___boxed(lean_object* v_t_746_, lean_object* v_signal_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lasm_JS_Deno_SignalOrDouble_signal_elim___redArg(v_t_746_, v_signal_747_);
lean_dec_ref(v_t_746_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_signal_elim(lean_object* v_motive_749_, lean_object* v_t_750_, lean_object* v_h_751_, lean_object* v_signal_752_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg(v_t_750_, v_signal_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_signal_elim___boxed(lean_object* v_motive_754_, lean_object* v_t_755_, lean_object* v_h_756_, lean_object* v_signal_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lasm_JS_Deno_SignalOrDouble_signal_elim(v_motive_754_, v_t_755_, v_h_756_, v_signal_757_);
lean_dec_ref(v_t_755_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_double_elim___redArg(lean_object* v_t_759_, lean_object* v_double_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg(v_t_759_, v_double_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_double_elim___redArg___boxed(lean_object* v_t_762_, lean_object* v_double_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lasm_JS_Deno_SignalOrDouble_double_elim___redArg(v_t_762_, v_double_763_);
lean_dec_ref(v_t_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_double_elim(lean_object* v_motive_765_, lean_object* v_t_766_, lean_object* v_h_767_, lean_object* v_double_768_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_Lasm_JS_Deno_SignalOrDouble_ctorElim___redArg(v_t_766_, v_double_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SignalOrDouble_double_elim___boxed(lean_object* v_motive_770_, lean_object* v_t_771_, lean_object* v_h_772_, lean_object* v_double_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lasm_JS_Deno_SignalOrDouble_double_elim(v_motive_770_, v_t_771_, v_h_772_, v_double_773_);
lean_dec_ref(v_t_771_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0(lean_object* v_x_883_){
_start:
{
if (lean_obj_tag(v_x_883_) == 0)
{
uint8_t v_value_884_; 
v_value_884_ = lean_ctor_get_uint8(v_x_883_, 0);
lean_dec_ref_known(v_x_883_, 0);
switch(v_value_884_)
{
case 0:
{
lean_object* v___x_885_; 
v___x_885_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__1));
return v___x_885_;
}
case 1:
{
lean_object* v___x_886_; 
v___x_886_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__3));
return v___x_886_;
}
case 2:
{
lean_object* v___x_887_; 
v___x_887_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__5));
return v___x_887_;
}
case 3:
{
lean_object* v___x_888_; 
v___x_888_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__7));
return v___x_888_;
}
case 4:
{
lean_object* v___x_889_; 
v___x_889_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__9));
return v___x_889_;
}
case 5:
{
lean_object* v___x_890_; 
v___x_890_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__11));
return v___x_890_;
}
case 6:
{
lean_object* v___x_891_; 
v___x_891_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__13));
return v___x_891_;
}
case 7:
{
lean_object* v___x_892_; 
v___x_892_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__15));
return v___x_892_;
}
case 8:
{
lean_object* v___x_893_; 
v___x_893_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__17));
return v___x_893_;
}
case 9:
{
lean_object* v___x_894_; 
v___x_894_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__19));
return v___x_894_;
}
case 10:
{
lean_object* v___x_895_; 
v___x_895_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__21));
return v___x_895_;
}
case 11:
{
lean_object* v___x_896_; 
v___x_896_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__23));
return v___x_896_;
}
case 12:
{
lean_object* v___x_897_; 
v___x_897_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__25));
return v___x_897_;
}
case 13:
{
lean_object* v___x_898_; 
v___x_898_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__27));
return v___x_898_;
}
case 14:
{
lean_object* v___x_899_; 
v___x_899_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__29));
return v___x_899_;
}
case 15:
{
lean_object* v___x_900_; 
v___x_900_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__31));
return v___x_900_;
}
case 16:
{
lean_object* v___x_901_; 
v___x_901_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__33));
return v___x_901_;
}
case 17:
{
lean_object* v___x_902_; 
v___x_902_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__35));
return v___x_902_;
}
case 18:
{
lean_object* v___x_903_; 
v___x_903_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__37));
return v___x_903_;
}
case 19:
{
lean_object* v___x_904_; 
v___x_904_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__39));
return v___x_904_;
}
case 20:
{
lean_object* v___x_905_; 
v___x_905_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__41));
return v___x_905_;
}
case 21:
{
lean_object* v___x_906_; 
v___x_906_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__43));
return v___x_906_;
}
case 22:
{
lean_object* v___x_907_; 
v___x_907_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__45));
return v___x_907_;
}
case 23:
{
lean_object* v___x_908_; 
v___x_908_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__47));
return v___x_908_;
}
case 24:
{
lean_object* v___x_909_; 
v___x_909_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__49));
return v___x_909_;
}
case 25:
{
lean_object* v___x_910_; 
v___x_910_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__51));
return v___x_910_;
}
case 26:
{
lean_object* v___x_911_; 
v___x_911_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__53));
return v___x_911_;
}
case 27:
{
lean_object* v___x_912_; 
v___x_912_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__55));
return v___x_912_;
}
case 28:
{
lean_object* v___x_913_; 
v___x_913_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__57));
return v___x_913_;
}
case 29:
{
lean_object* v___x_914_; 
v___x_914_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__59));
return v___x_914_;
}
case 30:
{
lean_object* v___x_915_; 
v___x_915_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__61));
return v___x_915_;
}
case 31:
{
lean_object* v___x_916_; 
v___x_916_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__63));
return v___x_916_;
}
case 32:
{
lean_object* v___x_917_; 
v___x_917_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__65));
return v___x_917_;
}
case 33:
{
lean_object* v___x_918_; 
v___x_918_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__67));
return v___x_918_;
}
case 34:
{
lean_object* v___x_919_; 
v___x_919_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__69));
return v___x_919_;
}
default: 
{
lean_object* v___x_920_; 
v___x_920_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__71));
return v___x_920_;
}
}
}
else
{
double v_value_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
v_value_921_ = lean_ctor_get_float(v_x_883_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v_x_883_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v_x_883_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_dec(v_x_883_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
lean_ctor_set_tag(v___x_923_, 3);
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_927_, 0, v_value_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___lam__0(uint8_t v_value_931_){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_932_, 0, v_value_931_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___lam__0___boxed(lean_object* v_value_933_){
_start:
{
uint8_t v_value_boxed_934_; lean_object* v_res_935_; 
v_value_boxed_934_ = lean_unbox(v_value_933_);
v_res_935_ = l_Lasm_JS_Deno_instCoeSignalSignalOrDouble___lam__0(v_value_boxed_934_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___lam__0(double v_value_938_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_939_, 0, v_value_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___lam__0___boxed(lean_object* v_value_940_){
_start:
{
double v_value_boxed_941_; lean_object* v_res_942_; 
v_value_boxed_941_ = lean_unbox_float(v_value_940_);
lean_dec_ref(v_value_940_);
v_res_942_ = l_Lasm_JS_Deno_instCoeFloatSignalOrDouble___lam__0(v_value_boxed_941_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCommandOptions___lam__0(lean_object* v___x_954_, lean_object* v___f_955_, lean_object* v___f_956_, lean_object* v___x_957_, lean_object* v___f_958_, lean_object* v___f_959_, lean_object* v___f_960_, lean_object* v___f_961_, lean_object* v___f_962_, lean_object* v_d_963_){
_start:
{
lean_object* v_args_964_; lean_object* v_cwd_965_; lean_object* v_clearEnv_966_; lean_object* v_env_967_; lean_object* v_uid_968_; lean_object* v_gid_969_; lean_object* v_signal_970_; lean_object* v_stdin_971_; lean_object* v_stdout_972_; lean_object* v_stderr_973_; lean_object* v_windowsRawArguments_974_; lean_object* v_detached_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v_args_964_ = lean_ctor_get(v_d_963_, 0);
lean_inc(v_args_964_);
v_cwd_965_ = lean_ctor_get(v_d_963_, 1);
lean_inc(v_cwd_965_);
v_clearEnv_966_ = lean_ctor_get(v_d_963_, 2);
lean_inc(v_clearEnv_966_);
v_env_967_ = lean_ctor_get(v_d_963_, 3);
lean_inc(v_env_967_);
v_uid_968_ = lean_ctor_get(v_d_963_, 4);
lean_inc(v_uid_968_);
v_gid_969_ = lean_ctor_get(v_d_963_, 5);
lean_inc(v_gid_969_);
v_signal_970_ = lean_ctor_get(v_d_963_, 6);
lean_inc(v_signal_970_);
v_stdin_971_ = lean_ctor_get(v_d_963_, 7);
lean_inc(v_stdin_971_);
v_stdout_972_ = lean_ctor_get(v_d_963_, 8);
lean_inc(v_stdout_972_);
v_stderr_973_ = lean_ctor_get(v_d_963_, 9);
lean_inc(v_stderr_973_);
v_windowsRawArguments_974_ = lean_ctor_get(v_d_963_, 10);
lean_inc(v_windowsRawArguments_974_);
v_detached_975_ = lean_ctor_get(v_d_963_, 11);
lean_inc(v_detached_975_);
lean_dec_ref(v_d_963_);
v___x_976_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__0));
v___x_977_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_954_, v_args_964_);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__1));
v___x_980_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_955_, v_cwd_965_);
v___x_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_979_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__2));
lean_inc_ref_n(v___f_956_, 2);
v___x_983_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_956_, v_clearEnv_966_);
v___x_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_982_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__3));
v___x_986_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_957_, v_env_967_);
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_985_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__4));
lean_inc_ref(v___f_958_);
v___x_989_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_958_, v_uid_968_);
v___x_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__5));
v___x_992_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_958_, v_gid_969_);
v___x_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_991_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__2));
v___x_995_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_959_, v_signal_970_);
v___x_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__6));
v___x_998_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_960_, v_stdin_971_);
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__0));
v___x_1001_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_961_, v_stdout_972_);
v___x_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1000_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__1));
v___x_1004_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_962_, v_stderr_973_);
v___x_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1003_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
v___x_1006_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__7));
v___x_1007_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_956_, v_windowsRawArguments_974_);
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1006_);
lean_ctor_set(v___x_1008_, 1, v___x_1007_);
v___x_1009_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__8));
v___x_1010_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_956_, v_detached_975_);
v___x_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = lean_unsigned_to_nat(12u);
v___x_1013_ = lean_mk_empty_array_with_capacity(v___x_1012_);
v___x_1014_ = lean_array_push(v___x_1013_, v___x_978_);
v___x_1015_ = lean_array_push(v___x_1014_, v___x_981_);
v___x_1016_ = lean_array_push(v___x_1015_, v___x_984_);
v___x_1017_ = lean_array_push(v___x_1016_, v___x_987_);
v___x_1018_ = lean_array_push(v___x_1017_, v___x_990_);
v___x_1019_ = lean_array_push(v___x_1018_, v___x_993_);
v___x_1020_ = lean_array_push(v___x_1019_, v___x_996_);
v___x_1021_ = lean_array_push(v___x_1020_, v___x_999_);
v___x_1022_ = lean_array_push(v___x_1021_, v___x_1002_);
v___x_1023_ = lean_array_push(v___x_1022_, v___x_1005_);
v___x_1024_ = lean_array_push(v___x_1023_, v___x_1008_);
v___x_1025_ = lean_array_push(v___x_1024_, v___x_1011_);
v___x_1026_ = l_Lasm_JS_Web_Support_fields(v___x_1025_);
lean_dec_ref(v___x_1025_);
return v___x_1026_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCommandOptions___closed__1(void){
_start:
{
lean_object* v___f_1028_; lean_object* v___x_1029_; 
v___f_1028_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___closed__0));
v___x_1029_ = l_Lasm_JS_instToJSArray___redArg(v___f_1028_);
return v___x_1029_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCommandOptions___closed__4(void){
_start:
{
lean_object* v___f_1032_; lean_object* v___x_1033_; 
v___f_1032_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___closed__0));
v___x_1033_ = l_Lasm_JS_Web_instToJSRecord___redArg(v___f_1032_);
return v___x_1033_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCommandOptions___closed__7(void){
_start:
{
lean_object* v___f_1036_; lean_object* v___f_1037_; lean_object* v___f_1038_; lean_object* v___f_1039_; lean_object* v___f_1040_; lean_object* v___x_1041_; lean_object* v___f_1042_; lean_object* v___f_1043_; lean_object* v___x_1044_; lean_object* v___f_1045_; 
v___f_1036_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStderr___closed__0));
v___f_1037_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdout___closed__0));
v___f_1038_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___closed__0));
v___f_1039_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___closed__6));
v___f_1040_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___closed__5));
v___x_1041_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSCommandOptions___closed__4, &l_Lasm_JS_Deno_instToJSCommandOptions___closed__4_once, _init_l_Lasm_JS_Deno_instToJSCommandOptions___closed__4);
v___f_1042_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___closed__3));
v___f_1043_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___closed__2));
v___x_1044_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSCommandOptions___closed__1, &l_Lasm_JS_Deno_instToJSCommandOptions___closed__1_once, _init_l_Lasm_JS_Deno_instToJSCommandOptions___closed__1);
v___f_1045_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0), 10, 9);
lean_closure_set(v___f_1045_, 0, v___x_1044_);
lean_closure_set(v___f_1045_, 1, v___f_1043_);
lean_closure_set(v___f_1045_, 2, v___f_1042_);
lean_closure_set(v___f_1045_, 3, v___x_1041_);
lean_closure_set(v___f_1045_, 4, v___f_1040_);
lean_closure_set(v___f_1045_, 5, v___f_1039_);
lean_closure_set(v___f_1045_, 6, v___f_1038_);
lean_closure_set(v___f_1045_, 7, v___f_1037_);
lean_closure_set(v___f_1045_, 8, v___f_1036_);
return v___f_1045_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCommandOptions(void){
_start:
{
lean_object* v___f_1046_; 
v___f_1046_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSCommandOptions___closed__7, &l_Lasm_JS_Deno_instToJSCommandOptions___closed__7_once, _init_l_Lasm_JS_Deno_instToJSCommandOptions___closed__7);
return v___f_1046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___lam__0(lean_object* v_x_1047_){
_start:
{
lean_object* v_val_1050_; 
if (lean_obj_tag(v_x_1047_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1060_; 
v_a_1052_ = lean_ctor_get(v_x_1047_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_x_1047_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1054_ = v_x_1047_;
v_isShared_1055_ = v_isSharedCheck_1060_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v_x_1047_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1060_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_a_1052_);
v___x_1057_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
lean_object* v___x_1058_; 
v___x_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
return v___x_1058_;
}
}
}
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1074_; 
v_a_1061_ = lean_ctor_get(v_x_1047_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v_x_1047_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1063_ = v_x_1047_;
v_isShared_1064_ = v_isSharedCheck_1074_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v_x_1047_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1074_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1065_; 
v___x_1065_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_1061_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1068_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v_a_1066_);
v___x_1068_ = v___x_1063_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1066_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
v_val_1050_ = v___x_1068_;
goto v___jp_1049_;
}
}
else
{
lean_object* v_a_1070_; lean_object* v___x_1072_; 
v_a_1070_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1070_);
lean_dec_ref_known(v___x_1065_, 1);
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 0);
lean_ctor_set(v___x_1063_, 0, v_a_1070_);
v___x_1072_ = v___x_1063_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1070_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
v_val_1050_ = v___x_1072_;
goto v___jp_1049_;
}
}
}
}
v___jp_1049_:
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1051_, 0, v_val_1050_);
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___lam__0___boxed(lean_object* v_x_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___lam__0(v_x_1075_);
return v_res_1077_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__2));
v___x_1083_ = l_Lasm_JS_Web_Support_args(v___x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer(lean_object* v_self_1084_){
_start:
{
lean_object* v___f_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___f_1086_ = ((lean_object*)(l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__0));
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__1));
v___x_1088_ = lean_unsigned_to_nat(0u);
v___x_1089_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_1090_ = 0;
v___x_1091_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_1084_, v___x_1087_, v___x_1089_);
v___x_1092_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1088_, v___x_1090_, v___x_1091_, v___f_1086_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___boxed(lean_object* v_self_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer(v_self_1093_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_bytes(lean_object* v_self_1097_){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = ((lean_object*)(l_Lasm_JS_Deno_SubprocessReadableStream_bytes___closed__0));
v___x_1100_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_1101_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_self_1097_, v___x_1099_, v___x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_bytes___boxed(lean_object* v_self_1102_, lean_object* v_a_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lasm_JS_Deno_SubprocessReadableStream_bytes(v_self_1102_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__4(lean_object* v_failurePrefix_1105_, lean_object* v_x_1106_){
_start:
{
if (lean_obj_tag(v_x_1106_) == 0)
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1119_; 
v_a_1108_ = lean_ctor_get(v_x_1106_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_x_1106_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1110_ = v_x_1106_;
v_isShared_1111_ = v_isSharedCheck_1119_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v_x_1106_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1119_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1112_ = lean_io_error_to_string(v_a_1108_);
v___x_1113_ = lean_string_append(v_failurePrefix_1105_, v___x_1112_);
lean_dec_ref(v___x_1112_);
v___x_1114_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 0, v___x_1114_);
v___x_1116_ = v___x_1110_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
return v___x_1117_;
}
}
}
else
{
lean_object* v___x_1120_; 
lean_dec_ref(v_failurePrefix_1105_);
v___x_1120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1120_, 0, v_x_1106_);
return v___x_1120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__4___boxed(lean_object* v_failurePrefix_1121_, lean_object* v_x_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__4(v_failurePrefix_1121_, v_x_1122_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__1(lean_object* v___f_1125_, lean_object* v_bytes_1126_){
_start:
{
lean_object* v___x_1128_; uint8_t v___x_1129_; lean_object* v_val_1131_; lean_object* v___x_1134_; 
v___x_1128_ = lean_unsigned_to_nat(0u);
v___x_1129_ = 0;
v___x_1134_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1126_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1134_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1134_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
lean_ctor_set_tag(v___x_1137_, 1);
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
v_val_1131_ = v___x_1140_;
goto v___jp_1130_;
}
}
}
else
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_a_1143_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1134_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1134_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
lean_ctor_set_tag(v___x_1145_, 0);
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
v_val_1131_ = v___x_1148_;
goto v___jp_1130_;
}
}
}
v___jp_1130_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1132_, 0, v_val_1131_);
v___x_1133_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1128_, v___x_1129_, v___x_1132_, v___f_1125_);
return v___x_1133_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__1___boxed(lean_object* v___f_1151_, lean_object* v_bytes_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__1(v___f_1151_, v_bytes_1152_);
lean_dec_ref(v_bytes_1152_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__0(lean_object* v_x_1155_){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1157_, 0, v_x_1155_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v_x_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__0(v_x_1158_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__2(lean_object* v___f_1161_, lean_object* v_x_1162_){
_start:
{
if (lean_obj_tag(v_x_1162_) == 0)
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1172_; 
lean_dec_ref(v___f_1161_);
v_a_1164_ = lean_ctor_get(v_x_1162_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_x_1162_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1166_ = v_x_1162_;
v_isShared_1167_ = v_isSharedCheck_1172_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v_x_1162_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1172_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1169_);
return v___x_1170_;
}
}
}
else
{
lean_object* v_a_1173_; lean_object* v___x_1174_; 
v_a_1173_ = lean_ctor_get(v_x_1162_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v_x_1162_, 1);
v___x_1174_ = lean_apply_2(v___f_1161_, v_a_1173_, lean_box(0));
return v___x_1174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__2___boxed(lean_object* v___f_1175_, lean_object* v_x_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__2(v___f_1175_, v_x_1176_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__8(lean_object* v___f_1179_, lean_object* v_x_1180_){
_start:
{
if (lean_obj_tag(v_x_1180_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1190_; 
lean_dec_ref(v___f_1179_);
v_a_1182_ = lean_ctor_get(v_x_1180_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_x_1180_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1184_ = v_x_1180_;
v_isShared_1185_ = v_isSharedCheck_1190_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v_x_1180_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1190_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
return v___x_1188_;
}
}
}
else
{
lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1202_; 
v_isSharedCheck_1202_ = !lean_is_exclusive(v_x_1180_);
if (v_isSharedCheck_1202_ == 0)
{
lean_object* v_unused_1203_; 
v_unused_1203_ = lean_ctor_get(v_x_1180_, 0);
lean_dec(v_unused_1203_);
v___x_1192_ = v_x_1180_;
v_isShared_1193_ = v_isSharedCheck_1202_;
goto v_resetjp_1191_;
}
else
{
lean_dec(v_x_1180_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1202_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; uint8_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1194_ = lean_unsigned_to_nat(0u);
v___x_1195_ = 0;
v___x_1196_ = lean_io_promise_new();
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 0, v___x_1196_);
v___x_1198_ = v___x_1192_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
v___x_1200_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1194_, v___x_1195_, v___x_1199_, v___f_1179_);
return v___x_1200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__8___boxed(lean_object* v___f_1204_, lean_object* v_x_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__8(v___f_1204_, v_x_1205_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__7(lean_object* v___f_1208_, lean_object* v_a_1209_, uint32_t v_op_1210_, uint64_t v_flags_1211_, lean_object* v_payload_1212_, lean_object* v_x_1213_){
_start:
{
if (lean_obj_tag(v_x_1213_) == 0)
{
lean_object* v___x_1215_; 
lean_dec_ref(v___f_1208_);
v___x_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1215_, 0, v_x_1213_);
return v___x_1215_;
}
else
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1236_; 
v_a_1216_ = lean_ctor_get(v_x_1213_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v_x_1213_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1218_ = v_x_1213_;
v_isShared_1219_ = v_isSharedCheck_1236_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v_x_1213_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1236_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
uint32_t v___x_1220_; lean_object* v___x_1221_; uint8_t v___x_1222_; lean_object* v_val_1224_; lean_object* v___x_1227_; 
v___x_1220_ = 0;
v___x_1221_ = lean_unsigned_to_nat(0u);
v___x_1222_ = 0;
v___x_1227_ = lasm_js_call_into(v_a_1209_, v_op_1210_, v___x_1220_, v_flags_1211_, v_a_1216_, v_payload_1212_);
lean_dec(v_a_1216_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v_a_1228_; lean_object* v___x_1230_; 
v_a_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_a_1228_);
lean_dec_ref_known(v___x_1227_, 1);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 0, v_a_1228_);
v___x_1230_ = v___x_1218_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1228_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
v_val_1224_ = v___x_1230_;
goto v___jp_1223_;
}
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; 
v_a_1232_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_a_1232_);
lean_dec_ref_known(v___x_1227_, 1);
if (v_isShared_1219_ == 0)
{
lean_ctor_set_tag(v___x_1218_, 0);
lean_ctor_set(v___x_1218_, 0, v_a_1232_);
v___x_1234_ = v___x_1218_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
v_val_1224_ = v___x_1234_;
goto v___jp_1223_;
}
}
v___jp_1223_:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1225_, 0, v_val_1224_);
v___x_1226_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1221_, v___x_1222_, v___x_1225_, v___f_1208_);
return v___x_1226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__7___boxed(lean_object* v___f_1237_, lean_object* v_a_1238_, lean_object* v_op_1239_, lean_object* v_flags_1240_, lean_object* v_payload_1241_, lean_object* v_x_1242_, lean_object* v___y_1243_){
_start:
{
uint32_t v_op_boxed_1244_; uint64_t v_flags_boxed_1245_; lean_object* v_res_1246_; 
v_op_boxed_1244_ = lean_unbox_uint32(v_op_1239_);
lean_dec(v_op_1239_);
v_flags_boxed_1245_ = lean_unbox_uint64(v_flags_1240_);
lean_dec_ref(v_flags_1240_);
v_res_1246_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__7(v___f_1237_, v_a_1238_, v_op_boxed_1244_, v_flags_boxed_1245_, v_payload_1241_, v_x_1242_);
lean_dec(v_payload_1241_);
lean_dec(v_a_1238_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__5(lean_object* v___x_1247_, uint8_t v___x_1248_, lean_object* v___f_1249_, lean_object* v_a_1250_, uint32_t v_op_1251_, uint64_t v_flags_1252_, lean_object* v_payload_1253_, lean_object* v_x_1254_){
_start:
{
lean_object* v_val_1257_; 
if (lean_obj_tag(v_x_1254_) == 0)
{
lean_object* v___x_1260_; 
lean_dec_ref(v___f_1249_);
lean_dec(v___x_1247_);
v___x_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1260_, 0, v_x_1254_);
return v___x_1260_;
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1275_; 
v_a_1261_ = lean_ctor_get(v_x_1254_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v_x_1254_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1263_ = v_x_1254_;
v_isShared_1264_ = v_isSharedCheck_1275_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v_x_1254_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1275_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
uint32_t v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = 0;
v___x_1266_ = lasm_js_call_into(v_a_1250_, v_op_1251_, v___x_1265_, v_flags_1252_, v_a_1261_, v_payload_1253_);
lean_dec(v_a_1261_);
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_object* v_a_1267_; lean_object* v___x_1269_; 
v_a_1267_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1267_);
lean_dec_ref_known(v___x_1266_, 1);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v_a_1267_);
v___x_1269_ = v___x_1263_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
v_val_1257_ = v___x_1269_;
goto v___jp_1256_;
}
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; 
v_a_1271_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1271_);
lean_dec_ref_known(v___x_1266_, 1);
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 0);
lean_ctor_set(v___x_1263_, 0, v_a_1271_);
v___x_1273_ = v___x_1263_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
v_val_1257_ = v___x_1273_;
goto v___jp_1256_;
}
}
}
}
v___jp_1256_:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v_val_1257_);
v___x_1259_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1247_, v___x_1248_, v___x_1258_, v___f_1249_);
return v___x_1259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__5___boxed(lean_object* v___x_1276_, lean_object* v___x_1277_, lean_object* v___f_1278_, lean_object* v_a_1279_, lean_object* v_op_1280_, lean_object* v_flags_1281_, lean_object* v_payload_1282_, lean_object* v_x_1283_, lean_object* v___y_1284_){
_start:
{
uint8_t v___x_966__boxed_1285_; uint32_t v_op_boxed_1286_; uint64_t v_flags_boxed_1287_; lean_object* v_res_1288_; 
v___x_966__boxed_1285_ = lean_unbox(v___x_1277_);
v_op_boxed_1286_ = lean_unbox_uint32(v_op_1280_);
lean_dec(v_op_1280_);
v_flags_boxed_1287_ = lean_unbox_uint64(v_flags_1281_);
lean_dec_ref(v_flags_1281_);
v_res_1288_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__5(v___x_1276_, v___x_966__boxed_1285_, v___f_1278_, v_a_1279_, v_op_boxed_1286_, v_flags_boxed_1287_, v_payload_1282_, v_x_1283_);
lean_dec(v_payload_1282_);
lean_dec(v_a_1279_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__3(lean_object* v_a_1289_, lean_object* v_x_1290_){
_start:
{
if (lean_obj_tag(v_x_1290_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1300_; 
v_a_1292_ = lean_ctor_get(v_x_1290_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_x_1290_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1294_ = v_x_1290_;
v_isShared_1295_ = v_isSharedCheck_1300_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v_x_1290_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1300_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1292_);
v___x_1297_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
lean_object* v___x_1298_; 
v___x_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
return v___x_1298_;
}
}
}
else
{
lean_object* v___x_1301_; 
lean_dec_ref_known(v_x_1290_, 1);
v___x_1301_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1289_);
return v___x_1301_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__3___boxed(lean_object* v_a_1302_, lean_object* v_x_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__3(v_a_1302_, v_x_1303_);
lean_dec(v_a_1302_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__6(lean_object* v_failurePrefix_1306_, uint32_t v_op_1307_, uint64_t v_flags_1308_, lean_object* v_payload_1309_, lean_object* v___f_1310_, lean_object* v___f_1311_, lean_object* v___f_1312_, lean_object* v_x_1313_){
_start:
{
if (lean_obj_tag(v_x_1313_) == 0)
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1323_; 
lean_dec_ref(v___f_1312_);
lean_dec_ref(v___f_1311_);
lean_dec_ref(v___f_1310_);
lean_dec(v_payload_1309_);
v_a_1315_ = lean_ctor_get(v_x_1313_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v_x_1313_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1317_ = v_x_1313_;
v_isShared_1318_ = v_isSharedCheck_1323_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v_x_1313_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1323_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1315_);
v___x_1320_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
}
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1370_; 
v_a_1324_ = lean_ctor_get(v_x_1313_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_x_1313_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1326_ = v_x_1313_;
v_isShared_1327_ = v_isSharedCheck_1370_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v_x_1313_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1370_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; 
v___x_1328_ = lean_string_utf8_byte_size(v_failurePrefix_1306_);
v___x_1329_ = lean_unsigned_to_nat(0u);
v___x_1330_ = lean_nat_dec_eq(v___x_1328_, v___x_1329_);
if (v___x_1330_ == 0)
{
lean_object* v___f_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___f_1335_; lean_object* v_val_1337_; lean_object* v___x_1342_; 
lean_dec_ref(v___f_1312_);
lean_inc(v_a_1324_);
v___f_1331_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1331_, 0, v_a_1324_);
v___x_1332_ = lean_box(v___x_1330_);
v___x_1333_ = lean_box_uint32(v_op_1307_);
v___x_1334_ = lean_box_uint64(v_flags_1308_);
lean_inc(v_payload_1309_);
v___f_1335_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1335_, 0, v___x_1329_);
lean_closure_set(v___f_1335_, 1, v___x_1332_);
lean_closure_set(v___f_1335_, 2, v___f_1331_);
lean_closure_set(v___f_1335_, 3, v_a_1324_);
lean_closure_set(v___f_1335_, 4, v___x_1333_);
lean_closure_set(v___f_1335_, 5, v___x_1334_);
lean_closure_set(v___f_1335_, 6, v_payload_1309_);
v___x_1342_ = l_Lasm_JS_Wire_encodeIO(v_payload_1309_);
lean_dec(v_payload_1309_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1345_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
lean_inc(v_a_1343_);
lean_dec_ref_known(v___x_1342_, 1);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v_a_1343_);
v___x_1345_ = v___x_1326_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
v_val_1337_ = v___x_1345_;
goto v___jp_1336_;
}
}
else
{
lean_object* v_a_1347_; lean_object* v___x_1349_; 
v_a_1347_ = lean_ctor_get(v___x_1342_, 0);
lean_inc(v_a_1347_);
lean_dec_ref_known(v___x_1342_, 1);
if (v_isShared_1327_ == 0)
{
lean_ctor_set_tag(v___x_1326_, 0);
lean_ctor_set(v___x_1326_, 0, v_a_1347_);
v___x_1349_ = v___x_1326_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1347_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
v_val_1337_ = v___x_1349_;
goto v___jp_1336_;
}
}
v___jp_1336_:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1338_, 0, v_val_1337_);
v___x_1339_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1329_, v___x_1330_, v___x_1338_, v___f_1335_);
v___x_1340_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1329_, v___x_1330_, v___x_1339_, v___f_1310_);
v___x_1341_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1329_, v___x_1330_, v___x_1340_, v___f_1311_);
return v___x_1341_;
}
}
else
{
lean_object* v___f_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___f_1354_; uint8_t v___x_1355_; lean_object* v_val_1357_; lean_object* v___x_1361_; 
lean_dec_ref(v___f_1311_);
lean_dec_ref(v___f_1310_);
lean_inc(v_a_1324_);
v___f_1351_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1351_, 0, v_a_1324_);
v___x_1352_ = lean_box_uint32(v_op_1307_);
v___x_1353_ = lean_box_uint64(v_flags_1308_);
lean_inc(v_payload_1309_);
v___f_1354_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1354_, 0, v___f_1351_);
lean_closure_set(v___f_1354_, 1, v_a_1324_);
lean_closure_set(v___f_1354_, 2, v___x_1352_);
lean_closure_set(v___f_1354_, 3, v___x_1353_);
lean_closure_set(v___f_1354_, 4, v_payload_1309_);
v___x_1355_ = 0;
v___x_1361_ = l_Lasm_JS_Wire_encodeIO(v_payload_1309_);
lean_dec(v_payload_1309_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1364_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1361_, 1);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v_a_1362_);
v___x_1364_ = v___x_1326_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1362_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
v_val_1357_ = v___x_1364_;
goto v___jp_1356_;
}
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; 
v_a_1366_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v___x_1361_, 1);
if (v_isShared_1327_ == 0)
{
lean_ctor_set_tag(v___x_1326_, 0);
lean_ctor_set(v___x_1326_, 0, v_a_1366_);
v___x_1368_ = v___x_1326_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1366_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
v_val_1357_ = v___x_1368_;
goto v___jp_1356_;
}
}
v___jp_1356_:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1358_, 0, v_val_1357_);
v___x_1359_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1329_, v___x_1355_, v___x_1358_, v___f_1354_);
v___x_1360_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1329_, v___x_1355_, v___x_1359_, v___f_1312_);
return v___x_1360_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__6___boxed(lean_object* v_failurePrefix_1371_, lean_object* v_op_1372_, lean_object* v_flags_1373_, lean_object* v_payload_1374_, lean_object* v___f_1375_, lean_object* v___f_1376_, lean_object* v___f_1377_, lean_object* v_x_1378_, lean_object* v___y_1379_){
_start:
{
uint32_t v_op_boxed_1380_; uint64_t v_flags_boxed_1381_; lean_object* v_res_1382_; 
v_op_boxed_1380_ = lean_unbox_uint32(v_op_1372_);
lean_dec(v_op_1372_);
v_flags_boxed_1381_ = lean_unbox_uint64(v_flags_1373_);
lean_dec_ref(v_flags_1373_);
v_res_1382_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__6(v_failurePrefix_1371_, v_op_boxed_1380_, v_flags_boxed_1381_, v_payload_1374_, v___f_1375_, v___f_1376_, v___f_1377_, v_x_1378_);
lean_dec_ref(v_failurePrefix_1371_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg(uint32_t v_op_1388_, uint64_t v_flags_1389_, lean_object* v_payload_1390_, lean_object* v_failurePrefix_1391_){
_start:
{
lean_object* v___f_1393_; lean_object* v___f_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___f_1397_; lean_object* v___f_1398_; lean_object* v___x_1399_; uint8_t v___x_1400_; lean_object* v_val_1402_; lean_object* v___x_1405_; 
v___f_1393_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___closed__2));
lean_inc_ref(v_failurePrefix_1391_);
v___f_1394_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1394_, 0, v_failurePrefix_1391_);
v___x_1395_ = lean_box_uint32(v_op_1388_);
v___x_1396_ = lean_box_uint64(v_flags_1389_);
v___f_1397_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1397_, 0, v_failurePrefix_1391_);
lean_closure_set(v___f_1397_, 1, v___x_1395_);
lean_closure_set(v___f_1397_, 2, v___x_1396_);
lean_closure_set(v___f_1397_, 3, v_payload_1390_);
lean_closure_set(v___f_1397_, 4, v___f_1394_);
lean_closure_set(v___f_1397_, 5, v___f_1393_);
lean_closure_set(v___f_1397_, 6, v___f_1393_);
v___f_1398_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1398_, 0, v___f_1397_);
v___x_1399_ = lean_unsigned_to_nat(0u);
v___x_1400_ = 0;
v___x_1405_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
lean_ctor_set_tag(v___x_1408_, 1);
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
v_val_1402_ = v___x_1411_;
goto v___jp_1401_;
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
v_a_1414_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1405_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1405_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
lean_ctor_set_tag(v___x_1416_, 0);
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
v_val_1402_ = v___x_1419_;
goto v___jp_1401_;
}
}
}
v___jp_1401_:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v_val_1402_);
v___x_1404_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1399_, v___x_1400_, v___x_1403_, v___f_1398_);
return v___x_1404_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___boxed(lean_object* v_op_1422_, lean_object* v_flags_1423_, lean_object* v_payload_1424_, lean_object* v_failurePrefix_1425_, lean_object* v_a_1426_){
_start:
{
uint32_t v_op_boxed_1427_; uint64_t v_flags_boxed_1428_; lean_object* v_res_1429_; 
v_op_boxed_1427_ = lean_unbox_uint32(v_op_1422_);
lean_dec(v_op_1422_);
v_flags_boxed_1428_ = lean_unbox_uint64(v_flags_1423_);
lean_dec_ref(v_flags_1423_);
v_res_1429_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg(v_op_boxed_1427_, v_flags_boxed_1428_, v_payload_1424_, v_failurePrefix_1425_);
return v_res_1429_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1430_; uint64_t v___x_1431_; 
v___x_1430_ = 0;
v___x_1431_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0(uint8_t v_await_1432_, uint64_t v_extra_1433_){
_start:
{
uint64_t v___x_1434_; uint64_t v___y_1436_; 
v___x_1434_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0);
if (v_await_1432_ == 0)
{
uint64_t v___x_1439_; 
v___x_1439_ = 0ULL;
v___y_1436_ = v___x_1439_;
goto v___jp_1435_;
}
else
{
uint64_t v___x_1440_; 
v___x_1440_ = 2ULL;
v___y_1436_ = v___x_1440_;
goto v___jp_1435_;
}
v___jp_1435_:
{
uint64_t v___x_1437_; uint64_t v___x_1438_; 
v___x_1437_ = lean_uint64_lor(v___x_1434_, v___y_1436_);
v___x_1438_ = lean_uint64_lor(v___x_1437_, v_extra_1433_);
return v___x_1438_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___boxed(lean_object* v_await_1441_, lean_object* v_extra_1442_){
_start:
{
uint8_t v_await_boxed_1443_; uint64_t v_extra_boxed_1444_; uint64_t v_res_1445_; lean_object* v_r_1446_; 
v_await_boxed_1443_ = lean_unbox(v_await_1441_);
v_extra_boxed_1444_ = lean_unbox_uint64(v_extra_1442_);
lean_dec_ref(v_extra_1442_);
v_res_1445_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0(v_await_boxed_1443_, v_extra_boxed_1444_);
v_r_1446_ = lean_box_uint64(v_res_1445_);
return v_r_1446_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1447_; uint8_t v___x_1448_; uint64_t v___x_1449_; 
v___x_1447_ = 8ULL;
v___x_1448_ = 0;
v___x_1449_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0(v___x_1448_, v___x_1447_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0(lean_object* v_o_1450_, lean_object* v_name_1451_, lean_object* v_args_1452_){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; uint32_t v___x_1457_; uint64_t v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1454_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_1455_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1455_, 0, v_o_1450_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1456_, 0, v_name_1451_);
v___x_1457_ = 205;
v___x_1458_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0___closed__0);
v___x_1459_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1459_, 0, v_args_1452_);
v___x_1460_ = lean_unsigned_to_nat(3u);
v___x_1461_ = lean_mk_empty_array_with_capacity(v___x_1460_);
v___x_1462_ = lean_array_push(v___x_1461_, v___x_1455_);
v___x_1463_ = lean_array_push(v___x_1462_, v___x_1456_);
v___x_1464_ = lean_array_push(v___x_1463_, v___x_1459_);
v___x_1465_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
v___x_1466_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg(v___x_1457_, v___x_1458_, v___x_1465_, v___x_1454_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0___boxed(lean_object* v_o_1467_, lean_object* v_name_1468_, lean_object* v_args_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0(v_o_1467_, v_name_1468_, v_args_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_json(lean_object* v_self_1473_){
_start:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1475_ = ((lean_object*)(l_Lasm_JS_Deno_SubprocessReadableStream_json___closed__0));
v___x_1476_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_1477_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0(v_self_1473_, v___x_1475_, v___x_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_json___boxed(lean_object* v_self_1478_, lean_object* v_a_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Lasm_JS_Deno_SubprocessReadableStream_json(v_self_1478_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1(lean_object* v_context_1481_, uint32_t v_op_1482_, uint64_t v_flags_1483_, lean_object* v_payload_1484_, lean_object* v_failurePrefix_1485_){
_start:
{
lean_object* v___x_1487_; 
v___x_1487_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg(v_op_1482_, v_flags_1483_, v_payload_1484_, v_failurePrefix_1485_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___boxed(lean_object* v_context_1488_, lean_object* v_op_1489_, lean_object* v_flags_1490_, lean_object* v_payload_1491_, lean_object* v_failurePrefix_1492_, lean_object* v_a_1493_){
_start:
{
uint32_t v_op_boxed_1494_; uint64_t v_flags_boxed_1495_; lean_object* v_res_1496_; 
v_op_boxed_1494_ = lean_unbox_uint32(v_op_1489_);
lean_dec(v_op_1489_);
v_flags_boxed_1495_ = lean_unbox_uint64(v_flags_1490_);
lean_dec_ref(v_flags_1490_);
v_res_1496_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1(v_context_1488_, v_op_boxed_1494_, v_flags_boxed_1495_, v_payload_1491_, v_failurePrefix_1492_);
lean_dec_ref(v_context_1488_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_text(lean_object* v_self_1498_){
_start:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1500_ = ((lean_object*)(l_Lasm_JS_Deno_SubprocessReadableStream_text___closed__0));
v___x_1501_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_1502_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_1498_, v___x_1500_, v___x_1501_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SubprocessReadableStream_text___boxed(lean_object* v_self_1503_, lean_object* v_a_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lasm_JS_Deno_SubprocessReadableStream_text(v_self_1503_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stdin(lean_object* v_self_1506_){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__6));
v___x_1509_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1506_, v___x_1508_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1517_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1512_ = v___x_1509_;
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1509_);
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
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
v_a_1518_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___x_1509_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v___x_1509_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stdin___boxed(lean_object* v_self_1526_, lean_object* v_a_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lasm_JS_Deno_ChildProcess_stdin(v_self_1526_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stdout(lean_object* v_self_1529_){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__0));
v___x_1532_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1529_, v___x_1531_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v___x_1532_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1532_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_a_1533_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
else
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1548_; 
v_a_1541_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1543_ = v___x_1532_;
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1532_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1546_; 
if (v_isShared_1544_ == 0)
{
v___x_1546_ = v___x_1543_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_a_1541_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stdout___boxed(lean_object* v_self_1549_, lean_object* v_a_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lasm_JS_Deno_ChildProcess_stdout(v_self_1549_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stderr(lean_object* v_self_1552_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__1));
v___x_1555_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1552_, v___x_1554_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1555_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1555_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
v_a_1564_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1555_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1555_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_stderr___boxed(lean_object* v_self_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lasm_JS_Deno_ChildProcess_stderr(v_self_1572_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_pid(lean_object* v_self_1576_){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1578_ = ((lean_object*)(l_Lasm_JS_Deno_ChildProcess_pid___closed__0));
v___x_1579_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_1576_, v___x_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_pid___boxed(lean_object* v_self_1580_, lean_object* v_a_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lasm_JS_Deno_ChildProcess_pid(v_self_1580_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__3(lean_object* v___f_1583_, lean_object* v_a_1584_, lean_object* v___x_1585_, lean_object* v_x_1586_){
_start:
{
if (lean_obj_tag(v_x_1586_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1596_; 
lean_dec_ref(v___f_1583_);
v_a_1588_ = lean_ctor_get(v_x_1586_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_x_1586_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1590_ = v_x_1586_;
v_isShared_1591_ = v_isSharedCheck_1596_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v_x_1586_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1596_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1591_ == 0)
{
v___x_1593_ = v___x_1590_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_a_1588_);
v___x_1593_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1593_);
return v___x_1594_;
}
}
}
else
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1616_; 
v_a_1597_ = lean_ctor_get(v_x_1586_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v_x_1586_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1599_ = v_x_1586_;
v_isShared_1600_ = v_isSharedCheck_1616_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v_x_1586_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1616_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___x_1601_; uint8_t v___x_1602_; lean_object* v_val_1604_; lean_object* v___x_1607_; 
v___x_1601_ = lean_unsigned_to_nat(0u);
v___x_1602_ = 0;
v___x_1607_ = lasm_js_await_into(v_a_1584_, v_a_1597_, v___x_1585_);
lean_dec(v_a_1597_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1610_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 0, v_a_1608_);
v___x_1610_ = v___x_1599_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_a_1608_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
v_val_1604_ = v___x_1610_;
goto v___jp_1603_;
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; 
v_a_1612_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v___x_1607_, 1);
if (v_isShared_1600_ == 0)
{
lean_ctor_set_tag(v___x_1599_, 0);
lean_ctor_set(v___x_1599_, 0, v_a_1612_);
v___x_1614_ = v___x_1599_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1612_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
v_val_1604_ = v___x_1614_;
goto v___jp_1603_;
}
}
v___jp_1603_:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1605_, 0, v_val_1604_);
v___x_1606_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1601_, v___x_1602_, v___x_1605_, v___f_1583_);
return v___x_1606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__3___boxed(lean_object* v___f_1617_, lean_object* v_a_1618_, lean_object* v___x_1619_, lean_object* v_x_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__3(v___f_1617_, v_a_1618_, v___x_1619_, v_x_1620_);
lean_dec(v___x_1619_);
lean_dec(v_a_1618_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__2(lean_object* v_a_1623_, lean_object* v___f_1624_, lean_object* v_x_1625_){
_start:
{
if (lean_obj_tag(v_x_1625_) == 0)
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1635_; 
lean_dec_ref(v___f_1624_);
v_a_1627_ = lean_ctor_get(v_x_1625_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_x_1625_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1629_ = v_x_1625_;
v_isShared_1630_ = v_isSharedCheck_1635_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v_x_1625_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1635_;
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
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
lean_object* v___x_1633_; 
v___x_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
return v___x_1633_;
}
}
}
else
{
lean_object* v___x_1636_; uint8_t v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_dec_ref_known(v_x_1625_, 1);
v___x_1636_ = lean_unsigned_to_nat(0u);
v___x_1637_ = 0;
v___x_1638_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1623_);
v___x_1639_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1636_, v___x_1637_, v___x_1638_, v___f_1624_);
return v___x_1639_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__2___boxed(lean_object* v_a_1640_, lean_object* v___f_1641_, lean_object* v_x_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__2(v_a_1640_, v___f_1641_, v_x_1642_);
lean_dec(v_a_1640_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__4(lean_object* v___f_1645_, lean_object* v_v_1646_, lean_object* v_x_1647_){
_start:
{
if (lean_obj_tag(v_x_1647_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1657_; 
lean_dec(v_v_1646_);
lean_dec_ref(v___f_1645_);
v_a_1649_ = lean_ctor_get(v_x_1647_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v_x_1647_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1651_ = v_x_1647_;
v_isShared_1652_ = v_isSharedCheck_1657_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v_x_1647_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1657_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
return v___x_1655_;
}
}
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1681_; 
v_a_1658_ = lean_ctor_get(v_x_1647_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v_x_1647_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1660_ = v_x_1647_;
v_isShared_1661_ = v_isSharedCheck_1681_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v_x_1647_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1681_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___f_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___f_1665_; lean_object* v___x_1666_; uint8_t v___x_1667_; lean_object* v_val_1669_; lean_object* v___x_1672_; 
lean_inc(v_a_1658_);
v___f_1662_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1662_, 0, v_a_1658_);
lean_closure_set(v___f_1662_, 1, v___f_1645_);
v___x_1663_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_1664_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1664_, 0, v_v_1646_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
lean_inc_ref(v___x_1664_);
v___f_1665_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1665_, 0, v___f_1662_);
lean_closure_set(v___f_1665_, 1, v_a_1658_);
lean_closure_set(v___f_1665_, 2, v___x_1664_);
v___x_1666_ = lean_unsigned_to_nat(0u);
v___x_1667_ = 0;
v___x_1672_ = l_Lasm_JS_Wire_encodeIO(v___x_1664_);
lean_dec_ref_known(v___x_1664_, 2);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1673_);
lean_dec_ref_known(v___x_1672_, 1);
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 0, v_a_1673_);
v___x_1675_ = v___x_1660_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1673_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
v_val_1669_ = v___x_1675_;
goto v___jp_1668_;
}
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1679_; 
v_a_1677_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v___x_1672_, 1);
if (v_isShared_1661_ == 0)
{
lean_ctor_set_tag(v___x_1660_, 0);
lean_ctor_set(v___x_1660_, 0, v_a_1677_);
v___x_1679_ = v___x_1660_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_a_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
v_val_1669_ = v___x_1679_;
goto v___jp_1668_;
}
}
v___jp_1668_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1670_, 0, v_val_1669_);
v___x_1671_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1666_, v___x_1667_, v___x_1670_, v___f_1665_);
return v___x_1671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__4___boxed(lean_object* v___f_1682_, lean_object* v_v_1683_, lean_object* v_x_1684_, lean_object* v___y_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__4(v___f_1682_, v_v_1683_, v_x_1684_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__5(lean_object* v___f_1687_, lean_object* v_x_1688_){
_start:
{
if (lean_obj_tag(v_x_1688_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1698_; 
lean_dec_ref(v___f_1687_);
v_a_1690_ = lean_ctor_get(v_x_1688_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_x_1688_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1692_ = v_x_1688_;
v_isShared_1693_ = v_isSharedCheck_1698_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v_x_1688_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1698_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
lean_object* v___x_1696_; 
v___x_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1695_);
return v___x_1696_;
}
}
}
else
{
lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1710_; 
v_isSharedCheck_1710_ = !lean_is_exclusive(v_x_1688_);
if (v_isSharedCheck_1710_ == 0)
{
lean_object* v_unused_1711_; 
v_unused_1711_ = lean_ctor_get(v_x_1688_, 0);
lean_dec(v_unused_1711_);
v___x_1700_ = v_x_1688_;
v_isShared_1701_ = v_isSharedCheck_1710_;
goto v_resetjp_1699_;
}
else
{
lean_dec(v_x_1688_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1710_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; uint8_t v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1706_; 
v___x_1702_ = lean_unsigned_to_nat(0u);
v___x_1703_ = 0;
v___x_1704_ = lean_io_promise_new();
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 0, v___x_1704_);
v___x_1706_ = v___x_1700_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v___x_1704_);
v___x_1706_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1706_);
v___x_1708_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1702_, v___x_1703_, v___x_1707_, v___f_1687_);
return v___x_1708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__5___boxed(lean_object* v___f_1712_, lean_object* v_x_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__5(v___f_1712_, v_x_1713_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__1(lean_object* v___f_1716_, lean_object* v_x_1717_){
_start:
{
if (lean_obj_tag(v_x_1717_) == 0)
{
lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1727_; 
lean_dec_ref(v___f_1716_);
v_a_1719_ = lean_ctor_get(v_x_1717_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v_x_1717_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1721_ = v_x_1717_;
v_isShared_1722_ = v_isSharedCheck_1727_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_dec(v_x_1717_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1727_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1724_; 
if (v_isShared_1722_ == 0)
{
v___x_1724_ = v___x_1721_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_a_1719_);
v___x_1724_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1724_);
return v___x_1725_;
}
}
}
else
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1747_; 
v_a_1728_ = lean_ctor_get(v_x_1717_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v_x_1717_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1730_ = v_x_1717_;
v_isShared_1731_ = v_isSharedCheck_1747_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v_x_1717_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1747_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; uint8_t v___x_1733_; lean_object* v_val_1735_; lean_object* v___x_1738_; 
v___x_1732_ = lean_unsigned_to_nat(0u);
v___x_1733_ = 0;
v___x_1738_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1728_);
lean_dec(v_a_1728_);
if (lean_obj_tag(v___x_1738_) == 0)
{
lean_object* v_a_1739_; lean_object* v___x_1741_; 
v_a_1739_ = lean_ctor_get(v___x_1738_, 0);
lean_inc(v_a_1739_);
lean_dec_ref_known(v___x_1738_, 1);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v_a_1739_);
v___x_1741_ = v___x_1730_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
v_val_1735_ = v___x_1741_;
goto v___jp_1734_;
}
}
else
{
lean_object* v_a_1743_; lean_object* v___x_1745_; 
v_a_1743_ = lean_ctor_get(v___x_1738_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1738_, 1);
if (v_isShared_1731_ == 0)
{
lean_ctor_set_tag(v___x_1730_, 0);
lean_ctor_set(v___x_1730_, 0, v_a_1743_);
v___x_1745_ = v___x_1730_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1743_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
v_val_1735_ = v___x_1745_;
goto v___jp_1734_;
}
}
v___jp_1734_:
{
lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1736_, 0, v_val_1735_);
v___x_1737_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1732_, v___x_1733_, v___x_1736_, v___f_1716_);
return v___x_1737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__1___boxed(lean_object* v___f_1748_, lean_object* v_x_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__1(v___f_1748_, v_x_1749_);
return v_res_1751_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOptionsStdin___lam__0___closed__0));
v___x_1759_ = lean_string_utf8_byte_size(v___x_1758_);
return v___x_1759_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__6(void){
_start:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; uint8_t v___x_1762_; 
v___x_1760_ = lean_unsigned_to_nat(0u);
v___x_1761_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__5);
v___x_1762_ = lean_nat_dec_eq(v___x_1761_, v___x_1760_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1(lean_object* v_d_1767_, lean_object* v_key_1768_){
_start:
{
uint8_t v_a_1770_; 
if (lean_obj_tag(v_d_1767_) == 8)
{
lean_object* v___x_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1909_; 
v___x_1776_ = l_Lasm_JS_Data_field(v_d_1767_, v_key_1768_);
v_isSharedCheck_1909_ = !lean_is_exclusive(v_d_1767_);
if (v_isSharedCheck_1909_ == 0)
{
lean_object* v_unused_1910_; 
v_unused_1910_ = lean_ctor_get(v_d_1767_, 0);
lean_dec(v_unused_1910_);
v___x_1778_ = v_d_1767_;
v_isShared_1779_ = v_isSharedCheck_1909_;
goto v_resetjp_1777_;
}
else
{
lean_dec(v_d_1767_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1909_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
switch(lean_obj_tag(v___x_1776_))
{
case 1:
{
lean_del_object(v___x_1778_);
goto v___jp_1774_;
}
case 0:
{
lean_del_object(v___x_1778_);
goto v___jp_1774_;
}
default: 
{
if (lean_obj_tag(v___x_1776_) == 4)
{
lean_object* v_s_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; 
v_s_1800_ = lean_ctor_get(v___x_1776_, 0);
lean_inc_ref(v_s_1800_);
v___x_1801_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__0));
v___x_1802_ = lean_string_dec_eq(v_s_1800_, v___x_1801_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; uint8_t v___x_1804_; 
v___x_1803_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__2));
v___x_1804_ = lean_string_dec_eq(v_s_1800_, v___x_1803_);
if (v___x_1804_ == 0)
{
lean_object* v___x_1805_; uint8_t v___x_1806_; 
v___x_1805_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__4));
v___x_1806_ = lean_string_dec_eq(v_s_1800_, v___x_1805_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; uint8_t v___x_1808_; 
v___x_1807_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__6));
v___x_1808_ = lean_string_dec_eq(v_s_1800_, v___x_1807_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; uint8_t v___x_1810_; 
v___x_1809_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__8));
v___x_1810_ = lean_string_dec_eq(v_s_1800_, v___x_1809_);
if (v___x_1810_ == 0)
{
lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__10));
v___x_1812_ = lean_string_dec_eq(v_s_1800_, v___x_1811_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; uint8_t v___x_1814_; 
v___x_1813_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__12));
v___x_1814_ = lean_string_dec_eq(v_s_1800_, v___x_1813_);
if (v___x_1814_ == 0)
{
lean_object* v___x_1815_; uint8_t v___x_1816_; 
v___x_1815_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__14));
v___x_1816_ = lean_string_dec_eq(v_s_1800_, v___x_1815_);
if (v___x_1816_ == 0)
{
lean_object* v___x_1817_; uint8_t v___x_1818_; 
v___x_1817_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__16));
v___x_1818_ = lean_string_dec_eq(v_s_1800_, v___x_1817_);
if (v___x_1818_ == 0)
{
lean_object* v___x_1819_; uint8_t v___x_1820_; 
v___x_1819_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__18));
v___x_1820_ = lean_string_dec_eq(v_s_1800_, v___x_1819_);
if (v___x_1820_ == 0)
{
lean_object* v___x_1821_; uint8_t v___x_1822_; 
v___x_1821_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__20));
v___x_1822_ = lean_string_dec_eq(v_s_1800_, v___x_1821_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1823_; uint8_t v___x_1824_; 
v___x_1823_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__22));
v___x_1824_ = lean_string_dec_eq(v_s_1800_, v___x_1823_);
if (v___x_1824_ == 0)
{
lean_object* v___x_1825_; uint8_t v___x_1826_; 
v___x_1825_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__24));
v___x_1826_ = lean_string_dec_eq(v_s_1800_, v___x_1825_);
if (v___x_1826_ == 0)
{
lean_object* v___x_1827_; uint8_t v___x_1828_; 
v___x_1827_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__26));
v___x_1828_ = lean_string_dec_eq(v_s_1800_, v___x_1827_);
if (v___x_1828_ == 0)
{
lean_object* v___x_1829_; uint8_t v___x_1830_; 
v___x_1829_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__28));
v___x_1830_ = lean_string_dec_eq(v_s_1800_, v___x_1829_);
if (v___x_1830_ == 0)
{
lean_object* v___x_1831_; uint8_t v___x_1832_; 
v___x_1831_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__30));
v___x_1832_ = lean_string_dec_eq(v_s_1800_, v___x_1831_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; uint8_t v___x_1834_; 
v___x_1833_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__32));
v___x_1834_ = lean_string_dec_eq(v_s_1800_, v___x_1833_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1835_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__34));
v___x_1836_ = lean_string_dec_eq(v_s_1800_, v___x_1835_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; uint8_t v___x_1838_; 
v___x_1837_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__36));
v___x_1838_ = lean_string_dec_eq(v_s_1800_, v___x_1837_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; uint8_t v___x_1840_; 
v___x_1839_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__38));
v___x_1840_ = lean_string_dec_eq(v_s_1800_, v___x_1839_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; uint8_t v___x_1842_; 
v___x_1841_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__40));
v___x_1842_ = lean_string_dec_eq(v_s_1800_, v___x_1841_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1843_; uint8_t v___x_1844_; 
v___x_1843_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__42));
v___x_1844_ = lean_string_dec_eq(v_s_1800_, v___x_1843_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1845_; uint8_t v___x_1846_; 
v___x_1845_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__44));
v___x_1846_ = lean_string_dec_eq(v_s_1800_, v___x_1845_);
if (v___x_1846_ == 0)
{
lean_object* v___x_1847_; uint8_t v___x_1848_; 
v___x_1847_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__46));
v___x_1848_ = lean_string_dec_eq(v_s_1800_, v___x_1847_);
if (v___x_1848_ == 0)
{
lean_object* v___x_1849_; uint8_t v___x_1850_; 
v___x_1849_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__48));
v___x_1850_ = lean_string_dec_eq(v_s_1800_, v___x_1849_);
if (v___x_1850_ == 0)
{
lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1851_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__50));
v___x_1852_ = lean_string_dec_eq(v_s_1800_, v___x_1851_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; uint8_t v___x_1854_; 
v___x_1853_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__52));
v___x_1854_ = lean_string_dec_eq(v_s_1800_, v___x_1853_);
if (v___x_1854_ == 0)
{
lean_object* v___x_1855_; uint8_t v___x_1856_; 
v___x_1855_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__54));
v___x_1856_ = lean_string_dec_eq(v_s_1800_, v___x_1855_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; uint8_t v___x_1858_; 
v___x_1857_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__56));
v___x_1858_ = lean_string_dec_eq(v_s_1800_, v___x_1857_);
if (v___x_1858_ == 0)
{
lean_object* v___x_1859_; uint8_t v___x_1860_; 
v___x_1859_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__58));
v___x_1860_ = lean_string_dec_eq(v_s_1800_, v___x_1859_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; uint8_t v___x_1862_; 
v___x_1861_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__60));
v___x_1862_ = lean_string_dec_eq(v_s_1800_, v___x_1861_);
if (v___x_1862_ == 0)
{
lean_object* v___x_1863_; uint8_t v___x_1864_; 
v___x_1863_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__62));
v___x_1864_ = lean_string_dec_eq(v_s_1800_, v___x_1863_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__64));
v___x_1866_ = lean_string_dec_eq(v_s_1800_, v___x_1865_);
if (v___x_1866_ == 0)
{
lean_object* v___x_1867_; uint8_t v___x_1868_; 
v___x_1867_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__66));
v___x_1868_ = lean_string_dec_eq(v_s_1800_, v___x_1867_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; uint8_t v___x_1870_; 
v___x_1869_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__68));
v___x_1870_ = lean_string_dec_eq(v_s_1800_, v___x_1869_);
if (v___x_1870_ == 0)
{
lean_object* v___x_1871_; uint8_t v___x_1872_; 
v___x_1871_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__70));
v___x_1872_ = lean_string_dec_eq(v_s_1800_, v___x_1871_);
lean_dec_ref(v_s_1800_);
if (v___x_1872_ == 0)
{
goto v___jp_1780_;
}
else
{
uint8_t v___x_1873_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_del_object(v___x_1778_);
v___x_1873_ = 35;
v_a_1770_ = v___x_1873_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1874_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1874_ = 34;
v_a_1770_ = v___x_1874_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1875_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1875_ = 33;
v_a_1770_ = v___x_1875_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1876_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1876_ = 32;
v_a_1770_ = v___x_1876_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1877_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1877_ = 31;
v_a_1770_ = v___x_1877_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1878_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1878_ = 30;
v_a_1770_ = v___x_1878_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1879_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1879_ = 29;
v_a_1770_ = v___x_1879_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1880_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1880_ = 28;
v_a_1770_ = v___x_1880_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1881_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1881_ = 27;
v_a_1770_ = v___x_1881_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1882_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1882_ = 26;
v_a_1770_ = v___x_1882_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1883_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1883_ = 25;
v_a_1770_ = v___x_1883_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1884_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1884_ = 24;
v_a_1770_ = v___x_1884_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1885_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1885_ = 23;
v_a_1770_ = v___x_1885_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1886_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1886_ = 22;
v_a_1770_ = v___x_1886_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1887_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1887_ = 21;
v_a_1770_ = v___x_1887_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1888_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1888_ = 20;
v_a_1770_ = v___x_1888_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1889_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1889_ = 19;
v_a_1770_ = v___x_1889_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1890_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1890_ = 18;
v_a_1770_ = v___x_1890_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1891_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1891_ = 17;
v_a_1770_ = v___x_1891_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1892_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1892_ = 16;
v_a_1770_ = v___x_1892_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1893_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1893_ = 15;
v_a_1770_ = v___x_1893_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1894_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1894_ = 14;
v_a_1770_ = v___x_1894_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1895_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1895_ = 13;
v_a_1770_ = v___x_1895_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1896_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1896_ = 12;
v_a_1770_ = v___x_1896_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1897_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1897_ = 11;
v_a_1770_ = v___x_1897_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1898_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1898_ = 10;
v_a_1770_ = v___x_1898_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1899_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1899_ = 9;
v_a_1770_ = v___x_1899_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1900_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1900_ = 8;
v_a_1770_ = v___x_1900_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1901_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1901_ = 7;
v_a_1770_ = v___x_1901_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1902_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1902_ = 6;
v_a_1770_ = v___x_1902_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1903_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1903_ = 5;
v_a_1770_ = v___x_1903_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1904_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1904_ = 4;
v_a_1770_ = v___x_1904_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1905_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1905_ = 3;
v_a_1770_ = v___x_1905_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1906_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1906_ = 2;
v_a_1770_ = v___x_1906_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1907_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1907_ = 1;
v_a_1770_ = v___x_1907_;
goto v___jp_1769_;
}
}
else
{
uint8_t v___x_1908_; 
lean_dec_ref_known(v___x_1776_, 1);
lean_dec_ref(v_s_1800_);
lean_del_object(v___x_1778_);
v___x_1908_ = 0;
v_a_1770_ = v___x_1908_;
goto v___jp_1769_;
}
}
else
{
goto v___jp_1780_;
}
}
}
v___jp_1780_:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v___x_1781_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__1));
v___x_1782_ = lean_string_append(v___x_1781_, v_key_1768_);
v___x_1783_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__2));
v___x_1784_ = lean_string_append(v___x_1782_, v___x_1783_);
v___x_1785_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__3));
v___x_1786_ = lean_string_append(v___x_1784_, v___x_1785_);
v___x_1787_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__4));
v___x_1788_ = lean_string_append(v___x_1786_, v___x_1787_);
v___x_1789_ = l_Lasm_JS_Data_describe(v___x_1776_);
v___x_1790_ = lean_string_append(v___x_1788_, v___x_1789_);
lean_dec_ref(v___x_1789_);
v___x_1791_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__6);
if (v___x_1791_ == 0)
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1795_; 
v___x_1792_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__7));
v___x_1793_ = lean_string_append(v___x_1790_, v___x_1792_);
if (v_isShared_1779_ == 0)
{
lean_ctor_set_tag(v___x_1778_, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1793_);
v___x_1795_ = v___x_1778_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
else
{
lean_object* v___x_1798_; 
if (v_isShared_1779_ == 0)
{
lean_ctor_set_tag(v___x_1778_, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1790_);
v___x_1798_ = v___x_1778_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1790_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
}
else
{
lean_object* v___x_1911_; 
lean_dec(v_d_1767_);
v___x_1911_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__9));
return v___x_1911_;
}
v___jp_1769_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = lean_box(v_a_1770_);
v___x_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
v___x_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1772_);
return v___x_1773_;
}
v___jp_1774_:
{
lean_object* v___x_1775_; 
v___x_1775_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__0));
return v___x_1775_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1912_, lean_object* v_key_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1(v_d_1912_, v_key_1913_);
lean_dec_ref(v_key_1913_);
return v_res_1914_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1923_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__7));
v___x_1924_ = lean_unsigned_to_nat(46u);
v___x_1925_ = lean_unsigned_to_nat(193u);
v___x_1926_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__6));
v___x_1927_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__5));
v___x_1928_ = l_mkPanicMessageWithDecl(v___x_1927_, v___x_1926_, v___x_1925_, v___x_1924_, v___x_1923_);
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0(lean_object* v_context_1930_, lean_object* v_d_1931_){
_start:
{
lean_object* v___y_1934_; lean_object* v___y_1935_; lean_object* v___y_1940_; lean_object* v_received_1941_; lean_object* v___y_1960_; lean_object* v_a_1963_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1987_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__0));
lean_inc(v_d_1931_);
v___x_1988_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_1931_, v___x_1987_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v_a_1963_ = v_a_1989_;
goto v___jp_1962_;
}
else
{
lean_object* v_a_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v_a_1990_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_1991_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__1));
lean_inc(v_d_1931_);
v___x_1992_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_1931_, v___x_1991_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; 
lean_dec(v_a_1990_);
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_1993_);
lean_dec_ref_known(v___x_1992_, 1);
v_a_1963_ = v_a_1993_;
goto v___jp_1962_;
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v_a_1994_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_1994_);
lean_dec_ref_known(v___x_1992_, 1);
v___x_1995_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__2));
lean_inc(v_d_1931_);
v___x_1996_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1(v_d_1931_, v___x_1995_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; 
lean_dec(v_a_1994_);
lean_dec(v_a_1990_);
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_a_1997_);
lean_dec_ref_known(v___x_1996_, 1);
v_a_1963_ = v_a_1997_;
goto v___jp_1962_;
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2008_; 
lean_dec(v_d_1931_);
v_a_1998_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_2000_ = v___x_1996_;
v_isShared_2001_ = v_isSharedCheck_2008_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1996_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2008_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2002_; uint8_t v___x_2003_; double v___x_2004_; lean_object* v___x_2006_; 
v___x_2002_ = lean_alloc_ctor(0, 1, 9);
lean_ctor_set(v___x_2002_, 0, v_a_1998_);
v___x_2003_ = lean_unbox(v_a_1990_);
lean_dec(v_a_1990_);
lean_ctor_set_uint8(v___x_2002_, sizeof(void*)*1 + 8, v___x_2003_);
v___x_2004_ = lean_unbox_float(v_a_1994_);
lean_dec(v_a_1994_);
lean_ctor_set_float(v___x_2002_, sizeof(void*)*1, v___x_2004_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set_tag(v___x_2000_, 0);
lean_ctor_set(v___x_2000_, 0, v___x_2002_);
v___x_2006_ = v___x_2000_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_2002_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
}
}
v___jp_1933_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1936_ = lean_string_append(v___y_1934_, v___y_1935_);
lean_dec_ref(v___y_1935_);
v___x_1937_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1936_);
v___x_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
return v___x_1938_;
}
v___jp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; 
v___x_1942_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__0));
v___x_1943_ = lean_string_append(v___x_1942_, v_context_1930_);
v___x_1944_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__1));
v___x_1945_ = lean_string_append(v___x_1943_, v___x_1944_);
v___x_1946_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___closed__2));
v___x_1947_ = lean_string_append(v___x_1945_, v___x_1946_);
v___x_1948_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__2));
v___x_1949_ = lean_string_append(v___x_1947_, v___x_1948_);
v___x_1950_ = lean_string_append(v___x_1949_, v_received_1941_);
lean_dec_ref(v_received_1941_);
v___x_1951_ = lean_string_utf8_byte_size(v___y_1940_);
v___x_1952_ = lean_unsigned_to_nat(0u);
v___x_1953_ = lean_nat_dec_eq(v___x_1951_, v___x_1952_);
if (v___x_1953_ == 0)
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1954_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__3));
v___x_1955_ = lean_string_append(v___x_1954_, v___y_1940_);
lean_dec_ref(v___y_1940_);
v___x_1956_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__4));
v___x_1957_ = lean_string_append(v___x_1955_, v___x_1956_);
v___y_1934_ = v___x_1950_;
v___y_1935_ = v___x_1957_;
goto v___jp_1933_;
}
else
{
lean_object* v___x_1958_; 
lean_dec_ref(v___y_1940_);
v___x_1958_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___y_1934_ = v___x_1950_;
v___y_1935_ = v___x_1958_;
goto v___jp_1933_;
}
}
v___jp_1959_:
{
lean_object* v___x_1961_; 
v___x_1961_ = l_Lasm_JS_Data_describe(v_d_1931_);
v___y_1940_ = v___y_1960_;
v_received_1941_ = v___x_1961_;
goto v___jp_1939_;
}
v___jp_1962_:
{
if (lean_obj_tag(v_d_1931_) == 9)
{
lean_object* v_value_1964_; lean_object* v_description_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; 
v_value_1964_ = lean_ctor_get(v_d_1931_, 0);
v_description_1965_ = lean_ctor_get(v_d_1931_, 1);
v___x_1966_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_1967_ = lean_string_dec_eq(v_description_1965_, v___x_1966_);
if (v___x_1967_ == 0)
{
v___y_1960_ = v_a_1963_;
goto v___jp_1959_;
}
else
{
lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1984_; 
lean_inc(v_value_1964_);
v_isSharedCheck_1984_ = !lean_is_exclusive(v_d_1931_);
if (v_isSharedCheck_1984_ == 0)
{
lean_object* v_unused_1985_; lean_object* v_unused_1986_; 
v_unused_1985_ = lean_ctor_get(v_d_1931_, 1);
lean_dec(v_unused_1985_);
v_unused_1986_ = lean_ctor_get(v_d_1931_, 0);
lean_dec(v_unused_1986_);
v___x_1969_ = v_d_1931_;
v_isShared_1970_ = v_isSharedCheck_1984_;
goto v_resetjp_1968_;
}
else
{
lean_dec(v_d_1931_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1984_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
uint32_t v___x_1971_; uint64_t v___x_1972_; lean_object* v___x_1974_; 
v___x_1971_ = 206;
v___x_1972_ = 0ULL;
lean_inc(v_value_1964_);
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 1, v___x_1966_);
v___x_1974_ = v___x_1969_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_value_1964_);
lean_ctor_set(v_reuseFailAlloc_1983_, 1, v___x_1966_);
v___x_1974_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
uint32_t v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = lasm_js_value_handle(v_value_1964_);
lean_dec(v_value_1964_);
v___x_1976_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1971_, v___x_1972_, v___x_1974_, v___x_1975_);
lean_dec_ref(v___x_1974_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v_a_1977_; uint8_t v___x_1978_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1977_);
lean_dec_ref_known(v___x_1976_, 1);
v___x_1978_ = lean_string_validate_utf8(v_a_1977_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
lean_dec(v_a_1977_);
v___x_1979_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8);
v___x_1980_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1979_);
v___y_1940_ = v_a_1963_;
v_received_1941_ = v___x_1980_;
goto v___jp_1939_;
}
else
{
lean_object* v___x_1981_; 
v___x_1981_ = lean_string_from_utf8_unchecked(v_a_1977_);
v___y_1940_ = v_a_1963_;
v_received_1941_ = v___x_1981_;
goto v___jp_1939_;
}
}
else
{
lean_object* v___x_1982_; 
lean_dec_ref_known(v___x_1976_, 1);
v___x_1982_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__9));
v___y_1940_ = v_a_1963_;
v_received_1941_ = v___x_1982_;
goto v___jp_1939_;
}
}
}
}
}
else
{
v___y_1960_ = v_a_1963_;
goto v___jp_1959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___boxed(lean_object* v_context_2009_, lean_object* v_d_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0(v_context_2009_, v_d_2010_);
lean_dec_ref(v_context_2009_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0(lean_object* v_x_2014_){
_start:
{
lean_object* v_val_2017_; 
if (lean_obj_tag(v_x_2014_) == 0)
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2027_; 
v_a_2019_ = lean_ctor_get(v_x_2014_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_x_2014_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2021_ = v_x_2014_;
v_isShared_2022_ = v_isSharedCheck_2027_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v_x_2014_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2027_;
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
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
lean_object* v___x_2025_; 
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
return v___x_2025_;
}
}
}
else
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2042_; 
v_a_2028_ = lean_ctor_get(v_x_2014_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v_x_2014_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2030_ = v_x_2014_;
v_isShared_2031_ = v_isSharedCheck_2042_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v_x_2014_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2042_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0___closed__0));
v___x_2033_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0(v___x_2032_, v_a_2028_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v_a_2034_; lean_object* v___x_2036_; 
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2034_);
lean_dec_ref_known(v___x_2033_, 1);
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v_a_2034_);
v___x_2036_ = v___x_2030_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2034_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
v_val_2017_ = v___x_2036_;
goto v___jp_2016_;
}
}
else
{
lean_object* v_a_2038_; lean_object* v___x_2040_; 
v_a_2038_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2038_);
lean_dec_ref_known(v___x_2033_, 1);
if (v_isShared_2031_ == 0)
{
lean_ctor_set_tag(v___x_2030_, 0);
lean_ctor_set(v___x_2030_, 0, v_a_2038_);
v___x_2040_ = v___x_2030_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2038_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
v_val_2017_ = v___x_2040_;
goto v___jp_2016_;
}
}
}
}
v___jp_2016_:
{
lean_object* v___x_2018_; 
v___x_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2018_, 0, v_val_2017_);
return v___x_2018_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0___boxed(lean_object* v_x_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__0(v_x_2043_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0(lean_object* v_v_2049_){
_start:
{
lean_object* v___f_2051_; lean_object* v___f_2052_; lean_object* v___f_2053_; lean_object* v___x_2054_; uint8_t v___x_2055_; lean_object* v_val_2057_; lean_object* v___x_2060_; 
v___f_2051_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___closed__1));
v___f_2052_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__4___boxed), 4, 2);
lean_closure_set(v___f_2052_, 0, v___f_2051_);
lean_closure_set(v___f_2052_, 1, v_v_2049_);
v___f_2053_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2053_, 0, v___f_2052_);
v___x_2054_ = lean_unsigned_to_nat(0u);
v___x_2055_ = 0;
v___x_2060_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_2060_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2060_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
lean_ctor_set_tag(v___x_2063_, 1);
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
v_val_2057_ = v___x_2066_;
goto v___jp_2056_;
}
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
v_a_2069_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2060_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2060_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
lean_ctor_set_tag(v___x_2071_, 0);
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
v_val_2057_ = v___x_2074_;
goto v___jp_2056_;
}
}
}
v___jp_2056_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2058_, 0, v_val_2057_);
v___x_2059_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2054_, v___x_2055_, v___x_2058_, v___f_2053_);
return v___x_2059_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0___boxed(lean_object* v_v_2077_, lean_object* v___y_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0(v_v_2077_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_status___lam__0(lean_object* v_x_2080_){
_start:
{
if (lean_obj_tag(v_x_2080_) == 0)
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2090_; 
v_a_2082_ = lean_ctor_get(v_x_2080_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v_x_2080_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2084_ = v_x_2080_;
v_isShared_2085_ = v_isSharedCheck_2090_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v_x_2080_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2090_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2087_; 
if (v_isShared_2085_ == 0)
{
v___x_2087_ = v___x_2084_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2082_);
v___x_2087_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2088_; 
v___x_2088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
return v___x_2088_;
}
}
}
else
{
lean_object* v_a_2091_; lean_object* v___x_2092_; 
v_a_2091_ = lean_ctor_get(v_x_2080_, 0);
lean_inc(v_a_2091_);
lean_dec_ref_known(v_x_2080_, 1);
v___x_2092_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0(v_a_2091_);
return v___x_2092_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_status___lam__0___boxed(lean_object* v_x_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v_res_2095_; 
v_res_2095_ = l_Lasm_JS_Deno_ChildProcess_status___lam__0(v_x_2093_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_status(lean_object* v_self_2098_){
_start:
{
lean_object* v___f_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; lean_object* v_val_2105_; lean_object* v___x_2108_; 
v___f_2100_ = ((lean_object*)(l_Lasm_JS_Deno_ChildProcess_status___closed__0));
v___x_2101_ = ((lean_object*)(l_Lasm_JS_Deno_ChildProcess_status___closed__1));
v___x_2102_ = lean_unsigned_to_nat(0u);
v___x_2103_ = 0;
v___x_2108_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2098_, v___x_2101_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2108_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2108_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
lean_ctor_set_tag(v___x_2111_, 1);
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
v_val_2105_ = v___x_2114_;
goto v___jp_2104_;
}
}
}
else
{
lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2124_; 
v_a_2117_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2119_ = v___x_2108_;
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v___x_2108_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2122_; 
if (v_isShared_2120_ == 0)
{
lean_ctor_set_tag(v___x_2119_, 0);
v___x_2122_ = v___x_2119_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2117_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
v_val_2105_ = v___x_2122_;
goto v___jp_2104_;
}
}
}
v___jp_2104_:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; 
v___x_2106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2106_, 0, v_val_2105_);
v___x_2107_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2102_, v___x_2103_, v___x_2106_, v___f_2100_);
return v___x_2107_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_status___boxed(lean_object* v_self_2125_, lean_object* v_a_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_Lasm_JS_Deno_ChildProcess_status(v_self_2125_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__3(lean_object* v___f_2128_, lean_object* v_x_2129_){
_start:
{
if (lean_obj_tag(v_x_2129_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2139_; 
lean_dec_ref(v___f_2128_);
v_a_2131_ = lean_ctor_get(v_x_2129_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v_x_2129_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2133_ = v_x_2129_;
v_isShared_2134_ = v_isSharedCheck_2139_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_a_2131_);
lean_dec(v_x_2129_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2139_;
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
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2131_);
v___x_2136_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
lean_object* v___x_2137_; 
v___x_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
return v___x_2137_;
}
}
}
else
{
lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2151_; 
v_isSharedCheck_2151_ = !lean_is_exclusive(v_x_2129_);
if (v_isSharedCheck_2151_ == 0)
{
lean_object* v_unused_2152_; 
v_unused_2152_ = lean_ctor_get(v_x_2129_, 0);
lean_dec(v_unused_2152_);
v___x_2141_ = v_x_2129_;
v_isShared_2142_ = v_isSharedCheck_2151_;
goto v_resetjp_2140_;
}
else
{
lean_dec(v_x_2129_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2151_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; uint8_t v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2143_ = lean_unsigned_to_nat(0u);
v___x_2144_ = 0;
v___x_2145_ = lean_io_promise_new();
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 0, v___x_2145_);
v___x_2147_ = v___x_2141_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2147_);
v___x_2149_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2143_, v___x_2144_, v___x_2148_, v___f_2128_);
return v___x_2149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__3___boxed(lean_object* v___f_2153_, lean_object* v_x_2154_, lean_object* v___y_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__3(v___f_2153_, v_x_2154_);
return v_res_2156_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_2159_ = lean_string_utf8_byte_size(v___x_2158_);
return v___x_2159_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__2(void){
_start:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; uint8_t v___x_2162_; 
v___x_2160_ = lean_unsigned_to_nat(0u);
v___x_2161_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__1);
v___x_2162_ = lean_nat_dec_eq(v___x_2161_, v___x_2160_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_2166_, lean_object* v_key_2167_){
_start:
{
if (lean_obj_tag(v_d_2166_) == 8)
{
lean_object* v___x_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2199_; 
v___x_2168_ = l_Lasm_JS_Data_field(v_d_2166_, v_key_2167_);
v_isSharedCheck_2199_ = !lean_is_exclusive(v_d_2166_);
if (v_isSharedCheck_2199_ == 0)
{
lean_object* v_unused_2200_; 
v_unused_2200_ = lean_ctor_get(v_d_2166_, 0);
lean_dec(v_unused_2200_);
v___x_2170_ = v_d_2166_;
v_isShared_2171_ = v_isSharedCheck_2199_;
goto v_resetjp_2169_;
}
else
{
lean_dec(v_d_2166_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2199_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
if (lean_obj_tag(v___x_2168_) == 6)
{
lean_object* v_b_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_del_object(v___x_2170_);
v_b_2172_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2168_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_b_2172_);
lean_dec(v___x_2168_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
lean_ctor_set_tag(v___x_2174_, 1);
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_b_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
else
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; uint8_t v___x_2190_; 
v___x_2180_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__1));
v___x_2181_ = lean_string_append(v___x_2180_, v_key_2167_);
v___x_2182_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__2));
v___x_2183_ = lean_string_append(v___x_2181_, v___x_2182_);
v___x_2184_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_2185_ = lean_string_append(v___x_2183_, v___x_2184_);
v___x_2186_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1___closed__4));
v___x_2187_ = lean_string_append(v___x_2185_, v___x_2186_);
v___x_2188_ = l_Lasm_JS_Data_describe(v___x_2168_);
v___x_2189_ = lean_string_append(v___x_2187_, v___x_2188_);
lean_dec_ref(v___x_2188_);
v___x_2190_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__2, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__2_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__2);
if (v___x_2190_ == 0)
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2194_; 
v___x_2191_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_2192_ = lean_string_append(v___x_2189_, v___x_2191_);
if (v_isShared_2171_ == 0)
{
lean_ctor_set_tag(v___x_2170_, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2192_);
v___x_2194_ = v___x_2170_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2192_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
else
{
lean_object* v___x_2197_; 
if (v_isShared_2171_ == 0)
{
lean_ctor_set_tag(v___x_2170_, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2189_);
v___x_2197_ = v___x_2170_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v___x_2189_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
}
}
else
{
lean_object* v___x_2201_; 
lean_dec(v_d_2166_);
v___x_2201_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__4));
return v___x_2201_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_2202_, lean_object* v_key_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3(v_d_2202_, v_key_2203_);
lean_dec_ref(v_key_2203_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2(lean_object* v_context_2205_, lean_object* v_d_2206_){
_start:
{
lean_object* v___y_2209_; lean_object* v___y_2210_; lean_object* v___y_2215_; lean_object* v_received_2216_; lean_object* v___y_2235_; lean_object* v_a_2238_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2262_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__0));
lean_inc(v_d_2206_);
v___x_2263_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2206_, v___x_2262_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2264_);
lean_dec_ref_known(v___x_2263_, 1);
v_a_2238_ = v_a_2264_;
goto v___jp_2237_;
}
else
{
lean_object* v_a_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v_a_2265_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v___x_2263_, 1);
v___x_2266_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__1));
lean_inc(v_d_2206_);
v___x_2267_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_2206_, v___x_2266_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v_a_2268_; 
lean_dec(v_a_2265_);
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v___x_2267_, 1);
v_a_2238_ = v_a_2268_;
goto v___jp_2237_;
}
else
{
lean_object* v_a_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v_a_2269_ = lean_ctor_get(v___x_2267_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v___x_2267_, 1);
v___x_2270_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__2));
lean_inc(v_d_2206_);
v___x_2271_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0_spec__1(v_d_2206_, v___x_2270_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; 
lean_dec(v_a_2269_);
lean_dec(v_a_2265_);
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v_a_2238_ = v_a_2272_;
goto v___jp_2237_;
}
else
{
lean_object* v_a_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v_a_2273_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2273_);
lean_dec_ref_known(v___x_2271_, 1);
v___x_2274_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__0));
lean_inc(v_d_2206_);
v___x_2275_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3(v_d_2206_, v___x_2274_);
if (lean_obj_tag(v___x_2275_) == 0)
{
lean_object* v_a_2276_; 
lean_dec(v_a_2273_);
lean_dec(v_a_2269_);
lean_dec(v_a_2265_);
v_a_2276_ = lean_ctor_get(v___x_2275_, 0);
lean_inc(v_a_2276_);
lean_dec_ref_known(v___x_2275_, 1);
v_a_2238_ = v_a_2276_;
goto v___jp_2237_;
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v_a_2277_ = lean_ctor_get(v___x_2275_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v___x_2275_, 1);
v___x_2278_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__1));
lean_inc(v_d_2206_);
v___x_2279_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3(v_d_2206_, v___x_2278_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; 
lean_dec(v_a_2277_);
lean_dec(v_a_2273_);
lean_dec(v_a_2269_);
lean_dec(v_a_2265_);
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v___x_2279_, 1);
v_a_2238_ = v_a_2280_;
goto v___jp_2237_;
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2291_; 
lean_dec(v_d_2206_);
v_a_2281_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2283_ = v___x_2279_;
v_isShared_2284_ = v_isSharedCheck_2291_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2279_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2291_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2285_; uint8_t v___x_2286_; double v___x_2287_; lean_object* v___x_2289_; 
v___x_2285_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_2285_, 0, v_a_2273_);
lean_ctor_set(v___x_2285_, 1, v_a_2277_);
lean_ctor_set(v___x_2285_, 2, v_a_2281_);
v___x_2286_ = lean_unbox(v_a_2265_);
lean_dec(v_a_2265_);
lean_ctor_set_uint8(v___x_2285_, sizeof(void*)*3 + 8, v___x_2286_);
v___x_2287_ = lean_unbox_float(v_a_2269_);
lean_dec(v_a_2269_);
lean_ctor_set_float(v___x_2285_, sizeof(void*)*3, v___x_2287_);
if (v_isShared_2284_ == 0)
{
lean_ctor_set_tag(v___x_2283_, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2285_);
v___x_2289_ = v___x_2283_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v___x_2285_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
}
}
}
v___jp_2208_:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2211_ = lean_string_append(v___y_2209_, v___y_2210_);
lean_dec_ref(v___y_2210_);
v___x_2212_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2211_);
v___x_2213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2212_);
return v___x_2213_;
}
v___jp_2214_:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; uint8_t v___x_2228_; 
v___x_2217_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__0));
v___x_2218_ = lean_string_append(v___x_2217_, v_context_2205_);
v___x_2219_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__1));
v___x_2220_ = lean_string_append(v___x_2218_, v___x_2219_);
v___x_2221_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___closed__1));
v___x_2222_ = lean_string_append(v___x_2220_, v___x_2221_);
v___x_2223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__2));
v___x_2224_ = lean_string_append(v___x_2222_, v___x_2223_);
v___x_2225_ = lean_string_append(v___x_2224_, v_received_2216_);
lean_dec_ref(v_received_2216_);
v___x_2226_ = lean_string_utf8_byte_size(v___y_2215_);
v___x_2227_ = lean_unsigned_to_nat(0u);
v___x_2228_ = lean_nat_dec_eq(v___x_2226_, v___x_2227_);
if (v___x_2228_ == 0)
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2229_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__3));
v___x_2230_ = lean_string_append(v___x_2229_, v___y_2215_);
lean_dec_ref(v___y_2215_);
v___x_2231_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__4));
v___x_2232_ = lean_string_append(v___x_2230_, v___x_2231_);
v___y_2209_ = v___x_2225_;
v___y_2210_ = v___x_2232_;
goto v___jp_2208_;
}
else
{
lean_object* v___x_2233_; 
lean_dec_ref(v___y_2215_);
v___x_2233_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___y_2209_ = v___x_2225_;
v___y_2210_ = v___x_2233_;
goto v___jp_2208_;
}
}
v___jp_2234_:
{
lean_object* v___x_2236_; 
v___x_2236_ = l_Lasm_JS_Data_describe(v_d_2206_);
v___y_2215_ = v___y_2235_;
v_received_2216_ = v___x_2236_;
goto v___jp_2214_;
}
v___jp_2237_:
{
if (lean_obj_tag(v_d_2206_) == 9)
{
lean_object* v_value_2239_; lean_object* v_description_2240_; lean_object* v___x_2241_; uint8_t v___x_2242_; 
v_value_2239_ = lean_ctor_get(v_d_2206_, 0);
v_description_2240_ = lean_ctor_get(v_d_2206_, 1);
v___x_2241_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_2242_ = lean_string_dec_eq(v_description_2240_, v___x_2241_);
if (v___x_2242_ == 0)
{
v___y_2235_ = v_a_2238_;
goto v___jp_2234_;
}
else
{
lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2259_; 
lean_inc(v_value_2239_);
v_isSharedCheck_2259_ = !lean_is_exclusive(v_d_2206_);
if (v_isSharedCheck_2259_ == 0)
{
lean_object* v_unused_2260_; lean_object* v_unused_2261_; 
v_unused_2260_ = lean_ctor_get(v_d_2206_, 1);
lean_dec(v_unused_2260_);
v_unused_2261_ = lean_ctor_get(v_d_2206_, 0);
lean_dec(v_unused_2261_);
v___x_2244_ = v_d_2206_;
v_isShared_2245_ = v_isSharedCheck_2259_;
goto v_resetjp_2243_;
}
else
{
lean_dec(v_d_2206_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2259_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
uint32_t v___x_2246_; uint64_t v___x_2247_; lean_object* v___x_2249_; 
v___x_2246_ = 206;
v___x_2247_ = 0ULL;
lean_inc(v_value_2239_);
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 1, v___x_2241_);
v___x_2249_ = v___x_2244_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_value_2239_);
lean_ctor_set(v_reuseFailAlloc_2258_, 1, v___x_2241_);
v___x_2249_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
uint32_t v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = lasm_js_value_handle(v_value_2239_);
lean_dec(v_value_2239_);
v___x_2251_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2246_, v___x_2247_, v___x_2249_, v___x_2250_);
lean_dec_ref(v___x_2249_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v_a_2252_; uint8_t v___x_2253_; 
v_a_2252_ = lean_ctor_get(v___x_2251_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v___x_2251_, 1);
v___x_2253_ = lean_string_validate_utf8(v_a_2252_);
if (v___x_2253_ == 0)
{
lean_object* v___x_2254_; lean_object* v___x_2255_; 
lean_dec(v_a_2252_);
v___x_2254_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8);
v___x_2255_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2254_);
v___y_2215_ = v_a_2238_;
v_received_2216_ = v___x_2255_;
goto v___jp_2214_;
}
else
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_string_from_utf8_unchecked(v_a_2252_);
v___y_2215_ = v_a_2238_;
v_received_2216_ = v___x_2256_;
goto v___jp_2214_;
}
}
else
{
lean_object* v___x_2257_; 
lean_dec_ref_known(v___x_2251_, 1);
v___x_2257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__9));
v___y_2215_ = v_a_2238_;
v_received_2216_ = v___x_2257_;
goto v___jp_2214_;
}
}
}
}
}
else
{
v___y_2235_ = v_a_2238_;
goto v___jp_2234_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2292_, lean_object* v_d_2293_, lean_object* v_a_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2(v_context_2292_, v_d_2293_);
lean_dec_ref(v_context_2292_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__0(lean_object* v_context_2296_, lean_object* v_x_2297_){
_start:
{
lean_object* v_val_2300_; 
if (lean_obj_tag(v_x_2297_) == 0)
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2310_; 
v_a_2302_ = lean_ctor_get(v_x_2297_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v_x_2297_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2304_ = v_x_2297_;
v_isShared_2305_ = v_isSharedCheck_2310_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v_x_2297_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2310_;
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
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
lean_object* v___x_2308_; 
v___x_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2307_);
return v___x_2308_;
}
}
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2324_; 
v_a_2311_ = lean_ctor_get(v_x_2297_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v_x_2297_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2313_ = v_x_2297_;
v_isShared_2314_ = v_isSharedCheck_2324_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v_x_2297_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2324_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2315_; 
v___x_2315_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2(v_context_2296_, v_a_2311_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2318_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2316_);
lean_dec_ref_known(v___x_2315_, 1);
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 0, v_a_2316_);
v___x_2318_ = v___x_2313_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2316_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
v_val_2300_ = v___x_2318_;
goto v___jp_2299_;
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; 
v_a_2320_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2315_, 1);
if (v_isShared_2314_ == 0)
{
lean_ctor_set_tag(v___x_2313_, 0);
lean_ctor_set(v___x_2313_, 0, v_a_2320_);
v___x_2322_ = v___x_2313_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_a_2320_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
v_val_2300_ = v___x_2322_;
goto v___jp_2299_;
}
}
}
}
v___jp_2299_:
{
lean_object* v___x_2301_; 
v___x_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2301_, 0, v_val_2300_);
return v___x_2301_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__0___boxed(lean_object* v_context_2325_, lean_object* v_x_2326_, lean_object* v___y_2327_){
_start:
{
lean_object* v_res_2328_; 
v_res_2328_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__0(v_context_2325_, v_x_2326_);
lean_dec_ref(v_context_2325_);
return v_res_2328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_2329_, uint32_t v_op_2330_, uint64_t v_flags_2331_, lean_object* v_payload_2332_, lean_object* v___f_2333_, lean_object* v___f_2334_, lean_object* v___f_2335_, lean_object* v_x_2336_){
_start:
{
if (lean_obj_tag(v_x_2336_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2346_; 
lean_dec_ref(v___f_2335_);
lean_dec_ref(v___f_2334_);
lean_dec_ref(v___f_2333_);
lean_dec(v_payload_2332_);
v_a_2338_ = lean_ctor_get(v_x_2336_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v_x_2336_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2340_ = v_x_2336_;
v_isShared_2341_ = v_isSharedCheck_2346_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v_x_2336_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2346_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
lean_object* v___x_2344_; 
v___x_2344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
return v___x_2344_;
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2393_; 
v_a_2347_ = lean_ctor_get(v_x_2336_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v_x_2336_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2349_ = v_x_2336_;
v_isShared_2350_ = v_isSharedCheck_2393_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v_x_2336_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2393_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; uint8_t v___x_2353_; 
v___x_2351_ = lean_string_utf8_byte_size(v_failurePrefix_2329_);
v___x_2352_ = lean_unsigned_to_nat(0u);
v___x_2353_ = lean_nat_dec_eq(v___x_2351_, v___x_2352_);
if (v___x_2353_ == 0)
{
lean_object* v___f_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___f_2358_; lean_object* v_val_2360_; lean_object* v___x_2365_; 
lean_dec_ref(v___f_2335_);
lean_inc(v_a_2347_);
v___f_2354_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2354_, 0, v_a_2347_);
v___x_2355_ = lean_box(v___x_2353_);
v___x_2356_ = lean_box_uint32(v_op_2330_);
v___x_2357_ = lean_box_uint64(v_flags_2331_);
lean_inc(v_payload_2332_);
v___f_2358_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2358_, 0, v___x_2352_);
lean_closure_set(v___f_2358_, 1, v___x_2355_);
lean_closure_set(v___f_2358_, 2, v___f_2354_);
lean_closure_set(v___f_2358_, 3, v_a_2347_);
lean_closure_set(v___f_2358_, 4, v___x_2356_);
lean_closure_set(v___f_2358_, 5, v___x_2357_);
lean_closure_set(v___f_2358_, 6, v_payload_2332_);
v___x_2365_ = l_Lasm_JS_Wire_encodeIO(v_payload_2332_);
lean_dec(v_payload_2332_);
if (lean_obj_tag(v___x_2365_) == 0)
{
lean_object* v_a_2366_; lean_object* v___x_2368_; 
v_a_2366_ = lean_ctor_get(v___x_2365_, 0);
lean_inc(v_a_2366_);
lean_dec_ref_known(v___x_2365_, 1);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v_a_2366_);
v___x_2368_ = v___x_2349_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_a_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
v_val_2360_ = v___x_2368_;
goto v___jp_2359_;
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; 
v_a_2370_ = lean_ctor_get(v___x_2365_, 0);
lean_inc(v_a_2370_);
lean_dec_ref_known(v___x_2365_, 1);
if (v_isShared_2350_ == 0)
{
lean_ctor_set_tag(v___x_2349_, 0);
lean_ctor_set(v___x_2349_, 0, v_a_2370_);
v___x_2372_ = v___x_2349_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_a_2370_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
v_val_2360_ = v___x_2372_;
goto v___jp_2359_;
}
}
v___jp_2359_:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2361_, 0, v_val_2360_);
v___x_2362_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2352_, v___x_2353_, v___x_2361_, v___f_2358_);
v___x_2363_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2352_, v___x_2353_, v___x_2362_, v___f_2333_);
v___x_2364_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2352_, v___x_2353_, v___x_2363_, v___f_2334_);
return v___x_2364_;
}
}
else
{
lean_object* v___f_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___f_2377_; uint8_t v___x_2378_; lean_object* v_val_2380_; lean_object* v___x_2384_; 
lean_dec_ref(v___f_2334_);
lean_dec_ref(v___f_2333_);
lean_inc(v_a_2347_);
v___f_2374_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2374_, 0, v_a_2347_);
v___x_2375_ = lean_box_uint32(v_op_2330_);
v___x_2376_ = lean_box_uint64(v_flags_2331_);
lean_inc(v_payload_2332_);
v___f_2377_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2377_, 0, v___f_2374_);
lean_closure_set(v___f_2377_, 1, v_a_2347_);
lean_closure_set(v___f_2377_, 2, v___x_2375_);
lean_closure_set(v___f_2377_, 3, v___x_2376_);
lean_closure_set(v___f_2377_, 4, v_payload_2332_);
v___x_2378_ = 0;
v___x_2384_ = l_Lasm_JS_Wire_encodeIO(v_payload_2332_);
lean_dec(v_payload_2332_);
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_object* v_a_2385_; lean_object* v___x_2387_; 
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_a_2385_);
lean_dec_ref_known(v___x_2384_, 1);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v_a_2385_);
v___x_2387_ = v___x_2349_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2385_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
v_val_2380_ = v___x_2387_;
goto v___jp_2379_;
}
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2391_; 
v_a_2389_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2384_, 1);
if (v_isShared_2350_ == 0)
{
lean_ctor_set_tag(v___x_2349_, 0);
lean_ctor_set(v___x_2349_, 0, v_a_2389_);
v___x_2391_ = v___x_2349_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2389_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
v_val_2380_ = v___x_2391_;
goto v___jp_2379_;
}
}
v___jp_2379_:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v_val_2380_);
v___x_2382_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2352_, v___x_2378_, v___x_2381_, v___f_2377_);
v___x_2383_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2352_, v___x_2378_, v___x_2382_, v___f_2335_);
return v___x_2383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_2394_, lean_object* v_op_2395_, lean_object* v_flags_2396_, lean_object* v_payload_2397_, lean_object* v___f_2398_, lean_object* v___f_2399_, lean_object* v___f_2400_, lean_object* v_x_2401_, lean_object* v___y_2402_){
_start:
{
uint32_t v_op_boxed_2403_; uint64_t v_flags_boxed_2404_; lean_object* v_res_2405_; 
v_op_boxed_2403_ = lean_unbox_uint32(v_op_2395_);
lean_dec(v_op_2395_);
v_flags_boxed_2404_ = lean_unbox_uint64(v_flags_2396_);
lean_dec_ref(v_flags_2396_);
v_res_2405_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__9(v_failurePrefix_2394_, v_op_boxed_2403_, v_flags_boxed_2404_, v_payload_2397_, v___f_2398_, v___f_2399_, v___f_2400_, v_x_2401_);
lean_dec_ref(v_failurePrefix_2394_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__2(lean_object* v___f_2406_, lean_object* v_x_2407_){
_start:
{
if (lean_obj_tag(v_x_2407_) == 0)
{
lean_object* v_a_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2417_; 
lean_dec_ref(v___f_2406_);
v_a_2409_ = lean_ctor_get(v_x_2407_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v_x_2407_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2411_ = v_x_2407_;
v_isShared_2412_ = v_isSharedCheck_2417_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_a_2409_);
lean_dec(v_x_2407_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2417_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2414_; 
if (v_isShared_2412_ == 0)
{
v___x_2414_ = v___x_2411_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_a_2409_);
v___x_2414_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
lean_object* v___x_2415_; 
v___x_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2415_, 0, v___x_2414_);
return v___x_2415_;
}
}
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2419_; 
v_a_2418_ = lean_ctor_get(v_x_2407_, 0);
lean_inc(v_a_2418_);
lean_dec_ref_known(v_x_2407_, 1);
v___x_2419_ = lean_apply_2(v___f_2406_, v_a_2418_, lean_box(0));
return v___x_2419_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__2___boxed(lean_object* v___f_2420_, lean_object* v_x_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__2(v___f_2420_, v_x_2421_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__1(lean_object* v___f_2424_, lean_object* v_bytes_2425_){
_start:
{
lean_object* v___x_2427_; uint8_t v___x_2428_; lean_object* v_val_2430_; lean_object* v___x_2433_; 
v___x_2427_ = lean_unsigned_to_nat(0u);
v___x_2428_ = 0;
v___x_2433_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2425_);
if (lean_obj_tag(v___x_2433_) == 0)
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
v_a_2434_ = lean_ctor_get(v___x_2433_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2433_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2433_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
lean_ctor_set_tag(v___x_2436_, 1);
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2434_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
v_val_2430_ = v___x_2439_;
goto v___jp_2429_;
}
}
}
else
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
v_a_2442_ = lean_ctor_get(v___x_2433_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2444_ = v___x_2433_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2433_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
lean_ctor_set_tag(v___x_2444_, 0);
v___x_2447_ = v___x_2444_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_a_2442_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
v_val_2430_ = v___x_2447_;
goto v___jp_2429_;
}
}
}
v___jp_2429_:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2431_, 0, v_val_2430_);
v___x_2432_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2427_, v___x_2428_, v___x_2431_, v___f_2424_);
return v___x_2432_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__1___boxed(lean_object* v___f_2450_, lean_object* v_bytes_2451_, lean_object* v___y_2452_){
_start:
{
lean_object* v_res_2453_; 
v_res_2453_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__1(v___f_2450_, v_bytes_2451_);
lean_dec_ref(v_bytes_2451_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1(lean_object* v_context_2454_, uint32_t v_op_2455_, uint64_t v_flags_2456_, lean_object* v_payload_2457_, lean_object* v_failurePrefix_2458_){
_start:
{
lean_object* v___f_2460_; lean_object* v___f_2461_; lean_object* v___f_2462_; lean_object* v___f_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___f_2466_; lean_object* v___f_2467_; lean_object* v___x_2468_; uint8_t v___x_2469_; lean_object* v_val_2471_; lean_object* v___x_2474_; 
v___f_2460_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2460_, 0, v_context_2454_);
v___f_2461_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2461_, 0, v___f_2460_);
v___f_2462_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2462_, 0, v___f_2461_);
lean_inc_ref(v_failurePrefix_2458_);
v___f_2463_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__1___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2463_, 0, v_failurePrefix_2458_);
v___x_2464_ = lean_box_uint32(v_op_2455_);
v___x_2465_ = lean_box_uint64(v_flags_2456_);
lean_inc_ref(v___f_2462_);
v___f_2466_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_2466_, 0, v_failurePrefix_2458_);
lean_closure_set(v___f_2466_, 1, v___x_2464_);
lean_closure_set(v___f_2466_, 2, v___x_2465_);
lean_closure_set(v___f_2466_, 3, v_payload_2457_);
lean_closure_set(v___f_2466_, 4, v___f_2463_);
lean_closure_set(v___f_2466_, 5, v___f_2462_);
lean_closure_set(v___f_2466_, 6, v___f_2462_);
v___f_2467_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2467_, 0, v___f_2466_);
v___x_2468_ = lean_unsigned_to_nat(0u);
v___x_2469_ = 0;
v___x_2474_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2474_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2474_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
lean_ctor_set_tag(v___x_2477_, 1);
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
v_val_2471_ = v___x_2480_;
goto v___jp_2470_;
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
v_a_2483_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2474_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2474_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
lean_ctor_set_tag(v___x_2485_, 0);
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
v_val_2471_ = v___x_2488_;
goto v___jp_2470_;
}
}
}
v___jp_2470_:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2472_, 0, v_val_2471_);
v___x_2473_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2468_, v___x_2469_, v___x_2472_, v___f_2467_);
return v___x_2473_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1___boxed(lean_object* v_context_2491_, lean_object* v_op_2492_, lean_object* v_flags_2493_, lean_object* v_payload_2494_, lean_object* v_failurePrefix_2495_, lean_object* v_a_2496_){
_start:
{
uint32_t v_op_boxed_2497_; uint64_t v_flags_boxed_2498_; lean_object* v_res_2499_; 
v_op_boxed_2497_ = lean_unbox_uint32(v_op_2492_);
lean_dec(v_op_2492_);
v_flags_boxed_2498_ = lean_unbox_uint64(v_flags_2493_);
lean_dec_ref(v_flags_2493_);
v_res_2499_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1(v_context_2491_, v_op_boxed_2497_, v_flags_boxed_2498_, v_payload_2494_, v_failurePrefix_2495_);
return v_res_2499_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__0(uint8_t v_await_2500_, uint64_t v_extra_2501_){
_start:
{
uint64_t v___x_2502_; uint64_t v___y_2504_; 
v___x_2502_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0);
if (v_await_2500_ == 0)
{
uint64_t v___x_2507_; 
v___x_2507_ = 0ULL;
v___y_2504_ = v___x_2507_;
goto v___jp_2503_;
}
else
{
uint64_t v___x_2508_; 
v___x_2508_ = 2ULL;
v___y_2504_ = v___x_2508_;
goto v___jp_2503_;
}
v___jp_2503_:
{
uint64_t v___x_2505_; uint64_t v___x_2506_; 
v___x_2505_ = lean_uint64_lor(v___x_2502_, v___y_2504_);
v___x_2506_ = lean_uint64_lor(v___x_2505_, v_extra_2501_);
return v___x_2506_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__0___boxed(lean_object* v_await_2509_, lean_object* v_extra_2510_){
_start:
{
uint8_t v_await_boxed_2511_; uint64_t v_extra_boxed_2512_; uint64_t v_res_2513_; lean_object* v_r_2514_; 
v_await_boxed_2511_ = lean_unbox(v_await_2509_);
v_extra_boxed_2512_ = lean_unbox_uint64(v_extra_2510_);
lean_dec_ref(v_extra_2510_);
v_res_2513_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__0(v_await_boxed_2511_, v_extra_boxed_2512_);
v_r_2514_ = lean_box_uint64(v_res_2513_);
return v_r_2514_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__1(void){
_start:
{
uint64_t v___x_2516_; uint8_t v___x_2517_; uint64_t v___x_2518_; 
v___x_2516_ = 8ULL;
v___x_2517_ = 0;
v___x_2518_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__0(v___x_2517_, v___x_2516_);
return v___x_2518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0(lean_object* v_o_2519_, lean_object* v_name_2520_, lean_object* v_args_2521_){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; uint32_t v___x_2528_; uint64_t v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2523_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_2524_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2524_, 0, v_o_2519_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
lean_inc_ref(v_name_2520_);
v___x_2525_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2525_, 0, v_name_2520_);
v___x_2526_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__0));
v___x_2527_ = lean_string_append(v___x_2526_, v_name_2520_);
lean_dec_ref(v_name_2520_);
v___x_2528_ = 205;
v___x_2529_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__1);
v___x_2530_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2530_, 0, v_args_2521_);
v___x_2531_ = lean_unsigned_to_nat(3u);
v___x_2532_ = lean_mk_empty_array_with_capacity(v___x_2531_);
v___x_2533_ = lean_array_push(v___x_2532_, v___x_2524_);
v___x_2534_ = lean_array_push(v___x_2533_, v___x_2525_);
v___x_2535_ = lean_array_push(v___x_2534_, v___x_2530_);
v___x_2536_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
v___x_2537_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1(v___x_2527_, v___x_2528_, v___x_2529_, v___x_2536_, v___x_2523_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___boxed(lean_object* v_o_2538_, lean_object* v_name_2539_, lean_object* v_args_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0(v_o_2538_, v_name_2539_, v_args_2540_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_output(lean_object* v_self_2544_){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2546_ = ((lean_object*)(l_Lasm_JS_Deno_ChildProcess_output___closed__0));
v___x_2547_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_2548_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0(v_self_2544_, v___x_2546_, v___x_2547_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_output___boxed(lean_object* v_self_2549_, lean_object* v_a_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Lasm_JS_Deno_ChildProcess_output(v_self_2549_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_ChildProcess_kill_spec__0(lean_object* v_x_2552_){
_start:
{
if (lean_obj_tag(v_x_2552_) == 0)
{
lean_object* v___x_2553_; 
v___x_2553_ = lean_box(0);
return v___x_2553_;
}
else
{
lean_object* v_val_2554_; 
v_val_2554_ = lean_ctor_get(v_x_2552_, 0);
lean_inc(v_val_2554_);
lean_dec_ref_known(v_x_2552_, 1);
if (lean_obj_tag(v_val_2554_) == 0)
{
uint8_t v_value_2555_; 
v_value_2555_ = lean_ctor_get_uint8(v_val_2554_, 0);
lean_dec_ref_known(v_val_2554_, 0);
switch(v_value_2555_)
{
case 0:
{
lean_object* v___x_2556_; 
v___x_2556_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__1));
return v___x_2556_;
}
case 1:
{
lean_object* v___x_2557_; 
v___x_2557_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__3));
return v___x_2557_;
}
case 2:
{
lean_object* v___x_2558_; 
v___x_2558_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__5));
return v___x_2558_;
}
case 3:
{
lean_object* v___x_2559_; 
v___x_2559_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__7));
return v___x_2559_;
}
case 4:
{
lean_object* v___x_2560_; 
v___x_2560_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__9));
return v___x_2560_;
}
case 5:
{
lean_object* v___x_2561_; 
v___x_2561_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__11));
return v___x_2561_;
}
case 6:
{
lean_object* v___x_2562_; 
v___x_2562_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__13));
return v___x_2562_;
}
case 7:
{
lean_object* v___x_2563_; 
v___x_2563_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__15));
return v___x_2563_;
}
case 8:
{
lean_object* v___x_2564_; 
v___x_2564_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__17));
return v___x_2564_;
}
case 9:
{
lean_object* v___x_2565_; 
v___x_2565_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__19));
return v___x_2565_;
}
case 10:
{
lean_object* v___x_2566_; 
v___x_2566_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__21));
return v___x_2566_;
}
case 11:
{
lean_object* v___x_2567_; 
v___x_2567_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__23));
return v___x_2567_;
}
case 12:
{
lean_object* v___x_2568_; 
v___x_2568_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__25));
return v___x_2568_;
}
case 13:
{
lean_object* v___x_2569_; 
v___x_2569_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__27));
return v___x_2569_;
}
case 14:
{
lean_object* v___x_2570_; 
v___x_2570_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__29));
return v___x_2570_;
}
case 15:
{
lean_object* v___x_2571_; 
v___x_2571_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__31));
return v___x_2571_;
}
case 16:
{
lean_object* v___x_2572_; 
v___x_2572_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__33));
return v___x_2572_;
}
case 17:
{
lean_object* v___x_2573_; 
v___x_2573_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__35));
return v___x_2573_;
}
case 18:
{
lean_object* v___x_2574_; 
v___x_2574_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__37));
return v___x_2574_;
}
case 19:
{
lean_object* v___x_2575_; 
v___x_2575_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__39));
return v___x_2575_;
}
case 20:
{
lean_object* v___x_2576_; 
v___x_2576_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__41));
return v___x_2576_;
}
case 21:
{
lean_object* v___x_2577_; 
v___x_2577_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__43));
return v___x_2577_;
}
case 22:
{
lean_object* v___x_2578_; 
v___x_2578_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__45));
return v___x_2578_;
}
case 23:
{
lean_object* v___x_2579_; 
v___x_2579_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__47));
return v___x_2579_;
}
case 24:
{
lean_object* v___x_2580_; 
v___x_2580_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__49));
return v___x_2580_;
}
case 25:
{
lean_object* v___x_2581_; 
v___x_2581_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__51));
return v___x_2581_;
}
case 26:
{
lean_object* v___x_2582_; 
v___x_2582_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__53));
return v___x_2582_;
}
case 27:
{
lean_object* v___x_2583_; 
v___x_2583_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__55));
return v___x_2583_;
}
case 28:
{
lean_object* v___x_2584_; 
v___x_2584_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__57));
return v___x_2584_;
}
case 29:
{
lean_object* v___x_2585_; 
v___x_2585_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__59));
return v___x_2585_;
}
case 30:
{
lean_object* v___x_2586_; 
v___x_2586_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__61));
return v___x_2586_;
}
case 31:
{
lean_object* v___x_2587_; 
v___x_2587_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__63));
return v___x_2587_;
}
case 32:
{
lean_object* v___x_2588_; 
v___x_2588_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__65));
return v___x_2588_;
}
case 33:
{
lean_object* v___x_2589_; 
v___x_2589_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__67));
return v___x_2589_;
}
case 34:
{
lean_object* v___x_2590_; 
v___x_2590_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__69));
return v___x_2590_;
}
default: 
{
lean_object* v___x_2591_; 
v___x_2591_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignalOrDouble___lam__0___closed__71));
return v___x_2591_;
}
}
}
else
{
double v_value_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2599_; 
v_value_2592_ = lean_ctor_get_float(v_val_2554_, 0);
v_isSharedCheck_2599_ = !lean_is_exclusive(v_val_2554_);
if (v_isSharedCheck_2599_ == 0)
{
v___x_2594_ = v_val_2554_;
v_isShared_2595_ = v_isSharedCheck_2599_;
goto v_resetjp_2593_;
}
else
{
lean_dec(v_val_2554_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2599_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v___x_2597_; 
if (v_isShared_2595_ == 0)
{
lean_ctor_set_tag(v___x_2594_, 3);
v___x_2597_ = v___x_2594_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2598_, 0, v_value_2592_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_kill(lean_object* v_self_2601_, lean_object* v_signo_2602_){
_start:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2604_ = ((lean_object*)(l_Lasm_JS_Deno_ChildProcess_kill___closed__0));
v___x_2605_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_ChildProcess_kill_spec__0(v_signo_2602_);
v___x_2606_ = lean_unsigned_to_nat(1u);
v___x_2607_ = lean_mk_empty_array_with_capacity(v___x_2606_);
v___x_2608_ = lean_array_push(v___x_2607_, v___x_2605_);
v___x_2609_ = l_Lasm_JS_Web_Support_args(v___x_2608_);
v___x_2610_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2601_, v___x_2604_, v___x_2609_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_kill___boxed(lean_object* v_self_2611_, lean_object* v_signo_2612_, lean_object* v_a_2613_){
_start:
{
lean_object* v_res_2614_; 
v_res_2614_ = l_Lasm_JS_Deno_ChildProcess_kill(v_self_2611_, v_signo_2612_);
return v_res_2614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_ref(lean_object* v_self_2616_){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2618_ = ((lean_object*)(l_Lasm_JS_Deno_ChildProcess_ref___closed__0));
v___x_2619_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_2620_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2616_, v___x_2618_, v___x_2619_);
return v___x_2620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_ref___boxed(lean_object* v_self_2621_, lean_object* v_a_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l_Lasm_JS_Deno_ChildProcess_ref(v_self_2621_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_unref(lean_object* v_self_2625_){
_start:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2627_ = ((lean_object*)(l_Lasm_JS_Deno_ChildProcess_unref___closed__0));
v___x_2628_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_2629_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2625_, v___x_2627_, v___x_2628_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ChildProcess_unref___boxed(lean_object* v_self_2630_, lean_object* v_a_2631_){
_start:
{
lean_object* v_res_2632_; 
v_res_2632_ = l_Lasm_JS_Deno_ChildProcess_unref(v_self_2630_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1_spec__7(lean_object* v_context_2633_, lean_object* v_d_2634_){
_start:
{
lean_object* v___y_2637_; lean_object* v___y_2638_; 
if (lean_obj_tag(v_d_2634_) == 9)
{
lean_object* v_value_2642_; lean_object* v___x_2643_; 
v_value_2642_ = lean_ctor_get(v_d_2634_, 0);
lean_inc(v_value_2642_);
lean_dec_ref_known(v_d_2634_, 2);
v___x_2643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2643_, 0, v_value_2642_);
return v___x_2643_;
}
else
{
lean_object* v___x_2644_; lean_object* v_received_2646_; 
v___x_2644_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_2634_) == 9)
{
lean_object* v_value_2660_; lean_object* v_description_2661_; uint8_t v___x_2662_; 
v_value_2660_ = lean_ctor_get(v_d_2634_, 0);
v_description_2661_ = lean_ctor_get(v_d_2634_, 1);
v___x_2662_ = lean_string_dec_eq(v_description_2661_, v___x_2644_);
if (v___x_2662_ == 0)
{
goto v___jp_2658_;
}
else
{
uint32_t v___x_2663_; uint64_t v___x_2664_; lean_object* v___x_2665_; uint32_t v___x_2666_; lean_object* v___x_2667_; 
lean_inc_n(v_value_2660_, 2);
lean_dec_ref_known(v_d_2634_, 2);
v___x_2663_ = 206;
v___x_2664_ = 0ULL;
v___x_2665_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2665_, 0, v_value_2660_);
lean_ctor_set(v___x_2665_, 1, v___x_2644_);
v___x_2666_ = lasm_js_value_handle(v_value_2660_);
lean_dec(v_value_2660_);
v___x_2667_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2663_, v___x_2664_, v___x_2665_, v___x_2666_);
lean_dec_ref_known(v___x_2665_, 2);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; uint8_t v___x_2669_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2667_, 1);
v___x_2669_ = lean_string_validate_utf8(v_a_2668_);
if (v___x_2669_ == 0)
{
lean_object* v___x_2670_; lean_object* v___x_2671_; 
lean_dec(v_a_2668_);
v___x_2670_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__8);
v___x_2671_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2670_);
v_received_2646_ = v___x_2671_;
goto v___jp_2645_;
}
else
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_string_from_utf8_unchecked(v_a_2668_);
v_received_2646_ = v___x_2672_;
goto v___jp_2645_;
}
}
else
{
lean_object* v___x_2673_; 
lean_dec_ref_known(v___x_2667_, 1);
v___x_2673_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__9));
v_received_2646_ = v___x_2673_;
goto v___jp_2645_;
}
}
}
else
{
goto v___jp_2658_;
}
v___jp_2645_:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; uint8_t v___x_2656_; 
v___x_2647_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__0));
v___x_2648_ = lean_string_append(v___x_2647_, v_context_2633_);
v___x_2649_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__1));
v___x_2650_ = lean_string_append(v___x_2648_, v___x_2649_);
v___x_2651_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommand___closed__0));
v___x_2652_ = lean_string_append(v___x_2650_, v___x_2651_);
v___x_2653_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__2));
v___x_2654_ = lean_string_append(v___x_2652_, v___x_2653_);
v___x_2655_ = lean_string_append(v___x_2654_, v_received_2646_);
lean_dec_ref(v_received_2646_);
v___x_2656_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__2, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__2_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__2);
if (v___x_2656_ == 0)
{
lean_object* v___x_2657_; 
v___x_2657_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2_spec__3___closed__3));
v___y_2637_ = v___x_2655_;
v___y_2638_ = v___x_2657_;
goto v___jp_2636_;
}
else
{
v___y_2637_ = v___x_2655_;
v___y_2638_ = v___x_2644_;
goto v___jp_2636_;
}
}
v___jp_2658_:
{
lean_object* v___x_2659_; 
v___x_2659_ = l_Lasm_JS_Data_describe(v_d_2634_);
v_received_2646_ = v___x_2659_;
goto v___jp_2645_;
}
}
v___jp_2636_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2639_ = lean_string_append(v___y_2637_, v___y_2638_);
v___x_2640_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
v___x_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
return v___x_2641_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1_spec__7___boxed(lean_object* v_context_2674_, lean_object* v_d_2675_, lean_object* v_a_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1_spec__7(v_context_2674_, v_d_2675_);
lean_dec_ref(v_context_2674_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1(lean_object* v_b_2679_, lean_object* v_args_2680_, uint8_t v_await_2681_){
_start:
{
uint64_t v___y_2684_; uint64_t v___y_2685_; uint64_t v___x_2728_; uint64_t v___y_2730_; 
v___x_2728_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_SubprocessReadableStream_json_spec__0_spec__0___closed__0);
if (v_await_2681_ == 0)
{
uint64_t v___x_2735_; 
v___x_2735_ = 0ULL;
v___y_2730_ = v___x_2735_;
goto v___jp_2729_;
}
else
{
uint64_t v___x_2736_; 
v___x_2736_ = 2ULL;
v___y_2730_ = v___x_2736_;
goto v___jp_2729_;
}
v___jp_2683_:
{
uint64_t v_flags_2686_; uint32_t v___x_2687_; lean_object* v___x_2688_; uint32_t v___x_2689_; lean_object* v___x_2690_; 
v_flags_2686_ = lean_uint64_lor(v___y_2684_, v___y_2685_);
v___x_2687_ = 214;
v___x_2688_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2679_, v_args_2680_);
v___x_2689_ = 0;
v___x_2690_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2687_, v_flags_2686_, v___x_2688_, v___x_2689_);
lean_dec(v___x_2688_);
if (lean_obj_tag(v___x_2690_) == 0)
{
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; lean_object* v___x_2692_; 
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
lean_inc(v_a_2691_);
lean_dec_ref_known(v___x_2690_, 1);
v___x_2692_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2691_);
lean_dec(v_a_2691_);
if (lean_obj_tag(v___x_2692_) == 0)
{
lean_object* v_a_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
v_a_2693_ = lean_ctor_get(v___x_2692_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v___x_2692_, 1);
v___x_2694_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2679_);
v___x_2695_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1_spec__7(v___x_2694_, v_a_2693_);
lean_dec_ref(v___x_2694_);
return v___x_2695_;
}
else
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2703_; 
v_a_2696_ = lean_ctor_get(v___x_2692_, 0);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2692_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2698_ = v___x_2692_;
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v___x_2692_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_a_2696_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
}
else
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2711_; 
v_a_2704_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2706_ = v___x_2690_;
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2690_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2709_; 
if (v_isShared_2707_ == 0)
{
lean_ctor_set_tag(v___x_2706_, 1);
v___x_2709_ = v___x_2706_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_a_2704_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
else
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2727_; 
v_a_2712_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2714_ = v___x_2690_;
v_isShared_2715_ = v_isSharedCheck_2727_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2690_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2727_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2725_; 
v___x_2716_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Value_await___at___00Lasm_JS_Deno_ChildProcess_status_spec__0_spec__0___closed__0));
v___x_2717_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2679_);
v___x_2718_ = lean_string_append(v___x_2716_, v___x_2717_);
lean_dec_ref(v___x_2717_);
v___x_2719_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1___closed__0));
v___x_2720_ = lean_string_append(v___x_2718_, v___x_2719_);
v___x_2721_ = lean_io_error_to_string(v_a_2712_);
v___x_2722_ = lean_string_append(v___x_2720_, v___x_2721_);
lean_dec_ref(v___x_2721_);
v___x_2723_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 0, v___x_2723_);
v___x_2725_ = v___x_2714_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v___x_2723_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
}
}
v___jp_2729_:
{
uint8_t v_construct_2731_; uint64_t v___x_2732_; 
v_construct_2731_ = lean_ctor_get_uint8(v_b_2679_, sizeof(void*)*4);
v___x_2732_ = lean_uint64_lor(v___x_2728_, v___y_2730_);
if (v_construct_2731_ == 0)
{
uint64_t v___x_2733_; 
v___x_2733_ = 0ULL;
v___y_2684_ = v___x_2732_;
v___y_2685_ = v___x_2733_;
goto v___jp_2683_;
}
else
{
uint64_t v___x_2734_; 
v___x_2734_ = 4ULL;
v___y_2684_ = v___x_2732_;
v___y_2685_ = v___x_2734_;
goto v___jp_2683_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1___boxed(lean_object* v_b_2737_, lean_object* v_args_2738_, lean_object* v_await_2739_, lean_object* v_a_2740_){
_start:
{
uint8_t v_await_boxed_2741_; lean_object* v_res_2742_; 
v_await_boxed_2741_ = lean_unbox(v_await_2739_);
v_res_2742_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1(v_b_2737_, v_args_2738_, v_await_boxed_2741_);
lean_dec_ref(v_b_2737_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__1(lean_object* v_x_2743_){
_start:
{
if (lean_obj_tag(v_x_2743_) == 0)
{
lean_object* v___x_2744_; 
v___x_2744_ = lean_box(0);
return v___x_2744_;
}
else
{
lean_object* v_val_2745_; 
v_val_2745_ = lean_ctor_get(v_x_2743_, 0);
lean_inc(v_val_2745_);
lean_dec_ref_known(v_x_2743_, 1);
if (lean_obj_tag(v_val_2745_) == 0)
{
lean_object* v_value_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
v_value_2746_ = lean_ctor_get(v_val_2745_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v_val_2745_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v_val_2745_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_value_2746_);
lean_dec(v_val_2745_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
lean_ctor_set_tag(v___x_2748_, 4);
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_value_2746_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
else
{
lean_object* v_value_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v_value_2754_ = lean_ctor_get(v_val_2745_, 0);
lean_inc(v_value_2754_);
lean_dec_ref_known(v_val_2745_, 1);
v___x_2755_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_2756_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2756_, 0, v_value_2754_);
lean_ctor_set(v___x_2756_, 1, v___x_2755_);
return v___x_2756_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__4(lean_object* v_x_2757_){
_start:
{
if (lean_obj_tag(v_x_2757_) == 0)
{
lean_object* v___x_2758_; 
v___x_2758_ = lean_box(0);
return v___x_2758_;
}
else
{
lean_object* v_val_2759_; uint8_t v___x_2760_; 
v_val_2759_ = lean_ctor_get(v_x_2757_, 0);
v___x_2760_ = lean_unbox(v_val_2759_);
switch(v___x_2760_)
{
case 0:
{
lean_object* v___x_2761_; 
v___x_2761_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__1));
return v___x_2761_;
}
case 1:
{
lean_object* v___x_2762_; 
v___x_2762_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__3));
return v___x_2762_;
}
default: 
{
lean_object* v___x_2763_; 
v___x_2763_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__5));
return v___x_2763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__4___boxed(lean_object* v_x_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__4(v_x_2764_);
lean_dec(v_x_2764_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__3(lean_object* v_x_2766_){
_start:
{
if (lean_obj_tag(v_x_2766_) == 0)
{
lean_object* v___x_2767_; 
v___x_2767_ = lean_box(0);
return v___x_2767_;
}
else
{
lean_object* v_val_2768_; uint8_t v___x_2769_; 
v_val_2768_ = lean_ctor_get(v_x_2766_, 0);
v___x_2769_ = lean_unbox(v_val_2768_);
switch(v___x_2769_)
{
case 0:
{
lean_object* v___x_2770_; 
v___x_2770_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__1));
return v___x_2770_;
}
case 1:
{
lean_object* v___x_2771_; 
v___x_2771_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__3));
return v___x_2771_;
}
default: 
{
lean_object* v___x_2772_; 
v___x_2772_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__5));
return v___x_2772_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__3___boxed(lean_object* v_x_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__3(v_x_2773_);
lean_dec(v_x_2773_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__0(lean_object* v_x_2775_){
_start:
{
if (lean_obj_tag(v_x_2775_) == 0)
{
lean_object* v___x_2776_; 
v___x_2776_ = lean_box(0);
return v___x_2776_;
}
else
{
lean_object* v_val_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2787_; 
v_val_2777_ = lean_ctor_get(v_x_2775_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v_x_2775_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2779_ = v_x_2775_;
v_isShared_2780_ = v_isSharedCheck_2787_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_val_2777_);
lean_dec(v_x_2775_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2787_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
size_t v_sz_2781_; size_t v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2785_; 
v_sz_2781_ = lean_array_size(v_val_2777_);
v___x_2782_ = ((size_t)0ULL);
v___x_2783_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2781_, v___x_2782_, v_val_2777_);
if (v_isShared_2780_ == 0)
{
lean_ctor_set_tag(v___x_2779_, 7);
lean_ctor_set(v___x_2779_, 0, v___x_2783_);
v___x_2785_ = v___x_2779_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v___x_2783_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__2(lean_object* v_x_2788_){
_start:
{
if (lean_obj_tag(v_x_2788_) == 0)
{
lean_object* v___x_2789_; 
v___x_2789_ = lean_box(0);
return v___x_2789_;
}
else
{
lean_object* v_val_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2800_; 
v_val_2790_ = lean_ctor_get(v_x_2788_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v_x_2788_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2792_ = v_x_2788_;
v_isShared_2793_ = v_isSharedCheck_2800_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_val_2790_);
lean_dec(v_x_2788_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2800_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
size_t v_sz_2794_; size_t v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2798_; 
v_sz_2794_ = lean_array_size(v_val_2790_);
v___x_2795_ = ((size_t)0ULL);
v___x_2796_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_2794_, v___x_2795_, v_val_2790_);
if (v_isShared_2793_ == 0)
{
lean_ctor_set_tag(v___x_2792_, 8);
lean_ctor_set(v___x_2792_, 0, v___x_2796_);
v___x_2798_ = v___x_2792_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2796_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__5(lean_object* v_x_2801_){
_start:
{
if (lean_obj_tag(v_x_2801_) == 0)
{
lean_object* v___x_2802_; 
v___x_2802_ = lean_box(0);
return v___x_2802_;
}
else
{
lean_object* v_val_2803_; uint8_t v___x_2804_; 
v_val_2803_ = lean_ctor_get(v_x_2801_, 0);
v___x_2804_ = lean_unbox(v_val_2803_);
switch(v___x_2804_)
{
case 0:
{
lean_object* v___x_2805_; 
v___x_2805_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__1));
return v___x_2805_;
}
case 1:
{
lean_object* v___x_2806_; 
v___x_2806_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__3));
return v___x_2806_;
}
default: 
{
lean_object* v___x_2807_; 
v___x_2807_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptionsStdin___lam__0___closed__5));
return v___x_2807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__5___boxed(lean_object* v_x_2808_){
_start:
{
lean_object* v_res_2809_; 
v_res_2809_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__5(v_x_2808_);
lean_dec(v_x_2808_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0(lean_object* v_x_2810_){
_start:
{
if (lean_obj_tag(v_x_2810_) == 0)
{
lean_object* v___x_2811_; 
v___x_2811_ = lean_box(0);
return v___x_2811_;
}
else
{
lean_object* v_val_2812_; lean_object* v_args_2813_; lean_object* v_cwd_2814_; lean_object* v_clearEnv_2815_; lean_object* v_env_2816_; lean_object* v_uid_2817_; lean_object* v_gid_2818_; lean_object* v_signal_2819_; lean_object* v_stdin_2820_; lean_object* v_stdout_2821_; lean_object* v_stderr_2822_; lean_object* v_windowsRawArguments_2823_; lean_object* v_detached_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v_val_2812_ = lean_ctor_get(v_x_2810_, 0);
lean_inc(v_val_2812_);
lean_dec_ref_known(v_x_2810_, 1);
v_args_2813_ = lean_ctor_get(v_val_2812_, 0);
lean_inc(v_args_2813_);
v_cwd_2814_ = lean_ctor_get(v_val_2812_, 1);
lean_inc(v_cwd_2814_);
v_clearEnv_2815_ = lean_ctor_get(v_val_2812_, 2);
lean_inc(v_clearEnv_2815_);
v_env_2816_ = lean_ctor_get(v_val_2812_, 3);
lean_inc(v_env_2816_);
v_uid_2817_ = lean_ctor_get(v_val_2812_, 4);
lean_inc(v_uid_2817_);
v_gid_2818_ = lean_ctor_get(v_val_2812_, 5);
lean_inc(v_gid_2818_);
v_signal_2819_ = lean_ctor_get(v_val_2812_, 6);
lean_inc(v_signal_2819_);
v_stdin_2820_ = lean_ctor_get(v_val_2812_, 7);
lean_inc(v_stdin_2820_);
v_stdout_2821_ = lean_ctor_get(v_val_2812_, 8);
lean_inc(v_stdout_2821_);
v_stderr_2822_ = lean_ctor_get(v_val_2812_, 9);
lean_inc(v_stderr_2822_);
v_windowsRawArguments_2823_ = lean_ctor_get(v_val_2812_, 10);
lean_inc(v_windowsRawArguments_2823_);
v_detached_2824_ = lean_ctor_get(v_val_2812_, 11);
lean_inc(v_detached_2824_);
lean_dec(v_val_2812_);
v___x_2825_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__0));
v___x_2826_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__0(v_args_2813_);
v___x_2827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2825_);
lean_ctor_set(v___x_2827_, 1, v___x_2826_);
v___x_2828_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__1));
v___x_2829_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__1(v_cwd_2814_);
v___x_2830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2828_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
v___x_2831_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__2));
v___x_2832_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_clearEnv_2815_);
lean_dec(v_clearEnv_2815_);
v___x_2833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2831_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
v___x_2834_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__3));
v___x_2835_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__2(v_env_2816_);
v___x_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2834_);
lean_ctor_set(v___x_2836_, 1, v___x_2835_);
v___x_2837_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__4));
v___x_2838_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_uid_2817_);
lean_dec(v_uid_2817_);
v___x_2839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2837_);
lean_ctor_set(v___x_2839_, 1, v___x_2838_);
v___x_2840_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__5));
v___x_2841_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_gid_2818_);
lean_dec(v_gid_2818_);
v___x_2842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2840_);
lean_ctor_set(v___x_2842_, 1, v___x_2841_);
v___x_2843_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandStatus___lam__0___closed__2));
v___x_2844_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2819_);
lean_dec(v_signal_2819_);
v___x_2845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2843_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
v___x_2846_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__6));
v___x_2847_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__3(v_stdin_2820_);
lean_dec(v_stdin_2820_);
v___x_2848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__0));
v___x_2850_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__4(v_stdout_2821_);
lean_dec(v_stdout_2821_);
v___x_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2849_);
lean_ctor_set(v___x_2851_, 1, v___x_2850_);
v___x_2852_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCommandOutput___lam__0___closed__1));
v___x_2853_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0_spec__5(v_stderr_2822_);
lean_dec(v_stderr_2822_);
v___x_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2852_);
lean_ctor_set(v___x_2854_, 1, v___x_2853_);
v___x_2855_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__7));
v___x_2856_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsRawArguments_2823_);
lean_dec(v_windowsRawArguments_2823_);
v___x_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2855_);
lean_ctor_set(v___x_2857_, 1, v___x_2856_);
v___x_2858_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCommandOptions___lam__0___closed__8));
v___x_2859_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_detached_2824_);
lean_dec(v_detached_2824_);
v___x_2860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2858_);
lean_ctor_set(v___x_2860_, 1, v___x_2859_);
v___x_2861_ = lean_unsigned_to_nat(12u);
v___x_2862_ = lean_mk_empty_array_with_capacity(v___x_2861_);
v___x_2863_ = lean_array_push(v___x_2862_, v___x_2827_);
v___x_2864_ = lean_array_push(v___x_2863_, v___x_2830_);
v___x_2865_ = lean_array_push(v___x_2864_, v___x_2833_);
v___x_2866_ = lean_array_push(v___x_2865_, v___x_2836_);
v___x_2867_ = lean_array_push(v___x_2866_, v___x_2839_);
v___x_2868_ = lean_array_push(v___x_2867_, v___x_2842_);
v___x_2869_ = lean_array_push(v___x_2868_, v___x_2845_);
v___x_2870_ = lean_array_push(v___x_2869_, v___x_2848_);
v___x_2871_ = lean_array_push(v___x_2870_, v___x_2851_);
v___x_2872_ = lean_array_push(v___x_2871_, v___x_2854_);
v___x_2873_ = lean_array_push(v___x_2872_, v___x_2857_);
v___x_2874_ = lean_array_push(v___x_2873_, v___x_2860_);
v___x_2875_ = l_Lasm_JS_Web_Support_fields(v___x_2874_);
lean_dec_ref(v___x_2874_);
return v___x_2875_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_new(lean_object* v_command_2885_, lean_object* v_options_2886_){
_start:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___y_2891_; 
v___x_2888_ = lean_unsigned_to_nat(2u);
v___x_2889_ = ((lean_object*)(l_Lasm_JS_Deno_Command_new___closed__3));
if (lean_obj_tag(v_command_2885_) == 0)
{
lean_object* v_value_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2906_; 
v_value_2899_ = lean_ctor_get(v_command_2885_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v_command_2885_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2901_ = v_command_2885_;
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_value_2899_);
lean_dec(v_command_2885_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2904_; 
if (v_isShared_2902_ == 0)
{
lean_ctor_set_tag(v___x_2901_, 4);
v___x_2904_ = v___x_2901_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_value_2899_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
v___y_2891_ = v___x_2904_;
goto v___jp_2890_;
}
}
}
else
{
lean_object* v_value_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v_value_2907_ = lean_ctor_get(v_command_2885_, 0);
lean_inc(v_value_2907_);
lean_dec_ref_known(v_command_2885_, 1);
v___x_2908_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_2909_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2909_, 0, v_value_2907_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___y_2891_ = v___x_2909_;
goto v___jp_2890_;
}
v___jp_2890_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; uint8_t v___x_2897_; lean_object* v___x_2898_; 
v___x_2892_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Command_new_spec__0(v_options_2886_);
v___x_2893_ = lean_mk_empty_array_with_capacity(v___x_2888_);
v___x_2894_ = lean_array_push(v___x_2893_, v___y_2891_);
v___x_2895_ = lean_array_push(v___x_2894_, v___x_2892_);
v___x_2896_ = l_Lasm_JS_Web_Support_args(v___x_2895_);
v___x_2897_ = 0;
v___x_2898_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_Command_new_spec__1(v___x_2889_, v___x_2896_, v___x_2897_);
return v___x_2898_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_new___boxed(lean_object* v_command_2910_, lean_object* v_options_2911_, lean_object* v_a_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l_Lasm_JS_Deno_Command_new(v_command_2910_, v_options_2911_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_output(lean_object* v_self_2914_){
_start:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2916_ = ((lean_object*)(l_Lasm_JS_Deno_ChildProcess_output___closed__0));
v___x_2917_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_2918_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0(v_self_2914_, v___x_2916_, v___x_2917_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_output___boxed(lean_object* v_self_2919_, lean_object* v_a_2920_){
_start:
{
lean_object* v_res_2921_; 
v_res_2921_ = l_Lasm_JS_Deno_Command_output(v_self_2919_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0_spec__0(lean_object* v_context_2922_, lean_object* v_bytes_2923_){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2923_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v_a_2926_; lean_object* v___x_2927_; 
v_a_2926_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_a_2926_);
lean_dec_ref_known(v___x_2925_, 1);
v___x_2927_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0_spec__1_spec__2(v_context_2922_, v_a_2926_);
return v___x_2927_;
}
else
{
lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
v_a_2928_ = lean_ctor_get(v___x_2925_, 0);
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2930_ = v___x_2925_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v___x_2925_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_a_2928_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0_spec__0___boxed(lean_object* v_context_2936_, lean_object* v_bytes_2937_, lean_object* v_a_2938_){
_start:
{
lean_object* v_res_2939_; 
v_res_2939_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0_spec__0(v_context_2936_, v_bytes_2937_);
lean_dec_ref(v_bytes_2937_);
lean_dec_ref(v_context_2936_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0(lean_object* v_o_2940_, lean_object* v_name_2941_, lean_object* v_args_2942_){
_start:
{
lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; uint64_t v___x_2947_; lean_object* v___x_2948_; 
v___x_2944_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSubprocessReadableStream___lam__0___closed__0));
v___x_2945_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2945_, 0, v_o_2940_);
lean_ctor_set(v___x_2945_, 1, v___x_2944_);
lean_inc_ref(v_name_2941_);
v___x_2946_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2946_, 0, v_name_2941_);
v___x_2947_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__1);
v___x_2948_ = l_Lasm_JS_Value_invokeRaw(v___x_2945_, v___x_2946_, v_args_2942_, v___x_2947_);
if (lean_obj_tag(v___x_2948_) == 0)
{
lean_object* v_a_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v_a_2949_ = lean_ctor_get(v___x_2948_, 0);
lean_inc(v_a_2949_);
lean_dec_ref_known(v___x_2948_, 1);
v___x_2950_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_ChildProcess_output_spec__0___closed__0));
v___x_2951_ = lean_string_append(v___x_2950_, v_name_2941_);
lean_dec_ref(v_name_2941_);
v___x_2952_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0_spec__0(v___x_2951_, v_a_2949_);
lean_dec(v_a_2949_);
lean_dec_ref(v___x_2951_);
return v___x_2952_;
}
else
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2960_; 
lean_dec_ref(v_name_2941_);
v_a_2953_ = lean_ctor_get(v___x_2948_, 0);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2948_);
if (v_isSharedCheck_2960_ == 0)
{
v___x_2955_ = v___x_2948_;
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v___x_2948_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v_a_2953_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0___boxed(lean_object* v_o_2961_, lean_object* v_name_2962_, lean_object* v_args_2963_, lean_object* v_a_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0(v_o_2961_, v_name_2962_, v_args_2963_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_outputSync(lean_object* v_self_2967_){
_start:
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2969_ = ((lean_object*)(l_Lasm_JS_Deno_Command_outputSync___closed__0));
v___x_2970_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_2971_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Command_outputSync_spec__0(v_self_2967_, v___x_2969_, v___x_2970_);
return v___x_2971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_outputSync___boxed(lean_object* v_self_2972_, lean_object* v_a_2973_){
_start:
{
lean_object* v_res_2974_; 
v_res_2974_ = l_Lasm_JS_Deno_Command_outputSync(v_self_2972_);
return v_res_2974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_spawn(lean_object* v_self_2976_){
_start:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2978_ = ((lean_object*)(l_Lasm_JS_Deno_Command_spawn___closed__0));
v___x_2979_ = lean_obj_once(&l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3, &l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Deno_SubprocessReadableStream_arrayBuffer___closed__3);
v___x_2980_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2976_, v___x_2978_, v___x_2979_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2980_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2980_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2996_; 
v_a_2989_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2991_ = v___x_2980_;
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2980_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2994_; 
if (v_isShared_2992_ == 0)
{
v___x_2994_ = v___x_2991_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2989_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Command_spawn___boxed(lean_object* v_self_2997_, lean_object* v_a_2998_){
_start:
{
lean_object* v_res_2999_; 
v_res_2999_ = l_Lasm_JS_Deno_Command_spawn(v_self_2997_);
return v_res_2999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_kill(double v_pid_3008_, lean_object* v_signo_3009_){
_start:
{
uint8_t v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3011_ = 0;
v___x_3012_ = lean_unsigned_to_nat(2u);
v___x_3013_ = ((lean_object*)(l_Lasm_JS_Deno_kill___closed__2));
v___x_3014_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3014_, 0, v_pid_3008_);
v___x_3015_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_ChildProcess_kill_spec__0(v_signo_3009_);
v___x_3016_ = lean_mk_empty_array_with_capacity(v___x_3012_);
v___x_3017_ = lean_array_push(v___x_3016_, v___x_3014_);
v___x_3018_ = lean_array_push(v___x_3017_, v___x_3015_);
v___x_3019_ = l_Lasm_JS_Web_Support_args(v___x_3018_);
v___x_3020_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_3013_, v___x_3019_, v___x_3011_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_kill___boxed(lean_object* v_pid_3021_, lean_object* v_signo_3022_, lean_object* v_a_3023_){
_start:
{
double v_pid_boxed_3024_; lean_object* v_res_3025_; 
v_pid_boxed_3024_ = lean_unbox_float(v_pid_3021_);
lean_dec_ref(v_pid_3021_);
v_res_3025_ = l_Lasm_JS_Deno_kill(v_pid_boxed_3024_, v_signo_3022_);
return v_res_3025_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Runtime(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Deno_Subprocess(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Deno_instInhabitedCommandOptionsStdin_default = _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStdin_default();
l_Lasm_JS_Deno_instInhabitedCommandOptionsStdin = _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStdin();
l_Lasm_JS_Deno_instInhabitedCommandOptionsStdout_default = _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStdout_default();
l_Lasm_JS_Deno_instInhabitedCommandOptionsStdout = _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStdout();
l_Lasm_JS_Deno_instInhabitedCommandOptionsStderr_default = _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStderr_default();
l_Lasm_JS_Deno_instInhabitedCommandOptionsStderr = _init_l_Lasm_JS_Deno_instInhabitedCommandOptionsStderr();
l_Lasm_JS_Deno_instFromJSCommandStatus = _init_l_Lasm_JS_Deno_instFromJSCommandStatus();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSCommandStatus);
l_Lasm_JS_Deno_instFromJSCommandOutput = _init_l_Lasm_JS_Deno_instFromJSCommandOutput();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSCommandOutput);
l_Lasm_JS_Deno_instToJSCommandOptions = _init_l_Lasm_JS_Deno_instToJSCommandOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSCommandOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
