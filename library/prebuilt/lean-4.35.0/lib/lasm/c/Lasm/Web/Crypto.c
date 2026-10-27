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
v___x_89_ = l_Lasm_JS_Wire_decode(v_a_88_);
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
v___x_225_ = l_Lasm_JS_Wire_decode(v_a_224_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4(lean_object* v___f_289_, lean_object* v_x_290_){
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4___boxed(lean_object* v___f_314_, lean_object* v_x_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4(v___f_314_, v_x_315_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0(lean_object* v_failurePrefix_318_, lean_object* v_x_319_){
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0___boxed(lean_object* v_failurePrefix_334_, lean_object* v_x_335_, lean_object* v___y_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0(v_failurePrefix_334_, v_x_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2(lean_object* v___f_338_, lean_object* v_bytes_339_){
_start:
{
lean_object* v___x_341_; uint8_t v___x_342_; lean_object* v_val_344_; lean_object* v___x_347_; 
v___x_341_ = lean_unsigned_to_nat(0u);
v___x_342_ = 0;
v___x_347_ = l_Lasm_JS_Wire_decode(v_bytes_339_);
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
v_a_348_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_347_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_347_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
lean_ctor_set_tag(v___x_350_, 1);
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
v_val_344_ = v___x_353_;
goto v___jp_343_;
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
v_a_356_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_347_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_347_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 0);
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
v_val_344_ = v___x_361_;
goto v___jp_343_;
}
}
}
v___jp_343_:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_345_, 0, v_val_344_);
v___x_346_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_341_, v___x_342_, v___x_345_, v___f_338_);
return v___x_346_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2___boxed(lean_object* v___f_364_, lean_object* v_bytes_365_, lean_object* v___y_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2(v___f_364_, v_bytes_365_);
lean_dec_ref(v_bytes_365_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5(lean_object* v_a_368_, lean_object* v_x_369_){
_start:
{
if (lean_obj_tag(v_x_369_) == 0)
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_379_; 
v_a_371_ = lean_ctor_get(v_x_369_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v_x_369_);
if (v_isSharedCheck_379_ == 0)
{
v___x_373_ = v_x_369_;
v_isShared_374_ = v_isSharedCheck_379_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v_x_369_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_379_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_371_);
v___x_376_ = v_reuseFailAlloc_378_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; 
v___x_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
}
}
else
{
lean_object* v___x_380_; 
lean_dec_ref_known(v_x_369_, 1);
v___x_380_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_368_);
return v___x_380_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed(lean_object* v_a_381_, lean_object* v_x_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5(v_a_381_, v_x_382_);
lean_dec(v_a_381_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6(lean_object* v_payload_385_, lean_object* v_failurePrefix_386_, lean_object* v___f_387_, lean_object* v___f_388_, uint32_t v_op_389_, uint64_t v_flags_390_, lean_object* v___f_391_, lean_object* v_x_392_){
_start:
{
if (lean_obj_tag(v_x_392_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_402_; 
lean_dec_ref(v___f_391_);
lean_dec_ref(v___f_388_);
lean_dec_ref(v___f_387_);
v_a_394_ = lean_ctor_get(v_x_392_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v_x_392_);
if (v_isSharedCheck_402_ == 0)
{
v___x_396_ = v_x_392_;
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v_x_392_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_401_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
lean_object* v___x_400_; 
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
return v___x_400_;
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_444_; 
v_a_403_ = lean_ctor_get(v_x_392_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v_x_392_);
if (v_isSharedCheck_444_ == 0)
{
v___x_405_ = v_x_392_;
v_isShared_406_ = v_isSharedCheck_444_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v_x_392_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_444_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
uint32_t v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_407_ = 0;
v___x_408_ = l_Lasm_JS_Wire_encode(v_payload_385_);
v___x_409_ = lean_string_utf8_byte_size(v_failurePrefix_386_);
v___x_410_ = lean_unsigned_to_nat(0u);
v___x_411_ = lean_nat_dec_eq(v___x_409_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___f_412_; lean_object* v_val_414_; lean_object* v___x_419_; 
lean_dec_ref(v___f_391_);
lean_inc(v_a_403_);
v___f_412_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_412_, 0, v_a_403_);
v___x_419_ = lasm_js_call_into(v_a_403_, v_op_389_, v___x_407_, v_flags_390_, v___x_408_, v_payload_385_);
lean_dec_ref(v___x_408_);
lean_dec(v_a_403_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_419_, 1);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v_a_420_);
v___x_422_ = v___x_405_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_420_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
v_val_414_ = v___x_422_;
goto v___jp_413_;
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; 
v_a_424_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_419_, 1);
if (v_isShared_406_ == 0)
{
lean_ctor_set_tag(v___x_405_, 0);
lean_ctor_set(v___x_405_, 0, v_a_424_);
v___x_426_ = v___x_405_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
v_val_414_ = v___x_426_;
goto v___jp_413_;
}
}
v___jp_413_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_415_, 0, v_val_414_);
v___x_416_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_410_, v___x_411_, v___x_415_, v___f_412_);
v___x_417_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_410_, v___x_411_, v___x_416_, v___f_387_);
v___x_418_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_410_, v___x_411_, v___x_417_, v___f_388_);
return v___x_418_;
}
}
else
{
lean_object* v___f_428_; uint8_t v___x_429_; lean_object* v_val_431_; lean_object* v___x_435_; 
lean_dec_ref(v___f_388_);
lean_dec_ref(v___f_387_);
lean_inc(v_a_403_);
v___f_428_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_428_, 0, v_a_403_);
v___x_429_ = 0;
v___x_435_ = lasm_js_call_into(v_a_403_, v_op_389_, v___x_407_, v_flags_390_, v___x_408_, v_payload_385_);
lean_dec_ref(v___x_408_);
lean_dec(v_a_403_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_438_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_a_436_);
lean_dec_ref_known(v___x_435_, 1);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v_a_436_);
v___x_438_ = v___x_405_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_436_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
v_val_431_ = v___x_438_;
goto v___jp_430_;
}
}
else
{
lean_object* v_a_440_; lean_object* v___x_442_; 
v_a_440_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_a_440_);
lean_dec_ref_known(v___x_435_, 1);
if (v_isShared_406_ == 0)
{
lean_ctor_set_tag(v___x_405_, 0);
lean_ctor_set(v___x_405_, 0, v_a_440_);
v___x_442_ = v___x_405_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_440_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
v_val_431_ = v___x_442_;
goto v___jp_430_;
}
}
v___jp_430_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v_val_431_);
v___x_433_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_410_, v___x_429_, v___x_432_, v___f_428_);
v___x_434_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_410_, v___x_429_, v___x_433_, v___f_391_);
return v___x_434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6___boxed(lean_object* v_payload_445_, lean_object* v_failurePrefix_446_, lean_object* v___f_447_, lean_object* v___f_448_, lean_object* v_op_449_, lean_object* v_flags_450_, lean_object* v___f_451_, lean_object* v_x_452_, lean_object* v___y_453_){
_start:
{
uint32_t v_op_boxed_454_; uint64_t v_flags_boxed_455_; lean_object* v_res_456_; 
v_op_boxed_454_ = lean_unbox_uint32(v_op_449_);
lean_dec(v_op_449_);
v_flags_boxed_455_ = lean_unbox_uint64(v_flags_450_);
lean_dec_ref(v_flags_450_);
v_res_456_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6(v_payload_445_, v_failurePrefix_446_, v___f_447_, v___f_448_, v_op_boxed_454_, v_flags_boxed_455_, v___f_451_, v_x_452_);
lean_dec_ref(v_failurePrefix_446_);
lean_dec(v_payload_445_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3(lean_object* v___f_457_, lean_object* v_x_458_){
_start:
{
if (lean_obj_tag(v_x_458_) == 0)
{
lean_object* v___x_460_; 
lean_dec_ref(v___f_457_);
v___x_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_460_, 0, v_x_458_);
return v___x_460_;
}
else
{
lean_object* v_a_461_; lean_object* v___x_462_; 
v_a_461_ = lean_ctor_get(v_x_458_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v_x_458_, 1);
v___x_462_ = lean_apply_2(v___f_457_, v_a_461_, lean_box(0));
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3___boxed(lean_object* v___f_463_, lean_object* v_x_464_, lean_object* v___y_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3(v___f_463_, v_x_464_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1(lean_object* v_context_467_, lean_object* v_x_468_){
_start:
{
lean_object* v_val_471_; 
if (lean_obj_tag(v_x_468_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_481_; 
v_a_473_ = lean_ctor_get(v_x_468_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v_x_468_);
if (v_isSharedCheck_481_ == 0)
{
v___x_475_ = v_x_468_;
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v_x_468_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_480_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; 
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_495_; 
v_a_482_ = lean_ctor_get(v_x_468_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v_x_468_);
if (v_isSharedCheck_495_ == 0)
{
v___x_484_ = v_x_468_;
v_isShared_485_ = v_isSharedCheck_495_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v_x_468_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_495_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0(v_context_467_, v_a_482_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_489_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v___x_486_, 1);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 0, v_a_487_);
v___x_489_ = v___x_484_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_487_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
v_val_471_ = v___x_489_;
goto v___jp_470_;
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; 
v_a_491_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_486_, 1);
if (v_isShared_485_ == 0)
{
lean_ctor_set_tag(v___x_484_, 0);
lean_ctor_set(v___x_484_, 0, v_a_491_);
v___x_493_ = v___x_484_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_491_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
v_val_471_ = v___x_493_;
goto v___jp_470_;
}
}
}
}
v___jp_470_:
{
lean_object* v___x_472_; 
v___x_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_472_, 0, v_val_471_);
return v___x_472_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1___boxed(lean_object* v_context_496_, lean_object* v_x_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1(v_context_496_, v_x_497_);
lean_dec_ref(v_context_496_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(lean_object* v_context_500_, uint32_t v_op_501_, uint64_t v_flags_502_, lean_object* v_payload_503_, lean_object* v_failurePrefix_504_){
_start:
{
lean_object* v___f_506_; lean_object* v___f_507_; lean_object* v___f_508_; lean_object* v___f_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___f_512_; lean_object* v___f_513_; lean_object* v___x_514_; uint8_t v___x_515_; lean_object* v_val_517_; lean_object* v___x_520_; 
lean_inc_ref(v_failurePrefix_504_);
v___f_506_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_506_, 0, v_failurePrefix_504_);
v___f_507_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_507_, 0, v_context_500_);
v___f_508_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_508_, 0, v___f_507_);
v___f_509_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_509_, 0, v___f_508_);
v___x_510_ = lean_box_uint32(v_op_501_);
v___x_511_ = lean_box_uint64(v_flags_502_);
lean_inc_ref(v___f_509_);
v___f_512_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_512_, 0, v_payload_503_);
lean_closure_set(v___f_512_, 1, v_failurePrefix_504_);
lean_closure_set(v___f_512_, 2, v___f_506_);
lean_closure_set(v___f_512_, 3, v___f_509_);
lean_closure_set(v___f_512_, 4, v___x_510_);
lean_closure_set(v___f_512_, 5, v___x_511_);
lean_closure_set(v___f_512_, 6, v___f_509_);
v___f_513_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_513_, 0, v___f_512_);
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = 0;
v___x_520_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
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
lean_ctor_set_tag(v___x_523_, 1);
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
v_val_517_ = v___x_526_;
goto v___jp_516_;
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
lean_ctor_set_tag(v___x_531_, 0);
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
v_val_517_ = v___x_534_;
goto v___jp_516_;
}
}
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_518_, 0, v_val_517_);
v___x_519_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_514_, v___x_515_, v___x_518_, v___f_513_);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0___boxed(lean_object* v_context_537_, lean_object* v_op_538_, lean_object* v_flags_539_, lean_object* v_payload_540_, lean_object* v_failurePrefix_541_, lean_object* v_a_542_){
_start:
{
uint32_t v_op_boxed_543_; uint64_t v_flags_boxed_544_; lean_object* v_res_545_; 
v_op_boxed_543_ = lean_unbox_uint32(v_op_538_);
lean_dec(v_op_538_);
v_flags_boxed_544_ = lean_unbox_uint64(v_flags_539_);
lean_dec_ref(v_flags_539_);
v_res_545_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(v_context_537_, v_op_boxed_543_, v_flags_boxed_544_, v_payload_540_, v_failurePrefix_541_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(lean_object* v_b_546_, lean_object* v_args_547_){
_start:
{
uint8_t v_construct_549_; lean_object* v___x_550_; uint32_t v___x_551_; uint64_t v___x_552_; uint64_t v___y_554_; 
v_construct_549_ = lean_ctor_get_uint8(v_b_546_, sizeof(void*)*4);
v___x_550_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_546_);
v___x_551_ = 214;
v___x_552_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__1);
if (v_construct_549_ == 0)
{
uint64_t v___x_562_; 
v___x_562_ = 0ULL;
v___y_554_ = v___x_562_;
goto v___jp_553_;
}
else
{
uint64_t v___x_563_; 
v___x_563_ = 4ULL;
v___y_554_ = v___x_563_;
goto v___jp_553_;
}
v___jp_553_:
{
uint64_t v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_555_ = lean_uint64_lor(v___x_552_, v___y_554_);
v___x_556_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_546_, v_args_547_);
v___x_557_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__1));
v___x_558_ = lean_string_append(v___x_557_, v___x_550_);
v___x_559_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0___closed__0));
v___x_560_ = lean_string_append(v___x_558_, v___x_559_);
v___x_561_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0_spec__0(v___x_550_, v___x_551_, v___x_555_, v___x_556_, v___x_560_);
return v___x_561_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0___boxed(lean_object* v_b_564_, lean_object* v_args_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(v_b_564_, v_args_565_);
lean_dec_ref(v_b_564_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_digest(lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_577_ = ((lean_object*)(l_Lasm_Web_Raw_digest___closed__1));
v___x_578_ = ((lean_object*)(l_Lasm_Web_Raw_randomBytes___closed__3));
v___x_579_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_579_, 0, v_a_574_);
v___x_580_ = lean_array_push(v___x_578_, v___x_579_);
v___x_581_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_581_, 0, v_a_575_);
v___x_582_ = lean_array_push(v___x_580_, v___x_581_);
v___x_583_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_digest_spec__0(v___x_577_, v___x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_digest___boxed(lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lasm_Web_Raw_digest(v_a_584_, v_a_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomBytes(lean_object* v_n_588_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lasm_Web_Raw_randomBytes(v_n_588_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomBytes___boxed(lean_object* v_n_591_, lean_object* v_a_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lasm_Web_Crypto_randomBytes(v_n_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomUUID(){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lasm_Web_Raw_randomUUID();
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_randomUUID___boxed(lean_object* v_a_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lasm_Web_Crypto_randomUUID();
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_digest(lean_object* v_algorithm_598_, lean_object* v_data_599_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lasm_Web_Raw_digest(v_algorithm_598_, v_data_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_digest___boxed(lean_object* v_algorithm_602_, lean_object* v_data_603_, lean_object* v_a_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l_Lasm_Web_Crypto_digest(v_algorithm_602_, v_data_603_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_sha256(lean_object* v_data_607_){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = ((lean_object*)(l_Lasm_Web_Crypto_sha256___closed__0));
v___x_610_ = l_Lasm_Web_Raw_digest(v___x_609_, v_data_607_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_sha256___boxed(lean_object* v_data_611_, lean_object* v_a_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lasm_Web_Crypto_sha256(v_data_611_);
return v_res_613_;
}
}
LEAN_EXPORT uint32_t l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(uint8_t v_n_614_){
_start:
{
uint8_t v___x_615_; uint8_t v___x_616_; 
v___x_615_ = 10;
v___x_616_ = lean_uint8_dec_lt(v_n_614_, v___x_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; uint32_t v___x_620_; 
v___x_617_ = lean_unsigned_to_nat(87u);
v___x_618_ = lean_uint8_to_nat(v_n_614_);
v___x_619_ = lean_nat_add(v___x_617_, v___x_618_);
v___x_620_ = l_Char_ofNat(v___x_619_);
lean_dec(v___x_619_);
return v___x_620_;
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; uint32_t v___x_624_; 
v___x_621_ = lean_unsigned_to_nat(48u);
v___x_622_ = lean_uint8_to_nat(v_n_614_);
v___x_623_ = lean_nat_add(v___x_621_, v___x_622_);
v___x_624_ = l_Char_ofNat(v___x_623_);
lean_dec(v___x_623_);
return v___x_624_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0___boxed(lean_object* v_n_625_){
_start:
{
uint8_t v_n_boxed_626_; uint32_t v_res_627_; lean_object* v_r_628_; 
v_n_boxed_626_ = lean_unbox(v_n_625_);
v_res_627_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(v_n_boxed_626_);
v_r_628_ = lean_box_uint32(v_res_627_);
return v_r_628_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(lean_object* v_as_629_, size_t v_i_630_, size_t v_stop_631_, lean_object* v_b_632_){
_start:
{
uint8_t v___x_633_; 
v___x_633_ = lean_usize_dec_eq(v_i_630_, v_stop_631_);
if (v___x_633_ == 0)
{
uint8_t v___x_634_; uint8_t v___x_635_; uint8_t v___x_636_; uint8_t v___x_637_; uint32_t v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; uint32_t v___x_641_; lean_object* v___x_642_; size_t v___x_643_; size_t v___x_644_; 
v___x_634_ = lean_byte_array_uget(v_as_629_, v_i_630_);
v___x_635_ = 16;
v___x_636_ = 4;
v___x_637_ = lean_uint8_shift_right(v___x_634_, v___x_636_);
v___x_638_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(v___x_637_);
v___x_639_ = lean_string_push(v_b_632_, v___x_638_);
v___x_640_ = lean_uint8_mod(v___x_634_, v___x_635_);
v___x_641_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___lam__0(v___x_640_);
v___x_642_ = lean_string_push(v___x_639_, v___x_641_);
v___x_643_ = ((size_t)1ULL);
v___x_644_ = lean_usize_add(v_i_630_, v___x_643_);
v_i_630_ = v___x_644_;
v_b_632_ = v___x_642_;
goto _start;
}
else
{
return v_b_632_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0___boxed(lean_object* v_as_646_, lean_object* v_i_647_, lean_object* v_stop_648_, lean_object* v_b_649_){
_start:
{
size_t v_i_boxed_650_; size_t v_stop_boxed_651_; lean_object* v_res_652_; 
v_i_boxed_650_ = lean_unbox_usize(v_i_647_);
lean_dec(v_i_647_);
v_stop_boxed_651_ = lean_unbox_usize(v_stop_648_);
lean_dec(v_stop_648_);
v_res_652_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(v_as_646_, v_i_boxed_650_, v_stop_boxed_651_, v_b_649_);
lean_dec_ref(v_as_646_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_hex(lean_object* v_bytes_653_){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_654_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_randomBytes_spec__0_spec__0___closed__0));
v___x_655_ = lean_unsigned_to_nat(0u);
v___x_656_ = lean_byte_array_size(v_bytes_653_);
v___x_657_ = lean_nat_dec_lt(v___x_655_, v___x_656_);
if (v___x_657_ == 0)
{
return v___x_654_;
}
else
{
uint8_t v___x_658_; 
v___x_658_ = lean_nat_dec_le(v___x_656_, v___x_656_);
if (v___x_658_ == 0)
{
if (v___x_657_ == 0)
{
return v___x_654_;
}
else
{
size_t v___x_659_; size_t v___x_660_; lean_object* v___x_661_; 
v___x_659_ = ((size_t)0ULL);
v___x_660_ = lean_usize_of_nat(v___x_656_);
v___x_661_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(v_bytes_653_, v___x_659_, v___x_660_, v___x_654_);
return v___x_661_;
}
}
else
{
size_t v___x_662_; size_t v___x_663_; lean_object* v___x_664_; 
v___x_662_ = ((size_t)0ULL);
v___x_663_ = lean_usize_of_nat(v___x_656_);
v___x_664_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_Web_Crypto_hex_spec__0(v_bytes_653_, v___x_662_, v___x_663_, v___x_654_);
return v___x_664_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Crypto_hex___boxed(lean_object* v_bytes_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lasm_Web_Crypto_hex(v_bytes_665_);
lean_dec_ref(v_bytes_665_);
return v_res_666_;
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
