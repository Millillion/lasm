// Lean compiler output
// Module: Lasm.JS.Node.Serve
// Imports: public import Init public meta import Init public import Lasm.JS public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Fetch
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
lean_object* lean_io_promise_new();
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_js_await_into(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_wait(lean_object*);
lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Internal_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(lean_object*);
lean_object* lean_get_stdout();
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Lasm_JS_obj(lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__0_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__1_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__1_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Server_stop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lasm_JS_Node_Server_stop___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Server_stop___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_stop(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_stop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__0_value)} };
static const lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_Server_finished___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_Server_finished___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_Server_finished___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Server_finished___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Server_finished___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "finished"};
static const lean_object* l_Lasm_JS_Node_Server_finished___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Server_finished___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Serve_start___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Lasm_JS_Node_Serve_start___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Serve_start___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Serve_start___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "lasm:node-serve"};
static const lean_object* l_Lasm_JS_Node_Serve_start___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Serve_start___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_Serve_start___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "serve"};
static const lean_object* l_Lasm_JS_Node_Serve_start___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Serve_start___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Node_Serve_start___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Serve_start___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Serve_start___closed__1_value),((lean_object*)&l_Lasm_JS_Node_Serve_start___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Serve_start___closed__3 = (const lean_object*)&l_Lasm_JS_Node_Serve_start___closed__3_value;
static const lean_array_object l_Lasm_JS_Node_Serve_start___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_Serve_start___closed__4 = (const lean_object*)&l_Lasm_JS_Node_Serve_start___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Serve_start(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Serve_start___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_serve___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "the handler failed"};
static const lean_object* l_Lasm_JS_Node_serve___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_serve___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Value.await"};
static const lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__1(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Web.Request"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__3_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_serve___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_serve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Listening on "};
static const lean_object* l_Lasm_JS_Node_serve___closed__0 = (const lean_object*)&l_Lasm_JS_Node_serve___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_serve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fetch"};
static const lean_object* l_Lasm_JS_Node_serve___closed__1 = (const lean_object*)&l_Lasm_JS_Node_serve___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_serve___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_JS_Node_serve___closed__2 = (const lean_object*)&l_Lasm_JS_Node_serve___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_serve___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Node_serve___closed__3 = (const lean_object*)&l_Lasm_JS_Node_serve___closed__3_value;
static const lean_string_object l_Lasm_JS_Node_serve___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Node_serve___closed__4 = (const lean_object*)&l_Lasm_JS_Node_serve___closed__4_value;
static const lean_string_object l_Lasm_JS_Node_serve___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_JS_Node_serve___closed__5 = (const lean_object*)&l_Lasm_JS_Node_serve___closed__5_value;
static const lean_string_object l_Lasm_JS_Node_serve___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_JS_Node_serve___closed__6 = (const lean_object*)&l_Lasm_JS_Node_serve___closed__6_value;
static const lean_array_object l_Lasm_JS_Node_serve___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lasm_JS_Node_serve___closed__3_value),((lean_object*)&l_Lasm_JS_Node_serve___closed__2_value),((lean_object*)&l_Lasm_JS_Node_serve___closed__6_value)}};
static const lean_object* l_Lasm_JS_Node_serve___closed__7 = (const lean_object*)&l_Lasm_JS_Node_serve___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1_; uint64_t v___x_2_; 
v___x_1_ = 0;
v___x_2_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0(uint8_t v_await_3_, uint64_t v_extra_4_){
_start:
{
uint64_t v___x_5_; uint64_t v___y_7_; 
v___x_5_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0___closed__0);
if (v_await_3_ == 0)
{
uint64_t v___x_10_; 
v___x_10_ = 0ULL;
v___y_7_ = v___x_10_;
goto v___jp_6_;
}
else
{
uint64_t v___x_11_; 
v___x_11_ = 2ULL;
v___y_7_ = v___x_11_;
goto v___jp_6_;
}
v___jp_6_:
{
uint64_t v___x_8_; uint64_t v___x_9_; 
v___x_8_ = lean_uint64_lor(v___x_5_, v___y_7_);
v___x_9_ = lean_uint64_lor(v___x_8_, v_extra_4_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0___boxed(lean_object* v_await_12_, lean_object* v_extra_13_){
_start:
{
uint8_t v_await_boxed_14_; uint64_t v_extra_boxed_15_; uint64_t v_res_16_; lean_object* v_r_17_; 
v_await_boxed_14_ = lean_unbox(v_await_12_);
v_extra_boxed_15_ = lean_unbox_uint64(v_extra_13_);
lean_dec_ref(v_extra_13_);
v_res_16_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0(v_await_boxed_14_, v_extra_boxed_15_);
v_r_17_ = lean_box_uint64(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__2(lean_object* v___f_18_, lean_object* v_x_19_){
_start:
{
if (lean_obj_tag(v_x_19_) == 0)
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_29_; 
lean_dec_ref(v___f_18_);
v_a_21_ = lean_ctor_get(v_x_19_, 0);
v_isSharedCheck_29_ = !lean_is_exclusive(v_x_19_);
if (v_isSharedCheck_29_ == 0)
{
v___x_23_ = v_x_19_;
v_isShared_24_ = v_isSharedCheck_29_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v_x_19_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_29_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_28_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
lean_object* v___x_27_; 
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
}
}
else
{
lean_object* v_a_30_; lean_object* v___x_31_; 
v_a_30_ = lean_ctor_get(v_x_19_, 0);
lean_inc(v_a_30_);
lean_dec_ref_known(v_x_19_, 1);
v___x_31_ = lean_apply_2(v___f_18_, v_a_30_, lean_box(0));
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__2___boxed(lean_object* v___f_32_, lean_object* v_x_33_, lean_object* v___y_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__2(v___f_32_, v_x_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__8(lean_object* v___f_36_, lean_object* v_x_37_){
_start:
{
if (lean_obj_tag(v_x_37_) == 0)
{
lean_object* v___x_39_; 
lean_dec_ref(v___f_36_);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v_x_37_);
return v___x_39_;
}
else
{
lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_51_; 
v_isSharedCheck_51_ = !lean_is_exclusive(v_x_37_);
if (v_isSharedCheck_51_ == 0)
{
lean_object* v_unused_52_; 
v_unused_52_ = lean_ctor_get(v_x_37_, 0);
lean_dec(v_unused_52_);
v___x_41_ = v_x_37_;
v_isShared_42_ = v_isSharedCheck_51_;
goto v_resetjp_40_;
}
else
{
lean_dec(v_x_37_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_51_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_43_; uint8_t v___x_44_; lean_object* v___x_45_; lean_object* v___x_47_; 
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = 0;
v___x_45_ = lean_io_promise_new();
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 0, v___x_45_);
v___x_47_ = v___x_41_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v___x_45_);
v___x_47_ = v_reuseFailAlloc_50_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
v___x_49_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_43_, v___x_44_, v___x_48_, v___f_36_);
return v___x_49_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__8___boxed(lean_object* v___f_53_, lean_object* v_x_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__8(v___f_53_, v_x_54_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__1(lean_object* v___f_57_, lean_object* v_bytes_58_){
_start:
{
lean_object* v___x_60_; uint8_t v___x_61_; lean_object* v_val_63_; lean_object* v___x_66_; 
v___x_60_ = lean_unsigned_to_nat(0u);
v___x_61_ = 0;
v___x_66_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_58_);
if (lean_obj_tag(v___x_66_) == 0)
{
lean_object* v_a_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_74_; 
v_a_67_ = lean_ctor_get(v___x_66_, 0);
v_isSharedCheck_74_ = !lean_is_exclusive(v___x_66_);
if (v_isSharedCheck_74_ == 0)
{
v___x_69_ = v___x_66_;
v_isShared_70_ = v_isSharedCheck_74_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_a_67_);
lean_dec(v___x_66_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_74_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_72_; 
if (v_isShared_70_ == 0)
{
lean_ctor_set_tag(v___x_69_, 1);
v___x_72_ = v___x_69_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_a_67_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
v_val_63_ = v___x_72_;
goto v___jp_62_;
}
}
}
else
{
lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_82_; 
v_a_75_ = lean_ctor_get(v___x_66_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_66_);
if (v_isSharedCheck_82_ == 0)
{
v___x_77_ = v___x_66_;
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_dec(v___x_66_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
lean_ctor_set_tag(v___x_77_, 0);
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_a_75_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
v_val_63_ = v___x_80_;
goto v___jp_62_;
}
}
}
v___jp_62_:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v_val_63_);
v___x_65_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_60_, v___x_61_, v___x_64_, v___f_57_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__1___boxed(lean_object* v___f_83_, lean_object* v_bytes_84_, lean_object* v___y_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__1(v___f_83_, v_bytes_84_);
lean_dec_ref(v_bytes_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_87_, lean_object* v_x_88_){
_start:
{
if (lean_obj_tag(v_x_88_) == 0)
{
lean_object* v_a_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_101_; 
v_a_90_ = lean_ctor_get(v_x_88_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_88_);
if (v_isSharedCheck_101_ == 0)
{
v___x_92_ = v_x_88_;
v_isShared_93_ = v_isSharedCheck_101_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_a_90_);
lean_dec(v_x_88_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_101_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_94_ = lean_io_error_to_string(v_a_90_);
v___x_95_ = lean_string_append(v_failurePrefix_87_, v___x_94_);
lean_dec_ref(v___x_94_);
v___x_96_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 0, v___x_96_);
v___x_98_ = v___x_92_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_96_);
v___x_98_ = v_reuseFailAlloc_100_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; 
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
}
else
{
lean_object* v___x_102_; 
lean_dec_ref(v_failurePrefix_87_);
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v_x_88_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_103_, lean_object* v_x_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__4(v_failurePrefix_103_, v_x_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___redArg(){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = lean_box(0);
v___x_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_a_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___redArg();
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__0(lean_object* v_x_112_){
_start:
{
lean_object* v_val_115_; 
if (lean_obj_tag(v_x_112_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_125_; 
v_a_117_ = lean_ctor_get(v_x_112_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_125_ == 0)
{
v___x_119_ = v_x_112_;
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v_x_112_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_a_117_);
v___x_122_ = v_reuseFailAlloc_124_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; 
v___x_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
return v___x_123_;
}
}
}
else
{
lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_134_; 
v_isSharedCheck_134_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_134_ == 0)
{
lean_object* v_unused_135_; 
v_unused_135_ = lean_ctor_get(v_x_112_, 0);
lean_dec(v_unused_135_);
v___x_127_ = v_x_112_;
v_isShared_128_ = v_isSharedCheck_134_;
goto v_resetjp_126_;
}
else
{
lean_dec(v_x_112_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_134_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v_a_130_; lean_object* v___x_132_; 
v___x_129_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___redArg();
v_a_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_a_130_);
lean_dec_ref(v___x_129_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v_a_130_);
v___x_132_ = v___x_127_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_a_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
v_val_115_ = v___x_132_;
goto v___jp_114_;
}
}
}
v___jp_114_:
{
lean_object* v___x_116_; 
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v_val_115_);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__0___boxed(lean_object* v_x_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__0(v_x_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__5(lean_object* v___x_139_, uint8_t v___x_140_, lean_object* v___f_141_, lean_object* v_a_142_, uint32_t v_op_143_, uint64_t v_flags_144_, lean_object* v_payload_145_, lean_object* v_x_146_){
_start:
{
lean_object* v_val_149_; 
if (lean_obj_tag(v_x_146_) == 0)
{
lean_object* v___x_152_; 
lean_dec_ref(v___f_141_);
lean_dec(v___x_139_);
v___x_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_152_, 0, v_x_146_);
return v___x_152_;
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_167_; 
v_a_153_ = lean_ctor_get(v_x_146_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v_x_146_);
if (v_isSharedCheck_167_ == 0)
{
v___x_155_ = v_x_146_;
v_isShared_156_ = v_isSharedCheck_167_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v_x_146_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_167_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
uint32_t v___x_157_; lean_object* v___x_158_; 
v___x_157_ = 0;
v___x_158_ = lasm_js_call_into(v_a_142_, v_op_143_, v___x_157_, v_flags_144_, v_a_153_, v_payload_145_);
lean_dec(v_a_153_);
if (lean_obj_tag(v___x_158_) == 0)
{
lean_object* v_a_159_; lean_object* v___x_161_; 
v_a_159_ = lean_ctor_get(v___x_158_, 0);
lean_inc(v_a_159_);
lean_dec_ref_known(v___x_158_, 1);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 0, v_a_159_);
v___x_161_ = v___x_155_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
v_val_149_ = v___x_161_;
goto v___jp_148_;
}
}
else
{
lean_object* v_a_163_; lean_object* v___x_165_; 
v_a_163_ = lean_ctor_get(v___x_158_, 0);
lean_inc(v_a_163_);
lean_dec_ref_known(v___x_158_, 1);
if (v_isShared_156_ == 0)
{
lean_ctor_set_tag(v___x_155_, 0);
lean_ctor_set(v___x_155_, 0, v_a_163_);
v___x_165_ = v___x_155_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
v_val_149_ = v___x_165_;
goto v___jp_148_;
}
}
}
}
v___jp_148_:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_150_, 0, v_val_149_);
v___x_151_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_139_, v___x_140_, v___x_150_, v___f_141_);
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__5___boxed(lean_object* v___x_168_, lean_object* v___x_169_, lean_object* v___f_170_, lean_object* v_a_171_, lean_object* v_op_172_, lean_object* v_flags_173_, lean_object* v_payload_174_, lean_object* v_x_175_, lean_object* v___y_176_){
_start:
{
uint8_t v___x_1112__boxed_177_; uint32_t v_op_boxed_178_; uint64_t v_flags_boxed_179_; lean_object* v_res_180_; 
v___x_1112__boxed_177_ = lean_unbox(v___x_169_);
v_op_boxed_178_ = lean_unbox_uint32(v_op_172_);
lean_dec(v_op_172_);
v_flags_boxed_179_ = lean_unbox_uint64(v_flags_173_);
lean_dec_ref(v_flags_173_);
v_res_180_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__5(v___x_168_, v___x_1112__boxed_177_, v___f_170_, v_a_171_, v_op_boxed_178_, v_flags_boxed_179_, v_payload_174_, v_x_175_);
lean_dec(v_payload_174_);
lean_dec(v_a_171_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__3(lean_object* v_a_181_, lean_object* v_x_182_){
_start:
{
if (lean_obj_tag(v_x_182_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_192_; 
v_a_184_ = lean_ctor_get(v_x_182_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v_x_182_);
if (v_isSharedCheck_192_ == 0)
{
v___x_186_ = v_x_182_;
v_isShared_187_ = v_isSharedCheck_192_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v_x_182_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_192_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_191_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_190_; 
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
return v___x_190_;
}
}
}
else
{
lean_object* v___x_193_; 
lean_dec_ref_known(v_x_182_, 1);
v___x_193_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_181_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__3___boxed(lean_object* v_a_194_, lean_object* v_x_195_, lean_object* v___y_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__3(v_a_194_, v_x_195_);
lean_dec(v_a_194_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__7(lean_object* v___f_198_, lean_object* v_a_199_, uint32_t v_op_200_, uint64_t v_flags_201_, lean_object* v_payload_202_, lean_object* v_x_203_){
_start:
{
if (lean_obj_tag(v_x_203_) == 0)
{
lean_object* v___x_205_; 
lean_dec_ref(v___f_198_);
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v_x_203_);
return v___x_205_;
}
else
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_226_; 
v_a_206_ = lean_ctor_get(v_x_203_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v_x_203_);
if (v_isSharedCheck_226_ == 0)
{
v___x_208_ = v_x_203_;
v_isShared_209_ = v_isSharedCheck_226_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v_x_203_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_226_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
uint32_t v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; lean_object* v_val_214_; lean_object* v___x_217_; 
v___x_210_ = 0;
v___x_211_ = lean_unsigned_to_nat(0u);
v___x_212_ = 0;
v___x_217_ = lasm_js_call_into(v_a_199_, v_op_200_, v___x_210_, v_flags_201_, v_a_206_, v_payload_202_);
lean_dec(v_a_206_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_a_218_);
lean_dec_ref_known(v___x_217_, 1);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v_a_218_);
v___x_220_ = v___x_208_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
v_val_214_ = v___x_220_;
goto v___jp_213_;
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_224_; 
v_a_222_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_a_222_);
lean_dec_ref_known(v___x_217_, 1);
if (v_isShared_209_ == 0)
{
lean_ctor_set_tag(v___x_208_, 0);
lean_ctor_set(v___x_208_, 0, v_a_222_);
v___x_224_ = v___x_208_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
v_val_214_ = v___x_224_;
goto v___jp_213_;
}
}
v___jp_213_:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v_val_214_);
v___x_216_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_211_, v___x_212_, v___x_215_, v___f_198_);
return v___x_216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__7___boxed(lean_object* v___f_227_, lean_object* v_a_228_, lean_object* v_op_229_, lean_object* v_flags_230_, lean_object* v_payload_231_, lean_object* v_x_232_, lean_object* v___y_233_){
_start:
{
uint32_t v_op_boxed_234_; uint64_t v_flags_boxed_235_; lean_object* v_res_236_; 
v_op_boxed_234_ = lean_unbox_uint32(v_op_229_);
lean_dec(v_op_229_);
v_flags_boxed_235_ = lean_unbox_uint64(v_flags_230_);
lean_dec_ref(v_flags_230_);
v_res_236_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__7(v___f_227_, v_a_228_, v_op_boxed_234_, v_flags_boxed_235_, v_payload_231_, v_x_232_);
lean_dec(v_payload_231_);
lean_dec(v_a_228_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_237_, uint32_t v_op_238_, uint64_t v_flags_239_, lean_object* v_payload_240_, lean_object* v___f_241_, lean_object* v___f_242_, lean_object* v___f_243_, lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_254_; 
lean_dec_ref(v___f_243_);
lean_dec_ref(v___f_242_);
lean_dec_ref(v___f_241_);
lean_dec(v_payload_240_);
v_a_246_ = lean_ctor_get(v_x_244_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_254_ == 0)
{
v___x_248_ = v_x_244_;
v_isShared_249_ = v_isSharedCheck_254_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v_x_244_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_254_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_246_);
v___x_251_ = v_reuseFailAlloc_253_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; 
v___x_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
return v___x_252_;
}
}
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_301_; 
v_a_255_ = lean_ctor_get(v_x_244_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_301_ == 0)
{
v___x_257_ = v_x_244_;
v_isShared_258_ = v_isSharedCheck_301_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v_x_244_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_301_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_259_ = lean_string_utf8_byte_size(v_failurePrefix_237_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_nat_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___f_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___f_266_; lean_object* v_val_268_; lean_object* v___x_273_; 
lean_dec_ref(v___f_243_);
lean_inc(v_a_255_);
v___f_262_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_262_, 0, v_a_255_);
v___x_263_ = lean_box(v___x_261_);
v___x_264_ = lean_box_uint32(v_op_238_);
v___x_265_ = lean_box_uint64(v_flags_239_);
lean_inc(v_payload_240_);
v___f_266_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_266_, 0, v___x_260_);
lean_closure_set(v___f_266_, 1, v___x_263_);
lean_closure_set(v___f_266_, 2, v___f_262_);
lean_closure_set(v___f_266_, 3, v_a_255_);
lean_closure_set(v___f_266_, 4, v___x_264_);
lean_closure_set(v___f_266_, 5, v___x_265_);
lean_closure_set(v___f_266_, 6, v_payload_240_);
v___x_273_ = l_Lasm_JS_Wire_encodeIO(v_payload_240_);
lean_dec(v_payload_240_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v_a_274_; lean_object* v___x_276_; 
v_a_274_ = lean_ctor_get(v___x_273_, 0);
lean_inc(v_a_274_);
lean_dec_ref_known(v___x_273_, 1);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v_a_274_);
v___x_276_ = v___x_257_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_a_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
v_val_268_ = v___x_276_;
goto v___jp_267_;
}
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; 
v_a_278_ = lean_ctor_get(v___x_273_, 0);
lean_inc(v_a_278_);
lean_dec_ref_known(v___x_273_, 1);
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 0);
lean_ctor_set(v___x_257_, 0, v_a_278_);
v___x_280_ = v___x_257_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
v_val_268_ = v___x_280_;
goto v___jp_267_;
}
}
v___jp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_269_, 0, v_val_268_);
v___x_270_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_260_, v___x_261_, v___x_269_, v___f_266_);
v___x_271_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_260_, v___x_261_, v___x_270_, v___f_241_);
v___x_272_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_260_, v___x_261_, v___x_271_, v___f_242_);
return v___x_272_;
}
}
else
{
lean_object* v___f_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___f_285_; uint8_t v___x_286_; lean_object* v_val_288_; lean_object* v___x_292_; 
lean_dec_ref(v___f_242_);
lean_dec_ref(v___f_241_);
lean_inc(v_a_255_);
v___f_282_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_282_, 0, v_a_255_);
v___x_283_ = lean_box_uint32(v_op_238_);
v___x_284_ = lean_box_uint64(v_flags_239_);
lean_inc(v_payload_240_);
v___f_285_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_285_, 0, v___f_282_);
lean_closure_set(v___f_285_, 1, v_a_255_);
lean_closure_set(v___f_285_, 2, v___x_283_);
lean_closure_set(v___f_285_, 3, v___x_284_);
lean_closure_set(v___f_285_, 4, v_payload_240_);
v___x_286_ = 0;
v___x_292_ = l_Lasm_JS_Wire_encodeIO(v_payload_240_);
lean_dec(v_payload_240_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_295_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v_a_293_);
v___x_295_ = v___x_257_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
v_val_288_ = v___x_295_;
goto v___jp_287_;
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; 
v_a_297_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_292_, 1);
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 0);
lean_ctor_set(v___x_257_, 0, v_a_297_);
v___x_299_ = v___x_257_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
v_val_288_ = v___x_299_;
goto v___jp_287_;
}
}
v___jp_287_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_289_, 0, v_val_288_);
v___x_290_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_260_, v___x_286_, v___x_289_, v___f_285_);
v___x_291_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_260_, v___x_286_, v___x_290_, v___f_243_);
return v___x_291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_302_, lean_object* v_op_303_, lean_object* v_flags_304_, lean_object* v_payload_305_, lean_object* v___f_306_, lean_object* v___f_307_, lean_object* v___f_308_, lean_object* v_x_309_, lean_object* v___y_310_){
_start:
{
uint32_t v_op_boxed_311_; uint64_t v_flags_boxed_312_; lean_object* v_res_313_; 
v_op_boxed_311_ = lean_unbox_uint32(v_op_303_);
lean_dec(v_op_303_);
v_flags_boxed_312_ = lean_unbox_uint64(v_flags_304_);
lean_dec_ref(v_flags_304_);
v_res_313_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__6(v_failurePrefix_302_, v_op_boxed_311_, v_flags_boxed_312_, v_payload_305_, v___f_306_, v___f_307_, v___f_308_, v_x_309_);
lean_dec_ref(v_failurePrefix_302_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1(lean_object* v_context_319_, uint32_t v_op_320_, uint64_t v_flags_321_, lean_object* v_payload_322_, lean_object* v_failurePrefix_323_){
_start:
{
lean_object* v___f_325_; lean_object* v___f_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___f_329_; lean_object* v___f_330_; lean_object* v___x_331_; uint8_t v___x_332_; lean_object* v_val_334_; lean_object* v___x_337_; 
v___f_325_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___closed__2));
lean_inc_ref(v_failurePrefix_323_);
v___f_326_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_326_, 0, v_failurePrefix_323_);
v___x_327_ = lean_box_uint32(v_op_320_);
v___x_328_ = lean_box_uint64(v_flags_321_);
v___f_329_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_329_, 0, v_failurePrefix_323_);
lean_closure_set(v___f_329_, 1, v___x_327_);
lean_closure_set(v___f_329_, 2, v___x_328_);
lean_closure_set(v___f_329_, 3, v_payload_322_);
lean_closure_set(v___f_329_, 4, v___f_326_);
lean_closure_set(v___f_329_, 5, v___f_325_);
lean_closure_set(v___f_329_, 6, v___f_325_);
v___f_330_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_330_, 0, v___f_329_);
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = 0;
v___x_337_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_337_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_337_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
lean_ctor_set_tag(v___x_340_, 1);
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
v_val_334_ = v___x_343_;
goto v___jp_333_;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
v_a_346_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_337_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_337_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
lean_ctor_set_tag(v___x_348_, 0);
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
v_val_334_ = v___x_351_;
goto v___jp_333_;
}
}
}
v___jp_333_:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_335_, 0, v_val_334_);
v___x_336_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_331_, v___x_332_, v___x_335_, v___f_330_);
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___boxed(lean_object* v_context_354_, lean_object* v_op_355_, lean_object* v_flags_356_, lean_object* v_payload_357_, lean_object* v_failurePrefix_358_, lean_object* v_a_359_){
_start:
{
uint32_t v_op_boxed_360_; uint64_t v_flags_boxed_361_; lean_object* v_res_362_; 
v_op_boxed_360_ = lean_unbox_uint32(v_op_355_);
lean_dec(v_op_355_);
v_flags_boxed_361_ = lean_unbox_uint64(v_flags_356_);
lean_dec_ref(v_flags_356_);
v_res_362_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1(v_context_354_, v_op_boxed_360_, v_flags_boxed_361_, v_payload_357_, v_failurePrefix_358_);
lean_dec_ref(v_context_354_);
return v_res_362_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__2(void){
_start:
{
uint64_t v___x_365_; uint8_t v___x_366_; uint64_t v___x_367_; 
v___x_365_ = 8ULL;
v___x_366_ = 0;
v___x_367_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__0(v___x_366_, v___x_365_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0(lean_object* v_o_368_, lean_object* v_name_369_, lean_object* v_args_370_){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; uint32_t v___x_377_; uint64_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_372_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
v___x_373_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_373_, 0, v_o_368_);
lean_ctor_set(v___x_373_, 1, v___x_372_);
lean_inc_ref(v_name_369_);
v___x_374_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_374_, 0, v_name_369_);
v___x_375_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__1));
v___x_376_ = lean_string_append(v___x_375_, v_name_369_);
lean_dec_ref(v_name_369_);
v___x_377_ = 205;
v___x_378_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__2, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__2_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__2);
v___x_379_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_379_, 0, v_args_370_);
v___x_380_ = lean_unsigned_to_nat(3u);
v___x_381_ = lean_mk_empty_array_with_capacity(v___x_380_);
v___x_382_ = lean_array_push(v___x_381_, v___x_373_);
v___x_383_ = lean_array_push(v___x_382_, v___x_374_);
v___x_384_ = lean_array_push(v___x_383_, v___x_379_);
v___x_385_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
v___x_386_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1(v___x_376_, v___x_377_, v___x_378_, v___x_385_, v___x_372_);
lean_dec_ref(v___x_376_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___boxed(lean_object* v_o_387_, lean_object* v_name_388_, lean_object* v_args_389_, lean_object* v___y_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0(v_o_387_, v_name_388_, v_args_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_stop(lean_object* v_server_393_, uint8_t v_closeActiveConnections_394_){
_start:
{
lean_object* v_val_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_val_396_ = lean_ctor_get(v_server_393_, 3);
lean_inc(v_val_396_);
lean_dec_ref(v_server_393_);
v___x_397_ = ((lean_object*)(l_Lasm_JS_Node_Server_stop___closed__0));
v___x_398_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_398_, 0, v_closeActiveConnections_394_);
v___x_399_ = lean_unsigned_to_nat(1u);
v___x_400_ = lean_mk_empty_array_with_capacity(v___x_399_);
v___x_401_ = lean_array_push(v___x_400_, v___x_398_);
v___x_402_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0(v_val_396_, v___x_397_, v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_stop___boxed(lean_object* v_server_403_, lean_object* v_closeActiveConnections_404_, lean_object* v_a_405_){
_start:
{
uint8_t v_closeActiveConnections_boxed_406_; lean_object* v_res_407_; 
v_closeActiveConnections_boxed_406_ = lean_unbox(v_closeActiveConnections_404_);
v_res_407_ = l_Lasm_JS_Node_Server_stop(v_server_403_, v_closeActiveConnections_boxed_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2(lean_object* v_context_408_, lean_object* v_d_409_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___redArg();
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___boxed(lean_object* v_context_412_, lean_object* v_d_413_, lean_object* v_a_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2(v_context_412_, v_d_413_);
lean_dec(v_d_413_);
lean_dec_ref(v_context_412_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__0(lean_object* v_a_416_, lean_object* v___f_417_, lean_object* v_x_418_){
_start:
{
if (lean_obj_tag(v_x_418_) == 0)
{
lean_object* v___x_420_; 
lean_dec_ref(v___f_417_);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v_x_418_);
return v___x_420_;
}
else
{
lean_object* v___x_421_; uint8_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec_ref_known(v_x_418_, 1);
v___x_421_ = lean_unsigned_to_nat(0u);
v___x_422_ = 0;
v___x_423_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_416_);
v___x_424_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_421_, v___x_422_, v___x_423_, v___f_417_);
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__0___boxed(lean_object* v_a_425_, lean_object* v___f_426_, lean_object* v_x_427_, lean_object* v___y_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__0(v_a_425_, v___f_426_, v_x_427_);
lean_dec(v_a_425_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__2(lean_object* v___f_430_, lean_object* v_a_431_, lean_object* v___x_432_, lean_object* v_x_433_){
_start:
{
if (lean_obj_tag(v_x_433_) == 0)
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_443_; 
lean_dec_ref(v___f_430_);
v_a_435_ = lean_ctor_get(v_x_433_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v_x_433_);
if (v_isSharedCheck_443_ == 0)
{
v___x_437_ = v_x_433_;
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v_x_433_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_435_);
v___x_440_ = v_reuseFailAlloc_442_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
lean_object* v___x_441_; 
v___x_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
return v___x_441_;
}
}
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_463_; 
v_a_444_ = lean_ctor_get(v_x_433_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v_x_433_);
if (v_isSharedCheck_463_ == 0)
{
v___x_446_ = v_x_433_;
v_isShared_447_ = v_isSharedCheck_463_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v_x_433_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_463_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; uint8_t v___x_449_; lean_object* v_val_451_; lean_object* v___x_454_; 
v___x_448_ = lean_unsigned_to_nat(0u);
v___x_449_ = 0;
v___x_454_ = lasm_js_await_into(v_a_431_, v_a_444_, v___x_432_);
lean_dec(v_a_444_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_457_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref_known(v___x_454_, 1);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v_a_455_);
v___x_457_ = v___x_446_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_a_455_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
v_val_451_ = v___x_457_;
goto v___jp_450_;
}
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; 
v_a_459_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_454_, 1);
if (v_isShared_447_ == 0)
{
lean_ctor_set_tag(v___x_446_, 0);
lean_ctor_set(v___x_446_, 0, v_a_459_);
v___x_461_ = v___x_446_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
v_val_451_ = v___x_461_;
goto v___jp_450_;
}
}
v___jp_450_:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v_val_451_);
v___x_453_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_448_, v___x_449_, v___x_452_, v___f_430_);
return v___x_453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__2___boxed(lean_object* v___f_464_, lean_object* v_a_465_, lean_object* v___x_466_, lean_object* v_x_467_, lean_object* v___y_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__2(v___f_464_, v_a_465_, v___x_466_, v_x_467_);
lean_dec(v___x_466_);
lean_dec(v_a_465_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__3(lean_object* v___f_470_, lean_object* v_v_471_, lean_object* v_x_472_){
_start:
{
if (lean_obj_tag(v_x_472_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_482_; 
lean_dec(v_v_471_);
lean_dec_ref(v___f_470_);
v_a_474_ = lean_ctor_get(v_x_472_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v_x_472_);
if (v_isSharedCheck_482_ == 0)
{
v___x_476_ = v_x_472_;
v_isShared_477_ = v_isSharedCheck_482_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v_x_472_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_482_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_481_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_480_; 
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
}
}
else
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_506_; 
v_a_483_ = lean_ctor_get(v_x_472_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v_x_472_);
if (v_isSharedCheck_506_ == 0)
{
v___x_485_ = v_x_472_;
v_isShared_486_ = v_isSharedCheck_506_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v_x_472_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_506_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___f_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___f_490_; lean_object* v___x_491_; uint8_t v___x_492_; lean_object* v_val_494_; lean_object* v___x_497_; 
lean_inc(v_a_483_);
v___f_487_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__0___boxed), 4, 2);
lean_closure_set(v___f_487_, 0, v_a_483_);
lean_closure_set(v___f_487_, 1, v___f_470_);
v___x_488_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
v___x_489_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_489_, 0, v_v_471_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
lean_inc_ref(v___x_489_);
v___f_490_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__2___boxed), 5, 3);
lean_closure_set(v___f_490_, 0, v___f_487_);
lean_closure_set(v___f_490_, 1, v_a_483_);
lean_closure_set(v___f_490_, 2, v___x_489_);
v___x_491_ = lean_unsigned_to_nat(0u);
v___x_492_ = 0;
v___x_497_ = l_Lasm_JS_Wire_encodeIO(v___x_489_);
lean_dec_ref_known(v___x_489_, 2);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; lean_object* v___x_500_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_a_498_);
lean_dec_ref_known(v___x_497_, 1);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v_a_498_);
v___x_500_ = v___x_485_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_498_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
v_val_494_ = v___x_500_;
goto v___jp_493_;
}
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; 
v_a_502_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_497_, 1);
if (v_isShared_486_ == 0)
{
lean_ctor_set_tag(v___x_485_, 0);
lean_ctor_set(v___x_485_, 0, v_a_502_);
v___x_504_ = v___x_485_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
v_val_494_ = v___x_504_;
goto v___jp_493_;
}
}
v___jp_493_:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v_val_494_);
v___x_496_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_491_, v___x_492_, v___x_495_, v___f_490_);
return v___x_496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__3___boxed(lean_object* v___f_507_, lean_object* v_v_508_, lean_object* v_x_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__3(v___f_507_, v_v_508_, v_x_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__1(lean_object* v___f_512_, lean_object* v_x_513_){
_start:
{
if (lean_obj_tag(v_x_513_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref(v___f_512_);
v_a_515_ = lean_ctor_get(v_x_513_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_523_ == 0)
{
v___x_517_ = v_x_513_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v_x_513_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_522_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
lean_object* v___x_521_; 
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
return v___x_521_;
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_543_; 
v_a_524_ = lean_ctor_get(v_x_513_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_543_ == 0)
{
v___x_526_ = v_x_513_;
v_isShared_527_ = v_isSharedCheck_543_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v_x_513_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_543_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; uint8_t v___x_529_; lean_object* v_val_531_; lean_object* v___x_534_; 
v___x_528_ = lean_unsigned_to_nat(0u);
v___x_529_ = 0;
v___x_534_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_524_);
lean_dec(v_a_524_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_537_; 
v_a_535_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_a_535_);
lean_dec_ref_known(v___x_534_, 1);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v_a_535_);
v___x_537_ = v___x_526_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
v_val_531_ = v___x_537_;
goto v___jp_530_;
}
}
else
{
lean_object* v_a_539_; lean_object* v___x_541_; 
v_a_539_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_a_539_);
lean_dec_ref_known(v___x_534_, 1);
if (v_isShared_527_ == 0)
{
lean_ctor_set_tag(v___x_526_, 0);
lean_ctor_set(v___x_526_, 0, v_a_539_);
v___x_541_ = v___x_526_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_a_539_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
v_val_531_ = v___x_541_;
goto v___jp_530_;
}
}
v___jp_530_:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_532_, 0, v_val_531_);
v___x_533_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_528_, v___x_529_, v___x_532_, v___f_512_);
return v___x_533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__1___boxed(lean_object* v___f_544_, lean_object* v_x_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__1(v___f_544_, v_x_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0(lean_object* v_v_550_){
_start:
{
lean_object* v___f_552_; lean_object* v___f_553_; lean_object* v___f_554_; lean_object* v___x_555_; uint8_t v___x_556_; lean_object* v_val_558_; lean_object* v___x_561_; 
v___f_552_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___closed__0));
v___f_553_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___lam__3___boxed), 4, 2);
lean_closure_set(v___f_553_, 0, v___f_552_);
lean_closure_set(v___f_553_, 1, v_v_550_);
v___f_554_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_554_, 0, v___f_553_);
v___x_555_ = lean_unsigned_to_nat(0u);
v___x_556_ = 0;
v___x_561_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
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
lean_ctor_set_tag(v___x_564_, 1);
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
v_val_558_ = v___x_567_;
goto v___jp_557_;
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
v_a_570_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_561_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_561_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
lean_ctor_set_tag(v___x_572_, 0);
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
v_val_558_ = v___x_575_;
goto v___jp_557_;
}
}
}
v___jp_557_:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v_val_558_);
v___x_560_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_555_, v___x_556_, v___x_559_, v___f_554_);
return v___x_560_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0___boxed(lean_object* v_v_578_, lean_object* v___y_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0(v_v_578_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished___lam__0(lean_object* v_x_581_){
_start:
{
if (lean_obj_tag(v_x_581_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_591_; 
v_a_583_ = lean_ctor_get(v_x_581_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v_x_581_);
if (v_isSharedCheck_591_ == 0)
{
v___x_585_ = v_x_581_;
v_isShared_586_ = v_isSharedCheck_591_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v_x_581_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_591_;
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
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_590_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
lean_object* v___x_589_; 
v___x_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
return v___x_589_;
}
}
}
else
{
lean_object* v_a_592_; lean_object* v___x_593_; 
v_a_592_ = lean_ctor_get(v_x_581_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v_x_581_, 1);
v___x_593_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_Server_finished_spec__0(v_a_592_);
return v___x_593_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished___lam__0___boxed(lean_object* v_x_594_, lean_object* v___y_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lasm_JS_Node_Server_finished___lam__0(v_x_594_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished(lean_object* v_server_599_){
_start:
{
lean_object* v_val_601_; lean_object* v___f_602_; lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; lean_object* v_val_607_; lean_object* v___x_610_; 
v_val_601_ = lean_ctor_get(v_server_599_, 3);
lean_inc(v_val_601_);
lean_dec_ref(v_server_599_);
v___f_602_ = ((lean_object*)(l_Lasm_JS_Node_Server_finished___closed__0));
v___x_603_ = ((lean_object*)(l_Lasm_JS_Node_Server_finished___closed__1));
v___x_604_ = lean_unsigned_to_nat(0u);
v___x_605_ = 0;
v___x_610_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_val_601_, v___x_603_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_610_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_610_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set_tag(v___x_613_, 1);
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
v_val_607_ = v___x_616_;
goto v___jp_606_;
}
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
v_a_619_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_610_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_610_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
lean_ctor_set_tag(v___x_621_, 0);
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
v_val_607_ = v___x_624_;
goto v___jp_606_;
}
}
}
v___jp_606_:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v_val_607_);
v___x_609_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_604_, v___x_605_, v___x_608_, v___f_602_);
return v___x_609_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished___boxed(lean_object* v_server_627_, lean_object* v_a_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lasm_JS_Node_Server_finished(v_server_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Serve_start(lean_object* v_a_641_){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; lean_object* v___x_647_; 
v___x_643_ = ((lean_object*)(l_Lasm_JS_Node_Serve_start___closed__3));
v___x_644_ = ((lean_object*)(l_Lasm_JS_Node_Serve_start___closed__4));
v___x_645_ = lean_array_push(v___x_644_, v_a_641_);
v___x_646_ = 1;
v___x_647_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Internal_typedArray_spec__0(v___x_643_, v___x_645_, v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Serve_start___boxed(lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lasm_JS_Node_Serve_start(v_a_648_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__2(lean_object* v_x_651_){
_start:
{
if (lean_obj_tag(v_x_651_) == 0)
{
lean_object* v___x_652_; 
v___x_652_ = lean_box(0);
return v___x_652_;
}
else
{
lean_object* v_val_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
v_val_653_ = lean_ctor_get(v_x_651_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v_x_651_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v_x_651_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_val_653_);
lean_dec(v_x_651_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
lean_ctor_set_tag(v___x_655_, 4);
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_val_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__3(lean_object* v_x_661_){
_start:
{
if (lean_obj_tag(v_x_661_) == 0)
{
lean_object* v___x_662_; 
v___x_662_ = lean_box(0);
return v___x_662_;
}
else
{
lean_object* v_val_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_val_663_ = lean_ctor_get(v_x_661_, 0);
v___x_664_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
lean_inc(v_val_663_);
v___x_665_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_665_, 0, v_val_663_);
lean_ctor_set(v___x_665_, 1, v___x_664_);
return v___x_665_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__3___boxed(lean_object* v_x_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__3(v_x_666_);
lean_dec(v_x_666_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__0(lean_object* v_x_668_){
_start:
{
if (lean_obj_tag(v_x_668_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_678_; 
v_a_670_ = lean_ctor_get(v_x_668_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v_x_668_);
if (v_isSharedCheck_678_ == 0)
{
v___x_672_ = v_x_668_;
v_isShared_673_ = v_isSharedCheck_678_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v_x_668_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_678_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_677_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
lean_object* v___x_676_; 
v___x_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
return v___x_676_;
}
}
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_689_; 
v_a_679_ = lean_ctor_get(v_x_668_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v_x_668_);
if (v_isSharedCheck_689_ == 0)
{
v___x_681_ = v_x_668_;
v_isShared_682_ = v_isSharedCheck_689_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v_x_668_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_689_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_686_; 
v___x_683_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
v___x_684_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_684_, 0, v_a_679_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_684_);
v___x_686_ = v___x_681_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_684_);
v___x_686_ = v_reuseFailAlloc_688_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_687_; 
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
return v___x_687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__0___boxed(lean_object* v_x_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lasm_JS_Node_serve___lam__0(v_x_690_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__1(lean_object* v_val_694_, lean_object* v___f_695_, lean_object* v_args_696_){
_start:
{
lean_object* v___y_699_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_707_ = lean_unsigned_to_nat(0u);
v___x_708_ = lean_array_get_size(v_args_696_);
v___x_709_ = lean_nat_dec_lt(v___x_707_, v___x_708_);
if (v___x_709_ == 0)
{
goto v___jp_705_;
}
else
{
lean_object* v___x_710_; 
v___x_710_ = lean_array_fget_borrowed(v_args_696_, v___x_707_);
if (lean_obj_tag(v___x_710_) == 4)
{
lean_object* v_s_711_; 
v_s_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc_ref(v_s_711_);
v___y_699_ = v_s_711_;
goto v___jp_698_;
}
else
{
goto v___jp_705_;
}
}
v___jp_698_:
{
lean_object* v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_700_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_700_, 0, v___y_699_);
v___x_701_ = lean_unsigned_to_nat(0u);
v___x_702_ = 0;
v___x_703_ = lean_apply_2(v_val_694_, v___x_700_, lean_box(0));
v___x_704_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_701_, v___x_702_, v___x_703_, v___f_695_);
return v___x_704_;
}
v___jp_705_:
{
lean_object* v___x_706_; 
v___x_706_ = ((lean_object*)(l_Lasm_JS_Node_serve___lam__1___closed__0));
v___y_699_ = v___x_706_;
goto v___jp_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__1___boxed(lean_object* v_val_712_, lean_object* v___f_713_, lean_object* v_args_714_, lean_object* v___y_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lasm_JS_Node_serve___lam__1(v_val_712_, v___f_713_, v_args_714_);
lean_dec_ref(v_args_714_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__7(size_t v_sz_717_, size_t v_i_718_, lean_object* v_bs_719_){
_start:
{
uint8_t v___x_720_; 
v___x_720_ = lean_usize_dec_lt(v_i_718_, v_sz_717_);
if (v___x_720_ == 0)
{
return v_bs_719_;
}
else
{
lean_object* v_v_721_; lean_object* v___x_722_; lean_object* v_bs_x27_723_; lean_object* v___x_724_; size_t v___x_725_; size_t v___x_726_; lean_object* v___x_727_; 
v_v_721_ = lean_array_uget(v_bs_719_, v_i_718_);
v___x_722_ = lean_unsigned_to_nat(0u);
v_bs_x27_723_ = lean_array_uset(v_bs_719_, v_i_718_, v___x_722_);
v___x_724_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_724_, 0, v_v_721_);
v___x_725_ = ((size_t)1ULL);
v___x_726_ = lean_usize_add(v_i_718_, v___x_725_);
v___x_727_ = lean_array_uset(v_bs_x27_723_, v_i_718_, v___x_724_);
v_i_718_ = v___x_726_;
v_bs_719_ = v___x_727_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__7___boxed(lean_object* v_sz_729_, lean_object* v_i_730_, lean_object* v_bs_731_){
_start:
{
size_t v_sz_boxed_732_; size_t v_i_boxed_733_; lean_object* v_res_734_; 
v_sz_boxed_732_ = lean_unbox_usize(v_sz_729_);
lean_dec(v_sz_729_);
v_i_boxed_733_ = lean_unbox_usize(v_i_730_);
lean_dec(v_i_730_);
v_res_734_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__7(v_sz_boxed_732_, v_i_boxed_733_, v_bs_731_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5(lean_object* v_o_735_, lean_object* v_keys_736_){
_start:
{
size_t v_sz_738_; size_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v_sz_738_ = lean_array_size(v_keys_736_);
v___x_739_ = ((size_t)0ULL);
v___x_740_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__7(v_sz_738_, v___x_739_, v_keys_736_);
v___x_741_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
v___x_742_ = l_Lasm_JS_Wire_encodeIO(v___x_741_);
lean_dec_ref_known(v___x_741_, 1);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; uint32_t v___x_744_; uint32_t v___x_745_; uint64_t v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___x_742_, 1);
v___x_744_ = 203;
v___x_745_ = lasm_js_value_handle(v_o_735_);
v___x_746_ = 2ULL;
v___x_747_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
v___x_748_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_748_, 0, v_o_735_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = lasm_js_call(v___x_744_, v___x_745_, v___x_746_, v_a_743_, v___x_748_);
lean_dec_ref_known(v___x_748_, 2);
lean_dec(v_a_743_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_751_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_a_750_);
lean_dec_ref_known(v___x_749_, 1);
v___x_751_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_750_);
lean_dec(v_a_750_);
return v___x_751_;
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
v_a_752_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_749_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_749_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
else
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_767_; 
lean_dec(v_o_735_);
v_a_760_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_767_ == 0)
{
v___x_762_ = v___x_742_;
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_742_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_765_; 
if (v_isShared_763_ == 0)
{
v___x_765_ = v___x_762_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_760_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5___boxed(lean_object* v_o_768_, lean_object* v_keys_769_, lean_object* v_a_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5(v_o_768_, v_keys_769_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___lam__0(lean_object* v_a_772_){
_start:
{
lean_object* v_a_775_; 
if (lean_obj_tag(v_a_772_) == 0)
{
lean_object* v_a_777_; lean_object* v___x_778_; 
v_a_777_ = lean_ctor_get(v_a_772_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v_a_772_, 1);
v___x_778_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_778_, 0, v_a_777_);
v_a_775_ = v___x_778_;
goto v___jp_774_;
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_790_; 
v_a_779_ = lean_ctor_get(v_a_772_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v_a_772_);
if (v_isSharedCheck_790_ == 0)
{
v___x_781_ = v_a_772_;
v_isShared_782_ = v_isSharedCheck_790_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v_a_772_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_790_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; 
v___x_783_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_779_);
lean_dec(v_a_779_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v___x_784_; lean_object* v_a_785_; lean_object* v___x_787_; 
lean_dec_ref_known(v___x_783_, 1);
v___x_784_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0_spec__1_spec__2___redArg();
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref(v___x_784_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v_a_785_);
v___x_787_ = v___x_781_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
else
{
lean_object* v_a_789_; 
lean_del_object(v___x_781_);
v_a_789_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_783_, 1);
v_a_775_ = v_a_789_;
goto v___jp_774_;
}
}
}
v___jp_774_:
{
lean_object* v___x_776_; 
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v_a_775_);
return v___x_776_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___lam__0___boxed(lean_object* v_a_791_, lean_object* v___y_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___lam__0(v_a_791_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5(lean_object* v_v_795_, lean_object* v_keep_796_){
_start:
{
lean_object* v___f_798_; lean_object* v___x_799_; 
v___f_798_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___closed__0));
v___x_799_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
lean_dec_ref_known(v___x_799_, 1);
v___x_800_ = lean_io_promise_new();
v___x_801_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
v___x_802_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_802_, 0, v_v_795_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = l_Lasm_JS_Wire_encodeIO(v___x_802_);
lean_dec_ref_known(v___x_802_, 2);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_805_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_a_804_);
lean_dec_ref_known(v___x_803_, 1);
v___x_805_ = lasm_js_await_into(v___x_800_, v_a_804_, v_keep_796_);
lean_dec(v_a_804_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_816_; 
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_816_ == 0)
{
lean_object* v_unused_817_; 
v_unused_817_ = lean_ctor_get(v___x_805_, 0);
lean_dec(v_unused_817_);
v___x_807_ = v___x_805_;
v_isShared_808_ = v_isSharedCheck_816_;
goto v_resetjp_806_;
}
else
{
lean_dec(v___x_805_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_816_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_809_; lean_object* v___x_810_; uint8_t v___x_811_; lean_object* v___x_812_; lean_object* v___x_814_; 
v___x_809_ = l_IO_Promise_result_x21___redArg(v___x_800_);
lean_dec(v___x_800_);
v___x_810_ = lean_unsigned_to_nat(0u);
v___x_811_ = 0;
v___x_812_ = lean_io_map_task(v___f_798_, v___x_809_, v___x_810_, v___x_811_);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 0, v___x_812_);
v___x_814_ = v___x_807_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_812_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
lean_dec(v___x_800_);
v_a_818_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_805_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_805_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_823_; 
if (v_isShared_821_ == 0)
{
v___x_823_ = v___x_820_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_818_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
lean_dec(v___x_800_);
v_a_826_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_803_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_803_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
lean_dec(v_v_795_);
v_a_834_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_799_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_799_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5___boxed(lean_object* v_v_842_, lean_object* v_keep_843_, lean_object* v_a_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5(v_v_842_, v_keep_843_);
lean_dec(v_keep_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4(lean_object* v_v_847_){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_849_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4___closed__0));
lean_inc(v_v_847_);
v___x_850_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_850_, 0, v_v_847_);
lean_ctor_set(v___x_850_, 1, v___x_849_);
v___x_851_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4_spec__5(v_v_847_, v___x_850_);
lean_dec_ref_known(v___x_850_, 2);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_851_, 1);
v___x_853_ = lean_io_wait(v_a_852_);
v___x_854_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v___x_853_);
return v___x_854_;
}
else
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
v_a_855_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_851_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_851_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4___boxed(lean_object* v_v_863_, lean_object* v___y_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4(v_v_863_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__1(lean_object* v_x_866_){
_start:
{
if (lean_obj_tag(v_x_866_) == 0)
{
lean_object* v___x_867_; 
v___x_867_ = lean_box(0);
return v___x_867_;
}
else
{
lean_object* v_val_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_881_; 
v_val_868_ = lean_ctor_get(v_x_866_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v_x_866_);
if (v_isSharedCheck_881_ == 0)
{
v___x_870_ = v_x_866_;
v_isShared_871_ = v_isSharedCheck_881_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_val_868_);
lean_dec(v_x_866_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_881_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_872_ = lean_nat_to_int(v_val_868_);
v___x_873_ = lean_nat_abs(v___x_872_);
v___x_874_ = lean_cstr_to_nat("9007199254740991");
v___x_875_ = lean_nat_dec_le(v___x_873_, v___x_874_);
lean_dec(v___x_873_);
if (v___x_875_ == 0)
{
lean_object* v___x_877_; 
if (v_isShared_871_ == 0)
{
lean_ctor_set_tag(v___x_870_, 5);
lean_ctor_set(v___x_870_, 0, v___x_872_);
v___x_877_ = v___x_870_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_872_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
else
{
double v___x_879_; lean_object* v___x_880_; 
lean_del_object(v___x_870_);
v___x_879_ = l_Float_ofInt(v___x_872_);
lean_dec(v___x_872_);
v___x_880_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_880_, 0, v___x_879_);
return v___x_880_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__4(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
v___x_887_ = lean_string_utf8_byte_size(v___x_886_);
return v___x_887_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__5(void){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_888_ = lean_unsigned_to_nat(0u);
v___x_889_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__4);
v___x_890_ = lean_nat_dec_eq(v___x_889_, v___x_888_);
return v___x_890_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__10(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_895_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__9));
v___x_896_ = lean_unsigned_to_nat(46u);
v___x_897_ = lean_unsigned_to_nat(193u);
v___x_898_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__8));
v___x_899_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__7));
v___x_900_ = l_mkPanicMessageWithDecl(v___x_899_, v___x_898_, v___x_897_, v___x_896_, v___x_895_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3(lean_object* v_context_902_, lean_object* v_d_903_){
_start:
{
lean_object* v___y_906_; lean_object* v___y_907_; 
if (lean_obj_tag(v_d_903_) == 9)
{
lean_object* v_value_911_; lean_object* v___x_912_; 
v_value_911_ = lean_ctor_get(v_d_903_, 0);
lean_inc(v_value_911_);
lean_dec_ref_known(v_d_903_, 2);
v___x_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_912_, 0, v_value_911_);
return v___x_912_;
}
else
{
lean_object* v___x_913_; lean_object* v_received_915_; 
v___x_913_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
if (lean_obj_tag(v_d_903_) == 9)
{
lean_object* v_value_929_; lean_object* v_description_930_; uint8_t v___x_931_; 
v_value_929_ = lean_ctor_get(v_d_903_, 0);
v_description_930_ = lean_ctor_get(v_d_903_, 1);
v___x_931_ = lean_string_dec_eq(v_description_930_, v___x_913_);
if (v___x_931_ == 0)
{
goto v___jp_927_;
}
else
{
uint32_t v___x_932_; uint64_t v___x_933_; lean_object* v___x_934_; uint32_t v___x_935_; lean_object* v___x_936_; 
lean_inc_n(v_value_929_, 2);
lean_dec_ref_known(v_d_903_, 2);
v___x_932_ = 206;
v___x_933_ = 0ULL;
v___x_934_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_934_, 0, v_value_929_);
lean_ctor_set(v___x_934_, 1, v___x_913_);
v___x_935_ = lasm_js_value_handle(v_value_929_);
lean_dec(v_value_929_);
v___x_936_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_932_, v___x_933_, v___x_934_, v___x_935_);
lean_dec_ref_known(v___x_934_, 2);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; uint8_t v___x_938_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
lean_inc(v_a_937_);
lean_dec_ref_known(v___x_936_, 1);
v___x_938_ = lean_string_validate_utf8(v_a_937_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; 
lean_dec(v_a_937_);
v___x_939_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__10);
v___x_940_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_939_);
v_received_915_ = v___x_940_;
goto v___jp_914_;
}
else
{
lean_object* v___x_941_; 
v___x_941_ = lean_string_from_utf8_unchecked(v_a_937_);
v_received_915_ = v___x_941_;
goto v___jp_914_;
}
}
else
{
lean_object* v___x_942_; 
lean_dec_ref_known(v___x_936_, 1);
v___x_942_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__11));
v_received_915_ = v___x_942_;
goto v___jp_914_;
}
}
}
else
{
goto v___jp_927_;
}
v___jp_914_:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
v___x_916_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__0));
v___x_917_ = lean_string_append(v___x_916_, v_context_902_);
v___x_918_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__1));
v___x_919_ = lean_string_append(v___x_917_, v___x_918_);
v___x_920_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__2));
v___x_921_ = lean_string_append(v___x_919_, v___x_920_);
v___x_922_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__3));
v___x_923_ = lean_string_append(v___x_921_, v___x_922_);
v___x_924_ = lean_string_append(v___x_923_, v_received_915_);
lean_dec_ref(v_received_915_);
v___x_925_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__5);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; 
v___x_926_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___closed__6));
v___y_906_ = v___x_924_;
v___y_907_ = v___x_926_;
goto v___jp_905_;
}
else
{
v___y_906_ = v___x_924_;
v___y_907_ = v___x_913_;
goto v___jp_905_;
}
}
v___jp_927_:
{
lean_object* v___x_928_; 
v___x_928_ = l_Lasm_JS_Data_describe(v_d_903_);
v_received_915_ = v___x_928_;
goto v___jp_914_;
}
}
v___jp_905_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = lean_string_append(v___y_906_, v___y_907_);
v___x_909_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
v___x_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
return v___x_910_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3___boxed(lean_object* v_context_943_, lean_object* v_d_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3(v_context_943_, v_d_944_);
lean_dec_ref(v_context_943_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0(lean_object* v_args_948_, lean_object* v_i_949_){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_951_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0___closed__0));
v___x_952_ = lean_unsigned_to_nat(1u);
v___x_953_ = lean_nat_add(v_i_949_, v___x_952_);
v___x_954_ = l_Nat_reprFast(v___x_953_);
v___x_955_ = lean_string_append(v___x_951_, v___x_954_);
lean_dec_ref(v___x_954_);
v___x_956_ = lean_array_get_size(v_args_948_);
v___x_957_ = lean_nat_dec_lt(v_i_949_, v___x_956_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = lean_box(0);
v___x_959_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3(v___x_955_, v___x_958_);
lean_dec_ref(v___x_955_);
return v___x_959_;
}
else
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = lean_array_fget_borrowed(v_args_948_, v_i_949_);
lean_inc(v___x_960_);
v___x_961_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0_spec__3(v___x_955_, v___x_960_);
lean_dec_ref(v___x_955_);
return v___x_961_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0___boxed(lean_object* v_args_962_, lean_object* v_i_963_, lean_object* v_a_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0(v_args_962_, v_i_963_);
lean_dec(v_i_963_);
lean_dec_ref(v_args_962_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0(lean_object* v___f_966_, lean_object* v_args_967_){
_start:
{
lean_object* v___x_969_; uint8_t v___x_970_; lean_object* v_val_972_; lean_object* v___x_975_; 
v___x_969_ = lean_unsigned_to_nat(0u);
v___x_970_ = 0;
v___x_975_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0(v_args_967_, v___x_969_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_975_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_975_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
lean_ctor_set_tag(v___x_978_, 1);
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
v_val_972_ = v___x_981_;
goto v___jp_971_;
}
}
}
else
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
v_a_984_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_975_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_975_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
lean_ctor_set_tag(v___x_986_, 0);
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
v_val_972_ = v___x_989_;
goto v___jp_971_;
}
}
}
v___jp_971_:
{
lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v_val_972_);
v___x_974_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_969_, v___x_970_, v___x_973_, v___f_966_);
return v___x_974_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0___boxed(lean_object* v___f_992_, lean_object* v_args_993_, lean_object* v___y_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0(v___f_992_, v_args_993_);
lean_dec_ref(v_args_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1(lean_object* v_f_996_, lean_object* v___f_997_, lean_object* v_x_998_){
_start:
{
if (lean_obj_tag(v_x_998_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1008_; 
lean_dec_ref(v___f_997_);
lean_dec_ref(v_f_996_);
v_a_1000_ = lean_ctor_get(v_x_998_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v_x_998_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1002_ = v_x_998_;
v_isShared_1003_ = v_isSharedCheck_1008_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v_x_998_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1008_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v_a_1009_ = lean_ctor_get(v_x_998_, 0);
lean_inc(v_a_1009_);
lean_dec_ref_known(v_x_998_, 1);
v___x_1010_ = lean_unsigned_to_nat(0u);
v___x_1011_ = 0;
v___x_1012_ = lean_apply_2(v_f_996_, v_a_1009_, lean_box(0));
v___x_1013_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1010_, v___x_1011_, v___x_1012_, v___f_997_);
return v___x_1013_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1___boxed(lean_object* v_f_1014_, lean_object* v___f_1015_, lean_object* v_x_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1(v_f_1014_, v___f_1015_, v_x_1016_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0(lean_object* v_f_1020_){
_start:
{
lean_object* v___f_1022_; lean_object* v___f_1023_; lean_object* v___f_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___f_1022_ = ((lean_object*)(l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___closed__0));
v___f_1023_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1023_, 0, v_f_1020_);
lean_closure_set(v___f_1023_, 1, v___f_1022_);
v___f_1024_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1024_, 0, v___f_1023_);
v___x_1025_ = lean_unsigned_to_nat(1u);
v___x_1026_ = l_Lasm_JS_Function_ofFn(v___f_1024_, v___x_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___boxed(lean_object* v_f_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0(v_f_1027_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve(lean_object* v_options_1045_){
_start:
{
lean_object* v___y_1048_; lean_object* v_fetch_1061_; lean_object* v_port_1062_; lean_object* v_hostname_1063_; lean_object* v_signal_1064_; lean_object* v_onListen_1065_; lean_object* v_error_1066_; lean_object* v___y_1068_; lean_object* v___y_1069_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1091_; lean_object* v___y_1092_; lean_object* v___y_1093_; lean_object* v___y_1094_; lean_object* v___y_1095_; lean_object* v___y_1096_; lean_object* v___f_1102_; lean_object* v___x_1103_; 
v_fetch_1061_ = lean_ctor_get(v_options_1045_, 0);
lean_inc_ref(v_fetch_1061_);
v_port_1062_ = lean_ctor_get(v_options_1045_, 1);
lean_inc(v_port_1062_);
v_hostname_1063_ = lean_ctor_get(v_options_1045_, 2);
lean_inc(v_hostname_1063_);
v_signal_1064_ = lean_ctor_get(v_options_1045_, 3);
lean_inc(v_signal_1064_);
v_onListen_1065_ = lean_ctor_get(v_options_1045_, 4);
lean_inc(v_onListen_1065_);
v_error_1066_ = lean_ctor_get(v_options_1045_, 5);
lean_inc(v_error_1066_);
lean_dec_ref(v_options_1045_);
v___f_1102_ = ((lean_object*)(l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___closed__0));
v___x_1103_ = l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0(v_fetch_1061_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; lean_object* v_error_1106_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v___x_1103_, 1);
if (lean_obj_tag(v_error_1066_) == 0)
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_box(0);
v_error_1106_ = v___x_1153_;
goto v___jp_1105_;
}
else
{
lean_object* v_val_1154_; lean_object* v___f_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v_val_1154_ = lean_ctor_get(v_error_1066_, 0);
lean_inc(v_val_1154_);
lean_dec_ref_known(v_error_1066_, 1);
v___f_1155_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_serve___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1155_, 0, v_val_1154_);
lean_closure_set(v___f_1155_, 1, v___f_1102_);
v___x_1156_ = lean_unsigned_to_nat(0u);
v___x_1157_ = l_Lasm_JS_Function_ofFn(v___f_1155_, v___x_1156_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1157_, 1);
v___x_1159_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
v___x_1160_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1160_, 0, v_a_1158_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v_error_1106_ = v___x_1160_;
goto v___jp_1105_;
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
lean_dec(v_a_1104_);
lean_dec(v_onListen_1065_);
lean_dec(v_signal_1064_);
lean_dec(v_hostname_1063_);
lean_dec(v_port_1062_);
v_a_1161_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1157_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1157_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1166_; 
if (v_isShared_1164_ == 0)
{
v___x_1166_ = v___x_1163_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_a_1161_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
v___jp_1105_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1107_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__1));
v___x_1108_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Node_Server_stop_spec__0___closed__0));
v___x_1109_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1109_, 0, v_a_1104_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1107_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
v___x_1111_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__2));
v___x_1112_ = l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__1(v_port_1062_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1111_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
v___x_1114_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__3));
v___x_1115_ = l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__2(v_hostname_1063_);
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__4));
v___x_1118_ = l_Lasm_JS_Web_Internal_optional___at___00Lasm_JS_Node_serve_spec__3(v_signal_1064_);
lean_dec(v_signal_1064_);
v___x_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__5));
v___x_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
lean_ctor_set(v___x_1121_, 1, v_error_1106_);
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1121_);
lean_ctor_set(v___x_1123_, 1, v___x_1122_);
v___x_1124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1119_);
lean_ctor_set(v___x_1124_, 1, v___x_1123_);
v___x_1125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1116_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___x_1126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1113_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
v___x_1127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1110_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
v___x_1128_ = l_Lasm_JS_obj(v___x_1127_);
v___x_1129_ = l_Lasm_JS_Node_Serve_start(v___x_1128_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
lean_inc_n(v_a_1130_, 2);
lean_dec_ref_known(v___x_1129_, 1);
v___x_1131_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__6));
v___x_1132_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__7));
v___x_1133_ = l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5(v_a_1130_, v___x_1132_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v_a_1134_; lean_object* v___x_1135_; 
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_a_1134_);
lean_dec_ref_known(v___x_1133_, 1);
v___x_1135_ = l_Lasm_JS_Data_field(v_a_1134_, v___x_1114_);
if (lean_obj_tag(v___x_1135_) == 4)
{
lean_object* v_s_1136_; 
v_s_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc_ref(v_s_1136_);
lean_dec_ref_known(v___x_1135_, 1);
v___y_1091_ = v___x_1108_;
v___y_1092_ = v___x_1131_;
v___y_1093_ = v___x_1111_;
v___y_1094_ = v_a_1130_;
v___y_1095_ = v_a_1134_;
v___y_1096_ = v_s_1136_;
goto v___jp_1090_;
}
else
{
lean_dec(v___x_1135_);
v___y_1091_ = v___x_1108_;
v___y_1092_ = v___x_1131_;
v___y_1093_ = v___x_1111_;
v___y_1094_ = v_a_1130_;
v___y_1095_ = v_a_1134_;
v___y_1096_ = v___x_1108_;
goto v___jp_1090_;
}
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
lean_dec(v_a_1130_);
lean_dec(v_onListen_1065_);
v_a_1137_ = lean_ctor_get(v___x_1133_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1133_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1133_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec(v_onListen_1065_);
v_a_1145_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1129_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1129_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
else
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec(v_error_1066_);
lean_dec(v_onListen_1065_);
lean_dec(v_signal_1064_);
lean_dec(v_hostname_1063_);
lean_dec(v_port_1062_);
v_a_1169_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1103_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1103_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1169_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
v___jp_1047_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = ((lean_object*)(l_Lasm_JS_Node_Server_finished___closed__1));
v___x_1050_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v___y_1048_, v___x_1049_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1052_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1051_);
lean_dec_ref_known(v___x_1050_, 1);
v___x_1052_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__4(v_a_1051_);
return v___x_1052_;
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
v_a_1053_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1055_ = v___x_1050_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1050_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_a_1053_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
v___jp_1067_:
{
if (lean_obj_tag(v_onListen_1065_) == 0)
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
v___x_1072_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__0));
v___x_1073_ = lean_string_append(v___x_1072_, v___y_1071_);
lean_dec_ref(v___y_1071_);
v___x_1074_ = l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(v___x_1073_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v___x_1075_; lean_object* v_flush_1076_; lean_object* v___x_1077_; 
lean_dec_ref_known(v___x_1074_, 1);
v___x_1075_ = lean_get_stdout();
v_flush_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc_ref(v_flush_1076_);
lean_dec_ref(v___x_1075_);
v___x_1077_ = lean_apply_1(v_flush_1076_, lean_box(0));
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_dec_ref_known(v___x_1077_, 1);
v___y_1048_ = v___y_1070_;
goto v___jp_1047_;
}
else
{
lean_dec(v___y_1070_);
return v___x_1077_;
}
}
else
{
lean_dec(v___y_1070_);
return v___x_1074_;
}
}
else
{
lean_object* v_val_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v_val_1078_ = lean_ctor_get(v_onListen_1065_, 0);
lean_inc(v_val_1078_);
lean_dec_ref_known(v_onListen_1065_, 1);
lean_inc(v___y_1070_);
v___x_1079_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1079_, 0, v___y_1069_);
lean_ctor_set(v___x_1079_, 1, v___y_1068_);
lean_ctor_set(v___x_1079_, 2, v___y_1071_);
lean_ctor_set(v___x_1079_, 3, v___y_1070_);
v___x_1080_ = lean_apply_2(v_val_1078_, v___x_1079_, lean_box(0));
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_dec_ref_known(v___x_1080_, 1);
v___y_1048_ = v___y_1070_;
goto v___jp_1047_;
}
else
{
lean_dec(v___y_1070_);
return v___x_1080_;
}
}
}
v___jp_1081_:
{
lean_object* v___x_1088_; 
v___x_1088_ = l_Lasm_JS_Data_field(v___y_1086_, v___y_1083_);
lean_dec(v___y_1086_);
if (lean_obj_tag(v___x_1088_) == 4)
{
lean_object* v_s_1089_; 
lean_dec_ref(v___y_1082_);
v_s_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc_ref(v_s_1089_);
lean_dec_ref_known(v___x_1088_, 1);
v___y_1068_ = v___y_1087_;
v___y_1069_ = v___y_1085_;
v___y_1070_ = v___y_1084_;
v___y_1071_ = v_s_1089_;
goto v___jp_1067_;
}
else
{
lean_dec(v___x_1088_);
v___y_1068_ = v___y_1087_;
v___y_1069_ = v___y_1085_;
v___y_1070_ = v___y_1084_;
v___y_1071_ = v___y_1082_;
goto v___jp_1067_;
}
}
v___jp_1090_:
{
lean_object* v___x_1097_; 
v___x_1097_ = l_Lasm_JS_Data_field(v___y_1095_, v___y_1093_);
if (lean_obj_tag(v___x_1097_) == 3)
{
double v_n_1098_; uint64_t v___x_1099_; lean_object* v___x_1100_; 
v_n_1098_ = lean_ctor_get_float(v___x_1097_, 0);
lean_dec_ref_known(v___x_1097_, 0);
v___x_1099_ = lean_float_to_uint64(v_n_1098_);
v___x_1100_ = lean_uint64_to_nat(v___x_1099_);
v___y_1082_ = v___y_1091_;
v___y_1083_ = v___y_1092_;
v___y_1084_ = v___y_1094_;
v___y_1085_ = v___y_1096_;
v___y_1086_ = v___y_1095_;
v___y_1087_ = v___x_1100_;
goto v___jp_1081_;
}
else
{
lean_object* v___x_1101_; 
lean_dec(v___x_1097_);
v___x_1101_ = lean_unsigned_to_nat(0u);
v___y_1082_ = v___y_1091_;
v___y_1083_ = v___y_1092_;
v___y_1084_ = v___y_1094_;
v___y_1085_ = v___y_1096_;
v___y_1086_ = v___y_1095_;
v___y_1087_ = v___x_1101_;
goto v___jp_1081_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___boxed(lean_object* v_options_1177_, lean_object* v_a_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l_Lasm_JS_Node_serve(v_options_1177_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8___redArg(lean_object* v_bytes_1180_){
_start:
{
lean_object* v___x_1182_; 
v___x_1182_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1180_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8___redArg___boxed(lean_object* v_bytes_1183_, lean_object* v_a_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8___redArg(v_bytes_1183_);
lean_dec_ref(v_bytes_1183_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8(lean_object* v_context_1186_, lean_object* v_bytes_1187_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1187_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8___boxed(lean_object* v_context_1190_, lean_object* v_bytes_1191_, lean_object* v_a_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__5_spec__8(v_context_1190_, v_bytes_1191_);
lean_dec_ref(v_bytes_1191_);
lean_dec_ref(v_context_1190_);
return v_res_1193_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Serve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
