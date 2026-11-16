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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* lean_io_promise_new();
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lasm_js_await_into(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_wait(lean_object*);
lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(lean_object*);
lean_object* lean_get_stdout();
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
static const lean_string_object l_Lasm_JS_Node_Server_stop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lasm_JS_Node_Server_stop___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Server_stop___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_stop(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_stop___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Node_serve___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_serve___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_serve___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_serve___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "the handler failed"};
static const lean_object* l_Lasm_JS_Node_serve___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_serve___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Value.await"};
static const lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__2___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_stop(lean_object* v_server_2_, uint8_t v_closeActiveConnections_3_){
_start:
{
lean_object* v_val_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_val_5_ = lean_ctor_get(v_server_2_, 3);
lean_inc(v_val_5_);
lean_dec_ref(v_server_2_);
v___x_6_ = ((lean_object*)(l_Lasm_JS_Node_Server_stop___closed__0));
v___x_7_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_7_, 0, v_closeActiveConnections_3_);
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_mk_empty_array_with_capacity(v___x_8_);
v___x_10_ = lean_array_push(v___x_9_, v___x_7_);
v___x_11_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_val_5_, v___x_6_, v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_stop___boxed(lean_object* v_server_12_, lean_object* v_closeActiveConnections_13_, lean_object* v_a_14_){
_start:
{
uint8_t v_closeActiveConnections_boxed_15_; lean_object* v_res_16_; 
v_closeActiveConnections_boxed_15_ = lean_unbox(v_closeActiveConnections_13_);
v_res_16_ = l_Lasm_JS_Node_Server_stop(v_server_12_, v_closeActiveConnections_boxed_15_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished___lam__0(lean_object* v_x_17_){
_start:
{
if (lean_obj_tag(v_x_17_) == 0)
{
lean_object* v_a_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_27_; 
v_a_19_ = lean_ctor_get(v_x_17_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v_x_17_);
if (v_isSharedCheck_27_ == 0)
{
v___x_21_ = v_x_17_;
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_a_19_);
lean_dec(v_x_17_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_24_; 
if (v_isShared_22_ == 0)
{
v___x_24_ = v___x_21_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_19_);
v___x_24_ = v_reuseFailAlloc_26_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
lean_object* v___x_25_; 
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
return v___x_25_;
}
}
}
else
{
lean_object* v_a_28_; lean_object* v___x_29_; 
v_a_28_ = lean_ctor_get(v_x_17_, 0);
lean_inc(v_a_28_);
lean_dec_ref_known(v_x_17_, 1);
v___x_29_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_28_);
return v___x_29_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished___lam__0___boxed(lean_object* v_x_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lasm_JS_Node_Server_finished___lam__0(v_x_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished(lean_object* v_server_35_){
_start:
{
lean_object* v_val_37_; lean_object* v___f_38_; lean_object* v___x_39_; lean_object* v___x_40_; uint8_t v___x_41_; lean_object* v_val_43_; lean_object* v___x_46_; 
v_val_37_ = lean_ctor_get(v_server_35_, 3);
lean_inc(v_val_37_);
lean_dec_ref(v_server_35_);
v___f_38_ = ((lean_object*)(l_Lasm_JS_Node_Server_finished___closed__0));
v___x_39_ = ((lean_object*)(l_Lasm_JS_Node_Server_finished___closed__1));
v___x_40_ = lean_unsigned_to_nat(0u);
v___x_41_ = 0;
v___x_46_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_val_37_, v___x_39_);
if (lean_obj_tag(v___x_46_) == 0)
{
lean_object* v_a_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_54_; 
v_a_47_ = lean_ctor_get(v___x_46_, 0);
v_isSharedCheck_54_ = !lean_is_exclusive(v___x_46_);
if (v_isSharedCheck_54_ == 0)
{
v___x_49_ = v___x_46_;
v_isShared_50_ = v_isSharedCheck_54_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_a_47_);
lean_dec(v___x_46_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_54_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_52_; 
if (v_isShared_50_ == 0)
{
lean_ctor_set_tag(v___x_49_, 1);
v___x_52_ = v___x_49_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v_a_47_);
v___x_52_ = v_reuseFailAlloc_53_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
v_val_43_ = v___x_52_;
goto v___jp_42_;
}
}
}
else
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_62_; 
v_a_55_ = lean_ctor_get(v___x_46_, 0);
v_isSharedCheck_62_ = !lean_is_exclusive(v___x_46_);
if (v_isSharedCheck_62_ == 0)
{
v___x_57_ = v___x_46_;
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v___x_46_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
lean_ctor_set_tag(v___x_57_, 0);
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_a_55_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
v_val_43_ = v___x_60_;
goto v___jp_42_;
}
}
}
v___jp_42_:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_44_, 0, v_val_43_);
v___x_45_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_40_, v___x_41_, v___x_44_, v___f_38_);
return v___x_45_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Server_finished___boxed(lean_object* v_server_63_, lean_object* v_a_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lasm_JS_Node_Server_finished(v_server_63_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Serve_start(lean_object* v_a_77_){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; 
v___x_79_ = ((lean_object*)(l_Lasm_JS_Node_Serve_start___closed__3));
v___x_80_ = ((lean_object*)(l_Lasm_JS_Node_Serve_start___closed__4));
v___x_81_ = lean_array_push(v___x_80_, v_a_77_);
v___x_82_ = 1;
v___x_83_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_79_, v___x_81_, v___x_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Serve_start___boxed(lean_object* v_a_84_, lean_object* v_a_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lasm_JS_Node_Serve_start(v_a_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__0(lean_object* v_x_88_){
_start:
{
if (lean_obj_tag(v_x_88_) == 0)
{
lean_object* v_a_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_98_; 
v_a_90_ = lean_ctor_get(v_x_88_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v_x_88_);
if (v_isSharedCheck_98_ == 0)
{
v___x_92_ = v_x_88_;
v_isShared_93_ = v_isSharedCheck_98_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_a_90_);
lean_dec(v_x_88_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_98_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_95_; 
if (v_isShared_93_ == 0)
{
v___x_95_ = v___x_92_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_a_90_);
v___x_95_ = v_reuseFailAlloc_97_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_96_; 
v___x_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
return v___x_96_;
}
}
}
else
{
lean_object* v_a_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_109_; 
v_a_99_ = lean_ctor_get(v_x_88_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v_x_88_);
if (v_isSharedCheck_109_ == 0)
{
v___x_101_ = v_x_88_;
v_isShared_102_ = v_isSharedCheck_109_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_a_99_);
lean_dec(v_x_88_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_109_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_103_ = ((lean_object*)(l_Lasm_JS_Node_serve___lam__0___closed__0));
v___x_104_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_104_, 0, v_a_99_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___x_104_);
v___x_106_ = v___x_101_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v___x_104_);
v___x_106_ = v_reuseFailAlloc_108_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; 
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__0___boxed(lean_object* v_x_110_, lean_object* v___y_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lasm_JS_Node_serve___lam__0(v_x_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__1(lean_object* v_val_114_, lean_object* v___f_115_, lean_object* v_args_116_){
_start:
{
lean_object* v___y_119_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = lean_array_get_size(v_args_116_);
v___x_129_ = lean_nat_dec_lt(v___x_127_, v___x_128_);
if (v___x_129_ == 0)
{
goto v___jp_125_;
}
else
{
lean_object* v___x_130_; 
v___x_130_ = lean_array_fget_borrowed(v_args_116_, v___x_127_);
if (lean_obj_tag(v___x_130_) == 4)
{
lean_object* v_s_131_; 
v_s_131_ = lean_ctor_get(v___x_130_, 0);
lean_inc_ref(v_s_131_);
v___y_119_ = v_s_131_;
goto v___jp_118_;
}
else
{
goto v___jp_125_;
}
}
v___jp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_120_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_120_, 0, v___y_119_);
v___x_121_ = lean_unsigned_to_nat(0u);
v___x_122_ = 0;
v___x_123_ = lean_apply_2(v_val_114_, v___x_120_, lean_box(0));
v___x_124_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_121_, v___x_122_, v___x_123_, v___f_115_);
return v___x_124_;
}
v___jp_125_:
{
lean_object* v___x_126_; 
v___x_126_ = ((lean_object*)(l_Lasm_JS_Node_serve___lam__1___closed__0));
v___y_119_ = v___x_126_;
goto v___jp_118_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___lam__1___boxed(lean_object* v_val_132_, lean_object* v___f_133_, lean_object* v_args_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lasm_JS_Node_serve___lam__1(v_val_132_, v___f_133_, v_args_134_);
lean_dec_ref(v_args_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___lam__0(lean_object* v_a_137_){
_start:
{
lean_object* v_a_140_; 
if (lean_obj_tag(v_a_137_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_143_; 
v_a_142_ = lean_ctor_get(v_a_137_, 0);
lean_inc(v_a_142_);
lean_dec_ref_known(v_a_137_, 1);
v___x_143_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_143_, 0, v_a_142_);
v_a_140_ = v___x_143_;
goto v___jp_139_;
}
else
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_155_; 
v_a_144_ = lean_ctor_get(v_a_137_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v_a_137_);
if (v_isSharedCheck_155_ == 0)
{
v___x_146_ = v_a_137_;
v_isShared_147_ = v_isSharedCheck_155_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v_a_137_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_155_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_144_);
lean_dec(v_a_144_);
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v___x_149_; lean_object* v_a_150_; lean_object* v___x_152_; 
lean_dec_ref_known(v___x_148_, 1);
v___x_149_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
lean_dec_ref(v___x_149_);
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 0, v_a_150_);
v___x_152_ = v___x_146_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_150_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
else
{
lean_object* v_a_154_; 
lean_del_object(v___x_146_);
v_a_154_ = lean_ctor_get(v___x_148_, 0);
lean_inc(v_a_154_);
lean_dec_ref_known(v___x_148_, 1);
v_a_140_ = v_a_154_;
goto v___jp_139_;
}
}
}
v___jp_139_:
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_141_, 0, v_a_140_);
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___lam__0___boxed(lean_object* v_a_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___lam__0(v_a_156_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2(lean_object* v_v_160_, lean_object* v_keep_161_){
_start:
{
lean_object* v___f_163_; lean_object* v___x_164_; 
v___f_163_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___closed__0));
v___x_164_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
lean_dec_ref_known(v___x_164_, 1);
v___x_165_ = lean_io_promise_new();
v___x_166_ = ((lean_object*)(l_Lasm_JS_Node_serve___lam__0___closed__0));
v___x_167_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_167_, 0, v_v_160_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = l_Lasm_JS_Wire_encodeIO(v___x_167_);
lean_dec_ref_known(v___x_167_, 2);
if (lean_obj_tag(v___x_168_) == 0)
{
lean_object* v_a_169_; lean_object* v___x_170_; 
v_a_169_ = lean_ctor_get(v___x_168_, 0);
lean_inc(v_a_169_);
lean_dec_ref_known(v___x_168_, 1);
v___x_170_ = lasm_js_await_into(v___x_165_, v_a_169_, v_keep_161_);
lean_dec(v_a_169_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_181_; 
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_181_ == 0)
{
lean_object* v_unused_182_; 
v_unused_182_ = lean_ctor_get(v___x_170_, 0);
lean_dec(v_unused_182_);
v___x_172_ = v___x_170_;
v_isShared_173_ = v_isSharedCheck_181_;
goto v_resetjp_171_;
}
else
{
lean_dec(v___x_170_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_181_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_174_ = l_IO_Promise_result_x21___redArg(v___x_165_);
lean_dec(v___x_165_);
v___x_175_ = lean_unsigned_to_nat(0u);
v___x_176_ = 0;
v___x_177_ = lean_io_map_task(v___f_163_, v___x_174_, v___x_175_, v___x_176_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 0, v___x_177_);
v___x_179_ = v___x_172_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
lean_dec(v___x_165_);
v_a_183_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_170_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_170_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec(v___x_165_);
v_a_191_ = lean_ctor_get(v___x_168_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_168_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_168_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_v_160_);
v_a_199_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_164_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_164_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2___boxed(lean_object* v_v_207_, lean_object* v_keep_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2(v_v_207_, v_keep_208_);
lean_dec(v_keep_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1(lean_object* v_v_212_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_214_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1___closed__0));
lean_inc(v_v_212_);
v___x_215_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_215_, 0, v_v_212_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___at___00Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1_spec__2(v_v_212_, v___x_215_);
lean_dec_ref_known(v___x_215_, 2);
if (lean_obj_tag(v___x_216_) == 0)
{
lean_object* v_a_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_a_217_ = lean_ctor_get(v___x_216_, 0);
lean_inc(v_a_217_);
lean_dec_ref_known(v___x_216_, 1);
v___x_218_ = lean_io_wait(v_a_217_);
v___x_219_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v___x_218_);
return v___x_219_;
}
else
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
v_a_220_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_216_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_216_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1___boxed(lean_object* v_v_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1(v_v_228_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__2(lean_object* v_o_231_, lean_object* v_keys_232_){
_start:
{
size_t v_sz_234_; size_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_sz_234_ = lean_array_size(v_keys_232_);
v___x_235_ = ((size_t)0ULL);
v___x_236_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_234_, v___x_235_, v_keys_232_);
v___x_237_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
v___x_238_ = l_Lasm_JS_Wire_encodeIO(v___x_237_);
lean_dec_ref_known(v___x_237_, 1);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; uint32_t v___x_240_; uint32_t v___x_241_; uint64_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_a_239_);
lean_dec_ref_known(v___x_238_, 1);
v___x_240_ = 203;
v___x_241_ = lasm_js_value_handle(v_o_231_);
v___x_242_ = 2ULL;
v___x_243_ = ((lean_object*)(l_Lasm_JS_Node_serve___lam__0___closed__0));
v___x_244_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_244_, 0, v_o_231_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lasm_js_call(v___x_240_, v___x_241_, v___x_242_, v_a_239_, v___x_244_);
lean_dec_ref_known(v___x_244_, 2);
lean_dec(v_a_239_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_247_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_a_246_);
lean_dec_ref_known(v___x_245_, 1);
v___x_247_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_246_);
lean_dec(v_a_246_);
return v___x_247_;
}
else
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
v_a_248_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_245_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_245_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
lean_dec(v_o_231_);
v_a_256_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_238_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_238_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__2___boxed(lean_object* v_o_264_, lean_object* v_keys_265_, lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__2(v_o_264_, v_keys_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0(lean_object* v_args_269_, lean_object* v_i_270_){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_272_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0___closed__0));
v___x_273_ = lean_unsigned_to_nat(1u);
v___x_274_ = lean_nat_add(v_i_270_, v___x_273_);
v___x_275_ = l_Nat_reprFast(v___x_274_);
v___x_276_ = lean_string_append(v___x_272_, v___x_275_);
lean_dec_ref(v___x_275_);
v___x_277_ = lean_array_get_size(v_args_269_);
v___x_278_ = lean_nat_dec_lt(v_i_270_, v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = lean_box(0);
v___x_280_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_276_, v___x_279_);
lean_dec_ref(v___x_276_);
return v___x_280_;
}
else
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_array_fget_borrowed(v_args_269_, v_i_270_);
lean_inc(v___x_281_);
v___x_282_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_276_, v___x_281_);
lean_dec_ref(v___x_276_);
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0___boxed(lean_object* v_args_283_, lean_object* v_i_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0(v_args_283_, v_i_284_);
lean_dec(v_i_284_);
lean_dec_ref(v_args_283_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0(lean_object* v___f_287_, lean_object* v_args_288_){
_start:
{
lean_object* v___x_290_; uint8_t v___x_291_; lean_object* v_val_293_; lean_object* v___x_296_; 
v___x_290_ = lean_unsigned_to_nat(0u);
v___x_291_ = 0;
v___x_296_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___at___00Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0_spec__0(v_args_288_, v___x_290_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_296_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
lean_ctor_set_tag(v___x_299_, 1);
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
v_val_293_ = v___x_302_;
goto v___jp_292_;
}
}
}
else
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
v_a_305_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_296_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_296_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
lean_ctor_set_tag(v___x_307_, 0);
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
v_val_293_ = v___x_310_;
goto v___jp_292_;
}
}
}
v___jp_292_:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v_val_293_);
v___x_295_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_290_, v___x_291_, v___x_294_, v___f_287_);
return v___x_295_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0___boxed(lean_object* v___f_313_, lean_object* v_args_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0(v___f_313_, v_args_314_);
lean_dec_ref(v_args_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1(lean_object* v_f_317_, lean_object* v___f_318_, lean_object* v_x_319_){
_start:
{
if (lean_obj_tag(v_x_319_) == 0)
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_329_; 
lean_dec_ref(v___f_318_);
lean_dec_ref(v_f_317_);
v_a_321_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_329_ == 0)
{
v___x_323_ = v_x_319_;
v_isShared_324_ = v_isSharedCheck_329_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v_x_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_329_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_328_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
lean_object* v___x_327_; 
v___x_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
return v___x_327_;
}
}
}
else
{
lean_object* v_a_330_; lean_object* v___x_331_; uint8_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_a_330_ = lean_ctor_get(v_x_319_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v_x_319_, 1);
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = 0;
v___x_333_ = lean_apply_2(v_f_317_, v_a_330_, lean_box(0));
v___x_334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_331_, v___x_332_, v___x_333_, v___f_318_);
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1___boxed(lean_object* v_f_335_, lean_object* v___f_336_, lean_object* v_x_337_, lean_object* v___y_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1(v_f_335_, v___f_336_, v_x_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0(lean_object* v_f_341_){
_start:
{
lean_object* v___f_343_; lean_object* v___f_344_; lean_object* v___f_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___f_343_ = ((lean_object*)(l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___closed__0));
v___f_344_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_344_, 0, v_f_341_);
lean_closure_set(v___f_344_, 1, v___f_343_);
v___f_345_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_345_, 0, v___f_344_);
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = l_Lasm_JS_Function_ofFn(v___f_345_, v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___boxed(lean_object* v_f_348_, lean_object* v_a_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0(v_f_348_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve(lean_object* v_options_366_){
_start:
{
lean_object* v___y_369_; lean_object* v_fetch_382_; lean_object* v_port_383_; lean_object* v_hostname_384_; lean_object* v_signal_385_; lean_object* v_onListen_386_; lean_object* v_error_387_; lean_object* v___y_389_; lean_object* v___y_390_; lean_object* v___y_391_; lean_object* v___y_392_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___y_407_; lean_object* v___y_408_; lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v___y_414_; lean_object* v___y_415_; lean_object* v___y_416_; lean_object* v___y_417_; lean_object* v___f_423_; lean_object* v___x_424_; 
v_fetch_382_ = lean_ctor_get(v_options_366_, 0);
lean_inc_ref(v_fetch_382_);
v_port_383_ = lean_ctor_get(v_options_366_, 1);
lean_inc(v_port_383_);
v_hostname_384_ = lean_ctor_get(v_options_366_, 2);
lean_inc(v_hostname_384_);
v_signal_385_ = lean_ctor_get(v_options_366_, 3);
lean_inc(v_signal_385_);
v_onListen_386_ = lean_ctor_get(v_options_366_, 4);
lean_inc(v_onListen_386_);
v_error_387_ = lean_ctor_get(v_options_366_, 5);
lean_inc(v_error_387_);
lean_dec_ref(v_options_366_);
v___f_423_ = ((lean_object*)(l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0___closed__0));
v___x_424_ = l_Lasm_JS_Function_ofFn1___at___00Lasm_JS_Node_serve_spec__0(v_fetch_382_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v_error_427_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_424_, 1);
if (lean_obj_tag(v_error_387_) == 0)
{
lean_object* v___x_474_; 
v___x_474_ = lean_box(0);
v_error_427_ = v___x_474_;
goto v___jp_426_;
}
else
{
lean_object* v_val_475_; lean_object* v___f_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_val_475_ = lean_ctor_get(v_error_387_, 0);
lean_inc(v_val_475_);
lean_dec_ref_known(v_error_387_, 1);
v___f_476_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_serve___lam__1___boxed), 4, 2);
lean_closure_set(v___f_476_, 0, v_val_475_);
lean_closure_set(v___f_476_, 1, v___f_423_);
v___x_477_ = lean_unsigned_to_nat(0u);
v___x_478_ = l_Lasm_JS_Function_ofFn(v___f_476_, v___x_477_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_a_479_);
lean_dec_ref_known(v___x_478_, 1);
v___x_480_ = ((lean_object*)(l_Lasm_JS_Node_serve___lam__0___closed__0));
v___x_481_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_481_, 0, v_a_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v_error_427_ = v___x_481_;
goto v___jp_426_;
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
lean_dec(v_a_425_);
lean_dec(v_onListen_386_);
lean_dec(v_signal_385_);
lean_dec(v_hostname_384_);
lean_dec(v_port_383_);
v_a_482_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_478_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_478_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
v___jp_426_:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_428_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__1));
v___x_429_ = ((lean_object*)(l_Lasm_JS_Node_serve___lam__0___closed__0));
v___x_430_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_430_, 0, v_a_425_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_428_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__2));
v___x_433_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_383_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_432_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__3));
v___x_436_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_384_);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__4));
v___x_439_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_385_);
lean_dec(v_signal_385_);
v___x_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_438_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__5));
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v_error_427_);
v___x_443_ = lean_box(0);
v___x_444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_442_);
lean_ctor_set(v___x_444_, 1, v___x_443_);
v___x_445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_440_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v___x_446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_437_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___x_447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_447_, 0, v___x_434_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
v___x_448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_431_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
v___x_449_ = l_Lasm_JS_obj(v___x_448_);
v___x_450_ = l_Lasm_JS_Node_Serve_start(v___x_449_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc_n(v_a_451_, 2);
lean_dec_ref_known(v___x_450_, 1);
v___x_452_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__6));
v___x_453_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__7));
v___x_454_ = l_Lasm_JS_Value_getFields___at___00Lasm_JS_Node_serve_spec__2(v_a_451_, v___x_453_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_456_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref_known(v___x_454_, 1);
v___x_456_ = l_Lasm_JS_Data_field(v_a_455_, v___x_435_);
if (lean_obj_tag(v___x_456_) == 4)
{
lean_object* v_s_457_; 
v_s_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc_ref(v_s_457_);
lean_dec_ref_known(v___x_456_, 1);
v___y_412_ = v___x_452_;
v___y_413_ = v___x_432_;
v___y_414_ = v_a_451_;
v___y_415_ = v___x_429_;
v___y_416_ = v_a_455_;
v___y_417_ = v_s_457_;
goto v___jp_411_;
}
else
{
lean_dec(v___x_456_);
v___y_412_ = v___x_452_;
v___y_413_ = v___x_432_;
v___y_414_ = v_a_451_;
v___y_415_ = v___x_429_;
v___y_416_ = v_a_455_;
v___y_417_ = v___x_429_;
goto v___jp_411_;
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_dec(v_a_451_);
lean_dec(v_onListen_386_);
v_a_458_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_454_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_454_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
else
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
lean_dec(v_onListen_386_);
v_a_466_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v___x_450_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_450_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_466_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
else
{
lean_object* v_a_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
lean_dec(v_error_387_);
lean_dec(v_onListen_386_);
lean_dec(v_signal_385_);
lean_dec(v_hostname_384_);
lean_dec(v_port_383_);
v_a_490_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_497_ == 0)
{
v___x_492_ = v___x_424_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_a_490_);
lean_dec(v___x_424_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_495_; 
if (v_isShared_493_ == 0)
{
v___x_495_ = v___x_492_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_a_490_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
v___jp_368_:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(l_Lasm_JS_Node_Server_finished___closed__1));
v___x_371_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v___y_369_, v___x_370_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_373_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
lean_inc(v_a_372_);
lean_dec_ref_known(v___x_371_, 1);
v___x_373_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Node_serve_spec__1(v_a_372_);
return v___x_373_;
}
else
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
v_a_374_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_371_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_371_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_374_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
v___jp_388_:
{
if (lean_obj_tag(v_onListen_386_) == 0)
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
lean_dec(v___y_391_);
lean_dec_ref(v___y_389_);
v___x_393_ = ((lean_object*)(l_Lasm_JS_Node_serve___closed__0));
v___x_394_ = lean_string_append(v___x_393_, v___y_392_);
lean_dec_ref(v___y_392_);
v___x_395_ = l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(v___x_394_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v___x_396_; lean_object* v_flush_397_; lean_object* v___x_398_; 
lean_dec_ref_known(v___x_395_, 1);
v___x_396_ = lean_get_stdout();
v_flush_397_ = lean_ctor_get(v___x_396_, 0);
lean_inc_ref(v_flush_397_);
lean_dec_ref(v___x_396_);
v___x_398_ = lean_apply_1(v_flush_397_, lean_box(0));
if (lean_obj_tag(v___x_398_) == 0)
{
lean_dec_ref_known(v___x_398_, 1);
v___y_369_ = v___y_390_;
goto v___jp_368_;
}
else
{
lean_dec(v___y_390_);
return v___x_398_;
}
}
else
{
lean_dec(v___y_390_);
return v___x_395_;
}
}
else
{
lean_object* v_val_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v_val_399_ = lean_ctor_get(v_onListen_386_, 0);
lean_inc(v_val_399_);
lean_dec_ref_known(v_onListen_386_, 1);
lean_inc(v___y_390_);
v___x_400_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_400_, 0, v___y_389_);
lean_ctor_set(v___x_400_, 1, v___y_391_);
lean_ctor_set(v___x_400_, 2, v___y_392_);
lean_ctor_set(v___x_400_, 3, v___y_390_);
v___x_401_ = lean_apply_2(v_val_399_, v___x_400_, lean_box(0));
if (lean_obj_tag(v___x_401_) == 0)
{
lean_dec_ref_known(v___x_401_, 1);
v___y_369_ = v___y_390_;
goto v___jp_368_;
}
else
{
lean_dec(v___y_390_);
return v___x_401_;
}
}
}
v___jp_402_:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lasm_JS_Data_field(v___y_407_, v___y_403_);
lean_dec(v___y_407_);
if (lean_obj_tag(v___x_409_) == 4)
{
lean_object* v_s_410_; 
lean_dec_ref(v___y_406_);
v_s_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc_ref(v_s_410_);
lean_dec_ref_known(v___x_409_, 1);
v___y_389_ = v___y_404_;
v___y_390_ = v___y_405_;
v___y_391_ = v___y_408_;
v___y_392_ = v_s_410_;
goto v___jp_388_;
}
else
{
lean_dec(v___x_409_);
v___y_389_ = v___y_404_;
v___y_390_ = v___y_405_;
v___y_391_ = v___y_408_;
v___y_392_ = v___y_406_;
goto v___jp_388_;
}
}
v___jp_411_:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lasm_JS_Data_field(v___y_416_, v___y_413_);
if (lean_obj_tag(v___x_418_) == 3)
{
double v_n_419_; uint64_t v___x_420_; lean_object* v___x_421_; 
v_n_419_ = lean_ctor_get_float(v___x_418_, 0);
lean_dec_ref_known(v___x_418_, 0);
v___x_420_ = lean_float_to_uint64(v_n_419_);
v___x_421_ = lean_uint64_to_nat(v___x_420_);
v___y_403_ = v___y_412_;
v___y_404_ = v___y_417_;
v___y_405_ = v___y_414_;
v___y_406_ = v___y_415_;
v___y_407_ = v___y_416_;
v___y_408_ = v___x_421_;
goto v___jp_402_;
}
else
{
lean_object* v___x_422_; 
lean_dec(v___x_418_);
v___x_422_ = lean_unsigned_to_nat(0u);
v___y_403_ = v___y_412_;
v___y_404_ = v___y_417_;
v___y_405_ = v___y_414_;
v___y_406_ = v___y_415_;
v___y_407_ = v___y_416_;
v___y_408_ = v___x_422_;
goto v___jp_402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_serve___boxed(lean_object* v_options_498_, lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lasm_JS_Node_serve(v_options_498_);
return v_res_500_;
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
