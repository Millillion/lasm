// Lean compiler output
// Module: Lasm.JS.Cloudflare.Queues
// Imports: public import Init public meta import Init public import Lasm.JS.Cloudflare.Support
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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
extern lean_object* l_Lasm_JS_instFromJSData;
extern lean_object* l_Lasm_JS_instFromJSFloat;
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueue___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSQueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSQueue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueue___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSQueue = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueue___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSQueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueue___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueue___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Cloudflare.Queue"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueue___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueue___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSQueue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueue___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueue___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueue___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueue = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueue___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSMessage = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueue___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Cloudflare.Message"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSMessage___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessage___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSMessage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueue___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessage___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSMessage___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessage___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSMessage = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessage___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSMessageBatch = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueue___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSMessageBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Cloudflare.MessageBatch"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatch___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessageBatch___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSMessageBatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueue___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessageBatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatch___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessageBatch___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatch = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessageBatch___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_text_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_text_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_text_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_text_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_json_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_json_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_json_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_json_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_v8_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_v8_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_v8_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_v8_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqQueueContentType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqQueueContentType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instBEqQueueContentType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instBEqQueueContentType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instBEqQueueContentType___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqQueueContentType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instBEqQueueContentType = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqQueueContentType___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Cloudflare.QueueContentType.text"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Cloudflare.QueueContentType.bytes"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Cloudflare.QueueContentType.json"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Cloudflare.QueueContentType.v8"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__7_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instReprQueueContentType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprQueueContentType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedQueueContentType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedQueueContentType;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bytes"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "json"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "v8"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSQueueContentType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Cloudflare.QueueContentType"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueContentType___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "backlogCount"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "backlogBytes"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "oldestMessageTimestamp"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Cloudflare.QueueMetrics"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "contentType"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "delaySeconds"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Cloudflare.QueueSendMetrics"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "metrics"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Cloudflare.QueueSendMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "metadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Cloudflare.QueueSendResponse"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueContentType___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSMessageSendRequest = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendBatchOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSQueueSendBatchOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSQueueSendBatchOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendBatchOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendBatchOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendBatchOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendBatchOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Cloudflare.QueueSendBatchMetrics"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Cloudflare.QueueSendBatchMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Cloudflare.QueueSendBatchResponse"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSQueueRetryOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueueSendBatchOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Cloudflare.MessageBatchMetrics"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Cloudflare.MessageBatchMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__0_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__3_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__4;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__6_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__0_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Cloudflare_Queue_metrics___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Cloudflare_Queue_metrics___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Queue_metrics___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_Queue_metrics___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_Queue_metrics___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_metrics(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_metrics___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__3(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__0_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Queue_send___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "send"};
static const lean_object* l_Lasm_JS_Cloudflare_Queue_send___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Queue_send___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__0_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Queue_sendBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "sendBatch"};
static const lean_object* l_Lasm_JS_Cloudflare_Queue_sendBatch___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Queue_sendBatch___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_sendBatch(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_sendBatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Message_id___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lasm_JS_Cloudflare_Message_id___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Message_id___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_id(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Message_timestamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "timestamp"};
static const lean_object* l_Lasm_JS_Cloudflare_Message_timestamp___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Message_timestamp___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_timestamp(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_timestamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_body(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_body___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Message_attempts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attempts"};
static const lean_object* l_Lasm_JS_Cloudflare_Message_attempts___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Message_attempts___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_attempts(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_attempts___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Message_retry_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Message_retry_spec__0___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Message_retry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "retry"};
static const lean_object* l_Lasm_JS_Cloudflare_Message_retry___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Message_retry___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_retry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_retry___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Message_ack___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ack"};
static const lean_object* l_Lasm_JS_Cloudflare_Message_ack___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Message_ack___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_ack(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_ack___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Array (Lasm.JS.Cloudflare.Message)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "an element is not Lasm.JS.Cloudflare.Message"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_MessageBatch_messages___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "messages"};
static const lean_object* l_Lasm_JS_Cloudflare_MessageBatch_messages___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_MessageBatch_messages___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_messages(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_messages___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_MessageBatch_queue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "queue"};
static const lean_object* l_Lasm_JS_Cloudflare_MessageBatch_queue___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_MessageBatch_queue___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_queue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_queue___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__0_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_metadata(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_metadata___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_MessageBatch_retryAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "retryAll"};
static const lean_object* l_Lasm_JS_Cloudflare_MessageBatch_retryAll___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_MessageBatch_retryAll___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_retryAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_retryAll___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_MessageBatch_ackAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ackAll"};
static const lean_object* l_Lasm_JS_Cloudflare_MessageBatch_ackAll___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_MessageBatch_ackAll___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_ackAll(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_ackAll___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueue___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Cloudflare_instFromJSQueue___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorIdx(uint8_t v_x_36_){
_start:
{
switch(v_x_36_)
{
case 0:
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(0u);
return v___x_37_;
}
case 1:
{
lean_object* v___x_38_; 
v___x_38_ = lean_unsigned_to_nat(1u);
return v___x_38_;
}
case 2:
{
lean_object* v___x_39_; 
v___x_39_ = lean_unsigned_to_nat(2u);
return v___x_39_;
}
default: 
{
lean_object* v___x_40_; 
v___x_40_ = lean_unsigned_to_nat(3u);
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorIdx___boxed(lean_object* v_x_41_){
_start:
{
uint8_t v_x_boxed_42_; lean_object* v_res_43_; 
v_x_boxed_42_ = lean_unbox(v_x_41_);
v_res_43_ = l_Lasm_JS_Cloudflare_QueueContentType_ctorIdx(v_x_boxed_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorElim___redArg(lean_object* v_k_44_){
_start:
{
lean_inc(v_k_44_);
return v_k_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorElim___redArg___boxed(lean_object* v_k_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lasm_JS_Cloudflare_QueueContentType_ctorElim___redArg(v_k_45_);
lean_dec(v_k_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorElim(lean_object* v_motive_47_, lean_object* v_ctorIdx_48_, uint8_t v_t_49_, lean_object* v_h_50_, lean_object* v_k_51_){
_start:
{
lean_inc(v_k_51_);
return v_k_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_ctorElim___boxed(lean_object* v_motive_52_, lean_object* v_ctorIdx_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_k_56_){
_start:
{
uint8_t v_t_boxed_57_; lean_object* v_res_58_; 
v_t_boxed_57_ = lean_unbox(v_t_54_);
v_res_58_ = l_Lasm_JS_Cloudflare_QueueContentType_ctorElim(v_motive_52_, v_ctorIdx_53_, v_t_boxed_57_, v_h_55_, v_k_56_);
lean_dec(v_k_56_);
lean_dec(v_ctorIdx_53_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_text_elim___redArg(lean_object* v_text_59_){
_start:
{
lean_inc(v_text_59_);
return v_text_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_text_elim___redArg___boxed(lean_object* v_text_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lasm_JS_Cloudflare_QueueContentType_text_elim___redArg(v_text_60_);
lean_dec(v_text_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_text_elim(lean_object* v_motive_62_, uint8_t v_t_63_, lean_object* v_h_64_, lean_object* v_text_65_){
_start:
{
lean_inc(v_text_65_);
return v_text_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_text_elim___boxed(lean_object* v_motive_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_text_69_){
_start:
{
uint8_t v_t_boxed_70_; lean_object* v_res_71_; 
v_t_boxed_70_ = lean_unbox(v_t_67_);
v_res_71_ = l_Lasm_JS_Cloudflare_QueueContentType_text_elim(v_motive_66_, v_t_boxed_70_, v_h_68_, v_text_69_);
lean_dec(v_text_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim___redArg(lean_object* v_bytes_72_){
_start:
{
lean_inc(v_bytes_72_);
return v_bytes_72_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim___redArg___boxed(lean_object* v_bytes_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim___redArg(v_bytes_73_);
lean_dec(v_bytes_73_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim(lean_object* v_motive_75_, uint8_t v_t_76_, lean_object* v_h_77_, lean_object* v_bytes_78_){
_start:
{
lean_inc(v_bytes_78_);
return v_bytes_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim___boxed(lean_object* v_motive_79_, lean_object* v_t_80_, lean_object* v_h_81_, lean_object* v_bytes_82_){
_start:
{
uint8_t v_t_boxed_83_; lean_object* v_res_84_; 
v_t_boxed_83_ = lean_unbox(v_t_80_);
v_res_84_ = l_Lasm_JS_Cloudflare_QueueContentType_bytes_elim(v_motive_79_, v_t_boxed_83_, v_h_81_, v_bytes_82_);
lean_dec(v_bytes_82_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_json_elim___redArg(lean_object* v_json_85_){
_start:
{
lean_inc(v_json_85_);
return v_json_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_json_elim___redArg___boxed(lean_object* v_json_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lasm_JS_Cloudflare_QueueContentType_json_elim___redArg(v_json_86_);
lean_dec(v_json_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_json_elim(lean_object* v_motive_88_, uint8_t v_t_89_, lean_object* v_h_90_, lean_object* v_json_91_){
_start:
{
lean_inc(v_json_91_);
return v_json_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_json_elim___boxed(lean_object* v_motive_92_, lean_object* v_t_93_, lean_object* v_h_94_, lean_object* v_json_95_){
_start:
{
uint8_t v_t_boxed_96_; lean_object* v_res_97_; 
v_t_boxed_96_ = lean_unbox(v_t_93_);
v_res_97_ = l_Lasm_JS_Cloudflare_QueueContentType_json_elim(v_motive_92_, v_t_boxed_96_, v_h_94_, v_json_95_);
lean_dec(v_json_95_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_v8_elim___redArg(lean_object* v_v8_98_){
_start:
{
lean_inc(v_v8_98_);
return v_v8_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_v8_elim___redArg___boxed(lean_object* v_v8_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lasm_JS_Cloudflare_QueueContentType_v8_elim___redArg(v_v8_99_);
lean_dec(v_v8_99_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_v8_elim(lean_object* v_motive_101_, uint8_t v_t_102_, lean_object* v_h_103_, lean_object* v_v8_104_){
_start:
{
lean_inc(v_v8_104_);
return v_v8_104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_QueueContentType_v8_elim___boxed(lean_object* v_motive_105_, lean_object* v_t_106_, lean_object* v_h_107_, lean_object* v_v8_108_){
_start:
{
uint8_t v_t_boxed_109_; lean_object* v_res_110_; 
v_t_boxed_109_ = lean_unbox(v_t_106_);
v_res_110_ = l_Lasm_JS_Cloudflare_QueueContentType_v8_elim(v_motive_105_, v_t_boxed_109_, v_h_107_, v_v8_108_);
lean_dec(v_v8_108_);
return v_res_110_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqQueueContentType_beq(uint8_t v_x_111_, uint8_t v_y_112_){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_113_ = l_Lasm_JS_Cloudflare_QueueContentType_ctorIdx(v_x_111_);
v___x_114_ = l_Lasm_JS_Cloudflare_QueueContentType_ctorIdx(v_y_112_);
v___x_115_ = lean_nat_dec_eq(v___x_113_, v___x_114_);
lean_dec(v___x_114_);
lean_dec(v___x_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqQueueContentType_beq___boxed(lean_object* v_x_116_, lean_object* v_y_117_){
_start:
{
uint8_t v_x_21__boxed_118_; uint8_t v_y_22__boxed_119_; uint8_t v_res_120_; lean_object* v_r_121_; 
v_x_21__boxed_118_ = lean_unbox(v_x_116_);
v_y_22__boxed_119_ = lean_unbox(v_y_117_);
v_res_120_ = l_Lasm_JS_Cloudflare_instBEqQueueContentType_beq(v_x_21__boxed_118_, v_y_22__boxed_119_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_unsigned_to_nat(2u);
v___x_137_ = lean_nat_to_int(v___x_136_);
return v___x_137_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_unsigned_to_nat(1u);
v___x_139_ = lean_nat_to_int(v___x_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr(uint8_t v_x_140_, lean_object* v_prec_141_){
_start:
{
lean_object* v___y_143_; lean_object* v___y_150_; lean_object* v___y_157_; lean_object* v___y_164_; 
switch(v_x_140_)
{
case 0:
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = lean_unsigned_to_nat(1024u);
v___x_171_ = lean_nat_dec_le(v___x_170_, v_prec_141_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
v___x_172_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8);
v___y_143_ = v___x_172_;
goto v___jp_142_;
}
else
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9);
v___y_143_ = v___x_173_;
goto v___jp_142_;
}
}
case 1:
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(1024u);
v___x_175_ = lean_nat_dec_le(v___x_174_, v_prec_141_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; 
v___x_176_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8);
v___y_150_ = v___x_176_;
goto v___jp_149_;
}
else
{
lean_object* v___x_177_; 
v___x_177_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9);
v___y_150_ = v___x_177_;
goto v___jp_149_;
}
}
case 2:
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = lean_unsigned_to_nat(1024u);
v___x_179_ = lean_nat_dec_le(v___x_178_, v_prec_141_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; 
v___x_180_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8);
v___y_157_ = v___x_180_;
goto v___jp_156_;
}
else
{
lean_object* v___x_181_; 
v___x_181_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9);
v___y_157_ = v___x_181_;
goto v___jp_156_;
}
}
default: 
{
lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_182_ = lean_unsigned_to_nat(1024u);
v___x_183_ = lean_nat_dec_le(v___x_182_, v_prec_141_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; 
v___x_184_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__8);
v___y_164_ = v___x_184_;
goto v___jp_163_;
}
else
{
lean_object* v___x_185_; 
v___x_185_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__9);
v___y_164_ = v___x_185_;
goto v___jp_163_;
}
}
}
v___jp_142_:
{
lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_144_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__1));
lean_inc(v___y_143_);
v___x_145_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_145_, 0, v___y_143_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = 0;
v___x_147_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_147_, 0, v___x_145_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*1, v___x_146_);
v___x_148_ = l_Repr_addAppParen(v___x_147_, v_prec_141_);
return v___x_148_;
}
v___jp_149_:
{
lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_151_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__3));
lean_inc(v___y_150_);
v___x_152_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_152_, 0, v___y_150_);
lean_ctor_set(v___x_152_, 1, v___x_151_);
v___x_153_ = 0;
v___x_154_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_154_, 0, v___x_152_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*1, v___x_153_);
v___x_155_ = l_Repr_addAppParen(v___x_154_, v_prec_141_);
return v___x_155_;
}
v___jp_156_:
{
lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_158_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__5));
lean_inc(v___y_157_);
v___x_159_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_159_, 0, v___y_157_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = 0;
v___x_161_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_161_, 0, v___x_159_);
lean_ctor_set_uint8(v___x_161_, sizeof(void*)*1, v___x_160_);
v___x_162_ = l_Repr_addAppParen(v___x_161_, v_prec_141_);
return v___x_162_;
}
v___jp_163_:
{
lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_165_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___closed__7));
lean_inc(v___y_164_);
v___x_166_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_166_, 0, v___y_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = 0;
v___x_168_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_168_, 0, v___x_166_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*1, v___x_167_);
v___x_169_ = l_Repr_addAppParen(v___x_168_, v_prec_141_);
return v___x_169_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprQueueContentType_repr___boxed(lean_object* v_x_186_, lean_object* v_prec_187_){
_start:
{
uint8_t v_x_225__boxed_188_; lean_object* v_res_189_; 
v_x_225__boxed_188_ = lean_unbox(v_x_186_);
v_res_189_ = l_Lasm_JS_Cloudflare_instReprQueueContentType_repr(v_x_225__boxed_188_, v_prec_187_);
lean_dec(v_prec_187_);
return v_res_189_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedQueueContentType_default(void){
_start:
{
uint8_t v___x_192_; 
v___x_192_ = 0;
return v___x_192_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedQueueContentType(void){
_start:
{
uint8_t v___x_193_; 
v___x_193_ = 0;
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0(uint8_t v_x_206_){
_start:
{
switch(v_x_206_)
{
case 0:
{
lean_object* v___x_207_; 
v___x_207_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__1));
return v___x_207_;
}
case 1:
{
lean_object* v___x_208_; 
v___x_208_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__3));
return v___x_208_;
}
case 2:
{
lean_object* v___x_209_; 
v___x_209_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__5));
return v___x_209_;
}
default: 
{
lean_object* v___x_210_; 
v___x_210_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__7));
return v___x_210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___boxed(lean_object* v_x_211_){
_start:
{
uint8_t v_x_74__boxed_212_; lean_object* v_res_213_; 
v_x_74__boxed_212_ = lean_unbox(v_x_211_);
v_res_213_ = l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0(v_x_74__boxed_212_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0(lean_object* v_x_231_){
_start:
{
if (lean_obj_tag(v_x_231_) == 4)
{
lean_object* v_s_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v_s_234_ = lean_ctor_get(v_x_231_, 0);
v___x_235_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__0));
v___x_236_ = lean_string_dec_eq(v_s_234_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__2));
v___x_238_ = lean_string_dec_eq(v_s_234_, v___x_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__4));
v___x_240_ = lean_string_dec_eq(v_s_234_, v___x_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_241_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__6));
v___x_242_ = lean_string_dec_eq(v_s_234_, v___x_241_);
if (v___x_242_ == 0)
{
goto v___jp_232_;
}
else
{
lean_object* v___x_243_; 
v___x_243_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__2));
return v___x_243_;
}
}
else
{
lean_object* v___x_244_; 
v___x_244_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__3));
return v___x_244_;
}
}
else
{
lean_object* v___x_245_; 
v___x_245_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__4));
return v___x_245_;
}
}
else
{
lean_object* v___x_246_; 
v___x_246_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__5));
return v___x_246_;
}
}
else
{
goto v___jp_232_;
}
v___jp_232_:
{
lean_object* v___x_233_; 
v___x_233_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___closed__1));
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0___boxed(lean_object* v_x_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lasm_JS_Cloudflare_instFromJSQueueContentType___lam__0(v_x_247_);
lean_dec(v_x_247_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0(lean_object* v___x_259_, lean_object* v___x_260_, lean_object* v_d_261_){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0));
lean_inc_ref(v___x_259_);
v___x_263_ = l_Lasm_JS_readField___redArg(v___x_259_, v_d_261_, v___x_262_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec_ref(v___x_260_);
lean_dec_ref(v___x_259_);
v_a_264_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_263_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_263_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v_a_272_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_a_272_);
lean_dec_ref_known(v___x_263_, 1);
v___x_273_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1));
v___x_274_ = l_Lasm_JS_readField___redArg(v___x_259_, v_d_261_, v___x_273_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
lean_dec(v_a_272_);
lean_dec_ref(v___x_260_);
v_a_275_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_274_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_274_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
else
{
lean_object* v_a_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v_a_283_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v___x_274_, 1);
v___x_284_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2));
v___x_285_ = l_Lasm_JS_readField___redArg(v___x_260_, v_d_261_, v___x_284_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_dec(v_a_283_);
lean_dec(v_a_272_);
v_a_286_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_285_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_285_);
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
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_304_; 
v_a_294_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_304_ == 0)
{
v___x_296_ = v___x_285_;
v_isShared_297_ = v_isSharedCheck_304_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_285_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_304_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_298_; double v___x_299_; double v___x_300_; lean_object* v___x_302_; 
v___x_298_ = lean_alloc_ctor(0, 1, 16);
lean_ctor_set(v___x_298_, 0, v_a_294_);
v___x_299_ = lean_unbox_float(v_a_272_);
lean_dec(v_a_272_);
lean_ctor_set_float(v___x_298_, sizeof(void*)*1, v___x_299_);
v___x_300_ = lean_unbox_float(v_a_283_);
lean_dec(v_a_283_);
lean_ctor_set_float(v___x_298_, sizeof(void*)*1 + 8, v___x_300_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 0, v___x_298_);
v___x_302_ = v___x_296_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_298_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___boxed(lean_object* v___x_305_, lean_object* v___x_306_, lean_object* v_d_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0(v___x_305_, v___x_306_, v_d_307_);
lean_dec(v_d_307_);
return v_res_308_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__0(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___f_311_; 
v___x_309_ = l_Lasm_JS_instFromJSData;
v___x_310_ = l_Lasm_JS_instFromJSFloat;
v___f_311_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___boxed), 3, 2);
lean_closure_set(v___f_311_, 0, v___x_310_);
lean_closure_set(v___f_311_, 1, v___x_309_);
return v___f_311_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__2(void){
_start:
{
uint8_t v___x_313_; lean_object* v___x_314_; lean_object* v___f_315_; lean_object* v___x_316_; 
v___x_313_ = 0;
v___x_314_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__1));
v___f_315_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__0, &l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__0);
v___x_316_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_316_, 0, v___f_315_);
lean_ctor_set(v___x_316_, 1, v___x_314_);
lean_ctor_set_uint8(v___x_316_, sizeof(void*)*2, v___x_313_);
return v___x_316_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueMetrics(void){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__2, &l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__2);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0(lean_object* v___f_320_, lean_object* v___f_321_, lean_object* v_d_322_){
_start:
{
lean_object* v_contentType_323_; lean_object* v_delaySeconds_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_341_; 
v_contentType_323_ = lean_ctor_get(v_d_322_, 0);
v_delaySeconds_324_ = lean_ctor_get(v_d_322_, 1);
v_isSharedCheck_341_ = !lean_is_exclusive(v_d_322_);
if (v_isSharedCheck_341_ == 0)
{
v___x_326_ = v_d_322_;
v_isShared_327_ = v_isSharedCheck_341_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_delaySeconds_324_);
lean_inc(v_contentType_323_);
lean_dec(v_d_322_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_341_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
v___x_328_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__0));
v___x_329_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_320_, v_contentType_323_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 1, v___x_329_);
lean_ctor_set(v___x_326_, 0, v___x_328_);
v___x_331_ = v___x_326_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_328_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v___x_329_);
v___x_331_ = v_reuseFailAlloc_340_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_332_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1));
v___x_333_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_321_, v_delaySeconds_324_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = lean_unsigned_to_nat(2u);
v___x_336_ = lean_mk_empty_array_with_capacity(v___x_335_);
v___x_337_ = lean_array_push(v___x_336_, v___x_331_);
v___x_338_ = lean_array_push(v___x_337_, v___x_334_);
v___x_339_ = l_Lasm_JS_Web_Support_fields(v___x_338_);
lean_dec_ref(v___x_338_);
return v___x_339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___lam__0(lean_object* v___x_347_, lean_object* v___x_348_, lean_object* v_d_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0));
lean_inc_ref(v___x_347_);
v___x_351_ = l_Lasm_JS_readField___redArg(v___x_347_, v_d_349_, v___x_350_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_dec_ref(v___x_348_);
lean_dec_ref(v___x_347_);
v_a_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v_a_360_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v___x_351_, 1);
v___x_361_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1));
v___x_362_ = l_Lasm_JS_readField___redArg(v___x_347_, v_d_349_, v___x_361_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_370_; 
lean_dec(v_a_360_);
lean_dec_ref(v___x_348_);
v_a_363_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_370_ == 0)
{
v___x_365_ = v___x_362_;
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_362_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_368_; 
if (v_isShared_366_ == 0)
{
v___x_368_ = v___x_365_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_363_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
else
{
lean_object* v_a_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_a_371_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_362_, 1);
v___x_372_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2));
v___x_373_ = l_Lasm_JS_readField___redArg(v___x_348_, v_d_349_, v___x_372_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
lean_dec(v_a_371_);
lean_dec(v_a_360_);
v_a_374_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_373_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_373_);
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
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_392_; 
v_a_382_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_392_ == 0)
{
v___x_384_ = v___x_373_;
v_isShared_385_ = v_isSharedCheck_392_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_373_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_392_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_386_; double v___x_387_; double v___x_388_; lean_object* v___x_390_; 
v___x_386_ = lean_alloc_ctor(0, 1, 16);
lean_ctor_set(v___x_386_, 0, v_a_382_);
v___x_387_ = lean_unbox_float(v_a_360_);
lean_dec(v_a_360_);
lean_ctor_set_float(v___x_386_, sizeof(void*)*1, v___x_387_);
v___x_388_ = lean_unbox_float(v_a_371_);
lean_dec(v_a_371_);
lean_ctor_set_float(v___x_386_, sizeof(void*)*1 + 8, v___x_388_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v___x_386_);
v___x_390_ = v___x_384_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_386_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___lam__0___boxed(lean_object* v___x_393_, lean_object* v___x_394_, lean_object* v_d_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___lam__0(v___x_393_, v___x_394_, v_d_395_);
lean_dec(v_d_395_);
return v_res_396_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__0(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___f_399_; 
v___x_397_ = l_Lasm_JS_instFromJSData;
v___x_398_ = l_Lasm_JS_instFromJSFloat;
v___f_399_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___lam__0___boxed), 3, 2);
lean_closure_set(v___f_399_, 0, v___x_398_);
lean_closure_set(v___f_399_, 1, v___x_397_);
return v___f_399_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__2(void){
_start:
{
uint8_t v___x_401_; lean_object* v___x_402_; lean_object* v___f_403_; lean_object* v___x_404_; 
v___x_401_ = 0;
v___x_402_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__1));
v___f_403_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__0, &l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__0);
v___x_404_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_404_, 0, v___f_403_);
lean_ctor_set(v___x_404_, 1, v___x_402_);
lean_ctor_set_uint8(v___x_404_, sizeof(void*)*2, v___x_401_);
return v___x_404_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics(void){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__2, &l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__2);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0(lean_object* v___x_407_, lean_object* v_d_408_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0));
v___x_410_ = l_Lasm_JS_readField___redArg(v___x_407_, v_d_408_, v___x_409_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
v_a_411_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_410_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_410_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_416_; 
if (v_isShared_414_ == 0)
{
v___x_416_ = v___x_413_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_411_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
else
{
lean_object* v_a_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_426_; 
v_a_419_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_426_ == 0)
{
v___x_421_ = v___x_410_;
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_a_419_);
lean_dec(v___x_410_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_424_; 
if (v_isShared_422_ == 0)
{
v___x_424_ = v___x_421_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_a_419_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___boxed(lean_object* v___x_427_, lean_object* v_d_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0(v___x_427_, v_d_428_);
lean_dec(v_d_428_);
return v_res_429_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__0(void){
_start:
{
lean_object* v___x_430_; lean_object* v___f_431_; 
v___x_430_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics;
v___f_431_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___boxed), 2, 1);
lean_closure_set(v___f_431_, 0, v___x_430_);
return v___f_431_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__2(void){
_start:
{
uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___f_435_; lean_object* v___x_436_; 
v___x_433_ = 0;
v___x_434_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__1));
v___f_435_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__0, &l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__0);
v___x_436_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_436_, 0, v___f_435_);
lean_ctor_set(v___x_436_, 1, v___x_434_);
lean_ctor_set_uint8(v___x_436_, sizeof(void*)*2, v___x_433_);
return v___x_436_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata(void){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__2, &l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__2);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0(lean_object* v___x_439_, lean_object* v_d_440_){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___closed__0));
v___x_442_ = l_Lasm_JS_readField___redArg(v___x_439_, v_d_440_, v___x_441_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_442_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_a_451_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_442_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_442_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___boxed(lean_object* v___x_459_, lean_object* v_d_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0(v___x_459_, v_d_460_);
lean_dec(v_d_460_);
return v_res_461_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__0(void){
_start:
{
lean_object* v___x_462_; lean_object* v___f_463_; 
v___x_462_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata;
v___f_463_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___boxed), 2, 1);
lean_closure_set(v___f_463_, 0, v___x_462_);
return v___f_463_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__2(void){
_start:
{
uint8_t v___x_465_; lean_object* v___x_466_; lean_object* v___f_467_; lean_object* v___x_468_; 
v___x_465_ = 0;
v___x_466_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__1));
v___f_467_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__0, &l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__0);
v___x_468_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_468_, 0, v___f_467_);
lean_ctor_set(v___x_468_, 1, v___x_466_);
lean_ctor_set_uint8(v___x_468_, sizeof(void*)*2, v___x_465_);
return v___x_468_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse(void){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__2, &l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__2);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___lam__0(lean_object* v___f_471_, lean_object* v___f_472_, lean_object* v_d_473_){
_start:
{
lean_object* v_body_474_; lean_object* v_contentType_475_; lean_object* v_delaySeconds_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v_body_474_ = lean_ctor_get(v_d_473_, 0);
lean_inc(v_body_474_);
v_contentType_475_ = lean_ctor_get(v_d_473_, 1);
lean_inc(v_contentType_475_);
v_delaySeconds_476_ = lean_ctor_get(v_d_473_, 2);
lean_inc(v_delaySeconds_476_);
lean_dec_ref(v_d_473_);
v___x_477_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___lam__0___closed__0));
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
lean_ctor_set(v___x_478_, 1, v_body_474_);
v___x_479_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__0));
v___x_480_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_471_, v_contentType_475_);
v___x_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1));
v___x_483_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_472_, v_delaySeconds_476_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = lean_unsigned_to_nat(3u);
v___x_486_ = lean_mk_empty_array_with_capacity(v___x_485_);
v___x_487_ = lean_array_push(v___x_486_, v___x_478_);
v___x_488_ = lean_array_push(v___x_487_, v___x_481_);
v___x_489_ = lean_array_push(v___x_488_, v___x_484_);
v___x_490_ = l_Lasm_JS_Web_Support_fields(v___x_489_);
lean_dec_ref(v___x_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSQueueSendBatchOptions___lam__0(lean_object* v___f_495_, lean_object* v_d_496_){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_497_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1));
v___x_498_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_495_, v_d_496_);
v___x_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = lean_unsigned_to_nat(1u);
v___x_501_ = lean_mk_empty_array_with_capacity(v___x_500_);
v___x_502_ = lean_array_push(v___x_501_, v___x_499_);
v___x_503_ = l_Lasm_JS_Web_Support_fields(v___x_502_);
lean_dec_ref(v___x_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___lam__0(lean_object* v___x_507_, lean_object* v___x_508_, lean_object* v_d_509_){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0));
lean_inc_ref(v___x_507_);
v___x_511_ = l_Lasm_JS_readField___redArg(v___x_507_, v_d_509_, v___x_510_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
lean_dec_ref(v___x_508_);
lean_dec_ref(v___x_507_);
v_a_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v_a_520_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_511_, 1);
v___x_521_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1));
v___x_522_ = l_Lasm_JS_readField___redArg(v___x_507_, v_d_509_, v___x_521_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec(v_a_520_);
lean_dec_ref(v___x_508_);
v_a_523_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_522_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_a_531_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_522_, 1);
v___x_532_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2));
v___x_533_ = l_Lasm_JS_readField___redArg(v___x_508_, v_d_509_, v___x_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec(v_a_531_);
lean_dec(v_a_520_);
v_a_534_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_533_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_533_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_552_; 
v_a_542_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_552_ == 0)
{
v___x_544_ = v___x_533_;
v_isShared_545_ = v_isSharedCheck_552_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_533_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_552_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; double v___x_547_; double v___x_548_; lean_object* v___x_550_; 
v___x_546_ = lean_alloc_ctor(0, 1, 16);
lean_ctor_set(v___x_546_, 0, v_a_542_);
v___x_547_ = lean_unbox_float(v_a_520_);
lean_dec(v_a_520_);
lean_ctor_set_float(v___x_546_, sizeof(void*)*1, v___x_547_);
v___x_548_ = lean_unbox_float(v_a_531_);
lean_dec(v_a_531_);
lean_ctor_set_float(v___x_546_, sizeof(void*)*1 + 8, v___x_548_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_546_);
v___x_550_ = v___x_544_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_546_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___lam__0___boxed(lean_object* v___x_553_, lean_object* v___x_554_, lean_object* v_d_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___lam__0(v___x_553_, v___x_554_, v_d_555_);
lean_dec(v_d_555_);
return v_res_556_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__0(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___f_559_; 
v___x_557_ = l_Lasm_JS_instFromJSData;
v___x_558_ = l_Lasm_JS_instFromJSFloat;
v___f_559_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___lam__0___boxed), 3, 2);
lean_closure_set(v___f_559_, 0, v___x_558_);
lean_closure_set(v___f_559_, 1, v___x_557_);
return v___f_559_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__2(void){
_start:
{
uint8_t v___x_561_; lean_object* v___x_562_; lean_object* v___f_563_; lean_object* v___x_564_; 
v___x_561_ = 0;
v___x_562_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__1));
v___f_563_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__0, &l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__0);
v___x_564_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_564_, 0, v___f_563_);
lean_ctor_set(v___x_564_, 1, v___x_562_);
lean_ctor_set_uint8(v___x_564_, sizeof(void*)*2, v___x_561_);
return v___x_564_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics(void){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__2, &l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__2);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___lam__0(lean_object* v___x_566_, lean_object* v_d_567_){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0));
v___x_569_ = l_Lasm_JS_readField___redArg(v___x_566_, v_d_567_, v___x_568_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
v_a_570_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_569_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_569_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
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
return v___x_575_;
}
}
}
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
v_a_578_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_569_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_569_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___lam__0___boxed(lean_object* v___x_586_, lean_object* v_d_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___lam__0(v___x_586_, v_d_587_);
lean_dec(v_d_587_);
return v_res_588_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__0(void){
_start:
{
lean_object* v___x_589_; lean_object* v___f_590_; 
v___x_589_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics;
v___f_590_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___lam__0___boxed), 2, 1);
lean_closure_set(v___f_590_, 0, v___x_589_);
return v___f_590_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__2(void){
_start:
{
uint8_t v___x_592_; lean_object* v___x_593_; lean_object* v___f_594_; lean_object* v___x_595_; 
v___x_592_ = 0;
v___x_593_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__1));
v___f_594_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__0, &l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__0);
v___x_595_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_595_, 0, v___f_594_);
lean_ctor_set(v___x_595_, 1, v___x_593_);
lean_ctor_set_uint8(v___x_595_, sizeof(void*)*2, v___x_592_);
return v___x_595_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata(void){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__2, &l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__2);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___lam__0(lean_object* v___x_597_, lean_object* v_d_598_){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___closed__0));
v___x_600_ = l_Lasm_JS_readField___redArg(v___x_597_, v_d_598_, v___x_599_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
v_a_609_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_600_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_600_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___lam__0___boxed(lean_object* v___x_617_, lean_object* v_d_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___lam__0(v___x_617_, v_d_618_);
lean_dec(v_d_618_);
return v_res_619_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__0(void){
_start:
{
lean_object* v___x_620_; lean_object* v___f_621_; 
v___x_620_ = l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata;
v___f_621_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___lam__0___boxed), 2, 1);
lean_closure_set(v___f_621_, 0, v___x_620_);
return v___f_621_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__2(void){
_start:
{
uint8_t v___x_623_; lean_object* v___x_624_; lean_object* v___f_625_; lean_object* v___x_626_; 
v___x_623_ = 0;
v___x_624_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__1));
v___f_625_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__0, &l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__0);
v___x_626_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_626_, 0, v___f_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
lean_ctor_set_uint8(v___x_626_, sizeof(void*)*2, v___x_623_);
return v___x_626_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse(void){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__2, &l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__2);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___lam__0(lean_object* v___x_629_, lean_object* v___x_630_, lean_object* v_d_631_){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0));
lean_inc_ref(v___x_629_);
v___x_633_ = l_Lasm_JS_readField___redArg(v___x_629_, v_d_631_, v___x_632_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref(v___x_630_);
lean_dec_ref(v___x_629_);
v_a_634_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_633_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v_a_642_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_642_);
lean_dec_ref_known(v___x_633_, 1);
v___x_643_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1));
v___x_644_ = l_Lasm_JS_readField___redArg(v___x_629_, v_d_631_, v___x_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_a_642_);
lean_dec_ref(v___x_630_);
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v_a_653_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_653_);
lean_dec_ref_known(v___x_644_, 1);
v___x_654_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2));
v___x_655_ = l_Lasm_JS_readField___redArg(v___x_630_, v_d_631_, v___x_654_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_dec(v_a_653_);
lean_dec(v_a_642_);
v_a_656_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_655_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_655_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_674_; 
v_a_664_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_674_ == 0)
{
v___x_666_ = v___x_655_;
v_isShared_667_ = v_isSharedCheck_674_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_655_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_674_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_668_; double v___x_669_; double v___x_670_; lean_object* v___x_672_; 
v___x_668_ = lean_alloc_ctor(0, 1, 16);
lean_ctor_set(v___x_668_, 0, v_a_664_);
v___x_669_ = lean_unbox_float(v_a_642_);
lean_dec(v_a_642_);
lean_ctor_set_float(v___x_668_, sizeof(void*)*1, v___x_669_);
v___x_670_ = lean_unbox_float(v_a_653_);
lean_dec(v_a_653_);
lean_ctor_set_float(v___x_668_, sizeof(void*)*1 + 8, v___x_670_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_668_);
v___x_672_ = v___x_666_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_668_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___lam__0___boxed(lean_object* v___x_675_, lean_object* v___x_676_, lean_object* v_d_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___lam__0(v___x_675_, v___x_676_, v_d_677_);
lean_dec(v_d_677_);
return v_res_678_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__0(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___f_681_; 
v___x_679_ = l_Lasm_JS_instFromJSData;
v___x_680_ = l_Lasm_JS_instFromJSFloat;
v___f_681_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___lam__0___boxed), 3, 2);
lean_closure_set(v___f_681_, 0, v___x_680_);
lean_closure_set(v___f_681_, 1, v___x_679_);
return v___f_681_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__2(void){
_start:
{
uint8_t v___x_683_; lean_object* v___x_684_; lean_object* v___f_685_; lean_object* v___x_686_; 
v___x_683_ = 0;
v___x_684_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__1));
v___f_685_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__0, &l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__0);
v___x_686_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_686_, 0, v___f_685_);
lean_ctor_set(v___x_686_, 1, v___x_684_);
lean_ctor_set_uint8(v___x_686_, sizeof(void*)*2, v___x_683_);
return v___x_686_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics(void){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__2, &l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__2);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___lam__0(lean_object* v___x_688_, lean_object* v_d_689_){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0));
v___x_691_ = l_Lasm_JS_readField___redArg(v___x_688_, v_d_689_, v___x_690_);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
v_a_692_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_691_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_691_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
else
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
v_a_700_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_691_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_691_);
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
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___lam__0___boxed(lean_object* v___x_708_, lean_object* v_d_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___lam__0(v___x_708_, v_d_709_);
lean_dec(v_d_709_);
return v_res_710_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__0(void){
_start:
{
lean_object* v___x_711_; lean_object* v___f_712_; 
v___x_711_ = l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics;
v___f_712_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___lam__0___boxed), 2, 1);
lean_closure_set(v___f_712_, 0, v___x_711_);
return v___f_712_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__2(void){
_start:
{
uint8_t v___x_714_; lean_object* v___x_715_; lean_object* v___f_716_; lean_object* v___x_717_; 
v___x_714_ = 0;
v___x_715_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__1));
v___f_716_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__0, &l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__0);
v___x_717_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_717_, 0, v___f_716_);
lean_ctor_set(v___x_717_, 1, v___x_715_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*2, v___x_714_);
return v___x_717_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata(void){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__2, &l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__2);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__1(lean_object* v___f_719_, lean_object* v_bytes_720_){
_start:
{
lean_object* v___x_722_; uint8_t v___x_723_; lean_object* v_val_725_; lean_object* v___x_728_; 
v___x_722_ = lean_unsigned_to_nat(0u);
v___x_723_ = 0;
v___x_728_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_720_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_728_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_728_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
lean_ctor_set_tag(v___x_731_, 1);
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
v_val_725_ = v___x_734_;
goto v___jp_724_;
}
}
}
else
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
v_a_737_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_728_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_728_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set_tag(v___x_739_, 0);
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
v_val_725_ = v___x_742_;
goto v___jp_724_;
}
}
}
v___jp_724_:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_726_, 0, v_val_725_);
v___x_727_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_722_, v___x_723_, v___x_726_, v___f_719_);
return v___x_727_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__1___boxed(lean_object* v___f_745_, lean_object* v_bytes_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__1(v___f_745_, v_bytes_746_);
lean_dec_ref(v_bytes_746_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_752_, lean_object* v_key_753_){
_start:
{
if (lean_obj_tag(v_d_752_) == 8)
{
lean_object* v___x_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
v___x_754_ = l_Lasm_JS_Data_field(v_d_752_, v_key_753_);
v_isSharedCheck_761_ = !lean_is_exclusive(v_d_752_);
if (v_isSharedCheck_761_ == 0)
{
lean_object* v_unused_762_; 
v_unused_762_ = lean_ctor_get(v_d_752_, 0);
lean_dec(v_unused_762_);
v___x_756_ = v_d_752_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_dec(v_d_752_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set_tag(v___x_756_, 1);
lean_ctor_set(v___x_756_, 0, v___x_754_);
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
else
{
lean_object* v___x_763_; 
lean_dec(v_d_752_);
v___x_763_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___closed__1));
return v___x_763_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_764_, lean_object* v_key_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4(v_d_764_, v_key_765_);
lean_dec_ref(v_key_765_);
return v_res_766_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__4(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_772_ = lean_string_utf8_byte_size(v___x_771_);
return v___x_772_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_773_ = lean_unsigned_to_nat(0u);
v___x_774_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__4);
v___x_775_ = lean_nat_dec_eq(v___x_774_, v___x_773_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_779_, lean_object* v_key_780_){
_start:
{
if (lean_obj_tag(v_d_779_) == 8)
{
lean_object* v___x_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_809_; 
v___x_781_ = l_Lasm_JS_Data_field(v_d_779_, v_key_780_);
v_isSharedCheck_809_ = !lean_is_exclusive(v_d_779_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; 
v_unused_810_ = lean_ctor_get(v_d_779_, 0);
lean_dec(v_unused_810_);
v___x_783_ = v_d_779_;
v_isShared_784_ = v_isSharedCheck_809_;
goto v_resetjp_782_;
}
else
{
lean_dec(v_d_779_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_809_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
if (lean_obj_tag(v___x_781_) == 3)
{
double v_n_785_; lean_object* v___x_786_; lean_object* v___x_788_; 
v_n_785_ = lean_ctor_get_float(v___x_781_, 0);
lean_dec_ref_known(v___x_781_, 0);
v___x_786_ = lean_box_float(v_n_785_);
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 1);
lean_ctor_set(v___x_783_, 0, v___x_786_);
v___x_788_ = v___x_783_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
else
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; uint8_t v___x_800_; 
v___x_790_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_791_ = lean_string_append(v___x_790_, v_key_780_);
v___x_792_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_793_ = lean_string_append(v___x_791_, v___x_792_);
v___x_794_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_795_ = lean_string_append(v___x_793_, v___x_794_);
v___x_796_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_797_ = lean_string_append(v___x_795_, v___x_796_);
v___x_798_ = l_Lasm_JS_Data_describe(v___x_781_);
v___x_799_ = lean_string_append(v___x_797_, v___x_798_);
lean_dec_ref(v___x_798_);
v___x_800_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_801_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__6));
v___x_802_ = lean_string_append(v___x_799_, v___x_801_);
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 0);
lean_ctor_set(v___x_783_, 0, v___x_802_);
v___x_804_ = v___x_783_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
else
{
lean_object* v___x_807_; 
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 0);
lean_ctor_set(v___x_783_, 0, v___x_799_);
v___x_807_ = v___x_783_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_799_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
}
else
{
lean_object* v___x_811_; 
lean_dec(v_d_779_);
v___x_811_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__7));
return v___x_811_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_812_, lean_object* v_key_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v_d_812_, v_key_813_);
lean_dec_ref(v_key_813_);
return v_res_814_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_823_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__7));
v___x_824_ = lean_unsigned_to_nat(46u);
v___x_825_ = lean_unsigned_to_nat(193u);
v___x_826_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__6));
v___x_827_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__5));
v___x_828_ = l_mkPanicMessageWithDecl(v___x_827_, v___x_826_, v___x_825_, v___x_824_, v___x_823_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2(lean_object* v_context_830_, lean_object* v_d_831_){
_start:
{
lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_840_; lean_object* v_received_841_; lean_object* v___y_860_; lean_object* v_a_863_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0));
lean_inc(v_d_831_);
v___x_888_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v_d_831_, v___x_887_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_888_, 1);
v_a_863_ = v_a_889_;
goto v___jp_862_;
}
else
{
lean_object* v_a_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v_a_890_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v___x_888_, 1);
v___x_891_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1));
lean_inc(v_d_831_);
v___x_892_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v_d_831_, v___x_891_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; 
lean_dec(v_a_890_);
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v___x_892_, 1);
v_a_863_ = v_a_893_;
goto v___jp_862_;
}
else
{
lean_object* v_a_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v_a_894_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_894_);
lean_dec_ref_known(v___x_892_, 1);
v___x_895_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2));
lean_inc(v_d_831_);
v___x_896_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4(v_d_831_, v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; 
lean_dec(v_a_894_);
lean_dec(v_a_890_);
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_896_, 1);
v_a_863_ = v_a_897_;
goto v___jp_862_;
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_908_; 
lean_dec(v_d_831_);
v_a_898_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_908_ == 0)
{
v___x_900_ = v___x_896_;
v_isShared_901_ = v_isSharedCheck_908_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_896_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_908_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; double v___x_903_; double v___x_904_; lean_object* v___x_906_; 
v___x_902_ = lean_alloc_ctor(0, 1, 16);
lean_ctor_set(v___x_902_, 0, v_a_898_);
v___x_903_ = lean_unbox_float(v_a_890_);
lean_dec(v_a_890_);
lean_ctor_set_float(v___x_902_, sizeof(void*)*1, v___x_903_);
v___x_904_ = lean_unbox_float(v_a_894_);
lean_dec(v_a_894_);
lean_ctor_set_float(v___x_902_, sizeof(void*)*1 + 8, v___x_904_);
if (v_isShared_901_ == 0)
{
lean_ctor_set_tag(v___x_900_, 0);
lean_ctor_set(v___x_900_, 0, v___x_902_);
v___x_906_ = v___x_900_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_902_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
}
v___jp_833_:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_836_ = lean_string_append(v___y_834_, v___y_835_);
lean_dec_ref(v___y_835_);
v___x_837_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
v___x_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
return v___x_838_;
}
v___jp_839_:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_842_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0));
v___x_843_ = lean_string_append(v___x_842_, v_context_830_);
v___x_844_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1));
v___x_845_ = lean_string_append(v___x_843_, v___x_844_);
v___x_846_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___closed__1));
v___x_847_ = lean_string_append(v___x_845_, v___x_846_);
v___x_848_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2));
v___x_849_ = lean_string_append(v___x_847_, v___x_848_);
v___x_850_ = lean_string_append(v___x_849_, v_received_841_);
lean_dec_ref(v_received_841_);
v___x_851_ = lean_string_utf8_byte_size(v___y_840_);
v___x_852_ = lean_unsigned_to_nat(0u);
v___x_853_ = lean_nat_dec_eq(v___x_851_, v___x_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_854_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_855_ = lean_string_append(v___x_854_, v___y_840_);
lean_dec_ref(v___y_840_);
v___x_856_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_857_ = lean_string_append(v___x_855_, v___x_856_);
v___y_834_ = v___x_850_;
v___y_835_ = v___x_857_;
goto v___jp_833_;
}
else
{
lean_object* v___x_858_; 
lean_dec_ref(v___y_840_);
v___x_858_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___y_834_ = v___x_850_;
v___y_835_ = v___x_858_;
goto v___jp_833_;
}
}
v___jp_859_:
{
lean_object* v___x_861_; 
v___x_861_ = l_Lasm_JS_Data_describe(v_d_831_);
v___y_840_ = v___y_860_;
v_received_841_ = v___x_861_;
goto v___jp_839_;
}
v___jp_862_:
{
if (lean_obj_tag(v_d_831_) == 9)
{
lean_object* v_value_864_; lean_object* v_description_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v_value_864_ = lean_ctor_get(v_d_831_, 0);
v_description_865_ = lean_ctor_get(v_d_831_, 1);
v___x_866_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_867_ = lean_string_dec_eq(v_description_865_, v___x_866_);
if (v___x_867_ == 0)
{
v___y_860_ = v_a_863_;
goto v___jp_859_;
}
else
{
lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_884_; 
lean_inc(v_value_864_);
v_isSharedCheck_884_ = !lean_is_exclusive(v_d_831_);
if (v_isSharedCheck_884_ == 0)
{
lean_object* v_unused_885_; lean_object* v_unused_886_; 
v_unused_885_ = lean_ctor_get(v_d_831_, 1);
lean_dec(v_unused_885_);
v_unused_886_ = lean_ctor_get(v_d_831_, 0);
lean_dec(v_unused_886_);
v___x_869_ = v_d_831_;
v_isShared_870_ = v_isSharedCheck_884_;
goto v_resetjp_868_;
}
else
{
lean_dec(v_d_831_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_884_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
uint32_t v___x_871_; uint64_t v___x_872_; lean_object* v___x_874_; 
v___x_871_ = 206;
v___x_872_ = 0ULL;
lean_inc(v_value_864_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 1, v___x_866_);
v___x_874_ = v___x_869_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_value_864_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v___x_866_);
v___x_874_ = v_reuseFailAlloc_883_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
uint32_t v___x_875_; lean_object* v___x_876_; 
v___x_875_ = lasm_js_value_handle(v_value_864_);
lean_dec(v_value_864_);
v___x_876_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_871_, v___x_872_, v___x_874_, v___x_875_);
lean_dec_ref(v___x_874_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; uint8_t v___x_878_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = lean_string_validate_utf8(v_a_877_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; lean_object* v___x_880_; 
lean_dec(v_a_877_);
v___x_879_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8);
v___x_880_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_879_);
v___y_840_ = v_a_863_;
v_received_841_ = v___x_880_;
goto v___jp_839_;
}
else
{
lean_object* v___x_881_; 
v___x_881_ = lean_string_from_utf8_unchecked(v_a_877_);
v___y_840_ = v_a_863_;
v_received_841_ = v___x_881_;
goto v___jp_839_;
}
}
else
{
lean_object* v___x_882_; 
lean_dec_ref_known(v___x_876_, 1);
v___x_882_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9));
v___y_840_ = v_a_863_;
v_received_841_ = v___x_882_;
goto v___jp_839_;
}
}
}
}
}
else
{
v___y_860_ = v_a_863_;
goto v___jp_859_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___boxed(lean_object* v_context_909_, lean_object* v_d_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2(v_context_909_, v_d_910_);
lean_dec_ref(v_context_909_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__0(lean_object* v_context_913_, lean_object* v_x_914_){
_start:
{
lean_object* v_val_917_; 
if (lean_obj_tag(v_x_914_) == 0)
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_927_; 
v_a_919_ = lean_ctor_get(v_x_914_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v_x_914_);
if (v_isSharedCheck_927_ == 0)
{
v___x_921_ = v_x_914_;
v_isShared_922_ = v_isSharedCheck_927_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v_x_914_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_927_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_926_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_925_; 
v___x_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
return v___x_925_;
}
}
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_941_; 
v_a_928_ = lean_ctor_get(v_x_914_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v_x_914_);
if (v_isSharedCheck_941_ == 0)
{
v___x_930_ = v_x_914_;
v_isShared_931_ = v_isSharedCheck_941_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v_x_914_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_941_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; 
v___x_932_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2(v_context_913_, v_a_928_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; lean_object* v___x_935_; 
v_a_933_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_933_);
lean_dec_ref_known(v___x_932_, 1);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 0, v_a_933_);
v___x_935_ = v___x_930_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_933_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
v_val_917_ = v___x_935_;
goto v___jp_916_;
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; 
v_a_937_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_937_);
lean_dec_ref_known(v___x_932_, 1);
if (v_isShared_931_ == 0)
{
lean_ctor_set_tag(v___x_930_, 0);
lean_ctor_set(v___x_930_, 0, v_a_937_);
v___x_939_ = v___x_930_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_937_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
v_val_917_ = v___x_939_;
goto v___jp_916_;
}
}
}
}
v___jp_916_:
{
lean_object* v___x_918_; 
v___x_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_918_, 0, v_val_917_);
return v___x_918_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__0___boxed(lean_object* v_context_942_, lean_object* v_x_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__0(v_context_942_, v_x_943_);
lean_dec_ref(v_context_942_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__8(lean_object* v___f_946_, lean_object* v_x_947_){
_start:
{
if (lean_obj_tag(v_x_947_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_957_; 
lean_dec_ref(v___f_946_);
v_a_949_ = lean_ctor_get(v_x_947_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v_x_947_);
if (v_isSharedCheck_957_ == 0)
{
v___x_951_ = v_x_947_;
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v_x_947_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_956_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_955_; 
v___x_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
return v___x_955_;
}
}
}
else
{
lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_969_; 
v_isSharedCheck_969_ = !lean_is_exclusive(v_x_947_);
if (v_isSharedCheck_969_ == 0)
{
lean_object* v_unused_970_; 
v_unused_970_ = lean_ctor_get(v_x_947_, 0);
lean_dec(v_unused_970_);
v___x_959_ = v_x_947_;
v_isShared_960_ = v_isSharedCheck_969_;
goto v_resetjp_958_;
}
else
{
lean_dec(v_x_947_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_969_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_961_; uint8_t v___x_962_; lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_961_ = lean_unsigned_to_nat(0u);
v___x_962_ = 0;
v___x_963_ = lean_io_promise_new();
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 0, v___x_963_);
v___x_965_ = v___x_959_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_963_);
v___x_965_ = v_reuseFailAlloc_968_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
v___x_967_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_961_, v___x_962_, v___x_966_, v___f_946_);
return v___x_967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__8___boxed(lean_object* v___f_971_, lean_object* v_x_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__8(v___f_971_, v_x_972_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__7(lean_object* v___f_975_, lean_object* v_a_976_, uint32_t v_op_977_, uint64_t v_flags_978_, lean_object* v_payload_979_, lean_object* v_x_980_){
_start:
{
if (lean_obj_tag(v_x_980_) == 0)
{
lean_object* v___x_982_; 
lean_dec_ref(v___f_975_);
v___x_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_982_, 0, v_x_980_);
return v___x_982_;
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_1003_; 
v_a_983_ = lean_ctor_get(v_x_980_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_x_980_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_985_ = v_x_980_;
v_isShared_986_ = v_isSharedCheck_1003_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v_x_980_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_1003_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
uint32_t v___x_987_; lean_object* v___x_988_; uint8_t v___x_989_; lean_object* v_val_991_; lean_object* v___x_994_; 
v___x_987_ = 0;
v___x_988_ = lean_unsigned_to_nat(0u);
v___x_989_ = 0;
v___x_994_ = lasm_js_call_into(v_a_976_, v_op_977_, v___x_987_, v_flags_978_, v_a_983_, v_payload_979_);
lean_dec(v_a_983_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_994_, 1);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 0, v_a_995_);
v___x_997_ = v___x_985_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_995_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
v_val_991_ = v___x_997_;
goto v___jp_990_;
}
}
else
{
lean_object* v_a_999_; lean_object* v___x_1001_; 
v_a_999_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_999_);
lean_dec_ref_known(v___x_994_, 1);
if (v_isShared_986_ == 0)
{
lean_ctor_set_tag(v___x_985_, 0);
lean_ctor_set(v___x_985_, 0, v_a_999_);
v___x_1001_ = v___x_985_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_999_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
v_val_991_ = v___x_1001_;
goto v___jp_990_;
}
}
v___jp_990_:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_992_, 0, v_val_991_);
v___x_993_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_988_, v___x_989_, v___x_992_, v___f_975_);
return v___x_993_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__7___boxed(lean_object* v___f_1004_, lean_object* v_a_1005_, lean_object* v_op_1006_, lean_object* v_flags_1007_, lean_object* v_payload_1008_, lean_object* v_x_1009_, lean_object* v___y_1010_){
_start:
{
uint32_t v_op_boxed_1011_; uint64_t v_flags_boxed_1012_; lean_object* v_res_1013_; 
v_op_boxed_1011_ = lean_unbox_uint32(v_op_1006_);
lean_dec(v_op_1006_);
v_flags_boxed_1012_ = lean_unbox_uint64(v_flags_1007_);
lean_dec_ref(v_flags_1007_);
v_res_1013_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__7(v___f_1004_, v_a_1005_, v_op_boxed_1011_, v_flags_boxed_1012_, v_payload_1008_, v_x_1009_);
lean_dec(v_payload_1008_);
lean_dec(v_a_1005_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__5(lean_object* v___x_1014_, uint8_t v___x_1015_, lean_object* v___f_1016_, lean_object* v_a_1017_, uint32_t v_op_1018_, uint64_t v_flags_1019_, lean_object* v_payload_1020_, lean_object* v_x_1021_){
_start:
{
lean_object* v_val_1024_; 
if (lean_obj_tag(v_x_1021_) == 0)
{
lean_object* v___x_1027_; 
lean_dec_ref(v___f_1016_);
lean_dec(v___x_1014_);
v___x_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1027_, 0, v_x_1021_);
return v___x_1027_;
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1042_; 
v_a_1028_ = lean_ctor_get(v_x_1021_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v_x_1021_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1030_ = v_x_1021_;
v_isShared_1031_ = v_isSharedCheck_1042_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v_x_1021_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1042_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
uint32_t v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = 0;
v___x_1033_ = lasm_js_call_into(v_a_1017_, v_op_1018_, v___x_1032_, v_flags_1019_, v_a_1028_, v_payload_1020_);
lean_dec(v_a_1028_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v_a_1034_; lean_object* v___x_1036_; 
v_a_1034_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1034_);
lean_dec_ref_known(v___x_1033_, 1);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 0, v_a_1034_);
v___x_1036_ = v___x_1030_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
v_val_1024_ = v___x_1036_;
goto v___jp_1023_;
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; 
v_a_1038_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1038_);
lean_dec_ref_known(v___x_1033_, 1);
if (v_isShared_1031_ == 0)
{
lean_ctor_set_tag(v___x_1030_, 0);
lean_ctor_set(v___x_1030_, 0, v_a_1038_);
v___x_1040_ = v___x_1030_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1038_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
v_val_1024_ = v___x_1040_;
goto v___jp_1023_;
}
}
}
}
v___jp_1023_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1025_, 0, v_val_1024_);
v___x_1026_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1014_, v___x_1015_, v___x_1025_, v___f_1016_);
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__5___boxed(lean_object* v___x_1043_, lean_object* v___x_1044_, lean_object* v___f_1045_, lean_object* v_a_1046_, lean_object* v_op_1047_, lean_object* v_flags_1048_, lean_object* v_payload_1049_, lean_object* v_x_1050_, lean_object* v___y_1051_){
_start:
{
uint8_t v___x_1781__boxed_1052_; uint32_t v_op_boxed_1053_; uint64_t v_flags_boxed_1054_; lean_object* v_res_1055_; 
v___x_1781__boxed_1052_ = lean_unbox(v___x_1044_);
v_op_boxed_1053_ = lean_unbox_uint32(v_op_1047_);
lean_dec(v_op_1047_);
v_flags_boxed_1054_ = lean_unbox_uint64(v_flags_1048_);
lean_dec_ref(v_flags_1048_);
v_res_1055_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__5(v___x_1043_, v___x_1781__boxed_1052_, v___f_1045_, v_a_1046_, v_op_boxed_1053_, v_flags_boxed_1054_, v_payload_1049_, v_x_1050_);
lean_dec(v_payload_1049_);
lean_dec(v_a_1046_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3(lean_object* v_a_1056_, lean_object* v_x_1057_){
_start:
{
if (lean_obj_tag(v_x_1057_) == 0)
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1067_; 
v_a_1059_ = lean_ctor_get(v_x_1057_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_x_1057_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1061_ = v_x_1057_;
v_isShared_1062_ = v_isSharedCheck_1067_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v_x_1057_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1067_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
lean_object* v___x_1065_; 
v___x_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
return v___x_1065_;
}
}
}
else
{
lean_object* v___x_1068_; 
lean_dec_ref_known(v_x_1057_, 1);
v___x_1068_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1056_);
return v___x_1068_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3___boxed(lean_object* v_a_1069_, lean_object* v_x_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3(v_a_1069_, v_x_1070_);
lean_dec(v_a_1069_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_1073_, uint32_t v_op_1074_, uint64_t v_flags_1075_, lean_object* v_payload_1076_, lean_object* v___f_1077_, lean_object* v___f_1078_, lean_object* v___f_1079_, lean_object* v_x_1080_){
_start:
{
if (lean_obj_tag(v_x_1080_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1090_; 
lean_dec_ref(v___f_1079_);
lean_dec_ref(v___f_1078_);
lean_dec_ref(v___f_1077_);
lean_dec(v_payload_1076_);
v_a_1082_ = lean_ctor_get(v_x_1080_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_x_1080_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1084_ = v_x_1080_;
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v_x_1080_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
lean_object* v___x_1088_; 
v___x_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
return v___x_1088_;
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1137_; 
v_a_1091_ = lean_ctor_get(v_x_1080_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_x_1080_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1093_ = v_x_1080_;
v_isShared_1094_ = v_isSharedCheck_1137_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v_x_1080_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1137_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; uint8_t v___x_1097_; 
v___x_1095_ = lean_string_utf8_byte_size(v_failurePrefix_1073_);
v___x_1096_ = lean_unsigned_to_nat(0u);
v___x_1097_ = lean_nat_dec_eq(v___x_1095_, v___x_1096_);
if (v___x_1097_ == 0)
{
lean_object* v___f_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___f_1102_; lean_object* v_val_1104_; lean_object* v___x_1109_; 
lean_dec_ref(v___f_1079_);
lean_inc(v_a_1091_);
v___f_1098_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1098_, 0, v_a_1091_);
v___x_1099_ = lean_box(v___x_1097_);
v___x_1100_ = lean_box_uint32(v_op_1074_);
v___x_1101_ = lean_box_uint64(v_flags_1075_);
lean_inc(v_payload_1076_);
v___f_1102_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1102_, 0, v___x_1096_);
lean_closure_set(v___f_1102_, 1, v___x_1099_);
lean_closure_set(v___f_1102_, 2, v___f_1098_);
lean_closure_set(v___f_1102_, 3, v_a_1091_);
lean_closure_set(v___f_1102_, 4, v___x_1100_);
lean_closure_set(v___f_1102_, 5, v___x_1101_);
lean_closure_set(v___f_1102_, 6, v_payload_1076_);
v___x_1109_ = l_Lasm_JS_Wire_encodeIO(v_payload_1076_);
lean_dec(v_payload_1076_);
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_object* v_a_1110_; lean_object* v___x_1112_; 
v_a_1110_ = lean_ctor_get(v___x_1109_, 0);
lean_inc(v_a_1110_);
lean_dec_ref_known(v___x_1109_, 1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v_a_1110_);
v___x_1112_ = v___x_1093_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
v_val_1104_ = v___x_1112_;
goto v___jp_1103_;
}
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; 
v_a_1114_ = lean_ctor_get(v___x_1109_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1109_, 1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set_tag(v___x_1093_, 0);
lean_ctor_set(v___x_1093_, 0, v_a_1114_);
v___x_1116_ = v___x_1093_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
v_val_1104_ = v___x_1116_;
goto v___jp_1103_;
}
}
v___jp_1103_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1105_, 0, v_val_1104_);
v___x_1106_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1096_, v___x_1097_, v___x_1105_, v___f_1102_);
v___x_1107_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1096_, v___x_1097_, v___x_1106_, v___f_1077_);
v___x_1108_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1096_, v___x_1097_, v___x_1107_, v___f_1078_);
return v___x_1108_;
}
}
else
{
lean_object* v___f_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___f_1121_; uint8_t v___x_1122_; lean_object* v_val_1124_; lean_object* v___x_1128_; 
lean_dec_ref(v___f_1078_);
lean_dec_ref(v___f_1077_);
lean_inc(v_a_1091_);
v___f_1118_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1118_, 0, v_a_1091_);
v___x_1119_ = lean_box_uint32(v_op_1074_);
v___x_1120_ = lean_box_uint64(v_flags_1075_);
lean_inc(v_payload_1076_);
v___f_1121_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1121_, 0, v___f_1118_);
lean_closure_set(v___f_1121_, 1, v_a_1091_);
lean_closure_set(v___f_1121_, 2, v___x_1119_);
lean_closure_set(v___f_1121_, 3, v___x_1120_);
lean_closure_set(v___f_1121_, 4, v_payload_1076_);
v___x_1122_ = 0;
v___x_1128_ = l_Lasm_JS_Wire_encodeIO(v_payload_1076_);
lean_dec(v_payload_1076_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v_a_1129_; lean_object* v___x_1131_; 
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1129_);
lean_dec_ref_known(v___x_1128_, 1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v_a_1129_);
v___x_1131_ = v___x_1093_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1129_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
v_val_1124_ = v___x_1131_;
goto v___jp_1123_;
}
}
else
{
lean_object* v_a_1133_; lean_object* v___x_1135_; 
v_a_1133_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1133_);
lean_dec_ref_known(v___x_1128_, 1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set_tag(v___x_1093_, 0);
lean_ctor_set(v___x_1093_, 0, v_a_1133_);
v___x_1135_ = v___x_1093_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1133_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
v_val_1124_ = v___x_1135_;
goto v___jp_1123_;
}
}
v___jp_1123_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1125_, 0, v_val_1124_);
v___x_1126_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1096_, v___x_1122_, v___x_1125_, v___f_1121_);
v___x_1127_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1096_, v___x_1122_, v___x_1126_, v___f_1079_);
return v___x_1127_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_1138_, lean_object* v_op_1139_, lean_object* v_flags_1140_, lean_object* v_payload_1141_, lean_object* v___f_1142_, lean_object* v___f_1143_, lean_object* v___f_1144_, lean_object* v_x_1145_, lean_object* v___y_1146_){
_start:
{
uint32_t v_op_boxed_1147_; uint64_t v_flags_boxed_1148_; lean_object* v_res_1149_; 
v_op_boxed_1147_ = lean_unbox_uint32(v_op_1139_);
lean_dec(v_op_1139_);
v_flags_boxed_1148_ = lean_unbox_uint64(v_flags_1140_);
lean_dec_ref(v_flags_1140_);
v_res_1149_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__6(v_failurePrefix_1138_, v_op_boxed_1147_, v_flags_boxed_1148_, v_payload_1141_, v___f_1142_, v___f_1143_, v___f_1144_, v_x_1145_);
lean_dec_ref(v_failurePrefix_1138_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_1150_, lean_object* v_x_1151_){
_start:
{
if (lean_obj_tag(v_x_1151_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1164_; 
v_a_1153_ = lean_ctor_get(v_x_1151_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_x_1151_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1155_ = v_x_1151_;
v_isShared_1156_ = v_isSharedCheck_1164_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v_x_1151_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1164_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1161_; 
v___x_1157_ = lean_io_error_to_string(v_a_1153_);
v___x_1158_ = lean_string_append(v_failurePrefix_1150_, v___x_1157_);
lean_dec_ref(v___x_1157_);
v___x_1159_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1159_);
v___x_1161_ = v___x_1155_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1159_);
v___x_1161_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
return v___x_1162_;
}
}
}
else
{
lean_object* v___x_1165_; 
lean_dec_ref(v_failurePrefix_1150_);
v___x_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1165_, 0, v_x_1151_);
return v___x_1165_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_1166_, lean_object* v_x_1167_, lean_object* v___y_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__4(v_failurePrefix_1166_, v_x_1167_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__2(lean_object* v___f_1170_, lean_object* v_x_1171_){
_start:
{
if (lean_obj_tag(v_x_1171_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1181_; 
lean_dec_ref(v___f_1170_);
v_a_1173_ = lean_ctor_get(v_x_1171_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v_x_1171_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1175_ = v_x_1171_;
v_isShared_1176_ = v_isSharedCheck_1181_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v_x_1171_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1181_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1173_);
v___x_1178_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
return v___x_1179_;
}
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1183_; 
v_a_1182_ = lean_ctor_get(v_x_1171_, 0);
lean_inc(v_a_1182_);
lean_dec_ref_known(v_x_1171_, 1);
v___x_1183_ = lean_apply_2(v___f_1170_, v_a_1182_, lean_box(0));
return v___x_1183_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1184_, lean_object* v_x_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__2(v___f_1184_, v_x_1185_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1(lean_object* v_context_1188_, uint32_t v_op_1189_, uint64_t v_flags_1190_, lean_object* v_payload_1191_, lean_object* v_failurePrefix_1192_){
_start:
{
lean_object* v___f_1194_; lean_object* v___f_1195_; lean_object* v___f_1196_; lean_object* v___f_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___f_1200_; lean_object* v___f_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; lean_object* v_val_1205_; lean_object* v___x_1208_; 
v___f_1194_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1194_, 0, v_context_1188_);
v___f_1195_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1195_, 0, v___f_1194_);
v___f_1196_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1196_, 0, v___f_1195_);
lean_inc_ref(v_failurePrefix_1192_);
v___f_1197_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1197_, 0, v_failurePrefix_1192_);
v___x_1198_ = lean_box_uint32(v_op_1189_);
v___x_1199_ = lean_box_uint64(v_flags_1190_);
lean_inc_ref(v___f_1196_);
v___f_1200_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1200_, 0, v_failurePrefix_1192_);
lean_closure_set(v___f_1200_, 1, v___x_1198_);
lean_closure_set(v___f_1200_, 2, v___x_1199_);
lean_closure_set(v___f_1200_, 3, v_payload_1191_);
lean_closure_set(v___f_1200_, 4, v___f_1197_);
lean_closure_set(v___f_1200_, 5, v___f_1196_);
lean_closure_set(v___f_1200_, 6, v___f_1196_);
v___f_1201_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1201_, 0, v___f_1200_);
v___x_1202_ = lean_unsigned_to_nat(0u);
v___x_1203_ = 0;
v___x_1208_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
lean_ctor_set_tag(v___x_1211_, 1);
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
v_val_1205_ = v___x_1214_;
goto v___jp_1204_;
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_a_1217_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1208_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1208_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
lean_ctor_set_tag(v___x_1219_, 0);
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
v_val_1205_ = v___x_1222_;
goto v___jp_1204_;
}
}
}
v___jp_1204_:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1206_, 0, v_val_1205_);
v___x_1207_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1202_, v___x_1203_, v___x_1206_, v___f_1201_);
return v___x_1207_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___boxed(lean_object* v_context_1225_, lean_object* v_op_1226_, lean_object* v_flags_1227_, lean_object* v_payload_1228_, lean_object* v_failurePrefix_1229_, lean_object* v_a_1230_){
_start:
{
uint32_t v_op_boxed_1231_; uint64_t v_flags_boxed_1232_; lean_object* v_res_1233_; 
v_op_boxed_1231_ = lean_unbox_uint32(v_op_1226_);
lean_dec(v_op_1226_);
v_flags_boxed_1232_ = lean_unbox_uint64(v_flags_1227_);
lean_dec_ref(v_flags_1227_);
v_res_1233_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1(v_context_1225_, v_op_boxed_1231_, v_flags_boxed_1232_, v_payload_1228_, v_failurePrefix_1229_);
return v_res_1233_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1234_; uint64_t v___x_1235_; 
v___x_1234_ = 0;
v___x_1235_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0(uint8_t v_await_1236_, uint64_t v_extra_1237_){
_start:
{
uint64_t v___x_1238_; uint64_t v___y_1240_; 
v___x_1238_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0);
if (v_await_1236_ == 0)
{
uint64_t v___x_1243_; 
v___x_1243_ = 0ULL;
v___y_1240_ = v___x_1243_;
goto v___jp_1239_;
}
else
{
uint64_t v___x_1244_; 
v___x_1244_ = 2ULL;
v___y_1240_ = v___x_1244_;
goto v___jp_1239_;
}
v___jp_1239_:
{
uint64_t v___x_1241_; uint64_t v___x_1242_; 
v___x_1241_ = lean_uint64_lor(v___x_1238_, v___y_1240_);
v___x_1242_ = lean_uint64_lor(v___x_1241_, v_extra_1237_);
return v___x_1242_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___boxed(lean_object* v_await_1245_, lean_object* v_extra_1246_){
_start:
{
uint8_t v_await_boxed_1247_; uint64_t v_extra_boxed_1248_; uint64_t v_res_1249_; lean_object* v_r_1250_; 
v_await_boxed_1247_ = lean_unbox(v_await_1245_);
v_extra_boxed_1248_ = lean_unbox_uint64(v_extra_1246_);
lean_dec_ref(v_extra_1246_);
v_res_1249_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0(v_await_boxed_1247_, v_extra_boxed_1248_);
v_r_1250_ = lean_box_uint64(v_res_1249_);
return v_r_1250_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__1(void){
_start:
{
uint64_t v___x_1252_; uint8_t v___x_1253_; uint64_t v___x_1254_; 
v___x_1252_ = 8ULL;
v___x_1253_ = 0;
v___x_1254_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0(v___x_1253_, v___x_1252_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0(lean_object* v_o_1255_, lean_object* v_name_1256_, lean_object* v_args_1257_){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; uint32_t v___x_1264_; uint64_t v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1259_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_1260_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1260_, 0, v_o_1255_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
lean_inc_ref(v_name_1256_);
v___x_1261_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1261_, 0, v_name_1256_);
v___x_1262_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__0));
v___x_1263_ = lean_string_append(v___x_1262_, v_name_1256_);
lean_dec_ref(v_name_1256_);
v___x_1264_ = 205;
v___x_1265_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__1);
v___x_1266_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1266_, 0, v_args_1257_);
v___x_1267_ = lean_unsigned_to_nat(3u);
v___x_1268_ = lean_mk_empty_array_with_capacity(v___x_1267_);
v___x_1269_ = lean_array_push(v___x_1268_, v___x_1260_);
v___x_1270_ = lean_array_push(v___x_1269_, v___x_1261_);
v___x_1271_ = lean_array_push(v___x_1270_, v___x_1266_);
v___x_1272_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
v___x_1273_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1(v___x_1263_, v___x_1264_, v___x_1265_, v___x_1272_, v___x_1259_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___boxed(lean_object* v_o_1274_, lean_object* v_name_1275_, lean_object* v_args_1276_, lean_object* v___y_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0(v_o_1274_, v_name_1275_, v_args_1276_);
return v_res_1278_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_Queue_metrics___closed__1(void){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Queue_metrics___closed__0));
v___x_1282_ = l_Lasm_JS_Web_Support_args(v___x_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_metrics(lean_object* v_self_1283_){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1285_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0));
v___x_1286_ = lean_obj_once(&l_Lasm_JS_Cloudflare_Queue_metrics___closed__1, &l_Lasm_JS_Cloudflare_Queue_metrics___closed__1_once, _init_l_Lasm_JS_Cloudflare_Queue_metrics___closed__1);
v___x_1287_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0(v_self_1283_, v___x_1285_, v___x_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_metrics___boxed(lean_object* v_self_1288_, lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lasm_JS_Cloudflare_Queue_metrics(v_self_1288_);
return v_res_1290_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__3(uint8_t v_await_1291_, uint64_t v_extra_1292_){
_start:
{
uint64_t v___x_1293_; uint64_t v___y_1295_; 
v___x_1293_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0);
if (v_await_1291_ == 0)
{
uint64_t v___x_1298_; 
v___x_1298_ = 0ULL;
v___y_1295_ = v___x_1298_;
goto v___jp_1294_;
}
else
{
uint64_t v___x_1299_; 
v___x_1299_ = 2ULL;
v___y_1295_ = v___x_1299_;
goto v___jp_1294_;
}
v___jp_1294_:
{
uint64_t v___x_1296_; uint64_t v___x_1297_; 
v___x_1296_ = lean_uint64_lor(v___x_1293_, v___y_1295_);
v___x_1297_ = lean_uint64_lor(v___x_1296_, v_extra_1292_);
return v___x_1297_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__3___boxed(lean_object* v_await_1300_, lean_object* v_extra_1301_){
_start:
{
uint8_t v_await_boxed_1302_; uint64_t v_extra_boxed_1303_; uint64_t v_res_1304_; lean_object* v_r_1305_; 
v_await_boxed_1302_ = lean_unbox(v_await_1300_);
v_extra_boxed_1303_ = lean_unbox_uint64(v_extra_1301_);
lean_dec_ref(v_extra_1301_);
v_res_1304_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__3(v_await_boxed_1302_, v_extra_boxed_1303_);
v_r_1305_ = lean_box_uint64(v_res_1304_);
return v_r_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__3(lean_object* v___f_1306_, lean_object* v_x_1307_){
_start:
{
if (lean_obj_tag(v_x_1307_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1317_; 
lean_dec_ref(v___f_1306_);
v_a_1309_ = lean_ctor_get(v_x_1307_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_x_1307_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1311_ = v_x_1307_;
v_isShared_1312_ = v_isSharedCheck_1317_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v_x_1307_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1317_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
return v___x_1315_;
}
}
}
else
{
lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1329_; 
v_isSharedCheck_1329_ = !lean_is_exclusive(v_x_1307_);
if (v_isSharedCheck_1329_ == 0)
{
lean_object* v_unused_1330_; 
v_unused_1330_ = lean_ctor_get(v_x_1307_, 0);
lean_dec(v_unused_1330_);
v___x_1319_ = v_x_1307_;
v_isShared_1320_ = v_isSharedCheck_1329_;
goto v_resetjp_1318_;
}
else
{
lean_dec(v_x_1307_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1329_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1321_; uint8_t v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1325_; 
v___x_1321_ = lean_unsigned_to_nat(0u);
v___x_1322_ = 0;
v___x_1323_ = lean_io_promise_new();
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 0, v___x_1323_);
v___x_1325_ = v___x_1319_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
v___x_1327_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1321_, v___x_1322_, v___x_1326_, v___f_1306_);
return v___x_1327_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__3___boxed(lean_object* v___f_1331_, lean_object* v_x_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__3(v___f_1331_, v_x_1332_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__9(lean_object* v_failurePrefix_1335_, uint32_t v_op_1336_, uint64_t v_flags_1337_, lean_object* v_payload_1338_, lean_object* v___f_1339_, lean_object* v___f_1340_, lean_object* v___f_1341_, lean_object* v_x_1342_){
_start:
{
if (lean_obj_tag(v_x_1342_) == 0)
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1352_; 
lean_dec_ref(v___f_1341_);
lean_dec_ref(v___f_1340_);
lean_dec_ref(v___f_1339_);
lean_dec(v_payload_1338_);
v_a_1344_ = lean_ctor_get(v_x_1342_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_x_1342_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1346_ = v_x_1342_;
v_isShared_1347_ = v_isSharedCheck_1352_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v_x_1342_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1352_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1344_);
v___x_1349_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
return v___x_1350_;
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1399_; 
v_a_1353_ = lean_ctor_get(v_x_1342_, 0);
v_isSharedCheck_1399_ = !lean_is_exclusive(v_x_1342_);
if (v_isSharedCheck_1399_ == 0)
{
v___x_1355_ = v_x_1342_;
v_isShared_1356_ = v_isSharedCheck_1399_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v_x_1342_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1399_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1357_ = lean_string_utf8_byte_size(v_failurePrefix_1335_);
v___x_1358_ = lean_unsigned_to_nat(0u);
v___x_1359_ = lean_nat_dec_eq(v___x_1357_, v___x_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___f_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___f_1364_; lean_object* v_val_1366_; lean_object* v___x_1371_; 
lean_dec_ref(v___f_1341_);
lean_inc(v_a_1353_);
v___f_1360_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1360_, 0, v_a_1353_);
v___x_1361_ = lean_box(v___x_1359_);
v___x_1362_ = lean_box_uint32(v_op_1336_);
v___x_1363_ = lean_box_uint64(v_flags_1337_);
lean_inc(v_payload_1338_);
v___f_1364_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1364_, 0, v___x_1358_);
lean_closure_set(v___f_1364_, 1, v___x_1361_);
lean_closure_set(v___f_1364_, 2, v___f_1360_);
lean_closure_set(v___f_1364_, 3, v_a_1353_);
lean_closure_set(v___f_1364_, 4, v___x_1362_);
lean_closure_set(v___f_1364_, 5, v___x_1363_);
lean_closure_set(v___f_1364_, 6, v_payload_1338_);
v___x_1371_ = l_Lasm_JS_Wire_encodeIO(v_payload_1338_);
lean_dec(v_payload_1338_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_a_1372_; lean_object* v___x_1374_; 
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_a_1372_);
lean_dec_ref_known(v___x_1371_, 1);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v_a_1372_);
v___x_1374_ = v___x_1355_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_a_1372_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
v_val_1366_ = v___x_1374_;
goto v___jp_1365_;
}
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; 
v_a_1376_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_a_1376_);
lean_dec_ref_known(v___x_1371_, 1);
if (v_isShared_1356_ == 0)
{
lean_ctor_set_tag(v___x_1355_, 0);
lean_ctor_set(v___x_1355_, 0, v_a_1376_);
v___x_1378_ = v___x_1355_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1376_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
v_val_1366_ = v___x_1378_;
goto v___jp_1365_;
}
}
v___jp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1367_, 0, v_val_1366_);
v___x_1368_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1358_, v___x_1359_, v___x_1367_, v___f_1364_);
v___x_1369_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1358_, v___x_1359_, v___x_1368_, v___f_1339_);
v___x_1370_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1358_, v___x_1359_, v___x_1369_, v___f_1340_);
return v___x_1370_;
}
}
else
{
lean_object* v___f_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___f_1383_; uint8_t v___x_1384_; lean_object* v_val_1386_; lean_object* v___x_1390_; 
lean_dec_ref(v___f_1340_);
lean_dec_ref(v___f_1339_);
lean_inc(v_a_1353_);
v___f_1380_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1380_, 0, v_a_1353_);
v___x_1381_ = lean_box_uint32(v_op_1336_);
v___x_1382_ = lean_box_uint64(v_flags_1337_);
lean_inc(v_payload_1338_);
v___f_1383_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1383_, 0, v___f_1380_);
lean_closure_set(v___f_1383_, 1, v_a_1353_);
lean_closure_set(v___f_1383_, 2, v___x_1381_);
lean_closure_set(v___f_1383_, 3, v___x_1382_);
lean_closure_set(v___f_1383_, 4, v_payload_1338_);
v___x_1384_ = 0;
v___x_1390_ = l_Lasm_JS_Wire_encodeIO(v_payload_1338_);
lean_dec(v_payload_1338_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1393_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v_a_1391_);
v___x_1393_ = v___x_1355_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_a_1391_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
v_val_1386_ = v___x_1393_;
goto v___jp_1385_;
}
}
else
{
lean_object* v_a_1395_; lean_object* v___x_1397_; 
v_a_1395_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1390_, 1);
if (v_isShared_1356_ == 0)
{
lean_ctor_set_tag(v___x_1355_, 0);
lean_ctor_set(v___x_1355_, 0, v_a_1395_);
v___x_1397_ = v___x_1355_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v_a_1395_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
v_val_1386_ = v___x_1397_;
goto v___jp_1385_;
}
}
v___jp_1385_:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1387_, 0, v_val_1386_);
v___x_1388_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1358_, v___x_1384_, v___x_1387_, v___f_1383_);
v___x_1389_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1358_, v___x_1384_, v___x_1388_, v___f_1341_);
return v___x_1389_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__9___boxed(lean_object* v_failurePrefix_1400_, lean_object* v_op_1401_, lean_object* v_flags_1402_, lean_object* v_payload_1403_, lean_object* v___f_1404_, lean_object* v___f_1405_, lean_object* v___f_1406_, lean_object* v_x_1407_, lean_object* v___y_1408_){
_start:
{
uint32_t v_op_boxed_1409_; uint64_t v_flags_boxed_1410_; lean_object* v_res_1411_; 
v_op_boxed_1409_ = lean_unbox_uint32(v_op_1401_);
lean_dec(v_op_1401_);
v_flags_boxed_1410_ = lean_unbox_uint64(v_flags_1402_);
lean_dec_ref(v_flags_1402_);
v_res_1411_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__9(v_failurePrefix_1400_, v_op_boxed_1409_, v_flags_boxed_1410_, v_payload_1403_, v___f_1404_, v___f_1405_, v___f_1406_, v_x_1407_);
lean_dec_ref(v_failurePrefix_1400_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__1(lean_object* v___f_1412_, lean_object* v_bytes_1413_){
_start:
{
lean_object* v___x_1415_; uint8_t v___x_1416_; lean_object* v_val_1418_; lean_object* v___x_1421_; 
v___x_1415_ = lean_unsigned_to_nat(0u);
v___x_1416_ = 0;
v___x_1421_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1413_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1421_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1421_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
lean_ctor_set_tag(v___x_1424_, 1);
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
v_val_1418_ = v___x_1427_;
goto v___jp_1417_;
}
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
v_a_1430_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1421_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1421_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
lean_ctor_set_tag(v___x_1432_, 0);
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
v_val_1418_ = v___x_1435_;
goto v___jp_1417_;
}
}
}
v___jp_1417_:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1419_, 0, v_val_1418_);
v___x_1420_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1415_, v___x_1416_, v___x_1419_, v___f_1412_);
return v___x_1420_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__1___boxed(lean_object* v___f_1438_, lean_object* v_bytes_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__1(v___f_1438_, v_bytes_1439_);
lean_dec_ref(v_bytes_1439_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__2(lean_object* v___f_1442_, lean_object* v_x_1443_){
_start:
{
if (lean_obj_tag(v_x_1443_) == 0)
{
lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1453_; 
lean_dec_ref(v___f_1442_);
v_a_1445_ = lean_ctor_get(v_x_1443_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_x_1443_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1447_ = v_x_1443_;
v_isShared_1448_ = v_isSharedCheck_1453_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v_x_1443_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1453_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1450_; 
if (v_isShared_1448_ == 0)
{
v___x_1450_ = v___x_1447_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1445_);
v___x_1450_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
lean_object* v___x_1451_; 
v___x_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1450_);
return v___x_1451_;
}
}
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1455_; 
v_a_1454_ = lean_ctor_get(v_x_1443_, 0);
lean_inc(v_a_1454_);
lean_dec_ref_known(v_x_1443_, 1);
v___x_1455_ = lean_apply_2(v___f_1442_, v_a_1454_, lean_box(0));
return v___x_1455_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__2___boxed(lean_object* v___f_1456_, lean_object* v_x_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__2(v___f_1456_, v_x_1457_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7(lean_object* v_d_1462_, lean_object* v_key_1463_){
_start:
{
if (lean_obj_tag(v_d_1462_) == 8)
{
lean_object* v___x_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1516_; 
v___x_1464_ = l_Lasm_JS_Data_field(v_d_1462_, v_key_1463_);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_d_1462_);
if (v_isSharedCheck_1516_ == 0)
{
lean_object* v_unused_1517_; 
v_unused_1517_ = lean_ctor_get(v_d_1462_, 0);
lean_dec(v_unused_1517_);
v___x_1466_ = v_d_1462_;
v_isShared_1467_ = v_isSharedCheck_1516_;
goto v_resetjp_1465_;
}
else
{
lean_dec(v_d_1462_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1516_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v_a_1469_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0));
lean_inc(v___x_1464_);
v___x_1495_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v___x_1464_, v___x_1494_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1495_, 1);
v_a_1469_ = v_a_1496_;
goto v___jp_1468_;
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v_a_1497_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1497_);
lean_dec_ref_known(v___x_1495_, 1);
v___x_1498_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1));
lean_inc(v___x_1464_);
v___x_1499_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v___x_1464_, v___x_1498_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; 
lean_dec(v_a_1497_);
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1500_);
lean_dec_ref_known(v___x_1499_, 1);
v_a_1469_ = v_a_1500_;
goto v___jp_1468_;
}
else
{
lean_object* v_a_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v_a_1501_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1501_);
lean_dec_ref_known(v___x_1499_, 1);
v___x_1502_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2));
lean_inc(v___x_1464_);
v___x_1503_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4(v___x_1464_, v___x_1502_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; 
lean_dec(v_a_1501_);
lean_dec(v_a_1497_);
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v_a_1469_ = v_a_1504_;
goto v___jp_1468_;
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1515_; 
lean_del_object(v___x_1466_);
lean_dec(v___x_1464_);
v_a_1505_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1507_ = v___x_1503_;
v_isShared_1508_ = v_isSharedCheck_1515_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1503_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1515_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1509_; double v___x_1510_; double v___x_1511_; lean_object* v___x_1513_; 
v___x_1509_ = lean_alloc_ctor(0, 1, 16);
lean_ctor_set(v___x_1509_, 0, v_a_1505_);
v___x_1510_ = lean_unbox_float(v_a_1497_);
lean_dec(v_a_1497_);
lean_ctor_set_float(v___x_1509_, sizeof(void*)*1, v___x_1510_);
v___x_1511_ = lean_unbox_float(v_a_1501_);
lean_dec(v_a_1501_);
lean_ctor_set_float(v___x_1509_, sizeof(void*)*1 + 8, v___x_1511_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v___x_1509_);
v___x_1513_ = v___x_1507_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1509_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
}
v___jp_1468_:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; uint8_t v___x_1482_; 
v___x_1470_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1471_ = lean_string_append(v___x_1470_, v_key_1463_);
v___x_1472_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_1473_ = lean_string_append(v___x_1471_, v___x_1472_);
v___x_1474_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics___closed__1));
v___x_1475_ = lean_string_append(v___x_1473_, v___x_1474_);
v___x_1476_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_1477_ = lean_string_append(v___x_1475_, v___x_1476_);
v___x_1478_ = l_Lasm_JS_Data_describe(v___x_1464_);
v___x_1479_ = lean_string_append(v___x_1477_, v___x_1478_);
lean_dec_ref(v___x_1478_);
v___x_1480_ = lean_string_utf8_byte_size(v_a_1469_);
v___x_1481_ = lean_unsigned_to_nat(0u);
v___x_1482_ = lean_nat_dec_eq(v___x_1480_, v___x_1481_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1489_; 
v___x_1483_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_1484_ = lean_string_append(v___x_1483_, v_a_1469_);
lean_dec_ref(v_a_1469_);
v___x_1485_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_1486_ = lean_string_append(v___x_1484_, v___x_1485_);
v___x_1487_ = lean_string_append(v___x_1479_, v___x_1486_);
lean_dec_ref(v___x_1486_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set_tag(v___x_1466_, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1487_);
v___x_1489_ = v___x_1466_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
else
{
lean_object* v___x_1492_; 
lean_dec_ref(v_a_1469_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set_tag(v___x_1466_, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1479_);
v___x_1492_ = v___x_1466_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1479_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
else
{
lean_object* v___x_1518_; 
lean_dec(v_d_1462_);
v___x_1518_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7___closed__0));
return v___x_1518_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7___boxed(lean_object* v_d_1519_, lean_object* v_key_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7(v_d_1519_, v_key_1520_);
lean_dec_ref(v_key_1520_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6(lean_object* v_d_1522_, lean_object* v_key_1523_){
_start:
{
if (lean_obj_tag(v_d_1522_) == 8)
{
lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1524_ = l_Lasm_JS_Data_field(v_d_1522_, v_key_1523_);
v___x_1525_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0));
lean_inc(v___x_1524_);
v___x_1526_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7(v___x_1524_, v___x_1525_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1555_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1529_ = v___x_1526_;
v_isShared_1530_ = v_isSharedCheck_1555_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1526_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1555_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; uint8_t v___x_1543_; 
v___x_1531_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1532_ = lean_string_append(v___x_1531_, v_key_1523_);
v___x_1533_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_1534_ = lean_string_append(v___x_1532_, v___x_1533_);
v___x_1535_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___closed__1));
v___x_1536_ = lean_string_append(v___x_1534_, v___x_1535_);
v___x_1537_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_1538_ = lean_string_append(v___x_1536_, v___x_1537_);
v___x_1539_ = l_Lasm_JS_Data_describe(v___x_1524_);
v___x_1540_ = lean_string_append(v___x_1538_, v___x_1539_);
lean_dec_ref(v___x_1539_);
v___x_1541_ = lean_string_utf8_byte_size(v_a_1527_);
v___x_1542_ = lean_unsigned_to_nat(0u);
v___x_1543_ = lean_nat_dec_eq(v___x_1541_, v___x_1542_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1550_; 
v___x_1544_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_1545_ = lean_string_append(v___x_1544_, v_a_1527_);
lean_dec(v_a_1527_);
v___x_1546_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_1547_ = lean_string_append(v___x_1545_, v___x_1546_);
v___x_1548_ = lean_string_append(v___x_1540_, v___x_1547_);
lean_dec_ref(v___x_1547_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1548_);
v___x_1550_ = v___x_1529_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1548_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
else
{
lean_object* v___x_1553_; 
lean_dec(v_a_1527_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1540_);
v___x_1553_ = v___x_1529_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1540_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_dec(v___x_1524_);
v_a_1556_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1526_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1526_);
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
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v___x_1564_; 
v___x_1564_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6_spec__7___closed__0));
return v___x_1564_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6___boxed(lean_object* v_d_1565_, lean_object* v_key_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6(v_d_1565_, v_key_1566_);
lean_dec_ref(v_key_1566_);
lean_dec(v_d_1565_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5(lean_object* v_context_1568_, lean_object* v_d_1569_){
_start:
{
lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___closed__0));
v___x_1578_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5_spec__6(v_d_1569_, v___x_1577_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; lean_object* v_received_1581_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1578_, 1);
if (lean_obj_tag(v_d_1569_) == 9)
{
lean_object* v_value_1601_; lean_object* v_description_1602_; lean_object* v___x_1603_; uint8_t v___x_1604_; 
v_value_1601_ = lean_ctor_get(v_d_1569_, 0);
v_description_1602_ = lean_ctor_get(v_d_1569_, 1);
v___x_1603_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_1604_ = lean_string_dec_eq(v_description_1602_, v___x_1603_);
if (v___x_1604_ == 0)
{
goto v___jp_1599_;
}
else
{
lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1621_; 
lean_inc(v_value_1601_);
v_isSharedCheck_1621_ = !lean_is_exclusive(v_d_1569_);
if (v_isSharedCheck_1621_ == 0)
{
lean_object* v_unused_1622_; lean_object* v_unused_1623_; 
v_unused_1622_ = lean_ctor_get(v_d_1569_, 1);
lean_dec(v_unused_1622_);
v_unused_1623_ = lean_ctor_get(v_d_1569_, 0);
lean_dec(v_unused_1623_);
v___x_1606_ = v_d_1569_;
v_isShared_1607_ = v_isSharedCheck_1621_;
goto v_resetjp_1605_;
}
else
{
lean_dec(v_d_1569_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1621_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
uint32_t v___x_1608_; uint64_t v___x_1609_; lean_object* v___x_1611_; 
v___x_1608_ = 206;
v___x_1609_ = 0ULL;
lean_inc(v_value_1601_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 1, v___x_1603_);
v___x_1611_ = v___x_1606_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_value_1601_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v___x_1603_);
v___x_1611_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
uint32_t v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = lasm_js_value_handle(v_value_1601_);
lean_dec(v_value_1601_);
v___x_1613_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1608_, v___x_1609_, v___x_1611_, v___x_1612_);
lean_dec_ref(v___x_1611_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; uint8_t v___x_1615_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v___x_1613_, 1);
v___x_1615_ = lean_string_validate_utf8(v_a_1614_);
if (v___x_1615_ == 0)
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
lean_dec(v_a_1614_);
v___x_1616_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8);
v___x_1617_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1616_);
v_received_1581_ = v___x_1617_;
goto v___jp_1580_;
}
else
{
lean_object* v___x_1618_; 
v___x_1618_ = lean_string_from_utf8_unchecked(v_a_1614_);
v_received_1581_ = v___x_1618_;
goto v___jp_1580_;
}
}
else
{
lean_object* v___x_1619_; 
lean_dec_ref_known(v___x_1613_, 1);
v___x_1619_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9));
v_received_1581_ = v___x_1619_;
goto v___jp_1580_;
}
}
}
}
}
else
{
goto v___jp_1599_;
}
v___jp_1580_:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; 
v___x_1582_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0));
v___x_1583_ = lean_string_append(v___x_1582_, v_context_1568_);
v___x_1584_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1));
v___x_1585_ = lean_string_append(v___x_1583_, v___x_1584_);
v___x_1586_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___closed__1));
v___x_1587_ = lean_string_append(v___x_1585_, v___x_1586_);
v___x_1588_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2));
v___x_1589_ = lean_string_append(v___x_1587_, v___x_1588_);
v___x_1590_ = lean_string_append(v___x_1589_, v_received_1581_);
lean_dec_ref(v_received_1581_);
v___x_1591_ = lean_string_utf8_byte_size(v_a_1579_);
v___x_1592_ = lean_unsigned_to_nat(0u);
v___x_1593_ = lean_nat_dec_eq(v___x_1591_, v___x_1592_);
if (v___x_1593_ == 0)
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1594_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_1595_ = lean_string_append(v___x_1594_, v_a_1579_);
lean_dec(v_a_1579_);
v___x_1596_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_1597_ = lean_string_append(v___x_1595_, v___x_1596_);
v___y_1572_ = v___x_1590_;
v___y_1573_ = v___x_1597_;
goto v___jp_1571_;
}
else
{
lean_object* v___x_1598_; 
lean_dec(v_a_1579_);
v___x_1598_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___y_1572_ = v___x_1590_;
v___y_1573_ = v___x_1598_;
goto v___jp_1571_;
}
}
v___jp_1599_:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lasm_JS_Data_describe(v_d_1569_);
v_received_1581_ = v___x_1600_;
goto v___jp_1580_;
}
}
else
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
lean_dec(v_d_1569_);
v_a_1624_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1578_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1578_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
lean_ctor_set_tag(v___x_1626_, 0);
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
v___jp_1571_:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1574_ = lean_string_append(v___y_1572_, v___y_1573_);
lean_dec_ref(v___y_1573_);
v___x_1575_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
v___x_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
return v___x_1576_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5___boxed(lean_object* v_context_1632_, lean_object* v_d_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5(v_context_1632_, v_d_1633_);
lean_dec_ref(v_context_1632_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__0(lean_object* v_context_1636_, lean_object* v_x_1637_){
_start:
{
lean_object* v_val_1640_; 
if (lean_obj_tag(v_x_1637_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1650_; 
v_a_1642_ = lean_ctor_get(v_x_1637_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v_x_1637_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1644_ = v_x_1637_;
v_isShared_1645_ = v_isSharedCheck_1650_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v_x_1637_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1650_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
lean_object* v___x_1648_; 
v___x_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
return v___x_1648_;
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1664_; 
v_a_1651_ = lean_ctor_get(v_x_1637_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v_x_1637_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1653_ = v_x_1637_;
v_isShared_1654_ = v_isSharedCheck_1664_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v_x_1637_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1664_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4_spec__5(v_context_1636_, v_a_1651_);
if (lean_obj_tag(v___x_1655_) == 0)
{
lean_object* v_a_1656_; lean_object* v___x_1658_; 
v_a_1656_ = lean_ctor_get(v___x_1655_, 0);
lean_inc(v_a_1656_);
lean_dec_ref_known(v___x_1655_, 1);
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 0, v_a_1656_);
v___x_1658_ = v___x_1653_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1656_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
v_val_1640_ = v___x_1658_;
goto v___jp_1639_;
}
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1662_; 
v_a_1660_ = lean_ctor_get(v___x_1655_, 0);
lean_inc(v_a_1660_);
lean_dec_ref_known(v___x_1655_, 1);
if (v_isShared_1654_ == 0)
{
lean_ctor_set_tag(v___x_1653_, 0);
lean_ctor_set(v___x_1653_, 0, v_a_1660_);
v___x_1662_ = v___x_1653_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
v_val_1640_ = v___x_1662_;
goto v___jp_1639_;
}
}
}
}
v___jp_1639_:
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1641_, 0, v_val_1640_);
return v___x_1641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__0___boxed(lean_object* v_context_1665_, lean_object* v_x_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__0(v_context_1665_, v_x_1666_);
lean_dec_ref(v_context_1665_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4(lean_object* v_context_1669_, uint32_t v_op_1670_, uint64_t v_flags_1671_, lean_object* v_payload_1672_, lean_object* v_failurePrefix_1673_){
_start:
{
lean_object* v___f_1675_; lean_object* v___f_1676_; lean_object* v___f_1677_; lean_object* v___f_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___f_1681_; lean_object* v___f_1682_; lean_object* v___x_1683_; uint8_t v___x_1684_; lean_object* v_val_1686_; lean_object* v___x_1689_; 
v___f_1675_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1675_, 0, v_context_1669_);
v___f_1676_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1676_, 0, v___f_1675_);
v___f_1677_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1677_, 0, v___f_1676_);
lean_inc_ref(v_failurePrefix_1673_);
v___f_1678_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1678_, 0, v_failurePrefix_1673_);
v___x_1679_ = lean_box_uint32(v_op_1670_);
v___x_1680_ = lean_box_uint64(v_flags_1671_);
lean_inc_ref(v___f_1677_);
v___f_1681_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1681_, 0, v_failurePrefix_1673_);
lean_closure_set(v___f_1681_, 1, v___x_1679_);
lean_closure_set(v___f_1681_, 2, v___x_1680_);
lean_closure_set(v___f_1681_, 3, v_payload_1672_);
lean_closure_set(v___f_1681_, 4, v___f_1678_);
lean_closure_set(v___f_1681_, 5, v___f_1677_);
lean_closure_set(v___f_1681_, 6, v___f_1677_);
v___f_1682_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1682_, 0, v___f_1681_);
v___x_1683_ = lean_unsigned_to_nat(0u);
v___x_1684_ = 0;
v___x_1689_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1689_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
lean_ctor_set_tag(v___x_1692_, 1);
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
v_val_1686_ = v___x_1695_;
goto v___jp_1685_;
}
}
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
v_a_1698_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1689_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1689_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
lean_ctor_set_tag(v___x_1700_, 0);
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1698_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
v_val_1686_ = v___x_1703_;
goto v___jp_1685_;
}
}
}
v___jp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1687_, 0, v_val_1686_);
v___x_1688_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1683_, v___x_1684_, v___x_1687_, v___f_1682_);
return v___x_1688_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4___boxed(lean_object* v_context_1706_, lean_object* v_op_1707_, lean_object* v_flags_1708_, lean_object* v_payload_1709_, lean_object* v_failurePrefix_1710_, lean_object* v_a_1711_){
_start:
{
uint32_t v_op_boxed_1712_; uint64_t v_flags_boxed_1713_; lean_object* v_res_1714_; 
v_op_boxed_1712_ = lean_unbox_uint32(v_op_1707_);
lean_dec(v_op_1707_);
v_flags_boxed_1713_ = lean_unbox_uint64(v_flags_1708_);
lean_dec_ref(v_flags_1708_);
v_res_1714_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4(v_context_1706_, v_op_boxed_1712_, v_flags_boxed_1713_, v_payload_1709_, v_failurePrefix_1710_);
return v_res_1714_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1715_; uint8_t v___x_1716_; uint64_t v___x_1717_; 
v___x_1715_ = 8ULL;
v___x_1716_ = 0;
v___x_1717_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__3(v___x_1716_, v___x_1715_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1(lean_object* v_o_1718_, lean_object* v_name_1719_, lean_object* v_args_1720_){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; uint32_t v___x_1727_; uint64_t v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1722_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_1723_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1723_, 0, v_o_1718_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
lean_inc_ref(v_name_1719_);
v___x_1724_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1724_, 0, v_name_1719_);
v___x_1725_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__0));
v___x_1726_ = lean_string_append(v___x_1725_, v_name_1719_);
lean_dec_ref(v_name_1719_);
v___x_1727_ = 205;
v___x_1728_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1___closed__0);
v___x_1729_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1729_, 0, v_args_1720_);
v___x_1730_ = lean_unsigned_to_nat(3u);
v___x_1731_ = lean_mk_empty_array_with_capacity(v___x_1730_);
v___x_1732_ = lean_array_push(v___x_1731_, v___x_1723_);
v___x_1733_ = lean_array_push(v___x_1732_, v___x_1724_);
v___x_1734_ = lean_array_push(v___x_1733_, v___x_1729_);
v___x_1735_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
v___x_1736_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1_spec__4(v___x_1726_, v___x_1727_, v___x_1728_, v___x_1735_, v___x_1722_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1___boxed(lean_object* v_o_1737_, lean_object* v_name_1738_, lean_object* v_args_1739_, lean_object* v___y_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1(v_o_1737_, v_name_1738_, v_args_1739_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__0(lean_object* v_x_1742_){
_start:
{
if (lean_obj_tag(v_x_1742_) == 0)
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_box(0);
return v___x_1743_;
}
else
{
lean_object* v_val_1744_; uint8_t v___x_1745_; 
v_val_1744_ = lean_ctor_get(v_x_1742_, 0);
v___x_1745_ = lean_unbox(v_val_1744_);
switch(v___x_1745_)
{
case 0:
{
lean_object* v___x_1746_; 
v___x_1746_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__1));
return v___x_1746_;
}
case 1:
{
lean_object* v___x_1747_; 
v___x_1747_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__3));
return v___x_1747_;
}
case 2:
{
lean_object* v___x_1748_; 
v___x_1748_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__5));
return v___x_1748_;
}
default: 
{
lean_object* v___x_1749_; 
v___x_1749_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueContentType___lam__0___closed__7));
return v___x_1749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__0___boxed(lean_object* v_x_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__0(v_x_1750_);
lean_dec(v_x_1750_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__1(lean_object* v_x_1752_){
_start:
{
if (lean_obj_tag(v_x_1752_) == 0)
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_box(0);
return v___x_1753_;
}
else
{
lean_object* v_val_1754_; lean_object* v___x_1755_; double v___x_1756_; 
v_val_1754_ = lean_ctor_get(v_x_1752_, 0);
v___x_1755_ = lean_alloc_ctor(3, 0, 8);
v___x_1756_ = lean_unbox_float(v_val_1754_);
lean_ctor_set_float(v___x_1755_, 0, v___x_1756_);
return v___x_1755_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__1___boxed(lean_object* v_x_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__1(v_x_1757_);
lean_dec(v_x_1757_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0(lean_object* v_x_1759_){
_start:
{
if (lean_obj_tag(v_x_1759_) == 0)
{
lean_object* v___x_1760_; 
v___x_1760_ = lean_box(0);
return v___x_1760_;
}
else
{
lean_object* v_val_1761_; lean_object* v_contentType_1762_; lean_object* v_delaySeconds_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1780_; 
v_val_1761_ = lean_ctor_get(v_x_1759_, 0);
lean_inc(v_val_1761_);
lean_dec_ref_known(v_x_1759_, 1);
v_contentType_1762_ = lean_ctor_get(v_val_1761_, 0);
v_delaySeconds_1763_ = lean_ctor_get(v_val_1761_, 1);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_val_1761_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1765_ = v_val_1761_;
v_isShared_1766_ = v_isSharedCheck_1780_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_delaySeconds_1763_);
lean_inc(v_contentType_1762_);
lean_dec(v_val_1761_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1780_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1770_; 
v___x_1767_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__0));
v___x_1768_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__0(v_contentType_1762_);
lean_dec(v_contentType_1762_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 1, v___x_1768_);
lean_ctor_set(v___x_1765_, 0, v___x_1767_);
v___x_1770_ = v___x_1765_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1767_);
lean_ctor_set(v_reuseFailAlloc_1779_, 1, v___x_1768_);
v___x_1770_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1771_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1));
v___x_1772_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__1(v_delaySeconds_1763_);
lean_dec(v_delaySeconds_1763_);
v___x_1773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1771_);
lean_ctor_set(v___x_1773_, 1, v___x_1772_);
v___x_1774_ = lean_unsigned_to_nat(2u);
v___x_1775_ = lean_mk_empty_array_with_capacity(v___x_1774_);
v___x_1776_ = lean_array_push(v___x_1775_, v___x_1770_);
v___x_1777_ = lean_array_push(v___x_1776_, v___x_1773_);
v___x_1778_ = l_Lasm_JS_Web_Support_fields(v___x_1777_);
lean_dec_ref(v___x_1777_);
return v___x_1778_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_send(lean_object* v_self_1782_, lean_object* v_message_1783_, lean_object* v_options_1784_){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1786_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Queue_send___closed__0));
v___x_1787_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0(v_options_1784_);
v___x_1788_ = lean_unsigned_to_nat(2u);
v___x_1789_ = lean_mk_empty_array_with_capacity(v___x_1788_);
v___x_1790_ = lean_array_push(v___x_1789_, v_message_1783_);
v___x_1791_ = lean_array_push(v___x_1790_, v___x_1787_);
v___x_1792_ = l_Lasm_JS_Web_Support_args(v___x_1791_);
v___x_1793_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_send_spec__1(v_self_1782_, v___x_1786_, v___x_1792_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_send___boxed(lean_object* v_self_1794_, lean_object* v_message_1795_, lean_object* v_options_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Lasm_JS_Cloudflare_Queue_send(v_self_1794_, v_message_1795_, v_options_1796_);
return v_res_1798_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__2(uint8_t v_await_1799_, uint64_t v_extra_1800_){
_start:
{
uint64_t v___x_1801_; uint64_t v___y_1803_; 
v___x_1801_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0);
if (v_await_1799_ == 0)
{
uint64_t v___x_1806_; 
v___x_1806_ = 0ULL;
v___y_1803_ = v___x_1806_;
goto v___jp_1802_;
}
else
{
uint64_t v___x_1807_; 
v___x_1807_ = 2ULL;
v___y_1803_ = v___x_1807_;
goto v___jp_1802_;
}
v___jp_1802_:
{
uint64_t v___x_1804_; uint64_t v___x_1805_; 
v___x_1804_ = lean_uint64_lor(v___x_1801_, v___y_1803_);
v___x_1805_ = lean_uint64_lor(v___x_1804_, v_extra_1800_);
return v___x_1805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__2___boxed(lean_object* v_await_1808_, lean_object* v_extra_1809_){
_start:
{
uint8_t v_await_boxed_1810_; uint64_t v_extra_boxed_1811_; uint64_t v_res_1812_; lean_object* v_r_1813_; 
v_await_boxed_1810_ = lean_unbox(v_await_1808_);
v_extra_boxed_1811_ = lean_unbox_uint64(v_extra_1809_);
lean_dec_ref(v_extra_1809_);
v_res_1812_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__2(v_await_boxed_1810_, v_extra_boxed_1811_);
v_r_1813_ = lean_box_uint64(v_res_1812_);
return v_r_1813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object* v_d_1816_, lean_object* v_key_1817_){
_start:
{
if (lean_obj_tag(v_d_1816_) == 8)
{
lean_object* v___x_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1870_; 
v___x_1818_ = l_Lasm_JS_Data_field(v_d_1816_, v_key_1817_);
v_isSharedCheck_1870_ = !lean_is_exclusive(v_d_1816_);
if (v_isSharedCheck_1870_ == 0)
{
lean_object* v_unused_1871_; 
v_unused_1871_ = lean_ctor_get(v_d_1816_, 0);
lean_dec(v_unused_1871_);
v___x_1820_ = v_d_1816_;
v_isShared_1821_ = v_isSharedCheck_1870_;
goto v_resetjp_1819_;
}
else
{
lean_dec(v_d_1816_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1870_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v_a_1823_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0));
lean_inc(v___x_1818_);
v___x_1849_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v___x_1818_, v___x_1848_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v___x_1849_, 1);
v_a_1823_ = v_a_1850_;
goto v___jp_1822_;
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v_a_1851_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1851_);
lean_dec_ref_known(v___x_1849_, 1);
v___x_1852_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1));
lean_inc(v___x_1818_);
v___x_1853_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v___x_1818_, v___x_1852_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; 
lean_dec(v_a_1851_);
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_a_1854_);
lean_dec_ref_known(v___x_1853_, 1);
v_a_1823_ = v_a_1854_;
goto v___jp_1822_;
}
else
{
lean_object* v_a_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v_a_1855_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_a_1855_);
lean_dec_ref_known(v___x_1853_, 1);
v___x_1856_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2));
lean_inc(v___x_1818_);
v___x_1857_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4(v___x_1818_, v___x_1856_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; 
lean_dec(v_a_1855_);
lean_dec(v_a_1851_);
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_a_1858_);
lean_dec_ref_known(v___x_1857_, 1);
v_a_1823_ = v_a_1858_;
goto v___jp_1822_;
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1869_; 
lean_del_object(v___x_1820_);
lean_dec(v___x_1818_);
v_a_1859_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1861_ = v___x_1857_;
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1857_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1863_; double v___x_1864_; double v___x_1865_; lean_object* v___x_1867_; 
v___x_1863_ = lean_alloc_ctor(0, 1, 16);
lean_ctor_set(v___x_1863_, 0, v_a_1859_);
v___x_1864_ = lean_unbox_float(v_a_1851_);
lean_dec(v_a_1851_);
lean_ctor_set_float(v___x_1863_, sizeof(void*)*1, v___x_1864_);
v___x_1865_ = lean_unbox_float(v_a_1855_);
lean_dec(v_a_1855_);
lean_ctor_set_float(v___x_1863_, sizeof(void*)*1 + 8, v___x_1865_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 0, v___x_1863_);
v___x_1867_ = v___x_1861_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v___x_1863_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
}
}
v___jp_1822_:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1824_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1825_ = lean_string_append(v___x_1824_, v_key_1817_);
v___x_1826_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_1827_ = lean_string_append(v___x_1825_, v___x_1826_);
v___x_1828_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics___closed__1));
v___x_1829_ = lean_string_append(v___x_1827_, v___x_1828_);
v___x_1830_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_1831_ = lean_string_append(v___x_1829_, v___x_1830_);
v___x_1832_ = l_Lasm_JS_Data_describe(v___x_1818_);
v___x_1833_ = lean_string_append(v___x_1831_, v___x_1832_);
lean_dec_ref(v___x_1832_);
v___x_1834_ = lean_string_utf8_byte_size(v_a_1823_);
v___x_1835_ = lean_unsigned_to_nat(0u);
v___x_1836_ = lean_nat_dec_eq(v___x_1834_, v___x_1835_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1843_; 
v___x_1837_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_1838_ = lean_string_append(v___x_1837_, v_a_1823_);
lean_dec_ref(v_a_1823_);
v___x_1839_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_1840_ = lean_string_append(v___x_1838_, v___x_1839_);
v___x_1841_ = lean_string_append(v___x_1833_, v___x_1840_);
lean_dec_ref(v___x_1840_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set_tag(v___x_1820_, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1841_);
v___x_1843_ = v___x_1820_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v___x_1841_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
else
{
lean_object* v___x_1846_; 
lean_dec_ref(v_a_1823_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set_tag(v___x_1820_, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1833_);
v___x_1846_ = v___x_1820_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___x_1833_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
}
else
{
lean_object* v___x_1872_; 
lean_dec(v_d_1816_);
v___x_1872_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6___closed__0));
return v___x_1872_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6___boxed(lean_object* v_d_1873_, lean_object* v_key_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6(v_d_1873_, v_key_1874_);
lean_dec_ref(v_key_1874_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5(lean_object* v_d_1876_, lean_object* v_key_1877_){
_start:
{
if (lean_obj_tag(v_d_1876_) == 8)
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1878_ = l_Lasm_JS_Data_field(v_d_1876_, v_key_1877_);
v___x_1879_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0));
lean_inc(v___x_1878_);
v___x_1880_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6(v___x_1878_, v___x_1879_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1909_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1883_ = v___x_1880_;
v_isShared_1884_ = v_isSharedCheck_1909_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1880_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1909_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; uint8_t v___x_1897_; 
v___x_1885_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1886_ = lean_string_append(v___x_1885_, v_key_1877_);
v___x_1887_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_1888_ = lean_string_append(v___x_1886_, v___x_1887_);
v___x_1889_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata___closed__1));
v___x_1890_ = lean_string_append(v___x_1888_, v___x_1889_);
v___x_1891_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_1892_ = lean_string_append(v___x_1890_, v___x_1891_);
v___x_1893_ = l_Lasm_JS_Data_describe(v___x_1878_);
v___x_1894_ = lean_string_append(v___x_1892_, v___x_1893_);
lean_dec_ref(v___x_1893_);
v___x_1895_ = lean_string_utf8_byte_size(v_a_1881_);
v___x_1896_ = lean_unsigned_to_nat(0u);
v___x_1897_ = lean_nat_dec_eq(v___x_1895_, v___x_1896_);
if (v___x_1897_ == 0)
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1904_; 
v___x_1898_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_1899_ = lean_string_append(v___x_1898_, v_a_1881_);
lean_dec(v_a_1881_);
v___x_1900_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_1901_ = lean_string_append(v___x_1899_, v___x_1900_);
v___x_1902_ = lean_string_append(v___x_1894_, v___x_1901_);
lean_dec_ref(v___x_1901_);
if (v_isShared_1884_ == 0)
{
lean_ctor_set(v___x_1883_, 0, v___x_1902_);
v___x_1904_ = v___x_1883_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
else
{
lean_object* v___x_1907_; 
lean_dec(v_a_1881_);
if (v_isShared_1884_ == 0)
{
lean_ctor_set(v___x_1883_, 0, v___x_1894_);
v___x_1907_ = v___x_1883_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v___x_1894_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec(v___x_1878_);
v_a_1910_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1880_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1880_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
else
{
lean_object* v___x_1918_; 
v___x_1918_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5_spec__6___closed__0));
return v___x_1918_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5___boxed(lean_object* v_d_1919_, lean_object* v_key_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5(v_d_1919_, v_key_1920_);
lean_dec_ref(v_key_1920_);
lean_dec(v_d_1919_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4(lean_object* v_context_1922_, lean_object* v_d_1923_){
_start:
{
lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1931_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___closed__0));
v___x_1932_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4_spec__5(v_d_1923_, v___x_1931_);
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v_a_1933_; lean_object* v_received_1935_; 
v_a_1933_ = lean_ctor_get(v___x_1932_, 0);
lean_inc(v_a_1933_);
lean_dec_ref_known(v___x_1932_, 1);
if (lean_obj_tag(v_d_1923_) == 9)
{
lean_object* v_value_1955_; lean_object* v_description_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; 
v_value_1955_ = lean_ctor_get(v_d_1923_, 0);
v_description_1956_ = lean_ctor_get(v_d_1923_, 1);
v___x_1957_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_1958_ = lean_string_dec_eq(v_description_1956_, v___x_1957_);
if (v___x_1958_ == 0)
{
goto v___jp_1953_;
}
else
{
lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1975_; 
lean_inc(v_value_1955_);
v_isSharedCheck_1975_ = !lean_is_exclusive(v_d_1923_);
if (v_isSharedCheck_1975_ == 0)
{
lean_object* v_unused_1976_; lean_object* v_unused_1977_; 
v_unused_1976_ = lean_ctor_get(v_d_1923_, 1);
lean_dec(v_unused_1976_);
v_unused_1977_ = lean_ctor_get(v_d_1923_, 0);
lean_dec(v_unused_1977_);
v___x_1960_ = v_d_1923_;
v_isShared_1961_ = v_isSharedCheck_1975_;
goto v_resetjp_1959_;
}
else
{
lean_dec(v_d_1923_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1975_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
uint32_t v___x_1962_; uint64_t v___x_1963_; lean_object* v___x_1965_; 
v___x_1962_ = 206;
v___x_1963_ = 0ULL;
lean_inc(v_value_1955_);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 1, v___x_1957_);
v___x_1965_ = v___x_1960_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_value_1955_);
lean_ctor_set(v_reuseFailAlloc_1974_, 1, v___x_1957_);
v___x_1965_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
uint32_t v___x_1966_; lean_object* v___x_1967_; 
v___x_1966_ = lasm_js_value_handle(v_value_1955_);
lean_dec(v_value_1955_);
v___x_1967_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1962_, v___x_1963_, v___x_1965_, v___x_1966_);
lean_dec_ref(v___x_1965_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; uint8_t v___x_1969_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref_known(v___x_1967_, 1);
v___x_1969_ = lean_string_validate_utf8(v_a_1968_);
if (v___x_1969_ == 0)
{
lean_object* v___x_1970_; lean_object* v___x_1971_; 
lean_dec(v_a_1968_);
v___x_1970_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8);
v___x_1971_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1970_);
v_received_1935_ = v___x_1971_;
goto v___jp_1934_;
}
else
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_string_from_utf8_unchecked(v_a_1968_);
v_received_1935_ = v___x_1972_;
goto v___jp_1934_;
}
}
else
{
lean_object* v___x_1973_; 
lean_dec_ref_known(v___x_1967_, 1);
v___x_1973_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9));
v_received_1935_ = v___x_1973_;
goto v___jp_1934_;
}
}
}
}
}
else
{
goto v___jp_1953_;
}
v___jp_1934_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; uint8_t v___x_1947_; 
v___x_1936_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0));
v___x_1937_ = lean_string_append(v___x_1936_, v_context_1922_);
v___x_1938_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1));
v___x_1939_ = lean_string_append(v___x_1937_, v___x_1938_);
v___x_1940_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse___closed__1));
v___x_1941_ = lean_string_append(v___x_1939_, v___x_1940_);
v___x_1942_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2));
v___x_1943_ = lean_string_append(v___x_1941_, v___x_1942_);
v___x_1944_ = lean_string_append(v___x_1943_, v_received_1935_);
lean_dec_ref(v_received_1935_);
v___x_1945_ = lean_string_utf8_byte_size(v_a_1933_);
v___x_1946_ = lean_unsigned_to_nat(0u);
v___x_1947_ = lean_nat_dec_eq(v___x_1945_, v___x_1946_);
if (v___x_1947_ == 0)
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1948_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_1949_ = lean_string_append(v___x_1948_, v_a_1933_);
lean_dec(v_a_1933_);
v___x_1950_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_1951_ = lean_string_append(v___x_1949_, v___x_1950_);
v___y_1926_ = v___x_1944_;
v___y_1927_ = v___x_1951_;
goto v___jp_1925_;
}
else
{
lean_object* v___x_1952_; 
lean_dec(v_a_1933_);
v___x_1952_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___y_1926_ = v___x_1944_;
v___y_1927_ = v___x_1952_;
goto v___jp_1925_;
}
}
v___jp_1953_:
{
lean_object* v___x_1954_; 
v___x_1954_ = l_Lasm_JS_Data_describe(v_d_1923_);
v_received_1935_ = v___x_1954_;
goto v___jp_1934_;
}
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
lean_dec(v_d_1923_);
v_a_1978_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v___x_1932_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1932_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
lean_ctor_set_tag(v___x_1980_, 0);
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
v___jp_1925_:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1928_ = lean_string_append(v___y_1926_, v___y_1927_);
lean_dec_ref(v___y_1927_);
v___x_1929_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
v___x_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
return v___x_1930_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4___boxed(lean_object* v_context_1986_, lean_object* v_d_1987_, lean_object* v_a_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4(v_context_1986_, v_d_1987_);
lean_dec_ref(v_context_1986_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__0(lean_object* v_context_1990_, lean_object* v_x_1991_){
_start:
{
lean_object* v_val_1994_; 
if (lean_obj_tag(v_x_1991_) == 0)
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2004_; 
v_a_1996_ = lean_ctor_get(v_x_1991_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v_x_1991_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1998_ = v_x_1991_;
v_isShared_1999_ = v_isSharedCheck_2004_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v_x_1991_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2004_;
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
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_a_1996_);
v___x_2001_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
lean_object* v___x_2002_; 
v___x_2002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2001_);
return v___x_2002_;
}
}
}
else
{
lean_object* v_a_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2018_; 
v_a_2005_ = lean_ctor_get(v_x_1991_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v_x_1991_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2007_ = v_x_1991_;
v_isShared_2008_ = v_isSharedCheck_2018_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_a_2005_);
lean_dec(v_x_1991_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2018_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2009_; 
v___x_2009_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3_spec__4(v_context_1990_, v_a_2005_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v___x_2012_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2010_);
lean_dec_ref_known(v___x_2009_, 1);
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 0, v_a_2010_);
v___x_2012_ = v___x_2007_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_a_2010_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
v_val_1994_ = v___x_2012_;
goto v___jp_1993_;
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; 
v_a_2014_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v___x_2009_, 1);
if (v_isShared_2008_ == 0)
{
lean_ctor_set_tag(v___x_2007_, 0);
lean_ctor_set(v___x_2007_, 0, v_a_2014_);
v___x_2016_ = v___x_2007_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2014_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
v_val_1994_ = v___x_2016_;
goto v___jp_1993_;
}
}
}
}
v___jp_1993_:
{
lean_object* v___x_1995_; 
v___x_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1995_, 0, v_val_1994_);
return v___x_1995_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__0___boxed(lean_object* v_context_2019_, lean_object* v_x_2020_, lean_object* v___y_2021_){
_start:
{
lean_object* v_res_2022_; 
v_res_2022_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__0(v_context_2019_, v_x_2020_);
lean_dec_ref(v_context_2019_);
return v_res_2022_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__9(lean_object* v_failurePrefix_2023_, uint32_t v_op_2024_, uint64_t v_flags_2025_, lean_object* v_payload_2026_, lean_object* v___f_2027_, lean_object* v___f_2028_, lean_object* v___f_2029_, lean_object* v_x_2030_){
_start:
{
if (lean_obj_tag(v_x_2030_) == 0)
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2040_; 
lean_dec_ref(v___f_2029_);
lean_dec_ref(v___f_2028_);
lean_dec_ref(v___f_2027_);
lean_dec(v_payload_2026_);
v_a_2032_ = lean_ctor_get(v_x_2030_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v_x_2030_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2034_ = v_x_2030_;
v_isShared_2035_ = v_isSharedCheck_2040_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v_x_2030_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2040_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2037_; 
if (v_isShared_2035_ == 0)
{
v___x_2037_ = v___x_2034_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_a_2032_);
v___x_2037_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
lean_object* v___x_2038_; 
v___x_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2037_);
return v___x_2038_;
}
}
}
else
{
lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2087_; 
v_a_2041_ = lean_ctor_get(v_x_2030_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_x_2030_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2043_ = v_x_2030_;
v_isShared_2044_ = v_isSharedCheck_2087_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v_x_2030_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2087_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; uint8_t v___x_2047_; 
v___x_2045_ = lean_string_utf8_byte_size(v_failurePrefix_2023_);
v___x_2046_ = lean_unsigned_to_nat(0u);
v___x_2047_ = lean_nat_dec_eq(v___x_2045_, v___x_2046_);
if (v___x_2047_ == 0)
{
lean_object* v___f_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___f_2052_; lean_object* v_val_2054_; lean_object* v___x_2059_; 
lean_dec_ref(v___f_2029_);
lean_inc(v_a_2041_);
v___f_2048_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2048_, 0, v_a_2041_);
v___x_2049_ = lean_box(v___x_2047_);
v___x_2050_ = lean_box_uint32(v_op_2024_);
v___x_2051_ = lean_box_uint64(v_flags_2025_);
lean_inc(v_payload_2026_);
v___f_2052_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2052_, 0, v___x_2046_);
lean_closure_set(v___f_2052_, 1, v___x_2049_);
lean_closure_set(v___f_2052_, 2, v___f_2048_);
lean_closure_set(v___f_2052_, 3, v_a_2041_);
lean_closure_set(v___f_2052_, 4, v___x_2050_);
lean_closure_set(v___f_2052_, 5, v___x_2051_);
lean_closure_set(v___f_2052_, 6, v_payload_2026_);
v___x_2059_ = l_Lasm_JS_Wire_encodeIO(v_payload_2026_);
lean_dec(v_payload_2026_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; lean_object* v___x_2062_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2060_);
lean_dec_ref_known(v___x_2059_, 1);
if (v_isShared_2044_ == 0)
{
lean_ctor_set(v___x_2043_, 0, v_a_2060_);
v___x_2062_ = v___x_2043_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_a_2060_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
v_val_2054_ = v___x_2062_;
goto v___jp_2053_;
}
}
else
{
lean_object* v_a_2064_; lean_object* v___x_2066_; 
v_a_2064_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2064_);
lean_dec_ref_known(v___x_2059_, 1);
if (v_isShared_2044_ == 0)
{
lean_ctor_set_tag(v___x_2043_, 0);
lean_ctor_set(v___x_2043_, 0, v_a_2064_);
v___x_2066_ = v___x_2043_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2064_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
v_val_2054_ = v___x_2066_;
goto v___jp_2053_;
}
}
v___jp_2053_:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v___x_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2055_, 0, v_val_2054_);
v___x_2056_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2046_, v___x_2047_, v___x_2055_, v___f_2052_);
v___x_2057_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2046_, v___x_2047_, v___x_2056_, v___f_2027_);
v___x_2058_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2046_, v___x_2047_, v___x_2057_, v___f_2028_);
return v___x_2058_;
}
}
else
{
lean_object* v___f_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___f_2071_; uint8_t v___x_2072_; lean_object* v_val_2074_; lean_object* v___x_2078_; 
lean_dec_ref(v___f_2028_);
lean_dec_ref(v___f_2027_);
lean_inc(v_a_2041_);
v___f_2068_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2068_, 0, v_a_2041_);
v___x_2069_ = lean_box_uint32(v_op_2024_);
v___x_2070_ = lean_box_uint64(v_flags_2025_);
lean_inc(v_payload_2026_);
v___f_2071_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2071_, 0, v___f_2068_);
lean_closure_set(v___f_2071_, 1, v_a_2041_);
lean_closure_set(v___f_2071_, 2, v___x_2069_);
lean_closure_set(v___f_2071_, 3, v___x_2070_);
lean_closure_set(v___f_2071_, 4, v_payload_2026_);
v___x_2072_ = 0;
v___x_2078_ = l_Lasm_JS_Wire_encodeIO(v_payload_2026_);
lean_dec(v_payload_2026_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v_a_2079_; lean_object* v___x_2081_; 
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
lean_inc(v_a_2079_);
lean_dec_ref_known(v___x_2078_, 1);
if (v_isShared_2044_ == 0)
{
lean_ctor_set(v___x_2043_, 0, v_a_2079_);
v___x_2081_ = v___x_2043_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2079_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
v_val_2074_ = v___x_2081_;
goto v___jp_2073_;
}
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; 
v_a_2083_ = lean_ctor_get(v___x_2078_, 0);
lean_inc(v_a_2083_);
lean_dec_ref_known(v___x_2078_, 1);
if (v_isShared_2044_ == 0)
{
lean_ctor_set_tag(v___x_2043_, 0);
lean_ctor_set(v___x_2043_, 0, v_a_2083_);
v___x_2085_ = v___x_2043_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2083_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
v_val_2074_ = v___x_2085_;
goto v___jp_2073_;
}
}
v___jp_2073_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2075_, 0, v_val_2074_);
v___x_2076_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2046_, v___x_2072_, v___x_2075_, v___f_2071_);
v___x_2077_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2046_, v___x_2072_, v___x_2076_, v___f_2029_);
return v___x_2077_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__9___boxed(lean_object* v_failurePrefix_2088_, lean_object* v_op_2089_, lean_object* v_flags_2090_, lean_object* v_payload_2091_, lean_object* v___f_2092_, lean_object* v___f_2093_, lean_object* v___f_2094_, lean_object* v_x_2095_, lean_object* v___y_2096_){
_start:
{
uint32_t v_op_boxed_2097_; uint64_t v_flags_boxed_2098_; lean_object* v_res_2099_; 
v_op_boxed_2097_ = lean_unbox_uint32(v_op_2089_);
lean_dec(v_op_2089_);
v_flags_boxed_2098_ = lean_unbox_uint64(v_flags_2090_);
lean_dec_ref(v_flags_2090_);
v_res_2099_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__9(v_failurePrefix_2088_, v_op_boxed_2097_, v_flags_boxed_2098_, v_payload_2091_, v___f_2092_, v___f_2093_, v___f_2094_, v_x_2095_);
lean_dec_ref(v_failurePrefix_2088_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__3(lean_object* v___f_2100_, lean_object* v_x_2101_){
_start:
{
if (lean_obj_tag(v_x_2101_) == 0)
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2111_; 
lean_dec_ref(v___f_2100_);
v_a_2103_ = lean_ctor_get(v_x_2101_, 0);
v_isSharedCheck_2111_ = !lean_is_exclusive(v_x_2101_);
if (v_isSharedCheck_2111_ == 0)
{
v___x_2105_ = v_x_2101_;
v_isShared_2106_ = v_isSharedCheck_2111_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v_x_2101_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2111_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
lean_object* v___x_2109_; 
v___x_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
return v___x_2109_;
}
}
}
else
{
lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2123_; 
v_isSharedCheck_2123_ = !lean_is_exclusive(v_x_2101_);
if (v_isSharedCheck_2123_ == 0)
{
lean_object* v_unused_2124_; 
v_unused_2124_ = lean_ctor_get(v_x_2101_, 0);
lean_dec(v_unused_2124_);
v___x_2113_ = v_x_2101_;
v_isShared_2114_ = v_isSharedCheck_2123_;
goto v_resetjp_2112_;
}
else
{
lean_dec(v_x_2101_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2123_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2115_; uint8_t v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2119_; 
v___x_2115_ = lean_unsigned_to_nat(0u);
v___x_2116_ = 0;
v___x_2117_ = lean_io_promise_new();
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v___x_2117_);
v___x_2119_ = v___x_2113_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v___x_2117_);
v___x_2119_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
v___x_2121_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2115_, v___x_2116_, v___x_2120_, v___f_2100_);
return v___x_2121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__3___boxed(lean_object* v___f_2125_, lean_object* v_x_2126_, lean_object* v___y_2127_){
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__3(v___f_2125_, v_x_2126_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__1(lean_object* v___f_2129_, lean_object* v_bytes_2130_){
_start:
{
lean_object* v___x_2132_; uint8_t v___x_2133_; lean_object* v_val_2135_; lean_object* v___x_2138_; 
v___x_2132_ = lean_unsigned_to_nat(0u);
v___x_2133_ = 0;
v___x_2138_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2130_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2146_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2141_ = v___x_2138_;
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2138_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2142_ == 0)
{
lean_ctor_set_tag(v___x_2141_, 1);
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
v_val_2135_ = v___x_2144_;
goto v___jp_2134_;
}
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
v_a_2147_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2138_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2138_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
lean_ctor_set_tag(v___x_2149_, 0);
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
v_val_2135_ = v___x_2152_;
goto v___jp_2134_;
}
}
}
v___jp_2134_:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; 
v___x_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2136_, 0, v_val_2135_);
v___x_2137_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2132_, v___x_2133_, v___x_2136_, v___f_2129_);
return v___x_2137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__1___boxed(lean_object* v___f_2155_, lean_object* v_bytes_2156_, lean_object* v___y_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__1(v___f_2155_, v_bytes_2156_);
lean_dec_ref(v_bytes_2156_);
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__2(lean_object* v___f_2159_, lean_object* v_x_2160_){
_start:
{
if (lean_obj_tag(v_x_2160_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2170_; 
lean_dec_ref(v___f_2159_);
v_a_2162_ = lean_ctor_get(v_x_2160_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v_x_2160_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2164_ = v_x_2160_;
v_isShared_2165_ = v_isSharedCheck_2170_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v_x_2160_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2170_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2168_; 
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
return v___x_2168_;
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2172_; 
v_a_2171_ = lean_ctor_get(v_x_2160_, 0);
lean_inc(v_a_2171_);
lean_dec_ref_known(v_x_2160_, 1);
v___x_2172_ = lean_apply_2(v___f_2159_, v_a_2171_, lean_box(0));
return v___x_2172_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__2___boxed(lean_object* v___f_2173_, lean_object* v_x_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__2(v___f_2173_, v_x_2174_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3(lean_object* v_context_2177_, uint32_t v_op_2178_, uint64_t v_flags_2179_, lean_object* v_payload_2180_, lean_object* v_failurePrefix_2181_){
_start:
{
lean_object* v___f_2183_; lean_object* v___f_2184_; lean_object* v___f_2185_; lean_object* v___f_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___f_2189_; lean_object* v___f_2190_; lean_object* v___x_2191_; uint8_t v___x_2192_; lean_object* v_val_2194_; lean_object* v___x_2197_; 
v___f_2183_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2183_, 0, v_context_2177_);
v___f_2184_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2184_, 0, v___f_2183_);
v___f_2185_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2185_, 0, v___f_2184_);
lean_inc_ref(v_failurePrefix_2181_);
v___f_2186_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2186_, 0, v_failurePrefix_2181_);
v___x_2187_ = lean_box_uint32(v_op_2178_);
v___x_2188_ = lean_box_uint64(v_flags_2179_);
lean_inc_ref(v___f_2185_);
v___f_2189_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__9___boxed), 9, 7);
lean_closure_set(v___f_2189_, 0, v_failurePrefix_2181_);
lean_closure_set(v___f_2189_, 1, v___x_2187_);
lean_closure_set(v___f_2189_, 2, v___x_2188_);
lean_closure_set(v___f_2189_, 3, v_payload_2180_);
lean_closure_set(v___f_2189_, 4, v___f_2186_);
lean_closure_set(v___f_2189_, 5, v___f_2185_);
lean_closure_set(v___f_2189_, 6, v___f_2185_);
v___f_2190_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2190_, 0, v___f_2189_);
v___x_2191_ = lean_unsigned_to_nat(0u);
v___x_2192_ = 0;
v___x_2197_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2197_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2197_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
lean_ctor_set_tag(v___x_2200_, 1);
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
v_val_2194_ = v___x_2203_;
goto v___jp_2193_;
}
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
v_a_2206_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2197_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2197_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
lean_ctor_set_tag(v___x_2208_, 0);
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
v_val_2194_ = v___x_2211_;
goto v___jp_2193_;
}
}
}
v___jp_2193_:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2195_, 0, v_val_2194_);
v___x_2196_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2191_, v___x_2192_, v___x_2195_, v___f_2190_);
return v___x_2196_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3___boxed(lean_object* v_context_2214_, lean_object* v_op_2215_, lean_object* v_flags_2216_, lean_object* v_payload_2217_, lean_object* v_failurePrefix_2218_, lean_object* v_a_2219_){
_start:
{
uint32_t v_op_boxed_2220_; uint64_t v_flags_boxed_2221_; lean_object* v_res_2222_; 
v_op_boxed_2220_ = lean_unbox_uint32(v_op_2215_);
lean_dec(v_op_2215_);
v_flags_boxed_2221_ = lean_unbox_uint64(v_flags_2216_);
lean_dec_ref(v_flags_2216_);
v_res_2222_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3(v_context_2214_, v_op_boxed_2220_, v_flags_boxed_2221_, v_payload_2217_, v_failurePrefix_2218_);
return v_res_2222_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2___closed__0(void){
_start:
{
uint64_t v___x_2223_; uint8_t v___x_2224_; uint64_t v___x_2225_; 
v___x_2223_ = 8ULL;
v___x_2224_ = 0;
v___x_2225_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__2(v___x_2224_, v___x_2223_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2(lean_object* v_o_2226_, lean_object* v_name_2227_, lean_object* v_args_2228_){
_start:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; uint32_t v___x_2235_; uint64_t v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2230_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_2231_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2231_, 0, v_o_2226_);
lean_ctor_set(v___x_2231_, 1, v___x_2230_);
lean_inc_ref(v_name_2227_);
v___x_2232_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2232_, 0, v_name_2227_);
v___x_2233_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__0));
v___x_2234_ = lean_string_append(v___x_2233_, v_name_2227_);
lean_dec_ref(v_name_2227_);
v___x_2235_ = 205;
v___x_2236_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2___closed__0);
v___x_2237_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2237_, 0, v_args_2228_);
v___x_2238_ = lean_unsigned_to_nat(3u);
v___x_2239_ = lean_mk_empty_array_with_capacity(v___x_2238_);
v___x_2240_ = lean_array_push(v___x_2239_, v___x_2231_);
v___x_2241_ = lean_array_push(v___x_2240_, v___x_2232_);
v___x_2242_ = lean_array_push(v___x_2241_, v___x_2237_);
v___x_2243_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2243_, 0, v___x_2242_);
v___x_2244_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2_spec__3(v___x_2234_, v___x_2235_, v___x_2236_, v___x_2243_, v___x_2230_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2___boxed(lean_object* v_o_2245_, lean_object* v_name_2246_, lean_object* v_args_2247_, lean_object* v___y_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2(v_o_2245_, v_name_2246_, v_args_2247_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__1(lean_object* v_x_2250_){
_start:
{
if (lean_obj_tag(v_x_2250_) == 0)
{
lean_object* v___x_2251_; 
v___x_2251_ = lean_box(0);
return v___x_2251_;
}
else
{
lean_object* v_val_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v_val_2252_ = lean_ctor_get(v_x_2250_, 0);
v___x_2253_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1));
v___x_2254_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__1(v_val_2252_);
v___x_2255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2253_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
v___x_2256_ = lean_unsigned_to_nat(1u);
v___x_2257_ = lean_mk_empty_array_with_capacity(v___x_2256_);
v___x_2258_ = lean_array_push(v___x_2257_, v___x_2255_);
v___x_2259_ = l_Lasm_JS_Web_Support_fields(v___x_2258_);
lean_dec_ref(v___x_2258_);
return v___x_2259_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__1___boxed(lean_object* v_x_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__1(v_x_2260_);
lean_dec(v_x_2260_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__0(size_t v_sz_2262_, size_t v_i_2263_, lean_object* v_bs_2264_){
_start:
{
uint8_t v___x_2265_; 
v___x_2265_ = lean_usize_dec_lt(v_i_2263_, v_sz_2262_);
if (v___x_2265_ == 0)
{
return v_bs_2264_;
}
else
{
lean_object* v_v_2266_; lean_object* v_body_2267_; lean_object* v_contentType_2268_; lean_object* v_delaySeconds_2269_; lean_object* v___x_2270_; lean_object* v_bs_x27_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; size_t v___x_2286_; size_t v___x_2287_; lean_object* v___x_2288_; 
v_v_2266_ = lean_array_uget_borrowed(v_bs_2264_, v_i_2263_);
v_body_2267_ = lean_ctor_get(v_v_2266_, 0);
lean_inc(v_body_2267_);
v_contentType_2268_ = lean_ctor_get(v_v_2266_, 1);
lean_inc(v_contentType_2268_);
v_delaySeconds_2269_ = lean_ctor_get(v_v_2266_, 2);
lean_inc(v_delaySeconds_2269_);
v___x_2270_ = lean_unsigned_to_nat(0u);
v_bs_x27_2271_ = lean_array_uset(v_bs_2264_, v_i_2263_, v___x_2270_);
v___x_2272_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___lam__0___closed__0));
v___x_2273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2272_);
lean_ctor_set(v___x_2273_, 1, v_body_2267_);
v___x_2274_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__0));
v___x_2275_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__0(v_contentType_2268_);
lean_dec(v_contentType_2268_);
v___x_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2274_);
lean_ctor_set(v___x_2276_, 1, v___x_2275_);
v___x_2277_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1));
v___x_2278_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__1(v_delaySeconds_2269_);
lean_dec(v_delaySeconds_2269_);
v___x_2279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2277_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
v___x_2280_ = lean_unsigned_to_nat(3u);
v___x_2281_ = lean_mk_empty_array_with_capacity(v___x_2280_);
v___x_2282_ = lean_array_push(v___x_2281_, v___x_2273_);
v___x_2283_ = lean_array_push(v___x_2282_, v___x_2276_);
v___x_2284_ = lean_array_push(v___x_2283_, v___x_2279_);
v___x_2285_ = l_Lasm_JS_Web_Support_fields(v___x_2284_);
lean_dec_ref(v___x_2284_);
v___x_2286_ = ((size_t)1ULL);
v___x_2287_ = lean_usize_add(v_i_2263_, v___x_2286_);
v___x_2288_ = lean_array_uset(v_bs_x27_2271_, v_i_2263_, v___x_2285_);
v_i_2263_ = v___x_2287_;
v_bs_2264_ = v___x_2288_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__0___boxed(lean_object* v_sz_2290_, lean_object* v_i_2291_, lean_object* v_bs_2292_){
_start:
{
size_t v_sz_boxed_2293_; size_t v_i_boxed_2294_; lean_object* v_res_2295_; 
v_sz_boxed_2293_ = lean_unbox_usize(v_sz_2290_);
lean_dec(v_sz_2290_);
v_i_boxed_2294_ = lean_unbox_usize(v_i_2291_);
lean_dec(v_i_2291_);
v_res_2295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__0(v_sz_boxed_2293_, v_i_boxed_2294_, v_bs_2292_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_sendBatch(lean_object* v_self_2297_, lean_object* v_messages_2298_, lean_object* v_options_2299_){
_start:
{
lean_object* v___x_2301_; size_t v_sz_2302_; size_t v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2301_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Queue_sendBatch___closed__0));
v_sz_2302_ = lean_array_size(v_messages_2298_);
v___x_2303_ = ((size_t)0ULL);
v___x_2304_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__0(v_sz_2302_, v___x_2303_, v_messages_2298_);
v___x_2305_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
v___x_2306_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__1(v_options_2299_);
v___x_2307_ = lean_unsigned_to_nat(2u);
v___x_2308_ = lean_mk_empty_array_with_capacity(v___x_2307_);
v___x_2309_ = lean_array_push(v___x_2308_, v___x_2305_);
v___x_2310_ = lean_array_push(v___x_2309_, v___x_2306_);
v___x_2311_ = l_Lasm_JS_Web_Support_args(v___x_2310_);
v___x_2312_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_sendBatch_spec__2(v_self_2297_, v___x_2301_, v___x_2311_);
return v___x_2312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Queue_sendBatch___boxed(lean_object* v_self_2313_, lean_object* v_messages_2314_, lean_object* v_options_2315_, lean_object* v_a_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lasm_JS_Cloudflare_Queue_sendBatch(v_self_2313_, v_messages_2314_, v_options_2315_);
lean_dec(v_options_2315_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1(lean_object* v_context_2319_, lean_object* v_d_2320_){
_start:
{
lean_object* v___y_2323_; lean_object* v___y_2324_; 
if (lean_obj_tag(v_d_2320_) == 4)
{
lean_object* v_s_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
v_s_2328_ = lean_ctor_get(v_d_2320_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v_d_2320_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2330_ = v_d_2320_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_s_2328_);
lean_dec(v_d_2320_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2331_ == 0)
{
lean_ctor_set_tag(v___x_2330_, 0);
v___x_2333_ = v___x_2330_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_s_2328_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
else
{
lean_object* v___x_2336_; lean_object* v_received_2338_; 
v___x_2336_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
if (lean_obj_tag(v_d_2320_) == 9)
{
lean_object* v_value_2352_; lean_object* v_description_2353_; uint8_t v___x_2354_; 
v_value_2352_ = lean_ctor_get(v_d_2320_, 0);
v_description_2353_ = lean_ctor_get(v_d_2320_, 1);
v___x_2354_ = lean_string_dec_eq(v_description_2353_, v___x_2336_);
if (v___x_2354_ == 0)
{
goto v___jp_2350_;
}
else
{
uint32_t v___x_2355_; uint64_t v___x_2356_; lean_object* v___x_2357_; uint32_t v___x_2358_; lean_object* v___x_2359_; 
lean_inc_n(v_value_2352_, 2);
lean_dec_ref_known(v_d_2320_, 2);
v___x_2355_ = 206;
v___x_2356_ = 0ULL;
v___x_2357_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2357_, 0, v_value_2352_);
lean_ctor_set(v___x_2357_, 1, v___x_2336_);
v___x_2358_ = lasm_js_value_handle(v_value_2352_);
lean_dec(v_value_2352_);
v___x_2359_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2355_, v___x_2356_, v___x_2357_, v___x_2358_);
lean_dec_ref_known(v___x_2357_, 2);
if (lean_obj_tag(v___x_2359_) == 0)
{
lean_object* v_a_2360_; uint8_t v___x_2361_; 
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_a_2360_);
lean_dec_ref_known(v___x_2359_, 1);
v___x_2361_ = lean_string_validate_utf8(v_a_2360_);
if (v___x_2361_ == 0)
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
lean_dec(v_a_2360_);
v___x_2362_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8);
v___x_2363_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2362_);
v_received_2338_ = v___x_2363_;
goto v___jp_2337_;
}
else
{
lean_object* v___x_2364_; 
v___x_2364_ = lean_string_from_utf8_unchecked(v_a_2360_);
v_received_2338_ = v___x_2364_;
goto v___jp_2337_;
}
}
else
{
lean_object* v___x_2365_; 
lean_dec_ref_known(v___x_2359_, 1);
v___x_2365_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9));
v_received_2338_ = v___x_2365_;
goto v___jp_2337_;
}
}
}
else
{
goto v___jp_2350_;
}
v___jp_2337_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; uint8_t v___x_2348_; 
v___x_2339_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0));
v___x_2340_ = lean_string_append(v___x_2339_, v_context_2319_);
v___x_2341_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1));
v___x_2342_ = lean_string_append(v___x_2340_, v___x_2341_);
v___x_2343_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1___closed__0));
v___x_2344_ = lean_string_append(v___x_2342_, v___x_2343_);
v___x_2345_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2));
v___x_2346_ = lean_string_append(v___x_2344_, v___x_2345_);
v___x_2347_ = lean_string_append(v___x_2346_, v_received_2338_);
lean_dec_ref(v_received_2338_);
v___x_2348_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; 
v___x_2349_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__6));
v___y_2323_ = v___x_2347_;
v___y_2324_ = v___x_2349_;
goto v___jp_2322_;
}
else
{
v___y_2323_ = v___x_2347_;
v___y_2324_ = v___x_2336_;
goto v___jp_2322_;
}
}
v___jp_2350_:
{
lean_object* v___x_2351_; 
v___x_2351_ = l_Lasm_JS_Data_describe(v_d_2320_);
v_received_2338_ = v___x_2351_;
goto v___jp_2337_;
}
}
v___jp_2322_:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2325_ = lean_string_append(v___y_2323_, v___y_2324_);
v___x_2326_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2325_);
v___x_2327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2326_);
return v___x_2327_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2366_, lean_object* v_d_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1(v_context_2366_, v_d_2367_);
lean_dec_ref(v_context_2366_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0(lean_object* v_context_2370_, lean_object* v_bytes_2371_){
_start:
{
lean_object* v___x_2373_; 
v___x_2373_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2371_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2375_; 
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
lean_inc(v_a_2374_);
lean_dec_ref_known(v___x_2373_, 1);
v___x_2375_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0_spec__1(v_context_2370_, v_a_2374_);
return v___x_2375_;
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
v_a_2376_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2373_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2373_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0___boxed(lean_object* v_context_2384_, lean_object* v_bytes_2385_, lean_object* v_a_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0(v_context_2384_, v_bytes_2385_);
lean_dec_ref(v_bytes_2385_);
lean_dec_ref(v_context_2384_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(lean_object* v_o_2389_, lean_object* v_key_2390_){
_start:
{
lean_object* v_k_2392_; lean_object* v___x_2393_; 
v_k_2392_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2392_, 0, v_key_2390_);
v___x_2393_ = l_Lasm_JS_Wire_encodeIO(v_k_2392_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_object* v_a_2394_; uint32_t v___x_2395_; uint32_t v___x_2396_; uint64_t v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v_a_2394_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_a_2394_);
lean_dec_ref_known(v___x_2393_, 1);
v___x_2395_ = 203;
v___x_2396_ = lasm_js_value_handle(v_o_2389_);
v___x_2397_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0);
v___x_2398_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_2399_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2399_, 0, v_o_2389_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
v___x_2400_ = lean_unsigned_to_nat(2u);
v___x_2401_ = lean_mk_empty_array_with_capacity(v___x_2400_);
lean_inc_ref(v_k_2392_);
v___x_2402_ = lean_array_push(v___x_2401_, v_k_2392_);
v___x_2403_ = lean_array_push(v___x_2402_, v___x_2399_);
v___x_2404_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2403_);
v___x_2405_ = lasm_js_call(v___x_2395_, v___x_2396_, v___x_2397_, v_a_2394_, v___x_2404_);
lean_dec_ref_known(v___x_2404_, 1);
lean_dec(v_a_2394_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2406_);
lean_dec_ref_known(v___x_2405_, 1);
v___x_2407_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0___closed__0));
v___x_2408_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2392_);
v___x_2409_ = lean_string_append(v___x_2407_, v___x_2408_);
lean_dec_ref(v___x_2408_);
v___x_2410_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0_spec__0(v___x_2409_, v_a_2406_);
lean_dec(v_a_2406_);
lean_dec_ref(v___x_2409_);
return v___x_2410_;
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_dec_ref_known(v_k_2392_, 1);
v_a_2411_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2405_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2405_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
lean_dec_ref_known(v_k_2392_, 1);
lean_dec(v_o_2389_);
v_a_2419_ = lean_ctor_get(v___x_2393_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2393_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2393_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2393_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0___boxed(lean_object* v_o_2427_, lean_object* v_key_2428_, lean_object* v_a_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(v_o_2427_, v_key_2428_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_id(lean_object* v_self_2432_){
_start:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2434_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Message_id___closed__0));
v___x_2435_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(v_self_2432_, v___x_2434_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_id___boxed(lean_object* v_self_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_Lasm_JS_Cloudflare_Message_id(v_self_2436_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0___redArg(lean_object* v_bytes_2439_){
_start:
{
lean_object* v___x_2441_; 
v___x_2441_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2439_);
if (lean_obj_tag(v___x_2441_) == 0)
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
v_a_2442_ = lean_ctor_get(v___x_2441_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2444_ = v___x_2441_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2441_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
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
return v___x_2447_;
}
}
}
else
{
return v___x_2441_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0___redArg___boxed(lean_object* v_bytes_2450_, lean_object* v_a_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0___redArg(v_bytes_2450_);
lean_dec_ref(v_bytes_2450_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(lean_object* v_o_2453_, lean_object* v_key_2454_){
_start:
{
lean_object* v_k_2456_; lean_object* v___x_2457_; 
v_k_2456_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2456_, 0, v_key_2454_);
v___x_2457_ = l_Lasm_JS_Wire_encodeIO(v_k_2456_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; uint32_t v___x_2459_; uint32_t v___x_2460_; uint64_t v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___x_2457_, 1);
v___x_2459_ = 203;
v___x_2460_ = lasm_js_value_handle(v_o_2453_);
v___x_2461_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0);
v___x_2462_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_2463_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2463_, 0, v_o_2453_);
lean_ctor_set(v___x_2463_, 1, v___x_2462_);
v___x_2464_ = lean_unsigned_to_nat(2u);
v___x_2465_ = lean_mk_empty_array_with_capacity(v___x_2464_);
v___x_2466_ = lean_array_push(v___x_2465_, v_k_2456_);
v___x_2467_ = lean_array_push(v___x_2466_, v___x_2463_);
v___x_2468_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
v___x_2469_ = lasm_js_call(v___x_2459_, v___x_2460_, v___x_2461_, v_a_2458_, v___x_2468_);
lean_dec_ref_known(v___x_2468_, 1);
lean_dec(v_a_2458_);
if (lean_obj_tag(v___x_2469_) == 0)
{
lean_object* v_a_2470_; lean_object* v___x_2471_; 
v_a_2470_ = lean_ctor_get(v___x_2469_, 0);
lean_inc(v_a_2470_);
lean_dec_ref_known(v___x_2469_, 1);
v___x_2471_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0___redArg(v_a_2470_);
lean_dec(v_a_2470_);
return v___x_2471_;
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
v_a_2472_ = lean_ctor_get(v___x_2469_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2469_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2469_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec_ref_known(v_k_2456_, 1);
lean_dec(v_o_2453_);
v_a_2480_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2457_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2457_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0___boxed(lean_object* v_o_2488_, lean_object* v_key_2489_, lean_object* v_a_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(v_o_2488_, v_key_2489_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_timestamp(lean_object* v_self_2493_){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Message_timestamp___closed__0));
v___x_2496_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(v_self_2493_, v___x_2495_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_timestamp___boxed(lean_object* v_self_2497_, lean_object* v_a_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lasm_JS_Cloudflare_Message_timestamp(v_self_2497_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1___redArg(lean_object* v_d_2500_){
_start:
{
lean_object* v___x_2502_; 
v___x_2502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2502_, 0, v_d_2500_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_d_2503_, lean_object* v_a_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1___redArg(v_d_2503_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1(lean_object* v_context_2506_, lean_object* v_d_2507_){
_start:
{
lean_object* v___x_2509_; 
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_d_2507_);
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2510_, lean_object* v_d_2511_, lean_object* v_a_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0_spec__1(v_context_2510_, v_d_2511_);
lean_dec_ref(v_context_2510_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0(lean_object* v_context_2514_, lean_object* v_bytes_2515_){
_start:
{
lean_object* v___x_2517_; 
v___x_2517_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0___redArg(v_bytes_2515_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0___boxed(lean_object* v_context_2518_, lean_object* v_bytes_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0_spec__0(v_context_2518_, v_bytes_2519_);
lean_dec_ref(v_bytes_2519_);
lean_dec_ref(v_context_2518_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_body(lean_object* v_self_2522_){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSMessageSendRequest___lam__0___closed__0));
v___x_2525_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(v_self_2522_, v___x_2524_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_body___boxed(lean_object* v_self_2526_, lean_object* v_a_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Lasm_JS_Cloudflare_Message_body(v_self_2526_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0_spec__1(lean_object* v_context_2529_, lean_object* v_d_2530_){
_start:
{
lean_object* v___y_2533_; lean_object* v___y_2534_; 
if (lean_obj_tag(v_d_2530_) == 3)
{
double v_n_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v_n_2538_ = lean_ctor_get_float(v_d_2530_, 0);
lean_dec_ref_known(v_d_2530_, 0);
v___x_2539_ = lean_box_float(v_n_2538_);
v___x_2540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2539_);
return v___x_2540_;
}
else
{
lean_object* v___x_2541_; lean_object* v_received_2543_; 
v___x_2541_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
if (lean_obj_tag(v_d_2530_) == 9)
{
lean_object* v_value_2557_; lean_object* v_description_2558_; uint8_t v___x_2559_; 
v_value_2557_ = lean_ctor_get(v_d_2530_, 0);
v_description_2558_ = lean_ctor_get(v_d_2530_, 1);
v___x_2559_ = lean_string_dec_eq(v_description_2558_, v___x_2541_);
if (v___x_2559_ == 0)
{
goto v___jp_2555_;
}
else
{
uint32_t v___x_2560_; uint64_t v___x_2561_; lean_object* v___x_2562_; uint32_t v___x_2563_; lean_object* v___x_2564_; 
lean_inc_n(v_value_2557_, 2);
lean_dec_ref_known(v_d_2530_, 2);
v___x_2560_ = 206;
v___x_2561_ = 0ULL;
v___x_2562_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2562_, 0, v_value_2557_);
lean_ctor_set(v___x_2562_, 1, v___x_2541_);
v___x_2563_ = lasm_js_value_handle(v_value_2557_);
lean_dec(v_value_2557_);
v___x_2564_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2560_, v___x_2561_, v___x_2562_, v___x_2563_);
lean_dec_ref_known(v___x_2562_, 2);
if (lean_obj_tag(v___x_2564_) == 0)
{
lean_object* v_a_2565_; uint8_t v___x_2566_; 
v_a_2565_ = lean_ctor_get(v___x_2564_, 0);
lean_inc(v_a_2565_);
lean_dec_ref_known(v___x_2564_, 1);
v___x_2566_ = lean_string_validate_utf8(v_a_2565_);
if (v___x_2566_ == 0)
{
lean_object* v___x_2567_; lean_object* v___x_2568_; 
lean_dec(v_a_2565_);
v___x_2567_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8);
v___x_2568_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2567_);
v_received_2543_ = v___x_2568_;
goto v___jp_2542_;
}
else
{
lean_object* v___x_2569_; 
v___x_2569_ = lean_string_from_utf8_unchecked(v_a_2565_);
v_received_2543_ = v___x_2569_;
goto v___jp_2542_;
}
}
else
{
lean_object* v___x_2570_; 
lean_dec_ref_known(v___x_2564_, 1);
v___x_2570_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9));
v_received_2543_ = v___x_2570_;
goto v___jp_2542_;
}
}
}
else
{
goto v___jp_2555_;
}
v___jp_2542_:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; uint8_t v___x_2553_; 
v___x_2544_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0));
v___x_2545_ = lean_string_append(v___x_2544_, v_context_2529_);
v___x_2546_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1));
v___x_2547_ = lean_string_append(v___x_2545_, v___x_2546_);
v___x_2548_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_2549_ = lean_string_append(v___x_2547_, v___x_2548_);
v___x_2550_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2));
v___x_2551_ = lean_string_append(v___x_2549_, v___x_2550_);
v___x_2552_ = lean_string_append(v___x_2551_, v_received_2543_);
lean_dec_ref(v_received_2543_);
v___x_2553_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__5);
if (v___x_2553_ == 0)
{
lean_object* v___x_2554_; 
v___x_2554_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__6));
v___y_2533_ = v___x_2552_;
v___y_2534_ = v___x_2554_;
goto v___jp_2532_;
}
else
{
v___y_2533_ = v___x_2552_;
v___y_2534_ = v___x_2541_;
goto v___jp_2532_;
}
}
v___jp_2555_:
{
lean_object* v___x_2556_; 
v___x_2556_ = l_Lasm_JS_Data_describe(v_d_2530_);
v_received_2543_ = v___x_2556_;
goto v___jp_2542_;
}
}
v___jp_2532_:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2535_ = lean_string_append(v___y_2533_, v___y_2534_);
v___x_2536_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
v___x_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2537_, 0, v___x_2536_);
return v___x_2537_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2571_, lean_object* v_d_2572_, lean_object* v_a_2573_){
_start:
{
lean_object* v_res_2574_; 
v_res_2574_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0_spec__1(v_context_2571_, v_d_2572_);
lean_dec_ref(v_context_2571_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0(lean_object* v_context_2575_, lean_object* v_bytes_2576_){
_start:
{
lean_object* v___x_2578_; 
v___x_2578_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2576_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v___x_2580_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref_known(v___x_2578_, 1);
v___x_2580_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0_spec__1(v_context_2575_, v_a_2579_);
return v___x_2580_;
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
v_a_2581_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2578_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2578_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0___boxed(lean_object* v_context_2589_, lean_object* v_bytes_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0(v_context_2589_, v_bytes_2590_);
lean_dec_ref(v_bytes_2590_);
lean_dec_ref(v_context_2589_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0(lean_object* v_o_2593_, lean_object* v_key_2594_){
_start:
{
lean_object* v_k_2596_; lean_object* v___x_2597_; 
v_k_2596_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2596_, 0, v_key_2594_);
v___x_2597_ = l_Lasm_JS_Wire_encodeIO(v_k_2596_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; uint32_t v___x_2599_; uint32_t v___x_2600_; uint64_t v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2597_, 1);
v___x_2599_ = 203;
v___x_2600_ = lasm_js_value_handle(v_o_2593_);
v___x_2601_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0);
v___x_2602_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_2603_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2603_, 0, v_o_2593_);
lean_ctor_set(v___x_2603_, 1, v___x_2602_);
v___x_2604_ = lean_unsigned_to_nat(2u);
v___x_2605_ = lean_mk_empty_array_with_capacity(v___x_2604_);
lean_inc_ref(v_k_2596_);
v___x_2606_ = lean_array_push(v___x_2605_, v_k_2596_);
v___x_2607_ = lean_array_push(v___x_2606_, v___x_2603_);
v___x_2608_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2607_);
v___x_2609_ = lasm_js_call(v___x_2599_, v___x_2600_, v___x_2601_, v_a_2598_, v___x_2608_);
lean_dec_ref_known(v___x_2608_, 1);
lean_dec(v_a_2598_);
if (lean_obj_tag(v___x_2609_) == 0)
{
lean_object* v_a_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v_a_2610_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_a_2610_);
lean_dec_ref_known(v___x_2609_, 1);
v___x_2611_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0___closed__0));
v___x_2612_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2596_);
v___x_2613_ = lean_string_append(v___x_2611_, v___x_2612_);
lean_dec_ref(v___x_2612_);
v___x_2614_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0_spec__0(v___x_2613_, v_a_2610_);
lean_dec(v_a_2610_);
lean_dec_ref(v___x_2613_);
return v___x_2614_;
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
lean_dec_ref_known(v_k_2596_, 1);
v_a_2615_ = lean_ctor_get(v___x_2609_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2609_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v___x_2609_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2609_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2620_; 
if (v_isShared_2618_ == 0)
{
v___x_2620_ = v___x_2617_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2615_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
else
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2630_; 
lean_dec_ref_known(v_k_2596_, 1);
lean_dec(v_o_2593_);
v_a_2623_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2625_ = v___x_2597_;
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2597_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2628_; 
if (v_isShared_2626_ == 0)
{
v___x_2628_ = v___x_2625_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_a_2623_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0___boxed(lean_object* v_o_2631_, lean_object* v_key_2632_, lean_object* v_a_2633_){
_start:
{
lean_object* v_res_2634_; 
v_res_2634_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0(v_o_2631_, v_key_2632_);
return v_res_2634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_attempts(lean_object* v_self_2636_){
_start:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2638_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Message_attempts___closed__0));
v___x_2639_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0(v_self_2636_, v___x_2638_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_attempts___boxed(lean_object* v_self_2640_, lean_object* v_a_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_Lasm_JS_Cloudflare_Message_attempts(v_self_2640_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Message_retry_spec__0(lean_object* v_x_2643_){
_start:
{
if (lean_obj_tag(v_x_2643_) == 0)
{
lean_object* v___x_2644_; 
v___x_2644_ = lean_box(0);
return v___x_2644_;
}
else
{
lean_object* v_val_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v_val_2645_ = lean_ctor_get(v_x_2643_, 0);
v___x_2646_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueueSendOptions___lam__0___closed__1));
v___x_2647_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Queue_send_spec__0_spec__1(v_val_2645_);
v___x_2648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2646_);
lean_ctor_set(v___x_2648_, 1, v___x_2647_);
v___x_2649_ = lean_unsigned_to_nat(1u);
v___x_2650_ = lean_mk_empty_array_with_capacity(v___x_2649_);
v___x_2651_ = lean_array_push(v___x_2650_, v___x_2648_);
v___x_2652_ = l_Lasm_JS_Web_Support_fields(v___x_2651_);
lean_dec_ref(v___x_2651_);
return v___x_2652_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Message_retry_spec__0___boxed(lean_object* v_x_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Message_retry_spec__0(v_x_2653_);
lean_dec(v_x_2653_);
return v_res_2654_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__1(uint8_t v_await_2655_, uint64_t v_extra_2656_){
_start:
{
uint64_t v___x_2657_; uint64_t v___y_2659_; 
v___x_2657_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0);
if (v_await_2655_ == 0)
{
uint64_t v___x_2662_; 
v___x_2662_ = 0ULL;
v___y_2659_ = v___x_2662_;
goto v___jp_2658_;
}
else
{
uint64_t v___x_2663_; 
v___x_2663_ = 2ULL;
v___y_2659_ = v___x_2663_;
goto v___jp_2658_;
}
v___jp_2658_:
{
uint64_t v___x_2660_; uint64_t v___x_2661_; 
v___x_2660_ = lean_uint64_lor(v___x_2657_, v___y_2659_);
v___x_2661_ = lean_uint64_lor(v___x_2660_, v_extra_2656_);
return v___x_2661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__1___boxed(lean_object* v_await_2664_, lean_object* v_extra_2665_){
_start:
{
uint8_t v_await_boxed_2666_; uint64_t v_extra_boxed_2667_; uint64_t v_res_2668_; lean_object* v_r_2669_; 
v_await_boxed_2666_ = lean_unbox(v_await_2664_);
v_extra_boxed_2667_ = lean_unbox_uint64(v_extra_2665_);
lean_dec_ref(v_extra_2665_);
v_res_2668_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__1(v_await_boxed_2666_, v_extra_boxed_2667_);
v_r_2669_ = lean_box_uint64(v_res_2668_);
return v_r_2669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3___redArg(){
_start:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = lean_box(0);
v___x_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_a_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3___redArg();
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2(lean_object* v_context_2675_, lean_object* v_bytes_2676_){
_start:
{
lean_object* v___x_2678_; 
v___x_2678_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2676_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v___x_2679_; 
lean_dec_ref_known(v___x_2678_, 1);
v___x_2679_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3___redArg();
return v___x_2679_;
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
v_a_2680_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2678_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2678_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2___boxed(lean_object* v_context_2688_, lean_object* v_bytes_2689_, lean_object* v_a_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2(v_context_2688_, v_bytes_2689_);
lean_dec_ref(v_bytes_2689_);
lean_dec_ref(v_context_2688_);
return v_res_2691_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2692_; uint8_t v___x_2693_; uint64_t v___x_2694_; 
v___x_2692_ = 8ULL;
v___x_2693_ = 0;
v___x_2694_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__1(v___x_2693_, v___x_2692_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(lean_object* v_o_2695_, lean_object* v_name_2696_, lean_object* v_args_2697_){
_start:
{
lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; uint64_t v___x_2702_; lean_object* v___x_2703_; 
v___x_2699_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_2700_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2700_, 0, v_o_2695_);
lean_ctor_set(v___x_2700_, 1, v___x_2699_);
lean_inc_ref(v_name_2696_);
v___x_2701_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2701_, 0, v_name_2696_);
v___x_2702_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1___closed__0);
v___x_2703_ = l_Lasm_JS_Value_invokeRaw(v___x_2700_, v___x_2701_, v_args_2697_, v___x_2702_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2704_);
lean_dec_ref_known(v___x_2703_, 1);
v___x_2705_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0___closed__0));
v___x_2706_ = lean_string_append(v___x_2705_, v_name_2696_);
lean_dec_ref(v_name_2696_);
v___x_2707_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2(v___x_2706_, v_a_2704_);
lean_dec(v_a_2704_);
lean_dec_ref(v___x_2706_);
return v___x_2707_;
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
lean_dec_ref(v_name_2696_);
v_a_2708_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2703_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2703_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1___boxed(lean_object* v_o_2716_, lean_object* v_name_2717_, lean_object* v_args_2718_, lean_object* v_a_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_o_2716_, v_name_2717_, v_args_2718_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_retry(lean_object* v_self_2722_, lean_object* v_options_2723_){
_start:
{
lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2725_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Message_retry___closed__0));
v___x_2726_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Message_retry_spec__0(v_options_2723_);
v___x_2727_ = lean_unsigned_to_nat(1u);
v___x_2728_ = lean_mk_empty_array_with_capacity(v___x_2727_);
v___x_2729_ = lean_array_push(v___x_2728_, v___x_2726_);
v___x_2730_ = l_Lasm_JS_Web_Support_args(v___x_2729_);
v___x_2731_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_2722_, v___x_2725_, v___x_2730_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_retry___boxed(lean_object* v_self_2732_, lean_object* v_options_2733_, lean_object* v_a_2734_){
_start:
{
lean_object* v_res_2735_; 
v_res_2735_ = l_Lasm_JS_Cloudflare_Message_retry(v_self_2732_, v_options_2733_);
lean_dec(v_options_2733_);
return v_res_2735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3(lean_object* v_context_2736_, lean_object* v_d_2737_){
_start:
{
lean_object* v___x_2739_; 
v___x_2739_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3___redArg();
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3___boxed(lean_object* v_context_2740_, lean_object* v_d_2741_, lean_object* v_a_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1_spec__2_spec__3(v_context_2740_, v_d_2741_);
lean_dec(v_d_2741_);
lean_dec_ref(v_context_2740_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_ack(lean_object* v_self_2745_){
_start:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v___x_2747_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Message_ack___closed__0));
v___x_2748_ = lean_obj_once(&l_Lasm_JS_Cloudflare_Queue_metrics___closed__1, &l_Lasm_JS_Cloudflare_Queue_metrics___closed__1_once, _init_l_Lasm_JS_Cloudflare_Queue_metrics___closed__1);
v___x_2749_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_2745_, v___x_2747_, v___x_2748_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Message_ack___boxed(lean_object* v_self_2750_, lean_object* v_a_2751_){
_start:
{
lean_object* v_res_2752_; 
v_res_2752_ = l_Lasm_JS_Cloudflare_Message_ack(v_self_2750_);
return v_res_2752_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2(size_t v_sz_2755_, size_t v_i_2756_, lean_object* v_bs_2757_){
_start:
{
uint8_t v___x_2758_; 
v___x_2758_ = lean_usize_dec_lt(v_i_2756_, v_sz_2755_);
if (v___x_2758_ == 0)
{
lean_object* v___x_2759_; 
v___x_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2759_, 0, v_bs_2757_);
return v___x_2759_;
}
else
{
lean_object* v_v_2760_; 
v_v_2760_ = lean_array_uget_borrowed(v_bs_2757_, v_i_2756_);
if (lean_obj_tag(v_v_2760_) == 9)
{
lean_object* v_value_2761_; lean_object* v___x_2762_; lean_object* v_bs_x27_2763_; size_t v___x_2764_; size_t v___x_2765_; lean_object* v___x_2766_; 
v_value_2761_ = lean_ctor_get(v_v_2760_, 0);
lean_inc(v_value_2761_);
v___x_2762_ = lean_unsigned_to_nat(0u);
v_bs_x27_2763_ = lean_array_uset(v_bs_2757_, v_i_2756_, v___x_2762_);
v___x_2764_ = ((size_t)1ULL);
v___x_2765_ = lean_usize_add(v_i_2756_, v___x_2764_);
v___x_2766_ = lean_array_uset(v_bs_x27_2763_, v_i_2756_, v_value_2761_);
v_i_2756_ = v___x_2765_;
v_bs_2757_ = v___x_2766_;
goto _start;
}
else
{
lean_object* v___x_2768_; 
lean_dec_ref(v_bs_2757_);
v___x_2768_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2___closed__0));
return v___x_2768_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2769_, lean_object* v_i_2770_, lean_object* v_bs_2771_){
_start:
{
size_t v_sz_boxed_2772_; size_t v_i_boxed_2773_; lean_object* v_res_2774_; 
v_sz_boxed_2772_ = lean_unbox_usize(v_sz_2769_);
lean_dec(v_sz_2769_);
v_i_boxed_2773_ = lean_unbox_usize(v_i_2770_);
lean_dec(v_i_2770_);
v_res_2774_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_2772_, v_i_boxed_2773_, v_bs_2771_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1(lean_object* v_context_2778_, lean_object* v_d_2779_){
_start:
{
lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2788_; lean_object* v_received_2789_; lean_object* v___y_2808_; lean_object* v_a_2811_; 
if (lean_obj_tag(v_d_2779_) == 7)
{
lean_object* v_items_2835_; size_t v_sz_2836_; size_t v___x_2837_; lean_object* v___x_2838_; 
v_items_2835_ = lean_ctor_get(v_d_2779_, 0);
v_sz_2836_ = lean_array_size(v_items_2835_);
v___x_2837_ = ((size_t)0ULL);
lean_inc_ref(v_items_2835_);
v___x_2838_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1_spec__2(v_sz_2836_, v___x_2837_, v_items_2835_);
if (lean_obj_tag(v___x_2838_) == 0)
{
lean_object* v_a_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; uint8_t v___x_2843_; 
v_a_2839_ = lean_ctor_get(v___x_2838_, 0);
lean_inc(v_a_2839_);
lean_dec_ref_known(v___x_2838_, 1);
v___x_2840_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__1));
v___x_2841_ = lean_string_utf8_byte_size(v_a_2839_);
v___x_2842_ = lean_unsigned_to_nat(0u);
v___x_2843_ = lean_nat_dec_eq(v___x_2841_, v___x_2842_);
if (v___x_2843_ == 0)
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2844_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__2));
v___x_2845_ = lean_string_append(v___x_2844_, v_a_2839_);
lean_dec(v_a_2839_);
v___x_2846_ = lean_string_append(v___x_2840_, v___x_2845_);
lean_dec_ref(v___x_2845_);
v_a_2811_ = v___x_2846_;
goto v___jp_2810_;
}
else
{
lean_dec(v_a_2839_);
v_a_2811_ = v___x_2840_;
goto v___jp_2810_;
}
}
else
{
if (lean_obj_tag(v___x_2838_) == 0)
{
lean_object* v_a_2847_; 
v_a_2847_ = lean_ctor_get(v___x_2838_, 0);
lean_inc(v_a_2847_);
lean_dec_ref_known(v___x_2838_, 1);
v_a_2811_ = v_a_2847_;
goto v___jp_2810_;
}
else
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec_ref_known(v_d_2779_, 1);
v_a_2848_ = lean_ctor_get(v___x_2838_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2838_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2838_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2838_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
lean_ctor_set_tag(v___x_2850_, 0);
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_a_2848_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
}
}
else
{
lean_object* v___x_2856_; 
v___x_2856_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v_a_2811_ = v___x_2856_;
goto v___jp_2810_;
}
v___jp_2781_:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v___x_2784_ = lean_string_append(v___y_2782_, v___y_2783_);
lean_dec_ref(v___y_2783_);
v___x_2785_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2784_);
v___x_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2785_);
return v___x_2786_;
}
v___jp_2787_:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; uint8_t v___x_2801_; 
v___x_2790_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0));
v___x_2791_ = lean_string_append(v___x_2790_, v_context_2778_);
v___x_2792_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1));
v___x_2793_ = lean_string_append(v___x_2791_, v___x_2792_);
v___x_2794_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___closed__0));
v___x_2795_ = lean_string_append(v___x_2793_, v___x_2794_);
v___x_2796_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2));
v___x_2797_ = lean_string_append(v___x_2795_, v___x_2796_);
v___x_2798_ = lean_string_append(v___x_2797_, v_received_2789_);
lean_dec_ref(v_received_2789_);
v___x_2799_ = lean_string_utf8_byte_size(v___y_2788_);
v___x_2800_ = lean_unsigned_to_nat(0u);
v___x_2801_ = lean_nat_dec_eq(v___x_2799_, v___x_2800_);
if (v___x_2801_ == 0)
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; 
v___x_2802_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_2803_ = lean_string_append(v___x_2802_, v___y_2788_);
lean_dec_ref(v___y_2788_);
v___x_2804_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_2805_ = lean_string_append(v___x_2803_, v___x_2804_);
v___y_2782_ = v___x_2798_;
v___y_2783_ = v___x_2805_;
goto v___jp_2781_;
}
else
{
lean_object* v___x_2806_; 
lean_dec_ref(v___y_2788_);
v___x_2806_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___y_2782_ = v___x_2798_;
v___y_2783_ = v___x_2806_;
goto v___jp_2781_;
}
}
v___jp_2807_:
{
lean_object* v___x_2809_; 
v___x_2809_ = l_Lasm_JS_Data_describe(v_d_2779_);
v___y_2788_ = v___y_2808_;
v_received_2789_ = v___x_2809_;
goto v___jp_2787_;
}
v___jp_2810_:
{
if (lean_obj_tag(v_d_2779_) == 9)
{
lean_object* v_value_2812_; lean_object* v_description_2813_; lean_object* v___x_2814_; uint8_t v___x_2815_; 
v_value_2812_ = lean_ctor_get(v_d_2779_, 0);
v_description_2813_ = lean_ctor_get(v_d_2779_, 1);
v___x_2814_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_2815_ = lean_string_dec_eq(v_description_2813_, v___x_2814_);
if (v___x_2815_ == 0)
{
v___y_2808_ = v_a_2811_;
goto v___jp_2807_;
}
else
{
lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2832_; 
lean_inc(v_value_2812_);
v_isSharedCheck_2832_ = !lean_is_exclusive(v_d_2779_);
if (v_isSharedCheck_2832_ == 0)
{
lean_object* v_unused_2833_; lean_object* v_unused_2834_; 
v_unused_2833_ = lean_ctor_get(v_d_2779_, 1);
lean_dec(v_unused_2833_);
v_unused_2834_ = lean_ctor_get(v_d_2779_, 0);
lean_dec(v_unused_2834_);
v___x_2817_ = v_d_2779_;
v_isShared_2818_ = v_isSharedCheck_2832_;
goto v_resetjp_2816_;
}
else
{
lean_dec(v_d_2779_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2832_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
uint32_t v___x_2819_; uint64_t v___x_2820_; lean_object* v___x_2822_; 
v___x_2819_ = 206;
v___x_2820_ = 0ULL;
lean_inc(v_value_2812_);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 1, v___x_2814_);
v___x_2822_ = v___x_2817_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_value_2812_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v___x_2814_);
v___x_2822_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
uint32_t v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = lasm_js_value_handle(v_value_2812_);
lean_dec(v_value_2812_);
v___x_2824_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2819_, v___x_2820_, v___x_2822_, v___x_2823_);
lean_dec_ref(v___x_2822_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; uint8_t v___x_2826_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v___x_2826_ = lean_string_validate_utf8(v_a_2825_);
if (v___x_2826_ == 0)
{
lean_object* v___x_2827_; lean_object* v___x_2828_; 
lean_dec(v_a_2825_);
v___x_2827_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8);
v___x_2828_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2827_);
v___y_2788_ = v_a_2811_;
v_received_2789_ = v___x_2828_;
goto v___jp_2787_;
}
else
{
lean_object* v___x_2829_; 
v___x_2829_ = lean_string_from_utf8_unchecked(v_a_2825_);
v___y_2788_ = v_a_2811_;
v_received_2789_ = v___x_2829_;
goto v___jp_2787_;
}
}
else
{
lean_object* v___x_2830_; 
lean_dec_ref_known(v___x_2824_, 1);
v___x_2830_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9));
v___y_2788_ = v_a_2811_;
v_received_2789_ = v___x_2830_;
goto v___jp_2787_;
}
}
}
}
}
else
{
v___y_2808_ = v_a_2811_;
goto v___jp_2807_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2857_, lean_object* v_d_2858_, lean_object* v_a_2859_){
_start:
{
lean_object* v_res_2860_; 
v_res_2860_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1(v_context_2857_, v_d_2858_);
lean_dec_ref(v_context_2857_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0(lean_object* v_context_2861_, lean_object* v_bytes_2862_){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2862_);
if (lean_obj_tag(v___x_2864_) == 0)
{
lean_object* v_a_2865_; lean_object* v___x_2866_; 
v_a_2865_ = lean_ctor_get(v___x_2864_, 0);
lean_inc(v_a_2865_);
lean_dec_ref_known(v___x_2864_, 1);
v___x_2866_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0_spec__1(v_context_2861_, v_a_2865_);
return v___x_2866_;
}
else
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
v_a_2867_ = lean_ctor_get(v___x_2864_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2864_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v___x_2864_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2864_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0___boxed(lean_object* v_context_2875_, lean_object* v_bytes_2876_, lean_object* v_a_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0(v_context_2875_, v_bytes_2876_);
lean_dec_ref(v_bytes_2876_);
lean_dec_ref(v_context_2875_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0(lean_object* v_o_2879_, lean_object* v_key_2880_){
_start:
{
lean_object* v_k_2882_; lean_object* v___x_2883_; 
v_k_2882_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2882_, 0, v_key_2880_);
v___x_2883_ = l_Lasm_JS_Wire_encodeIO(v_k_2882_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_a_2884_; uint32_t v___x_2885_; uint32_t v___x_2886_; uint64_t v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_a_2884_);
lean_dec_ref_known(v___x_2883_, 1);
v___x_2885_ = 203;
v___x_2886_ = lasm_js_value_handle(v_o_2879_);
v___x_2887_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0);
v___x_2888_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_2889_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2889_, 0, v_o_2879_);
lean_ctor_set(v___x_2889_, 1, v___x_2888_);
v___x_2890_ = lean_unsigned_to_nat(2u);
v___x_2891_ = lean_mk_empty_array_with_capacity(v___x_2890_);
lean_inc_ref(v_k_2882_);
v___x_2892_ = lean_array_push(v___x_2891_, v_k_2882_);
v___x_2893_ = lean_array_push(v___x_2892_, v___x_2889_);
v___x_2894_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
v___x_2895_ = lasm_js_call(v___x_2885_, v___x_2886_, v___x_2887_, v_a_2884_, v___x_2894_);
lean_dec_ref_known(v___x_2894_, 1);
lean_dec(v_a_2884_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v_a_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v_a_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2896_);
lean_dec_ref_known(v___x_2895_, 1);
v___x_2897_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0___closed__0));
v___x_2898_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2882_);
v___x_2899_ = lean_string_append(v___x_2897_, v___x_2898_);
lean_dec_ref(v___x_2898_);
v___x_2900_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0_spec__0(v___x_2899_, v_a_2896_);
lean_dec(v_a_2896_);
lean_dec_ref(v___x_2899_);
return v___x_2900_;
}
else
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2908_; 
lean_dec_ref_known(v_k_2882_, 1);
v_a_2901_ = lean_ctor_get(v___x_2895_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2895_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2903_ = v___x_2895_;
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2895_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2904_ == 0)
{
v___x_2906_ = v___x_2903_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2901_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
else
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2916_; 
lean_dec_ref_known(v_k_2882_, 1);
lean_dec(v_o_2879_);
v_a_2909_ = lean_ctor_get(v___x_2883_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2883_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2911_ = v___x_2883_;
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2883_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2914_; 
if (v_isShared_2912_ == 0)
{
v___x_2914_ = v___x_2911_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_a_2909_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0___boxed(lean_object* v_o_2917_, lean_object* v_key_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0(v_o_2917_, v_key_2918_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_messages(lean_object* v_self_2922_){
_start:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; 
v___x_2924_ = ((lean_object*)(l_Lasm_JS_Cloudflare_MessageBatch_messages___closed__0));
v___x_2925_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_messages_spec__0(v_self_2922_, v___x_2924_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_messages___boxed(lean_object* v_self_2926_, lean_object* v_a_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l_Lasm_JS_Cloudflare_MessageBatch_messages(v_self_2926_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_queue(lean_object* v_self_2930_){
_start:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2932_ = ((lean_object*)(l_Lasm_JS_Cloudflare_MessageBatch_queue___closed__0));
v___x_2933_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(v_self_2930_, v___x_2932_);
return v___x_2933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_queue___boxed(lean_object* v_self_2934_, lean_object* v_a_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l_Lasm_JS_Cloudflare_MessageBatch_queue(v_self_2934_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_2939_, lean_object* v_key_2940_){
_start:
{
if (lean_obj_tag(v_d_2939_) == 8)
{
lean_object* v___x_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2993_; 
v___x_2941_ = l_Lasm_JS_Data_field(v_d_2939_, v_key_2940_);
v_isSharedCheck_2993_ = !lean_is_exclusive(v_d_2939_);
if (v_isSharedCheck_2993_ == 0)
{
lean_object* v_unused_2994_; 
v_unused_2994_ = lean_ctor_get(v_d_2939_, 0);
lean_dec(v_unused_2994_);
v___x_2943_ = v_d_2939_;
v_isShared_2944_ = v_isSharedCheck_2993_;
goto v_resetjp_2942_;
}
else
{
lean_dec(v_d_2939_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2993_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v_a_2946_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__0));
lean_inc(v___x_2941_);
v___x_2972_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v___x_2941_, v___x_2971_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref_known(v___x_2972_, 1);
v_a_2946_ = v_a_2973_;
goto v___jp_2945_;
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; 
v_a_2974_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___x_2972_, 1);
v___x_2975_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__1));
lean_inc(v___x_2941_);
v___x_2976_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v___x_2941_, v___x_2975_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v_a_2977_; 
lean_dec(v_a_2974_);
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_a_2977_);
lean_dec_ref_known(v___x_2976_, 1);
v_a_2946_ = v_a_2977_;
goto v___jp_2945_;
}
else
{
lean_object* v_a_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v_a_2978_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_a_2978_);
lean_dec_ref_known(v___x_2976_, 1);
v___x_2979_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics___lam__0___closed__2));
lean_inc(v___x_2941_);
v___x_2980_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__4(v___x_2941_, v___x_2979_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; 
lean_dec(v_a_2978_);
lean_dec(v_a_2974_);
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
lean_inc(v_a_2981_);
lean_dec_ref_known(v___x_2980_, 1);
v_a_2946_ = v_a_2981_;
goto v___jp_2945_;
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2992_; 
lean_del_object(v___x_2943_);
lean_dec(v___x_2941_);
v_a_2982_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2984_ = v___x_2980_;
v_isShared_2985_ = v_isSharedCheck_2992_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2980_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2992_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2986_; double v___x_2987_; double v___x_2988_; lean_object* v___x_2990_; 
v___x_2986_ = lean_alloc_ctor(0, 1, 16);
lean_ctor_set(v___x_2986_, 0, v_a_2982_);
v___x_2987_ = lean_unbox_float(v_a_2974_);
lean_dec(v_a_2974_);
lean_ctor_set_float(v___x_2986_, sizeof(void*)*1, v___x_2987_);
v___x_2988_ = lean_unbox_float(v_a_2978_);
lean_dec(v_a_2978_);
lean_ctor_set_float(v___x_2986_, sizeof(void*)*1 + 8, v___x_2988_);
if (v_isShared_2985_ == 0)
{
lean_ctor_set(v___x_2984_, 0, v___x_2986_);
v___x_2990_ = v___x_2984_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2986_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
}
v___jp_2945_:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; 
v___x_2947_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_2948_ = lean_string_append(v___x_2947_, v_key_2940_);
v___x_2949_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_2950_ = lean_string_append(v___x_2948_, v___x_2949_);
v___x_2951_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics___closed__1));
v___x_2952_ = lean_string_append(v___x_2950_, v___x_2951_);
v___x_2953_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_2954_ = lean_string_append(v___x_2952_, v___x_2953_);
v___x_2955_ = l_Lasm_JS_Data_describe(v___x_2941_);
v___x_2956_ = lean_string_append(v___x_2954_, v___x_2955_);
lean_dec_ref(v___x_2955_);
v___x_2957_ = lean_string_utf8_byte_size(v_a_2946_);
v___x_2958_ = lean_unsigned_to_nat(0u);
v___x_2959_ = lean_nat_dec_eq(v___x_2957_, v___x_2958_);
if (v___x_2959_ == 0)
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2966_; 
v___x_2960_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_2961_ = lean_string_append(v___x_2960_, v_a_2946_);
lean_dec_ref(v_a_2946_);
v___x_2962_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_2963_ = lean_string_append(v___x_2961_, v___x_2962_);
v___x_2964_ = lean_string_append(v___x_2956_, v___x_2963_);
lean_dec_ref(v___x_2963_);
if (v_isShared_2944_ == 0)
{
lean_ctor_set_tag(v___x_2943_, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2964_);
v___x_2966_ = v___x_2943_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v___x_2964_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
else
{
lean_object* v___x_2969_; 
lean_dec_ref(v_a_2946_);
if (v_isShared_2944_ == 0)
{
lean_ctor_set_tag(v___x_2943_, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2956_);
v___x_2969_ = v___x_2943_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v___x_2956_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
}
else
{
lean_object* v___x_2995_; 
lean_dec(v_d_2939_);
v___x_2995_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2___closed__0));
return v___x_2995_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_2996_, lean_object* v_key_2997_){
_start:
{
lean_object* v_res_2998_; 
v_res_2998_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2(v_d_2996_, v_key_2997_);
lean_dec_ref(v_key_2997_);
return v_res_2998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1(lean_object* v_context_2999_, lean_object* v_d_3000_){
_start:
{
lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___x_3008_; lean_object* v___x_3009_; 
v___x_3008_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata___lam__0___closed__0));
lean_inc(v_d_3000_);
v___x_3009_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1_spec__2(v_d_3000_, v___x_3008_);
if (lean_obj_tag(v___x_3009_) == 0)
{
lean_object* v_a_3010_; lean_object* v_received_3012_; 
v_a_3010_ = lean_ctor_get(v___x_3009_, 0);
lean_inc(v_a_3010_);
lean_dec_ref_known(v___x_3009_, 1);
if (lean_obj_tag(v_d_3000_) == 9)
{
lean_object* v_value_3032_; lean_object* v_description_3033_; lean_object* v___x_3034_; uint8_t v___x_3035_; 
v_value_3032_ = lean_ctor_get(v_d_3000_, 0);
v_description_3033_ = lean_ctor_get(v_d_3000_, 1);
v___x_3034_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_3035_ = lean_string_dec_eq(v_description_3033_, v___x_3034_);
if (v___x_3035_ == 0)
{
goto v___jp_3030_;
}
else
{
lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3052_; 
lean_inc(v_value_3032_);
v_isSharedCheck_3052_ = !lean_is_exclusive(v_d_3000_);
if (v_isSharedCheck_3052_ == 0)
{
lean_object* v_unused_3053_; lean_object* v_unused_3054_; 
v_unused_3053_ = lean_ctor_get(v_d_3000_, 1);
lean_dec(v_unused_3053_);
v_unused_3054_ = lean_ctor_get(v_d_3000_, 0);
lean_dec(v_unused_3054_);
v___x_3037_ = v_d_3000_;
v_isShared_3038_ = v_isSharedCheck_3052_;
goto v_resetjp_3036_;
}
else
{
lean_dec(v_d_3000_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3052_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
uint32_t v___x_3039_; uint64_t v___x_3040_; lean_object* v___x_3042_; 
v___x_3039_ = 206;
v___x_3040_ = 0ULL;
lean_inc(v_value_3032_);
if (v_isShared_3038_ == 0)
{
lean_ctor_set(v___x_3037_, 1, v___x_3034_);
v___x_3042_ = v___x_3037_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_value_3032_);
lean_ctor_set(v_reuseFailAlloc_3051_, 1, v___x_3034_);
v___x_3042_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
uint32_t v___x_3043_; lean_object* v___x_3044_; 
v___x_3043_ = lasm_js_value_handle(v_value_3032_);
lean_dec(v_value_3032_);
v___x_3044_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3039_, v___x_3040_, v___x_3042_, v___x_3043_);
lean_dec_ref(v___x_3042_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; uint8_t v___x_3046_; 
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
lean_inc(v_a_3045_);
lean_dec_ref_known(v___x_3044_, 1);
v___x_3046_ = lean_string_validate_utf8(v_a_3045_);
if (v___x_3046_ == 0)
{
lean_object* v___x_3047_; lean_object* v___x_3048_; 
lean_dec(v_a_3045_);
v___x_3047_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__8);
v___x_3048_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3047_);
v_received_3012_ = v___x_3048_;
goto v___jp_3011_;
}
else
{
lean_object* v___x_3049_; 
v___x_3049_ = lean_string_from_utf8_unchecked(v_a_3045_);
v_received_3012_ = v___x_3049_;
goto v___jp_3011_;
}
}
else
{
lean_object* v___x_3050_; 
lean_dec_ref_known(v___x_3044_, 1);
v___x_3050_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__9));
v_received_3012_ = v___x_3050_;
goto v___jp_3011_;
}
}
}
}
}
else
{
goto v___jp_3030_;
}
v___jp_3011_:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; uint8_t v___x_3024_; 
v___x_3013_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__0));
v___x_3014_ = lean_string_append(v___x_3013_, v_context_2999_);
v___x_3015_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__1));
v___x_3016_ = lean_string_append(v___x_3014_, v___x_3015_);
v___x_3017_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata___closed__1));
v___x_3018_ = lean_string_append(v___x_3016_, v___x_3017_);
v___x_3019_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__2));
v___x_3020_ = lean_string_append(v___x_3018_, v___x_3019_);
v___x_3021_ = lean_string_append(v___x_3020_, v_received_3012_);
lean_dec_ref(v_received_3012_);
v___x_3022_ = lean_string_utf8_byte_size(v_a_3010_);
v___x_3023_ = lean_unsigned_to_nat(0u);
v___x_3024_ = lean_nat_dec_eq(v___x_3022_, v___x_3023_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3025_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__3));
v___x_3026_ = lean_string_append(v___x_3025_, v_a_3010_);
lean_dec(v_a_3010_);
v___x_3027_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2___closed__4));
v___x_3028_ = lean_string_append(v___x_3026_, v___x_3027_);
v___y_3003_ = v___x_3021_;
v___y_3004_ = v___x_3028_;
goto v___jp_3002_;
}
else
{
lean_object* v___x_3029_; 
lean_dec(v_a_3010_);
v___x_3029_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___y_3003_ = v___x_3021_;
v___y_3004_ = v___x_3029_;
goto v___jp_3002_;
}
}
v___jp_3030_:
{
lean_object* v___x_3031_; 
v___x_3031_ = l_Lasm_JS_Data_describe(v_d_3000_);
v_received_3012_ = v___x_3031_;
goto v___jp_3011_;
}
}
else
{
lean_object* v_a_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3062_; 
lean_dec(v_d_3000_);
v_a_3055_ = lean_ctor_get(v___x_3009_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3057_ = v___x_3009_;
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_a_3055_);
lean_dec(v___x_3009_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
lean_ctor_set_tag(v___x_3057_, 0);
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_a_3055_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
v___jp_3002_:
{
lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3005_ = lean_string_append(v___y_3003_, v___y_3004_);
lean_dec_ref(v___y_3004_);
v___x_3006_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3005_);
v___x_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
return v___x_3007_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3063_, lean_object* v_d_3064_, lean_object* v_a_3065_){
_start:
{
lean_object* v_res_3066_; 
v_res_3066_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1(v_context_3063_, v_d_3064_);
lean_dec_ref(v_context_3063_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0(lean_object* v_context_3067_, lean_object* v_bytes_3068_){
_start:
{
lean_object* v___x_3070_; 
v___x_3070_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3068_);
if (lean_obj_tag(v___x_3070_) == 0)
{
lean_object* v_a_3071_; lean_object* v___x_3072_; 
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
lean_inc(v_a_3071_);
lean_dec_ref_known(v___x_3070_, 1);
v___x_3072_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0_spec__1(v_context_3067_, v_a_3071_);
return v___x_3072_;
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
v_a_3073_ = lean_ctor_get(v___x_3070_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_3070_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_3070_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0___boxed(lean_object* v_context_3081_, lean_object* v_bytes_3082_, lean_object* v_a_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0(v_context_3081_, v_bytes_3082_);
lean_dec_ref(v_bytes_3082_);
lean_dec_ref(v_context_3081_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0(lean_object* v_o_3085_, lean_object* v_key_3086_){
_start:
{
lean_object* v_k_3088_; lean_object* v___x_3089_; 
v_k_3088_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3088_, 0, v_key_3086_);
v___x_3089_ = l_Lasm_JS_Wire_encodeIO(v_k_3088_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; uint32_t v___x_3091_; uint32_t v___x_3092_; uint64_t v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3089_, 1);
v___x_3091_ = 203;
v___x_3092_ = lasm_js_value_handle(v_o_3085_);
v___x_3093_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__0___closed__0);
v___x_3094_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSQueue___lam__0___closed__0));
v___x_3095_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3095_, 0, v_o_3085_);
lean_ctor_set(v___x_3095_, 1, v___x_3094_);
v___x_3096_ = lean_unsigned_to_nat(2u);
v___x_3097_ = lean_mk_empty_array_with_capacity(v___x_3096_);
lean_inc_ref(v_k_3088_);
v___x_3098_ = lean_array_push(v___x_3097_, v_k_3088_);
v___x_3099_ = lean_array_push(v___x_3098_, v___x_3095_);
v___x_3100_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3099_);
v___x_3101_ = lasm_js_call(v___x_3091_, v___x_3092_, v___x_3093_, v_a_3090_, v___x_3100_);
lean_dec_ref_known(v___x_3100_, 1);
lean_dec(v_a_3090_);
if (lean_obj_tag(v___x_3101_) == 0)
{
lean_object* v_a_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref_known(v___x_3101_, 1);
v___x_3103_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0___closed__0));
v___x_3104_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3088_);
v___x_3105_ = lean_string_append(v___x_3103_, v___x_3104_);
lean_dec_ref(v___x_3104_);
v___x_3106_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0_spec__0(v___x_3105_, v_a_3102_);
lean_dec(v_a_3102_);
lean_dec_ref(v___x_3105_);
return v___x_3106_;
}
else
{
lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
lean_dec_ref_known(v_k_3088_, 1);
v_a_3107_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3109_ = v___x_3101_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_dec(v___x_3101_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3107_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
else
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3122_; 
lean_dec_ref_known(v_k_3088_, 1);
lean_dec(v_o_3085_);
v_a_3115_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3117_ = v___x_3089_;
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_3089_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3120_; 
if (v_isShared_3118_ == 0)
{
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3115_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0___boxed(lean_object* v_o_3123_, lean_object* v_key_3124_, lean_object* v_a_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0(v_o_3123_, v_key_3124_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_metadata(lean_object* v_self_3127_){
_start:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3129_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse___lam__0___closed__0));
v___x_3130_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_MessageBatch_metadata_spec__0(v_self_3127_, v___x_3129_);
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_metadata___boxed(lean_object* v_self_3131_, lean_object* v_a_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lasm_JS_Cloudflare_MessageBatch_metadata(v_self_3131_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_retryAll(lean_object* v_self_3135_, lean_object* v_options_3136_){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3138_ = ((lean_object*)(l_Lasm_JS_Cloudflare_MessageBatch_retryAll___closed__0));
v___x_3139_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Message_retry_spec__0(v_options_3136_);
v___x_3140_ = lean_unsigned_to_nat(1u);
v___x_3141_ = lean_mk_empty_array_with_capacity(v___x_3140_);
v___x_3142_ = lean_array_push(v___x_3141_, v___x_3139_);
v___x_3143_ = l_Lasm_JS_Web_Support_args(v___x_3142_);
v___x_3144_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_3135_, v___x_3138_, v___x_3143_);
return v___x_3144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_retryAll___boxed(lean_object* v_self_3145_, lean_object* v_options_3146_, lean_object* v_a_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Lasm_JS_Cloudflare_MessageBatch_retryAll(v_self_3145_, v_options_3146_);
lean_dec(v_options_3146_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_ackAll(lean_object* v_self_3150_){
_start:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v___x_3152_ = ((lean_object*)(l_Lasm_JS_Cloudflare_MessageBatch_ackAll___closed__0));
v___x_3153_ = lean_obj_once(&l_Lasm_JS_Cloudflare_Queue_metrics___closed__1, &l_Lasm_JS_Cloudflare_Queue_metrics___closed__1_once, _init_l_Lasm_JS_Cloudflare_Queue_metrics___closed__1);
v___x_3154_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_3150_, v___x_3152_, v___x_3153_);
return v___x_3154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_MessageBatch_ackAll___boxed(lean_object* v_self_3155_, lean_object* v_a_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l_Lasm_JS_Cloudflare_MessageBatch_ackAll(v_self_3155_);
return v_res_3157_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Cloudflare_Queues(uint8_t builtin) {
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
res = initialize_Lasm_JS_Cloudflare_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Cloudflare_instInhabitedQueueContentType_default = _init_l_Lasm_JS_Cloudflare_instInhabitedQueueContentType_default();
l_Lasm_JS_Cloudflare_instInhabitedQueueContentType = _init_l_Lasm_JS_Cloudflare_instInhabitedQueueContentType();
l_Lasm_JS_Cloudflare_instFromJSQueueMetrics = _init_l_Lasm_JS_Cloudflare_instFromJSQueueMetrics();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSQueueMetrics);
l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics = _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetrics);
l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata = _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSQueueSendMetadata);
l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse = _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSQueueSendResponse);
l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics = _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetrics);
l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata = _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchMetadata);
l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse = _init_l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSQueueSendBatchResponse);
l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics = _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetrics);
l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata = _init_l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSMessageBatchMetadata);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
