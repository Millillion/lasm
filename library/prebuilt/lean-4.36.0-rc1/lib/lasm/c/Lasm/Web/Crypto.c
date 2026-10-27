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
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* lean_io_promise_new();
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__9_value;
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_9_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__7));
v___x_10_ = lean_unsigned_to_nat(46u);
v___x_11_ = lean_unsigned_to_nat(193u);
v___x_12_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__6));
v___x_13_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__5));
v___x_14_ = l_mkPanicMessageWithDecl(v___x_13_, v___x_12_, v___x_11_, v___x_10_, v___x_9_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(lean_object* v_context_16_, lean_object* v_d_17_){
_start:
{
lean_object* v_received_20_; 
if (lean_obj_tag(v_d_17_) == 6)
{
lean_object* v_b_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_41_; 
v_b_34_ = lean_ctor_get(v_d_17_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v_d_17_);
if (v_isSharedCheck_41_ == 0)
{
v___x_36_ = v_d_17_;
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_b_34_);
lean_dec(v_d_17_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_39_; 
if (v_isShared_37_ == 0)
{
lean_ctor_set_tag(v___x_36_, 0);
v___x_39_ = v___x_36_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_b_34_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
else
{
if (lean_obj_tag(v_d_17_) == 9)
{
lean_object* v_value_42_; lean_object* v_description_43_; lean_object* v___x_44_; uint8_t v___x_45_; 
v_value_42_ = lean_ctor_get(v_d_17_, 0);
v_description_43_ = lean_ctor_get(v_d_17_, 1);
v___x_44_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4));
v___x_45_ = lean_string_dec_eq(v_description_43_, v___x_44_);
if (v___x_45_ == 0)
{
goto v___jp_32_;
}
else
{
uint32_t v___x_46_; uint64_t v___x_47_; lean_object* v___x_48_; uint32_t v___x_49_; lean_object* v___x_50_; 
lean_inc_n(v_value_42_, 2);
lean_dec_ref_known(v_d_17_, 2);
v___x_46_ = 206;
v___x_47_ = 0ULL;
v___x_48_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_48_, 0, v_value_42_);
lean_ctor_set(v___x_48_, 1, v___x_44_);
v___x_49_ = lasm_js_value_handle(v_value_42_);
lean_dec(v_value_42_);
v___x_50_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_46_, v___x_47_, v___x_48_, v___x_49_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_object* v_a_51_; uint8_t v___x_52_; 
v_a_51_ = lean_ctor_get(v___x_50_, 0);
lean_inc(v_a_51_);
lean_dec_ref_known(v___x_50_, 1);
v___x_52_ = lean_string_validate_utf8(v_a_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; lean_object* v___x_54_; 
lean_dec(v_a_51_);
v___x_53_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8);
v___x_54_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_53_);
v_received_20_ = v___x_54_;
goto v___jp_19_;
}
else
{
lean_object* v___x_55_; 
v___x_55_ = lean_string_from_utf8_unchecked(v_a_51_);
v_received_20_ = v___x_55_;
goto v___jp_19_;
}
}
else
{
lean_object* v___x_56_; 
lean_dec_ref_known(v___x_50_, 1);
v___x_56_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__9));
v_received_20_ = v___x_56_;
goto v___jp_19_;
}
}
}
else
{
goto v___jp_32_;
}
}
v___jp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_21_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
v___x_22_ = lean_string_append(v___x_21_, v_context_16_);
v___x_23_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1));
v___x_24_ = lean_string_append(v___x_22_, v___x_23_);
v___x_25_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__2));
v___x_26_ = lean_string_append(v___x_24_, v___x_25_);
v___x_27_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__3));
v___x_28_ = lean_string_append(v___x_26_, v___x_27_);
v___x_29_ = lean_string_append(v___x_28_, v_received_20_);
lean_dec_ref(v_received_20_);
v___x_30_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
v___x_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
v___jp_32_:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lasm_JS_Data_describe(v_d_17_);
v_received_20_ = v___x_33_;
goto v___jp_19_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___boxed(lean_object* v_context_57_, lean_object* v_d_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(v_context_57_, v_d_58_);
lean_dec_ref(v_context_57_);
return v_res_60_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1(void){
_start:
{
uint8_t v___x_62_; uint64_t v___x_63_; 
v___x_62_ = 0;
v___x_63_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0(lean_object* v_b_64_, lean_object* v_args_65_, uint8_t v_await_66_){
_start:
{
uint64_t v___y_69_; uint64_t v___y_70_; uint64_t v___x_105_; uint64_t v___y_107_; 
v___x_105_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1);
if (v_await_66_ == 0)
{
uint64_t v___x_112_; 
v___x_112_ = 0ULL;
v___y_107_ = v___x_112_;
goto v___jp_106_;
}
else
{
uint64_t v___x_113_; 
v___x_113_ = 2ULL;
v___y_107_ = v___x_113_;
goto v___jp_106_;
}
v___jp_68_:
{
uint64_t v_flags_71_; uint32_t v___x_72_; lean_object* v___x_73_; uint32_t v___x_74_; lean_object* v___x_75_; 
v_flags_71_ = lean_uint64_lor(v___y_69_, v___y_70_);
v___x_72_ = 214;
v___x_73_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_64_, v_args_65_);
v___x_74_ = 0;
v___x_75_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_72_, v_flags_71_, v___x_73_, v___x_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_77_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
lean_inc(v_a_76_);
lean_dec_ref_known(v___x_75_, 1);
v___x_77_ = l_Lasm_JS_Wire_decode(v_a_76_);
lean_dec(v_a_76_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_object* v_a_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_a_78_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_a_78_);
lean_dec_ref_known(v___x_77_, 1);
v___x_79_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_64_);
v___x_80_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(v___x_79_, v_a_78_);
lean_dec_ref(v___x_79_);
return v___x_80_;
}
else
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_88_; 
v_a_81_ = lean_ctor_get(v___x_77_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_77_);
if (v_isSharedCheck_88_ == 0)
{
v___x_83_ = v___x_77_;
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v___x_77_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_86_; 
if (v_isShared_84_ == 0)
{
v___x_86_ = v___x_83_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_a_81_);
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
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_104_; 
v_a_89_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_104_ == 0)
{
v___x_91_ = v___x_75_;
v_isShared_92_ = v_isSharedCheck_104_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_75_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_104_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_93_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
v___x_94_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_64_);
v___x_95_ = lean_string_append(v___x_93_, v___x_94_);
lean_dec_ref(v___x_94_);
v___x_96_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0));
v___x_97_ = lean_string_append(v___x_95_, v___x_96_);
v___x_98_ = lean_io_error_to_string(v_a_89_);
v___x_99_ = lean_string_append(v___x_97_, v___x_98_);
lean_dec_ref(v___x_98_);
v___x_100_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_100_);
v___x_102_ = v___x_91_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_100_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
v___jp_106_:
{
uint8_t v_construct_108_; uint64_t v___x_109_; 
v_construct_108_ = lean_ctor_get_uint8(v_b_64_, sizeof(void*)*4);
v___x_109_ = lean_uint64_lor(v___x_105_, v___y_107_);
if (v_construct_108_ == 0)
{
uint64_t v___x_110_; 
v___x_110_ = 0ULL;
v___y_69_ = v___x_109_;
v___y_70_ = v___x_110_;
goto v___jp_68_;
}
else
{
uint64_t v___x_111_; 
v___x_111_ = 4ULL;
v___y_69_ = v___x_109_;
v___y_70_ = v___x_111_;
goto v___jp_68_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___boxed(lean_object* v_b_114_, lean_object* v_args_115_, lean_object* v_await_116_, lean_object* v_a_117_){
_start:
{
uint8_t v_await_boxed_118_; lean_object* v_res_119_; 
v_await_boxed_118_ = lean_unbox(v_await_116_);
v_res_119_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0(v_b_114_, v_args_115_, v_await_boxed_118_);
lean_dec_ref(v_b_114_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomBytes(lean_object* v_a_129_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___y_134_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_131_ = ((lean_object*)(l_Lasm_Web_Raw_randomBytes___closed__2));
v___x_132_ = ((lean_object*)(l_Lasm_Web_Raw_randomBytes___closed__3));
v___x_138_ = lean_nat_to_int(v_a_129_);
v___x_139_ = lean_nat_abs(v___x_138_);
v___x_140_ = lean_cstr_to_nat("9007199254740991");
v___x_141_ = lean_nat_dec_le(v___x_139_, v___x_140_);
lean_dec(v___x_139_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; 
v___x_142_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_138_);
v___y_134_ = v___x_142_;
goto v___jp_133_;
}
else
{
double v___x_143_; lean_object* v___x_144_; 
v___x_143_ = l_Float_ofInt(v___x_138_);
lean_dec(v___x_138_);
v___x_144_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_144_, 0, v___x_143_);
v___y_134_ = v___x_144_;
goto v___jp_133_;
}
v___jp_133_:
{
lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; 
v___x_135_ = lean_array_push(v___x_132_, v___y_134_);
v___x_136_ = 1;
v___x_137_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0(v___x_131_, v___x_135_, v___x_136_);
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomBytes___boxed(lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lasm_Web_Raw_randomBytes(v_a_145_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0(lean_object* v_context_149_, lean_object* v_d_150_){
_start:
{
lean_object* v_received_153_; 
if (lean_obj_tag(v_d_150_) == 4)
{
lean_object* v_s_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_174_; 
v_s_167_ = lean_ctor_get(v_d_150_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v_d_150_);
if (v_isSharedCheck_174_ == 0)
{
v___x_169_ = v_d_150_;
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_s_167_);
lean_dec(v_d_150_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set_tag(v___x_169_, 0);
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_s_167_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
else
{
if (lean_obj_tag(v_d_150_) == 9)
{
lean_object* v_value_175_; lean_object* v_description_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v_value_175_ = lean_ctor_get(v_d_150_, 0);
v_description_176_ = lean_ctor_get(v_d_150_, 1);
v___x_177_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4));
v___x_178_ = lean_string_dec_eq(v_description_176_, v___x_177_);
if (v___x_178_ == 0)
{
goto v___jp_165_;
}
else
{
uint32_t v___x_179_; uint64_t v___x_180_; lean_object* v___x_181_; uint32_t v___x_182_; lean_object* v___x_183_; 
lean_inc_n(v_value_175_, 2);
lean_dec_ref_known(v_d_150_, 2);
v___x_179_ = 206;
v___x_180_ = 0ULL;
v___x_181_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_181_, 0, v_value_175_);
lean_ctor_set(v___x_181_, 1, v___x_177_);
v___x_182_ = lasm_js_value_handle(v_value_175_);
lean_dec(v_value_175_);
v___x_183_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_179_, v___x_180_, v___x_181_, v___x_182_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; uint8_t v___x_185_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_184_);
lean_dec_ref_known(v___x_183_, 1);
v___x_185_ = lean_string_validate_utf8(v_a_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; 
lean_dec(v_a_184_);
v___x_186_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__8);
v___x_187_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_186_);
v_received_153_ = v___x_187_;
goto v___jp_152_;
}
else
{
lean_object* v___x_188_; 
v___x_188_ = lean_string_from_utf8_unchecked(v_a_184_);
v_received_153_ = v___x_188_;
goto v___jp_152_;
}
}
else
{
lean_object* v___x_189_; 
lean_dec_ref_known(v___x_183_, 1);
v___x_189_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__9));
v_received_153_ = v___x_189_;
goto v___jp_152_;
}
}
}
else
{
goto v___jp_165_;
}
}
v___jp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_154_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
v___x_155_ = lean_string_append(v___x_154_, v_context_149_);
v___x_156_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1));
v___x_157_ = lean_string_append(v___x_155_, v___x_156_);
v___x_158_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0___closed__0));
v___x_159_ = lean_string_append(v___x_157_, v___x_158_);
v___x_160_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__3));
v___x_161_ = lean_string_append(v___x_159_, v___x_160_);
v___x_162_ = lean_string_append(v___x_161_, v_received_153_);
lean_dec_ref(v_received_153_);
v___x_163_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
v___x_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
v___jp_165_:
{
lean_object* v___x_166_; 
v___x_166_ = l_Lasm_JS_Data_describe(v_d_150_);
v_received_153_ = v___x_166_;
goto v___jp_152_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0___boxed(lean_object* v_context_190_, lean_object* v_d_191_, lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0(v_context_190_, v_d_191_);
lean_dec_ref(v_context_190_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0(lean_object* v_b_194_, lean_object* v_args_195_, uint8_t v_await_196_){
_start:
{
uint64_t v___y_199_; uint64_t v___y_200_; uint64_t v___x_235_; uint64_t v___y_237_; 
v___x_235_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1);
if (v_await_196_ == 0)
{
uint64_t v___x_242_; 
v___x_242_ = 0ULL;
v___y_237_ = v___x_242_;
goto v___jp_236_;
}
else
{
uint64_t v___x_243_; 
v___x_243_ = 2ULL;
v___y_237_ = v___x_243_;
goto v___jp_236_;
}
v___jp_198_:
{
uint64_t v_flags_201_; uint32_t v___x_202_; lean_object* v___x_203_; uint32_t v___x_204_; lean_object* v___x_205_; 
v_flags_201_ = lean_uint64_lor(v___y_199_, v___y_200_);
v___x_202_ = 214;
v___x_203_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_194_, v_args_195_);
v___x_204_ = 0;
v___x_205_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_202_, v_flags_201_, v___x_203_, v___x_204_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_207_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
lean_inc(v_a_206_);
lean_dec_ref_known(v___x_205_, 1);
v___x_207_ = l_Lasm_JS_Wire_decode(v_a_206_);
lean_dec(v_a_206_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_a_208_);
lean_dec_ref_known(v___x_207_, 1);
v___x_209_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_194_);
v___x_210_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0_spec__0(v___x_209_, v_a_208_);
lean_dec_ref(v___x_209_);
return v___x_210_;
}
else
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
v_a_211_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_207_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_207_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_234_; 
v_a_219_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_234_ == 0)
{
v___x_221_ = v___x_205_;
v_isShared_222_ = v_isSharedCheck_234_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_205_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_234_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_232_; 
v___x_223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
v___x_224_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_194_);
v___x_225_ = lean_string_append(v___x_223_, v___x_224_);
lean_dec_ref(v___x_224_);
v___x_226_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0));
v___x_227_ = lean_string_append(v___x_225_, v___x_226_);
v___x_228_ = lean_io_error_to_string(v_a_219_);
v___x_229_ = lean_string_append(v___x_227_, v___x_228_);
lean_dec_ref(v___x_228_);
v___x_230_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_230_);
v___x_232_ = v___x_221_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_230_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
v___jp_236_:
{
uint8_t v_construct_238_; uint64_t v___x_239_; 
v_construct_238_ = lean_ctor_get_uint8(v_b_194_, sizeof(void*)*4);
v___x_239_ = lean_uint64_lor(v___x_235_, v___y_237_);
if (v_construct_238_ == 0)
{
uint64_t v___x_240_; 
v___x_240_ = 0ULL;
v___y_199_ = v___x_239_;
v___y_200_ = v___x_240_;
goto v___jp_198_;
}
else
{
uint64_t v___x_241_; 
v___x_241_ = 4ULL;
v___y_199_ = v___x_239_;
v___y_200_ = v___x_241_;
goto v___jp_198_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0___boxed(lean_object* v_b_244_, lean_object* v_args_245_, lean_object* v_await_246_, lean_object* v_a_247_){
_start:
{
uint8_t v_await_boxed_248_; lean_object* v_res_249_; 
v_await_boxed_248_ = lean_unbox(v_await_246_);
v_res_249_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0(v_b_244_, v_args_245_, v_await_boxed_248_);
lean_dec_ref(v_b_244_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomUUID(){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; lean_object* v___x_260_; 
v___x_257_ = ((lean_object*)(l_Lasm_Web_Raw_randomUUID___closed__1));
v___x_258_ = ((lean_object*)(l_Lasm_Web_Raw_randomBytes___closed__3));
v___x_259_ = 1;
v___x_260_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomUUID_spec__0(v___x_257_, v___x_258_, v___x_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_randomUUID___boxed(lean_object* v_a_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lasm_Web_Raw_randomUUID();
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4(lean_object* v___f_263_, lean_object* v_x_264_){
_start:
{
if (lean_obj_tag(v_x_264_) == 0)
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_274_; 
lean_dec_ref(v___f_263_);
v_a_266_ = lean_ctor_get(v_x_264_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v_x_264_);
if (v_isSharedCheck_274_ == 0)
{
v___x_268_ = v_x_264_;
v_isShared_269_ = v_isSharedCheck_274_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v_x_264_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_274_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_271_; 
if (v_isShared_269_ == 0)
{
v___x_271_ = v___x_268_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_266_);
v___x_271_ = v_reuseFailAlloc_273_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; 
v___x_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
return v___x_272_;
}
}
}
else
{
lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_286_; 
v_isSharedCheck_286_ = !lean_is_exclusive(v_x_264_);
if (v_isSharedCheck_286_ == 0)
{
lean_object* v_unused_287_; 
v_unused_287_ = lean_ctor_get(v_x_264_, 0);
lean_dec(v_unused_287_);
v___x_276_ = v_x_264_;
v_isShared_277_ = v_isSharedCheck_286_;
goto v_resetjp_275_;
}
else
{
lean_dec(v_x_264_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_286_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; uint8_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_278_ = lean_unsigned_to_nat(0u);
v___x_279_ = 0;
v___x_280_ = lean_io_promise_new();
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 0, v___x_280_);
v___x_282_ = v___x_276_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_285_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
v___x_284_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_278_, v___x_279_, v___x_283_, v___f_263_);
return v___x_284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4___boxed(lean_object* v___f_288_, lean_object* v_x_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4(v___f_288_, v_x_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0(lean_object* v_failurePrefix_292_, lean_object* v_x_293_){
_start:
{
if (lean_obj_tag(v_x_293_) == 0)
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_306_; 
v_a_295_ = lean_ctor_get(v_x_293_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v_x_293_);
if (v_isSharedCheck_306_ == 0)
{
v___x_297_ = v_x_293_;
v_isShared_298_ = v_isSharedCheck_306_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v_x_293_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_306_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_299_ = lean_io_error_to_string(v_a_295_);
v___x_300_ = lean_string_append(v_failurePrefix_292_, v___x_299_);
lean_dec_ref(v___x_299_);
v___x_301_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_301_);
v___x_303_ = v___x_297_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_305_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_304_; 
v___x_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
return v___x_304_;
}
}
}
else
{
lean_object* v___x_307_; 
lean_dec_ref(v_failurePrefix_292_);
v___x_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_307_, 0, v_x_293_);
return v___x_307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0___boxed(lean_object* v_failurePrefix_308_, lean_object* v_x_309_, lean_object* v___y_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0(v_failurePrefix_308_, v_x_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2(lean_object* v___f_312_, lean_object* v_bytes_313_){
_start:
{
lean_object* v___x_315_; uint8_t v___x_316_; lean_object* v_val_318_; lean_object* v___x_321_; 
v___x_315_ = lean_unsigned_to_nat(0u);
v___x_316_ = 0;
v___x_321_ = l_Lasm_JS_Wire_decode(v_bytes_313_);
if (lean_obj_tag(v___x_321_) == 0)
{
lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_329_; 
v_a_322_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_329_ == 0)
{
v___x_324_ = v___x_321_;
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v___x_321_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
lean_ctor_set_tag(v___x_324_, 1);
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_a_322_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
v_val_318_ = v___x_327_;
goto v___jp_317_;
}
}
}
else
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
v_a_330_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_337_ == 0)
{
v___x_332_ = v___x_321_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_321_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
lean_ctor_set_tag(v___x_332_, 0);
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_330_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
v_val_318_ = v___x_335_;
goto v___jp_317_;
}
}
}
v___jp_317_:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v_val_318_);
v___x_320_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_315_, v___x_316_, v___x_319_, v___f_312_);
return v___x_320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2___boxed(lean_object* v___f_338_, lean_object* v_bytes_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2(v___f_338_, v_bytes_339_);
lean_dec_ref(v_bytes_339_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5(lean_object* v_a_342_, lean_object* v_x_343_){
_start:
{
if (lean_obj_tag(v_x_343_) == 0)
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_353_; 
v_a_345_ = lean_ctor_get(v_x_343_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v_x_343_);
if (v_isSharedCheck_353_ == 0)
{
v___x_347_ = v_x_343_;
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v_x_343_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_352_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
lean_object* v___x_351_; 
v___x_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
}
}
else
{
lean_object* v___x_354_; 
lean_dec_ref_known(v_x_343_, 1);
v___x_354_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_342_);
return v___x_354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed(lean_object* v_a_355_, lean_object* v_x_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5(v_a_355_, v_x_356_);
lean_dec(v_a_355_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6(lean_object* v_payload_359_, lean_object* v_failurePrefix_360_, lean_object* v___f_361_, lean_object* v___f_362_, uint32_t v_op_363_, uint64_t v_flags_364_, lean_object* v___f_365_, lean_object* v_x_366_){
_start:
{
if (lean_obj_tag(v_x_366_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_376_; 
lean_dec_ref(v___f_365_);
lean_dec_ref(v___f_362_);
lean_dec_ref(v___f_361_);
lean_dec(v_payload_359_);
v_a_368_ = lean_ctor_get(v_x_366_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v_x_366_);
if (v_isSharedCheck_376_ == 0)
{
v___x_370_ = v_x_366_;
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v_x_366_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_375_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_374_; 
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
return v___x_374_;
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_418_; 
v_a_377_ = lean_ctor_get(v_x_366_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v_x_366_);
if (v_isSharedCheck_418_ == 0)
{
v___x_379_ = v_x_366_;
v_isShared_380_ = v_isSharedCheck_418_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v_x_366_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_418_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
uint32_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_381_ = 0;
lean_inc(v_payload_359_);
v___x_382_ = l_Lasm_JS_Wire_encode(v_payload_359_);
v___x_383_ = lean_string_utf8_byte_size(v_failurePrefix_360_);
v___x_384_ = lean_unsigned_to_nat(0u);
v___x_385_ = lean_nat_dec_eq(v___x_383_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___f_386_; lean_object* v_val_388_; lean_object* v___x_393_; 
lean_dec_ref(v___f_365_);
lean_inc(v_a_377_);
v___f_386_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_386_, 0, v_a_377_);
v___x_393_ = lasm_js_call_into(v_a_377_, v_op_363_, v___x_381_, v_flags_364_, v___x_382_, v_payload_359_);
lean_dec(v_payload_359_);
lean_dec_ref(v___x_382_);
lean_dec(v_a_377_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_396_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_a_394_);
lean_dec_ref_known(v___x_393_, 1);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v_a_394_);
v___x_396_ = v___x_379_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_394_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
v_val_388_ = v___x_396_;
goto v___jp_387_;
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; 
v_a_398_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_a_398_);
lean_dec_ref_known(v___x_393_, 1);
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 0);
lean_ctor_set(v___x_379_, 0, v_a_398_);
v___x_400_ = v___x_379_;
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
v_val_388_ = v___x_400_;
goto v___jp_387_;
}
}
v___jp_387_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_389_, 0, v_val_388_);
v___x_390_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_384_, v___x_385_, v___x_389_, v___f_386_);
v___x_391_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_384_, v___x_385_, v___x_390_, v___f_361_);
v___x_392_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_384_, v___x_385_, v___x_391_, v___f_362_);
return v___x_392_;
}
}
else
{
lean_object* v___f_402_; uint8_t v___x_403_; lean_object* v_val_405_; lean_object* v___x_409_; 
lean_dec_ref(v___f_362_);
lean_dec_ref(v___f_361_);
lean_inc(v_a_377_);
v___f_402_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_402_, 0, v_a_377_);
v___x_403_ = 0;
v___x_409_ = lasm_js_call_into(v_a_377_, v_op_363_, v___x_381_, v_flags_364_, v___x_382_, v_payload_359_);
lean_dec(v_payload_359_);
lean_dec_ref(v___x_382_);
lean_dec(v_a_377_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_412_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_409_, 1);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v_a_410_);
v___x_412_ = v___x_379_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
v_val_405_ = v___x_412_;
goto v___jp_404_;
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; 
v_a_414_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_414_);
lean_dec_ref_known(v___x_409_, 1);
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 0);
lean_ctor_set(v___x_379_, 0, v_a_414_);
v___x_416_ = v___x_379_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_414_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
v_val_405_ = v___x_416_;
goto v___jp_404_;
}
}
v___jp_404_:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v_val_405_);
v___x_407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_384_, v___x_403_, v___x_406_, v___f_402_);
v___x_408_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_384_, v___x_403_, v___x_407_, v___f_365_);
return v___x_408_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6___boxed(lean_object* v_payload_419_, lean_object* v_failurePrefix_420_, lean_object* v___f_421_, lean_object* v___f_422_, lean_object* v_op_423_, lean_object* v_flags_424_, lean_object* v___f_425_, lean_object* v_x_426_, lean_object* v___y_427_){
_start:
{
uint32_t v_op_boxed_428_; uint64_t v_flags_boxed_429_; lean_object* v_res_430_; 
v_op_boxed_428_ = lean_unbox_uint32(v_op_423_);
lean_dec(v_op_423_);
v_flags_boxed_429_ = lean_unbox_uint64(v_flags_424_);
lean_dec_ref(v_flags_424_);
v_res_430_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6(v_payload_419_, v_failurePrefix_420_, v___f_421_, v___f_422_, v_op_boxed_428_, v_flags_boxed_429_, v___f_425_, v_x_426_);
lean_dec_ref(v_failurePrefix_420_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3(lean_object* v___f_431_, lean_object* v_x_432_){
_start:
{
if (lean_obj_tag(v_x_432_) == 0)
{
lean_object* v___x_434_; 
lean_dec_ref(v___f_431_);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v_x_432_);
return v___x_434_;
}
else
{
lean_object* v_a_435_; lean_object* v___x_436_; 
v_a_435_ = lean_ctor_get(v_x_432_, 0);
lean_inc(v_a_435_);
lean_dec_ref_known(v_x_432_, 1);
v___x_436_ = lean_apply_2(v___f_431_, v_a_435_, lean_box(0));
return v___x_436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3___boxed(lean_object* v___f_437_, lean_object* v_x_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3(v___f_437_, v_x_438_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1(lean_object* v_context_441_, lean_object* v_x_442_){
_start:
{
lean_object* v_val_445_; 
if (lean_obj_tag(v_x_442_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_455_; 
v_a_447_ = lean_ctor_get(v_x_442_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_442_);
if (v_isSharedCheck_455_ == 0)
{
v___x_449_ = v_x_442_;
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v_x_442_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_454_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; 
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_469_; 
v_a_456_ = lean_ctor_get(v_x_442_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v_x_442_);
if (v_isSharedCheck_469_ == 0)
{
v___x_458_ = v_x_442_;
v_isShared_459_ = v_isSharedCheck_469_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v_x_442_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_469_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(v_context_441_, v_a_456_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_463_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 0, v_a_461_);
v___x_463_ = v___x_458_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
v_val_445_ = v___x_463_;
goto v___jp_444_;
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; 
v_a_465_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_465_);
lean_dec_ref_known(v___x_460_, 1);
if (v_isShared_459_ == 0)
{
lean_ctor_set_tag(v___x_458_, 0);
lean_ctor_set(v___x_458_, 0, v_a_465_);
v___x_467_ = v___x_458_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
v_val_445_ = v___x_467_;
goto v___jp_444_;
}
}
}
}
v___jp_444_:
{
lean_object* v___x_446_; 
v___x_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_446_, 0, v_val_445_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1___boxed(lean_object* v_context_470_, lean_object* v_x_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1(v_context_470_, v_x_471_);
lean_dec_ref(v_context_470_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(lean_object* v_context_474_, uint32_t v_op_475_, uint64_t v_flags_476_, lean_object* v_payload_477_, lean_object* v_failurePrefix_478_){
_start:
{
lean_object* v___f_480_; lean_object* v___f_481_; lean_object* v___f_482_; lean_object* v___f_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___f_486_; lean_object* v___f_487_; lean_object* v___x_488_; uint8_t v___x_489_; lean_object* v_val_491_; lean_object* v___x_494_; 
lean_inc_ref(v_failurePrefix_478_);
v___f_480_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_480_, 0, v_failurePrefix_478_);
v___f_481_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_481_, 0, v_context_474_);
v___f_482_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_482_, 0, v___f_481_);
v___f_483_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_483_, 0, v___f_482_);
v___x_484_ = lean_box_uint32(v_op_475_);
v___x_485_ = lean_box_uint64(v_flags_476_);
lean_inc_ref(v___f_483_);
v___f_486_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_486_, 0, v_payload_477_);
lean_closure_set(v___f_486_, 1, v_failurePrefix_478_);
lean_closure_set(v___f_486_, 2, v___f_480_);
lean_closure_set(v___f_486_, 3, v___f_483_);
lean_closure_set(v___f_486_, 4, v___x_484_);
lean_closure_set(v___f_486_, 5, v___x_485_);
lean_closure_set(v___f_486_, 6, v___f_483_);
v___f_487_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_487_, 0, v___f_486_);
v___x_488_ = lean_unsigned_to_nat(0u);
v___x_489_ = 0;
v___x_494_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
v_a_495_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_494_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_494_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
lean_ctor_set_tag(v___x_497_, 1);
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
v_val_491_ = v___x_500_;
goto v___jp_490_;
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
v_a_503_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_494_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_494_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
lean_ctor_set_tag(v___x_505_, 0);
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
v_val_491_ = v___x_508_;
goto v___jp_490_;
}
}
}
v___jp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_492_, 0, v_val_491_);
v___x_493_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_488_, v___x_489_, v___x_492_, v___f_487_);
return v___x_493_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___boxed(lean_object* v_context_511_, lean_object* v_op_512_, lean_object* v_flags_513_, lean_object* v_payload_514_, lean_object* v_failurePrefix_515_, lean_object* v_a_516_){
_start:
{
uint32_t v_op_boxed_517_; uint64_t v_flags_boxed_518_; lean_object* v_res_519_; 
v_op_boxed_517_ = lean_unbox_uint32(v_op_512_);
lean_dec(v_op_512_);
v_flags_boxed_518_ = lean_unbox_uint64(v_flags_513_);
lean_dec_ref(v_flags_513_);
v_res_519_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(v_context_511_, v_op_boxed_517_, v_flags_boxed_518_, v_payload_514_, v_failurePrefix_515_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(lean_object* v_b_520_, lean_object* v_args_521_){
_start:
{
uint8_t v_construct_523_; lean_object* v___x_524_; uint32_t v___x_525_; uint64_t v___x_526_; uint64_t v___y_528_; 
v_construct_523_ = lean_ctor_get_uint8(v_b_520_, sizeof(void*)*4);
v___x_524_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_520_);
v___x_525_ = 214;
v___x_526_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1);
if (v_construct_523_ == 0)
{
uint64_t v___x_536_; 
v___x_536_ = 0ULL;
v___y_528_ = v___x_536_;
goto v___jp_527_;
}
else
{
uint64_t v___x_537_; 
v___x_537_ = 4ULL;
v___y_528_ = v___x_537_;
goto v___jp_527_;
}
v___jp_527_:
{
uint64_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_529_ = lean_uint64_lor(v___x_526_, v___y_528_);
v___x_530_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_520_, v_args_521_);
v___x_531_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
v___x_532_ = lean_string_append(v___x_531_, v___x_524_);
v___x_533_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0));
v___x_534_ = lean_string_append(v___x_532_, v___x_533_);
v___x_535_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(v___x_524_, v___x_525_, v___x_529_, v___x_530_, v___x_534_);
return v___x_535_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0___boxed(lean_object* v_b_538_, lean_object* v_args_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(v_b_538_, v_args_539_);
lean_dec_ref(v_b_538_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_digest(lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_551_ = ((lean_object*)(l_Lasm_Web_Raw_digest___closed__1));
v___x_552_ = ((lean_object*)(l_Lasm_Web_Raw_randomBytes___closed__3));
v___x_553_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_553_, 0, v_a_548_);
v___x_554_ = lean_array_push(v___x_552_, v___x_553_);
v___x_555_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_555_, 0, v_a_549_);
v___x_556_ = lean_array_push(v___x_554_, v___x_555_);
v___x_557_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(v___x_551_, v___x_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_digest___boxed(lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lasm_Web_Raw_digest(v_a_558_, v_a_559_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomBytes(lean_object* v_n_562_){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = l_Lasm_Web_Raw_randomBytes(v_n_562_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomBytes___boxed(lean_object* v_n_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lasm_Web_Crypto_randomBytes(v_n_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomUUID(){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lasm_Web_Raw_randomUUID();
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomUUID___boxed(lean_object* v_a_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lasm_Web_Crypto_randomUUID();
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_digest(lean_object* v_algorithm_572_, lean_object* v_data_573_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = l_Lasm_Web_Raw_digest(v_algorithm_572_, v_data_573_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_digest___boxed(lean_object* v_algorithm_576_, lean_object* v_data_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lasm_Web_Crypto_digest(v_algorithm_576_, v_data_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_sha256(lean_object* v_data_581_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = ((lean_object*)(l_Lasm_Web_Crypto_sha256___closed__0));
v___x_584_ = l_Lasm_Web_Raw_digest(v___x_583_, v_data_581_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_sha256___boxed(lean_object* v_data_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lasm_Web_Crypto_sha256(v_data_585_);
return v_res_587_;
}
}
LEAN_EXPORT uint32_t l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(uint8_t v_n_588_){
_start:
{
uint8_t v___x_589_; uint8_t v___x_590_; 
v___x_589_ = 10;
v___x_590_ = lean_uint8_dec_lt(v_n_588_, v___x_589_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; uint32_t v___x_594_; 
v___x_591_ = lean_unsigned_to_nat(87u);
v___x_592_ = lean_uint8_to_nat(v_n_588_);
v___x_593_ = lean_nat_add(v___x_591_, v___x_592_);
v___x_594_ = l_Char_ofNat(v___x_593_);
lean_dec(v___x_593_);
return v___x_594_;
}
else
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; uint32_t v___x_598_; 
v___x_595_ = lean_unsigned_to_nat(48u);
v___x_596_ = lean_uint8_to_nat(v_n_588_);
v___x_597_ = lean_nat_add(v___x_595_, v___x_596_);
v___x_598_ = l_Char_ofNat(v___x_597_);
lean_dec(v___x_597_);
return v___x_598_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0___boxed(lean_object* v_n_599_){
_start:
{
uint8_t v_n_boxed_600_; uint32_t v_res_601_; lean_object* v_r_602_; 
v_n_boxed_600_ = lean_unbox(v_n_599_);
v_res_601_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(v_n_boxed_600_);
v_r_602_ = lean_box_uint32(v_res_601_);
return v_r_602_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(lean_object* v_as_603_, size_t v_i_604_, size_t v_stop_605_, lean_object* v_b_606_){
_start:
{
uint8_t v___x_607_; 
v___x_607_ = lean_usize_dec_eq(v_i_604_, v_stop_605_);
if (v___x_607_ == 0)
{
uint8_t v___x_608_; uint8_t v___x_609_; uint8_t v___x_610_; uint8_t v___x_611_; uint32_t v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; uint32_t v___x_615_; lean_object* v___x_616_; size_t v___x_617_; size_t v___x_618_; 
v___x_608_ = lean_byte_array_uget(v_as_603_, v_i_604_);
v___x_609_ = 16;
v___x_610_ = 4;
v___x_611_ = lean_uint8_shift_right(v___x_608_, v___x_610_);
v___x_612_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(v___x_611_);
v___x_613_ = lean_string_push(v_b_606_, v___x_612_);
v___x_614_ = lean_uint8_mod(v___x_608_, v___x_609_);
v___x_615_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(v___x_614_);
v___x_616_ = lean_string_push(v___x_613_, v___x_615_);
v___x_617_ = ((size_t)1ULL);
v___x_618_ = lean_usize_add(v_i_604_, v___x_617_);
v_i_604_ = v___x_618_;
v_b_606_ = v___x_616_;
goto _start;
}
else
{
return v_b_606_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___boxed(lean_object* v_as_620_, lean_object* v_i_621_, lean_object* v_stop_622_, lean_object* v_b_623_){
_start:
{
size_t v_i_boxed_624_; size_t v_stop_boxed_625_; lean_object* v_res_626_; 
v_i_boxed_624_ = lean_unbox_usize(v_i_621_);
lean_dec(v_i_621_);
v_stop_boxed_625_ = lean_unbox_usize(v_stop_622_);
lean_dec(v_stop_622_);
v_res_626_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(v_as_620_, v_i_boxed_624_, v_stop_boxed_625_, v_b_623_);
lean_dec_ref(v_as_620_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_hex(lean_object* v_bytes_627_){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_628_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__4));
v___x_629_ = lean_unsigned_to_nat(0u);
v___x_630_ = lean_byte_array_size(v_bytes_627_);
v___x_631_ = lean_nat_dec_lt(v___x_629_, v___x_630_);
if (v___x_631_ == 0)
{
return v___x_628_;
}
else
{
size_t v___x_632_; size_t v___x_633_; lean_object* v___x_634_; 
v___x_632_ = ((size_t)0ULL);
v___x_633_ = lean_usize_of_nat(v___x_630_);
v___x_634_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(v_bytes_627_, v___x_632_, v___x_633_, v___x_628_);
return v___x_634_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_hex___boxed(lean_object* v_bytes_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lasm_Web_Crypto_hex(v_bytes_635_);
lean_dec_ref(v_bytes_635_);
return v_res_636_;
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
