// Lean compiler output
// Module: Lasm.WASI.Http.Respond
// Imports: public import Init public meta import Init public import Lasm.WASI.Io.Streams public import Lasm.WASI.Http.Types
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
lean_object* lasm_wasi_io_streams_input_stream_blocking_read(uint32_t, uint64_t);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr(lean_object*, lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr(uint8_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Lasm_WASI_Http_Types_Fields_append___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_blocking_write_and_flush(uint32_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr(lean_object*, lean_object*);
lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_consume___boxed(lean_object*, lean_object*);
lean_object* l_Lasm_WASI_Http_Types_IncomingBody_stream___boxed(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lasm_wasi_io_streams_input_stream_drop(uint32_t);
lean_object* lasm_wasi_http_types_incoming_body_finish(uint32_t);
lean_object* lasm_wasi_http_types_future_trailers_drop(uint32_t);
lean_object* lasm_wasi_http_types_fields_new();
size_t lean_array_size(lean_object*);
lean_object* lasm_wasi_http_types_outgoing_response_new(uint32_t);
lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_setStatusCode___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_body___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_response_outparam_set(uint32_t, lean_object*);
lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_write___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_drop(uint32_t);
lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_finish___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_readAll(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_readAll___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_WASI_Io_Streams_OutputStream_writeAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Io_Streams_OutputStream_writeAll___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_OutputStream_writeAll___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_writeAll(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_writeAll___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "wasi:http "};
static const lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__0 = (const lean_object*)&l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__0_value;
static const lean_string_object l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__1 = (const lean_object*)&l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "()"};
static const lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__1_value;
static lean_once_cell_t l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "incoming-request.consume"};
static const lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__0_value;
static const lean_string_object l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "incoming-body.stream"};
static const lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__1_value;
static const lean_string_object l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "input-stream.blocking-read"};
static const lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_readBody(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_readBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "fields.append "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1(uint32_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_WASI_Http_respond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "outgoing-response.set-status-code"};
static const lean_object* l_Lasm_WASI_Http_respond___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_respond___closed__0_value;
static const lean_string_object l_Lasm_WASI_Http_respond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "outgoing-response.body"};
static const lean_object* l_Lasm_WASI_Http_respond___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_respond___closed__1_value;
static const lean_string_object l_Lasm_WASI_Http_respond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "outgoing-body.write"};
static const lean_object* l_Lasm_WASI_Http_respond___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_respond___closed__2_value;
static const lean_string_object l_Lasm_WASI_Http_respond___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "output-stream.blocking-write-and-flush"};
static const lean_object* l_Lasm_WASI_Http_respond___closed__3 = (const lean_object*)&l_Lasm_WASI_Http_respond___closed__3_value;
static const lean_string_object l_Lasm_WASI_Http_respond___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "outgoing-body.finish"};
static const lean_object* l_Lasm_WASI_Http_respond___closed__4 = (const lean_object*)&l_Lasm_WASI_Http_respond___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_respond(uint32_t, uint16_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_respond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_readAll(uint32_t v_s_1_, lean_object* v_acc_2_){
_start:
{
uint64_t v___x_4_; lean_object* v___x_5_; 
v___x_4_ = 65536ULL;
v___x_5_ = lasm_wasi_io_streams_input_stream_blocking_read(v_s_1_, v___x_4_);
if (lean_obj_tag(v___x_5_) == 0)
{
lean_object* v_a_6_; 
v_a_6_ = lean_ctor_get(v___x_5_, 0);
lean_inc(v_a_6_);
if (lean_obj_tag(v_a_6_) == 0)
{
lean_object* v_a_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_22_; 
v_a_7_ = lean_ctor_get(v_a_6_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v_a_6_);
if (v_isSharedCheck_22_ == 0)
{
v___x_9_ = v_a_6_;
v_isShared_10_ = v_isSharedCheck_22_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_a_7_);
lean_dec(v_a_6_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_22_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
if (lean_obj_tag(v_a_7_) == 1)
{
lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_20_; 
v_isSharedCheck_20_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_20_ == 0)
{
lean_object* v_unused_21_; 
v_unused_21_ = lean_ctor_get(v___x_5_, 0);
lean_dec(v_unused_21_);
v___x_12_ = v___x_5_;
v_isShared_13_ = v_isSharedCheck_20_;
goto v_resetjp_11_;
}
else
{
lean_dec(v___x_5_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_20_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_15_; 
if (v_isShared_10_ == 0)
{
lean_ctor_set_tag(v___x_9_, 1);
lean_ctor_set(v___x_9_, 0, v_acc_2_);
v___x_15_ = v___x_9_;
goto v_reusejp_14_;
}
else
{
lean_object* v_reuseFailAlloc_19_; 
v_reuseFailAlloc_19_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_19_, 0, v_acc_2_);
v___x_15_ = v_reuseFailAlloc_19_;
goto v_reusejp_14_;
}
v_reusejp_14_:
{
lean_object* v___x_17_; 
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_15_);
v___x_17_ = v___x_12_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
}
else
{
lean_del_object(v___x_9_);
lean_dec(v_a_7_);
lean_dec_ref(v_acc_2_);
return v___x_5_;
}
}
}
else
{
lean_object* v_a_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; uint8_t v___x_27_; lean_object* v___x_28_; 
lean_dec_ref_known(v___x_5_, 1);
v_a_23_ = lean_ctor_get(v_a_6_, 0);
lean_inc(v_a_23_);
lean_dec_ref_known(v_a_6_, 1);
v___x_24_ = lean_unsigned_to_nat(0u);
v___x_25_ = lean_byte_array_size(v_acc_2_);
v___x_26_ = lean_byte_array_size(v_a_23_);
v___x_27_ = 0;
v___x_28_ = lean_byte_array_copy_slice(v_a_23_, v___x_24_, v_acc_2_, v___x_25_, v___x_26_, v___x_27_);
lean_dec(v_a_23_);
v_acc_2_ = v___x_28_;
goto _start;
}
}
else
{
lean_dec_ref(v_acc_2_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_readAll___boxed(lean_object* v_s_30_, lean_object* v_acc_31_, lean_object* v_a_32_){
_start:
{
uint32_t v_s_boxed_33_; lean_object* v_res_34_; 
v_s_boxed_33_ = lean_unbox_uint32(v_s_30_);
lean_dec(v_s_30_);
v_res_34_ = l_Lasm_WASI_Io_Streams_InputStream_readAll(v_s_boxed_33_, v_acc_31_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_writeAll(uint32_t v_s_37_, lean_object* v_bytes_38_){
_start:
{
uint8_t v___x_40_; 
v___x_40_ = l_ByteArray_isEmpty(v_bytes_38_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; lean_object* v___y_43_; lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_41_ = lean_byte_array_size(v_bytes_38_);
v___x_50_ = lean_unsigned_to_nat(4096u);
v___x_51_ = lean_nat_dec_le(v___x_41_, v___x_50_);
if (v___x_51_ == 0)
{
v___y_43_ = v___x_50_;
goto v___jp_42_;
}
else
{
v___y_43_ = v___x_41_;
goto v___jp_42_;
}
v___jp_42_:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_unsigned_to_nat(0u);
v___x_45_ = l_ByteArray_extract(v_bytes_38_, v___x_44_, v___y_43_);
v___x_46_ = lasm_wasi_io_streams_output_stream_blocking_write_and_flush(v_s_37_, v___x_45_);
lean_dec_ref(v___x_45_);
if (lean_obj_tag(v___x_46_) == 0)
{
lean_object* v_a_47_; 
v_a_47_ = lean_ctor_get(v___x_46_, 0);
lean_inc(v_a_47_);
if (lean_obj_tag(v_a_47_) == 0)
{
lean_dec_ref_known(v_a_47_, 1);
lean_dec(v___y_43_);
lean_dec_ref(v_bytes_38_);
return v___x_46_;
}
else
{
lean_object* v___x_48_; 
lean_dec_ref_known(v_a_47_, 1);
lean_dec_ref_known(v___x_46_, 1);
v___x_48_ = l_ByteArray_extract(v_bytes_38_, v___y_43_, v___x_41_);
lean_dec_ref(v_bytes_38_);
v_bytes_38_ = v___x_48_;
goto _start;
}
}
else
{
lean_dec(v___y_43_);
lean_dec_ref(v_bytes_38_);
return v___x_46_;
}
}
}
else
{
lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec_ref(v_bytes_38_);
v___x_52_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_OutputStream_writeAll___closed__0));
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_writeAll___boxed(lean_object* v_s_54_, lean_object* v_bytes_55_, lean_object* v_a_56_){
_start:
{
uint32_t v_s_boxed_57_; lean_object* v_res_58_; 
v_s_boxed_57_ = lean_unbox_uint32(v_s_54_);
lean_dec(v_s_54_);
v_res_58_ = l_Lasm_WASI_Io_Streams_OutputStream_writeAll(v_s_boxed_57_, v_bytes_55_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg(lean_object* v_inst_61_, lean_object* v_call_62_, lean_object* v_x_63_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_apply_1(v_x_63_, lean_box(0));
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_94_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_94_ == 0)
{
v___x_68_ = v___x_65_;
v_isShared_69_ = v_isSharedCheck_94_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v___x_65_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_94_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
if (lean_obj_tag(v_a_66_) == 0)
{
lean_object* v_a_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_89_; 
v_a_70_ = lean_ctor_get(v_a_66_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v_a_66_);
if (v_isSharedCheck_89_ == 0)
{
v___x_72_ = v_a_66_;
v_isShared_73_ = v_isSharedCheck_89_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_a_70_);
lean_dec(v_a_66_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_89_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_84_; 
v___x_74_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__0));
v___x_75_ = lean_string_append(v___x_74_, v_call_62_);
v___x_76_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__1));
v___x_77_ = lean_string_append(v___x_75_, v___x_76_);
v___x_78_ = lean_unsigned_to_nat(0u);
v___x_79_ = lean_apply_2(v_inst_61_, v_a_70_, v___x_78_);
v___x_80_ = lean_unsigned_to_nat(120u);
v___x_81_ = l_Std_Format_pretty(v___x_79_, v___x_80_, v___x_78_, v___x_78_);
v___x_82_ = lean_string_append(v___x_77_, v___x_81_);
lean_dec_ref(v___x_81_);
if (v_isShared_73_ == 0)
{
lean_ctor_set_tag(v___x_72_, 18);
lean_ctor_set(v___x_72_, 0, v___x_82_);
v___x_84_ = v___x_72_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_82_);
v___x_84_ = v_reuseFailAlloc_88_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
lean_object* v___x_86_; 
if (v_isShared_69_ == 0)
{
lean_ctor_set_tag(v___x_68_, 1);
lean_ctor_set(v___x_68_, 0, v___x_84_);
v___x_86_ = v___x_68_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_84_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
}
else
{
lean_object* v_a_90_; lean_object* v___x_92_; 
lean_dec_ref(v_inst_61_);
v_a_90_ = lean_ctor_get(v_a_66_, 0);
lean_inc(v_a_90_);
lean_dec_ref_known(v_a_66_, 1);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 0, v_a_90_);
v___x_92_ = v___x_68_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_a_90_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
}
else
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
lean_dec_ref(v_inst_61_);
v_a_95_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_65_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_65_);
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
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___boxed(lean_object* v_inst_103_, lean_object* v_call_104_, lean_object* v_x_105_, lean_object* v_a_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg(v_inst_103_, v_call_104_, v_x_105_);
lean_dec_ref(v_call_104_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check(lean_object* v_00_u03b5_108_, lean_object* v_00_u03b1_109_, lean_object* v_inst_110_, lean_object* v_call_111_, lean_object* v_x_112_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg(v_inst_110_, v_call_111_, v_x_112_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___boxed(lean_object* v_00_u03b5_115_, lean_object* v_00_u03b1_116_, lean_object* v_inst_117_, lean_object* v_call_118_, lean_object* v_x_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check(v_00_u03b5_115_, v_00_u03b1_116_, v_inst_117_, v_call_118_, v_x_119_);
lean_dec_ref(v_call_118_);
return v_res_121_;
}
}
static lean_object* _init_l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_125_ = lean_unsigned_to_nat(0u);
v___x_126_ = lean_unsigned_to_nat(120u);
v___x_127_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__1));
v___x_128_ = l_Std_Format_pretty(v___x_127_, v___x_126_, v___x_125_, v___x_125_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg(lean_object* v_call_129_, lean_object* v_x_130_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_apply_1(v_x_130_, lean_box(0));
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_158_; 
v_a_133_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_158_ == 0)
{
v___x_135_ = v___x_132_;
v_isShared_136_ = v_isSharedCheck_158_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v___x_132_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_158_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
if (lean_obj_tag(v_a_133_) == 0)
{
lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_152_; 
v_isSharedCheck_152_ = !lean_is_exclusive(v_a_133_);
if (v_isSharedCheck_152_ == 0)
{
lean_object* v_unused_153_; 
v_unused_153_ = lean_ctor_get(v_a_133_, 0);
lean_dec(v_unused_153_);
v___x_138_ = v_a_133_;
v_isShared_139_ = v_isSharedCheck_152_;
goto v_resetjp_137_;
}
else
{
lean_dec(v_a_133_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_152_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_140_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__0));
v___x_141_ = lean_string_append(v___x_140_, v_call_129_);
v___x_142_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__1));
v___x_143_ = lean_string_append(v___x_141_, v___x_142_);
v___x_144_ = lean_obj_once(&l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__2, &l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__2_once, _init_l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___closed__2);
v___x_145_ = lean_string_append(v___x_143_, v___x_144_);
if (v_isShared_139_ == 0)
{
lean_ctor_set_tag(v___x_138_, 18);
lean_ctor_set(v___x_138_, 0, v___x_145_);
v___x_147_ = v___x_138_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_145_);
v___x_147_ = v_reuseFailAlloc_151_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
lean_object* v___x_149_; 
if (v_isShared_136_ == 0)
{
lean_ctor_set_tag(v___x_135_, 1);
lean_ctor_set(v___x_135_, 0, v___x_147_);
v___x_149_ = v___x_135_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_147_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
else
{
lean_object* v_a_154_; lean_object* v___x_156_; 
v_a_154_ = lean_ctor_get(v_a_133_, 0);
lean_inc(v_a_154_);
lean_dec_ref_known(v_a_133_, 1);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v_a_154_);
v___x_156_ = v___x_135_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_154_);
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
else
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_166_; 
v_a_159_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_166_ == 0)
{
v___x_161_ = v___x_132_;
v_isShared_162_ = v_isSharedCheck_166_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_132_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_166_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_164_; 
if (v_isShared_162_ == 0)
{
v___x_164_ = v___x_161_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_a_159_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg___boxed(lean_object* v_call_167_, lean_object* v_x_168_, lean_object* v_a_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg(v_call_167_, v_x_168_);
lean_dec_ref(v_call_167_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0(lean_object* v_00_u03b1_171_, lean_object* v_call_172_, lean_object* v_x_173_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg(v_call_172_, v_x_173_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___boxed(lean_object* v_00_u03b1_176_, lean_object* v_call_177_, lean_object* v_x_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0(v_00_u03b1_176_, v_call_177_, v_x_178_);
lean_dec_ref(v_call_177_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___redArg(lean_object* v_call_181_, lean_object* v_x_182_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_apply_1(v_x_182_, lean_box(0));
if (lean_obj_tag(v___x_184_) == 0)
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_213_; 
v_a_185_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_213_ == 0)
{
v___x_187_ = v___x_184_;
v_isShared_188_ = v_isSharedCheck_213_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___x_184_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_213_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
if (lean_obj_tag(v_a_185_) == 0)
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_208_; 
v_a_189_ = lean_ctor_get(v_a_185_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v_a_185_);
if (v_isSharedCheck_208_ == 0)
{
v___x_191_ = v_a_185_;
v_isShared_192_ = v_isSharedCheck_208_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v_a_185_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_208_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_193_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__0));
v___x_194_ = lean_string_append(v___x_193_, v_call_181_);
v___x_195_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__1));
v___x_196_ = lean_string_append(v___x_194_, v___x_195_);
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = l_Lasm_WASI_Io_Streams_instReprStreamError_repr(v_a_189_, v___x_197_);
lean_dec(v_a_189_);
v___x_199_ = lean_unsigned_to_nat(120u);
v___x_200_ = l_Std_Format_pretty(v___x_198_, v___x_199_, v___x_197_, v___x_197_);
v___x_201_ = lean_string_append(v___x_196_, v___x_200_);
lean_dec_ref(v___x_200_);
if (v_isShared_192_ == 0)
{
lean_ctor_set_tag(v___x_191_, 18);
lean_ctor_set(v___x_191_, 0, v___x_201_);
v___x_203_ = v___x_191_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_201_);
v___x_203_ = v_reuseFailAlloc_207_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
lean_object* v___x_205_; 
if (v_isShared_188_ == 0)
{
lean_ctor_set_tag(v___x_187_, 1);
lean_ctor_set(v___x_187_, 0, v___x_203_);
v___x_205_ = v___x_187_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; 
v_a_209_ = lean_ctor_get(v_a_185_, 0);
lean_inc(v_a_209_);
lean_dec_ref_known(v_a_185_, 1);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 0, v_a_209_);
v___x_211_ = v___x_187_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_a_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
else
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
v_a_214_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_184_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_184_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___redArg___boxed(lean_object* v_call_222_, lean_object* v_x_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___redArg(v_call_222_, v_x_223_);
lean_dec_ref(v_call_222_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1(lean_object* v_00_u03b1_226_, lean_object* v_call_227_, lean_object* v_x_228_){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___redArg(v_call_227_, v_x_228_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___boxed(lean_object* v_00_u03b1_231_, lean_object* v_call_232_, lean_object* v_x_233_, lean_object* v_a_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1(v_00_u03b1_231_, v_call_232_, v_x_233_);
lean_dec_ref(v_call_232_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_readBody(uint32_t v_request_239_){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_241_ = ((lean_object*)(l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__0));
v___x_242_ = lean_box_uint32(v_request_239_);
v___x_243_ = lean_alloc_closure((void*)(l_Lasm_WASI_Http_Types_IncomingRequest_consume___boxed), 2, 1);
lean_closure_set(v___x_243_, 0, v___x_242_);
v___x_244_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg(v___x_241_, v___x_243_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc_n(v_a_245_, 2);
lean_dec_ref_known(v___x_244_, 1);
v___x_246_ = ((lean_object*)(l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__1));
v___x_247_ = lean_alloc_closure((void*)(l_Lasm_WASI_Http_Types_IncomingBody_stream___boxed), 2, 1);
lean_closure_set(v___x_247_, 0, v_a_245_);
v___x_248_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg(v___x_246_, v___x_247_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc_n(v_a_249_, 2);
lean_dec_ref_known(v___x_248_, 1);
v___x_250_ = ((lean_object*)(l_Lasm_WASI_Http_Types_IncomingRequest_readBody___closed__2));
v___x_251_ = l_ByteArray_empty;
v___x_252_ = lean_alloc_closure((void*)(l_Lasm_WASI_Io_Streams_InputStream_readAll___boxed), 3, 2);
lean_closure_set(v___x_252_, 0, v_a_249_);
lean_closure_set(v___x_252_, 1, v___x_251_);
v___x_253_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___redArg(v___x_250_, v___x_252_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; uint32_t v___x_255_; lean_object* v___x_256_; 
v_a_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc(v_a_254_);
lean_dec_ref_known(v___x_253_, 1);
v___x_255_ = lean_unbox_uint32(v_a_249_);
lean_dec(v_a_249_);
v___x_256_ = lasm_wasi_io_streams_input_stream_drop(v___x_255_);
if (lean_obj_tag(v___x_256_) == 0)
{
uint32_t v___x_257_; lean_object* v___x_258_; 
lean_dec_ref_known(v___x_256_, 1);
v___x_257_ = lean_unbox_uint32(v_a_245_);
lean_dec(v_a_245_);
v___x_258_ = lasm_wasi_http_types_incoming_body_finish(v___x_257_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; uint32_t v___x_260_; lean_object* v___x_261_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_a_259_);
lean_dec_ref_known(v___x_258_, 1);
v___x_260_ = lean_unbox_uint32(v_a_259_);
lean_dec(v_a_259_);
v___x_261_ = lasm_wasi_http_types_future_trailers_drop(v___x_260_);
if (lean_obj_tag(v___x_261_) == 0)
{
lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_268_ == 0)
{
lean_object* v_unused_269_; 
v_unused_269_ = lean_ctor_get(v___x_261_, 0);
lean_dec(v_unused_269_);
v___x_263_ = v___x_261_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_dec(v___x_261_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v_a_254_);
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_254_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
else
{
lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_277_; 
lean_dec(v_a_254_);
v_a_270_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_277_ == 0)
{
v___x_272_ = v___x_261_;
v_isShared_273_ = v_isSharedCheck_277_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v___x_261_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_277_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_275_; 
if (v_isShared_273_ == 0)
{
v___x_275_ = v___x_272_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v_a_270_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec(v_a_254_);
v_a_278_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_258_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_258_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_dec(v_a_254_);
lean_dec(v_a_245_);
v_a_286_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_256_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_256_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
else
{
lean_dec(v_a_249_);
lean_dec(v_a_245_);
return v___x_253_;
}
}
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec(v_a_245_);
v_a_294_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v___x_248_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_248_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_309_; 
v_a_302_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_309_ == 0)
{
v___x_304_ = v___x_244_;
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_244_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
if (v_isShared_305_ == 0)
{
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_302_);
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
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_readBody___boxed(lean_object* v_request_310_, lean_object* v_a_311_){
_start:
{
uint32_t v_request_boxed_312_; lean_object* v_res_313_; 
v_request_boxed_312_ = lean_unbox_uint32(v_request_310_);
lean_dec(v_request_310_);
v_res_313_ = l_Lasm_WASI_Http_Types_IncomingRequest_readBody(v_request_boxed_312_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0___redArg(lean_object* v_call_314_, lean_object* v_x_315_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = lean_apply_1(v_x_315_, lean_box(0));
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_347_; 
v_a_318_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_347_ == 0)
{
v___x_320_ = v___x_317_;
v_isShared_321_ = v_isSharedCheck_347_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_317_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_347_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
if (lean_obj_tag(v_a_318_) == 0)
{
lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_342_; 
v_a_322_ = lean_ctor_get(v_a_318_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v_a_318_);
if (v_isSharedCheck_342_ == 0)
{
v___x_324_ = v_a_318_;
v_isShared_325_ = v_isSharedCheck_342_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v_a_318_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_342_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_326_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__0));
v___x_327_ = lean_string_append(v___x_326_, v_call_314_);
v___x_328_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__1));
v___x_329_ = lean_string_append(v___x_327_, v___x_328_);
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = lean_unbox(v_a_322_);
lean_dec(v_a_322_);
v___x_332_ = l_Lasm_WASI_Http_Types_instReprHeaderError_repr(v___x_331_, v___x_330_);
v___x_333_ = lean_unsigned_to_nat(120u);
v___x_334_ = l_Std_Format_pretty(v___x_332_, v___x_333_, v___x_330_, v___x_330_);
v___x_335_ = lean_string_append(v___x_329_, v___x_334_);
lean_dec_ref(v___x_334_);
if (v_isShared_325_ == 0)
{
lean_ctor_set_tag(v___x_324_, 18);
lean_ctor_set(v___x_324_, 0, v___x_335_);
v___x_337_ = v___x_324_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_335_);
v___x_337_ = v_reuseFailAlloc_341_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
lean_object* v___x_339_; 
if (v_isShared_321_ == 0)
{
lean_ctor_set_tag(v___x_320_, 1);
lean_ctor_set(v___x_320_, 0, v___x_337_);
v___x_339_ = v___x_320_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; 
v_a_343_ = lean_ctor_get(v_a_318_, 0);
lean_inc(v_a_343_);
lean_dec_ref_known(v_a_318_, 1);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v_a_343_);
v___x_345_ = v___x_320_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_343_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
v_a_348_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_317_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_317_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0___redArg___boxed(lean_object* v_call_356_, lean_object* v_x_357_, lean_object* v_a_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0___redArg(v_call_356_, v_x_357_);
lean_dec_ref(v_call_356_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0(lean_object* v_00_u03b1_360_, lean_object* v_call_361_, lean_object* v_x_362_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0___redArg(v_call_361_, v_x_362_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0___boxed(lean_object* v_00_u03b1_365_, lean_object* v_call_366_, lean_object* v_x_367_, lean_object* v_a_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0(v_00_u03b1_365_, v_call_366_, v_x_367_);
lean_dec_ref(v_call_366_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2___redArg(lean_object* v_call_370_, lean_object* v_x_371_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_apply_1(v_x_371_, lean_box(0));
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_402_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_402_ == 0)
{
v___x_376_ = v___x_373_;
v_isShared_377_ = v_isSharedCheck_402_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_373_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_402_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
if (lean_obj_tag(v_a_374_) == 0)
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_397_; 
v_a_378_ = lean_ctor_get(v_a_374_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v_a_374_);
if (v_isSharedCheck_397_ == 0)
{
v___x_380_ = v_a_374_;
v_isShared_381_ = v_isSharedCheck_397_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v_a_374_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_397_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_392_; 
v___x_382_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__0));
v___x_383_ = lean_string_append(v___x_382_, v_call_370_);
v___x_384_ = ((lean_object*)(l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___redArg___closed__1));
v___x_385_ = lean_string_append(v___x_383_, v___x_384_);
v___x_386_ = lean_unsigned_to_nat(0u);
v___x_387_ = l_Lasm_WASI_Http_Types_instReprErrorCode_repr(v_a_378_, v___x_386_);
v___x_388_ = lean_unsigned_to_nat(120u);
v___x_389_ = l_Std_Format_pretty(v___x_387_, v___x_388_, v___x_386_, v___x_386_);
v___x_390_ = lean_string_append(v___x_385_, v___x_389_);
lean_dec_ref(v___x_389_);
if (v_isShared_381_ == 0)
{
lean_ctor_set_tag(v___x_380_, 18);
lean_ctor_set(v___x_380_, 0, v___x_390_);
v___x_392_ = v___x_380_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v___x_390_);
v___x_392_ = v_reuseFailAlloc_396_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
lean_object* v___x_394_; 
if (v_isShared_377_ == 0)
{
lean_ctor_set_tag(v___x_376_, 1);
lean_ctor_set(v___x_376_, 0, v___x_392_);
v___x_394_ = v___x_376_;
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
else
{
lean_object* v_a_398_; lean_object* v___x_400_; 
v_a_398_ = lean_ctor_get(v_a_374_, 0);
lean_inc(v_a_398_);
lean_dec_ref_known(v_a_374_, 1);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 0, v_a_398_);
v___x_400_ = v___x_376_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_398_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
v_a_403_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_373_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_373_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2___redArg___boxed(lean_object* v_call_411_, lean_object* v_x_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2___redArg(v_call_411_, v_x_412_);
lean_dec_ref(v_call_411_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2(lean_object* v_00_u03b1_415_, lean_object* v_call_416_, lean_object* v_x_417_){
_start:
{
lean_object* v___x_419_; 
v___x_419_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2___redArg(v_call_416_, v_x_417_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2___boxed(lean_object* v_00_u03b1_420_, lean_object* v_call_421_, lean_object* v_x_422_, lean_object* v_a_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2(v_00_u03b1_420_, v_call_421_, v_x_422_);
lean_dec_ref(v_call_421_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1(uint32_t v_a_426_, lean_object* v_as_427_, size_t v_sz_428_, size_t v_i_429_, lean_object* v_b_430_){
_start:
{
uint8_t v___x_432_; 
v___x_432_ = lean_usize_dec_lt(v_i_429_, v_sz_428_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; 
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v_b_430_);
return v___x_433_;
}
else
{
lean_object* v_a_434_; lean_object* v_fst_435_; lean_object* v_snd_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_a_434_ = lean_array_uget_borrowed(v_as_427_, v_i_429_);
v_fst_435_ = lean_ctor_get(v_a_434_, 0);
v_snd_436_ = lean_ctor_get(v_a_434_, 1);
v___x_437_ = lean_box(0);
v___x_438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1___closed__0));
lean_inc_n(v_fst_435_, 2);
v___x_439_ = l_String_quote(v_fst_435_);
v___x_440_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
v___x_441_ = lean_unsigned_to_nat(120u);
v___x_442_ = lean_unsigned_to_nat(0u);
v___x_443_ = l_Std_Format_pretty(v___x_440_, v___x_441_, v___x_442_, v___x_442_);
v___x_444_ = lean_string_append(v___x_438_, v___x_443_);
lean_dec_ref(v___x_443_);
v___x_445_ = lean_string_to_utf8(v_snd_436_);
v___x_446_ = lean_box_uint32(v_a_426_);
v___x_447_ = lean_alloc_closure((void*)(l_Lasm_WASI_Http_Types_Fields_append___boxed), 4, 3);
lean_closure_set(v___x_447_, 0, v___x_446_);
lean_closure_set(v___x_447_, 1, v_fst_435_);
lean_closure_set(v___x_447_, 2, v___x_445_);
v___x_448_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__0___redArg(v___x_444_, v___x_447_);
lean_dec_ref(v___x_444_);
if (lean_obj_tag(v___x_448_) == 0)
{
size_t v___x_449_; size_t v___x_450_; 
lean_dec_ref_known(v___x_448_, 1);
v___x_449_ = ((size_t)1ULL);
v___x_450_ = lean_usize_add(v_i_429_, v___x_449_);
v_i_429_ = v___x_450_;
v_b_430_ = v___x_437_;
goto _start;
}
else
{
return v___x_448_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1___boxed(lean_object* v_a_452_, lean_object* v_as_453_, lean_object* v_sz_454_, lean_object* v_i_455_, lean_object* v_b_456_, lean_object* v___y_457_){
_start:
{
uint32_t v_a_1100__boxed_458_; size_t v_sz_boxed_459_; size_t v_i_boxed_460_; lean_object* v_res_461_; 
v_a_1100__boxed_458_ = lean_unbox_uint32(v_a_452_);
lean_dec(v_a_452_);
v_sz_boxed_459_ = lean_unbox_usize(v_sz_454_);
lean_dec(v_sz_454_);
v_i_boxed_460_ = lean_unbox_usize(v_i_455_);
lean_dec(v_i_455_);
v_res_461_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1(v_a_1100__boxed_458_, v_as_453_, v_sz_boxed_459_, v_i_boxed_460_, v_b_456_);
lean_dec_ref(v_as_453_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_respond(uint32_t v_out_467_, uint16_t v_status_468_, lean_object* v_headers_469_, lean_object* v_body_470_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = lasm_wasi_http_types_fields_new();
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_474_; size_t v_sz_475_; size_t v___x_476_; uint32_t v___x_477_; lean_object* v___x_478_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_472_, 1);
v___x_474_ = lean_box(0);
v_sz_475_ = lean_array_size(v_headers_469_);
v___x_476_ = ((size_t)0ULL);
v___x_477_ = lean_unbox_uint32(v_a_473_);
v___x_478_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_WASI_Http_respond_spec__1(v___x_477_, v_headers_469_, v_sz_475_, v___x_476_, v___x_474_);
if (lean_obj_tag(v___x_478_) == 0)
{
uint32_t v___x_479_; lean_object* v___x_480_; 
lean_dec_ref_known(v___x_478_, 1);
v___x_479_ = lean_unbox_uint32(v_a_473_);
lean_dec(v_a_473_);
v___x_480_ = lasm_wasi_http_types_outgoing_response_new(v___x_479_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc_n(v_a_481_, 2);
lean_dec_ref_known(v___x_480_, 1);
v___x_482_ = ((lean_object*)(l_Lasm_WASI_Http_respond___closed__0));
v___x_483_ = lean_box(v_status_468_);
v___x_484_ = lean_alloc_closure((void*)(l_Lasm_WASI_Http_Types_OutgoingResponse_setStatusCode___boxed), 3, 2);
lean_closure_set(v___x_484_, 0, v_a_481_);
lean_closure_set(v___x_484_, 1, v___x_483_);
v___x_485_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg(v___x_482_, v___x_484_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_526_; 
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_526_ == 0)
{
lean_object* v_unused_527_; 
v_unused_527_ = lean_ctor_get(v___x_485_, 0);
lean_dec(v_unused_527_);
v___x_487_ = v___x_485_;
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
else
{
lean_dec(v___x_485_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = ((lean_object*)(l_Lasm_WASI_Http_respond___closed__1));
lean_inc(v_a_481_);
v___x_490_ = lean_alloc_closure((void*)(l_Lasm_WASI_Http_Types_OutgoingResponse_body___boxed), 2, 1);
lean_closure_set(v___x_490_, 0, v_a_481_);
v___x_491_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg(v___x_489_, v___x_490_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v_a_492_; lean_object* v___x_494_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc(v_a_492_);
lean_dec_ref_known(v___x_491_, 1);
if (v_isShared_488_ == 0)
{
lean_ctor_set_tag(v___x_487_, 1);
lean_ctor_set(v___x_487_, 0, v_a_481_);
v___x_494_ = v___x_487_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_481_);
v___x_494_ = v_reuseFailAlloc_517_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_495_; 
v___x_495_ = lasm_wasi_http_types_response_outparam_set(v_out_467_, v___x_494_);
lean_dec_ref(v___x_494_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
lean_dec_ref_known(v___x_495_, 1);
v___x_496_ = ((lean_object*)(l_Lasm_WASI_Http_respond___closed__2));
lean_inc(v_a_492_);
v___x_497_ = lean_alloc_closure((void*)(l_Lasm_WASI_Http_Types_OutgoingBody_write___boxed), 2, 1);
lean_closure_set(v___x_497_, 0, v_a_492_);
v___x_498_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__0___redArg(v___x_496_, v___x_497_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc_n(v_a_499_, 2);
lean_dec_ref_known(v___x_498_, 1);
v___x_500_ = ((lean_object*)(l_Lasm_WASI_Http_respond___closed__3));
v___x_501_ = lean_alloc_closure((void*)(l_Lasm_WASI_Io_Streams_OutputStream_writeAll___boxed), 3, 2);
lean_closure_set(v___x_501_, 0, v_a_499_);
lean_closure_set(v___x_501_, 1, v_body_470_);
v___x_502_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_Types_IncomingRequest_readBody_spec__1___redArg(v___x_500_, v___x_501_);
if (lean_obj_tag(v___x_502_) == 0)
{
uint32_t v___x_503_; lean_object* v___x_504_; 
lean_dec_ref_known(v___x_502_, 1);
v___x_503_ = lean_unbox_uint32(v_a_499_);
lean_dec(v_a_499_);
v___x_504_ = lasm_wasi_io_streams_output_stream_drop(v___x_503_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
lean_dec_ref_known(v___x_504_, 1);
v___x_505_ = ((lean_object*)(l_Lasm_WASI_Http_respond___closed__4));
v___x_506_ = lean_box(0);
v___x_507_ = lean_alloc_closure((void*)(l_Lasm_WASI_Http_Types_OutgoingBody_finish___boxed), 3, 2);
lean_closure_set(v___x_507_, 0, v_a_492_);
lean_closure_set(v___x_507_, 1, v___x_506_);
v___x_508_ = l___private_Lasm_WASI_Http_Respond_0__Lasm_WASI_Http_check___at___00Lasm_WASI_Http_respond_spec__2___redArg(v___x_505_, v___x_507_);
return v___x_508_;
}
else
{
lean_dec(v_a_492_);
return v___x_504_;
}
}
else
{
lean_dec(v_a_499_);
lean_dec(v_a_492_);
return v___x_502_;
}
}
else
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
lean_dec(v_a_492_);
lean_dec_ref(v_body_470_);
v_a_509_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v___x_498_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_498_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
else
{
lean_dec(v_a_492_);
lean_dec_ref(v_body_470_);
return v___x_495_;
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_del_object(v___x_487_);
lean_dec(v_a_481_);
lean_dec_ref(v_body_470_);
v_a_518_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_491_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_491_);
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
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_dec(v_a_481_);
lean_dec_ref(v_body_470_);
return v___x_485_;
}
}
else
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
lean_dec_ref(v_body_470_);
v_a_528_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_480_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_480_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
else
{
lean_dec(v_a_473_);
lean_dec_ref(v_body_470_);
return v___x_478_;
}
}
else
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_543_; 
lean_dec_ref(v_body_470_);
v_a_536_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_543_ == 0)
{
v___x_538_ = v___x_472_;
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_472_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_a_536_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_respond___boxed(lean_object* v_out_544_, lean_object* v_status_545_, lean_object* v_headers_546_, lean_object* v_body_547_, lean_object* v_a_548_){
_start:
{
uint32_t v_out_boxed_549_; uint16_t v_status_boxed_550_; lean_object* v_res_551_; 
v_out_boxed_549_ = lean_unbox_uint32(v_out_544_);
lean_dec(v_out_544_);
v_status_boxed_550_ = lean_unbox(v_status_545_);
v_res_551_ = l_Lasm_WASI_Http_respond(v_out_boxed_549_, v_status_boxed_550_, v_headers_546_, v_body_547_);
lean_dec_ref(v_headers_546_);
return v_res_551_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Streams(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Http_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_WASI_Http_Respond(uint8_t builtin) {
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
res = initialize_Lasm_WASI_Io_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Http_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
