// Lean compiler output
// Module: Lasm.Web.Crypto
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Lasm.JS.Meta
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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t l_Char_ofNat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_byte_array_uget(lean_object*, size_t);
uint8_t lean_uint8_shift_right(uint8_t, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_uint8_mod(uint8_t, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__10_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__11;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__12 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_randomBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "randomBytes"};
static const lean_object* l_Lasm_Web_Raw_randomBytes___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_randomBytes___closed__0_value;
static const lean_string_object l_Lasm_Web_Raw_randomBytes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_Raw_randomBytes___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_randomBytes___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Raw_randomBytes___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_randomBytes___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_randomBytes___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_randomBytes___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_randomBytes___closed__2 = (const lean_object*)&l_Lasm_Web_Raw_randomBytes___closed__2_value;
static const lean_array_object l_Lasm_Web_Raw_randomBytes___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_Raw_randomBytes___closed__3 = (const lean_object*)&l_Lasm_Web_Raw_randomBytes___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomBytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomBytes___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_randomUUID___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "randomUUID"};
static const lean_object* l_Lasm_Web_Raw_randomUUID___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_randomUUID___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_randomUUID___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_randomUUID___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_randomBytes___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_randomUUID___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_randomUUID___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_randomUUID___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomUUID();
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomUUID___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_digest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "digest"};
static const lean_object* l_Lasm_Web_Raw_digest___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_digest___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_digest___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_digest___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_randomBytes___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_digest___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_digest___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_digest___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_digest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_digest___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomBytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomUUID();
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomUUID___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_digest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_digest___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Crypto_sha256___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SHA-256"};
static const lean_object* l_Lasm_Web_Crypto_sha256___closed__0 = (const lean_object*)&l_Lasm_Web_Crypto_sha256___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_sha256(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_sha256___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_hex(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_hex___boxed(lean_object*);
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
v___x_7_ = lean_string_utf8_byte_size(v___x_6_);
return v___x_7_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5);
v___x_10_ = lean_nat_dec_eq(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_15_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__10));
v___x_16_ = lean_unsigned_to_nat(46u);
v___x_17_ = lean_unsigned_to_nat(193u);
v___x_18_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__9));
v___x_19_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8));
v___x_20_ = l_mkPanicMessageWithDecl(v___x_19_, v___x_18_, v___x_17_, v___x_16_, v___x_15_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(lean_object* v_context_22_, lean_object* v_d_23_){
_start:
{
lean_object* v___y_26_; lean_object* v___y_27_; 
if (lean_obj_tag(v_d_23_) == 6)
{
lean_object* v_b_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_b_31_ = lean_ctor_get(v_d_23_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v_d_23_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v_d_23_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_b_31_);
lean_dec(v_d_23_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
lean_ctor_set_tag(v___x_33_, 0);
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_b_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v___x_39_; lean_object* v_received_41_; 
v___x_39_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_23_) == 9)
{
lean_object* v_value_55_; lean_object* v_description_56_; uint8_t v___x_57_; 
v_value_55_ = lean_ctor_get(v_d_23_, 0);
v_description_56_ = lean_ctor_get(v_d_23_, 1);
v___x_57_ = lean_string_dec_eq(v_description_56_, v___x_39_);
if (v___x_57_ == 0)
{
goto v___jp_53_;
}
else
{
uint32_t v___x_58_; uint64_t v___x_59_; lean_object* v___x_60_; uint32_t v___x_61_; lean_object* v___x_62_; 
lean_inc_n(v_value_55_, 2);
lean_dec_ref_known(v_d_23_, 2);
v___x_58_ = 206;
v___x_59_ = 0ULL;
v___x_60_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_60_, 0, v_value_55_);
lean_ctor_set(v___x_60_, 1, v___x_39_);
v___x_61_ = lasm_js_value_handle(v_value_55_);
lean_dec(v_value_55_);
v___x_62_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_58_, v___x_59_, v___x_60_, v___x_61_);
lean_dec_ref_known(v___x_60_, 2);
if (lean_obj_tag(v___x_62_) == 0)
{
lean_object* v_a_63_; uint8_t v___x_64_; 
v_a_63_ = lean_ctor_get(v___x_62_, 0);
lean_inc(v_a_63_);
lean_dec_ref_known(v___x_62_, 1);
v___x_64_ = lean_string_validate_utf8(v_a_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; lean_object* v___x_66_; 
lean_dec(v_a_63_);
v___x_65_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__11);
v___x_66_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_65_);
v_received_41_ = v___x_66_;
goto v___jp_40_;
}
else
{
lean_object* v___x_67_; 
v___x_67_ = lean_string_from_utf8_unchecked(v_a_63_);
v_received_41_ = v___x_67_;
goto v___jp_40_;
}
}
else
{
lean_object* v___x_68_; 
lean_dec_ref_known(v___x_62_, 1);
v___x_68_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__12));
v_received_41_ = v___x_68_;
goto v___jp_40_;
}
}
}
else
{
goto v___jp_53_;
}
v___jp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_42_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1));
v___x_43_ = lean_string_append(v___x_42_, v_context_22_);
v___x_44_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__2));
v___x_45_ = lean_string_append(v___x_43_, v___x_44_);
v___x_46_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__3));
v___x_47_ = lean_string_append(v___x_45_, v___x_46_);
v___x_48_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4));
v___x_49_ = lean_string_append(v___x_47_, v___x_48_);
v___x_50_ = lean_string_append(v___x_49_, v_received_41_);
lean_dec_ref(v_received_41_);
v___x_51_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; 
v___x_52_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__7));
v___y_26_ = v___x_50_;
v___y_27_ = v___x_52_;
goto v___jp_25_;
}
else
{
v___y_26_ = v___x_50_;
v___y_27_ = v___x_39_;
goto v___jp_25_;
}
}
v___jp_53_:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lasm_JS_Data_describe(v_d_23_);
v_received_41_ = v___x_54_;
goto v___jp_40_;
}
}
v___jp_25_:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_string_append(v___y_26_, v___y_27_);
v___x_29_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
v___x_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___boxed(lean_object* v_context_69_, lean_object* v_d_70_, lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(v_context_69_, v_d_70_);
lean_dec_ref(v_context_69_);
return v_res_72_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1(void){
_start:
{
uint8_t v___x_74_; uint64_t v___x_75_; 
v___x_74_ = 0;
v___x_75_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0(lean_object* v_b_76_, lean_object* v_args_77_, uint8_t v_await_78_){
_start:
{
uint64_t v___y_81_; uint64_t v___y_82_; uint64_t v___x_117_; uint64_t v___y_119_; 
v___x_117_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1);
if (v_await_78_ == 0)
{
uint64_t v___x_124_; 
v___x_124_ = 0ULL;
v___y_119_ = v___x_124_;
goto v___jp_118_;
}
else
{
uint64_t v___x_125_; 
v___x_125_ = 2ULL;
v___y_119_ = v___x_125_;
goto v___jp_118_;
}
v___jp_80_:
{
uint64_t v_flags_83_; uint32_t v___x_84_; lean_object* v___x_85_; uint32_t v___x_86_; lean_object* v___x_87_; 
v_flags_83_ = lean_uint64_lor(v___y_81_, v___y_82_);
v___x_84_ = 214;
v___x_85_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_76_, v_args_77_);
v___x_86_ = 0;
v___x_87_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_84_, v_flags_83_, v___x_85_, v___x_86_);
lean_dec(v___x_85_);
if (lean_obj_tag(v___x_87_) == 0)
{
if (lean_obj_tag(v___x_87_) == 0)
{
lean_object* v_a_88_; lean_object* v___x_89_; 
v_a_88_ = lean_ctor_get(v___x_87_, 0);
lean_inc(v_a_88_);
lean_dec_ref_known(v___x_87_, 1);
v___x_89_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_88_);
lean_dec(v_a_88_);
if (lean_obj_tag(v___x_89_) == 0)
{
lean_object* v_a_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v_a_90_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_a_90_);
lean_dec_ref_known(v___x_89_, 1);
v___x_91_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_76_);
v___x_92_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(v___x_91_, v_a_90_);
lean_dec_ref(v___x_91_);
return v___x_92_;
}
else
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
v_a_93_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_100_ == 0)
{
v___x_95_ = v___x_89_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_89_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
else
{
return v___x_87_;
}
}
else
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_116_; 
v_a_101_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_116_ == 0)
{
v___x_103_ = v___x_87_;
v_isShared_104_ = v_isSharedCheck_116_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_87_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_116_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_114_; 
v___x_105_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1));
v___x_106_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_76_);
v___x_107_ = lean_string_append(v___x_105_, v___x_106_);
lean_dec_ref(v___x_106_);
v___x_108_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0));
v___x_109_ = lean_string_append(v___x_107_, v___x_108_);
v___x_110_ = lean_io_error_to_string(v_a_101_);
v___x_111_ = lean_string_append(v___x_109_, v___x_110_);
lean_dec_ref(v___x_110_);
v___x_112_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v___x_112_);
v___x_114_ = v___x_103_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_112_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
v___jp_118_:
{
uint8_t v_construct_120_; uint64_t v___x_121_; 
v_construct_120_ = lean_ctor_get_uint8(v_b_76_, sizeof(void*)*4);
v___x_121_ = lean_uint64_lor(v___x_117_, v___y_119_);
if (v_construct_120_ == 0)
{
uint64_t v___x_122_; 
v___x_122_ = 0ULL;
v___y_81_ = v___x_121_;
v___y_82_ = v___x_122_;
goto v___jp_80_;
}
else
{
uint64_t v___x_123_; 
v___x_123_ = 4ULL;
v___y_81_ = v___x_121_;
v___y_82_ = v___x_123_;
goto v___jp_80_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___boxed(lean_object* v_b_126_, lean_object* v_args_127_, lean_object* v_await_128_, lean_object* v_a_129_){
_start:
{
uint8_t v_await_boxed_130_; lean_object* v_res_131_; 
v_await_boxed_130_ = lean_unbox(v_await_128_);
v_res_131_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0(v_b_126_, v_args_127_, v_await_boxed_130_);
lean_dec_ref(v_b_126_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomBytes(lean_object* v_a_141_){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___y_146_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_143_ = ((lean_object*)(l_Lasm_Web_Raw_randomBytes___closed__2));
v___x_144_ = ((lean_object*)(l_Lasm_Web_Raw_randomBytes___closed__3));
v___x_150_ = lean_nat_to_int(v_a_141_);
v___x_151_ = lean_nat_abs(v___x_150_);
v___x_152_ = lean_cstr_to_nat("9007199254740991");
v___x_153_ = lean_nat_dec_le(v___x_151_, v___x_152_);
lean_dec(v___x_151_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_150_);
v___y_146_ = v___x_154_;
goto v___jp_145_;
}
else
{
double v___x_155_; lean_object* v___x_156_; 
v___x_155_ = l_Float_ofInt(v___x_150_);
lean_dec(v___x_150_);
v___x_156_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_156_, 0, v___x_155_);
v___y_146_ = v___x_156_;
goto v___jp_145_;
}
v___jp_145_:
{
lean_object* v___x_147_; uint8_t v___x_148_; lean_object* v___x_149_; 
v___x_147_ = lean_array_push(v___x_144_, v___y_146_);
v___x_148_ = 1;
v___x_149_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0(v___x_143_, v___x_147_, v___x_148_);
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomBytes___boxed(lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lasm_Web_Raw_randomBytes(v_a_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0(lean_object* v_context_161_, lean_object* v_d_162_){
_start:
{
lean_object* v___y_165_; lean_object* v___y_166_; 
if (lean_obj_tag(v_d_162_) == 4)
{
lean_object* v_s_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
v_s_170_ = lean_ctor_get(v_d_162_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v_d_162_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v_d_162_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_s_170_);
lean_dec(v_d_162_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
lean_ctor_set_tag(v___x_172_, 0);
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_s_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
else
{
lean_object* v___x_178_; lean_object* v_received_180_; 
v___x_178_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_162_) == 9)
{
lean_object* v_value_194_; lean_object* v_description_195_; uint8_t v___x_196_; 
v_value_194_ = lean_ctor_get(v_d_162_, 0);
v_description_195_ = lean_ctor_get(v_d_162_, 1);
v___x_196_ = lean_string_dec_eq(v_description_195_, v___x_178_);
if (v___x_196_ == 0)
{
goto v___jp_192_;
}
else
{
uint32_t v___x_197_; uint64_t v___x_198_; lean_object* v___x_199_; uint32_t v___x_200_; lean_object* v___x_201_; 
lean_inc_n(v_value_194_, 2);
lean_dec_ref_known(v_d_162_, 2);
v___x_197_ = 206;
v___x_198_ = 0ULL;
v___x_199_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_199_, 0, v_value_194_);
lean_ctor_set(v___x_199_, 1, v___x_178_);
v___x_200_ = lasm_js_value_handle(v_value_194_);
lean_dec(v_value_194_);
v___x_201_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_197_, v___x_198_, v___x_199_, v___x_200_);
lean_dec_ref_known(v___x_199_, 2);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; uint8_t v___x_203_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_202_);
lean_dec_ref_known(v___x_201_, 1);
v___x_203_ = lean_string_validate_utf8(v_a_202_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; lean_object* v___x_205_; 
lean_dec(v_a_202_);
v___x_204_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__11);
v___x_205_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_204_);
v_received_180_ = v___x_205_;
goto v___jp_179_;
}
else
{
lean_object* v___x_206_; 
v___x_206_ = lean_string_from_utf8_unchecked(v_a_202_);
v_received_180_ = v___x_206_;
goto v___jp_179_;
}
}
else
{
lean_object* v___x_207_; 
lean_dec_ref_known(v___x_201_, 1);
v___x_207_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__12));
v_received_180_ = v___x_207_;
goto v___jp_179_;
}
}
}
else
{
goto v___jp_192_;
}
v___jp_179_:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_181_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1));
v___x_182_ = lean_string_append(v___x_181_, v_context_161_);
v___x_183_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__2));
v___x_184_ = lean_string_append(v___x_182_, v___x_183_);
v___x_185_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0___closed__0));
v___x_186_ = lean_string_append(v___x_184_, v___x_185_);
v___x_187_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4));
v___x_188_ = lean_string_append(v___x_186_, v___x_187_);
v___x_189_ = lean_string_append(v___x_188_, v_received_180_);
lean_dec_ref(v_received_180_);
v___x_190_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; 
v___x_191_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__7));
v___y_165_ = v___x_189_;
v___y_166_ = v___x_191_;
goto v___jp_164_;
}
else
{
v___y_165_ = v___x_189_;
v___y_166_ = v___x_178_;
goto v___jp_164_;
}
}
v___jp_192_:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lasm_JS_Data_describe(v_d_162_);
v_received_180_ = v___x_193_;
goto v___jp_179_;
}
}
v___jp_164_:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_167_ = lean_string_append(v___y_165_, v___y_166_);
v___x_168_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
v___x_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
return v___x_169_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0___boxed(lean_object* v_context_208_, lean_object* v_d_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0(v_context_208_, v_d_209_);
lean_dec_ref(v_context_208_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0(lean_object* v_b_212_, lean_object* v_args_213_, uint8_t v_await_214_){
_start:
{
uint64_t v___y_217_; uint64_t v___y_218_; uint64_t v___x_261_; uint64_t v___y_263_; 
v___x_261_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1);
if (v_await_214_ == 0)
{
uint64_t v___x_268_; 
v___x_268_ = 0ULL;
v___y_263_ = v___x_268_;
goto v___jp_262_;
}
else
{
uint64_t v___x_269_; 
v___x_269_ = 2ULL;
v___y_263_ = v___x_269_;
goto v___jp_262_;
}
v___jp_216_:
{
uint64_t v_flags_219_; uint32_t v___x_220_; lean_object* v___x_221_; uint32_t v___x_222_; lean_object* v___x_223_; 
v_flags_219_ = lean_uint64_lor(v___y_217_, v___y_218_);
v___x_220_ = 214;
v___x_221_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_212_, v_args_213_);
v___x_222_ = 0;
v___x_223_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_220_, v_flags_219_, v___x_221_, v___x_222_);
lean_dec(v___x_221_);
if (lean_obj_tag(v___x_223_) == 0)
{
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v_a_224_; lean_object* v___x_225_; 
v_a_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_a_224_);
lean_dec_ref_known(v___x_223_, 1);
v___x_225_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_224_);
lean_dec(v_a_224_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_a_226_);
lean_dec_ref_known(v___x_225_, 1);
v___x_227_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_212_);
v___x_228_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0(v___x_227_, v_a_226_);
lean_dec_ref(v___x_227_);
return v___x_228_;
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
v_a_229_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_225_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_225_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
v_a_237_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_223_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_223_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
lean_ctor_set_tag(v___x_239_, 1);
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_260_; 
v_a_245_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_260_ == 0)
{
v___x_247_ = v___x_223_;
v_isShared_248_ = v_isSharedCheck_260_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_223_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_260_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_258_; 
v___x_249_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1));
v___x_250_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_212_);
v___x_251_ = lean_string_append(v___x_249_, v___x_250_);
lean_dec_ref(v___x_250_);
v___x_252_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0));
v___x_253_ = lean_string_append(v___x_251_, v___x_252_);
v___x_254_ = lean_io_error_to_string(v_a_245_);
v___x_255_ = lean_string_append(v___x_253_, v___x_254_);
lean_dec_ref(v___x_254_);
v___x_256_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 0, v___x_256_);
v___x_258_ = v___x_247_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
v___jp_262_:
{
uint8_t v_construct_264_; uint64_t v___x_265_; 
v_construct_264_ = lean_ctor_get_uint8(v_b_212_, sizeof(void*)*4);
v___x_265_ = lean_uint64_lor(v___x_261_, v___y_263_);
if (v_construct_264_ == 0)
{
uint64_t v___x_266_; 
v___x_266_ = 0ULL;
v___y_217_ = v___x_265_;
v___y_218_ = v___x_266_;
goto v___jp_216_;
}
else
{
uint64_t v___x_267_; 
v___x_267_ = 4ULL;
v___y_217_ = v___x_265_;
v___y_218_ = v___x_267_;
goto v___jp_216_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0___boxed(lean_object* v_b_270_, lean_object* v_args_271_, lean_object* v_await_272_, lean_object* v_a_273_){
_start:
{
uint8_t v_await_boxed_274_; lean_object* v_res_275_; 
v_await_boxed_274_ = lean_unbox(v_await_272_);
v_res_275_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0(v_b_270_, v_args_271_, v_await_boxed_274_);
lean_dec_ref(v_b_270_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomUUID(){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_286_; 
v___x_283_ = ((lean_object*)(l_Lasm_Web_Raw_randomUUID___closed__1));
v___x_284_ = ((lean_object*)(l_Lasm_Web_Raw_randomBytes___closed__3));
v___x_285_ = 1;
v___x_286_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0(v___x_283_, v___x_284_, v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomUUID___boxed(lean_object* v_a_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lasm_Web_Raw_randomUUID();
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__8(lean_object* v___f_289_, lean_object* v_x_290_){
_start:
{
if (lean_obj_tag(v_x_290_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_300_; 
lean_dec_ref(v___f_289_);
v_a_292_ = lean_ctor_get(v_x_290_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v_x_290_);
if (v_isSharedCheck_300_ == 0)
{
v___x_294_ = v_x_290_;
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v_x_290_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_292_);
v___x_297_ = v_reuseFailAlloc_299_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; 
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
}
else
{
lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_312_; 
v_isSharedCheck_312_ = !lean_is_exclusive(v_x_290_);
if (v_isSharedCheck_312_ == 0)
{
lean_object* v_unused_313_; 
v_unused_313_ = lean_ctor_get(v_x_290_, 0);
lean_dec(v_unused_313_);
v___x_302_ = v_x_290_;
v_isShared_303_ = v_isSharedCheck_312_;
goto v_resetjp_301_;
}
else
{
lean_dec(v_x_290_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_312_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; uint8_t v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v___x_304_ = lean_unsigned_to_nat(0u);
v___x_305_ = 0;
v___x_306_ = lean_io_promise_new();
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v___x_306_);
v___x_308_ = v___x_302_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_306_);
v___x_308_ = v_reuseFailAlloc_311_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
v___x_310_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_304_, v___x_305_, v___x_309_, v___f_289_);
return v___x_310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__8___boxed(lean_object* v___f_314_, lean_object* v_x_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__8(v___f_314_, v_x_315_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4(lean_object* v_failurePrefix_318_, lean_object* v_x_319_){
_start:
{
if (lean_obj_tag(v_x_319_) == 0)
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_332_; 
v_a_321_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_332_ == 0)
{
v___x_323_ = v_x_319_;
v_isShared_324_ = v_isSharedCheck_332_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v_x_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_332_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_329_; 
v___x_325_ = lean_io_error_to_string(v_a_321_);
v___x_326_ = lean_string_append(v_failurePrefix_318_, v___x_325_);
lean_dec_ref(v___x_325_);
v___x_327_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 0, v___x_327_);
v___x_329_ = v___x_323_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_327_);
v___x_329_ = v_reuseFailAlloc_331_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
lean_object* v___x_330_; 
v___x_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
}
}
else
{
lean_object* v___x_333_; 
lean_dec_ref(v_failurePrefix_318_);
v___x_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_333_, 0, v_x_319_);
return v___x_333_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4___boxed(lean_object* v_failurePrefix_334_, lean_object* v_x_335_, lean_object* v___y_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4(v_failurePrefix_334_, v_x_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0(lean_object* v_context_338_, lean_object* v_x_339_){
_start:
{
lean_object* v_val_342_; 
if (lean_obj_tag(v_x_339_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_352_; 
v_a_344_ = lean_ctor_get(v_x_339_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v_x_339_);
if (v_isSharedCheck_352_ == 0)
{
v___x_346_ = v_x_339_;
v_isShared_347_ = v_isSharedCheck_352_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v_x_339_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_352_;
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
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_351_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; 
v___x_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_366_; 
v_a_353_ = lean_ctor_get(v_x_339_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v_x_339_);
if (v_isSharedCheck_366_ == 0)
{
v___x_355_ = v_x_339_;
v_isShared_356_ = v_isSharedCheck_366_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v_x_339_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_366_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(v_context_338_, v_a_353_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_360_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 0, v_a_358_);
v___x_360_ = v___x_355_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_358_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
v_val_342_ = v___x_360_;
goto v___jp_341_;
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; 
v_a_362_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_362_);
lean_dec_ref_known(v___x_357_, 1);
if (v_isShared_356_ == 0)
{
lean_ctor_set_tag(v___x_355_, 0);
lean_ctor_set(v___x_355_, 0, v_a_362_);
v___x_364_ = v___x_355_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_362_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
v_val_342_ = v___x_364_;
goto v___jp_341_;
}
}
}
}
v___jp_341_:
{
lean_object* v___x_343_; 
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v_val_342_);
return v___x_343_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0___boxed(lean_object* v_context_367_, lean_object* v_x_368_, lean_object* v___y_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0(v_context_367_, v_x_368_);
lean_dec_ref(v_context_367_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2(lean_object* v___f_371_, lean_object* v_x_372_){
_start:
{
if (lean_obj_tag(v_x_372_) == 0)
{
lean_object* v___x_374_; 
lean_dec_ref(v___f_371_);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v_x_372_);
return v___x_374_;
}
else
{
lean_object* v_a_375_; lean_object* v___x_376_; 
v_a_375_ = lean_ctor_get(v_x_372_, 0);
lean_inc(v_a_375_);
lean_dec_ref_known(v_x_372_, 1);
v___x_376_ = lean_apply_2(v___f_371_, v_a_375_, lean_box(0));
return v___x_376_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2___boxed(lean_object* v___f_377_, lean_object* v_x_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2(v___f_377_, v_x_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5(lean_object* v___x_381_, uint8_t v___x_382_, lean_object* v___f_383_, lean_object* v_a_384_, uint32_t v_op_385_, uint64_t v_flags_386_, lean_object* v_payload_387_, lean_object* v_x_388_){
_start:
{
lean_object* v_val_391_; 
if (lean_obj_tag(v_x_388_) == 0)
{
lean_object* v___x_394_; 
lean_dec_ref(v___f_383_);
lean_dec(v___x_381_);
v___x_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_394_, 0, v_x_388_);
return v___x_394_;
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_409_; 
v_a_395_ = lean_ctor_get(v_x_388_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v_x_388_);
if (v_isSharedCheck_409_ == 0)
{
v___x_397_ = v_x_388_;
v_isShared_398_ = v_isSharedCheck_409_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v_x_388_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_409_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
uint32_t v___x_399_; lean_object* v___x_400_; 
v___x_399_ = 0;
v___x_400_ = lasm_js_call_into(v_a_384_, v_op_385_, v___x_399_, v_flags_386_, v_a_395_, v_payload_387_);
lean_dec(v_a_395_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v_a_401_; lean_object* v___x_403_; 
v_a_401_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_a_401_);
lean_dec_ref_known(v___x_400_, 1);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 0, v_a_401_);
v___x_403_ = v___x_397_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
v_val_391_ = v___x_403_;
goto v___jp_390_;
}
}
else
{
lean_object* v_a_405_; lean_object* v___x_407_; 
v_a_405_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_a_405_);
lean_dec_ref_known(v___x_400_, 1);
if (v_isShared_398_ == 0)
{
lean_ctor_set_tag(v___x_397_, 0);
lean_ctor_set(v___x_397_, 0, v_a_405_);
v___x_407_ = v___x_397_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_405_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
v_val_391_ = v___x_407_;
goto v___jp_390_;
}
}
}
}
v___jp_390_:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_392_, 0, v_val_391_);
v___x_393_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_381_, v___x_382_, v___x_392_, v___f_383_);
return v___x_393_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed(lean_object* v___x_410_, lean_object* v___x_411_, lean_object* v___f_412_, lean_object* v_a_413_, lean_object* v_op_414_, lean_object* v_flags_415_, lean_object* v_payload_416_, lean_object* v_x_417_, lean_object* v___y_418_){
_start:
{
uint8_t v___x_930__boxed_419_; uint32_t v_op_boxed_420_; uint64_t v_flags_boxed_421_; lean_object* v_res_422_; 
v___x_930__boxed_419_ = lean_unbox(v___x_411_);
v_op_boxed_420_ = lean_unbox_uint32(v_op_414_);
lean_dec(v_op_414_);
v_flags_boxed_421_ = lean_unbox_uint64(v_flags_415_);
lean_dec_ref(v_flags_415_);
v_res_422_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5(v___x_410_, v___x_930__boxed_419_, v___f_412_, v_a_413_, v_op_boxed_420_, v_flags_boxed_421_, v_payload_416_, v_x_417_);
lean_dec(v_payload_416_);
lean_dec(v_a_413_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__7(lean_object* v___f_423_, lean_object* v_a_424_, uint32_t v_op_425_, uint64_t v_flags_426_, lean_object* v_payload_427_, lean_object* v_x_428_){
_start:
{
if (lean_obj_tag(v_x_428_) == 0)
{
lean_object* v___x_430_; 
lean_dec_ref(v___f_423_);
v___x_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_430_, 0, v_x_428_);
return v___x_430_;
}
else
{
lean_object* v_a_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_451_; 
v_a_431_ = lean_ctor_get(v_x_428_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v_x_428_);
if (v_isSharedCheck_451_ == 0)
{
v___x_433_ = v_x_428_;
v_isShared_434_ = v_isSharedCheck_451_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_a_431_);
lean_dec(v_x_428_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_451_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
uint32_t v___x_435_; lean_object* v___x_436_; uint8_t v___x_437_; lean_object* v_val_439_; lean_object* v___x_442_; 
v___x_435_ = 0;
v___x_436_ = lean_unsigned_to_nat(0u);
v___x_437_ = 0;
v___x_442_ = lasm_js_call_into(v_a_424_, v_op_425_, v___x_435_, v_flags_426_, v_a_431_, v_payload_427_);
lean_dec(v_a_431_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_445_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_442_, 1);
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 0, v_a_443_);
v___x_445_ = v___x_433_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
v_val_439_ = v___x_445_;
goto v___jp_438_;
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; 
v_a_447_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_447_);
lean_dec_ref_known(v___x_442_, 1);
if (v_isShared_434_ == 0)
{
lean_ctor_set_tag(v___x_433_, 0);
lean_ctor_set(v___x_433_, 0, v_a_447_);
v___x_449_ = v___x_433_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_447_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
v_val_439_ = v___x_449_;
goto v___jp_438_;
}
}
v___jp_438_:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_440_, 0, v_val_439_);
v___x_441_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_436_, v___x_437_, v___x_440_, v___f_423_);
return v___x_441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__7___boxed(lean_object* v___f_452_, lean_object* v_a_453_, lean_object* v_op_454_, lean_object* v_flags_455_, lean_object* v_payload_456_, lean_object* v_x_457_, lean_object* v___y_458_){
_start:
{
uint32_t v_op_boxed_459_; uint64_t v_flags_boxed_460_; lean_object* v_res_461_; 
v_op_boxed_459_ = lean_unbox_uint32(v_op_454_);
lean_dec(v_op_454_);
v_flags_boxed_460_ = lean_unbox_uint64(v_flags_455_);
lean_dec_ref(v_flags_455_);
v_res_461_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__7(v___f_452_, v_a_453_, v_op_boxed_459_, v_flags_boxed_460_, v_payload_456_, v_x_457_);
lean_dec(v_payload_456_);
lean_dec(v_a_453_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3(lean_object* v_a_462_, lean_object* v_x_463_){
_start:
{
if (lean_obj_tag(v_x_463_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_473_; 
v_a_465_ = lean_ctor_get(v_x_463_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v_x_463_);
if (v_isSharedCheck_473_ == 0)
{
v___x_467_ = v_x_463_;
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v_x_463_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_472_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
lean_object* v___x_471_; 
v___x_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
}
}
else
{
lean_object* v___x_474_; 
lean_dec_ref_known(v_x_463_, 1);
v___x_474_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_462_);
return v___x_474_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3___boxed(lean_object* v_a_475_, lean_object* v_x_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3(v_a_475_, v_x_476_);
lean_dec(v_a_475_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6(lean_object* v_failurePrefix_479_, uint32_t v_op_480_, uint64_t v_flags_481_, lean_object* v_payload_482_, lean_object* v___f_483_, lean_object* v___f_484_, lean_object* v___f_485_, lean_object* v_x_486_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_496_; 
lean_dec_ref(v___f_485_);
lean_dec_ref(v___f_484_);
lean_dec_ref(v___f_483_);
lean_dec(v_payload_482_);
v_a_488_ = lean_ctor_get(v_x_486_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v_x_486_);
if (v_isSharedCheck_496_ == 0)
{
v___x_490_ = v_x_486_;
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v_x_486_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_495_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_494_; 
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_543_; 
v_a_497_ = lean_ctor_get(v_x_486_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v_x_486_);
if (v_isSharedCheck_543_ == 0)
{
v___x_499_ = v_x_486_;
v_isShared_500_ = v_isSharedCheck_543_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v_x_486_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_543_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_501_ = lean_string_utf8_byte_size(v_failurePrefix_479_);
v___x_502_ = lean_unsigned_to_nat(0u);
v___x_503_ = lean_nat_dec_eq(v___x_501_, v___x_502_);
if (v___x_503_ == 0)
{
lean_object* v___f_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___f_508_; lean_object* v_val_510_; lean_object* v___x_515_; 
lean_dec_ref(v___f_485_);
lean_inc(v_a_497_);
v___f_504_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_504_, 0, v_a_497_);
v___x_505_ = lean_box(v___x_503_);
v___x_506_ = lean_box_uint32(v_op_480_);
v___x_507_ = lean_box_uint64(v_flags_481_);
lean_inc(v_payload_482_);
v___f_508_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed), 9, 7);
lean_closure_set(v___f_508_, 0, v___x_502_);
lean_closure_set(v___f_508_, 1, v___x_505_);
lean_closure_set(v___f_508_, 2, v___f_504_);
lean_closure_set(v___f_508_, 3, v_a_497_);
lean_closure_set(v___f_508_, 4, v___x_506_);
lean_closure_set(v___f_508_, 5, v___x_507_);
lean_closure_set(v___f_508_, 6, v_payload_482_);
v___x_515_ = l_Lasm_JS_Wire_encodeIO(v_payload_482_);
lean_dec(v_payload_482_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_518_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v_a_516_);
v___x_518_ = v___x_499_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_a_516_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
v_val_510_ = v___x_518_;
goto v___jp_509_;
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; 
v_a_520_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_515_, 1);
if (v_isShared_500_ == 0)
{
lean_ctor_set_tag(v___x_499_, 0);
lean_ctor_set(v___x_499_, 0, v_a_520_);
v___x_522_ = v___x_499_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_520_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
v_val_510_ = v___x_522_;
goto v___jp_509_;
}
}
v___jp_509_:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v_val_510_);
v___x_512_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_502_, v___x_503_, v___x_511_, v___f_508_);
v___x_513_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_502_, v___x_503_, v___x_512_, v___f_483_);
v___x_514_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_502_, v___x_503_, v___x_513_, v___f_484_);
return v___x_514_;
}
}
else
{
lean_object* v___f_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___f_527_; uint8_t v___x_528_; lean_object* v_val_530_; lean_object* v___x_534_; 
lean_dec_ref(v___f_484_);
lean_dec_ref(v___f_483_);
lean_inc(v_a_497_);
v___f_524_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_524_, 0, v_a_497_);
v___x_525_ = lean_box_uint32(v_op_480_);
v___x_526_ = lean_box_uint64(v_flags_481_);
lean_inc(v_payload_482_);
v___f_527_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__7___boxed), 7, 5);
lean_closure_set(v___f_527_, 0, v___f_524_);
lean_closure_set(v___f_527_, 1, v_a_497_);
lean_closure_set(v___f_527_, 2, v___x_525_);
lean_closure_set(v___f_527_, 3, v___x_526_);
lean_closure_set(v___f_527_, 4, v_payload_482_);
v___x_528_ = 0;
v___x_534_ = l_Lasm_JS_Wire_encodeIO(v_payload_482_);
lean_dec(v_payload_482_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_537_; 
v_a_535_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_a_535_);
lean_dec_ref_known(v___x_534_, 1);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v_a_535_);
v___x_537_ = v___x_499_;
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
v_val_530_ = v___x_537_;
goto v___jp_529_;
}
}
else
{
lean_object* v_a_539_; lean_object* v___x_541_; 
v_a_539_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_a_539_);
lean_dec_ref_known(v___x_534_, 1);
if (v_isShared_500_ == 0)
{
lean_ctor_set_tag(v___x_499_, 0);
lean_ctor_set(v___x_499_, 0, v_a_539_);
v___x_541_ = v___x_499_;
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
v_val_530_ = v___x_541_;
goto v___jp_529_;
}
}
v___jp_529_:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v_val_530_);
v___x_532_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_502_, v___x_528_, v___x_531_, v___f_527_);
v___x_533_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_502_, v___x_528_, v___x_532_, v___f_485_);
return v___x_533_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6___boxed(lean_object* v_failurePrefix_544_, lean_object* v_op_545_, lean_object* v_flags_546_, lean_object* v_payload_547_, lean_object* v___f_548_, lean_object* v___f_549_, lean_object* v___f_550_, lean_object* v_x_551_, lean_object* v___y_552_){
_start:
{
uint32_t v_op_boxed_553_; uint64_t v_flags_boxed_554_; lean_object* v_res_555_; 
v_op_boxed_553_ = lean_unbox_uint32(v_op_545_);
lean_dec(v_op_545_);
v_flags_boxed_554_ = lean_unbox_uint64(v_flags_546_);
lean_dec_ref(v_flags_546_);
v_res_555_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6(v_failurePrefix_544_, v_op_boxed_553_, v_flags_boxed_554_, v_payload_547_, v___f_548_, v___f_549_, v___f_550_, v_x_551_);
lean_dec_ref(v_failurePrefix_544_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1(lean_object* v___f_556_, lean_object* v_bytes_557_){
_start:
{
lean_object* v___x_559_; uint8_t v___x_560_; lean_object* v_val_562_; lean_object* v___x_565_; 
v___x_559_ = lean_unsigned_to_nat(0u);
v___x_560_ = 0;
v___x_565_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_557_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
lean_ctor_set_tag(v___x_568_, 1);
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
v_val_562_ = v___x_571_;
goto v___jp_561_;
}
}
}
else
{
lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_581_; 
v_a_574_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_581_ == 0)
{
v___x_576_ = v___x_565_;
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v___x_565_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
lean_ctor_set_tag(v___x_576_, 0);
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
v_val_562_ = v___x_579_;
goto v___jp_561_;
}
}
}
v___jp_561_:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v_val_562_);
v___x_564_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_559_, v___x_560_, v___x_563_, v___f_556_);
return v___x_564_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1___boxed(lean_object* v___f_582_, lean_object* v_bytes_583_, lean_object* v___y_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1(v___f_582_, v_bytes_583_);
lean_dec_ref(v_bytes_583_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(lean_object* v_context_586_, uint32_t v_op_587_, uint64_t v_flags_588_, lean_object* v_payload_589_, lean_object* v_failurePrefix_590_){
_start:
{
lean_object* v___f_592_; lean_object* v___f_593_; lean_object* v___f_594_; lean_object* v___f_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___f_598_; lean_object* v___f_599_; lean_object* v___x_600_; uint8_t v___x_601_; lean_object* v_val_603_; lean_object* v___x_606_; 
v___f_592_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_592_, 0, v_context_586_);
v___f_593_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_593_, 0, v___f_592_);
v___f_594_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_594_, 0, v___f_593_);
lean_inc_ref(v_failurePrefix_590_);
v___f_595_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_595_, 0, v_failurePrefix_590_);
v___x_596_ = lean_box_uint32(v_op_587_);
v___x_597_ = lean_box_uint64(v_flags_588_);
lean_inc_ref(v___f_594_);
v___f_598_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_598_, 0, v_failurePrefix_590_);
lean_closure_set(v___f_598_, 1, v___x_596_);
lean_closure_set(v___f_598_, 2, v___x_597_);
lean_closure_set(v___f_598_, 3, v_payload_589_);
lean_closure_set(v___f_598_, 4, v___f_595_);
lean_closure_set(v___f_598_, 5, v___f_594_);
lean_closure_set(v___f_598_, 6, v___f_594_);
v___f_599_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__8___boxed), 3, 1);
lean_closure_set(v___f_599_, 0, v___f_598_);
v___x_600_ = lean_unsigned_to_nat(0u);
v___x_601_ = 0;
v___x_606_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
v_a_607_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_606_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_606_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
lean_ctor_set_tag(v___x_609_, 1);
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
v_val_603_ = v___x_612_;
goto v___jp_602_;
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
v_a_615_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_606_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_606_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
lean_ctor_set_tag(v___x_617_, 0);
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
v_val_603_ = v___x_620_;
goto v___jp_602_;
}
}
}
v___jp_602_:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_604_, 0, v_val_603_);
v___x_605_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_600_, v___x_601_, v___x_604_, v___f_599_);
return v___x_605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___boxed(lean_object* v_context_623_, lean_object* v_op_624_, lean_object* v_flags_625_, lean_object* v_payload_626_, lean_object* v_failurePrefix_627_, lean_object* v_a_628_){
_start:
{
uint32_t v_op_boxed_629_; uint64_t v_flags_boxed_630_; lean_object* v_res_631_; 
v_op_boxed_629_ = lean_unbox_uint32(v_op_624_);
lean_dec(v_op_624_);
v_flags_boxed_630_ = lean_unbox_uint64(v_flags_625_);
lean_dec_ref(v_flags_625_);
v_res_631_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(v_context_623_, v_op_boxed_629_, v_flags_boxed_630_, v_payload_626_, v_failurePrefix_627_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(lean_object* v_b_632_, lean_object* v_args_633_){
_start:
{
uint8_t v_construct_635_; lean_object* v___x_636_; uint32_t v___x_637_; uint64_t v___x_638_; uint64_t v___y_640_; 
v_construct_635_ = lean_ctor_get_uint8(v_b_632_, sizeof(void*)*4);
v___x_636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_632_);
v___x_637_ = 214;
v___x_638_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1);
if (v_construct_635_ == 0)
{
uint64_t v___x_648_; 
v___x_648_ = 0ULL;
v___y_640_ = v___x_648_;
goto v___jp_639_;
}
else
{
uint64_t v___x_649_; 
v___x_649_ = 4ULL;
v___y_640_ = v___x_649_;
goto v___jp_639_;
}
v___jp_639_:
{
uint64_t v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_641_ = lean_uint64_lor(v___x_638_, v___y_640_);
v___x_642_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_632_, v_args_633_);
v___x_643_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1));
v___x_644_ = lean_string_append(v___x_643_, v___x_636_);
v___x_645_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0));
v___x_646_ = lean_string_append(v___x_644_, v___x_645_);
v___x_647_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(v___x_636_, v___x_637_, v___x_641_, v___x_642_, v___x_646_);
return v___x_647_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0___boxed(lean_object* v_b_650_, lean_object* v_args_651_, lean_object* v_a_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(v_b_650_, v_args_651_);
lean_dec_ref(v_b_650_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_digest(lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_663_ = ((lean_object*)(l_Lasm_Web_Raw_digest___closed__1));
v___x_664_ = ((lean_object*)(l_Lasm_Web_Raw_randomBytes___closed__3));
v___x_665_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_665_, 0, v_a_660_);
v___x_666_ = lean_array_push(v___x_664_, v___x_665_);
v___x_667_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_667_, 0, v_a_661_);
v___x_668_ = lean_array_push(v___x_666_, v___x_667_);
v___x_669_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(v___x_663_, v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_digest___boxed(lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lasm_Web_Raw_digest(v_a_670_, v_a_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomBytes(lean_object* v_n_674_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lasm_Web_Raw_randomBytes(v_n_674_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomBytes___boxed(lean_object* v_n_677_, lean_object* v_a_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lasm_Web_Crypto_randomBytes(v_n_677_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomUUID(){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lasm_Web_Raw_randomUUID();
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomUUID___boxed(lean_object* v_a_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lasm_Web_Crypto_randomUUID();
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_digest(lean_object* v_algorithm_684_, lean_object* v_data_685_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l_Lasm_Web_Raw_digest(v_algorithm_684_, v_data_685_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_digest___boxed(lean_object* v_algorithm_688_, lean_object* v_data_689_, lean_object* v_a_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lasm_Web_Crypto_digest(v_algorithm_688_, v_data_689_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_sha256(lean_object* v_data_693_){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = ((lean_object*)(l_Lasm_Web_Crypto_sha256___closed__0));
v___x_696_ = l_Lasm_Web_Raw_digest(v___x_695_, v_data_693_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_sha256___boxed(lean_object* v_data_697_, lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lasm_Web_Crypto_sha256(v_data_697_);
return v_res_699_;
}
}
LEAN_EXPORT uint32_t l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(uint8_t v_n_700_){
_start:
{
uint8_t v___x_701_; uint8_t v___x_702_; 
v___x_701_ = 10;
v___x_702_ = lean_uint8_dec_lt(v_n_700_, v___x_701_);
if (v___x_702_ == 0)
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint32_t v___x_706_; 
v___x_703_ = lean_unsigned_to_nat(87u);
v___x_704_ = lean_uint8_to_nat(v_n_700_);
v___x_705_ = lean_nat_add(v___x_703_, v___x_704_);
v___x_706_ = l_Char_ofNat(v___x_705_);
lean_dec(v___x_705_);
return v___x_706_;
}
else
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; uint32_t v___x_710_; 
v___x_707_ = lean_unsigned_to_nat(48u);
v___x_708_ = lean_uint8_to_nat(v_n_700_);
v___x_709_ = lean_nat_add(v___x_707_, v___x_708_);
v___x_710_ = l_Char_ofNat(v___x_709_);
lean_dec(v___x_709_);
return v___x_710_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0___boxed(lean_object* v_n_711_){
_start:
{
uint8_t v_n_boxed_712_; uint32_t v_res_713_; lean_object* v_r_714_; 
v_n_boxed_712_ = lean_unbox(v_n_711_);
v_res_713_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(v_n_boxed_712_);
v_r_714_ = lean_box_uint32(v_res_713_);
return v_r_714_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(lean_object* v_as_715_, size_t v_i_716_, size_t v_stop_717_, lean_object* v_b_718_){
_start:
{
uint8_t v___x_719_; 
v___x_719_ = lean_usize_dec_eq(v_i_716_, v_stop_717_);
if (v___x_719_ == 0)
{
uint8_t v___x_720_; uint8_t v___x_721_; uint8_t v___x_722_; uint8_t v___x_723_; uint32_t v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; uint32_t v___x_727_; lean_object* v___x_728_; size_t v___x_729_; size_t v___x_730_; 
v___x_720_ = lean_byte_array_uget(v_as_715_, v_i_716_);
v___x_721_ = 16;
v___x_722_ = 4;
v___x_723_ = lean_uint8_shift_right(v___x_720_, v___x_722_);
v___x_724_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(v___x_723_);
v___x_725_ = lean_string_push(v_b_718_, v___x_724_);
v___x_726_ = lean_uint8_mod(v___x_720_, v___x_721_);
v___x_727_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(v___x_726_);
v___x_728_ = lean_string_push(v___x_725_, v___x_727_);
v___x_729_ = ((size_t)1ULL);
v___x_730_ = lean_usize_add(v_i_716_, v___x_729_);
v_i_716_ = v___x_730_;
v_b_718_ = v___x_728_;
goto _start;
}
else
{
return v_b_718_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___boxed(lean_object* v_as_732_, lean_object* v_i_733_, lean_object* v_stop_734_, lean_object* v_b_735_){
_start:
{
size_t v_i_boxed_736_; size_t v_stop_boxed_737_; lean_object* v_res_738_; 
v_i_boxed_736_ = lean_unbox_usize(v_i_733_);
lean_dec(v_i_733_);
v_stop_boxed_737_ = lean_unbox_usize(v_stop_734_);
lean_dec(v_stop_734_);
v_res_738_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(v_as_732_, v_i_boxed_736_, v_stop_boxed_737_, v_b_735_);
lean_dec_ref(v_as_732_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_hex(lean_object* v_bytes_739_){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_740_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = lean_byte_array_size(v_bytes_739_);
v___x_743_ = lean_nat_dec_lt(v___x_741_, v___x_742_);
if (v___x_743_ == 0)
{
return v___x_740_;
}
else
{
uint8_t v___x_744_; 
v___x_744_ = lean_nat_dec_le(v___x_742_, v___x_742_);
if (v___x_744_ == 0)
{
if (v___x_743_ == 0)
{
return v___x_740_;
}
else
{
size_t v___x_745_; size_t v___x_746_; lean_object* v___x_747_; 
v___x_745_ = ((size_t)0ULL);
v___x_746_ = lean_usize_of_nat(v___x_742_);
v___x_747_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(v_bytes_739_, v___x_745_, v___x_746_, v___x_740_);
return v___x_747_;
}
}
else
{
size_t v___x_748_; size_t v___x_749_; lean_object* v___x_750_; 
v___x_748_ = ((size_t)0ULL);
v___x_749_ = lean_usize_of_nat(v___x_742_);
v___x_750_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(v_bytes_739_, v___x_748_, v___x_749_, v___x_740_);
return v___x_750_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_hex___boxed(lean_object* v_bytes_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Lasm_Web_Crypto_hex(v_bytes_751_);
lean_dec_ref(v_bytes_751_);
return v_res_752_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_Crypto(uint8_t builtin) {
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
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
