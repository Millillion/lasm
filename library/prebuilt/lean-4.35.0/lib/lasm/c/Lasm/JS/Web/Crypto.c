// Lean compiler output
// Module: Lasm.JS.Web.Crypto
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support
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
lean_object* lean_string_append(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_instToJSByteArray___lam__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCrypto___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSCrypto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSCrypto___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSCrypto___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCrypto___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCrypto = (const lean_object*)&l_Lasm_JS_Web_instToJSCrypto___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCrypto___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCrypto___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCrypto___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCrypto___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCrypto___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSCrypto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSCrypto___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSCrypto___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCrypto___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCrypto___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Web.Crypto"};
static const lean_object* l_Lasm_JS_Web_instFromJSCrypto___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCrypto___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCrypto___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSCrypto___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCrypto___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCrypto___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCrypto___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCrypto = (const lean_object*)&l_Lasm_JS_Web_instFromJSCrypto___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCryptoKey = (const lean_object*)&l_Lasm_JS_Web_instToJSCrypto___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCryptoKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Web.CryptoKey"};
static const lean_object* l_Lasm_JS_Web_instFromJSCryptoKey___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKey___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCryptoKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSCrypto___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKey___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCryptoKey___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKey___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCryptoKey = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKey___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSSubtleCrypto = (const lean_object*)&l_Lasm_JS_Web_instToJSCrypto___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSSubtleCrypto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.SubtleCrypto"};
static const lean_object* l_Lasm_JS_Web_instFromJSSubtleCrypto___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSSubtleCrypto___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSSubtleCrypto___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSCrypto___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSSubtleCrypto___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSSubtleCrypto___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSSubtleCrypto___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSSubtleCrypto = (const lean_object*)&l_Lasm_JS_Web_instFromJSSubtleCrypto___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqKeyType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqKeyType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqKeyType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqKeyType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqKeyType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqKeyType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqKeyType = (const lean_object*)&l_Lasm_JS_Web_instBEqKeyType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.KeyType.public"};
static const lean_object* l_Lasm_JS_Web_instReprKeyType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.KeyType.private"};
static const lean_object* l_Lasm_JS_Web_instReprKeyType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyType_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.KeyType.secret"};
static const lean_object* l_Lasm_JS_Web_instReprKeyType_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyType_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyType_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyType_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyType_repr___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprKeyType_repr___closed__6;
static lean_once_cell_t l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprKeyType_repr___closed__7;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprKeyType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprKeyType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprKeyType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprKeyType = (const lean_object*)&l_Lasm_JS_Web_instReprKeyType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedKeyType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedKeyType;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "secret"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSKeyType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSKeyType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSKeyType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSKeyType = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSKeyType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSKeyType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSKeyType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSKeyType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Web.KeyType"};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyType___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyType___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSKeyType = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqKeyUsage_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqKeyUsage_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqKeyUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqKeyUsage_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqKeyUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqKeyUsage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqKeyUsage = (const lean_object*)&l_Lasm_JS_Web_instBEqKeyUsage___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.KeyUsage.encrypt"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.KeyUsage.decrypt"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.KeyUsage.sign"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.KeyUsage.verify"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.KeyUsage.deriveKey"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.KeyUsage.deriveBits"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__11_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.KeyUsage.wrapKey"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__12_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__13 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__13_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.KeyUsage.unwrapKey"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__14 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__14_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__15 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__15_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Web.KeyUsage.encapsulateKey"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__16 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__16_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__17 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__17_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.KeyUsage.encapsulateBits"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__18 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__18_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__19 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__19_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Web.KeyUsage.decapsulateKey"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__20 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__20_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__21 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__21_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.KeyUsage.decapsulateBits"};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__22 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyUsage_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__22_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___closed__23 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage_repr___closed__23_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprKeyUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprKeyUsage_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprKeyUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprKeyUsage = (const lean_object*)&l_Lasm_JS_Web_instReprKeyUsage___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedKeyUsage_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedKeyUsage;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "encrypt"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "decrypt"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sign"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "verify"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "deriveKey"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "deriveBits"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "wrapKey"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "unwrapKey"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "encapsulateKey"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__16_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__17_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "encapsulateBits"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__18 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__18_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__19 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__19_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "decapsulateKey"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__20 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__20_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__21 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__21_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "decapsulateBits"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__22 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__22_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__23 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__23_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSKeyUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSKeyUsage___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSKeyUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSKeyUsage = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyUsage___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__11_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSKeyUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSKeyUsage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Web.KeyUsage"};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyUsage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSKeyUsage = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyUsage___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqKeyFormat_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqKeyFormat_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqKeyFormat_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqKeyFormat = (const lean_object*)&l_Lasm_JS_Web_instBEqKeyFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.KeyFormat.rawPublic"};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Web.KeyFormat.rawPrivate"};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.KeyFormat.rawSeed"};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.KeyFormat.rawSecret"};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.KeyFormat.raw"};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.KeyFormat.spki"};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__11_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.KeyFormat.pkcs8"};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__12_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__13 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__13_value;
static const lean_string_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.KeyFormat.jwk"};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__14 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprKeyFormat_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__14_value)}};
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___closed__15 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat_repr___closed__15_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprKeyFormat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprKeyFormat = (const lean_object*)&l_Lasm_JS_Web_instReprKeyFormat___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedKeyFormat_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedKeyFormat;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "raw-public"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "raw-private"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "raw-seed"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "raw-secret"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "raw"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "spki"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pkcs8"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "jwk"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSKeyFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSKeyFormat = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyFormat___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSKeyFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Web.KeyFormat"};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyFormat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSKeyFormat = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyFormat___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAlgorithmIdentifier___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAlgorithmIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAlgorithmIdentifier___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAlgorithmIdentifier___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAlgorithmIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAlgorithmIdentifier = (const lean_object*)&l_Lasm_JS_Web_instToJSAlgorithmIdentifier___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "publicKey"};
static const lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "privateKey"};
static const lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1;
static const lean_string_object l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.CryptoKeyPair"};
static const lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKey_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKey_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKeyPair_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKeyPair_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.CryptoKeyOrCryptoKeyPair"};
static const lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair = (const lean_object*)&l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1;
static const lean_string_object l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.RsaOtherPrimesInfo"};
static const lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "kty"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "use"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "key_ops"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alg"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ext"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "crv"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "q"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dp"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dq"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "qi"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "oth"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instToJSJsonWebKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___closed__0;
static const lean_closure_object l_Lasm_JS_Web_instToJSJsonWebKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSJsonWebKey___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_instToJSJsonWebKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___closed__2;
static lean_once_cell_t l_Lasm_JS_Web_instToJSJsonWebKey___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSJsonWebKey;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5;
static const lean_string_object l_Lasm_JS_Web_instFromJSJsonWebKey___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.JsonWebKey"};
static const lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__6_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_jsonWebKey_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_jsonWebKey_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey = (const lean_object*)&l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_arrayBuffer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_arrayBuffer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_jsonWebKey_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_jsonWebKey_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Option (Bool)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__8_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__9 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Option (Array (String))"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "an element is not String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__5_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Option (Array (Lasm.JS.Web.RsaOtherPrimesInfo))"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "an element is not Lasm.JS.Web.RsaOtherPrimesInfo"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ArrayBufferOrJsonWebKey"};
static const lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "Lasm.JS.Web: expected a ArrayBufferOrJsonWebKey, received JavaScript "};
static const lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAlgorithm___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAlgorithm___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAlgorithm = (const lean_object*)&l_Lasm_JS_Web_instToJSAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSKeyAlgorithm = (const lean_object*)&l_Lasm_JS_Web_instToJSAlgorithm___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "modulusLength"};
static const lean_object* l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "publicExponent"};
static const lean_object* l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaKeyGenParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaKeyGenParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaKeyGenParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRsaKeyGenParams = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaKeyGenParams___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hash"};
static const lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaKeyAlgorithm___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaKeyAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSRsaKeyAlgorithm___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaKeyAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaKeyAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRsaKeyAlgorithm = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaKeyAlgorithm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedImportParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaHashedImportParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSRsaHashedImportParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaHashedImportParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaHashedImportParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRsaHashedImportParams = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaHashedImportParams___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSRsaPssParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "saltLength"};
static const lean_object* l_Lasm_JS_Web_instToJSRsaPssParams___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaPssParams___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaPssParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaPssParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSRsaPssParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaPssParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaPssParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRsaPssParams = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaPssParams___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaOaepParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSByteArray___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaOaepParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOaepParams___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSRsaOaepParams___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSRsaOaepParams___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSRsaOaepParams___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOaepParams___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRsaOaepParams = (const lean_object*)&l_Lasm_JS_Web_instToJSRsaOaepParams___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcdsaParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEcdsaParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEcdsaParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSEcdsaParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEcdsaParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEcdsaParams = (const lean_object*)&l_Lasm_JS_Web_instToJSEcdsaParams___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "namedCurve"};
static const lean_object* l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEcKeyGenParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSEcKeyGenParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEcKeyGenParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEcKeyGenParams = (const lean_object*)&l_Lasm_JS_Web_instToJSEcKeyGenParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyAlgorithm___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEcKeyAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEcKeyAlgorithm___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSEcKeyAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEcKeyAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEcKeyAlgorithm = (const lean_object*)&l_Lasm_JS_Web_instToJSEcKeyAlgorithm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyImportParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEcKeyImportParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEcKeyImportParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSEcKeyImportParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEcKeyImportParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEcKeyImportParams = (const lean_object*)&l_Lasm_JS_Web_instToJSEcKeyImportParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams = (const lean_object*)&l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "counter"};
static const lean_object* l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesCtrParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAesCtrParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAesCtrParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAesCtrParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesCtrParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAesCtrParams = (const lean_object*)&l_Lasm_JS_Web_instToJSAesCtrParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesKeyAlgorithm___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAesKeyAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAesKeyAlgorithm___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAesKeyAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesKeyAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAesKeyAlgorithm = (const lean_object*)&l_Lasm_JS_Web_instToJSAesKeyAlgorithm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesKeyGenParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAesKeyGenParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAesKeyGenParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAesKeyGenParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesKeyGenParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAesKeyGenParams = (const lean_object*)&l_Lasm_JS_Web_instToJSAesKeyGenParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesDerivedKeyParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAesDerivedKeyParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAesDerivedKeyParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAesDerivedKeyParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesDerivedKeyParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAesDerivedKeyParams = (const lean_object*)&l_Lasm_JS_Web_instToJSAesDerivedKeyParams___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSAesCbcParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "iv"};
static const lean_object* l_Lasm_JS_Web_instToJSAesCbcParams___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesCbcParams___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesCbcParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAesCbcParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAesCbcParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAesCbcParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesCbcParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAesCbcParams = (const lean_object*)&l_Lasm_JS_Web_instToJSAesCbcParams___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "additionalData"};
static const lean_object* l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tagLength"};
static const lean_object* l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesGcmParams___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAesGcmParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAesGcmParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesGcmParams___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSAesGcmParams___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAesGcmParams___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSRsaOaepParams___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSAesGcmParams___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSAesGcmParams___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSAesGcmParams___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAesGcmParams = (const lean_object*)&l_Lasm_JS_Web_instToJSAesGcmParams___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacImportParams___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSHmacImportParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSHmacImportParams___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAesGcmParams___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSHmacImportParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSHmacImportParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSHmacImportParams = (const lean_object*)&l_Lasm_JS_Web_instToJSHmacImportParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacKeyAlgorithm___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSHmacKeyAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSHmacKeyAlgorithm___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSHmacKeyAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSHmacKeyAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSHmacKeyAlgorithm = (const lean_object*)&l_Lasm_JS_Web_instToJSHmacKeyAlgorithm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacKeyGenParams___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSHmacKeyGenParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSHmacKeyGenParams___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAesGcmParams___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSHmacKeyGenParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSHmacKeyGenParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSHmacKeyGenParams = (const lean_object*)&l_Lasm_JS_Web_instToJSHmacKeyGenParams___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "salt"};
static const lean_object* l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHkdfParams___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSHkdfParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSHkdfParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSHkdfParams___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSHkdfParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSHkdfParams = (const lean_object*)&l_Lasm_JS_Web_instToJSHkdfParams___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "iterations"};
static const lean_object* l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSPbkdf2Params___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSPbkdf2Params___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSPbkdf2Params___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSPbkdf2Params = (const lean_object*)&l_Lasm_JS_Web_instToJSPbkdf2Params___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Crypto_subtle___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "subtle"};
static const lean_object* l_Lasm_JS_Web_Crypto_subtle___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Crypto_subtle___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Crypto_getRandomValues___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getRandomValues"};
static const lean_object* l_Lasm_JS_Web_Crypto_getRandomValues___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Crypto_getRandomValues___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Crypto_randomUUID___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "randomUUID"};
static const lean_object* l_Lasm_JS_Web_Crypto_randomUUID___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Crypto_randomUUID___closed__0_value;
static const lean_array_object l_Lasm_JS_Web_Crypto_randomUUID___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_Crypto_randomUUID___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Crypto_randomUUID___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_Crypto_randomUUID___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_Crypto_randomUUID___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CryptoKey_type___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_JS_Web_CryptoKey_type___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CryptoKey_type___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CryptoKey_extractable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "extractable"};
static const lean_object* l_Lasm_JS_Web_CryptoKey_extractable___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CryptoKey_extractable___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CryptoKey_algorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "algorithm"};
static const lean_object* l_Lasm_JS_Web_CryptoKey_algorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CryptoKey_algorithm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CryptoKey_usages___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "usages"};
static const lean_object* l_Lasm_JS_Web_CryptoKey_usages___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CryptoKey_usages___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_SubtleCrypto_digest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "digest"};
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_digest___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_digest___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Option (Lasm.JS.Web.CryptoKey)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_SubtleCrypto_generateKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "generateKey"};
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_generateKey___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_deriveBits_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3(lean_object*);
static const lean_string_object l_Lasm_JS_Web_SubtleCrypto_importKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "importKey"};
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_importKey___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__0_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__1_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__1_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "exportKey"};
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web: empty global path"};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_crypto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "crypto"};
static const lean_object* l_Lasm_JS_Web_crypto___closed__0 = (const lean_object*)&l_Lasm_JS_Web_crypto___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_crypto___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_crypto___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_crypto___closed__1 = (const lean_object*)&l_Lasm_JS_Web_crypto___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCrypto___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCrypto___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCrypto___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCrypto___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSCrypto___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorIdx(uint8_t v_x_36_){
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
default: 
{
lean_object* v___x_39_; 
v___x_39_ = lean_unsigned_to_nat(2u);
return v___x_39_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorIdx___boxed(lean_object* v_x_40_){
_start:
{
uint8_t v_x_boxed_41_; lean_object* v_res_42_; 
v_x_boxed_41_ = lean_unbox(v_x_40_);
v_res_42_ = l_Lasm_JS_Web_KeyType_ctorIdx(v_x_boxed_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim___redArg(lean_object* v_k_43_){
_start:
{
lean_inc(v_k_43_);
return v_k_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim___redArg___boxed(lean_object* v_k_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lasm_JS_Web_KeyType_ctorElim___redArg(v_k_44_);
lean_dec(v_k_44_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim(lean_object* v_motive_46_, lean_object* v_ctorIdx_47_, uint8_t v_t_48_, lean_object* v_h_49_, lean_object* v_k_50_){
_start:
{
lean_inc(v_k_50_);
return v_k_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim___boxed(lean_object* v_motive_51_, lean_object* v_ctorIdx_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_k_55_){
_start:
{
uint8_t v_t_boxed_56_; lean_object* v_res_57_; 
v_t_boxed_56_ = lean_unbox(v_t_53_);
v_res_57_ = l_Lasm_JS_Web_KeyType_ctorElim(v_motive_51_, v_ctorIdx_52_, v_t_boxed_56_, v_h_54_, v_k_55_);
lean_dec(v_k_55_);
lean_dec(v_ctorIdx_52_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim___redArg(lean_object* v_public_58_){
_start:
{
lean_inc(v_public_58_);
return v_public_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim___redArg___boxed(lean_object* v_public_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lasm_JS_Web_KeyType_public_elim___redArg(v_public_59_);
lean_dec(v_public_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim(lean_object* v_motive_61_, uint8_t v_t_62_, lean_object* v_h_63_, lean_object* v_public_64_){
_start:
{
lean_inc(v_public_64_);
return v_public_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim___boxed(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_public_68_){
_start:
{
uint8_t v_t_boxed_69_; lean_object* v_res_70_; 
v_t_boxed_69_ = lean_unbox(v_t_66_);
v_res_70_ = l_Lasm_JS_Web_KeyType_public_elim(v_motive_65_, v_t_boxed_69_, v_h_67_, v_public_68_);
lean_dec(v_public_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim___redArg(lean_object* v_private_71_){
_start:
{
lean_inc(v_private_71_);
return v_private_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim___redArg___boxed(lean_object* v_private_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lasm_JS_Web_KeyType_private_elim___redArg(v_private_72_);
lean_dec(v_private_72_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim(lean_object* v_motive_74_, uint8_t v_t_75_, lean_object* v_h_76_, lean_object* v_private_77_){
_start:
{
lean_inc(v_private_77_);
return v_private_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim___boxed(lean_object* v_motive_78_, lean_object* v_t_79_, lean_object* v_h_80_, lean_object* v_private_81_){
_start:
{
uint8_t v_t_boxed_82_; lean_object* v_res_83_; 
v_t_boxed_82_ = lean_unbox(v_t_79_);
v_res_83_ = l_Lasm_JS_Web_KeyType_private_elim(v_motive_78_, v_t_boxed_82_, v_h_80_, v_private_81_);
lean_dec(v_private_81_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim___redArg(lean_object* v_secret_84_){
_start:
{
lean_inc(v_secret_84_);
return v_secret_84_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim___redArg___boxed(lean_object* v_secret_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lasm_JS_Web_KeyType_secret_elim___redArg(v_secret_85_);
lean_dec(v_secret_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim(lean_object* v_motive_87_, uint8_t v_t_88_, lean_object* v_h_89_, lean_object* v_secret_90_){
_start:
{
lean_inc(v_secret_90_);
return v_secret_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim___boxed(lean_object* v_motive_91_, lean_object* v_t_92_, lean_object* v_h_93_, lean_object* v_secret_94_){
_start:
{
uint8_t v_t_boxed_95_; lean_object* v_res_96_; 
v_t_boxed_95_ = lean_unbox(v_t_92_);
v_res_96_ = l_Lasm_JS_Web_KeyType_secret_elim(v_motive_91_, v_t_boxed_95_, v_h_93_, v_secret_94_);
lean_dec(v_secret_94_);
return v_res_96_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqKeyType_beq(uint8_t v_x_97_, uint8_t v_y_98_){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_99_ = l_Lasm_JS_Web_KeyType_ctorIdx(v_x_97_);
v___x_100_ = l_Lasm_JS_Web_KeyType_ctorIdx(v_y_98_);
v___x_101_ = lean_nat_dec_eq(v___x_99_, v___x_100_);
lean_dec(v___x_100_);
lean_dec(v___x_99_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqKeyType_beq___boxed(lean_object* v_x_102_, lean_object* v_y_103_){
_start:
{
uint8_t v_x_21__boxed_104_; uint8_t v_y_22__boxed_105_; uint8_t v_res_106_; lean_object* v_r_107_; 
v_x_21__boxed_104_ = lean_unbox(v_x_102_);
v_y_22__boxed_105_ = lean_unbox(v_y_103_);
v_res_106_ = l_Lasm_JS_Web_instBEqKeyType_beq(v_x_21__boxed_104_, v_y_22__boxed_105_);
v_r_107_ = lean_box(v_res_106_);
return v_r_107_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(2u);
v___x_120_ = lean_nat_to_int(v___x_119_);
return v___x_120_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_nat_to_int(v___x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyType_repr(uint8_t v_x_123_, lean_object* v_prec_124_){
_start:
{
lean_object* v___y_126_; lean_object* v___y_133_; lean_object* v___y_140_; 
switch(v_x_123_)
{
case 0:
{
lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_146_ = lean_unsigned_to_nat(1024u);
v___x_147_ = lean_nat_dec_le(v___x_146_, v_prec_124_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; 
v___x_148_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_126_ = v___x_148_;
goto v___jp_125_;
}
else
{
lean_object* v___x_149_; 
v___x_149_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_126_ = v___x_149_;
goto v___jp_125_;
}
}
case 1:
{
lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = lean_unsigned_to_nat(1024u);
v___x_151_ = lean_nat_dec_le(v___x_150_, v_prec_124_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
v___x_152_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_133_ = v___x_152_;
goto v___jp_132_;
}
else
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_133_ = v___x_153_;
goto v___jp_132_;
}
}
default: 
{
lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_154_ = lean_unsigned_to_nat(1024u);
v___x_155_ = lean_nat_dec_le(v___x_154_, v_prec_124_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; 
v___x_156_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_140_ = v___x_156_;
goto v___jp_139_;
}
else
{
lean_object* v___x_157_; 
v___x_157_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_140_ = v___x_157_;
goto v___jp_139_;
}
}
}
v___jp_125_:
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_127_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyType_repr___closed__1));
lean_inc(v___y_126_);
v___x_128_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_128_, 0, v___y_126_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = 0;
v___x_130_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_130_, 0, v___x_128_);
lean_ctor_set_uint8(v___x_130_, sizeof(void*)*1, v___x_129_);
v___x_131_ = l_Repr_addAppParen(v___x_130_, v_prec_124_);
return v___x_131_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_134_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyType_repr___closed__3));
lean_inc(v___y_133_);
v___x_135_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_135_, 0, v___y_133_);
lean_ctor_set(v___x_135_, 1, v___x_134_);
v___x_136_ = 0;
v___x_137_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_137_, 0, v___x_135_);
lean_ctor_set_uint8(v___x_137_, sizeof(void*)*1, v___x_136_);
v___x_138_ = l_Repr_addAppParen(v___x_137_, v_prec_124_);
return v___x_138_;
}
v___jp_139_:
{
lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_141_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyType_repr___closed__5));
lean_inc(v___y_140_);
v___x_142_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_142_, 0, v___y_140_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = 0;
v___x_144_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set_uint8(v___x_144_, sizeof(void*)*1, v___x_143_);
v___x_145_ = l_Repr_addAppParen(v___x_144_, v_prec_124_);
return v___x_145_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyType_repr___boxed(lean_object* v_x_158_, lean_object* v_prec_159_){
_start:
{
uint8_t v_x_171__boxed_160_; lean_object* v_res_161_; 
v_x_171__boxed_160_ = lean_unbox(v_x_158_);
v_res_161_ = l_Lasm_JS_Web_instReprKeyType_repr(v_x_171__boxed_160_, v_prec_159_);
lean_dec(v_prec_159_);
return v_res_161_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyType_default(void){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = 0;
return v___x_164_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyType(void){
_start:
{
uint8_t v___x_165_; 
v___x_165_ = 0;
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0(uint8_t v_x_175_){
_start:
{
switch(v_x_175_)
{
case 0:
{
lean_object* v___x_176_; 
v___x_176_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__1));
return v___x_176_;
}
case 1:
{
lean_object* v___x_177_; 
v___x_177_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__3));
return v___x_177_;
}
default: 
{
lean_object* v___x_178_; 
v___x_178_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__5));
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0___boxed(lean_object* v_x_179_){
_start:
{
uint8_t v_x_57__boxed_180_; lean_object* v_res_181_; 
v_x_57__boxed_180_ = lean_unbox(v_x_179_);
v_res_181_ = l_Lasm_JS_Web_instToJSKeyType___lam__0(v_x_57__boxed_180_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0(lean_object* v_x_196_){
_start:
{
if (lean_obj_tag(v_x_196_) == 4)
{
lean_object* v_s_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v_s_199_ = lean_ctor_get(v_x_196_, 0);
v___x_200_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0));
v___x_201_ = lean_string_dec_eq(v_s_199_, v___x_200_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_202_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2));
v___x_203_ = lean_string_dec_eq(v_s_199_, v___x_202_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_204_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4));
v___x_205_ = lean_string_dec_eq(v_s_199_, v___x_204_);
if (v___x_205_ == 0)
{
goto v___jp_197_;
}
else
{
lean_object* v___x_206_; 
v___x_206_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__2));
return v___x_206_;
}
}
else
{
lean_object* v___x_207_; 
v___x_207_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__3));
return v___x_207_;
}
}
else
{
lean_object* v___x_208_; 
v___x_208_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__4));
return v___x_208_;
}
}
else
{
goto v___jp_197_;
}
v___jp_197_:
{
lean_object* v___x_198_; 
v___x_198_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__1));
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0___boxed(lean_object* v_x_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lasm_JS_Web_instFromJSKeyType___lam__0(v_x_209_);
lean_dec(v_x_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorIdx(uint8_t v_x_218_){
_start:
{
switch(v_x_218_)
{
case 0:
{
lean_object* v___x_219_; 
v___x_219_ = lean_unsigned_to_nat(0u);
return v___x_219_;
}
case 1:
{
lean_object* v___x_220_; 
v___x_220_ = lean_unsigned_to_nat(1u);
return v___x_220_;
}
case 2:
{
lean_object* v___x_221_; 
v___x_221_ = lean_unsigned_to_nat(2u);
return v___x_221_;
}
case 3:
{
lean_object* v___x_222_; 
v___x_222_ = lean_unsigned_to_nat(3u);
return v___x_222_;
}
case 4:
{
lean_object* v___x_223_; 
v___x_223_ = lean_unsigned_to_nat(4u);
return v___x_223_;
}
case 5:
{
lean_object* v___x_224_; 
v___x_224_ = lean_unsigned_to_nat(5u);
return v___x_224_;
}
case 6:
{
lean_object* v___x_225_; 
v___x_225_ = lean_unsigned_to_nat(6u);
return v___x_225_;
}
case 7:
{
lean_object* v___x_226_; 
v___x_226_ = lean_unsigned_to_nat(7u);
return v___x_226_;
}
case 8:
{
lean_object* v___x_227_; 
v___x_227_ = lean_unsigned_to_nat(8u);
return v___x_227_;
}
case 9:
{
lean_object* v___x_228_; 
v___x_228_ = lean_unsigned_to_nat(9u);
return v___x_228_;
}
case 10:
{
lean_object* v___x_229_; 
v___x_229_ = lean_unsigned_to_nat(10u);
return v___x_229_;
}
default: 
{
lean_object* v___x_230_; 
v___x_230_ = lean_unsigned_to_nat(11u);
return v___x_230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorIdx___boxed(lean_object* v_x_231_){
_start:
{
uint8_t v_x_boxed_232_; lean_object* v_res_233_; 
v_x_boxed_232_ = lean_unbox(v_x_231_);
v_res_233_ = l_Lasm_JS_Web_KeyUsage_ctorIdx(v_x_boxed_232_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim___redArg(lean_object* v_k_234_){
_start:
{
lean_inc(v_k_234_);
return v_k_234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim___redArg___boxed(lean_object* v_k_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lasm_JS_Web_KeyUsage_ctorElim___redArg(v_k_235_);
lean_dec(v_k_235_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim(lean_object* v_motive_237_, lean_object* v_ctorIdx_238_, uint8_t v_t_239_, lean_object* v_h_240_, lean_object* v_k_241_){
_start:
{
lean_inc(v_k_241_);
return v_k_241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim___boxed(lean_object* v_motive_242_, lean_object* v_ctorIdx_243_, lean_object* v_t_244_, lean_object* v_h_245_, lean_object* v_k_246_){
_start:
{
uint8_t v_t_boxed_247_; lean_object* v_res_248_; 
v_t_boxed_247_ = lean_unbox(v_t_244_);
v_res_248_ = l_Lasm_JS_Web_KeyUsage_ctorElim(v_motive_242_, v_ctorIdx_243_, v_t_boxed_247_, v_h_245_, v_k_246_);
lean_dec(v_k_246_);
lean_dec(v_ctorIdx_243_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim___redArg(lean_object* v_encrypt_249_){
_start:
{
lean_inc(v_encrypt_249_);
return v_encrypt_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim___redArg___boxed(lean_object* v_encrypt_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lasm_JS_Web_KeyUsage_encrypt_elim___redArg(v_encrypt_250_);
lean_dec(v_encrypt_250_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim(lean_object* v_motive_252_, uint8_t v_t_253_, lean_object* v_h_254_, lean_object* v_encrypt_255_){
_start:
{
lean_inc(v_encrypt_255_);
return v_encrypt_255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim___boxed(lean_object* v_motive_256_, lean_object* v_t_257_, lean_object* v_h_258_, lean_object* v_encrypt_259_){
_start:
{
uint8_t v_t_boxed_260_; lean_object* v_res_261_; 
v_t_boxed_260_ = lean_unbox(v_t_257_);
v_res_261_ = l_Lasm_JS_Web_KeyUsage_encrypt_elim(v_motive_256_, v_t_boxed_260_, v_h_258_, v_encrypt_259_);
lean_dec(v_encrypt_259_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim___redArg(lean_object* v_decrypt_262_){
_start:
{
lean_inc(v_decrypt_262_);
return v_decrypt_262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim___redArg___boxed(lean_object* v_decrypt_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lasm_JS_Web_KeyUsage_decrypt_elim___redArg(v_decrypt_263_);
lean_dec(v_decrypt_263_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim(lean_object* v_motive_265_, uint8_t v_t_266_, lean_object* v_h_267_, lean_object* v_decrypt_268_){
_start:
{
lean_inc(v_decrypt_268_);
return v_decrypt_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim___boxed(lean_object* v_motive_269_, lean_object* v_t_270_, lean_object* v_h_271_, lean_object* v_decrypt_272_){
_start:
{
uint8_t v_t_boxed_273_; lean_object* v_res_274_; 
v_t_boxed_273_ = lean_unbox(v_t_270_);
v_res_274_ = l_Lasm_JS_Web_KeyUsage_decrypt_elim(v_motive_269_, v_t_boxed_273_, v_h_271_, v_decrypt_272_);
lean_dec(v_decrypt_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim___redArg(lean_object* v_sign_275_){
_start:
{
lean_inc(v_sign_275_);
return v_sign_275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim___redArg___boxed(lean_object* v_sign_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lasm_JS_Web_KeyUsage_sign_elim___redArg(v_sign_276_);
lean_dec(v_sign_276_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim(lean_object* v_motive_278_, uint8_t v_t_279_, lean_object* v_h_280_, lean_object* v_sign_281_){
_start:
{
lean_inc(v_sign_281_);
return v_sign_281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim___boxed(lean_object* v_motive_282_, lean_object* v_t_283_, lean_object* v_h_284_, lean_object* v_sign_285_){
_start:
{
uint8_t v_t_boxed_286_; lean_object* v_res_287_; 
v_t_boxed_286_ = lean_unbox(v_t_283_);
v_res_287_ = l_Lasm_JS_Web_KeyUsage_sign_elim(v_motive_282_, v_t_boxed_286_, v_h_284_, v_sign_285_);
lean_dec(v_sign_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim___redArg(lean_object* v_verify_288_){
_start:
{
lean_inc(v_verify_288_);
return v_verify_288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim___redArg___boxed(lean_object* v_verify_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lasm_JS_Web_KeyUsage_verify_elim___redArg(v_verify_289_);
lean_dec(v_verify_289_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim(lean_object* v_motive_291_, uint8_t v_t_292_, lean_object* v_h_293_, lean_object* v_verify_294_){
_start:
{
lean_inc(v_verify_294_);
return v_verify_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim___boxed(lean_object* v_motive_295_, lean_object* v_t_296_, lean_object* v_h_297_, lean_object* v_verify_298_){
_start:
{
uint8_t v_t_boxed_299_; lean_object* v_res_300_; 
v_t_boxed_299_ = lean_unbox(v_t_296_);
v_res_300_ = l_Lasm_JS_Web_KeyUsage_verify_elim(v_motive_295_, v_t_boxed_299_, v_h_297_, v_verify_298_);
lean_dec(v_verify_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim___redArg(lean_object* v_deriveKey_301_){
_start:
{
lean_inc(v_deriveKey_301_);
return v_deriveKey_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim___redArg___boxed(lean_object* v_deriveKey_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lasm_JS_Web_KeyUsage_deriveKey_elim___redArg(v_deriveKey_302_);
lean_dec(v_deriveKey_302_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim(lean_object* v_motive_304_, uint8_t v_t_305_, lean_object* v_h_306_, lean_object* v_deriveKey_307_){
_start:
{
lean_inc(v_deriveKey_307_);
return v_deriveKey_307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim___boxed(lean_object* v_motive_308_, lean_object* v_t_309_, lean_object* v_h_310_, lean_object* v_deriveKey_311_){
_start:
{
uint8_t v_t_boxed_312_; lean_object* v_res_313_; 
v_t_boxed_312_ = lean_unbox(v_t_309_);
v_res_313_ = l_Lasm_JS_Web_KeyUsage_deriveKey_elim(v_motive_308_, v_t_boxed_312_, v_h_310_, v_deriveKey_311_);
lean_dec(v_deriveKey_311_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim___redArg(lean_object* v_deriveBits_314_){
_start:
{
lean_inc(v_deriveBits_314_);
return v_deriveBits_314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim___redArg___boxed(lean_object* v_deriveBits_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lasm_JS_Web_KeyUsage_deriveBits_elim___redArg(v_deriveBits_315_);
lean_dec(v_deriveBits_315_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim(lean_object* v_motive_317_, uint8_t v_t_318_, lean_object* v_h_319_, lean_object* v_deriveBits_320_){
_start:
{
lean_inc(v_deriveBits_320_);
return v_deriveBits_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim___boxed(lean_object* v_motive_321_, lean_object* v_t_322_, lean_object* v_h_323_, lean_object* v_deriveBits_324_){
_start:
{
uint8_t v_t_boxed_325_; lean_object* v_res_326_; 
v_t_boxed_325_ = lean_unbox(v_t_322_);
v_res_326_ = l_Lasm_JS_Web_KeyUsage_deriveBits_elim(v_motive_321_, v_t_boxed_325_, v_h_323_, v_deriveBits_324_);
lean_dec(v_deriveBits_324_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim___redArg(lean_object* v_wrapKey_327_){
_start:
{
lean_inc(v_wrapKey_327_);
return v_wrapKey_327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim___redArg___boxed(lean_object* v_wrapKey_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lasm_JS_Web_KeyUsage_wrapKey_elim___redArg(v_wrapKey_328_);
lean_dec(v_wrapKey_328_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim(lean_object* v_motive_330_, uint8_t v_t_331_, lean_object* v_h_332_, lean_object* v_wrapKey_333_){
_start:
{
lean_inc(v_wrapKey_333_);
return v_wrapKey_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim___boxed(lean_object* v_motive_334_, lean_object* v_t_335_, lean_object* v_h_336_, lean_object* v_wrapKey_337_){
_start:
{
uint8_t v_t_boxed_338_; lean_object* v_res_339_; 
v_t_boxed_338_ = lean_unbox(v_t_335_);
v_res_339_ = l_Lasm_JS_Web_KeyUsage_wrapKey_elim(v_motive_334_, v_t_boxed_338_, v_h_336_, v_wrapKey_337_);
lean_dec(v_wrapKey_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___redArg(lean_object* v_unwrapKey_340_){
_start:
{
lean_inc(v_unwrapKey_340_);
return v_unwrapKey_340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___redArg___boxed(lean_object* v_unwrapKey_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___redArg(v_unwrapKey_341_);
lean_dec(v_unwrapKey_341_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim(lean_object* v_motive_343_, uint8_t v_t_344_, lean_object* v_h_345_, lean_object* v_unwrapKey_346_){
_start:
{
lean_inc(v_unwrapKey_346_);
return v_unwrapKey_346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___boxed(lean_object* v_motive_347_, lean_object* v_t_348_, lean_object* v_h_349_, lean_object* v_unwrapKey_350_){
_start:
{
uint8_t v_t_boxed_351_; lean_object* v_res_352_; 
v_t_boxed_351_ = lean_unbox(v_t_348_);
v_res_352_ = l_Lasm_JS_Web_KeyUsage_unwrapKey_elim(v_motive_347_, v_t_boxed_351_, v_h_349_, v_unwrapKey_350_);
lean_dec(v_unwrapKey_350_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___redArg(lean_object* v_encapsulateKey_353_){
_start:
{
lean_inc(v_encapsulateKey_353_);
return v_encapsulateKey_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___redArg___boxed(lean_object* v_encapsulateKey_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___redArg(v_encapsulateKey_354_);
lean_dec(v_encapsulateKey_354_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim(lean_object* v_motive_356_, uint8_t v_t_357_, lean_object* v_h_358_, lean_object* v_encapsulateKey_359_){
_start:
{
lean_inc(v_encapsulateKey_359_);
return v_encapsulateKey_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___boxed(lean_object* v_motive_360_, lean_object* v_t_361_, lean_object* v_h_362_, lean_object* v_encapsulateKey_363_){
_start:
{
uint8_t v_t_boxed_364_; lean_object* v_res_365_; 
v_t_boxed_364_ = lean_unbox(v_t_361_);
v_res_365_ = l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim(v_motive_360_, v_t_boxed_364_, v_h_362_, v_encapsulateKey_363_);
lean_dec(v_encapsulateKey_363_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___redArg(lean_object* v_encapsulateBits_366_){
_start:
{
lean_inc(v_encapsulateBits_366_);
return v_encapsulateBits_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___redArg___boxed(lean_object* v_encapsulateBits_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___redArg(v_encapsulateBits_367_);
lean_dec(v_encapsulateBits_367_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim(lean_object* v_motive_369_, uint8_t v_t_370_, lean_object* v_h_371_, lean_object* v_encapsulateBits_372_){
_start:
{
lean_inc(v_encapsulateBits_372_);
return v_encapsulateBits_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___boxed(lean_object* v_motive_373_, lean_object* v_t_374_, lean_object* v_h_375_, lean_object* v_encapsulateBits_376_){
_start:
{
uint8_t v_t_boxed_377_; lean_object* v_res_378_; 
v_t_boxed_377_ = lean_unbox(v_t_374_);
v_res_378_ = l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim(v_motive_373_, v_t_boxed_377_, v_h_375_, v_encapsulateBits_376_);
lean_dec(v_encapsulateBits_376_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___redArg(lean_object* v_decapsulateKey_379_){
_start:
{
lean_inc(v_decapsulateKey_379_);
return v_decapsulateKey_379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___redArg___boxed(lean_object* v_decapsulateKey_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___redArg(v_decapsulateKey_380_);
lean_dec(v_decapsulateKey_380_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim(lean_object* v_motive_382_, uint8_t v_t_383_, lean_object* v_h_384_, lean_object* v_decapsulateKey_385_){
_start:
{
lean_inc(v_decapsulateKey_385_);
return v_decapsulateKey_385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___boxed(lean_object* v_motive_386_, lean_object* v_t_387_, lean_object* v_h_388_, lean_object* v_decapsulateKey_389_){
_start:
{
uint8_t v_t_boxed_390_; lean_object* v_res_391_; 
v_t_boxed_390_ = lean_unbox(v_t_387_);
v_res_391_ = l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim(v_motive_386_, v_t_boxed_390_, v_h_388_, v_decapsulateKey_389_);
lean_dec(v_decapsulateKey_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___redArg(lean_object* v_decapsulateBits_392_){
_start:
{
lean_inc(v_decapsulateBits_392_);
return v_decapsulateBits_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___redArg___boxed(lean_object* v_decapsulateBits_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___redArg(v_decapsulateBits_393_);
lean_dec(v_decapsulateBits_393_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim(lean_object* v_motive_395_, uint8_t v_t_396_, lean_object* v_h_397_, lean_object* v_decapsulateBits_398_){
_start:
{
lean_inc(v_decapsulateBits_398_);
return v_decapsulateBits_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___boxed(lean_object* v_motive_399_, lean_object* v_t_400_, lean_object* v_h_401_, lean_object* v_decapsulateBits_402_){
_start:
{
uint8_t v_t_boxed_403_; lean_object* v_res_404_; 
v_t_boxed_403_ = lean_unbox(v_t_400_);
v_res_404_ = l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim(v_motive_399_, v_t_boxed_403_, v_h_401_, v_decapsulateBits_402_);
lean_dec(v_decapsulateBits_402_);
return v_res_404_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqKeyUsage_beq(uint8_t v_x_405_, uint8_t v_y_406_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_407_ = l_Lasm_JS_Web_KeyUsage_ctorIdx(v_x_405_);
v___x_408_ = l_Lasm_JS_Web_KeyUsage_ctorIdx(v_y_406_);
v___x_409_ = lean_nat_dec_eq(v___x_407_, v___x_408_);
lean_dec(v___x_408_);
lean_dec(v___x_407_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqKeyUsage_beq___boxed(lean_object* v_x_410_, lean_object* v_y_411_){
_start:
{
uint8_t v_x_21__boxed_412_; uint8_t v_y_22__boxed_413_; uint8_t v_res_414_; lean_object* v_r_415_; 
v_x_21__boxed_412_ = lean_unbox(v_x_410_);
v_y_22__boxed_413_ = lean_unbox(v_y_411_);
v_res_414_ = l_Lasm_JS_Web_instBEqKeyUsage_beq(v_x_21__boxed_412_, v_y_22__boxed_413_);
v_r_415_ = lean_box(v_res_414_);
return v_r_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr(uint8_t v_x_454_, lean_object* v_prec_455_){
_start:
{
lean_object* v___y_457_; lean_object* v___y_464_; lean_object* v___y_471_; lean_object* v___y_478_; lean_object* v___y_485_; lean_object* v___y_492_; lean_object* v___y_499_; lean_object* v___y_506_; lean_object* v___y_513_; lean_object* v___y_520_; lean_object* v___y_527_; lean_object* v___y_534_; 
switch(v_x_454_)
{
case 0:
{
lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_540_ = lean_unsigned_to_nat(1024u);
v___x_541_ = lean_nat_dec_le(v___x_540_, v_prec_455_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
v___x_542_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_457_ = v___x_542_;
goto v___jp_456_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_457_ = v___x_543_;
goto v___jp_456_;
}
}
case 1:
{
lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_544_ = lean_unsigned_to_nat(1024u);
v___x_545_ = lean_nat_dec_le(v___x_544_, v_prec_455_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
v___x_546_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_464_ = v___x_546_;
goto v___jp_463_;
}
else
{
lean_object* v___x_547_; 
v___x_547_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_464_ = v___x_547_;
goto v___jp_463_;
}
}
case 2:
{
lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_548_ = lean_unsigned_to_nat(1024u);
v___x_549_ = lean_nat_dec_le(v___x_548_, v_prec_455_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; 
v___x_550_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_471_ = v___x_550_;
goto v___jp_470_;
}
else
{
lean_object* v___x_551_; 
v___x_551_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_471_ = v___x_551_;
goto v___jp_470_;
}
}
case 3:
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = lean_unsigned_to_nat(1024u);
v___x_553_ = lean_nat_dec_le(v___x_552_, v_prec_455_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; 
v___x_554_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_478_ = v___x_554_;
goto v___jp_477_;
}
else
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_478_ = v___x_555_;
goto v___jp_477_;
}
}
case 4:
{
lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_556_ = lean_unsigned_to_nat(1024u);
v___x_557_ = lean_nat_dec_le(v___x_556_, v_prec_455_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; 
v___x_558_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_485_ = v___x_558_;
goto v___jp_484_;
}
else
{
lean_object* v___x_559_; 
v___x_559_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_485_ = v___x_559_;
goto v___jp_484_;
}
}
case 5:
{
lean_object* v___x_560_; uint8_t v___x_561_; 
v___x_560_ = lean_unsigned_to_nat(1024u);
v___x_561_ = lean_nat_dec_le(v___x_560_, v_prec_455_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; 
v___x_562_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_492_ = v___x_562_;
goto v___jp_491_;
}
else
{
lean_object* v___x_563_; 
v___x_563_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_492_ = v___x_563_;
goto v___jp_491_;
}
}
case 6:
{
lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_564_ = lean_unsigned_to_nat(1024u);
v___x_565_ = lean_nat_dec_le(v___x_564_, v_prec_455_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; 
v___x_566_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_499_ = v___x_566_;
goto v___jp_498_;
}
else
{
lean_object* v___x_567_; 
v___x_567_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_499_ = v___x_567_;
goto v___jp_498_;
}
}
case 7:
{
lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_568_ = lean_unsigned_to_nat(1024u);
v___x_569_ = lean_nat_dec_le(v___x_568_, v_prec_455_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
v___x_570_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_506_ = v___x_570_;
goto v___jp_505_;
}
else
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_506_ = v___x_571_;
goto v___jp_505_;
}
}
case 8:
{
lean_object* v___x_572_; uint8_t v___x_573_; 
v___x_572_ = lean_unsigned_to_nat(1024u);
v___x_573_ = lean_nat_dec_le(v___x_572_, v_prec_455_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; 
v___x_574_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_513_ = v___x_574_;
goto v___jp_512_;
}
else
{
lean_object* v___x_575_; 
v___x_575_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_513_ = v___x_575_;
goto v___jp_512_;
}
}
case 9:
{
lean_object* v___x_576_; uint8_t v___x_577_; 
v___x_576_ = lean_unsigned_to_nat(1024u);
v___x_577_ = lean_nat_dec_le(v___x_576_, v_prec_455_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; 
v___x_578_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_520_ = v___x_578_;
goto v___jp_519_;
}
else
{
lean_object* v___x_579_; 
v___x_579_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_520_ = v___x_579_;
goto v___jp_519_;
}
}
case 10:
{
lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_580_ = lean_unsigned_to_nat(1024u);
v___x_581_ = lean_nat_dec_le(v___x_580_, v_prec_455_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; 
v___x_582_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_527_ = v___x_582_;
goto v___jp_526_;
}
else
{
lean_object* v___x_583_; 
v___x_583_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_527_ = v___x_583_;
goto v___jp_526_;
}
}
default: 
{
lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_584_ = lean_unsigned_to_nat(1024u);
v___x_585_ = lean_nat_dec_le(v___x_584_, v_prec_455_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; 
v___x_586_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_534_ = v___x_586_;
goto v___jp_533_;
}
else
{
lean_object* v___x_587_; 
v___x_587_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_534_ = v___x_587_;
goto v___jp_533_;
}
}
}
v___jp_456_:
{
lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_458_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__1));
lean_inc(v___y_457_);
v___x_459_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_459_, 0, v___y_457_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
v___x_460_ = 0;
v___x_461_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set_uint8(v___x_461_, sizeof(void*)*1, v___x_460_);
v___x_462_ = l_Repr_addAppParen(v___x_461_, v_prec_455_);
return v___x_462_;
}
v___jp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_465_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__3));
lean_inc(v___y_464_);
v___x_466_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_466_, 0, v___y_464_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = 0;
v___x_468_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_468_, 0, v___x_466_);
lean_ctor_set_uint8(v___x_468_, sizeof(void*)*1, v___x_467_);
v___x_469_ = l_Repr_addAppParen(v___x_468_, v_prec_455_);
return v___x_469_;
}
v___jp_470_:
{
lean_object* v___x_472_; lean_object* v___x_473_; uint8_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_472_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__5));
lean_inc(v___y_471_);
v___x_473_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_473_, 0, v___y_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = 0;
v___x_475_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_475_, 0, v___x_473_);
lean_ctor_set_uint8(v___x_475_, sizeof(void*)*1, v___x_474_);
v___x_476_ = l_Repr_addAppParen(v___x_475_, v_prec_455_);
return v___x_476_;
}
v___jp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_479_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__7));
lean_inc(v___y_478_);
v___x_480_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_480_, 0, v___y_478_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = 0;
v___x_482_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_482_, 0, v___x_480_);
lean_ctor_set_uint8(v___x_482_, sizeof(void*)*1, v___x_481_);
v___x_483_ = l_Repr_addAppParen(v___x_482_, v_prec_455_);
return v___x_483_;
}
v___jp_484_:
{
lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_486_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__9));
lean_inc(v___y_485_);
v___x_487_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_487_, 0, v___y_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = 0;
v___x_489_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set_uint8(v___x_489_, sizeof(void*)*1, v___x_488_);
v___x_490_ = l_Repr_addAppParen(v___x_489_, v_prec_455_);
return v___x_490_;
}
v___jp_491_:
{
lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_493_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__11));
lean_inc(v___y_492_);
v___x_494_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_494_, 0, v___y_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = 0;
v___x_496_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_496_, 0, v___x_494_);
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*1, v___x_495_);
v___x_497_ = l_Repr_addAppParen(v___x_496_, v_prec_455_);
return v___x_497_;
}
v___jp_498_:
{
lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_500_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__13));
lean_inc(v___y_499_);
v___x_501_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_501_, 0, v___y_499_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
v___x_502_ = 0;
v___x_503_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set_uint8(v___x_503_, sizeof(void*)*1, v___x_502_);
v___x_504_ = l_Repr_addAppParen(v___x_503_, v_prec_455_);
return v___x_504_;
}
v___jp_505_:
{
lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_507_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__15));
lean_inc(v___y_506_);
v___x_508_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_508_, 0, v___y_506_);
lean_ctor_set(v___x_508_, 1, v___x_507_);
v___x_509_ = 0;
v___x_510_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_510_, 0, v___x_508_);
lean_ctor_set_uint8(v___x_510_, sizeof(void*)*1, v___x_509_);
v___x_511_ = l_Repr_addAppParen(v___x_510_, v_prec_455_);
return v___x_511_;
}
v___jp_512_:
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_514_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__17));
lean_inc(v___y_513_);
v___x_515_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_515_, 0, v___y_513_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = 0;
v___x_517_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_517_, 0, v___x_515_);
lean_ctor_set_uint8(v___x_517_, sizeof(void*)*1, v___x_516_);
v___x_518_ = l_Repr_addAppParen(v___x_517_, v_prec_455_);
return v___x_518_;
}
v___jp_519_:
{
lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_521_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__19));
lean_inc(v___y_520_);
v___x_522_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_522_, 0, v___y_520_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = 0;
v___x_524_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set_uint8(v___x_524_, sizeof(void*)*1, v___x_523_);
v___x_525_ = l_Repr_addAppParen(v___x_524_, v_prec_455_);
return v___x_525_;
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_528_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__21));
lean_inc(v___y_527_);
v___x_529_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_529_, 0, v___y_527_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___x_530_ = 0;
v___x_531_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set_uint8(v___x_531_, sizeof(void*)*1, v___x_530_);
v___x_532_ = l_Repr_addAppParen(v___x_531_, v_prec_455_);
return v___x_532_;
}
v___jp_533_:
{
lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_535_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__23));
lean_inc(v___y_534_);
v___x_536_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_536_, 0, v___y_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = 0;
v___x_538_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_538_, 0, v___x_536_);
lean_ctor_set_uint8(v___x_538_, sizeof(void*)*1, v___x_537_);
v___x_539_ = l_Repr_addAppParen(v___x_538_, v_prec_455_);
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___boxed(lean_object* v_x_588_, lean_object* v_prec_589_){
_start:
{
uint8_t v_x_653__boxed_590_; lean_object* v_res_591_; 
v_x_653__boxed_590_ = lean_unbox(v_x_588_);
v_res_591_ = l_Lasm_JS_Web_instReprKeyUsage_repr(v_x_653__boxed_590_, v_prec_589_);
lean_dec(v_prec_589_);
return v_res_591_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyUsage_default(void){
_start:
{
uint8_t v___x_594_; 
v___x_594_ = 0;
return v___x_594_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyUsage(void){
_start:
{
uint8_t v___x_595_; 
v___x_595_ = 0;
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0(uint8_t v_x_632_){
_start:
{
switch(v_x_632_)
{
case 0:
{
lean_object* v___x_633_; 
v___x_633_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__1));
return v___x_633_;
}
case 1:
{
lean_object* v___x_634_; 
v___x_634_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__3));
return v___x_634_;
}
case 2:
{
lean_object* v___x_635_; 
v___x_635_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__5));
return v___x_635_;
}
case 3:
{
lean_object* v___x_636_; 
v___x_636_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__7));
return v___x_636_;
}
case 4:
{
lean_object* v___x_637_; 
v___x_637_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__9));
return v___x_637_;
}
case 5:
{
lean_object* v___x_638_; 
v___x_638_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__11));
return v___x_638_;
}
case 6:
{
lean_object* v___x_639_; 
v___x_639_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__13));
return v___x_639_;
}
case 7:
{
lean_object* v___x_640_; 
v___x_640_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__15));
return v___x_640_;
}
case 8:
{
lean_object* v___x_641_; 
v___x_641_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__17));
return v___x_641_;
}
case 9:
{
lean_object* v___x_642_; 
v___x_642_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__19));
return v___x_642_;
}
case 10:
{
lean_object* v___x_643_; 
v___x_643_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__21));
return v___x_643_;
}
default: 
{
lean_object* v___x_644_; 
v___x_644_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__23));
return v___x_644_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___boxed(lean_object* v_x_645_){
_start:
{
uint8_t v_x_210__boxed_646_; lean_object* v_res_647_; 
v_x_210__boxed_646_ = lean_unbox(v_x_645_);
v_res_647_ = l_Lasm_JS_Web_instToJSKeyUsage___lam__0(v_x_210__boxed_646_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0(lean_object* v_x_688_){
_start:
{
if (lean_obj_tag(v_x_688_) == 4)
{
lean_object* v_s_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v_s_691_ = lean_ctor_get(v_x_688_, 0);
v___x_692_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0));
v___x_693_ = lean_string_dec_eq(v_s_691_, v___x_692_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_694_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2));
v___x_695_ = lean_string_dec_eq(v_s_691_, v___x_694_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4));
v___x_697_ = lean_string_dec_eq(v_s_691_, v___x_696_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; uint8_t v___x_699_; 
v___x_698_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6));
v___x_699_ = lean_string_dec_eq(v_s_691_, v___x_698_);
if (v___x_699_ == 0)
{
lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_700_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8));
v___x_701_ = lean_string_dec_eq(v_s_691_, v___x_700_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; uint8_t v___x_703_; 
v___x_702_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10));
v___x_703_ = lean_string_dec_eq(v_s_691_, v___x_702_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_704_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12));
v___x_705_ = lean_string_dec_eq(v_s_691_, v___x_704_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; uint8_t v___x_707_; 
v___x_706_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14));
v___x_707_ = lean_string_dec_eq(v_s_691_, v___x_706_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_708_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__16));
v___x_709_ = lean_string_dec_eq(v_s_691_, v___x_708_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_710_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__18));
v___x_711_ = lean_string_dec_eq(v_s_691_, v___x_710_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_712_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__20));
v___x_713_ = lean_string_dec_eq(v_s_691_, v___x_712_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__22));
v___x_715_ = lean_string_dec_eq(v_s_691_, v___x_714_);
if (v___x_715_ == 0)
{
goto v___jp_689_;
}
else
{
lean_object* v___x_716_; 
v___x_716_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__1));
return v___x_716_;
}
}
else
{
lean_object* v___x_717_; 
v___x_717_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__2));
return v___x_717_;
}
}
else
{
lean_object* v___x_718_; 
v___x_718_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__3));
return v___x_718_;
}
}
else
{
lean_object* v___x_719_; 
v___x_719_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__4));
return v___x_719_;
}
}
else
{
lean_object* v___x_720_; 
v___x_720_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__5));
return v___x_720_;
}
}
else
{
lean_object* v___x_721_; 
v___x_721_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__6));
return v___x_721_;
}
}
else
{
lean_object* v___x_722_; 
v___x_722_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__7));
return v___x_722_;
}
}
else
{
lean_object* v___x_723_; 
v___x_723_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__8));
return v___x_723_;
}
}
else
{
lean_object* v___x_724_; 
v___x_724_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__9));
return v___x_724_;
}
}
else
{
lean_object* v___x_725_; 
v___x_725_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__10));
return v___x_725_;
}
}
else
{
lean_object* v___x_726_; 
v___x_726_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__11));
return v___x_726_;
}
}
else
{
lean_object* v___x_727_; 
v___x_727_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__12));
return v___x_727_;
}
}
else
{
goto v___jp_689_;
}
v___jp_689_:
{
lean_object* v___x_690_; 
v___x_690_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__0));
return v___x_690_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___boxed(lean_object* v_x_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lasm_JS_Web_instFromJSKeyUsage___lam__0(v_x_728_);
lean_dec(v_x_728_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorIdx(uint8_t v_x_737_){
_start:
{
switch(v_x_737_)
{
case 0:
{
lean_object* v___x_738_; 
v___x_738_ = lean_unsigned_to_nat(0u);
return v___x_738_;
}
case 1:
{
lean_object* v___x_739_; 
v___x_739_ = lean_unsigned_to_nat(1u);
return v___x_739_;
}
case 2:
{
lean_object* v___x_740_; 
v___x_740_ = lean_unsigned_to_nat(2u);
return v___x_740_;
}
case 3:
{
lean_object* v___x_741_; 
v___x_741_ = lean_unsigned_to_nat(3u);
return v___x_741_;
}
case 4:
{
lean_object* v___x_742_; 
v___x_742_ = lean_unsigned_to_nat(4u);
return v___x_742_;
}
case 5:
{
lean_object* v___x_743_; 
v___x_743_ = lean_unsigned_to_nat(5u);
return v___x_743_;
}
case 6:
{
lean_object* v___x_744_; 
v___x_744_ = lean_unsigned_to_nat(6u);
return v___x_744_;
}
default: 
{
lean_object* v___x_745_; 
v___x_745_ = lean_unsigned_to_nat(7u);
return v___x_745_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorIdx___boxed(lean_object* v_x_746_){
_start:
{
uint8_t v_x_boxed_747_; lean_object* v_res_748_; 
v_x_boxed_747_ = lean_unbox(v_x_746_);
v_res_748_ = l_Lasm_JS_Web_KeyFormat_ctorIdx(v_x_boxed_747_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim___redArg(lean_object* v_k_749_){
_start:
{
lean_inc(v_k_749_);
return v_k_749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim___redArg___boxed(lean_object* v_k_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lasm_JS_Web_KeyFormat_ctorElim___redArg(v_k_750_);
lean_dec(v_k_750_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim(lean_object* v_motive_752_, lean_object* v_ctorIdx_753_, uint8_t v_t_754_, lean_object* v_h_755_, lean_object* v_k_756_){
_start:
{
lean_inc(v_k_756_);
return v_k_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim___boxed(lean_object* v_motive_757_, lean_object* v_ctorIdx_758_, lean_object* v_t_759_, lean_object* v_h_760_, lean_object* v_k_761_){
_start:
{
uint8_t v_t_boxed_762_; lean_object* v_res_763_; 
v_t_boxed_762_ = lean_unbox(v_t_759_);
v_res_763_ = l_Lasm_JS_Web_KeyFormat_ctorElim(v_motive_757_, v_ctorIdx_758_, v_t_boxed_762_, v_h_760_, v_k_761_);
lean_dec(v_k_761_);
lean_dec(v_ctorIdx_758_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim___redArg(lean_object* v_rawPublic_764_){
_start:
{
lean_inc(v_rawPublic_764_);
return v_rawPublic_764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim___redArg___boxed(lean_object* v_rawPublic_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lasm_JS_Web_KeyFormat_rawPublic_elim___redArg(v_rawPublic_765_);
lean_dec(v_rawPublic_765_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim(lean_object* v_motive_767_, uint8_t v_t_768_, lean_object* v_h_769_, lean_object* v_rawPublic_770_){
_start:
{
lean_inc(v_rawPublic_770_);
return v_rawPublic_770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim___boxed(lean_object* v_motive_771_, lean_object* v_t_772_, lean_object* v_h_773_, lean_object* v_rawPublic_774_){
_start:
{
uint8_t v_t_boxed_775_; lean_object* v_res_776_; 
v_t_boxed_775_ = lean_unbox(v_t_772_);
v_res_776_ = l_Lasm_JS_Web_KeyFormat_rawPublic_elim(v_motive_771_, v_t_boxed_775_, v_h_773_, v_rawPublic_774_);
lean_dec(v_rawPublic_774_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___redArg(lean_object* v_rawPrivate_777_){
_start:
{
lean_inc(v_rawPrivate_777_);
return v_rawPrivate_777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___redArg___boxed(lean_object* v_rawPrivate_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___redArg(v_rawPrivate_778_);
lean_dec(v_rawPrivate_778_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim(lean_object* v_motive_780_, uint8_t v_t_781_, lean_object* v_h_782_, lean_object* v_rawPrivate_783_){
_start:
{
lean_inc(v_rawPrivate_783_);
return v_rawPrivate_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___boxed(lean_object* v_motive_784_, lean_object* v_t_785_, lean_object* v_h_786_, lean_object* v_rawPrivate_787_){
_start:
{
uint8_t v_t_boxed_788_; lean_object* v_res_789_; 
v_t_boxed_788_ = lean_unbox(v_t_785_);
v_res_789_ = l_Lasm_JS_Web_KeyFormat_rawPrivate_elim(v_motive_784_, v_t_boxed_788_, v_h_786_, v_rawPrivate_787_);
lean_dec(v_rawPrivate_787_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim___redArg(lean_object* v_rawSeed_790_){
_start:
{
lean_inc(v_rawSeed_790_);
return v_rawSeed_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim___redArg___boxed(lean_object* v_rawSeed_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lasm_JS_Web_KeyFormat_rawSeed_elim___redArg(v_rawSeed_791_);
lean_dec(v_rawSeed_791_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim(lean_object* v_motive_793_, uint8_t v_t_794_, lean_object* v_h_795_, lean_object* v_rawSeed_796_){
_start:
{
lean_inc(v_rawSeed_796_);
return v_rawSeed_796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim___boxed(lean_object* v_motive_797_, lean_object* v_t_798_, lean_object* v_h_799_, lean_object* v_rawSeed_800_){
_start:
{
uint8_t v_t_boxed_801_; lean_object* v_res_802_; 
v_t_boxed_801_ = lean_unbox(v_t_798_);
v_res_802_ = l_Lasm_JS_Web_KeyFormat_rawSeed_elim(v_motive_797_, v_t_boxed_801_, v_h_799_, v_rawSeed_800_);
lean_dec(v_rawSeed_800_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim___redArg(lean_object* v_rawSecret_803_){
_start:
{
lean_inc(v_rawSecret_803_);
return v_rawSecret_803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim___redArg___boxed(lean_object* v_rawSecret_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Lasm_JS_Web_KeyFormat_rawSecret_elim___redArg(v_rawSecret_804_);
lean_dec(v_rawSecret_804_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim(lean_object* v_motive_806_, uint8_t v_t_807_, lean_object* v_h_808_, lean_object* v_rawSecret_809_){
_start:
{
lean_inc(v_rawSecret_809_);
return v_rawSecret_809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim___boxed(lean_object* v_motive_810_, lean_object* v_t_811_, lean_object* v_h_812_, lean_object* v_rawSecret_813_){
_start:
{
uint8_t v_t_boxed_814_; lean_object* v_res_815_; 
v_t_boxed_814_ = lean_unbox(v_t_811_);
v_res_815_ = l_Lasm_JS_Web_KeyFormat_rawSecret_elim(v_motive_810_, v_t_boxed_814_, v_h_812_, v_rawSecret_813_);
lean_dec(v_rawSecret_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim___redArg(lean_object* v_raw_816_){
_start:
{
lean_inc(v_raw_816_);
return v_raw_816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim___redArg___boxed(lean_object* v_raw_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lasm_JS_Web_KeyFormat_raw_elim___redArg(v_raw_817_);
lean_dec(v_raw_817_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim(lean_object* v_motive_819_, uint8_t v_t_820_, lean_object* v_h_821_, lean_object* v_raw_822_){
_start:
{
lean_inc(v_raw_822_);
return v_raw_822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim___boxed(lean_object* v_motive_823_, lean_object* v_t_824_, lean_object* v_h_825_, lean_object* v_raw_826_){
_start:
{
uint8_t v_t_boxed_827_; lean_object* v_res_828_; 
v_t_boxed_827_ = lean_unbox(v_t_824_);
v_res_828_ = l_Lasm_JS_Web_KeyFormat_raw_elim(v_motive_823_, v_t_boxed_827_, v_h_825_, v_raw_826_);
lean_dec(v_raw_826_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim___redArg(lean_object* v_spki_829_){
_start:
{
lean_inc(v_spki_829_);
return v_spki_829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim___redArg___boxed(lean_object* v_spki_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lasm_JS_Web_KeyFormat_spki_elim___redArg(v_spki_830_);
lean_dec(v_spki_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim(lean_object* v_motive_832_, uint8_t v_t_833_, lean_object* v_h_834_, lean_object* v_spki_835_){
_start:
{
lean_inc(v_spki_835_);
return v_spki_835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim___boxed(lean_object* v_motive_836_, lean_object* v_t_837_, lean_object* v_h_838_, lean_object* v_spki_839_){
_start:
{
uint8_t v_t_boxed_840_; lean_object* v_res_841_; 
v_t_boxed_840_ = lean_unbox(v_t_837_);
v_res_841_ = l_Lasm_JS_Web_KeyFormat_spki_elim(v_motive_836_, v_t_boxed_840_, v_h_838_, v_spki_839_);
lean_dec(v_spki_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim___redArg(lean_object* v_pkcs8_842_){
_start:
{
lean_inc(v_pkcs8_842_);
return v_pkcs8_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim___redArg___boxed(lean_object* v_pkcs8_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lasm_JS_Web_KeyFormat_pkcs8_elim___redArg(v_pkcs8_843_);
lean_dec(v_pkcs8_843_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim(lean_object* v_motive_845_, uint8_t v_t_846_, lean_object* v_h_847_, lean_object* v_pkcs8_848_){
_start:
{
lean_inc(v_pkcs8_848_);
return v_pkcs8_848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim___boxed(lean_object* v_motive_849_, lean_object* v_t_850_, lean_object* v_h_851_, lean_object* v_pkcs8_852_){
_start:
{
uint8_t v_t_boxed_853_; lean_object* v_res_854_; 
v_t_boxed_853_ = lean_unbox(v_t_850_);
v_res_854_ = l_Lasm_JS_Web_KeyFormat_pkcs8_elim(v_motive_849_, v_t_boxed_853_, v_h_851_, v_pkcs8_852_);
lean_dec(v_pkcs8_852_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim___redArg(lean_object* v_jwk_855_){
_start:
{
lean_inc(v_jwk_855_);
return v_jwk_855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim___redArg___boxed(lean_object* v_jwk_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lasm_JS_Web_KeyFormat_jwk_elim___redArg(v_jwk_856_);
lean_dec(v_jwk_856_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim(lean_object* v_motive_858_, uint8_t v_t_859_, lean_object* v_h_860_, lean_object* v_jwk_861_){
_start:
{
lean_inc(v_jwk_861_);
return v_jwk_861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim___boxed(lean_object* v_motive_862_, lean_object* v_t_863_, lean_object* v_h_864_, lean_object* v_jwk_865_){
_start:
{
uint8_t v_t_boxed_866_; lean_object* v_res_867_; 
v_t_boxed_866_ = lean_unbox(v_t_863_);
v_res_867_ = l_Lasm_JS_Web_KeyFormat_jwk_elim(v_motive_862_, v_t_boxed_866_, v_h_864_, v_jwk_865_);
lean_dec(v_jwk_865_);
return v_res_867_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqKeyFormat_beq(uint8_t v_x_868_, uint8_t v_y_869_){
_start:
{
lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_870_ = l_Lasm_JS_Web_KeyFormat_ctorIdx(v_x_868_);
v___x_871_ = l_Lasm_JS_Web_KeyFormat_ctorIdx(v_y_869_);
v___x_872_ = lean_nat_dec_eq(v___x_870_, v___x_871_);
lean_dec(v___x_871_);
lean_dec(v___x_870_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqKeyFormat_beq___boxed(lean_object* v_x_873_, lean_object* v_y_874_){
_start:
{
uint8_t v_x_21__boxed_875_; uint8_t v_y_22__boxed_876_; uint8_t v_res_877_; lean_object* v_r_878_; 
v_x_21__boxed_875_ = lean_unbox(v_x_873_);
v_y_22__boxed_876_ = lean_unbox(v_y_874_);
v_res_877_ = l_Lasm_JS_Web_instBEqKeyFormat_beq(v_x_21__boxed_875_, v_y_22__boxed_876_);
v_r_878_ = lean_box(v_res_877_);
return v_r_878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr(uint8_t v_x_905_, lean_object* v_prec_906_){
_start:
{
lean_object* v___y_908_; lean_object* v___y_915_; lean_object* v___y_922_; lean_object* v___y_929_; lean_object* v___y_936_; lean_object* v___y_943_; lean_object* v___y_950_; lean_object* v___y_957_; 
switch(v_x_905_)
{
case 0:
{
lean_object* v___x_963_; uint8_t v___x_964_; 
v___x_963_ = lean_unsigned_to_nat(1024u);
v___x_964_ = lean_nat_dec_le(v___x_963_, v_prec_906_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; 
v___x_965_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_908_ = v___x_965_;
goto v___jp_907_;
}
else
{
lean_object* v___x_966_; 
v___x_966_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_908_ = v___x_966_;
goto v___jp_907_;
}
}
case 1:
{
lean_object* v___x_967_; uint8_t v___x_968_; 
v___x_967_ = lean_unsigned_to_nat(1024u);
v___x_968_ = lean_nat_dec_le(v___x_967_, v_prec_906_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; 
v___x_969_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_915_ = v___x_969_;
goto v___jp_914_;
}
else
{
lean_object* v___x_970_; 
v___x_970_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_915_ = v___x_970_;
goto v___jp_914_;
}
}
case 2:
{
lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_971_ = lean_unsigned_to_nat(1024u);
v___x_972_ = lean_nat_dec_le(v___x_971_, v_prec_906_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; 
v___x_973_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_922_ = v___x_973_;
goto v___jp_921_;
}
else
{
lean_object* v___x_974_; 
v___x_974_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_922_ = v___x_974_;
goto v___jp_921_;
}
}
case 3:
{
lean_object* v___x_975_; uint8_t v___x_976_; 
v___x_975_ = lean_unsigned_to_nat(1024u);
v___x_976_ = lean_nat_dec_le(v___x_975_, v_prec_906_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; 
v___x_977_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_929_ = v___x_977_;
goto v___jp_928_;
}
else
{
lean_object* v___x_978_; 
v___x_978_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_929_ = v___x_978_;
goto v___jp_928_;
}
}
case 4:
{
lean_object* v___x_979_; uint8_t v___x_980_; 
v___x_979_ = lean_unsigned_to_nat(1024u);
v___x_980_ = lean_nat_dec_le(v___x_979_, v_prec_906_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; 
v___x_981_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_936_ = v___x_981_;
goto v___jp_935_;
}
else
{
lean_object* v___x_982_; 
v___x_982_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_936_ = v___x_982_;
goto v___jp_935_;
}
}
case 5:
{
lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_983_ = lean_unsigned_to_nat(1024u);
v___x_984_ = lean_nat_dec_le(v___x_983_, v_prec_906_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; 
v___x_985_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_943_ = v___x_985_;
goto v___jp_942_;
}
else
{
lean_object* v___x_986_; 
v___x_986_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_943_ = v___x_986_;
goto v___jp_942_;
}
}
case 6:
{
lean_object* v___x_987_; uint8_t v___x_988_; 
v___x_987_ = lean_unsigned_to_nat(1024u);
v___x_988_ = lean_nat_dec_le(v___x_987_, v_prec_906_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; 
v___x_989_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_950_ = v___x_989_;
goto v___jp_949_;
}
else
{
lean_object* v___x_990_; 
v___x_990_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_950_ = v___x_990_;
goto v___jp_949_;
}
}
default: 
{
lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_991_ = lean_unsigned_to_nat(1024u);
v___x_992_ = lean_nat_dec_le(v___x_991_, v_prec_906_);
if (v___x_992_ == 0)
{
lean_object* v___x_993_; 
v___x_993_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_957_ = v___x_993_;
goto v___jp_956_;
}
else
{
lean_object* v___x_994_; 
v___x_994_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_957_ = v___x_994_;
goto v___jp_956_;
}
}
}
v___jp_907_:
{
lean_object* v___x_909_; lean_object* v___x_910_; uint8_t v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_909_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__1));
lean_inc(v___y_908_);
v___x_910_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_910_, 0, v___y_908_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = 0;
v___x_912_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_912_, 0, v___x_910_);
lean_ctor_set_uint8(v___x_912_, sizeof(void*)*1, v___x_911_);
v___x_913_ = l_Repr_addAppParen(v___x_912_, v_prec_906_);
return v___x_913_;
}
v___jp_914_:
{
lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_916_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__3));
lean_inc(v___y_915_);
v___x_917_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_917_, 0, v___y_915_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = 0;
v___x_919_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_919_, 0, v___x_917_);
lean_ctor_set_uint8(v___x_919_, sizeof(void*)*1, v___x_918_);
v___x_920_ = l_Repr_addAppParen(v___x_919_, v_prec_906_);
return v___x_920_;
}
v___jp_921_:
{
lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_923_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__5));
lean_inc(v___y_922_);
v___x_924_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_924_, 0, v___y_922_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = 0;
v___x_926_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_926_, 0, v___x_924_);
lean_ctor_set_uint8(v___x_926_, sizeof(void*)*1, v___x_925_);
v___x_927_ = l_Repr_addAppParen(v___x_926_, v_prec_906_);
return v___x_927_;
}
v___jp_928_:
{
lean_object* v___x_930_; lean_object* v___x_931_; uint8_t v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_930_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__7));
lean_inc(v___y_929_);
v___x_931_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_931_, 0, v___y_929_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = 0;
v___x_933_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set_uint8(v___x_933_, sizeof(void*)*1, v___x_932_);
v___x_934_ = l_Repr_addAppParen(v___x_933_, v_prec_906_);
return v___x_934_;
}
v___jp_935_:
{
lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_937_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__9));
lean_inc(v___y_936_);
v___x_938_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_938_, 0, v___y_936_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
v___x_939_ = 0;
v___x_940_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_940_, 0, v___x_938_);
lean_ctor_set_uint8(v___x_940_, sizeof(void*)*1, v___x_939_);
v___x_941_ = l_Repr_addAppParen(v___x_940_, v_prec_906_);
return v___x_941_;
}
v___jp_942_:
{
lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_944_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__11));
lean_inc(v___y_943_);
v___x_945_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_945_, 0, v___y_943_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = 0;
v___x_947_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_947_, 0, v___x_945_);
lean_ctor_set_uint8(v___x_947_, sizeof(void*)*1, v___x_946_);
v___x_948_ = l_Repr_addAppParen(v___x_947_, v_prec_906_);
return v___x_948_;
}
v___jp_949_:
{
lean_object* v___x_951_; lean_object* v___x_952_; uint8_t v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_951_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__13));
lean_inc(v___y_950_);
v___x_952_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_952_, 0, v___y_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = 0;
v___x_954_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set_uint8(v___x_954_, sizeof(void*)*1, v___x_953_);
v___x_955_ = l_Repr_addAppParen(v___x_954_, v_prec_906_);
return v___x_955_;
}
v___jp_956_:
{
lean_object* v___x_958_; lean_object* v___x_959_; uint8_t v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_958_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__15));
lean_inc(v___y_957_);
v___x_959_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_959_, 0, v___y_957_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = 0;
v___x_961_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set_uint8(v___x_961_, sizeof(void*)*1, v___x_960_);
v___x_962_ = l_Repr_addAppParen(v___x_961_, v_prec_906_);
return v___x_962_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___boxed(lean_object* v_x_995_, lean_object* v_prec_996_){
_start:
{
uint8_t v_x_437__boxed_997_; lean_object* v_res_998_; 
v_x_437__boxed_997_ = lean_unbox(v_x_995_);
v_res_998_ = l_Lasm_JS_Web_instReprKeyFormat_repr(v_x_437__boxed_997_, v_prec_996_);
lean_dec(v_prec_996_);
return v_res_998_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyFormat_default(void){
_start:
{
uint8_t v___x_1001_; 
v___x_1001_ = 0;
return v___x_1001_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyFormat(void){
_start:
{
uint8_t v___x_1002_; 
v___x_1002_ = 0;
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0(uint8_t v_x_1027_){
_start:
{
switch(v_x_1027_)
{
case 0:
{
lean_object* v___x_1028_; 
v___x_1028_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
return v___x_1028_;
}
case 1:
{
lean_object* v___x_1029_; 
v___x_1029_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
return v___x_1029_;
}
case 2:
{
lean_object* v___x_1030_; 
v___x_1030_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
return v___x_1030_;
}
case 3:
{
lean_object* v___x_1031_; 
v___x_1031_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
return v___x_1031_;
}
case 4:
{
lean_object* v___x_1032_; 
v___x_1032_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
return v___x_1032_;
}
case 5:
{
lean_object* v___x_1033_; 
v___x_1033_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
return v___x_1033_;
}
case 6:
{
lean_object* v___x_1034_; 
v___x_1034_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
return v___x_1034_;
}
default: 
{
lean_object* v___x_1035_; 
v___x_1035_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
return v___x_1035_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___boxed(lean_object* v_x_1036_){
_start:
{
uint8_t v_x_142__boxed_1037_; lean_object* v_res_1038_; 
v_x_142__boxed_1037_ = lean_unbox(v_x_1036_);
v_res_1038_ = l_Lasm_JS_Web_instToJSKeyFormat___lam__0(v_x_142__boxed_1037_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0(lean_object* v_x_1067_){
_start:
{
if (lean_obj_tag(v_x_1067_) == 4)
{
lean_object* v_s_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
v_s_1070_ = lean_ctor_get(v_x_1067_, 0);
v___x_1071_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__0));
v___x_1072_ = lean_string_dec_eq(v_s_1070_, v___x_1071_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1073_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__2));
v___x_1074_ = lean_string_dec_eq(v_s_1070_, v___x_1073_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; uint8_t v___x_1076_; 
v___x_1075_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__4));
v___x_1076_ = lean_string_dec_eq(v_s_1070_, v___x_1075_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; uint8_t v___x_1078_; 
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__6));
v___x_1078_ = lean_string_dec_eq(v_s_1070_, v___x_1077_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__8));
v___x_1080_ = lean_string_dec_eq(v_s_1070_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; uint8_t v___x_1082_; 
v___x_1081_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__10));
v___x_1082_ = lean_string_dec_eq(v_s_1070_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; uint8_t v___x_1084_; 
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__12));
v___x_1084_ = lean_string_dec_eq(v_s_1070_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; uint8_t v___x_1086_; 
v___x_1085_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__14));
v___x_1086_ = lean_string_dec_eq(v_s_1070_, v___x_1085_);
if (v___x_1086_ == 0)
{
goto v___jp_1068_;
}
else
{
lean_object* v___x_1087_; 
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__1));
return v___x_1087_;
}
}
else
{
lean_object* v___x_1088_; 
v___x_1088_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__2));
return v___x_1088_;
}
}
else
{
lean_object* v___x_1089_; 
v___x_1089_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__3));
return v___x_1089_;
}
}
else
{
lean_object* v___x_1090_; 
v___x_1090_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__4));
return v___x_1090_;
}
}
else
{
lean_object* v___x_1091_; 
v___x_1091_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__5));
return v___x_1091_;
}
}
else
{
lean_object* v___x_1092_; 
v___x_1092_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__6));
return v___x_1092_;
}
}
else
{
lean_object* v___x_1093_; 
v___x_1093_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__7));
return v___x_1093_;
}
}
else
{
lean_object* v___x_1094_; 
v___x_1094_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__8));
return v___x_1094_;
}
}
else
{
goto v___jp_1068_;
}
v___jp_1068_:
{
lean_object* v___x_1069_; 
v___x_1069_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__0));
return v___x_1069_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___boxed(lean_object* v_x_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lasm_JS_Web_instFromJSKeyFormat___lam__0(v_x_1095_);
lean_dec(v_x_1095_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx(lean_object* v_x_1104_){
_start:
{
if (lean_obj_tag(v_x_1104_) == 0)
{
lean_object* v___x_1105_; 
v___x_1105_ = lean_unsigned_to_nat(0u);
return v___x_1105_;
}
else
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_unsigned_to_nat(1u);
return v___x_1106_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx___boxed(lean_object* v_x_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx(v_x_1107_);
lean_dec_ref(v_x_1107_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(lean_object* v_t_1109_, lean_object* v_k_1110_){
_start:
{
if (lean_obj_tag(v_t_1109_) == 0)
{
lean_object* v_value_1111_; lean_object* v___x_1112_; 
v_value_1111_ = lean_ctor_get(v_t_1109_, 0);
lean_inc(v_value_1111_);
lean_dec_ref_known(v_t_1109_, 1);
v___x_1112_ = lean_apply_1(v_k_1110_, v_value_1111_);
return v___x_1112_;
}
else
{
lean_object* v_value_1113_; lean_object* v___x_1114_; 
v_value_1113_ = lean_ctor_get(v_t_1109_, 0);
lean_inc_ref(v_value_1113_);
lean_dec_ref_known(v_t_1109_, 1);
v___x_1114_ = lean_apply_1(v_k_1110_, v_value_1113_);
return v___x_1114_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim(lean_object* v_motive_1115_, lean_object* v_ctorIdx_1116_, lean_object* v_t_1117_, lean_object* v_h_1118_, lean_object* v_k_1119_){
_start:
{
lean_object* v___x_1120_; 
v___x_1120_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1117_, v_k_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___boxed(lean_object* v_motive_1121_, lean_object* v_ctorIdx_1122_, lean_object* v_t_1123_, lean_object* v_h_1124_, lean_object* v_k_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim(v_motive_1121_, v_ctorIdx_1122_, v_t_1123_, v_h_1124_, v_k_1125_);
lean_dec(v_ctorIdx_1122_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_object_elim___redArg(lean_object* v_t_1127_, lean_object* v_object_1128_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1127_, v_object_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_object_elim(lean_object* v_motive_1130_, lean_object* v_t_1131_, lean_object* v_h_1132_, lean_object* v_object_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1131_, v_object_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_domString_elim___redArg(lean_object* v_t_1135_, lean_object* v_domString_1136_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1135_, v_domString_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_domString_elim(lean_object* v_motive_1138_, lean_object* v_t_1139_, lean_object* v_h_1140_, lean_object* v_domString_1141_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1139_, v_domString_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAlgorithmIdentifier___lam__0(lean_object* v_x_1143_){
_start:
{
if (lean_obj_tag(v_x_1143_) == 0)
{
lean_object* v_value_1144_; 
v_value_1144_ = lean_ctor_get(v_x_1143_, 0);
lean_inc(v_value_1144_);
lean_dec_ref_known(v_x_1143_, 1);
return v_value_1144_;
}
else
{
lean_object* v_value_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
v_value_1145_ = lean_ctor_get(v_x_1143_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v_x_1143_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_value_1145_);
lean_dec(v_x_1143_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
lean_ctor_set_tag(v___x_1147_, 4);
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_value_1145_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0(lean_object* v___x_1157_, lean_object* v_d_1158_){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
lean_inc_ref(v___x_1157_);
v___x_1160_ = l_Lasm_JS_readField___redArg(v___x_1157_, v_d_1158_, v___x_1159_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
lean_dec_ref(v___x_1157_);
v_a_1161_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1160_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1160_);
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
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v_a_1169_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_a_1169_);
lean_dec_ref_known(v___x_1160_, 1);
v___x_1170_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
v___x_1171_ = l_Lasm_JS_readField___redArg(v___x_1157_, v_d_1158_, v___x_1170_);
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_a_1169_);
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1171_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1171_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1188_; 
v_a_1180_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1182_ = v___x_1171_;
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1171_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1184_, 0, v_a_1169_);
lean_ctor_set(v___x_1184_, 1, v_a_1180_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1184_);
v___x_1186_ = v___x_1182_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___boxed(lean_object* v___x_1189_, lean_object* v_d_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0(v___x_1189_, v_d_1190_);
lean_dec(v_d_1190_);
return v_res_1191_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKey));
v___x_1193_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1192_);
return v___x_1193_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___f_1195_; 
v___x_1194_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0);
v___f_1195_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1195_, 0, v___x_1194_);
return v___f_1195_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3(void){
_start:
{
uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___f_1199_; lean_object* v___x_1200_; 
v___x_1197_ = 0;
v___x_1198_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__2));
v___f_1199_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1);
v___x_1200_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1200_, 0, v___f_1199_);
lean_ctor_set(v___x_1200_, 1, v___x_1198_);
lean_ctor_set_uint8(v___x_1200_, sizeof(void*)*2, v___x_1197_);
return v___x_1200_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair(void){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx(lean_object* v_x_1202_){
_start:
{
if (lean_obj_tag(v_x_1202_) == 0)
{
lean_object* v___x_1203_; 
v___x_1203_ = lean_unsigned_to_nat(0u);
return v___x_1203_;
}
else
{
lean_object* v___x_1204_; 
v___x_1204_ = lean_unsigned_to_nat(1u);
return v___x_1204_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx___boxed(lean_object* v_x_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx(v_x_1205_);
lean_dec_ref(v_x_1205_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(lean_object* v_t_1207_, lean_object* v_k_1208_){
_start:
{
if (lean_obj_tag(v_t_1207_) == 0)
{
lean_object* v_value_1209_; lean_object* v___x_1210_; 
v_value_1209_ = lean_ctor_get(v_t_1207_, 0);
lean_inc(v_value_1209_);
lean_dec_ref_known(v_t_1207_, 1);
v___x_1210_ = lean_apply_1(v_k_1208_, v_value_1209_);
return v___x_1210_;
}
else
{
lean_object* v_value_1211_; lean_object* v___x_1212_; 
v_value_1211_ = lean_ctor_get(v_t_1207_, 0);
lean_inc_ref(v_value_1211_);
lean_dec_ref_known(v_t_1207_, 1);
v___x_1212_ = lean_apply_1(v_k_1208_, v_value_1211_);
return v___x_1212_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim(lean_object* v_motive_1213_, lean_object* v_ctorIdx_1214_, lean_object* v_t_1215_, lean_object* v_h_1216_, lean_object* v_k_1217_){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1215_, v_k_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___boxed(lean_object* v_motive_1219_, lean_object* v_ctorIdx_1220_, lean_object* v_t_1221_, lean_object* v_h_1222_, lean_object* v_k_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim(v_motive_1219_, v_ctorIdx_1220_, v_t_1221_, v_h_1222_, v_k_1223_);
lean_dec(v_ctorIdx_1220_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKey_elim___redArg(lean_object* v_t_1225_, lean_object* v_cryptoKey_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1225_, v_cryptoKey_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKey_elim(lean_object* v_motive_1228_, lean_object* v_t_1229_, lean_object* v_h_1230_, lean_object* v_cryptoKey_1231_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1229_, v_cryptoKey_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKeyPair_elim___redArg(lean_object* v_t_1233_, lean_object* v_cryptoKeyPair_1234_){
_start:
{
lean_object* v___x_1235_; 
v___x_1235_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1233_, v_cryptoKeyPair_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKeyPair_elim(lean_object* v_motive_1236_, lean_object* v_t_1237_, lean_object* v_h_1238_, lean_object* v_cryptoKeyPair_1239_){
_start:
{
lean_object* v___x_1240_; 
v___x_1240_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1237_, v_cryptoKeyPair_1239_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0(lean_object* v_x_1243_){
_start:
{
switch(lean_obj_tag(v_x_1243_))
{
case 9:
{
lean_object* v_value_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_value_1244_ = lean_ctor_get(v_x_1243_, 0);
lean_inc(v_value_1244_);
lean_dec_ref_known(v_x_1243_, 2);
v___x_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1245_, 0, v_value_1244_);
v___x_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1245_);
return v___x_1246_;
}
case 8:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1247_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0);
v___x_1248_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
v___x_1249_ = l_Lasm_JS_readField___redArg(v___x_1247_, v_x_1243_, v___x_1248_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref_known(v_x_1243_, 1);
v_a_1250_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1249_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1249_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1284_; 
v_a_1258_ = lean_ctor_get(v___x_1249_, 0);
lean_inc(v_a_1258_);
lean_dec_ref_known(v___x_1249_, 1);
v___x_1259_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
v___x_1260_ = l_Lasm_JS_readField___redArg(v___x_1247_, v_x_1243_, v___x_1259_);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_x_1243_);
if (v_isSharedCheck_1284_ == 0)
{
lean_object* v_unused_1285_; 
v_unused_1285_ = lean_ctor_get(v_x_1243_, 0);
lean_dec(v_unused_1285_);
v___x_1262_ = v_x_1243_;
v_isShared_1263_ = v_isSharedCheck_1284_;
goto v_resetjp_1261_;
}
else
{
lean_dec(v_x_1243_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1284_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_del_object(v___x_1262_);
lean_dec(v_a_1258_);
v_a_1264_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1260_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1260_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
else
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1283_; 
v_a_1272_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1274_ = v___x_1260_;
v_isShared_1275_ = v_isSharedCheck_1283_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1260_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1283_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1276_, 0, v_a_1258_);
lean_ctor_set(v___x_1276_, 1, v_a_1272_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set_tag(v___x_1262_, 1);
lean_ctor_set(v___x_1262_, 0, v___x_1276_);
v___x_1278_ = v___x_1262_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1280_; 
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 0, v___x_1278_);
v___x_1280_ = v___x_1274_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_1286_; 
lean_dec(v_x_1243_);
v___x_1286_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0___closed__0));
return v___x_1286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0(lean_object* v___f_1297_, lean_object* v_d_1298_){
_start:
{
lean_object* v_r_1299_; lean_object* v_d_1300_; lean_object* v_t_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v_r_1299_ = lean_ctor_get(v_d_1298_, 0);
lean_inc(v_r_1299_);
v_d_1300_ = lean_ctor_get(v_d_1298_, 1);
lean_inc(v_d_1300_);
v_t_1301_ = lean_ctor_get(v_d_1298_, 2);
lean_inc(v_t_1301_);
lean_dec_ref(v_d_1298_);
v___x_1302_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
lean_inc_ref_n(v___f_1297_, 2);
v___x_1303_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1297_, v_r_1299_);
v___x_1304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1302_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
v___x_1305_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_1306_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1297_, v_d_1300_);
v___x_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1305_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_1309_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1297_, v_t_1301_);
v___x_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_unsigned_to_nat(3u);
v___x_1312_ = lean_mk_empty_array_with_capacity(v___x_1311_);
v___x_1313_ = lean_array_push(v___x_1312_, v___x_1304_);
v___x_1314_ = lean_array_push(v___x_1313_, v___x_1307_);
v___x_1315_ = lean_array_push(v___x_1314_, v___x_1310_);
v___x_1316_ = l_Lasm_JS_Web_Support_fields(v___x_1315_);
lean_dec_ref(v___x_1315_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0(lean_object* v___x_1321_, lean_object* v_d_1322_){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
lean_inc_ref(v___x_1321_);
v___x_1324_ = l_Lasm_JS_readField___redArg(v___x_1321_, v_d_1322_, v___x_1323_);
if (lean_obj_tag(v___x_1324_) == 0)
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec_ref(v___x_1321_);
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1324_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1324_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v_a_1333_ = lean_ctor_get(v___x_1324_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1324_, 1);
v___x_1334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc_ref(v___x_1321_);
v___x_1335_ = l_Lasm_JS_readField___redArg(v___x_1321_, v_d_1322_, v___x_1334_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1343_; 
lean_dec(v_a_1333_);
lean_dec_ref(v___x_1321_);
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1338_ = v___x_1335_;
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1335_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1336_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v_a_1344_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1344_);
lean_dec_ref_known(v___x_1335_, 1);
v___x_1345_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_1346_ = l_Lasm_JS_readField___redArg(v___x_1321_, v_d_1322_, v___x_1345_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1354_; 
lean_dec(v_a_1344_);
lean_dec(v_a_1333_);
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1346_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1349_ = v___x_1346_;
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___x_1346_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1352_; 
if (v_isShared_1350_ == 0)
{
v___x_1352_ = v___x_1349_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_a_1347_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
else
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1363_; 
v_a_1355_ = lean_ctor_get(v___x_1346_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1346_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1357_ = v___x_1346_;
v_isShared_1358_ = v_isSharedCheck_1363_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1346_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1363_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1359_; lean_object* v___x_1361_; 
v___x_1359_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1359_, 0, v_a_1333_);
lean_ctor_set(v___x_1359_, 1, v_a_1344_);
lean_ctor_set(v___x_1359_, 2, v_a_1355_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v___x_1359_);
v___x_1361_ = v___x_1357_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1359_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0___boxed(lean_object* v___x_1364_, lean_object* v_d_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0(v___x_1364_, v_d_1365_);
lean_dec(v_d_1365_);
return v_res_1366_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0(void){
_start:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = l_Lasm_JS_instFromJSString;
v___x_1368_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1367_);
return v___x_1368_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___f_1370_; 
v___x_1369_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0);
v___f_1370_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1370_, 0, v___x_1369_);
return v___f_1370_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3(void){
_start:
{
uint8_t v___x_1372_; lean_object* v___x_1373_; lean_object* v___f_1374_; lean_object* v___x_1375_; 
v___x_1372_ = 0;
v___x_1373_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__2));
v___f_1374_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1);
v___x_1375_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1375_, 0, v___f_1374_);
lean_ctor_set(v___x_1375_, 1, v___x_1373_);
lean_ctor_set_uint8(v___x_1375_, sizeof(void*)*2, v___x_1372_);
return v___x_1375_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo(void){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0(lean_object* v___f_1394_, lean_object* v___x_1395_, lean_object* v___f_1396_, lean_object* v___x_1397_, lean_object* v_d_1398_){
_start:
{
lean_object* v_kty_1399_; lean_object* v_use_1400_; lean_object* v_key__ops_1401_; lean_object* v_alg_1402_; lean_object* v_ext_1403_; lean_object* v_crv_1404_; lean_object* v_x_1405_; lean_object* v_y_1406_; lean_object* v_d_1407_; lean_object* v_n_1408_; lean_object* v_e_1409_; lean_object* v_p_1410_; lean_object* v_q_1411_; lean_object* v_dp_1412_; lean_object* v_dq_1413_; lean_object* v_qi_1414_; lean_object* v_oth_1415_; lean_object* v_k_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v_kty_1399_ = lean_ctor_get(v_d_1398_, 0);
lean_inc(v_kty_1399_);
v_use_1400_ = lean_ctor_get(v_d_1398_, 1);
lean_inc(v_use_1400_);
v_key__ops_1401_ = lean_ctor_get(v_d_1398_, 2);
lean_inc(v_key__ops_1401_);
v_alg_1402_ = lean_ctor_get(v_d_1398_, 3);
lean_inc(v_alg_1402_);
v_ext_1403_ = lean_ctor_get(v_d_1398_, 4);
lean_inc(v_ext_1403_);
v_crv_1404_ = lean_ctor_get(v_d_1398_, 5);
lean_inc(v_crv_1404_);
v_x_1405_ = lean_ctor_get(v_d_1398_, 6);
lean_inc(v_x_1405_);
v_y_1406_ = lean_ctor_get(v_d_1398_, 7);
lean_inc(v_y_1406_);
v_d_1407_ = lean_ctor_get(v_d_1398_, 8);
lean_inc(v_d_1407_);
v_n_1408_ = lean_ctor_get(v_d_1398_, 9);
lean_inc(v_n_1408_);
v_e_1409_ = lean_ctor_get(v_d_1398_, 10);
lean_inc(v_e_1409_);
v_p_1410_ = lean_ctor_get(v_d_1398_, 11);
lean_inc(v_p_1410_);
v_q_1411_ = lean_ctor_get(v_d_1398_, 12);
lean_inc(v_q_1411_);
v_dp_1412_ = lean_ctor_get(v_d_1398_, 13);
lean_inc(v_dp_1412_);
v_dq_1413_ = lean_ctor_get(v_d_1398_, 14);
lean_inc(v_dq_1413_);
v_qi_1414_ = lean_ctor_get(v_d_1398_, 15);
lean_inc(v_qi_1414_);
v_oth_1415_ = lean_ctor_get(v_d_1398_, 16);
lean_inc(v_oth_1415_);
v_k_1416_ = lean_ctor_get(v_d_1398_, 17);
lean_inc(v_k_1416_);
lean_dec_ref(v_d_1398_);
v___x_1417_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
lean_inc_ref_n(v___f_1394_, 14);
v___x_1418_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_kty_1399_);
v___x_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1417_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_1421_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_use_1400_);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_1424_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1395_, v_key__ops_1401_);
v___x_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_1427_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_alg_1402_);
v___x_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1426_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_1430_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1396_, v_ext_1403_);
v___x_1431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1429_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_1433_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_crv_1404_);
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1432_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_1436_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_x_1405_);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_1439_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_y_1406_);
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1438_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_1442_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_d_1407_);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1441_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_1445_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_n_1408_);
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1444_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_1448_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_e_1409_);
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1447_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_1451_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_p_1410_);
v___x_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1450_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
v___x_1453_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_1454_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_q_1411_);
v___x_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1453_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_1457_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_dp_1412_);
v___x_1458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1456_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_1460_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_dq_1413_);
v___x_1461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1459_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
v___x_1462_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_1463_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_qi_1414_);
v___x_1464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1462_);
lean_ctor_set(v___x_1464_, 1, v___x_1463_);
v___x_1465_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_1466_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1397_, v_oth_1415_);
v___x_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1465_);
lean_ctor_set(v___x_1467_, 1, v___x_1466_);
v___x_1468_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_1469_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1394_, v_k_1416_);
v___x_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1470_, 0, v___x_1468_);
lean_ctor_set(v___x_1470_, 1, v___x_1469_);
v___x_1471_ = lean_unsigned_to_nat(18u);
v___x_1472_ = lean_mk_empty_array_with_capacity(v___x_1471_);
v___x_1473_ = lean_array_push(v___x_1472_, v___x_1419_);
v___x_1474_ = lean_array_push(v___x_1473_, v___x_1422_);
v___x_1475_ = lean_array_push(v___x_1474_, v___x_1425_);
v___x_1476_ = lean_array_push(v___x_1475_, v___x_1428_);
v___x_1477_ = lean_array_push(v___x_1476_, v___x_1431_);
v___x_1478_ = lean_array_push(v___x_1477_, v___x_1434_);
v___x_1479_ = lean_array_push(v___x_1478_, v___x_1437_);
v___x_1480_ = lean_array_push(v___x_1479_, v___x_1440_);
v___x_1481_ = lean_array_push(v___x_1480_, v___x_1443_);
v___x_1482_ = lean_array_push(v___x_1481_, v___x_1446_);
v___x_1483_ = lean_array_push(v___x_1482_, v___x_1449_);
v___x_1484_ = lean_array_push(v___x_1483_, v___x_1452_);
v___x_1485_ = lean_array_push(v___x_1484_, v___x_1455_);
v___x_1486_ = lean_array_push(v___x_1485_, v___x_1458_);
v___x_1487_ = lean_array_push(v___x_1486_, v___x_1461_);
v___x_1488_ = lean_array_push(v___x_1487_, v___x_1464_);
v___x_1489_ = lean_array_push(v___x_1488_, v___x_1467_);
v___x_1490_ = lean_array_push(v___x_1489_, v___x_1470_);
v___x_1491_ = l_Lasm_JS_Web_Support_fields(v___x_1490_);
lean_dec_ref(v___x_1490_);
return v___x_1491_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__0(void){
_start:
{
lean_object* v___f_1492_; lean_object* v___x_1493_; 
v___f_1492_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0));
v___x_1493_ = l_Lasm_JS_instToJSArray___redArg(v___f_1492_);
return v___x_1493_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__2(void){
_start:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo));
v___x_1496_ = l_Lasm_JS_instToJSArray___redArg(v___x_1495_);
return v___x_1496_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__3(void){
_start:
{
lean_object* v___x_1497_; lean_object* v___f_1498_; lean_object* v___x_1499_; lean_object* v___f_1500_; lean_object* v___f_1501_; 
v___x_1497_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__2, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__2_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__2);
v___f_1498_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___closed__1));
v___x_1499_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__0, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__0_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__0);
v___f_1500_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0));
v___f_1501_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0), 5, 4);
lean_closure_set(v___f_1501_, 0, v___f_1500_);
lean_closure_set(v___f_1501_, 1, v___x_1499_);
lean_closure_set(v___f_1501_, 2, v___f_1498_);
lean_closure_set(v___f_1501_, 3, v___x_1497_);
return v___f_1501_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey(void){
_start:
{
lean_object* v___f_1502_; 
v___f_1502_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__3, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__3_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__3);
return v___f_1502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0(lean_object* v___x_1503_, lean_object* v___x_1504_, lean_object* v___x_1505_, lean_object* v___x_1506_, lean_object* v_d_1507_){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
lean_inc_ref(v___x_1503_);
v___x_1509_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1508_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1517_; 
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1505_);
lean_dec_ref(v___x_1504_);
lean_dec_ref(v___x_1503_);
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
lean_object* v_a_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v_a_1518_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1509_, 1);
v___x_1519_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
lean_inc_ref(v___x_1503_);
v___x_1520_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1519_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1528_; 
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1505_);
lean_dec_ref(v___x_1504_);
lean_dec_ref(v___x_1503_);
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1523_ = v___x_1520_;
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1520_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1526_; 
if (v_isShared_1524_ == 0)
{
v___x_1526_ = v___x_1523_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1521_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
}
else
{
lean_object* v_a_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v_a_1529_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1529_);
lean_dec_ref_known(v___x_1520_, 1);
v___x_1530_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_1531_ = l_Lasm_JS_readField___redArg(v___x_1504_, v_d_1507_, v___x_1530_);
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1505_);
lean_dec_ref(v___x_1503_);
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v_a_1540_ = lean_ctor_get(v___x_1531_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1531_, 1);
v___x_1541_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
lean_inc_ref(v___x_1503_);
v___x_1542_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1541_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1505_);
lean_dec_ref(v___x_1503_);
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1542_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1542_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
else
{
lean_object* v_a_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v_a_1551_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_a_1551_);
lean_dec_ref_known(v___x_1542_, 1);
v___x_1552_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_1553_ = l_Lasm_JS_readField___redArg(v___x_1505_, v_d_1507_, v___x_1552_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1553_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v_a_1562_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_a_1562_);
lean_dec_ref_known(v___x_1553_, 1);
v___x_1563_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
lean_inc_ref(v___x_1503_);
v___x_1564_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1563_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1564_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1564_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v_a_1573_ = lean_ctor_get(v___x_1564_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v___x_1564_, 1);
v___x_1574_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
lean_inc_ref(v___x_1503_);
v___x_1575_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1574_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1578_ = v___x_1575_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1575_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v_a_1584_ = lean_ctor_get(v___x_1575_, 0);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1575_, 1);
v___x_1585_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
lean_inc_ref(v___x_1503_);
v___x_1586_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1585_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___x_1586_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1586_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1587_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v_a_1595_ = lean_ctor_get(v___x_1586_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1586_, 1);
v___x_1596_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc_ref(v___x_1503_);
v___x_1597_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1596_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1597_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1597_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v_a_1606_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1597_, 1);
v___x_1607_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
lean_inc_ref(v___x_1503_);
v___x_1608_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1607_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1616_; 
lean_dec(v_a_1606_);
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1609_ = lean_ctor_get(v___x_1608_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1611_ = v___x_1608_;
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1608_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v_a_1617_ = lean_ctor_get(v___x_1608_, 0);
lean_inc(v_a_1617_);
lean_dec_ref_known(v___x_1608_, 1);
v___x_1618_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
lean_inc_ref(v___x_1503_);
v___x_1619_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1618_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1627_; 
lean_dec(v_a_1617_);
lean_dec(v_a_1606_);
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1622_ = v___x_1619_;
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1619_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v_a_1628_ = lean_ctor_get(v___x_1619_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1619_, 1);
v___x_1629_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
lean_inc_ref(v___x_1503_);
v___x_1630_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1629_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1638_; 
lean_dec(v_a_1628_);
lean_dec(v_a_1617_);
lean_dec(v_a_1606_);
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1633_ = v___x_1630_;
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1630_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1636_; 
if (v_isShared_1634_ == 0)
{
v___x_1636_ = v___x_1633_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_a_1631_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
else
{
lean_object* v_a_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v_a_1639_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_a_1639_);
lean_dec_ref_known(v___x_1630_, 1);
v___x_1640_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
lean_inc_ref(v___x_1503_);
v___x_1641_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1640_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
lean_dec(v_a_1639_);
lean_dec(v_a_1628_);
lean_dec(v_a_1617_);
lean_dec(v_a_1606_);
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1641_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1641_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
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
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v_a_1650_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1650_);
lean_dec_ref_known(v___x_1641_, 1);
v___x_1651_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
lean_inc_ref(v___x_1503_);
v___x_1652_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1651_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
lean_dec(v_a_1650_);
lean_dec(v_a_1639_);
lean_dec(v_a_1628_);
lean_dec(v_a_1617_);
lean_dec(v_a_1606_);
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v___x_1652_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1652_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v_a_1661_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1661_);
lean_dec_ref_known(v___x_1652_, 1);
v___x_1662_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
lean_inc_ref(v___x_1503_);
v___x_1663_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1662_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
lean_dec(v_a_1661_);
lean_dec(v_a_1650_);
lean_dec(v_a_1639_);
lean_dec(v_a_1628_);
lean_dec(v_a_1617_);
lean_dec(v_a_1606_);
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1663_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1663_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
else
{
lean_object* v_a_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v_a_1672_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1672_);
lean_dec_ref_known(v___x_1663_, 1);
v___x_1673_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
lean_inc_ref(v___x_1503_);
v___x_1674_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1673_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec(v_a_1672_);
lean_dec(v_a_1661_);
lean_dec(v_a_1650_);
lean_dec(v_a_1639_);
lean_dec(v_a_1628_);
lean_dec(v_a_1617_);
lean_dec(v_a_1606_);
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1506_);
lean_dec_ref(v___x_1503_);
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1674_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1674_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
else
{
lean_object* v_a_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
v_a_1683_ = lean_ctor_get(v___x_1674_, 0);
lean_inc(v_a_1683_);
lean_dec_ref_known(v___x_1674_, 1);
v___x_1684_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_1685_ = l_Lasm_JS_readField___redArg(v___x_1506_, v_d_1507_, v___x_1684_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
lean_dec(v_a_1683_);
lean_dec(v_a_1672_);
lean_dec(v_a_1661_);
lean_dec(v_a_1650_);
lean_dec(v_a_1639_);
lean_dec(v_a_1628_);
lean_dec(v_a_1617_);
lean_dec(v_a_1606_);
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
lean_dec_ref(v___x_1503_);
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1685_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1685_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
else
{
lean_object* v_a_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v_a_1694_ = lean_ctor_get(v___x_1685_, 0);
lean_inc(v_a_1694_);
lean_dec_ref_known(v___x_1685_, 1);
v___x_1695_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_1696_ = l_Lasm_JS_readField___redArg(v___x_1503_, v_d_1507_, v___x_1695_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
lean_dec(v_a_1694_);
lean_dec(v_a_1683_);
lean_dec(v_a_1672_);
lean_dec(v_a_1661_);
lean_dec(v_a_1650_);
lean_dec(v_a_1639_);
lean_dec(v_a_1628_);
lean_dec(v_a_1617_);
lean_dec(v_a_1606_);
lean_dec(v_a_1595_);
lean_dec(v_a_1584_);
lean_dec(v_a_1573_);
lean_dec(v_a_1562_);
lean_dec(v_a_1551_);
lean_dec(v_a_1540_);
lean_dec(v_a_1529_);
lean_dec(v_a_1518_);
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1696_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1696_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
else
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1713_; 
v_a_1705_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1707_ = v___x_1696_;
v_isShared_1708_ = v_isSharedCheck_1713_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v___x_1696_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1713_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1709_; lean_object* v___x_1711_; 
v___x_1709_ = lean_alloc_ctor(0, 18, 0);
lean_ctor_set(v___x_1709_, 0, v_a_1518_);
lean_ctor_set(v___x_1709_, 1, v_a_1529_);
lean_ctor_set(v___x_1709_, 2, v_a_1540_);
lean_ctor_set(v___x_1709_, 3, v_a_1551_);
lean_ctor_set(v___x_1709_, 4, v_a_1562_);
lean_ctor_set(v___x_1709_, 5, v_a_1573_);
lean_ctor_set(v___x_1709_, 6, v_a_1584_);
lean_ctor_set(v___x_1709_, 7, v_a_1595_);
lean_ctor_set(v___x_1709_, 8, v_a_1606_);
lean_ctor_set(v___x_1709_, 9, v_a_1617_);
lean_ctor_set(v___x_1709_, 10, v_a_1628_);
lean_ctor_set(v___x_1709_, 11, v_a_1639_);
lean_ctor_set(v___x_1709_, 12, v_a_1650_);
lean_ctor_set(v___x_1709_, 13, v_a_1661_);
lean_ctor_set(v___x_1709_, 14, v_a_1672_);
lean_ctor_set(v___x_1709_, 15, v_a_1683_);
lean_ctor_set(v___x_1709_, 16, v_a_1694_);
lean_ctor_set(v___x_1709_, 17, v_a_1705_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 0, v___x_1709_);
v___x_1711_ = v___x_1707_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0___boxed(lean_object* v___x_1714_, lean_object* v___x_1715_, lean_object* v___x_1716_, lean_object* v___x_1717_, lean_object* v_d_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0(v___x_1714_, v___x_1715_, v___x_1716_, v___x_1717_, v_d_1718_);
lean_dec(v_d_1718_);
return v_res_1719_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0(void){
_start:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1720_ = l_Lasm_JS_instFromJSString;
v___x_1721_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1720_);
return v___x_1721_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1(void){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0);
v___x_1723_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1722_);
return v___x_1723_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2(void){
_start:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1724_ = l_Lasm_JS_instFromJSBool;
v___x_1725_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1724_);
return v___x_1725_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3(void){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1726_ = l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo;
v___x_1727_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1726_);
return v___x_1727_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4(void){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3);
v___x_1729_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1728_);
return v___x_1729_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___f_1734_; 
v___x_1730_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4);
v___x_1731_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2);
v___x_1732_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1);
v___x_1733_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0);
v___f_1734_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1734_, 0, v___x_1733_);
lean_closure_set(v___f_1734_, 1, v___x_1732_);
lean_closure_set(v___f_1734_, 2, v___x_1731_);
lean_closure_set(v___f_1734_, 3, v___x_1730_);
return v___f_1734_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7(void){
_start:
{
uint8_t v___x_1736_; lean_object* v___x_1737_; lean_object* v___f_1738_; lean_object* v___x_1739_; 
v___x_1736_ = 0;
v___x_1737_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJsonWebKey___closed__6));
v___f_1738_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5);
v___x_1739_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1739_, 0, v___f_1738_);
lean_ctor_set(v___x_1739_, 1, v___x_1737_);
lean_ctor_set_uint8(v___x_1739_, sizeof(void*)*2, v___x_1736_);
return v___x_1739_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey(void){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx(lean_object* v_x_1741_){
_start:
{
if (lean_obj_tag(v_x_1741_) == 0)
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_unsigned_to_nat(0u);
return v___x_1742_;
}
else
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_unsigned_to_nat(1u);
return v___x_1743_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx___boxed(lean_object* v_x_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx(v_x_1744_);
lean_dec_ref(v_x_1744_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(lean_object* v_t_1746_, lean_object* v_k_1747_){
_start:
{
lean_object* v_value_1748_; lean_object* v___x_1749_; 
v_value_1748_ = lean_ctor_get(v_t_1746_, 0);
lean_inc_ref(v_value_1748_);
lean_dec_ref(v_t_1746_);
v___x_1749_ = lean_apply_1(v_k_1747_, v_value_1748_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim(lean_object* v_motive_1750_, lean_object* v_ctorIdx_1751_, lean_object* v_t_1752_, lean_object* v_h_1753_, lean_object* v_k_1754_){
_start:
{
lean_object* v___x_1755_; 
v___x_1755_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1752_, v_k_1754_);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___boxed(lean_object* v_motive_1756_, lean_object* v_ctorIdx_1757_, lean_object* v_t_1758_, lean_object* v_h_1759_, lean_object* v_k_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim(v_motive_1756_, v_ctorIdx_1757_, v_t_1758_, v_h_1759_, v_k_1760_);
lean_dec(v_ctorIdx_1757_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_bufferSource_elim___redArg(lean_object* v_t_1762_, lean_object* v_bufferSource_1763_){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1762_, v_bufferSource_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_bufferSource_elim(lean_object* v_motive_1765_, lean_object* v_t_1766_, lean_object* v_h_1767_, lean_object* v_bufferSource_1768_){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1766_, v_bufferSource_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_jsonWebKey_elim___redArg(lean_object* v_t_1770_, lean_object* v_jsonWebKey_1771_){
_start:
{
lean_object* v___x_1772_; 
v___x_1772_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1770_, v_jsonWebKey_1771_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_jsonWebKey_elim(lean_object* v_motive_1773_, lean_object* v_t_1774_, lean_object* v_h_1775_, lean_object* v_jsonWebKey_1776_){
_start:
{
lean_object* v___x_1777_; 
v___x_1777_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1774_, v_jsonWebKey_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey___lam__0(lean_object* v_x_1778_){
_start:
{
if (lean_obj_tag(v_x_1778_) == 0)
{
lean_object* v_value_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
v_value_1779_ = lean_ctor_get(v_x_1778_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_x_1778_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v_x_1778_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_value_1779_);
lean_dec(v_x_1778_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
lean_ctor_set_tag(v___x_1781_, 6);
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_value_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
else
{
lean_object* v_value_1787_; lean_object* v_kty_1788_; lean_object* v_use_1789_; lean_object* v_key__ops_1790_; lean_object* v_alg_1791_; lean_object* v_ext_1792_; lean_object* v_crv_1793_; lean_object* v_x_1794_; lean_object* v_y_1795_; lean_object* v_d_1796_; lean_object* v_n_1797_; lean_object* v_e_1798_; lean_object* v_p_1799_; lean_object* v_q_1800_; lean_object* v_dp_1801_; lean_object* v_dq_1802_; lean_object* v_qi_1803_; lean_object* v_oth_1804_; lean_object* v_k_1805_; lean_object* v___f_1806_; lean_object* v___x_1807_; lean_object* v___f_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v_value_1787_ = lean_ctor_get(v_x_1778_, 0);
lean_inc_ref(v_value_1787_);
lean_dec_ref_known(v_x_1778_, 1);
v_kty_1788_ = lean_ctor_get(v_value_1787_, 0);
lean_inc(v_kty_1788_);
v_use_1789_ = lean_ctor_get(v_value_1787_, 1);
lean_inc(v_use_1789_);
v_key__ops_1790_ = lean_ctor_get(v_value_1787_, 2);
lean_inc(v_key__ops_1790_);
v_alg_1791_ = lean_ctor_get(v_value_1787_, 3);
lean_inc(v_alg_1791_);
v_ext_1792_ = lean_ctor_get(v_value_1787_, 4);
lean_inc(v_ext_1792_);
v_crv_1793_ = lean_ctor_get(v_value_1787_, 5);
lean_inc(v_crv_1793_);
v_x_1794_ = lean_ctor_get(v_value_1787_, 6);
lean_inc(v_x_1794_);
v_y_1795_ = lean_ctor_get(v_value_1787_, 7);
lean_inc(v_y_1795_);
v_d_1796_ = lean_ctor_get(v_value_1787_, 8);
lean_inc(v_d_1796_);
v_n_1797_ = lean_ctor_get(v_value_1787_, 9);
lean_inc(v_n_1797_);
v_e_1798_ = lean_ctor_get(v_value_1787_, 10);
lean_inc(v_e_1798_);
v_p_1799_ = lean_ctor_get(v_value_1787_, 11);
lean_inc(v_p_1799_);
v_q_1800_ = lean_ctor_get(v_value_1787_, 12);
lean_inc(v_q_1800_);
v_dp_1801_ = lean_ctor_get(v_value_1787_, 13);
lean_inc(v_dp_1801_);
v_dq_1802_ = lean_ctor_get(v_value_1787_, 14);
lean_inc(v_dq_1802_);
v_qi_1803_ = lean_ctor_get(v_value_1787_, 15);
lean_inc(v_qi_1803_);
v_oth_1804_ = lean_ctor_get(v_value_1787_, 16);
lean_inc(v_oth_1804_);
v_k_1805_ = lean_ctor_get(v_value_1787_, 17);
lean_inc(v_k_1805_);
lean_dec_ref(v_value_1787_);
v___f_1806_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0));
v___x_1807_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__0, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__0_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__0);
v___f_1808_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___closed__1));
v___x_1809_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__2, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__2_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__2);
v___x_1810_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
v___x_1811_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_kty_1788_);
v___x_1812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1810_);
lean_ctor_set(v___x_1812_, 1, v___x_1811_);
v___x_1813_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_1814_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_use_1789_);
v___x_1815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1813_);
lean_ctor_set(v___x_1815_, 1, v___x_1814_);
v___x_1816_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_1817_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1807_, v_key__ops_1790_);
v___x_1818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1816_);
lean_ctor_set(v___x_1818_, 1, v___x_1817_);
v___x_1819_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_1820_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_alg_1791_);
v___x_1821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1819_);
lean_ctor_set(v___x_1821_, 1, v___x_1820_);
v___x_1822_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_1823_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1808_, v_ext_1792_);
v___x_1824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1822_);
lean_ctor_set(v___x_1824_, 1, v___x_1823_);
v___x_1825_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_1826_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_crv_1793_);
v___x_1827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1825_);
lean_ctor_set(v___x_1827_, 1, v___x_1826_);
v___x_1828_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_1829_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_x_1794_);
v___x_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1828_);
lean_ctor_set(v___x_1830_, 1, v___x_1829_);
v___x_1831_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_1832_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_y_1795_);
v___x_1833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1831_);
lean_ctor_set(v___x_1833_, 1, v___x_1832_);
v___x_1834_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_1835_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_d_1796_);
v___x_1836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1834_);
lean_ctor_set(v___x_1836_, 1, v___x_1835_);
v___x_1837_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_1838_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_n_1797_);
v___x_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1837_);
lean_ctor_set(v___x_1839_, 1, v___x_1838_);
v___x_1840_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_1841_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_e_1798_);
v___x_1842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1840_);
lean_ctor_set(v___x_1842_, 1, v___x_1841_);
v___x_1843_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_1844_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_p_1799_);
v___x_1845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1843_);
lean_ctor_set(v___x_1845_, 1, v___x_1844_);
v___x_1846_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_1847_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_q_1800_);
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1846_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
v___x_1849_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_1850_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_dp_1801_);
v___x_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1849_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
v___x_1852_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_1853_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_dq_1802_);
v___x_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1852_);
lean_ctor_set(v___x_1854_, 1, v___x_1853_);
v___x_1855_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_1856_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_qi_1803_);
v___x_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1855_);
lean_ctor_set(v___x_1857_, 1, v___x_1856_);
v___x_1858_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_1859_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1809_, v_oth_1804_);
v___x_1860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1858_);
lean_ctor_set(v___x_1860_, 1, v___x_1859_);
v___x_1861_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_1862_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1806_, v_k_1805_);
v___x_1863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1861_);
lean_ctor_set(v___x_1863_, 1, v___x_1862_);
v___x_1864_ = lean_unsigned_to_nat(18u);
v___x_1865_ = lean_mk_empty_array_with_capacity(v___x_1864_);
v___x_1866_ = lean_array_push(v___x_1865_, v___x_1812_);
v___x_1867_ = lean_array_push(v___x_1866_, v___x_1815_);
v___x_1868_ = lean_array_push(v___x_1867_, v___x_1818_);
v___x_1869_ = lean_array_push(v___x_1868_, v___x_1821_);
v___x_1870_ = lean_array_push(v___x_1869_, v___x_1824_);
v___x_1871_ = lean_array_push(v___x_1870_, v___x_1827_);
v___x_1872_ = lean_array_push(v___x_1871_, v___x_1830_);
v___x_1873_ = lean_array_push(v___x_1872_, v___x_1833_);
v___x_1874_ = lean_array_push(v___x_1873_, v___x_1836_);
v___x_1875_ = lean_array_push(v___x_1874_, v___x_1839_);
v___x_1876_ = lean_array_push(v___x_1875_, v___x_1842_);
v___x_1877_ = lean_array_push(v___x_1876_, v___x_1845_);
v___x_1878_ = lean_array_push(v___x_1877_, v___x_1848_);
v___x_1879_ = lean_array_push(v___x_1878_, v___x_1851_);
v___x_1880_ = lean_array_push(v___x_1879_, v___x_1854_);
v___x_1881_ = lean_array_push(v___x_1880_, v___x_1857_);
v___x_1882_ = lean_array_push(v___x_1881_, v___x_1860_);
v___x_1883_ = lean_array_push(v___x_1882_, v___x_1863_);
v___x_1884_ = l_Lasm_JS_Web_Support_fields(v___x_1883_);
lean_dec_ref(v___x_1883_);
return v___x_1884_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx(lean_object* v_x_1887_){
_start:
{
if (lean_obj_tag(v_x_1887_) == 0)
{
lean_object* v___x_1888_; 
v___x_1888_ = lean_unsigned_to_nat(0u);
return v___x_1888_;
}
else
{
lean_object* v___x_1889_; 
v___x_1889_ = lean_unsigned_to_nat(1u);
return v___x_1889_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx___boxed(lean_object* v_x_1890_){
_start:
{
lean_object* v_res_1891_; 
v_res_1891_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx(v_x_1890_);
lean_dec_ref(v_x_1890_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(lean_object* v_t_1892_, lean_object* v_k_1893_){
_start:
{
lean_object* v_value_1894_; lean_object* v___x_1895_; 
v_value_1894_ = lean_ctor_get(v_t_1892_, 0);
lean_inc_ref(v_value_1894_);
lean_dec_ref(v_t_1892_);
v___x_1895_ = lean_apply_1(v_k_1893_, v_value_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim(lean_object* v_motive_1896_, lean_object* v_ctorIdx_1897_, lean_object* v_t_1898_, lean_object* v_h_1899_, lean_object* v_k_1900_){
_start:
{
lean_object* v___x_1901_; 
v___x_1901_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1898_, v_k_1900_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___boxed(lean_object* v_motive_1902_, lean_object* v_ctorIdx_1903_, lean_object* v_t_1904_, lean_object* v_h_1905_, lean_object* v_k_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim(v_motive_1902_, v_ctorIdx_1903_, v_t_1904_, v_h_1905_, v_k_1906_);
lean_dec(v_ctorIdx_1903_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_arrayBuffer_elim___redArg(lean_object* v_t_1908_, lean_object* v_arrayBuffer_1909_){
_start:
{
lean_object* v___x_1910_; 
v___x_1910_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1908_, v_arrayBuffer_1909_);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_arrayBuffer_elim(lean_object* v_motive_1911_, lean_object* v_t_1912_, lean_object* v_h_1913_, lean_object* v_arrayBuffer_1914_){
_start:
{
lean_object* v___x_1915_; 
v___x_1915_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1912_, v_arrayBuffer_1914_);
return v___x_1915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_jsonWebKey_elim___redArg(lean_object* v_t_1916_, lean_object* v_jsonWebKey_1917_){
_start:
{
lean_object* v___x_1918_; 
v___x_1918_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1916_, v_jsonWebKey_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_jsonWebKey_elim(lean_object* v_motive_1919_, lean_object* v_t_1920_, lean_object* v_h_1921_, lean_object* v_jsonWebKey_1922_){
_start:
{
lean_object* v___x_1923_; 
v___x_1923_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1920_, v_jsonWebKey_1922_);
return v___x_1923_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5(void){
_start:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1930_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_1931_ = lean_string_utf8_byte_size(v___x_1930_);
return v___x_1931_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6(void){
_start:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; uint8_t v___x_1934_; 
v___x_1932_ = lean_unsigned_to_nat(0u);
v___x_1933_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5);
v___x_1934_ = lean_nat_dec_eq(v___x_1933_, v___x_1932_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(lean_object* v_d_1939_, lean_object* v_key_1940_){
_start:
{
if (lean_obj_tag(v_d_1939_) == 8)
{
lean_object* v___x_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1972_; 
v___x_1943_ = l_Lasm_JS_Data_field(v_d_1939_, v_key_1940_);
v_isSharedCheck_1972_ = !lean_is_exclusive(v_d_1939_);
if (v_isSharedCheck_1972_ == 0)
{
lean_object* v_unused_1973_; 
v_unused_1973_ = lean_ctor_get(v_d_1939_, 0);
lean_dec(v_unused_1973_);
v___x_1945_ = v_d_1939_;
v_isShared_1946_ = v_isSharedCheck_1972_;
goto v_resetjp_1944_;
}
else
{
lean_dec(v_d_1939_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1972_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
switch(lean_obj_tag(v___x_1943_))
{
case 1:
{
lean_del_object(v___x_1945_);
goto v___jp_1941_;
}
case 0:
{
lean_del_object(v___x_1945_);
goto v___jp_1941_;
}
default: 
{
if (lean_obj_tag(v___x_1943_) == 2)
{
uint8_t v_b_1947_; lean_object* v___x_1948_; lean_object* v___x_1950_; 
v_b_1947_ = lean_ctor_get_uint8(v___x_1943_, 0);
lean_dec_ref_known(v___x_1943_, 0);
v___x_1948_ = lean_box(v_b_1947_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set_tag(v___x_1945_, 1);
lean_ctor_set(v___x_1945_, 0, v___x_1948_);
v___x_1950_ = v___x_1945_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1948_);
v___x_1950_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
lean_object* v___x_1951_; 
v___x_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
return v___x_1951_;
}
}
else
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; uint8_t v___x_1963_; 
v___x_1953_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_1954_ = lean_string_append(v___x_1953_, v_key_1940_);
v___x_1955_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_1956_ = lean_string_append(v___x_1954_, v___x_1955_);
v___x_1957_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__3));
v___x_1958_ = lean_string_append(v___x_1956_, v___x_1957_);
v___x_1959_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_1960_ = lean_string_append(v___x_1958_, v___x_1959_);
v___x_1961_ = l_Lasm_JS_Data_describe(v___x_1943_);
v___x_1962_ = lean_string_append(v___x_1960_, v___x_1961_);
lean_dec_ref(v___x_1961_);
v___x_1963_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1967_; 
v___x_1964_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___x_1965_ = lean_string_append(v___x_1962_, v___x_1964_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set_tag(v___x_1945_, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1965_);
v___x_1967_ = v___x_1945_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v___x_1965_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
else
{
lean_object* v___x_1970_; 
if (v_isShared_1946_ == 0)
{
lean_ctor_set_tag(v___x_1945_, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1962_);
v___x_1970_ = v___x_1945_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1962_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1974_; 
lean_dec(v_d_1939_);
v___x_1974_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__9));
return v___x_1974_;
}
v___jp_1941_:
{
lean_object* v___x_1942_; 
v___x_1942_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__0));
return v___x_1942_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___boxed(lean_object* v_d_1975_, lean_object* v_key_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(v_d_1975_, v_key_1976_);
lean_dec_ref(v_key_1976_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(size_t v_sz_1980_, size_t v_i_1981_, lean_object* v_bs_1982_){
_start:
{
uint8_t v___x_1983_; 
v___x_1983_ = lean_usize_dec_lt(v_i_1981_, v_sz_1980_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; 
v___x_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1984_, 0, v_bs_1982_);
return v___x_1984_;
}
else
{
lean_object* v_v_1985_; 
v_v_1985_ = lean_array_uget_borrowed(v_bs_1982_, v_i_1981_);
if (lean_obj_tag(v_v_1985_) == 4)
{
lean_object* v_s_1986_; lean_object* v___x_1987_; lean_object* v_bs_x27_1988_; size_t v___x_1989_; size_t v___x_1990_; lean_object* v___x_1991_; 
v_s_1986_ = lean_ctor_get(v_v_1985_, 0);
lean_inc_ref(v_s_1986_);
v___x_1987_ = lean_unsigned_to_nat(0u);
v_bs_x27_1988_ = lean_array_uset(v_bs_1982_, v_i_1981_, v___x_1987_);
v___x_1989_ = ((size_t)1ULL);
v___x_1990_ = lean_usize_add(v_i_1981_, v___x_1989_);
v___x_1991_ = lean_array_uset(v_bs_x27_1988_, v_i_1981_, v_s_1986_);
v_i_1981_ = v___x_1990_;
v_bs_1982_ = v___x_1991_;
goto _start;
}
else
{
lean_object* v___x_1993_; 
lean_dec_ref(v_bs_1982_);
v___x_1993_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___closed__0));
return v___x_1993_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_1994_, lean_object* v_i_1995_, lean_object* v_bs_1996_){
_start:
{
size_t v_sz_boxed_1997_; size_t v_i_boxed_1998_; lean_object* v_res_1999_; 
v_sz_boxed_1997_ = lean_unbox_usize(v_sz_1994_);
lean_dec(v_sz_1994_);
v_i_boxed_1998_ = lean_unbox_usize(v_i_1995_);
lean_dec(v_i_1995_);
v_res_1999_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(v_sz_boxed_1997_, v_i_boxed_1998_, v_bs_1996_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(lean_object* v_d_2009_, lean_object* v_key_2010_){
_start:
{
if (lean_obj_tag(v_d_2009_) == 8)
{
lean_object* v___x_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2066_; 
v___x_2013_ = l_Lasm_JS_Data_field(v_d_2009_, v_key_2010_);
v_isSharedCheck_2066_ = !lean_is_exclusive(v_d_2009_);
if (v_isSharedCheck_2066_ == 0)
{
lean_object* v_unused_2067_; 
v_unused_2067_ = lean_ctor_get(v_d_2009_, 0);
lean_dec(v_unused_2067_);
v___x_2015_ = v_d_2009_;
v_isShared_2016_ = v_isSharedCheck_2066_;
goto v_resetjp_2014_;
}
else
{
lean_dec(v_d_2009_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2066_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v_a_2018_; 
switch(lean_obj_tag(v___x_2013_))
{
case 1:
{
lean_del_object(v___x_2015_);
goto v___jp_2011_;
}
case 0:
{
lean_del_object(v___x_2015_);
goto v___jp_2011_;
}
default: 
{
if (lean_obj_tag(v___x_2013_) == 7)
{
lean_object* v_items_2043_; size_t v_sz_2044_; size_t v___x_2045_; lean_object* v___x_2046_; 
v_items_2043_ = lean_ctor_get(v___x_2013_, 0);
lean_inc_ref(v_items_2043_);
v_sz_2044_ = lean_array_size(v_items_2043_);
v___x_2045_ = ((size_t)0ULL);
v___x_2046_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(v_sz_2044_, v___x_2045_, v_items_2043_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; uint8_t v___x_2051_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2047_);
lean_dec_ref_known(v___x_2046_, 1);
v___x_2048_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__4));
v___x_2049_ = lean_string_utf8_byte_size(v_a_2047_);
v___x_2050_ = lean_unsigned_to_nat(0u);
v___x_2051_ = lean_nat_dec_eq(v___x_2049_, v___x_2050_);
if (v___x_2051_ == 0)
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2052_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__5));
v___x_2053_ = lean_string_append(v___x_2052_, v_a_2047_);
lean_dec(v_a_2047_);
v___x_2054_ = lean_string_append(v___x_2048_, v___x_2053_);
lean_dec_ref(v___x_2053_);
v_a_2018_ = v___x_2054_;
goto v___jp_2017_;
}
else
{
lean_dec(v_a_2047_);
v_a_2018_ = v___x_2048_;
goto v___jp_2017_;
}
}
else
{
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2055_; 
v_a_2055_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2046_, 1);
v_a_2018_ = v_a_2055_;
goto v___jp_2017_;
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2064_; 
lean_dec_ref_known(v___x_2013_, 1);
lean_del_object(v___x_2015_);
v_a_2056_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2058_ = v___x_2046_;
v_isShared_2059_ = v_isSharedCheck_2064_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2046_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2064_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2060_; lean_object* v___x_2062_; 
v___x_2060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2060_, 0, v_a_2056_);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 0, v___x_2060_);
v___x_2062_ = v___x_2058_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
}
else
{
lean_object* v___x_2065_; 
v___x_2065_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_2018_ = v___x_2065_;
goto v___jp_2017_;
}
}
}
v___jp_2017_:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; uint8_t v___x_2031_; 
v___x_2019_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_2020_ = lean_string_append(v___x_2019_, v_key_2010_);
v___x_2021_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_2022_ = lean_string_append(v___x_2020_, v___x_2021_);
v___x_2023_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__1));
v___x_2024_ = lean_string_append(v___x_2022_, v___x_2023_);
v___x_2025_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_2026_ = lean_string_append(v___x_2024_, v___x_2025_);
v___x_2027_ = l_Lasm_JS_Data_describe(v___x_2013_);
v___x_2028_ = lean_string_append(v___x_2026_, v___x_2027_);
lean_dec_ref(v___x_2027_);
v___x_2029_ = lean_string_utf8_byte_size(v_a_2018_);
v___x_2030_ = lean_unsigned_to_nat(0u);
v___x_2031_ = lean_nat_dec_eq(v___x_2029_, v___x_2030_);
if (v___x_2031_ == 0)
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2038_; 
v___x_2032_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_2033_ = lean_string_append(v___x_2032_, v_a_2018_);
lean_dec_ref(v_a_2018_);
v___x_2034_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_2035_ = lean_string_append(v___x_2033_, v___x_2034_);
v___x_2036_ = lean_string_append(v___x_2028_, v___x_2035_);
lean_dec_ref(v___x_2035_);
if (v_isShared_2016_ == 0)
{
lean_ctor_set_tag(v___x_2015_, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2036_);
v___x_2038_ = v___x_2015_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v___x_2036_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
else
{
lean_object* v___x_2041_; 
lean_dec_ref(v_a_2018_);
if (v_isShared_2016_ == 0)
{
lean_ctor_set_tag(v___x_2015_, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2028_);
v___x_2041_ = v___x_2015_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v___x_2028_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
}
}
else
{
lean_object* v___x_2068_; 
lean_dec(v_d_2009_);
v___x_2068_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__6));
return v___x_2068_;
}
v___jp_2011_:
{
lean_object* v___x_2012_; 
v___x_2012_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__0));
return v___x_2012_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___boxed(lean_object* v_d_2069_, lean_object* v_key_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(v_d_2069_, v_key_2070_);
lean_dec_ref(v_key_2070_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(lean_object* v_d_2077_, lean_object* v_key_2078_){
_start:
{
if (lean_obj_tag(v_d_2077_) == 8)
{
lean_object* v___x_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2109_; 
v___x_2081_ = l_Lasm_JS_Data_field(v_d_2077_, v_key_2078_);
v_isSharedCheck_2109_ = !lean_is_exclusive(v_d_2077_);
if (v_isSharedCheck_2109_ == 0)
{
lean_object* v_unused_2110_; 
v_unused_2110_ = lean_ctor_get(v_d_2077_, 0);
lean_dec(v_unused_2110_);
v___x_2083_ = v_d_2077_;
v_isShared_2084_ = v_isSharedCheck_2109_;
goto v_resetjp_2082_;
}
else
{
lean_dec(v_d_2077_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2109_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
switch(lean_obj_tag(v___x_2081_))
{
case 1:
{
lean_del_object(v___x_2083_);
goto v___jp_2079_;
}
case 0:
{
lean_del_object(v___x_2083_);
goto v___jp_2079_;
}
default: 
{
if (lean_obj_tag(v___x_2081_) == 4)
{
lean_object* v_s_2085_; lean_object* v___x_2087_; 
v_s_2085_ = lean_ctor_get(v___x_2081_, 0);
lean_inc_ref(v_s_2085_);
lean_dec_ref_known(v___x_2081_, 1);
if (v_isShared_2084_ == 0)
{
lean_ctor_set_tag(v___x_2083_, 1);
lean_ctor_set(v___x_2083_, 0, v_s_2085_);
v___x_2087_ = v___x_2083_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_s_2085_);
v___x_2087_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2088_; 
v___x_2088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
return v___x_2088_;
}
}
else
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2090_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_2091_ = lean_string_append(v___x_2090_, v_key_2078_);
v___x_2092_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_2093_ = lean_string_append(v___x_2091_, v___x_2092_);
v___x_2094_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__1));
v___x_2095_ = lean_string_append(v___x_2093_, v___x_2094_);
v___x_2096_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_2097_ = lean_string_append(v___x_2095_, v___x_2096_);
v___x_2098_ = l_Lasm_JS_Data_describe(v___x_2081_);
v___x_2099_ = lean_string_append(v___x_2097_, v___x_2098_);
lean_dec_ref(v___x_2098_);
v___x_2100_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_2100_ == 0)
{
lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2104_; 
v___x_2101_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___x_2102_ = lean_string_append(v___x_2099_, v___x_2101_);
if (v_isShared_2084_ == 0)
{
lean_ctor_set_tag(v___x_2083_, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2102_);
v___x_2104_ = v___x_2083_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v___x_2102_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
else
{
lean_object* v___x_2107_; 
if (v_isShared_2084_ == 0)
{
lean_ctor_set_tag(v___x_2083_, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2099_);
v___x_2107_ = v___x_2083_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v___x_2099_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2111_; 
lean_dec(v_d_2077_);
v___x_2111_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__2));
return v___x_2111_;
}
v___jp_2079_:
{
lean_object* v___x_2080_; 
v___x_2080_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__0));
return v___x_2080_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___boxed(lean_object* v_d_2112_, lean_object* v_key_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2112_, v_key_2113_);
lean_dec_ref(v_key_2113_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(size_t v_sz_2115_, size_t v_i_2116_, lean_object* v_bs_2117_){
_start:
{
uint8_t v___x_2118_; 
v___x_2118_ = lean_usize_dec_lt(v_i_2116_, v_sz_2115_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2119_; 
v___x_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2119_, 0, v_bs_2117_);
return v___x_2119_;
}
else
{
lean_object* v_v_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v_v_2120_ = lean_array_uget_borrowed(v_bs_2117_, v_i_2116_);
v___x_2121_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
lean_inc(v_v_2120_);
v___x_2122_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_v_2120_, v___x_2121_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2130_; 
lean_dec_ref(v_bs_2117_);
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2125_ = v___x_2122_;
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2122_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2128_; 
if (v_isShared_2126_ == 0)
{
v___x_2128_ = v___x_2125_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_a_2123_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
return v___x_2128_;
}
}
}
else
{
lean_object* v_a_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v_a_2131_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2122_, 1);
v___x_2132_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc(v_v_2120_);
v___x_2133_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_v_2120_, v___x_2132_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2141_; 
lean_dec(v_a_2131_);
lean_dec_ref(v_bs_2117_);
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2136_ = v___x_2133_;
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_a_2134_);
lean_dec(v___x_2133_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2139_; 
if (v_isShared_2137_ == 0)
{
v___x_2139_ = v___x_2136_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_a_2134_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
else
{
lean_object* v_a_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v_a_2142_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2133_, 1);
v___x_2143_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
lean_inc(v_v_2120_);
v___x_2144_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_v_2120_, v___x_2143_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_dec(v_a_2142_);
lean_dec(v_a_2131_);
lean_dec_ref(v_bs_2117_);
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2144_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2144_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
else
{
lean_object* v_a_2153_; lean_object* v___x_2154_; lean_object* v_bs_x27_2155_; lean_object* v___x_2156_; size_t v___x_2157_; size_t v___x_2158_; lean_object* v___x_2159_; 
v_a_2153_ = lean_ctor_get(v___x_2144_, 0);
lean_inc(v_a_2153_);
lean_dec_ref_known(v___x_2144_, 1);
v___x_2154_ = lean_unsigned_to_nat(0u);
v_bs_x27_2155_ = lean_array_uset(v_bs_2117_, v_i_2116_, v___x_2154_);
v___x_2156_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2156_, 0, v_a_2131_);
lean_ctor_set(v___x_2156_, 1, v_a_2142_);
lean_ctor_set(v___x_2156_, 2, v_a_2153_);
v___x_2157_ = ((size_t)1ULL);
v___x_2158_ = lean_usize_add(v_i_2116_, v___x_2157_);
v___x_2159_ = lean_array_uset(v_bs_x27_2155_, v_i_2116_, v___x_2156_);
v_i_2116_ = v___x_2158_;
v_bs_2117_ = v___x_2159_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5___boxed(lean_object* v_sz_2161_, lean_object* v_i_2162_, lean_object* v_bs_2163_){
_start:
{
size_t v_sz_boxed_2164_; size_t v_i_boxed_2165_; lean_object* v_res_2166_; 
v_sz_boxed_2164_ = lean_unbox_usize(v_sz_2161_);
lean_dec(v_sz_2161_);
v_i_boxed_2165_ = lean_unbox_usize(v_i_2162_);
lean_dec(v_i_2162_);
v_res_2166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(v_sz_boxed_2164_, v_i_boxed_2165_, v_bs_2163_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(lean_object* v_d_2173_, lean_object* v_key_2174_){
_start:
{
if (lean_obj_tag(v_d_2173_) == 8)
{
lean_object* v___x_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2230_; 
v___x_2177_ = l_Lasm_JS_Data_field(v_d_2173_, v_key_2174_);
v_isSharedCheck_2230_ = !lean_is_exclusive(v_d_2173_);
if (v_isSharedCheck_2230_ == 0)
{
lean_object* v_unused_2231_; 
v_unused_2231_ = lean_ctor_get(v_d_2173_, 0);
lean_dec(v_unused_2231_);
v___x_2179_ = v_d_2173_;
v_isShared_2180_ = v_isSharedCheck_2230_;
goto v_resetjp_2178_;
}
else
{
lean_dec(v_d_2173_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2230_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v_a_2182_; 
switch(lean_obj_tag(v___x_2177_))
{
case 1:
{
lean_del_object(v___x_2179_);
goto v___jp_2175_;
}
case 0:
{
lean_del_object(v___x_2179_);
goto v___jp_2175_;
}
default: 
{
if (lean_obj_tag(v___x_2177_) == 7)
{
lean_object* v_items_2207_; size_t v_sz_2208_; size_t v___x_2209_; lean_object* v___x_2210_; 
v_items_2207_ = lean_ctor_get(v___x_2177_, 0);
lean_inc_ref(v_items_2207_);
v_sz_2208_ = lean_array_size(v_items_2207_);
v___x_2209_ = ((size_t)0ULL);
v___x_2210_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(v_sz_2208_, v___x_2209_, v_items_2207_);
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; uint8_t v___x_2215_; 
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_a_2211_);
lean_dec_ref_known(v___x_2210_, 1);
v___x_2212_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__2));
v___x_2213_ = lean_string_utf8_byte_size(v_a_2211_);
v___x_2214_ = lean_unsigned_to_nat(0u);
v___x_2215_ = lean_nat_dec_eq(v___x_2213_, v___x_2214_);
if (v___x_2215_ == 0)
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2216_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__5));
v___x_2217_ = lean_string_append(v___x_2216_, v_a_2211_);
lean_dec(v_a_2211_);
v___x_2218_ = lean_string_append(v___x_2212_, v___x_2217_);
lean_dec_ref(v___x_2217_);
v_a_2182_ = v___x_2218_;
goto v___jp_2181_;
}
else
{
lean_dec(v_a_2211_);
v_a_2182_ = v___x_2212_;
goto v___jp_2181_;
}
}
else
{
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2219_; 
v_a_2219_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_a_2219_);
lean_dec_ref_known(v___x_2210_, 1);
v_a_2182_ = v_a_2219_;
goto v___jp_2181_;
}
else
{
lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2228_; 
lean_dec_ref_known(v___x_2177_, 1);
lean_del_object(v___x_2179_);
v_a_2220_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2222_ = v___x_2210_;
v_isShared_2223_ = v_isSharedCheck_2228_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v___x_2210_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2228_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2224_, 0, v_a_2220_);
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 0, v___x_2224_);
v___x_2226_ = v___x_2222_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
else
{
lean_object* v___x_2229_; 
v___x_2229_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_2182_ = v___x_2229_;
goto v___jp_2181_;
}
}
}
v___jp_2181_:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; uint8_t v___x_2195_; 
v___x_2183_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_2184_ = lean_string_append(v___x_2183_, v_key_2174_);
v___x_2185_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_2186_ = lean_string_append(v___x_2184_, v___x_2185_);
v___x_2187_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__1));
v___x_2188_ = lean_string_append(v___x_2186_, v___x_2187_);
v___x_2189_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_2190_ = lean_string_append(v___x_2188_, v___x_2189_);
v___x_2191_ = l_Lasm_JS_Data_describe(v___x_2177_);
v___x_2192_ = lean_string_append(v___x_2190_, v___x_2191_);
lean_dec_ref(v___x_2191_);
v___x_2193_ = lean_string_utf8_byte_size(v_a_2182_);
v___x_2194_ = lean_unsigned_to_nat(0u);
v___x_2195_ = lean_nat_dec_eq(v___x_2193_, v___x_2194_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2202_; 
v___x_2196_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_2197_ = lean_string_append(v___x_2196_, v_a_2182_);
lean_dec_ref(v_a_2182_);
v___x_2198_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_2199_ = lean_string_append(v___x_2197_, v___x_2198_);
v___x_2200_ = lean_string_append(v___x_2192_, v___x_2199_);
lean_dec_ref(v___x_2199_);
if (v_isShared_2180_ == 0)
{
lean_ctor_set_tag(v___x_2179_, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2200_);
v___x_2202_ = v___x_2179_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2200_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
else
{
lean_object* v___x_2205_; 
lean_dec_ref(v_a_2182_);
if (v_isShared_2180_ == 0)
{
lean_ctor_set_tag(v___x_2179_, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2192_);
v___x_2205_ = v___x_2179_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v___x_2192_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
}
}
else
{
lean_object* v___x_2232_; 
lean_dec(v_d_2173_);
v___x_2232_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__3));
return v___x_2232_;
}
v___jp_2175_:
{
lean_object* v___x_2176_; 
v___x_2176_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__0));
return v___x_2176_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___boxed(lean_object* v_d_2233_, lean_object* v_key_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(v_d_2233_, v_key_2234_);
lean_dec_ref(v_key_2234_);
return v_res_2235_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6(void){
_start:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2242_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__5));
v___x_2243_ = lean_unsigned_to_nat(46u);
v___x_2244_ = lean_unsigned_to_nat(193u);
v___x_2245_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__4));
v___x_2246_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__3));
v___x_2247_ = l_mkPanicMessageWithDecl(v___x_2246_, v___x_2245_, v___x_2244_, v___x_2243_, v___x_2242_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(lean_object* v_context_2249_, lean_object* v_d_2250_){
_start:
{
lean_object* v___y_2253_; lean_object* v___y_2254_; lean_object* v___y_2259_; lean_object* v_received_2260_; lean_object* v___y_2279_; lean_object* v_a_2282_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2306_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
lean_inc(v_d_2250_);
v___x_2307_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2306_);
if (lean_obj_tag(v___x_2307_) == 0)
{
lean_object* v_a_2308_; 
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2308_);
lean_dec_ref_known(v___x_2307_, 1);
v_a_2282_ = v_a_2308_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v_a_2309_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2307_, 1);
v___x_2310_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
lean_inc(v_d_2250_);
v___x_2311_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2310_);
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v_a_2312_; 
lean_dec(v_a_2309_);
v_a_2312_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_a_2312_);
lean_dec_ref_known(v___x_2311_, 1);
v_a_2282_ = v_a_2312_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
v_a_2313_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_a_2313_);
lean_dec_ref_known(v___x_2311_, 1);
v___x_2314_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
lean_inc(v_d_2250_);
v___x_2315_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(v_d_2250_, v___x_2314_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; 
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2316_);
lean_dec_ref_known(v___x_2315_, 1);
v_a_2282_ = v_a_2316_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v_a_2317_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2317_);
lean_dec_ref_known(v___x_2315_, 1);
v___x_2318_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
lean_inc(v_d_2250_);
v___x_2319_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2318_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; 
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2319_, 1);
v_a_2282_ = v_a_2320_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v_a_2321_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2319_, 1);
v___x_2322_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
lean_inc(v_d_2250_);
v___x_2323_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(v_d_2250_, v___x_2322_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; 
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2324_);
lean_dec_ref_known(v___x_2323_, 1);
v_a_2282_ = v_a_2324_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v_a_2325_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2323_, 1);
v___x_2326_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
lean_inc(v_d_2250_);
v___x_2327_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2326_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; 
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2328_);
lean_dec_ref_known(v___x_2327_, 1);
v_a_2282_ = v_a_2328_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v_a_2329_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v___x_2327_, 1);
v___x_2330_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
lean_inc(v_d_2250_);
v___x_2331_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2330_);
if (lean_obj_tag(v___x_2331_) == 0)
{
lean_object* v_a_2332_; 
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2332_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_a_2332_);
lean_dec_ref_known(v___x_2331_, 1);
v_a_2282_ = v_a_2332_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v_a_2333_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2331_, 1);
v___x_2334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
lean_inc(v_d_2250_);
v___x_2335_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2334_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; 
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2336_);
lean_dec_ref_known(v___x_2335_, 1);
v_a_2282_ = v_a_2336_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v_a_2337_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2335_, 1);
v___x_2338_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc(v_d_2250_);
v___x_2339_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2338_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; 
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
v_a_2282_ = v_a_2340_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v_a_2341_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2339_, 1);
v___x_2342_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
lean_inc(v_d_2250_);
v___x_2343_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2342_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; 
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2343_, 1);
v_a_2282_ = v_a_2344_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v_a_2345_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2345_);
lean_dec_ref_known(v___x_2343_, 1);
v___x_2346_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
lean_inc(v_d_2250_);
v___x_2347_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2346_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; 
lean_dec(v_a_2345_);
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2348_);
lean_dec_ref_known(v___x_2347_, 1);
v_a_2282_ = v_a_2348_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v_a_2349_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2349_);
lean_dec_ref_known(v___x_2347_, 1);
v___x_2350_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
lean_inc(v_d_2250_);
v___x_2351_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2350_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; 
lean_dec(v_a_2349_);
lean_dec(v_a_2345_);
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
v_a_2282_ = v_a_2352_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v_a_2353_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2353_);
lean_dec_ref_known(v___x_2351_, 1);
v___x_2354_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
lean_inc(v_d_2250_);
v___x_2355_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2354_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_a_2356_; 
lean_dec(v_a_2353_);
lean_dec(v_a_2349_);
lean_dec(v_a_2345_);
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2356_);
lean_dec_ref_known(v___x_2355_, 1);
v_a_2282_ = v_a_2356_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v_a_2357_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2357_);
lean_dec_ref_known(v___x_2355_, 1);
v___x_2358_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
lean_inc(v_d_2250_);
v___x_2359_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2358_);
if (lean_obj_tag(v___x_2359_) == 0)
{
lean_object* v_a_2360_; 
lean_dec(v_a_2357_);
lean_dec(v_a_2353_);
lean_dec(v_a_2349_);
lean_dec(v_a_2345_);
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_a_2360_);
lean_dec_ref_known(v___x_2359_, 1);
v_a_2282_ = v_a_2360_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v_a_2361_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_a_2361_);
lean_dec_ref_known(v___x_2359_, 1);
v___x_2362_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
lean_inc(v_d_2250_);
v___x_2363_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2362_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; 
lean_dec(v_a_2361_);
lean_dec(v_a_2357_);
lean_dec(v_a_2353_);
lean_dec(v_a_2349_);
lean_dec(v_a_2345_);
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2364_);
lean_dec_ref_known(v___x_2363_, 1);
v_a_2282_ = v_a_2364_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; 
v_a_2365_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2365_);
lean_dec_ref_known(v___x_2363_, 1);
v___x_2366_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
lean_inc(v_d_2250_);
v___x_2367_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2366_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; 
lean_dec(v_a_2365_);
lean_dec(v_a_2361_);
lean_dec(v_a_2357_);
lean_dec(v_a_2353_);
lean_dec(v_a_2349_);
lean_dec(v_a_2345_);
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2367_, 1);
v_a_2282_ = v_a_2368_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_a_2369_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2369_);
lean_dec_ref_known(v___x_2367_, 1);
v___x_2370_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
lean_inc(v_d_2250_);
v___x_2371_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(v_d_2250_, v___x_2370_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; 
lean_dec(v_a_2369_);
lean_dec(v_a_2365_);
lean_dec(v_a_2361_);
lean_dec(v_a_2357_);
lean_dec(v_a_2353_);
lean_dec(v_a_2349_);
lean_dec(v_a_2345_);
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2372_);
lean_dec_ref_known(v___x_2371_, 1);
v_a_2282_ = v_a_2372_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v_a_2373_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2371_, 1);
v___x_2374_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
lean_inc(v_d_2250_);
v___x_2375_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2250_, v___x_2374_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; 
lean_dec(v_a_2373_);
lean_dec(v_a_2369_);
lean_dec(v_a_2365_);
lean_dec(v_a_2361_);
lean_dec(v_a_2357_);
lean_dec(v_a_2353_);
lean_dec(v_a_2349_);
lean_dec(v_a_2345_);
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
lean_dec(v_a_2317_);
lean_dec(v_a_2313_);
lean_dec(v_a_2309_);
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2376_);
lean_dec_ref_known(v___x_2375_, 1);
v_a_2282_ = v_a_2376_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2385_; 
lean_dec(v_d_2250_);
v_a_2377_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2379_ = v___x_2375_;
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v___x_2375_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2381_; lean_object* v___x_2383_; 
v___x_2381_ = lean_alloc_ctor(0, 18, 0);
lean_ctor_set(v___x_2381_, 0, v_a_2309_);
lean_ctor_set(v___x_2381_, 1, v_a_2313_);
lean_ctor_set(v___x_2381_, 2, v_a_2317_);
lean_ctor_set(v___x_2381_, 3, v_a_2321_);
lean_ctor_set(v___x_2381_, 4, v_a_2325_);
lean_ctor_set(v___x_2381_, 5, v_a_2329_);
lean_ctor_set(v___x_2381_, 6, v_a_2333_);
lean_ctor_set(v___x_2381_, 7, v_a_2337_);
lean_ctor_set(v___x_2381_, 8, v_a_2341_);
lean_ctor_set(v___x_2381_, 9, v_a_2345_);
lean_ctor_set(v___x_2381_, 10, v_a_2349_);
lean_ctor_set(v___x_2381_, 11, v_a_2353_);
lean_ctor_set(v___x_2381_, 12, v_a_2357_);
lean_ctor_set(v___x_2381_, 13, v_a_2361_);
lean_ctor_set(v___x_2381_, 14, v_a_2365_);
lean_ctor_set(v___x_2381_, 15, v_a_2369_);
lean_ctor_set(v___x_2381_, 16, v_a_2373_);
lean_ctor_set(v___x_2381_, 17, v_a_2377_);
if (v_isShared_2380_ == 0)
{
lean_ctor_set_tag(v___x_2379_, 0);
lean_ctor_set(v___x_2379_, 0, v___x_2381_);
v___x_2383_ = v___x_2379_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___x_2381_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_2252_:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2255_ = lean_string_append(v___y_2253_, v___y_2254_);
lean_dec_ref(v___y_2254_);
v___x_2256_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
v___x_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
return v___x_2257_;
}
v___jp_2258_:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; uint8_t v___x_2272_; 
v___x_2261_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_2262_ = lean_string_append(v___x_2261_, v_context_2249_);
v___x_2263_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_2264_ = lean_string_append(v___x_2262_, v___x_2263_);
v___x_2265_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJsonWebKey___closed__6));
v___x_2266_ = lean_string_append(v___x_2264_, v___x_2265_);
v___x_2267_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_2268_ = lean_string_append(v___x_2266_, v___x_2267_);
v___x_2269_ = lean_string_append(v___x_2268_, v_received_2260_);
lean_dec_ref(v_received_2260_);
v___x_2270_ = lean_string_utf8_byte_size(v___y_2259_);
v___x_2271_ = lean_unsigned_to_nat(0u);
v___x_2272_ = lean_nat_dec_eq(v___x_2270_, v___x_2271_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2273_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_2274_ = lean_string_append(v___x_2273_, v___y_2259_);
lean_dec_ref(v___y_2259_);
v___x_2275_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_2276_ = lean_string_append(v___x_2274_, v___x_2275_);
v___y_2253_ = v___x_2269_;
v___y_2254_ = v___x_2276_;
goto v___jp_2252_;
}
else
{
lean_object* v___x_2277_; 
lean_dec_ref(v___y_2259_);
v___x_2277_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_2253_ = v___x_2269_;
v___y_2254_ = v___x_2277_;
goto v___jp_2252_;
}
}
v___jp_2278_:
{
lean_object* v___x_2280_; 
v___x_2280_ = l_Lasm_JS_Data_describe(v_d_2250_);
v___y_2259_ = v___y_2279_;
v_received_2260_ = v___x_2280_;
goto v___jp_2258_;
}
v___jp_2281_:
{
if (lean_obj_tag(v_d_2250_) == 9)
{
lean_object* v_value_2283_; lean_object* v_description_2284_; lean_object* v___x_2285_; uint8_t v___x_2286_; 
v_value_2283_ = lean_ctor_get(v_d_2250_, 0);
v_description_2284_ = lean_ctor_get(v_d_2250_, 1);
v___x_2285_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_2286_ = lean_string_dec_eq(v_description_2284_, v___x_2285_);
if (v___x_2286_ == 0)
{
v___y_2279_ = v_a_2282_;
goto v___jp_2278_;
}
else
{
lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2303_; 
lean_inc(v_value_2283_);
v_isSharedCheck_2303_ = !lean_is_exclusive(v_d_2250_);
if (v_isSharedCheck_2303_ == 0)
{
lean_object* v_unused_2304_; lean_object* v_unused_2305_; 
v_unused_2304_ = lean_ctor_get(v_d_2250_, 1);
lean_dec(v_unused_2304_);
v_unused_2305_ = lean_ctor_get(v_d_2250_, 0);
lean_dec(v_unused_2305_);
v___x_2288_ = v_d_2250_;
v_isShared_2289_ = v_isSharedCheck_2303_;
goto v_resetjp_2287_;
}
else
{
lean_dec(v_d_2250_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2303_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
uint32_t v___x_2290_; uint64_t v___x_2291_; lean_object* v___x_2293_; 
v___x_2290_ = 206;
v___x_2291_ = 0ULL;
lean_inc(v_value_2283_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 1, v___x_2285_);
v___x_2293_ = v___x_2288_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_value_2283_);
lean_ctor_set(v_reuseFailAlloc_2302_, 1, v___x_2285_);
v___x_2293_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
uint32_t v___x_2294_; lean_object* v___x_2295_; 
v___x_2294_ = lasm_js_value_handle(v_value_2283_);
lean_dec(v_value_2283_);
v___x_2295_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2290_, v___x_2291_, v___x_2293_, v___x_2294_);
lean_dec_ref(v___x_2293_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v_a_2296_; uint8_t v___x_2297_; 
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
lean_inc(v_a_2296_);
lean_dec_ref_known(v___x_2295_, 1);
v___x_2297_ = lean_string_validate_utf8(v_a_2296_);
if (v___x_2297_ == 0)
{
lean_object* v___x_2298_; lean_object* v___x_2299_; 
lean_dec(v_a_2296_);
v___x_2298_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_2299_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2298_);
v___y_2259_ = v_a_2282_;
v_received_2260_ = v___x_2299_;
goto v___jp_2258_;
}
else
{
lean_object* v___x_2300_; 
v___x_2300_ = lean_string_from_utf8_unchecked(v_a_2296_);
v___y_2259_ = v_a_2282_;
v_received_2260_ = v___x_2300_;
goto v___jp_2258_;
}
}
else
{
lean_object* v___x_2301_; 
lean_dec_ref_known(v___x_2295_, 1);
v___x_2301_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_2259_ = v_a_2282_;
v_received_2260_ = v___x_2301_;
goto v___jp_2258_;
}
}
}
}
}
else
{
v___y_2279_ = v_a_2282_;
goto v___jp_2278_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___boxed(lean_object* v_context_2386_, lean_object* v_d_2387_, lean_object* v_a_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(v_context_2386_, v_d_2387_);
lean_dec_ref(v_context_2386_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(lean_object* v_d_2392_){
_start:
{
switch(lean_obj_tag(v_d_2392_))
{
case 9:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = ((lean_object*)(l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__0));
v___x_2395_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_2394_, v_d_2392_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; lean_object* v___x_2397_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2396_);
lean_dec_ref_known(v___x_2395_, 1);
v___x_2397_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2396_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2406_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2400_ = v___x_2397_;
v_isShared_2401_ = v_isSharedCheck_2406_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2397_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2406_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2402_; lean_object* v___x_2404_; 
v___x_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2402_, 0, v_a_2398_);
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 0, v___x_2402_);
v___x_2404_ = v___x_2400_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v___x_2402_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
else
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
v_a_2407_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2397_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2397_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
v_a_2415_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2395_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2395_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
case 8:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = ((lean_object*)(l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__0));
v___x_2424_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(v___x_2423_, v_d_2392_);
if (lean_obj_tag(v___x_2424_) == 0)
{
lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2433_; 
v_a_2425_ = lean_ctor_get(v___x_2424_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2427_ = v___x_2424_;
v_isShared_2428_ = v_isSharedCheck_2433_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_dec(v___x_2424_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2433_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2429_; lean_object* v___x_2431_; 
v___x_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2429_, 0, v_a_2425_);
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 0, v___x_2429_);
v___x_2431_ = v___x_2427_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v___x_2429_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
v_a_2434_ = lean_ctor_get(v___x_2424_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2424_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2424_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
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
return v___x_2439_;
}
}
}
}
default: 
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2442_ = ((lean_object*)(l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__1));
v___x_2443_ = l_Lasm_JS_Data_describe(v_d_2392_);
v___x_2444_ = lean_string_append(v___x_2442_, v___x_2443_);
lean_dec_ref(v___x_2443_);
v___x_2445_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
v___x_2446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2445_);
return v___x_2446_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___boxed(lean_object* v_d_2447_, lean_object* v_a_2448_){
_start:
{
lean_object* v_res_2449_; 
v_res_2449_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(v_d_2447_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAlgorithm___lam__0(lean_object* v_d_2451_){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2452_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2453_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2453_, 0, v_d_2451_);
v___x_2454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2452_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
v___x_2455_ = lean_unsigned_to_nat(1u);
v___x_2456_ = lean_mk_empty_array_with_capacity(v___x_2455_);
v___x_2457_ = lean_array_push(v___x_2456_, v___x_2454_);
v___x_2458_ = l_Lasm_JS_Web_Support_fields(v___x_2457_);
lean_dec_ref(v___x_2457_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0(lean_object* v_d_2464_){
_start:
{
lean_object* v_name_2465_; lean_object* v_modulusLength_2466_; lean_object* v_publicExponent_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___y_2473_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; uint8_t v___x_2487_; 
v_name_2465_ = lean_ctor_get(v_d_2464_, 0);
lean_inc_ref(v_name_2465_);
v_modulusLength_2466_ = lean_ctor_get(v_d_2464_, 1);
lean_inc(v_modulusLength_2466_);
v_publicExponent_2467_ = lean_ctor_get(v_d_2464_, 2);
lean_inc_ref(v_publicExponent_2467_);
lean_dec_ref(v_d_2464_);
v___x_2468_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2469_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2469_, 0, v_name_2465_);
v___x_2470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2468_);
lean_ctor_set(v___x_2470_, 1, v___x_2469_);
v___x_2471_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2484_ = lean_nat_to_int(v_modulusLength_2466_);
v___x_2485_ = lean_nat_abs(v___x_2484_);
v___x_2486_ = lean_cstr_to_nat("9007199254740991");
v___x_2487_ = lean_nat_dec_le(v___x_2485_, v___x_2486_);
lean_dec(v___x_2485_);
if (v___x_2487_ == 0)
{
lean_object* v___x_2488_; 
v___x_2488_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2484_);
v___y_2473_ = v___x_2488_;
goto v___jp_2472_;
}
else
{
double v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = l_Float_ofInt(v___x_2484_);
lean_dec(v___x_2484_);
v___x_2490_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2490_, 0, v___x_2489_);
v___y_2473_ = v___x_2490_;
goto v___jp_2472_;
}
v___jp_2472_:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2471_);
lean_ctor_set(v___x_2474_, 1, v___y_2473_);
v___x_2475_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2476_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2476_, 0, v_publicExponent_2467_);
v___x_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2475_);
lean_ctor_set(v___x_2477_, 1, v___x_2476_);
v___x_2478_ = lean_unsigned_to_nat(3u);
v___x_2479_ = lean_mk_empty_array_with_capacity(v___x_2478_);
v___x_2480_ = lean_array_push(v___x_2479_, v___x_2470_);
v___x_2481_ = lean_array_push(v___x_2480_, v___x_2474_);
v___x_2482_ = lean_array_push(v___x_2481_, v___x_2477_);
v___x_2483_ = l_Lasm_JS_Web_Support_fields(v___x_2482_);
lean_dec_ref(v___x_2482_);
return v___x_2483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0(lean_object* v_d_2494_){
_start:
{
lean_object* v_name_2495_; lean_object* v_modulusLength_2496_; lean_object* v_publicExponent_2497_; lean_object* v_hash_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___x_2515_; lean_object* v___y_2517_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; uint8_t v___x_2535_; 
v_name_2495_ = lean_ctor_get(v_d_2494_, 0);
lean_inc_ref(v_name_2495_);
v_modulusLength_2496_ = lean_ctor_get(v_d_2494_, 1);
lean_inc(v_modulusLength_2496_);
v_publicExponent_2497_ = lean_ctor_get(v_d_2494_, 2);
lean_inc_ref(v_publicExponent_2497_);
v_hash_2498_ = lean_ctor_get(v_d_2494_, 3);
lean_inc_ref(v_hash_2498_);
lean_dec_ref(v_d_2494_);
v___x_2499_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2500_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2500_, 0, v_name_2495_);
v___x_2501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2499_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2515_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2532_ = lean_nat_to_int(v_modulusLength_2496_);
v___x_2533_ = lean_nat_abs(v___x_2532_);
v___x_2534_ = lean_cstr_to_nat("9007199254740991");
v___x_2535_ = lean_nat_dec_le(v___x_2533_, v___x_2534_);
lean_dec(v___x_2533_);
if (v___x_2535_ == 0)
{
lean_object* v___x_2536_; 
v___x_2536_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2532_);
v___y_2517_ = v___x_2536_;
goto v___jp_2516_;
}
else
{
double v___x_2537_; lean_object* v___x_2538_; 
v___x_2537_ = l_Float_ofInt(v___x_2532_);
lean_dec(v___x_2532_);
v___x_2538_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2538_, 0, v___x_2537_);
v___y_2517_ = v___x_2538_;
goto v___jp_2516_;
}
v___jp_2502_:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
lean_inc_ref(v___y_2504_);
v___x_2507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2507_, 0, v___y_2504_);
lean_ctor_set(v___x_2507_, 1, v___y_2506_);
v___x_2508_ = lean_unsigned_to_nat(4u);
v___x_2509_ = lean_mk_empty_array_with_capacity(v___x_2508_);
v___x_2510_ = lean_array_push(v___x_2509_, v___x_2501_);
v___x_2511_ = lean_array_push(v___x_2510_, v___y_2503_);
v___x_2512_ = lean_array_push(v___x_2511_, v___y_2505_);
v___x_2513_ = lean_array_push(v___x_2512_, v___x_2507_);
v___x_2514_ = l_Lasm_JS_Web_Support_fields(v___x_2513_);
lean_dec_ref(v___x_2513_);
return v___x_2514_;
}
v___jp_2516_:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2515_);
lean_ctor_set(v___x_2518_, 1, v___y_2517_);
v___x_2519_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2520_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2520_, 0, v_publicExponent_2497_);
v___x_2521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2519_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
v___x_2522_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2498_) == 0)
{
lean_object* v_value_2523_; 
v_value_2523_ = lean_ctor_get(v_hash_2498_, 0);
lean_inc(v_value_2523_);
lean_dec_ref_known(v_hash_2498_, 1);
v___y_2503_ = v___x_2518_;
v___y_2504_ = v___x_2522_;
v___y_2505_ = v___x_2521_;
v___y_2506_ = v_value_2523_;
goto v___jp_2502_;
}
else
{
lean_object* v_value_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
v_value_2524_ = lean_ctor_get(v_hash_2498_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v_hash_2498_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v_hash_2498_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_value_2524_);
lean_dec(v_hash_2498_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
lean_ctor_set_tag(v___x_2526_, 4);
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_value_2524_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
v___y_2503_ = v___x_2518_;
v___y_2504_ = v___x_2522_;
v___y_2505_ = v___x_2521_;
v___y_2506_ = v___x_2529_;
goto v___jp_2502_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaKeyAlgorithm___lam__0(lean_object* v_d_2541_){
_start:
{
lean_object* v_name_2542_; lean_object* v_modulusLength_2543_; lean_object* v_publicExponent_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___y_2550_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; uint8_t v___x_2564_; 
v_name_2542_ = lean_ctor_get(v_d_2541_, 0);
lean_inc_ref(v_name_2542_);
v_modulusLength_2543_ = lean_ctor_get(v_d_2541_, 1);
lean_inc(v_modulusLength_2543_);
v_publicExponent_2544_ = lean_ctor_get(v_d_2541_, 2);
lean_inc_ref(v_publicExponent_2544_);
lean_dec_ref(v_d_2541_);
v___x_2545_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2546_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2546_, 0, v_name_2542_);
v___x_2547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2547_, 0, v___x_2545_);
lean_ctor_set(v___x_2547_, 1, v___x_2546_);
v___x_2548_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2561_ = lean_nat_to_int(v_modulusLength_2543_);
v___x_2562_ = lean_nat_abs(v___x_2561_);
v___x_2563_ = lean_cstr_to_nat("9007199254740991");
v___x_2564_ = lean_nat_dec_le(v___x_2562_, v___x_2563_);
lean_dec(v___x_2562_);
if (v___x_2564_ == 0)
{
lean_object* v___x_2565_; 
v___x_2565_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2565_, 0, v___x_2561_);
v___y_2550_ = v___x_2565_;
goto v___jp_2549_;
}
else
{
double v___x_2566_; lean_object* v___x_2567_; 
v___x_2566_ = l_Float_ofInt(v___x_2561_);
lean_dec(v___x_2561_);
v___x_2567_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2567_, 0, v___x_2566_);
v___y_2550_ = v___x_2567_;
goto v___jp_2549_;
}
v___jp_2549_:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2548_);
lean_ctor_set(v___x_2551_, 1, v___y_2550_);
v___x_2552_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2553_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2553_, 0, v_publicExponent_2544_);
v___x_2554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2552_);
lean_ctor_set(v___x_2554_, 1, v___x_2553_);
v___x_2555_ = lean_unsigned_to_nat(3u);
v___x_2556_ = lean_mk_empty_array_with_capacity(v___x_2555_);
v___x_2557_ = lean_array_push(v___x_2556_, v___x_2547_);
v___x_2558_ = lean_array_push(v___x_2557_, v___x_2551_);
v___x_2559_ = lean_array_push(v___x_2558_, v___x_2554_);
v___x_2560_ = l_Lasm_JS_Web_Support_fields(v___x_2559_);
lean_dec_ref(v___x_2559_);
return v___x_2560_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm___lam__0(lean_object* v_d_2570_){
_start:
{
lean_object* v_name_2571_; lean_object* v_modulusLength_2572_; lean_object* v_publicExponent_2573_; lean_object* v_hash_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___y_2580_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; uint8_t v___x_2603_; 
v_name_2571_ = lean_ctor_get(v_d_2570_, 0);
lean_inc_ref(v_name_2571_);
v_modulusLength_2572_ = lean_ctor_get(v_d_2570_, 1);
lean_inc(v_modulusLength_2572_);
v_publicExponent_2573_ = lean_ctor_get(v_d_2570_, 2);
lean_inc_ref(v_publicExponent_2573_);
v_hash_2574_ = lean_ctor_get(v_d_2570_, 3);
lean_inc_ref(v_hash_2574_);
lean_dec_ref(v_d_2570_);
v___x_2575_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2576_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2576_, 0, v_name_2571_);
v___x_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2575_);
lean_ctor_set(v___x_2577_, 1, v___x_2576_);
v___x_2578_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2600_ = lean_nat_to_int(v_modulusLength_2572_);
v___x_2601_ = lean_nat_abs(v___x_2600_);
v___x_2602_ = lean_cstr_to_nat("9007199254740991");
v___x_2603_ = lean_nat_dec_le(v___x_2601_, v___x_2602_);
lean_dec(v___x_2601_);
if (v___x_2603_ == 0)
{
lean_object* v___x_2604_; 
v___x_2604_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2600_);
v___y_2580_ = v___x_2604_;
goto v___jp_2579_;
}
else
{
double v___x_2605_; lean_object* v___x_2606_; 
v___x_2605_ = l_Float_ofInt(v___x_2600_);
lean_dec(v___x_2600_);
v___x_2606_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2606_, 0, v___x_2605_);
v___y_2580_ = v___x_2606_;
goto v___jp_2579_;
}
v___jp_2579_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
v___x_2581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2578_);
lean_ctor_set(v___x_2581_, 1, v___y_2580_);
v___x_2582_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2583_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2583_, 0, v_publicExponent_2573_);
v___x_2584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2582_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v___x_2585_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
v___x_2586_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_hash_2574_);
v___x_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2575_);
lean_ctor_set(v___x_2587_, 1, v___x_2586_);
v___x_2588_ = lean_unsigned_to_nat(1u);
v___x_2589_ = lean_mk_empty_array_with_capacity(v___x_2588_);
v___x_2590_ = lean_array_push(v___x_2589_, v___x_2587_);
v___x_2591_ = l_Lasm_JS_Web_Support_fields(v___x_2590_);
lean_dec_ref(v___x_2590_);
v___x_2592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2585_);
lean_ctor_set(v___x_2592_, 1, v___x_2591_);
v___x_2593_ = lean_unsigned_to_nat(4u);
v___x_2594_ = lean_mk_empty_array_with_capacity(v___x_2593_);
v___x_2595_ = lean_array_push(v___x_2594_, v___x_2577_);
v___x_2596_ = lean_array_push(v___x_2595_, v___x_2581_);
v___x_2597_ = lean_array_push(v___x_2596_, v___x_2584_);
v___x_2598_ = lean_array_push(v___x_2597_, v___x_2592_);
v___x_2599_ = l_Lasm_JS_Web_Support_fields(v___x_2598_);
lean_dec_ref(v___x_2598_);
return v___x_2599_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedImportParams___lam__0(lean_object* v_d_2609_){
_start:
{
lean_object* v_name_2610_; lean_object* v_hash_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2638_; 
v_name_2610_ = lean_ctor_get(v_d_2609_, 0);
v_hash_2611_ = lean_ctor_get(v_d_2609_, 1);
v_isSharedCheck_2638_ = !lean_is_exclusive(v_d_2609_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2613_ = v_d_2609_;
v_isShared_2614_ = v_isSharedCheck_2638_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_hash_2611_);
lean_inc(v_name_2610_);
lean_dec(v_d_2609_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2638_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2618_; 
v___x_2615_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2616_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2616_, 0, v_name_2610_);
if (v_isShared_2614_ == 0)
{
lean_ctor_set(v___x_2613_, 1, v___x_2616_);
lean_ctor_set(v___x_2613_, 0, v___x_2615_);
v___x_2618_ = v___x_2613_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v___x_2615_);
lean_ctor_set(v_reuseFailAlloc_2637_, 1, v___x_2616_);
v___x_2618_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
lean_object* v___x_2619_; lean_object* v___y_2621_; 
v___x_2619_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2611_) == 0)
{
lean_object* v_value_2628_; 
v_value_2628_ = lean_ctor_get(v_hash_2611_, 0);
lean_inc(v_value_2628_);
lean_dec_ref_known(v_hash_2611_, 1);
v___y_2621_ = v_value_2628_;
goto v___jp_2620_;
}
else
{
lean_object* v_value_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2636_; 
v_value_2629_ = lean_ctor_get(v_hash_2611_, 0);
v_isSharedCheck_2636_ = !lean_is_exclusive(v_hash_2611_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2631_ = v_hash_2611_;
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_value_2629_);
lean_dec(v_hash_2611_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
lean_ctor_set_tag(v___x_2631_, 4);
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_value_2629_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
v___y_2621_ = v___x_2634_;
goto v___jp_2620_;
}
}
}
v___jp_2620_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2622_, 0, v___x_2619_);
lean_ctor_set(v___x_2622_, 1, v___y_2621_);
v___x_2623_ = lean_unsigned_to_nat(2u);
v___x_2624_ = lean_mk_empty_array_with_capacity(v___x_2623_);
v___x_2625_ = lean_array_push(v___x_2624_, v___x_2618_);
v___x_2626_ = lean_array_push(v___x_2625_, v___x_2622_);
v___x_2627_ = l_Lasm_JS_Web_Support_fields(v___x_2626_);
lean_dec_ref(v___x_2626_);
return v___x_2627_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaPssParams___lam__0(lean_object* v_d_2642_){
_start:
{
lean_object* v_name_2643_; lean_object* v_saltLength_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2669_; 
v_name_2643_ = lean_ctor_get(v_d_2642_, 0);
v_saltLength_2644_ = lean_ctor_get(v_d_2642_, 1);
v_isSharedCheck_2669_ = !lean_is_exclusive(v_d_2642_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2646_ = v_d_2642_;
v_isShared_2647_ = v_isSharedCheck_2669_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_saltLength_2644_);
lean_inc(v_name_2643_);
lean_dec(v_d_2642_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2669_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2651_; 
v___x_2648_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2649_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2649_, 0, v_name_2643_);
if (v_isShared_2647_ == 0)
{
lean_ctor_set(v___x_2646_, 1, v___x_2649_);
lean_ctor_set(v___x_2646_, 0, v___x_2648_);
v___x_2651_ = v___x_2646_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v___x_2648_);
lean_ctor_set(v_reuseFailAlloc_2668_, 1, v___x_2649_);
v___x_2651_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
lean_object* v___x_2652_; lean_object* v___y_2654_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; uint8_t v___x_2664_; 
v___x_2652_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaPssParams___lam__0___closed__0));
v___x_2661_ = lean_nat_to_int(v_saltLength_2644_);
v___x_2662_ = lean_nat_abs(v___x_2661_);
v___x_2663_ = lean_cstr_to_nat("9007199254740991");
v___x_2664_ = lean_nat_dec_le(v___x_2662_, v___x_2663_);
lean_dec(v___x_2662_);
if (v___x_2664_ == 0)
{
lean_object* v___x_2665_; 
v___x_2665_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2661_);
v___y_2654_ = v___x_2665_;
goto v___jp_2653_;
}
else
{
double v___x_2666_; lean_object* v___x_2667_; 
v___x_2666_ = l_Float_ofInt(v___x_2661_);
lean_dec(v___x_2661_);
v___x_2667_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2667_, 0, v___x_2666_);
v___y_2654_ = v___x_2667_;
goto v___jp_2653_;
}
v___jp_2653_:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2652_);
lean_ctor_set(v___x_2655_, 1, v___y_2654_);
v___x_2656_ = lean_unsigned_to_nat(2u);
v___x_2657_ = lean_mk_empty_array_with_capacity(v___x_2656_);
v___x_2658_ = lean_array_push(v___x_2657_, v___x_2651_);
v___x_2659_ = lean_array_push(v___x_2658_, v___x_2655_);
v___x_2660_ = l_Lasm_JS_Web_Support_fields(v___x_2659_);
lean_dec_ref(v___x_2659_);
return v___x_2660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0(lean_object* v___f_2673_, lean_object* v_d_2674_){
_start:
{
lean_object* v_name_2675_; lean_object* v_label_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2693_; 
v_name_2675_ = lean_ctor_get(v_d_2674_, 0);
v_label_2676_ = lean_ctor_get(v_d_2674_, 1);
v_isSharedCheck_2693_ = !lean_is_exclusive(v_d_2674_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2678_ = v_d_2674_;
v_isShared_2679_ = v_isSharedCheck_2693_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_label_2676_);
lean_inc(v_name_2675_);
lean_dec(v_d_2674_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2693_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2683_; 
v___x_2680_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2681_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2681_, 0, v_name_2675_);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 1, v___x_2681_);
lean_ctor_set(v___x_2678_, 0, v___x_2680_);
v___x_2683_ = v___x_2678_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v___x_2680_);
lean_ctor_set(v_reuseFailAlloc_2692_, 1, v___x_2681_);
v___x_2683_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v___x_2684_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0___closed__0));
v___x_2685_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2673_, v_label_2676_);
v___x_2686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2684_);
lean_ctor_set(v___x_2686_, 1, v___x_2685_);
v___x_2687_ = lean_unsigned_to_nat(2u);
v___x_2688_ = lean_mk_empty_array_with_capacity(v___x_2687_);
v___x_2689_ = lean_array_push(v___x_2688_, v___x_2683_);
v___x_2690_ = lean_array_push(v___x_2689_, v___x_2686_);
v___x_2691_ = l_Lasm_JS_Web_Support_fields(v___x_2690_);
lean_dec_ref(v___x_2690_);
return v___x_2691_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcdsaParams___lam__0(lean_object* v_d_2698_){
_start:
{
lean_object* v_name_2699_; lean_object* v_hash_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2727_; 
v_name_2699_ = lean_ctor_get(v_d_2698_, 0);
v_hash_2700_ = lean_ctor_get(v_d_2698_, 1);
v_isSharedCheck_2727_ = !lean_is_exclusive(v_d_2698_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2702_ = v_d_2698_;
v_isShared_2703_ = v_isSharedCheck_2727_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_hash_2700_);
lean_inc(v_name_2699_);
lean_dec(v_d_2698_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2727_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2707_; 
v___x_2704_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2705_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2705_, 0, v_name_2699_);
if (v_isShared_2703_ == 0)
{
lean_ctor_set(v___x_2702_, 1, v___x_2705_);
lean_ctor_set(v___x_2702_, 0, v___x_2704_);
v___x_2707_ = v___x_2702_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v___x_2704_);
lean_ctor_set(v_reuseFailAlloc_2726_, 1, v___x_2705_);
v___x_2707_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
lean_object* v___x_2708_; lean_object* v___y_2710_; 
v___x_2708_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2700_) == 0)
{
lean_object* v_value_2717_; 
v_value_2717_ = lean_ctor_get(v_hash_2700_, 0);
lean_inc(v_value_2717_);
lean_dec_ref_known(v_hash_2700_, 1);
v___y_2710_ = v_value_2717_;
goto v___jp_2709_;
}
else
{
lean_object* v_value_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
v_value_2718_ = lean_ctor_get(v_hash_2700_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v_hash_2700_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v_hash_2700_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_value_2718_);
lean_dec(v_hash_2700_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
lean_ctor_set_tag(v___x_2720_, 4);
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_value_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
v___y_2710_ = v___x_2723_;
goto v___jp_2709_;
}
}
}
v___jp_2709_:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2708_);
lean_ctor_set(v___x_2711_, 1, v___y_2710_);
v___x_2712_ = lean_unsigned_to_nat(2u);
v___x_2713_ = lean_mk_empty_array_with_capacity(v___x_2712_);
v___x_2714_ = lean_array_push(v___x_2713_, v___x_2707_);
v___x_2715_ = lean_array_push(v___x_2714_, v___x_2711_);
v___x_2716_ = l_Lasm_JS_Web_Support_fields(v___x_2715_);
lean_dec_ref(v___x_2715_);
return v___x_2716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0(lean_object* v_d_2731_){
_start:
{
lean_object* v_name_2732_; lean_object* v_namedCurve_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2750_; 
v_name_2732_ = lean_ctor_get(v_d_2731_, 0);
v_namedCurve_2733_ = lean_ctor_get(v_d_2731_, 1);
v_isSharedCheck_2750_ = !lean_is_exclusive(v_d_2731_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2735_ = v_d_2731_;
v_isShared_2736_ = v_isSharedCheck_2750_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_namedCurve_2733_);
lean_inc(v_name_2732_);
lean_dec(v_d_2731_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2750_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2740_; 
v___x_2737_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2738_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2738_, 0, v_name_2732_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 1, v___x_2738_);
lean_ctor_set(v___x_2735_, 0, v___x_2737_);
v___x_2740_ = v___x_2735_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v___x_2737_);
lean_ctor_set(v_reuseFailAlloc_2749_, 1, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2741_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0));
v___x_2742_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2742_, 0, v_namedCurve_2733_);
v___x_2743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2741_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
v___x_2744_ = lean_unsigned_to_nat(2u);
v___x_2745_ = lean_mk_empty_array_with_capacity(v___x_2744_);
v___x_2746_ = lean_array_push(v___x_2745_, v___x_2740_);
v___x_2747_ = lean_array_push(v___x_2746_, v___x_2743_);
v___x_2748_ = l_Lasm_JS_Web_Support_fields(v___x_2747_);
lean_dec_ref(v___x_2747_);
return v___x_2748_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyAlgorithm___lam__0(lean_object* v_d_2753_){
_start:
{
lean_object* v_name_2754_; lean_object* v_namedCurve_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2772_; 
v_name_2754_ = lean_ctor_get(v_d_2753_, 0);
v_namedCurve_2755_ = lean_ctor_get(v_d_2753_, 1);
v_isSharedCheck_2772_ = !lean_is_exclusive(v_d_2753_);
if (v_isSharedCheck_2772_ == 0)
{
v___x_2757_ = v_d_2753_;
v_isShared_2758_ = v_isSharedCheck_2772_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_namedCurve_2755_);
lean_inc(v_name_2754_);
lean_dec(v_d_2753_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2772_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2762_; 
v___x_2759_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2760_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2760_, 0, v_name_2754_);
if (v_isShared_2758_ == 0)
{
lean_ctor_set(v___x_2757_, 1, v___x_2760_);
lean_ctor_set(v___x_2757_, 0, v___x_2759_);
v___x_2762_ = v___x_2757_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v___x_2759_);
lean_ctor_set(v_reuseFailAlloc_2771_, 1, v___x_2760_);
v___x_2762_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v___x_2763_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0));
v___x_2764_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2764_, 0, v_namedCurve_2755_);
v___x_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2763_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = lean_unsigned_to_nat(2u);
v___x_2767_ = lean_mk_empty_array_with_capacity(v___x_2766_);
v___x_2768_ = lean_array_push(v___x_2767_, v___x_2762_);
v___x_2769_ = lean_array_push(v___x_2768_, v___x_2765_);
v___x_2770_ = l_Lasm_JS_Web_Support_fields(v___x_2769_);
lean_dec_ref(v___x_2769_);
return v___x_2770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyImportParams___lam__0(lean_object* v_d_2775_){
_start:
{
lean_object* v_name_2776_; lean_object* v_namedCurve_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2794_; 
v_name_2776_ = lean_ctor_get(v_d_2775_, 0);
v_namedCurve_2777_ = lean_ctor_get(v_d_2775_, 1);
v_isSharedCheck_2794_ = !lean_is_exclusive(v_d_2775_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2779_ = v_d_2775_;
v_isShared_2780_ = v_isSharedCheck_2794_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_namedCurve_2777_);
lean_inc(v_name_2776_);
lean_dec(v_d_2775_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2794_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2784_; 
v___x_2781_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2782_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2782_, 0, v_name_2776_);
if (v_isShared_2780_ == 0)
{
lean_ctor_set(v___x_2779_, 1, v___x_2782_);
lean_ctor_set(v___x_2779_, 0, v___x_2781_);
v___x_2784_ = v___x_2779_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v___x_2781_);
lean_ctor_set(v_reuseFailAlloc_2793_, 1, v___x_2782_);
v___x_2784_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2785_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0));
v___x_2786_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2786_, 0, v_namedCurve_2777_);
v___x_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2785_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
v___x_2788_ = lean_unsigned_to_nat(2u);
v___x_2789_ = lean_mk_empty_array_with_capacity(v___x_2788_);
v___x_2790_ = lean_array_push(v___x_2789_, v___x_2784_);
v___x_2791_ = lean_array_push(v___x_2790_, v___x_2787_);
v___x_2792_ = l_Lasm_JS_Web_Support_fields(v___x_2791_);
lean_dec_ref(v___x_2791_);
return v___x_2792_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams___lam__0(lean_object* v_d_2797_){
_start:
{
lean_object* v_name_2798_; lean_object* v_public_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2817_; 
v_name_2798_ = lean_ctor_get(v_d_2797_, 0);
v_public_2799_ = lean_ctor_get(v_d_2797_, 1);
v_isSharedCheck_2817_ = !lean_is_exclusive(v_d_2797_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2801_ = v_d_2797_;
v_isShared_2802_ = v_isSharedCheck_2817_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_public_2799_);
lean_inc(v_name_2798_);
lean_dec(v_d_2797_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2817_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2806_; 
v___x_2803_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2804_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2804_, 0, v_name_2798_);
if (v_isShared_2802_ == 0)
{
lean_ctor_set(v___x_2801_, 1, v___x_2804_);
lean_ctor_set(v___x_2801_, 0, v___x_2803_);
v___x_2806_ = v___x_2801_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v___x_2803_);
lean_ctor_set(v_reuseFailAlloc_2816_, 1, v___x_2804_);
v___x_2806_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2807_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0));
v___x_2808_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_2809_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2809_, 0, v_public_2799_);
lean_ctor_set(v___x_2809_, 1, v___x_2808_);
v___x_2810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2807_);
lean_ctor_set(v___x_2810_, 1, v___x_2809_);
v___x_2811_ = lean_unsigned_to_nat(2u);
v___x_2812_ = lean_mk_empty_array_with_capacity(v___x_2811_);
v___x_2813_ = lean_array_push(v___x_2812_, v___x_2806_);
v___x_2814_ = lean_array_push(v___x_2813_, v___x_2810_);
v___x_2815_ = l_Lasm_JS_Web_Support_fields(v___x_2814_);
lean_dec_ref(v___x_2814_);
return v___x_2815_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesCtrParams___lam__0(lean_object* v_d_2822_){
_start:
{
lean_object* v_name_2823_; lean_object* v_counter_2824_; lean_object* v_length_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___y_2834_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; 
v_name_2823_ = lean_ctor_get(v_d_2822_, 0);
lean_inc_ref(v_name_2823_);
v_counter_2824_ = lean_ctor_get(v_d_2822_, 1);
lean_inc_ref(v_counter_2824_);
v_length_2825_ = lean_ctor_get(v_d_2822_, 2);
lean_inc(v_length_2825_);
lean_dec_ref(v_d_2822_);
v___x_2826_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2827_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2827_, 0, v_name_2823_);
v___x_2828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2826_);
lean_ctor_set(v___x_2828_, 1, v___x_2827_);
v___x_2829_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__0));
v___x_2830_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2830_, 0, v_counter_2824_);
v___x_2831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2831_, 0, v___x_2829_);
lean_ctor_set(v___x_2831_, 1, v___x_2830_);
v___x_2832_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2842_ = lean_nat_to_int(v_length_2825_);
v___x_2843_ = lean_nat_abs(v___x_2842_);
v___x_2844_ = lean_cstr_to_nat("9007199254740991");
v___x_2845_ = lean_nat_dec_le(v___x_2843_, v___x_2844_);
lean_dec(v___x_2843_);
if (v___x_2845_ == 0)
{
lean_object* v___x_2846_; 
v___x_2846_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2842_);
v___y_2834_ = v___x_2846_;
goto v___jp_2833_;
}
else
{
double v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = l_Float_ofInt(v___x_2842_);
lean_dec(v___x_2842_);
v___x_2848_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2848_, 0, v___x_2847_);
v___y_2834_ = v___x_2848_;
goto v___jp_2833_;
}
v___jp_2833_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2832_);
lean_ctor_set(v___x_2835_, 1, v___y_2834_);
v___x_2836_ = lean_unsigned_to_nat(3u);
v___x_2837_ = lean_mk_empty_array_with_capacity(v___x_2836_);
v___x_2838_ = lean_array_push(v___x_2837_, v___x_2828_);
v___x_2839_ = lean_array_push(v___x_2838_, v___x_2831_);
v___x_2840_ = lean_array_push(v___x_2839_, v___x_2835_);
v___x_2841_ = l_Lasm_JS_Web_Support_fields(v___x_2840_);
lean_dec_ref(v___x_2840_);
return v___x_2841_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesKeyAlgorithm___lam__0(lean_object* v_d_2851_){
_start:
{
lean_object* v_name_2852_; lean_object* v_length_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2878_; 
v_name_2852_ = lean_ctor_get(v_d_2851_, 0);
v_length_2853_ = lean_ctor_get(v_d_2851_, 1);
v_isSharedCheck_2878_ = !lean_is_exclusive(v_d_2851_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2855_ = v_d_2851_;
v_isShared_2856_ = v_isSharedCheck_2878_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_length_2853_);
lean_inc(v_name_2852_);
lean_dec(v_d_2851_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2878_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2860_; 
v___x_2857_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2858_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2858_, 0, v_name_2852_);
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 1, v___x_2858_);
lean_ctor_set(v___x_2855_, 0, v___x_2857_);
v___x_2860_ = v___x_2855_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2857_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v___x_2858_);
v___x_2860_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
lean_object* v___x_2861_; lean_object* v___y_2863_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; 
v___x_2861_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2870_ = lean_nat_to_int(v_length_2853_);
v___x_2871_ = lean_nat_abs(v___x_2870_);
v___x_2872_ = lean_cstr_to_nat("9007199254740991");
v___x_2873_ = lean_nat_dec_le(v___x_2871_, v___x_2872_);
lean_dec(v___x_2871_);
if (v___x_2873_ == 0)
{
lean_object* v___x_2874_; 
v___x_2874_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2870_);
v___y_2863_ = v___x_2874_;
goto v___jp_2862_;
}
else
{
double v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = l_Float_ofInt(v___x_2870_);
lean_dec(v___x_2870_);
v___x_2876_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2876_, 0, v___x_2875_);
v___y_2863_ = v___x_2876_;
goto v___jp_2862_;
}
v___jp_2862_:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2861_);
lean_ctor_set(v___x_2864_, 1, v___y_2863_);
v___x_2865_ = lean_unsigned_to_nat(2u);
v___x_2866_ = lean_mk_empty_array_with_capacity(v___x_2865_);
v___x_2867_ = lean_array_push(v___x_2866_, v___x_2860_);
v___x_2868_ = lean_array_push(v___x_2867_, v___x_2864_);
v___x_2869_ = l_Lasm_JS_Web_Support_fields(v___x_2868_);
lean_dec_ref(v___x_2868_);
return v___x_2869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesKeyGenParams___lam__0(lean_object* v_d_2881_){
_start:
{
lean_object* v_name_2882_; lean_object* v_length_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2908_; 
v_name_2882_ = lean_ctor_get(v_d_2881_, 0);
v_length_2883_ = lean_ctor_get(v_d_2881_, 1);
v_isSharedCheck_2908_ = !lean_is_exclusive(v_d_2881_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2885_ = v_d_2881_;
v_isShared_2886_ = v_isSharedCheck_2908_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_length_2883_);
lean_inc(v_name_2882_);
lean_dec(v_d_2881_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2908_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2890_; 
v___x_2887_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2888_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2888_, 0, v_name_2882_);
if (v_isShared_2886_ == 0)
{
lean_ctor_set(v___x_2885_, 1, v___x_2888_);
lean_ctor_set(v___x_2885_, 0, v___x_2887_);
v___x_2890_ = v___x_2885_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v___x_2887_);
lean_ctor_set(v_reuseFailAlloc_2907_, 1, v___x_2888_);
v___x_2890_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
lean_object* v___x_2891_; lean_object* v___y_2893_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; uint8_t v___x_2903_; 
v___x_2891_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2900_ = lean_nat_to_int(v_length_2883_);
v___x_2901_ = lean_nat_abs(v___x_2900_);
v___x_2902_ = lean_cstr_to_nat("9007199254740991");
v___x_2903_ = lean_nat_dec_le(v___x_2901_, v___x_2902_);
lean_dec(v___x_2901_);
if (v___x_2903_ == 0)
{
lean_object* v___x_2904_; 
v___x_2904_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2900_);
v___y_2893_ = v___x_2904_;
goto v___jp_2892_;
}
else
{
double v___x_2905_; lean_object* v___x_2906_; 
v___x_2905_ = l_Float_ofInt(v___x_2900_);
lean_dec(v___x_2900_);
v___x_2906_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2906_, 0, v___x_2905_);
v___y_2893_ = v___x_2906_;
goto v___jp_2892_;
}
v___jp_2892_:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; 
v___x_2894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2891_);
lean_ctor_set(v___x_2894_, 1, v___y_2893_);
v___x_2895_ = lean_unsigned_to_nat(2u);
v___x_2896_ = lean_mk_empty_array_with_capacity(v___x_2895_);
v___x_2897_ = lean_array_push(v___x_2896_, v___x_2890_);
v___x_2898_ = lean_array_push(v___x_2897_, v___x_2894_);
v___x_2899_ = l_Lasm_JS_Web_Support_fields(v___x_2898_);
lean_dec_ref(v___x_2898_);
return v___x_2899_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesDerivedKeyParams___lam__0(lean_object* v_d_2911_){
_start:
{
lean_object* v_name_2912_; lean_object* v_length_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2938_; 
v_name_2912_ = lean_ctor_get(v_d_2911_, 0);
v_length_2913_ = lean_ctor_get(v_d_2911_, 1);
v_isSharedCheck_2938_ = !lean_is_exclusive(v_d_2911_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2915_ = v_d_2911_;
v_isShared_2916_ = v_isSharedCheck_2938_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_length_2913_);
lean_inc(v_name_2912_);
lean_dec(v_d_2911_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2938_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2920_; 
v___x_2917_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2918_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2918_, 0, v_name_2912_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 1, v___x_2918_);
lean_ctor_set(v___x_2915_, 0, v___x_2917_);
v___x_2920_ = v___x_2915_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v___x_2917_);
lean_ctor_set(v_reuseFailAlloc_2937_, 1, v___x_2918_);
v___x_2920_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2919_;
}
v_reusejp_2919_:
{
lean_object* v___x_2921_; lean_object* v___y_2923_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; uint8_t v___x_2933_; 
v___x_2921_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2930_ = lean_nat_to_int(v_length_2913_);
v___x_2931_ = lean_nat_abs(v___x_2930_);
v___x_2932_ = lean_cstr_to_nat("9007199254740991");
v___x_2933_ = lean_nat_dec_le(v___x_2931_, v___x_2932_);
lean_dec(v___x_2931_);
if (v___x_2933_ == 0)
{
lean_object* v___x_2934_; 
v___x_2934_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2930_);
v___y_2923_ = v___x_2934_;
goto v___jp_2922_;
}
else
{
double v___x_2935_; lean_object* v___x_2936_; 
v___x_2935_ = l_Float_ofInt(v___x_2930_);
lean_dec(v___x_2930_);
v___x_2936_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2936_, 0, v___x_2935_);
v___y_2923_ = v___x_2936_;
goto v___jp_2922_;
}
v___jp_2922_:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2921_);
lean_ctor_set(v___x_2924_, 1, v___y_2923_);
v___x_2925_ = lean_unsigned_to_nat(2u);
v___x_2926_ = lean_mk_empty_array_with_capacity(v___x_2925_);
v___x_2927_ = lean_array_push(v___x_2926_, v___x_2920_);
v___x_2928_ = lean_array_push(v___x_2927_, v___x_2924_);
v___x_2929_ = l_Lasm_JS_Web_Support_fields(v___x_2928_);
lean_dec_ref(v___x_2928_);
return v___x_2929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesCbcParams___lam__0(lean_object* v_d_2942_){
_start:
{
lean_object* v_name_2943_; lean_object* v_iv_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2961_; 
v_name_2943_ = lean_ctor_get(v_d_2942_, 0);
v_iv_2944_ = lean_ctor_get(v_d_2942_, 1);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_d_2942_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2946_ = v_d_2942_;
v_isShared_2947_ = v_isSharedCheck_2961_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_iv_2944_);
lean_inc(v_name_2943_);
lean_dec(v_d_2942_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2961_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2951_; 
v___x_2948_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2949_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2949_, 0, v_name_2943_);
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 1, v___x_2949_);
lean_ctor_set(v___x_2946_, 0, v___x_2948_);
v___x_2951_ = v___x_2946_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v___x_2948_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v___x_2949_);
v___x_2951_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2952_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCbcParams___lam__0___closed__0));
v___x_2953_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2953_, 0, v_iv_2944_);
v___x_2954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2954_, 0, v___x_2952_);
lean_ctor_set(v___x_2954_, 1, v___x_2953_);
v___x_2955_ = lean_unsigned_to_nat(2u);
v___x_2956_ = lean_mk_empty_array_with_capacity(v___x_2955_);
v___x_2957_ = lean_array_push(v___x_2956_, v___x_2951_);
v___x_2958_ = lean_array_push(v___x_2957_, v___x_2954_);
v___x_2959_ = l_Lasm_JS_Web_Support_fields(v___x_2958_);
lean_dec_ref(v___x_2958_);
return v___x_2959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesGcmParams___lam__0(lean_object* v___f_2966_, lean_object* v___f_2967_, lean_object* v_d_2968_){
_start:
{
lean_object* v_name_2969_; lean_object* v_iv_2970_; lean_object* v_additionalData_2971_; lean_object* v_tagLength_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v_name_2969_ = lean_ctor_get(v_d_2968_, 0);
lean_inc_ref(v_name_2969_);
v_iv_2970_ = lean_ctor_get(v_d_2968_, 1);
lean_inc_ref(v_iv_2970_);
v_additionalData_2971_ = lean_ctor_get(v_d_2968_, 2);
lean_inc(v_additionalData_2971_);
v_tagLength_2972_ = lean_ctor_get(v_d_2968_, 3);
lean_inc(v_tagLength_2972_);
lean_dec_ref(v_d_2968_);
v___x_2973_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2974_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2974_, 0, v_name_2969_);
v___x_2975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2973_);
lean_ctor_set(v___x_2975_, 1, v___x_2974_);
v___x_2976_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCbcParams___lam__0___closed__0));
v___x_2977_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2977_, 0, v_iv_2970_);
v___x_2978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2976_);
lean_ctor_set(v___x_2978_, 1, v___x_2977_);
v___x_2979_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__0));
v___x_2980_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2966_, v_additionalData_2971_);
v___x_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2979_);
lean_ctor_set(v___x_2981_, 1, v___x_2980_);
v___x_2982_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__1));
v___x_2983_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2967_, v_tagLength_2972_);
v___x_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2982_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
v___x_2985_ = lean_unsigned_to_nat(4u);
v___x_2986_ = lean_mk_empty_array_with_capacity(v___x_2985_);
v___x_2987_ = lean_array_push(v___x_2986_, v___x_2975_);
v___x_2988_ = lean_array_push(v___x_2987_, v___x_2978_);
v___x_2989_ = lean_array_push(v___x_2988_, v___x_2981_);
v___x_2990_ = lean_array_push(v___x_2989_, v___x_2984_);
v___x_2991_ = l_Lasm_JS_Web_Support_fields(v___x_2990_);
lean_dec_ref(v___x_2990_);
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacImportParams___lam__0(lean_object* v___f_2997_, lean_object* v_d_2998_){
_start:
{
lean_object* v_name_2999_; lean_object* v_hash_3000_; lean_object* v_length_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___y_3007_; 
v_name_2999_ = lean_ctor_get(v_d_2998_, 0);
lean_inc_ref(v_name_2999_);
v_hash_3000_ = lean_ctor_get(v_d_2998_, 1);
lean_inc_ref(v_hash_3000_);
v_length_3001_ = lean_ctor_get(v_d_2998_, 2);
lean_inc(v_length_3001_);
lean_dec_ref(v_d_2998_);
v___x_3002_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3003_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3003_, 0, v_name_2999_);
v___x_3004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3002_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
v___x_3005_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3000_) == 0)
{
lean_object* v_value_3018_; 
v_value_3018_ = lean_ctor_get(v_hash_3000_, 0);
lean_inc(v_value_3018_);
lean_dec_ref_known(v_hash_3000_, 1);
v___y_3007_ = v_value_3018_;
goto v___jp_3006_;
}
else
{
lean_object* v_value_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
v_value_3019_ = lean_ctor_get(v_hash_3000_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v_hash_3000_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v_hash_3000_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_value_3019_);
lean_dec(v_hash_3000_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
lean_ctor_set_tag(v___x_3021_, 4);
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_value_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
v___y_3007_ = v___x_3024_;
goto v___jp_3006_;
}
}
}
v___jp_3006_:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; 
v___x_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3005_);
lean_ctor_set(v___x_3008_, 1, v___y_3007_);
v___x_3009_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_3010_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2997_, v_length_3001_);
v___x_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3011_, 0, v___x_3009_);
lean_ctor_set(v___x_3011_, 1, v___x_3010_);
v___x_3012_ = lean_unsigned_to_nat(3u);
v___x_3013_ = lean_mk_empty_array_with_capacity(v___x_3012_);
v___x_3014_ = lean_array_push(v___x_3013_, v___x_3004_);
v___x_3015_ = lean_array_push(v___x_3014_, v___x_3008_);
v___x_3016_ = lean_array_push(v___x_3015_, v___x_3011_);
v___x_3017_ = l_Lasm_JS_Web_Support_fields(v___x_3016_);
lean_dec_ref(v___x_3016_);
return v___x_3017_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacKeyAlgorithm___lam__0(lean_object* v_d_3030_){
_start:
{
lean_object* v_name_3031_; lean_object* v_hash_3032_; lean_object* v_length_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___y_3047_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; uint8_t v___x_3058_; 
v_name_3031_ = lean_ctor_get(v_d_3030_, 0);
lean_inc_ref(v_name_3031_);
v_hash_3032_ = lean_ctor_get(v_d_3030_, 1);
lean_inc_ref(v_hash_3032_);
v_length_3033_ = lean_ctor_get(v_d_3030_, 2);
lean_inc(v_length_3033_);
lean_dec_ref(v_d_3030_);
v___x_3034_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3035_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3035_, 0, v_name_3031_);
v___x_3036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3034_);
lean_ctor_set(v___x_3036_, 1, v___x_3035_);
v___x_3037_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
v___x_3038_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3038_, 0, v_hash_3032_);
v___x_3039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3034_);
lean_ctor_set(v___x_3039_, 1, v___x_3038_);
v___x_3040_ = lean_unsigned_to_nat(1u);
v___x_3041_ = lean_mk_empty_array_with_capacity(v___x_3040_);
v___x_3042_ = lean_array_push(v___x_3041_, v___x_3039_);
v___x_3043_ = l_Lasm_JS_Web_Support_fields(v___x_3042_);
lean_dec_ref(v___x_3042_);
v___x_3044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3037_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_3055_ = lean_nat_to_int(v_length_3033_);
v___x_3056_ = lean_nat_abs(v___x_3055_);
v___x_3057_ = lean_cstr_to_nat("9007199254740991");
v___x_3058_ = lean_nat_dec_le(v___x_3056_, v___x_3057_);
lean_dec(v___x_3056_);
if (v___x_3058_ == 0)
{
lean_object* v___x_3059_; 
v___x_3059_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3055_);
v___y_3047_ = v___x_3059_;
goto v___jp_3046_;
}
else
{
double v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = l_Float_ofInt(v___x_3055_);
lean_dec(v___x_3055_);
v___x_3061_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3061_, 0, v___x_3060_);
v___y_3047_ = v___x_3061_;
goto v___jp_3046_;
}
v___jp_3046_:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; 
v___x_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3045_);
lean_ctor_set(v___x_3048_, 1, v___y_3047_);
v___x_3049_ = lean_unsigned_to_nat(3u);
v___x_3050_ = lean_mk_empty_array_with_capacity(v___x_3049_);
v___x_3051_ = lean_array_push(v___x_3050_, v___x_3036_);
v___x_3052_ = lean_array_push(v___x_3051_, v___x_3044_);
v___x_3053_ = lean_array_push(v___x_3052_, v___x_3048_);
v___x_3054_ = l_Lasm_JS_Web_Support_fields(v___x_3053_);
lean_dec_ref(v___x_3053_);
return v___x_3054_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacKeyGenParams___lam__0(lean_object* v___f_3064_, lean_object* v_d_3065_){
_start:
{
lean_object* v_name_3066_; lean_object* v_hash_3067_; lean_object* v_length_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___y_3074_; 
v_name_3066_ = lean_ctor_get(v_d_3065_, 0);
lean_inc_ref(v_name_3066_);
v_hash_3067_ = lean_ctor_get(v_d_3065_, 1);
lean_inc_ref(v_hash_3067_);
v_length_3068_ = lean_ctor_get(v_d_3065_, 2);
lean_inc(v_length_3068_);
lean_dec_ref(v_d_3065_);
v___x_3069_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3070_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3070_, 0, v_name_3066_);
v___x_3071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3069_);
lean_ctor_set(v___x_3071_, 1, v___x_3070_);
v___x_3072_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3067_) == 0)
{
lean_object* v_value_3085_; 
v_value_3085_ = lean_ctor_get(v_hash_3067_, 0);
lean_inc(v_value_3085_);
lean_dec_ref_known(v_hash_3067_, 1);
v___y_3074_ = v_value_3085_;
goto v___jp_3073_;
}
else
{
lean_object* v_value_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
v_value_3086_ = lean_ctor_get(v_hash_3067_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v_hash_3067_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v_hash_3067_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_value_3086_);
lean_dec(v_hash_3067_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
lean_ctor_set_tag(v___x_3088_, 4);
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_value_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
v___y_3074_ = v___x_3091_;
goto v___jp_3073_;
}
}
}
v___jp_3073_:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; 
v___x_3075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3072_);
lean_ctor_set(v___x_3075_, 1, v___y_3074_);
v___x_3076_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_3077_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_3064_, v_length_3068_);
v___x_3078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3076_);
lean_ctor_set(v___x_3078_, 1, v___x_3077_);
v___x_3079_ = lean_unsigned_to_nat(3u);
v___x_3080_ = lean_mk_empty_array_with_capacity(v___x_3079_);
v___x_3081_ = lean_array_push(v___x_3080_, v___x_3071_);
v___x_3082_ = lean_array_push(v___x_3081_, v___x_3075_);
v___x_3083_ = lean_array_push(v___x_3082_, v___x_3078_);
v___x_3084_ = l_Lasm_JS_Web_Support_fields(v___x_3083_);
lean_dec_ref(v___x_3083_);
return v___x_3084_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHkdfParams___lam__0(lean_object* v_d_3099_){
_start:
{
lean_object* v_name_3100_; lean_object* v_hash_3101_; lean_object* v_salt_3102_; lean_object* v_info_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___y_3109_; 
v_name_3100_ = lean_ctor_get(v_d_3099_, 0);
lean_inc_ref(v_name_3100_);
v_hash_3101_ = lean_ctor_get(v_d_3099_, 1);
lean_inc_ref(v_hash_3101_);
v_salt_3102_ = lean_ctor_get(v_d_3099_, 2);
lean_inc_ref(v_salt_3102_);
v_info_3103_ = lean_ctor_get(v_d_3099_, 3);
lean_inc_ref(v_info_3103_);
lean_dec_ref(v_d_3099_);
v___x_3104_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3105_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3105_, 0, v_name_3100_);
v___x_3106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3104_);
lean_ctor_set(v___x_3106_, 1, v___x_3105_);
v___x_3107_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3101_) == 0)
{
lean_object* v_value_3124_; 
v_value_3124_ = lean_ctor_get(v_hash_3101_, 0);
lean_inc(v_value_3124_);
lean_dec_ref_known(v_hash_3101_, 1);
v___y_3109_ = v_value_3124_;
goto v___jp_3108_;
}
else
{
lean_object* v_value_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
v_value_3125_ = lean_ctor_get(v_hash_3101_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v_hash_3101_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v_hash_3101_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_value_3125_);
lean_dec(v_hash_3101_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
lean_ctor_set_tag(v___x_3127_, 4);
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_value_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
v___y_3109_ = v___x_3130_;
goto v___jp_3108_;
}
}
}
v___jp_3108_:
{
lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3107_);
lean_ctor_set(v___x_3110_, 1, v___y_3109_);
v___x_3111_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__0));
v___x_3112_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3112_, 0, v_salt_3102_);
v___x_3113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3111_);
lean_ctor_set(v___x_3113_, 1, v___x_3112_);
v___x_3114_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__1));
v___x_3115_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3115_, 0, v_info_3103_);
v___x_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3114_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = lean_unsigned_to_nat(4u);
v___x_3118_ = lean_mk_empty_array_with_capacity(v___x_3117_);
v___x_3119_ = lean_array_push(v___x_3118_, v___x_3106_);
v___x_3120_ = lean_array_push(v___x_3119_, v___x_3110_);
v___x_3121_ = lean_array_push(v___x_3120_, v___x_3113_);
v___x_3122_ = lean_array_push(v___x_3121_, v___x_3116_);
v___x_3123_ = l_Lasm_JS_Web_Support_fields(v___x_3122_);
lean_dec_ref(v___x_3122_);
return v___x_3123_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0(lean_object* v_d_3136_){
_start:
{
lean_object* v_name_3137_; lean_object* v_salt_3138_; lean_object* v_iterations_3139_; lean_object* v_hash_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___x_3159_; lean_object* v___y_3161_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; uint8_t v___x_3176_; 
v_name_3137_ = lean_ctor_get(v_d_3136_, 0);
lean_inc_ref(v_name_3137_);
v_salt_3138_ = lean_ctor_get(v_d_3136_, 1);
lean_inc_ref(v_salt_3138_);
v_iterations_3139_ = lean_ctor_get(v_d_3136_, 2);
lean_inc(v_iterations_3139_);
v_hash_3140_ = lean_ctor_get(v_d_3136_, 3);
lean_inc_ref(v_hash_3140_);
lean_dec_ref(v_d_3136_);
v___x_3141_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3142_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3142_, 0, v_name_3137_);
v___x_3143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3141_);
lean_ctor_set(v___x_3143_, 1, v___x_3142_);
v___x_3144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__0));
v___x_3145_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3145_, 0, v_salt_3138_);
v___x_3146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3144_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
v___x_3159_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0___closed__0));
v___x_3173_ = lean_nat_to_int(v_iterations_3139_);
v___x_3174_ = lean_nat_abs(v___x_3173_);
v___x_3175_ = lean_cstr_to_nat("9007199254740991");
v___x_3176_ = lean_nat_dec_le(v___x_3174_, v___x_3175_);
lean_dec(v___x_3174_);
if (v___x_3176_ == 0)
{
lean_object* v___x_3177_; 
v___x_3177_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3173_);
v___y_3161_ = v___x_3177_;
goto v___jp_3160_;
}
else
{
double v___x_3178_; lean_object* v___x_3179_; 
v___x_3178_ = l_Float_ofInt(v___x_3173_);
lean_dec(v___x_3173_);
v___x_3179_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3179_, 0, v___x_3178_);
v___y_3161_ = v___x_3179_;
goto v___jp_3160_;
}
v___jp_3147_:
{
lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
lean_inc_ref(v___y_3148_);
v___x_3151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3151_, 0, v___y_3148_);
lean_ctor_set(v___x_3151_, 1, v___y_3150_);
v___x_3152_ = lean_unsigned_to_nat(4u);
v___x_3153_ = lean_mk_empty_array_with_capacity(v___x_3152_);
v___x_3154_ = lean_array_push(v___x_3153_, v___x_3143_);
v___x_3155_ = lean_array_push(v___x_3154_, v___x_3146_);
v___x_3156_ = lean_array_push(v___x_3155_, v___y_3149_);
v___x_3157_ = lean_array_push(v___x_3156_, v___x_3151_);
v___x_3158_ = l_Lasm_JS_Web_Support_fields(v___x_3157_);
lean_dec_ref(v___x_3157_);
return v___x_3158_;
}
v___jp_3160_:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3159_);
lean_ctor_set(v___x_3162_, 1, v___y_3161_);
v___x_3163_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3140_) == 0)
{
lean_object* v_value_3164_; 
v_value_3164_ = lean_ctor_get(v_hash_3140_, 0);
lean_inc(v_value_3164_);
lean_dec_ref_known(v_hash_3140_, 1);
v___y_3148_ = v___x_3163_;
v___y_3149_ = v___x_3162_;
v___y_3150_ = v_value_3164_;
goto v___jp_3147_;
}
else
{
lean_object* v_value_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
v_value_3165_ = lean_ctor_get(v_hash_3140_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v_hash_3140_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v_hash_3140_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_value_3165_);
lean_dec(v_hash_3140_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
lean_ctor_set_tag(v___x_3167_, 4);
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_value_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
v___y_3148_ = v___x_3163_;
v___y_3149_ = v___x_3162_;
v___y_3150_ = v___x_3170_;
goto v___jp_3147_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0_spec__1(lean_object* v_context_3182_, lean_object* v_d_3183_){
_start:
{
lean_object* v___y_3186_; lean_object* v___y_3187_; 
if (lean_obj_tag(v_d_3183_) == 9)
{
lean_object* v_value_3191_; lean_object* v___x_3192_; 
v_value_3191_ = lean_ctor_get(v_d_3183_, 0);
lean_inc(v_value_3191_);
lean_dec_ref_known(v_d_3183_, 2);
v___x_3192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3192_, 0, v_value_3191_);
return v___x_3192_;
}
else
{
lean_object* v___x_3193_; lean_object* v_received_3195_; 
v___x_3193_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
if (lean_obj_tag(v_d_3183_) == 9)
{
lean_object* v_value_3209_; lean_object* v_description_3210_; uint8_t v___x_3211_; 
v_value_3209_ = lean_ctor_get(v_d_3183_, 0);
v_description_3210_ = lean_ctor_get(v_d_3183_, 1);
v___x_3211_ = lean_string_dec_eq(v_description_3210_, v___x_3193_);
if (v___x_3211_ == 0)
{
goto v___jp_3207_;
}
else
{
uint32_t v___x_3212_; uint64_t v___x_3213_; lean_object* v___x_3214_; uint32_t v___x_3215_; lean_object* v___x_3216_; 
lean_inc_n(v_value_3209_, 2);
lean_dec_ref_known(v_d_3183_, 2);
v___x_3212_ = 206;
v___x_3213_ = 0ULL;
v___x_3214_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3214_, 0, v_value_3209_);
lean_ctor_set(v___x_3214_, 1, v___x_3193_);
v___x_3215_ = lasm_js_value_handle(v_value_3209_);
lean_dec(v_value_3209_);
v___x_3216_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3212_, v___x_3213_, v___x_3214_, v___x_3215_);
lean_dec_ref_known(v___x_3214_, 2);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; uint8_t v___x_3218_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref_known(v___x_3216_, 1);
v___x_3218_ = lean_string_validate_utf8(v_a_3217_);
if (v___x_3218_ == 0)
{
lean_object* v___x_3219_; lean_object* v___x_3220_; 
lean_dec(v_a_3217_);
v___x_3219_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3220_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3219_);
v_received_3195_ = v___x_3220_;
goto v___jp_3194_;
}
else
{
lean_object* v___x_3221_; 
v___x_3221_ = lean_string_from_utf8_unchecked(v_a_3217_);
v_received_3195_ = v___x_3221_;
goto v___jp_3194_;
}
}
else
{
lean_object* v___x_3222_; 
lean_dec_ref_known(v___x_3216_, 1);
v___x_3222_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_3195_ = v___x_3222_;
goto v___jp_3194_;
}
}
}
else
{
goto v___jp_3207_;
}
v___jp_3194_:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; uint8_t v___x_3205_; 
v___x_3196_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3197_ = lean_string_append(v___x_3196_, v_context_3182_);
v___x_3198_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3199_ = lean_string_append(v___x_3197_, v___x_3198_);
v___x_3200_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSSubtleCrypto___closed__0));
v___x_3201_ = lean_string_append(v___x_3199_, v___x_3200_);
v___x_3202_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3203_ = lean_string_append(v___x_3201_, v___x_3202_);
v___x_3204_ = lean_string_append(v___x_3203_, v_received_3195_);
lean_dec_ref(v_received_3195_);
v___x_3205_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_3205_ == 0)
{
lean_object* v___x_3206_; 
v___x_3206_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___y_3186_ = v___x_3204_;
v___y_3187_ = v___x_3206_;
goto v___jp_3185_;
}
else
{
v___y_3186_ = v___x_3204_;
v___y_3187_ = v___x_3193_;
goto v___jp_3185_;
}
}
v___jp_3207_:
{
lean_object* v___x_3208_; 
v___x_3208_ = l_Lasm_JS_Data_describe(v_d_3183_);
v_received_3195_ = v___x_3208_;
goto v___jp_3194_;
}
}
v___jp_3185_:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3188_ = lean_string_append(v___y_3186_, v___y_3187_);
v___x_3189_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3188_);
v___x_3190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3189_);
return v___x_3190_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3223_, lean_object* v_d_3224_, lean_object* v_a_3225_){
_start:
{
lean_object* v_res_3226_; 
v_res_3226_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0_spec__1(v_context_3223_, v_d_3224_);
lean_dec_ref(v_context_3223_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0(lean_object* v_context_3227_, lean_object* v_bytes_3228_){
_start:
{
lean_object* v___x_3230_; 
v___x_3230_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3228_);
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_object* v_a_3231_; lean_object* v___x_3232_; 
v_a_3231_ = lean_ctor_get(v___x_3230_, 0);
lean_inc(v_a_3231_);
lean_dec_ref_known(v___x_3230_, 1);
v___x_3232_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0_spec__1(v_context_3227_, v_a_3231_);
return v___x_3232_;
}
else
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
v_a_3233_ = lean_ctor_get(v___x_3230_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3230_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3230_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3230_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0___boxed(lean_object* v_context_3241_, lean_object* v_bytes_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0(v_context_3241_, v_bytes_3242_);
lean_dec_ref(v_bytes_3242_);
lean_dec_ref(v_context_3241_);
return v_res_3244_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3245_; uint64_t v___x_3246_; 
v___x_3245_ = 0;
v___x_3246_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3245_);
return v___x_3246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0(lean_object* v_o_3248_, lean_object* v_key_3249_){
_start:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; 
lean_inc_ref(v_key_3249_);
v___x_3251_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3251_, 0, v_key_3249_);
v___x_3252_ = l_Lasm_JS_Wire_encodeIO(v___x_3251_);
lean_dec_ref_known(v___x_3251_, 1);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v_a_3253_; uint32_t v___x_3254_; uint32_t v___x_3255_; uint64_t v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; 
v_a_3253_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_a_3253_);
lean_dec_ref_known(v___x_3252_, 1);
v___x_3254_ = 203;
v___x_3255_ = lasm_js_value_handle(v_o_3248_);
v___x_3256_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
v___x_3257_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3258_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3258_, 0, v_o_3248_);
lean_ctor_set(v___x_3258_, 1, v___x_3257_);
v___x_3259_ = lasm_js_call(v___x_3254_, v___x_3255_, v___x_3256_, v_a_3253_, v___x_3258_);
lean_dec_ref_known(v___x_3258_, 2);
lean_dec(v_a_3253_);
if (lean_obj_tag(v___x_3259_) == 0)
{
lean_object* v_a_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v_a_3260_ = lean_ctor_get(v___x_3259_, 0);
lean_inc(v_a_3260_);
lean_dec_ref_known(v___x_3259_, 1);
v___x_3261_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__1));
v___x_3262_ = l_String_quote(v_key_3249_);
v___x_3263_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3262_);
v___x_3264_ = lean_unsigned_to_nat(120u);
v___x_3265_ = lean_unsigned_to_nat(0u);
v___x_3266_ = l_Std_Format_pretty(v___x_3263_, v___x_3264_, v___x_3265_, v___x_3265_);
v___x_3267_ = lean_string_append(v___x_3261_, v___x_3266_);
lean_dec_ref(v___x_3266_);
v___x_3268_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0_spec__0(v___x_3267_, v_a_3260_);
lean_dec(v_a_3260_);
lean_dec_ref(v___x_3267_);
return v___x_3268_;
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec_ref(v_key_3249_);
v_a_3269_ = lean_ctor_get(v___x_3259_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3259_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3259_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3259_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
else
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3284_; 
lean_dec_ref(v_key_3249_);
lean_dec(v_o_3248_);
v_a_3277_ = lean_ctor_get(v___x_3252_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3279_ = v___x_3252_;
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3252_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3277_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___boxed(lean_object* v_o_3285_, lean_object* v_key_3286_, lean_object* v_a_3287_){
_start:
{
lean_object* v_res_3288_; 
v_res_3288_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0(v_o_3285_, v_key_3286_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle(lean_object* v_self_3290_){
_start:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3292_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_subtle___closed__0));
v___x_3293_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0(v_self_3290_, v___x_3292_);
return v___x_3293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle___boxed(lean_object* v_self_3294_, lean_object* v_a_3295_){
_start:
{
lean_object* v_res_3296_; 
v_res_3296_ = l_Lasm_JS_Web_Crypto_subtle(v_self_3294_);
return v_res_3296_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(uint8_t v_await_3297_, uint64_t v_extra_3298_){
_start:
{
uint64_t v___x_3299_; uint64_t v___y_3301_; 
v___x_3299_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
if (v_await_3297_ == 0)
{
uint64_t v___x_3304_; 
v___x_3304_ = 0ULL;
v___y_3301_ = v___x_3304_;
goto v___jp_3300_;
}
else
{
uint64_t v___x_3305_; 
v___x_3305_ = 2ULL;
v___y_3301_ = v___x_3305_;
goto v___jp_3300_;
}
v___jp_3300_:
{
uint64_t v___x_3302_; uint64_t v___x_3303_; 
v___x_3302_ = lean_uint64_lor(v___x_3299_, v___y_3301_);
v___x_3303_ = lean_uint64_lor(v___x_3302_, v_extra_3298_);
return v___x_3303_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___boxed(lean_object* v_await_3306_, lean_object* v_extra_3307_){
_start:
{
uint8_t v_await_boxed_3308_; uint64_t v_extra_boxed_3309_; uint64_t v_res_3310_; lean_object* v_r_3311_; 
v_await_boxed_3308_ = lean_unbox(v_await_3306_);
v_extra_boxed_3309_ = lean_unbox_uint64(v_extra_3307_);
lean_dec_ref(v_extra_3307_);
v_res_3310_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(v_await_boxed_3308_, v_extra_boxed_3309_);
v_r_3311_ = lean_box_uint64(v_res_3310_);
return v_r_3311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(lean_object* v_context_3312_, lean_object* v_bytes_3313_){
_start:
{
lean_object* v___x_3315_; 
v___x_3315_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3313_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_a_3316_; lean_object* v___x_3317_; 
v_a_3316_ = lean_ctor_get(v___x_3315_, 0);
lean_inc(v_a_3316_);
lean_dec_ref_known(v___x_3315_, 1);
v___x_3317_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_3312_, v_a_3316_);
return v___x_3317_;
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
v_a_3318_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3315_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3315_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___boxed(lean_object* v_context_3326_, lean_object* v_bytes_3327_, lean_object* v_a_3328_){
_start:
{
lean_object* v_res_3329_; 
v_res_3329_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(v_context_3326_, v_bytes_3327_);
lean_dec_ref(v_bytes_3327_);
lean_dec_ref(v_context_3326_);
return v_res_3329_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3330_; uint8_t v___x_3331_; uint64_t v___x_3332_; 
v___x_3330_ = 8ULL;
v___x_3331_ = 0;
v___x_3332_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(v___x_3331_, v___x_3330_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(lean_object* v_o_3334_, lean_object* v_name_3335_, lean_object* v_args_3336_){
_start:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; uint64_t v___x_3341_; lean_object* v___x_3342_; 
v___x_3338_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3339_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3339_, 0, v_o_3334_);
lean_ctor_set(v___x_3339_, 1, v___x_3338_);
lean_inc_ref(v_name_3335_);
v___x_3340_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3340_, 0, v_name_3335_);
v___x_3341_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0);
v___x_3342_ = l_Lasm_JS_Value_invokeRaw(v___x_3339_, v___x_3340_, v_args_3336_, v___x_3341_);
if (lean_obj_tag(v___x_3342_) == 0)
{
lean_object* v_a_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v_a_3343_ = lean_ctor_get(v___x_3342_, 0);
lean_inc(v_a_3343_);
lean_dec_ref_known(v___x_3342_, 1);
v___x_3344_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__1));
v___x_3345_ = lean_string_append(v___x_3344_, v_name_3335_);
lean_dec_ref(v_name_3335_);
v___x_3346_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(v___x_3345_, v_a_3343_);
lean_dec(v_a_3343_);
lean_dec_ref(v___x_3345_);
return v___x_3346_;
}
else
{
lean_dec_ref(v_name_3335_);
return v___x_3342_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___boxed(lean_object* v_o_3347_, lean_object* v_name_3348_, lean_object* v_args_3349_, lean_object* v_a_3350_){
_start:
{
lean_object* v_res_3351_; 
v_res_3351_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(v_o_3347_, v_name_3348_, v_args_3349_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues(lean_object* v_self_3353_, lean_object* v_array_3354_){
_start:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3356_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_getRandomValues___closed__0));
v___x_3357_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3357_, 0, v_array_3354_);
v___x_3358_ = lean_unsigned_to_nat(1u);
v___x_3359_ = lean_mk_empty_array_with_capacity(v___x_3358_);
v___x_3360_ = lean_array_push(v___x_3359_, v___x_3357_);
v___x_3361_ = l_Lasm_JS_Web_Support_args(v___x_3360_);
v___x_3362_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(v_self_3353_, v___x_3356_, v___x_3361_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues___boxed(lean_object* v_self_3363_, lean_object* v_array_3364_, lean_object* v_a_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l_Lasm_JS_Web_Crypto_getRandomValues(v_self_3363_, v_array_3364_);
return v_res_3366_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(uint8_t v_await_3367_, uint64_t v_extra_3368_){
_start:
{
uint64_t v___x_3369_; uint64_t v___y_3371_; 
v___x_3369_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
if (v_await_3367_ == 0)
{
uint64_t v___x_3374_; 
v___x_3374_ = 0ULL;
v___y_3371_ = v___x_3374_;
goto v___jp_3370_;
}
else
{
uint64_t v___x_3375_; 
v___x_3375_ = 2ULL;
v___y_3371_ = v___x_3375_;
goto v___jp_3370_;
}
v___jp_3370_:
{
uint64_t v___x_3372_; uint64_t v___x_3373_; 
v___x_3372_ = lean_uint64_lor(v___x_3369_, v___y_3371_);
v___x_3373_ = lean_uint64_lor(v___x_3372_, v_extra_3368_);
return v___x_3373_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0___boxed(lean_object* v_await_3376_, lean_object* v_extra_3377_){
_start:
{
uint8_t v_await_boxed_3378_; uint64_t v_extra_boxed_3379_; uint64_t v_res_3380_; lean_object* v_r_3381_; 
v_await_boxed_3378_ = lean_unbox(v_await_3376_);
v_extra_boxed_3379_ = lean_unbox_uint64(v_extra_3377_);
lean_dec_ref(v_extra_3377_);
v_res_3380_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(v_await_boxed_3378_, v_extra_boxed_3379_);
v_r_3381_ = lean_box_uint64(v_res_3380_);
return v_r_3381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(lean_object* v_context_3383_, lean_object* v_d_3384_){
_start:
{
lean_object* v___y_3387_; lean_object* v___y_3388_; 
if (lean_obj_tag(v_d_3384_) == 4)
{
lean_object* v_s_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3399_; 
v_s_3392_ = lean_ctor_get(v_d_3384_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v_d_3384_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3394_ = v_d_3384_;
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_s_3392_);
lean_dec(v_d_3384_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3397_; 
if (v_isShared_3395_ == 0)
{
lean_ctor_set_tag(v___x_3394_, 0);
v___x_3397_ = v___x_3394_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v_s_3392_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
}
else
{
lean_object* v___x_3400_; lean_object* v_received_3402_; 
v___x_3400_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
if (lean_obj_tag(v_d_3384_) == 9)
{
lean_object* v_value_3416_; lean_object* v_description_3417_; uint8_t v___x_3418_; 
v_value_3416_ = lean_ctor_get(v_d_3384_, 0);
v_description_3417_ = lean_ctor_get(v_d_3384_, 1);
v___x_3418_ = lean_string_dec_eq(v_description_3417_, v___x_3400_);
if (v___x_3418_ == 0)
{
goto v___jp_3414_;
}
else
{
uint32_t v___x_3419_; uint64_t v___x_3420_; lean_object* v___x_3421_; uint32_t v___x_3422_; lean_object* v___x_3423_; 
lean_inc_n(v_value_3416_, 2);
lean_dec_ref_known(v_d_3384_, 2);
v___x_3419_ = 206;
v___x_3420_ = 0ULL;
v___x_3421_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3421_, 0, v_value_3416_);
lean_ctor_set(v___x_3421_, 1, v___x_3400_);
v___x_3422_ = lasm_js_value_handle(v_value_3416_);
lean_dec(v_value_3416_);
v___x_3423_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3419_, v___x_3420_, v___x_3421_, v___x_3422_);
lean_dec_ref_known(v___x_3421_, 2);
if (lean_obj_tag(v___x_3423_) == 0)
{
lean_object* v_a_3424_; uint8_t v___x_3425_; 
v_a_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_a_3424_);
lean_dec_ref_known(v___x_3423_, 1);
v___x_3425_ = lean_string_validate_utf8(v_a_3424_);
if (v___x_3425_ == 0)
{
lean_object* v___x_3426_; lean_object* v___x_3427_; 
lean_dec(v_a_3424_);
v___x_3426_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3427_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3426_);
v_received_3402_ = v___x_3427_;
goto v___jp_3401_;
}
else
{
lean_object* v___x_3428_; 
v___x_3428_ = lean_string_from_utf8_unchecked(v_a_3424_);
v_received_3402_ = v___x_3428_;
goto v___jp_3401_;
}
}
else
{
lean_object* v___x_3429_; 
lean_dec_ref_known(v___x_3423_, 1);
v___x_3429_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_3402_ = v___x_3429_;
goto v___jp_3401_;
}
}
}
else
{
goto v___jp_3414_;
}
v___jp_3401_:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; uint8_t v___x_3412_; 
v___x_3403_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3404_ = lean_string_append(v___x_3403_, v_context_3383_);
v___x_3405_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3406_ = lean_string_append(v___x_3404_, v___x_3405_);
v___x_3407_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___closed__0));
v___x_3408_ = lean_string_append(v___x_3406_, v___x_3407_);
v___x_3409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3410_ = lean_string_append(v___x_3408_, v___x_3409_);
v___x_3411_ = lean_string_append(v___x_3410_, v_received_3402_);
lean_dec_ref(v_received_3402_);
v___x_3412_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_3412_ == 0)
{
lean_object* v___x_3413_; 
v___x_3413_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___y_3387_ = v___x_3411_;
v___y_3388_ = v___x_3413_;
goto v___jp_3386_;
}
else
{
v___y_3387_ = v___x_3411_;
v___y_3388_ = v___x_3400_;
goto v___jp_3386_;
}
}
v___jp_3414_:
{
lean_object* v___x_3415_; 
v___x_3415_ = l_Lasm_JS_Data_describe(v_d_3384_);
v_received_3402_ = v___x_3415_;
goto v___jp_3401_;
}
}
v___jp_3386_:
{
lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3389_ = lean_string_append(v___y_3387_, v___y_3388_);
v___x_3390_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3389_);
v___x_3391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3391_, 0, v___x_3390_);
return v___x_3391_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3430_, lean_object* v_d_3431_, lean_object* v_a_3432_){
_start:
{
lean_object* v_res_3433_; 
v_res_3433_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(v_context_3430_, v_d_3431_);
lean_dec_ref(v_context_3430_);
return v_res_3433_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(lean_object* v_context_3434_, lean_object* v_bytes_3435_){
_start:
{
lean_object* v___x_3437_; 
v___x_3437_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3435_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_object* v_a_3438_; lean_object* v___x_3439_; 
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
lean_inc(v_a_3438_);
lean_dec_ref_known(v___x_3437_, 1);
v___x_3439_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(v_context_3434_, v_a_3438_);
return v___x_3439_;
}
else
{
lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3447_; 
v_a_3440_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3442_ = v___x_3437_;
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v___x_3437_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3445_; 
if (v_isShared_3443_ == 0)
{
v___x_3445_ = v___x_3442_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3440_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1___boxed(lean_object* v_context_3448_, lean_object* v_bytes_3449_, lean_object* v_a_3450_){
_start:
{
lean_object* v_res_3451_; 
v_res_3451_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(v_context_3448_, v_bytes_3449_);
lean_dec_ref(v_bytes_3449_);
lean_dec_ref(v_context_3448_);
return v_res_3451_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3452_; uint8_t v___x_3453_; uint64_t v___x_3454_; 
v___x_3452_ = 8ULL;
v___x_3453_ = 0;
v___x_3454_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(v___x_3453_, v___x_3452_);
return v___x_3454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(lean_object* v_o_3455_, lean_object* v_name_3456_, lean_object* v_args_3457_){
_start:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; uint64_t v___x_3462_; lean_object* v___x_3463_; 
v___x_3459_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3460_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3460_, 0, v_o_3455_);
lean_ctor_set(v___x_3460_, 1, v___x_3459_);
lean_inc_ref(v_name_3456_);
v___x_3461_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3461_, 0, v_name_3456_);
v___x_3462_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0);
v___x_3463_ = l_Lasm_JS_Value_invokeRaw(v___x_3460_, v___x_3461_, v_args_3457_, v___x_3462_);
if (lean_obj_tag(v___x_3463_) == 0)
{
lean_object* v_a_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; 
v_a_3464_ = lean_ctor_get(v___x_3463_, 0);
lean_inc(v_a_3464_);
lean_dec_ref_known(v___x_3463_, 1);
v___x_3465_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__1));
v___x_3466_ = lean_string_append(v___x_3465_, v_name_3456_);
lean_dec_ref(v_name_3456_);
v___x_3467_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(v___x_3466_, v_a_3464_);
lean_dec(v_a_3464_);
lean_dec_ref(v___x_3466_);
return v___x_3467_;
}
else
{
lean_object* v_a_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3475_; 
lean_dec_ref(v_name_3456_);
v_a_3468_ = lean_ctor_get(v___x_3463_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3470_ = v___x_3463_;
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_a_3468_);
lean_dec(v___x_3463_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3473_; 
if (v_isShared_3471_ == 0)
{
v___x_3473_ = v___x_3470_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3468_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___boxed(lean_object* v_o_3476_, lean_object* v_name_3477_, lean_object* v_args_3478_, lean_object* v_a_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(v_o_3476_, v_name_3477_, v_args_3478_);
return v_res_3480_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Crypto_randomUUID___closed__2(void){
_start:
{
lean_object* v___x_3484_; lean_object* v___x_3485_; 
v___x_3484_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_randomUUID___closed__1));
v___x_3485_ = l_Lasm_JS_Web_Support_args(v___x_3484_);
return v___x_3485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID(lean_object* v_self_3486_){
_start:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3488_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_randomUUID___closed__0));
v___x_3489_ = lean_obj_once(&l_Lasm_JS_Web_Crypto_randomUUID___closed__2, &l_Lasm_JS_Web_Crypto_randomUUID___closed__2_once, _init_l_Lasm_JS_Web_Crypto_randomUUID___closed__2);
v___x_3490_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(v_self_3486_, v___x_3488_, v___x_3489_);
return v___x_3490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID___boxed(lean_object* v_self_3491_, lean_object* v_a_3492_){
_start:
{
lean_object* v_res_3493_; 
v_res_3493_ = l_Lasm_JS_Web_Crypto_randomUUID(v_self_3491_);
return v_res_3493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(lean_object* v_context_3495_, lean_object* v_d_3496_){
_start:
{
lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3505_; lean_object* v_received_3506_; lean_object* v___y_3522_; 
if (lean_obj_tag(v_d_3496_) == 4)
{
lean_object* v_s_3549_; lean_object* v___x_3550_; uint8_t v___x_3551_; 
v_s_3549_ = lean_ctor_get(v_d_3496_, 0);
v___x_3550_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0));
v___x_3551_ = lean_string_dec_eq(v_s_3549_, v___x_3550_);
if (v___x_3551_ == 0)
{
lean_object* v___x_3552_; uint8_t v___x_3553_; 
v___x_3552_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2));
v___x_3553_ = lean_string_dec_eq(v_s_3549_, v___x_3552_);
if (v___x_3553_ == 0)
{
lean_object* v___x_3554_; uint8_t v___x_3555_; 
v___x_3554_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4));
v___x_3555_ = lean_string_dec_eq(v_s_3549_, v___x_3554_);
if (v___x_3555_ == 0)
{
goto v___jp_3524_;
}
else
{
uint8_t v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
lean_dec_ref_known(v_d_3496_, 1);
v___x_3556_ = 2;
v___x_3557_ = lean_box(v___x_3556_);
v___x_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
return v___x_3558_;
}
}
else
{
uint8_t v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
lean_dec_ref_known(v_d_3496_, 1);
v___x_3559_ = 1;
v___x_3560_ = lean_box(v___x_3559_);
v___x_3561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3560_);
return v___x_3561_;
}
}
else
{
uint8_t v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
lean_dec_ref_known(v_d_3496_, 1);
v___x_3562_ = 0;
v___x_3563_ = lean_box(v___x_3562_);
v___x_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3563_);
return v___x_3564_;
}
}
else
{
goto v___jp_3524_;
}
v___jp_3498_:
{
lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3501_ = lean_string_append(v___y_3499_, v___y_3500_);
v___x_3502_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3501_);
v___x_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
return v___x_3503_;
}
v___jp_3504_:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; uint8_t v___x_3518_; 
v___x_3507_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3508_ = lean_string_append(v___x_3507_, v_context_3495_);
v___x_3509_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3510_ = lean_string_append(v___x_3508_, v___x_3509_);
v___x_3511_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___closed__1));
v___x_3512_ = lean_string_append(v___x_3510_, v___x_3511_);
v___x_3513_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3514_ = lean_string_append(v___x_3512_, v___x_3513_);
v___x_3515_ = lean_string_append(v___x_3514_, v_received_3506_);
lean_dec_ref(v_received_3506_);
v___x_3516_ = lean_string_utf8_byte_size(v___y_3505_);
v___x_3517_ = lean_unsigned_to_nat(0u);
v___x_3518_ = lean_nat_dec_eq(v___x_3516_, v___x_3517_);
if (v___x_3518_ == 0)
{
lean_object* v___x_3519_; 
v___x_3519_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___closed__0));
v___y_3499_ = v___x_3515_;
v___y_3500_ = v___x_3519_;
goto v___jp_3498_;
}
else
{
lean_object* v___x_3520_; 
v___x_3520_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_3499_ = v___x_3515_;
v___y_3500_ = v___x_3520_;
goto v___jp_3498_;
}
}
v___jp_3521_:
{
lean_object* v___x_3523_; 
v___x_3523_ = l_Lasm_JS_Data_describe(v_d_3496_);
v___y_3505_ = v___y_3522_;
v_received_3506_ = v___x_3523_;
goto v___jp_3504_;
}
v___jp_3524_:
{
lean_object* v___x_3525_; 
v___x_3525_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__0));
if (lean_obj_tag(v_d_3496_) == 9)
{
lean_object* v_value_3526_; lean_object* v_description_3527_; lean_object* v___x_3528_; uint8_t v___x_3529_; 
v_value_3526_ = lean_ctor_get(v_d_3496_, 0);
v_description_3527_ = lean_ctor_get(v_d_3496_, 1);
v___x_3528_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3529_ = lean_string_dec_eq(v_description_3527_, v___x_3528_);
if (v___x_3529_ == 0)
{
v___y_3522_ = v___x_3525_;
goto v___jp_3521_;
}
else
{
lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3546_; 
lean_inc(v_value_3526_);
v_isSharedCheck_3546_ = !lean_is_exclusive(v_d_3496_);
if (v_isSharedCheck_3546_ == 0)
{
lean_object* v_unused_3547_; lean_object* v_unused_3548_; 
v_unused_3547_ = lean_ctor_get(v_d_3496_, 1);
lean_dec(v_unused_3547_);
v_unused_3548_ = lean_ctor_get(v_d_3496_, 0);
lean_dec(v_unused_3548_);
v___x_3531_ = v_d_3496_;
v_isShared_3532_ = v_isSharedCheck_3546_;
goto v_resetjp_3530_;
}
else
{
lean_dec(v_d_3496_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3546_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
uint32_t v___x_3533_; uint64_t v___x_3534_; lean_object* v___x_3536_; 
v___x_3533_ = 206;
v___x_3534_ = 0ULL;
lean_inc(v_value_3526_);
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 1, v___x_3528_);
v___x_3536_ = v___x_3531_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_value_3526_);
lean_ctor_set(v_reuseFailAlloc_3545_, 1, v___x_3528_);
v___x_3536_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
uint32_t v___x_3537_; lean_object* v___x_3538_; 
v___x_3537_ = lasm_js_value_handle(v_value_3526_);
lean_dec(v_value_3526_);
v___x_3538_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3533_, v___x_3534_, v___x_3536_, v___x_3537_);
lean_dec_ref(v___x_3536_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_object* v_a_3539_; uint8_t v___x_3540_; 
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
lean_inc(v_a_3539_);
lean_dec_ref_known(v___x_3538_, 1);
v___x_3540_ = lean_string_validate_utf8(v_a_3539_);
if (v___x_3540_ == 0)
{
lean_object* v___x_3541_; lean_object* v___x_3542_; 
lean_dec(v_a_3539_);
v___x_3541_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3542_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3541_);
v___y_3505_ = v___x_3525_;
v_received_3506_ = v___x_3542_;
goto v___jp_3504_;
}
else
{
lean_object* v___x_3543_; 
v___x_3543_ = lean_string_from_utf8_unchecked(v_a_3539_);
v___y_3505_ = v___x_3525_;
v_received_3506_ = v___x_3543_;
goto v___jp_3504_;
}
}
else
{
lean_object* v___x_3544_; 
lean_dec_ref_known(v___x_3538_, 1);
v___x_3544_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_3505_ = v___x_3525_;
v_received_3506_ = v___x_3544_;
goto v___jp_3504_;
}
}
}
}
}
else
{
v___y_3522_ = v___x_3525_;
goto v___jp_3521_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3565_, lean_object* v_d_3566_, lean_object* v_a_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(v_context_3565_, v_d_3566_);
lean_dec_ref(v_context_3565_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(lean_object* v_context_3569_, lean_object* v_bytes_3570_){
_start:
{
lean_object* v___x_3572_; 
v___x_3572_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3570_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; lean_object* v___x_3574_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc(v_a_3573_);
lean_dec_ref_known(v___x_3572_, 1);
v___x_3574_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(v_context_3569_, v_a_3573_);
return v___x_3574_;
}
else
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
v_a_3575_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3572_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3572_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0___boxed(lean_object* v_context_3583_, lean_object* v_bytes_3584_, lean_object* v_a_3585_){
_start:
{
lean_object* v_res_3586_; 
v_res_3586_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(v_context_3583_, v_bytes_3584_);
lean_dec_ref(v_bytes_3584_);
lean_dec_ref(v_context_3583_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(lean_object* v_o_3587_, lean_object* v_key_3588_){
_start:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; 
lean_inc_ref(v_key_3588_);
v___x_3590_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3590_, 0, v_key_3588_);
v___x_3591_ = l_Lasm_JS_Wire_encodeIO(v___x_3590_);
lean_dec_ref_known(v___x_3590_, 1);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v_a_3592_; uint32_t v___x_3593_; uint32_t v___x_3594_; uint64_t v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v_a_3592_ = lean_ctor_get(v___x_3591_, 0);
lean_inc(v_a_3592_);
lean_dec_ref_known(v___x_3591_, 1);
v___x_3593_ = 203;
v___x_3594_ = lasm_js_value_handle(v_o_3587_);
v___x_3595_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
v___x_3596_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3597_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3597_, 0, v_o_3587_);
lean_ctor_set(v___x_3597_, 1, v___x_3596_);
v___x_3598_ = lasm_js_call(v___x_3593_, v___x_3594_, v___x_3595_, v_a_3592_, v___x_3597_);
lean_dec_ref_known(v___x_3597_, 2);
lean_dec(v_a_3592_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v_a_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
v_a_3599_ = lean_ctor_get(v___x_3598_, 0);
lean_inc(v_a_3599_);
lean_dec_ref_known(v___x_3598_, 1);
v___x_3600_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__1));
v___x_3601_ = l_String_quote(v_key_3588_);
v___x_3602_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3601_);
v___x_3603_ = lean_unsigned_to_nat(120u);
v___x_3604_ = lean_unsigned_to_nat(0u);
v___x_3605_ = l_Std_Format_pretty(v___x_3602_, v___x_3603_, v___x_3604_, v___x_3604_);
v___x_3606_ = lean_string_append(v___x_3600_, v___x_3605_);
lean_dec_ref(v___x_3605_);
v___x_3607_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(v___x_3606_, v_a_3599_);
lean_dec(v_a_3599_);
lean_dec_ref(v___x_3606_);
return v___x_3607_;
}
else
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3615_; 
lean_dec_ref(v_key_3588_);
v_a_3608_ = lean_ctor_get(v___x_3598_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3610_ = v___x_3598_;
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3598_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3613_; 
if (v_isShared_3611_ == 0)
{
v___x_3613_ = v___x_3610_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_a_3608_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
}
}
else
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3623_; 
lean_dec_ref(v_key_3588_);
lean_dec(v_o_3587_);
v_a_3616_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3618_ = v___x_3591_;
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3591_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_a_3616_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___boxed(lean_object* v_o_3624_, lean_object* v_key_3625_, lean_object* v_a_3626_){
_start:
{
lean_object* v_res_3627_; 
v_res_3627_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(v_o_3624_, v_key_3625_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type(lean_object* v_self_3629_){
_start:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3631_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_type___closed__0));
v___x_3632_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(v_self_3629_, v___x_3631_);
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type___boxed(lean_object* v_self_3633_, lean_object* v_a_3634_){
_start:
{
lean_object* v_res_3635_; 
v_res_3635_ = l_Lasm_JS_Web_CryptoKey_type(v_self_3633_);
return v_res_3635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(lean_object* v_context_3637_, lean_object* v_d_3638_){
_start:
{
lean_object* v___y_3641_; lean_object* v___y_3642_; 
if (lean_obj_tag(v_d_3638_) == 2)
{
uint8_t v_b_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v_b_3646_ = lean_ctor_get_uint8(v_d_3638_, 0);
lean_dec_ref_known(v_d_3638_, 0);
v___x_3647_ = lean_box(v_b_3646_);
v___x_3648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3648_, 0, v___x_3647_);
return v___x_3648_;
}
else
{
lean_object* v___x_3649_; lean_object* v_received_3651_; 
v___x_3649_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
if (lean_obj_tag(v_d_3638_) == 9)
{
lean_object* v_value_3665_; lean_object* v_description_3666_; uint8_t v___x_3667_; 
v_value_3665_ = lean_ctor_get(v_d_3638_, 0);
v_description_3666_ = lean_ctor_get(v_d_3638_, 1);
v___x_3667_ = lean_string_dec_eq(v_description_3666_, v___x_3649_);
if (v___x_3667_ == 0)
{
goto v___jp_3663_;
}
else
{
uint32_t v___x_3668_; uint64_t v___x_3669_; lean_object* v___x_3670_; uint32_t v___x_3671_; lean_object* v___x_3672_; 
lean_inc_n(v_value_3665_, 2);
lean_dec_ref_known(v_d_3638_, 2);
v___x_3668_ = 206;
v___x_3669_ = 0ULL;
v___x_3670_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3670_, 0, v_value_3665_);
lean_ctor_set(v___x_3670_, 1, v___x_3649_);
v___x_3671_ = lasm_js_value_handle(v_value_3665_);
lean_dec(v_value_3665_);
v___x_3672_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3668_, v___x_3669_, v___x_3670_, v___x_3671_);
lean_dec_ref_known(v___x_3670_, 2);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v_a_3673_; uint8_t v___x_3674_; 
v_a_3673_ = lean_ctor_get(v___x_3672_, 0);
lean_inc(v_a_3673_);
lean_dec_ref_known(v___x_3672_, 1);
v___x_3674_ = lean_string_validate_utf8(v_a_3673_);
if (v___x_3674_ == 0)
{
lean_object* v___x_3675_; lean_object* v___x_3676_; 
lean_dec(v_a_3673_);
v___x_3675_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3676_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3675_);
v_received_3651_ = v___x_3676_;
goto v___jp_3650_;
}
else
{
lean_object* v___x_3677_; 
v___x_3677_ = lean_string_from_utf8_unchecked(v_a_3673_);
v_received_3651_ = v___x_3677_;
goto v___jp_3650_;
}
}
else
{
lean_object* v___x_3678_; 
lean_dec_ref_known(v___x_3672_, 1);
v___x_3678_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_3651_ = v___x_3678_;
goto v___jp_3650_;
}
}
}
else
{
goto v___jp_3663_;
}
v___jp_3650_:
{
lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; uint8_t v___x_3661_; 
v___x_3652_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3653_ = lean_string_append(v___x_3652_, v_context_3637_);
v___x_3654_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3655_ = lean_string_append(v___x_3653_, v___x_3654_);
v___x_3656_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___closed__0));
v___x_3657_ = lean_string_append(v___x_3655_, v___x_3656_);
v___x_3658_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3659_ = lean_string_append(v___x_3657_, v___x_3658_);
v___x_3660_ = lean_string_append(v___x_3659_, v_received_3651_);
lean_dec_ref(v_received_3651_);
v___x_3661_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_3661_ == 0)
{
lean_object* v___x_3662_; 
v___x_3662_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___y_3641_ = v___x_3660_;
v___y_3642_ = v___x_3662_;
goto v___jp_3640_;
}
else
{
v___y_3641_ = v___x_3660_;
v___y_3642_ = v___x_3649_;
goto v___jp_3640_;
}
}
v___jp_3663_:
{
lean_object* v___x_3664_; 
v___x_3664_ = l_Lasm_JS_Data_describe(v_d_3638_);
v_received_3651_ = v___x_3664_;
goto v___jp_3650_;
}
}
v___jp_3640_:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3643_ = lean_string_append(v___y_3641_, v___y_3642_);
v___x_3644_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3644_, 0, v___x_3643_);
v___x_3645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3644_);
return v___x_3645_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3679_, lean_object* v_d_3680_, lean_object* v_a_3681_){
_start:
{
lean_object* v_res_3682_; 
v_res_3682_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(v_context_3679_, v_d_3680_);
lean_dec_ref(v_context_3679_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(lean_object* v_context_3683_, lean_object* v_bytes_3684_){
_start:
{
lean_object* v___x_3686_; 
v___x_3686_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3684_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v_a_3687_; lean_object* v___x_3688_; 
v_a_3687_ = lean_ctor_get(v___x_3686_, 0);
lean_inc(v_a_3687_);
lean_dec_ref_known(v___x_3686_, 1);
v___x_3688_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(v_context_3683_, v_a_3687_);
return v___x_3688_;
}
else
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3696_; 
v_a_3689_ = lean_ctor_get(v___x_3686_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3686_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3691_ = v___x_3686_;
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3686_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3694_; 
if (v_isShared_3692_ == 0)
{
v___x_3694_ = v___x_3691_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_a_3689_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0___boxed(lean_object* v_context_3697_, lean_object* v_bytes_3698_, lean_object* v_a_3699_){
_start:
{
lean_object* v_res_3700_; 
v_res_3700_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(v_context_3697_, v_bytes_3698_);
lean_dec_ref(v_bytes_3698_);
lean_dec_ref(v_context_3697_);
return v_res_3700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(lean_object* v_o_3701_, lean_object* v_key_3702_){
_start:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; 
lean_inc_ref(v_key_3702_);
v___x_3704_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3704_, 0, v_key_3702_);
v___x_3705_ = l_Lasm_JS_Wire_encodeIO(v___x_3704_);
lean_dec_ref_known(v___x_3704_, 1);
if (lean_obj_tag(v___x_3705_) == 0)
{
lean_object* v_a_3706_; uint32_t v___x_3707_; uint32_t v___x_3708_; uint64_t v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v_a_3706_ = lean_ctor_get(v___x_3705_, 0);
lean_inc(v_a_3706_);
lean_dec_ref_known(v___x_3705_, 1);
v___x_3707_ = 203;
v___x_3708_ = lasm_js_value_handle(v_o_3701_);
v___x_3709_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
v___x_3710_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3711_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3711_, 0, v_o_3701_);
lean_ctor_set(v___x_3711_, 1, v___x_3710_);
v___x_3712_ = lasm_js_call(v___x_3707_, v___x_3708_, v___x_3709_, v_a_3706_, v___x_3711_);
lean_dec_ref_known(v___x_3711_, 2);
lean_dec(v_a_3706_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_a_3713_);
lean_dec_ref_known(v___x_3712_, 1);
v___x_3714_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__1));
v___x_3715_ = l_String_quote(v_key_3702_);
v___x_3716_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3715_);
v___x_3717_ = lean_unsigned_to_nat(120u);
v___x_3718_ = lean_unsigned_to_nat(0u);
v___x_3719_ = l_Std_Format_pretty(v___x_3716_, v___x_3717_, v___x_3718_, v___x_3718_);
v___x_3720_ = lean_string_append(v___x_3714_, v___x_3719_);
lean_dec_ref(v___x_3719_);
v___x_3721_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(v___x_3720_, v_a_3713_);
lean_dec(v_a_3713_);
lean_dec_ref(v___x_3720_);
return v___x_3721_;
}
else
{
lean_object* v_a_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3729_; 
lean_dec_ref(v_key_3702_);
v_a_3722_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3724_ = v___x_3712_;
v_isShared_3725_ = v_isSharedCheck_3729_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_a_3722_);
lean_dec(v___x_3712_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3729_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
lean_object* v___x_3727_; 
if (v_isShared_3725_ == 0)
{
v___x_3727_ = v___x_3724_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v_a_3722_);
v___x_3727_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
return v___x_3727_;
}
}
}
}
else
{
lean_object* v_a_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3737_; 
lean_dec_ref(v_key_3702_);
lean_dec(v_o_3701_);
v_a_3730_ = lean_ctor_get(v___x_3705_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3705_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3732_ = v___x_3705_;
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_a_3730_);
lean_dec(v___x_3705_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
if (v_isShared_3733_ == 0)
{
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_a_3730_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0___boxed(lean_object* v_o_3738_, lean_object* v_key_3739_, lean_object* v_a_3740_){
_start:
{
lean_object* v_res_3741_; 
v_res_3741_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(v_o_3738_, v_key_3739_);
return v_res_3741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable(lean_object* v_self_3743_){
_start:
{
lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3745_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_extractable___closed__0));
v___x_3746_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(v_self_3743_, v___x_3745_);
return v___x_3746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable___boxed(lean_object* v_self_3747_, lean_object* v_a_3748_){
_start:
{
lean_object* v_res_3749_; 
v_res_3749_ = l_Lasm_JS_Web_CryptoKey_extractable(v_self_3747_);
return v_res_3749_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0___redArg(lean_object* v_bytes_3750_){
_start:
{
lean_object* v___x_3752_; 
v___x_3752_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3750_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3760_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3760_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3755_ = v___x_3752_;
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_a_3753_);
lean_dec(v___x_3752_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v___x_3758_; 
if (v_isShared_3756_ == 0)
{
v___x_3758_ = v___x_3755_;
goto v_reusejp_3757_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v_a_3753_);
v___x_3758_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3757_;
}
v_reusejp_3757_:
{
return v___x_3758_;
}
}
}
else
{
return v___x_3752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0___redArg___boxed(lean_object* v_bytes_3761_, lean_object* v_a_3762_){
_start:
{
lean_object* v_res_3763_; 
v_res_3763_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0___redArg(v_bytes_3761_);
lean_dec_ref(v_bytes_3761_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(lean_object* v_o_3764_, lean_object* v_key_3765_){
_start:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; 
v___x_3767_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3767_, 0, v_key_3765_);
v___x_3768_ = l_Lasm_JS_Wire_encodeIO(v___x_3767_);
lean_dec_ref_known(v___x_3767_, 1);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; uint32_t v___x_3770_; uint32_t v___x_3771_; uint64_t v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
lean_inc(v_a_3769_);
lean_dec_ref_known(v___x_3768_, 1);
v___x_3770_ = 203;
v___x_3771_ = lasm_js_value_handle(v_o_3764_);
v___x_3772_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
v___x_3773_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3774_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3774_, 0, v_o_3764_);
lean_ctor_set(v___x_3774_, 1, v___x_3773_);
v___x_3775_ = lasm_js_call(v___x_3770_, v___x_3771_, v___x_3772_, v_a_3769_, v___x_3774_);
lean_dec_ref_known(v___x_3774_, 2);
lean_dec(v_a_3769_);
if (lean_obj_tag(v___x_3775_) == 0)
{
lean_object* v_a_3776_; lean_object* v___x_3777_; 
v_a_3776_ = lean_ctor_get(v___x_3775_, 0);
lean_inc(v_a_3776_);
lean_dec_ref_known(v___x_3775_, 1);
v___x_3777_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0___redArg(v_a_3776_);
lean_dec(v_a_3776_);
return v___x_3777_;
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3785_; 
v_a_3778_ = lean_ctor_get(v___x_3775_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3775_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3780_ = v___x_3775_;
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v___x_3775_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
else
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3793_; 
lean_dec(v_o_3764_);
v_a_3786_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3788_ = v___x_3768_;
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v___x_3768_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3791_; 
if (v_isShared_3789_ == 0)
{
v___x_3791_ = v___x_3788_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3786_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0___boxed(lean_object* v_o_3794_, lean_object* v_key_3795_, lean_object* v_a_3796_){
_start:
{
lean_object* v_res_3797_; 
v_res_3797_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_o_3794_, v_key_3795_);
return v_res_3797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm(lean_object* v_self_3799_){
_start:
{
lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3801_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_algorithm___closed__0));
v___x_3802_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_self_3799_, v___x_3801_);
return v___x_3802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm___boxed(lean_object* v_self_3803_, lean_object* v_a_3804_){
_start:
{
lean_object* v_res_3805_; 
v_res_3805_ = l_Lasm_JS_Web_CryptoKey_algorithm(v_self_3803_);
return v_res_3805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1___redArg(lean_object* v_d_3806_){
_start:
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v_d_3806_);
return v___x_3808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_d_3809_, lean_object* v_a_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1___redArg(v_d_3809_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1(lean_object* v_context_3812_, lean_object* v_d_3813_){
_start:
{
lean_object* v___x_3815_; 
v___x_3815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3815_, 0, v_d_3813_);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3816_, lean_object* v_d_3817_, lean_object* v_a_3818_){
_start:
{
lean_object* v_res_3819_; 
v_res_3819_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0_spec__1(v_context_3816_, v_d_3817_);
lean_dec_ref(v_context_3816_);
return v_res_3819_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0(lean_object* v_context_3820_, lean_object* v_bytes_3821_){
_start:
{
lean_object* v___x_3823_; 
v___x_3823_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0___redArg(v_bytes_3821_);
return v___x_3823_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0___boxed(lean_object* v_context_3824_, lean_object* v_bytes_3825_, lean_object* v_a_3826_){
_start:
{
lean_object* v_res_3827_; 
v_res_3827_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0_spec__0(v_context_3824_, v_bytes_3825_);
lean_dec_ref(v_bytes_3825_);
lean_dec_ref(v_context_3824_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages(lean_object* v_self_3829_){
_start:
{
lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3831_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_usages___closed__0));
v___x_3832_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_self_3829_, v___x_3831_);
return v___x_3832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages___boxed(lean_object* v_self_3833_, lean_object* v_a_3834_){
_start:
{
lean_object* v_res_3835_; 
v_res_3835_ = l_Lasm_JS_Web_CryptoKey_usages(v_self_3833_);
return v_res_3835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0(lean_object* v_x_3836_){
_start:
{
lean_object* v_val_3839_; 
if (lean_obj_tag(v_x_3836_) == 0)
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3849_; 
v_a_3841_ = lean_ctor_get(v_x_3836_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_x_3836_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3843_ = v_x_3836_;
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v_x_3836_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_a_3841_);
v___x_3846_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
lean_object* v___x_3847_; 
v___x_3847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3846_);
return v___x_3847_;
}
}
}
else
{
lean_object* v_a_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3863_; 
v_a_3850_ = lean_ctor_get(v_x_3836_, 0);
v_isSharedCheck_3863_ = !lean_is_exclusive(v_x_3836_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3852_ = v_x_3836_;
v_isShared_3853_ = v_isSharedCheck_3863_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_a_3850_);
lean_dec(v_x_3836_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3863_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_3850_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v_a_3855_; lean_object* v___x_3857_; 
v_a_3855_ = lean_ctor_get(v___x_3854_, 0);
lean_inc(v_a_3855_);
lean_dec_ref_known(v___x_3854_, 1);
if (v_isShared_3853_ == 0)
{
lean_ctor_set(v___x_3852_, 0, v_a_3855_);
v___x_3857_ = v___x_3852_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3855_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
v_val_3839_ = v___x_3857_;
goto v___jp_3838_;
}
}
else
{
lean_object* v_a_3859_; lean_object* v___x_3861_; 
v_a_3859_ = lean_ctor_get(v___x_3854_, 0);
lean_inc(v_a_3859_);
lean_dec_ref_known(v___x_3854_, 1);
if (v_isShared_3853_ == 0)
{
lean_ctor_set_tag(v___x_3852_, 0);
lean_ctor_set(v___x_3852_, 0, v_a_3859_);
v___x_3861_ = v___x_3852_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3859_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
v_val_3839_ = v___x_3861_;
goto v___jp_3838_;
}
}
}
}
v___jp_3838_:
{
lean_object* v___x_3840_; 
v___x_3840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3840_, 0, v_val_3839_);
return v___x_3840_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0___boxed(lean_object* v_x_3864_, lean_object* v___y_3865_){
_start:
{
lean_object* v_res_3866_; 
v_res_3866_ = l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0(v_x_3864_);
return v_res_3866_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2(lean_object* v___f_3867_, lean_object* v_x_3868_){
_start:
{
if (lean_obj_tag(v_x_3868_) == 0)
{
lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3878_; 
lean_dec_ref(v___f_3867_);
v_a_3870_ = lean_ctor_get(v_x_3868_, 0);
v_isSharedCheck_3878_ = !lean_is_exclusive(v_x_3868_);
if (v_isSharedCheck_3878_ == 0)
{
v___x_3872_ = v_x_3868_;
v_isShared_3873_ = v_isSharedCheck_3878_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v_x_3868_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3878_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3875_; 
if (v_isShared_3873_ == 0)
{
v___x_3875_ = v___x_3872_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v_a_3870_);
v___x_3875_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
lean_object* v___x_3876_; 
v___x_3876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3875_);
return v___x_3876_;
}
}
}
else
{
lean_object* v_a_3879_; lean_object* v___x_3880_; 
v_a_3879_ = lean_ctor_get(v_x_3868_, 0);
lean_inc(v_a_3879_);
lean_dec_ref_known(v_x_3868_, 1);
v___x_3880_ = lean_apply_2(v___f_3867_, v_a_3879_, lean_box(0));
return v___x_3880_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed(lean_object* v___f_3881_, lean_object* v_x_3882_, lean_object* v___y_3883_){
_start:
{
lean_object* v_res_3884_; 
v_res_3884_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2(v___f_3881_, v_x_3882_);
return v_res_3884_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7(lean_object* v___f_3885_, lean_object* v_a_3886_, uint32_t v_op_3887_, uint64_t v_flags_3888_, lean_object* v_payload_3889_, lean_object* v_x_3890_){
_start:
{
if (lean_obj_tag(v_x_3890_) == 0)
{
lean_object* v___x_3892_; 
lean_dec_ref(v___f_3885_);
v___x_3892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3892_, 0, v_x_3890_);
return v___x_3892_;
}
else
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3913_; 
v_a_3893_ = lean_ctor_get(v_x_3890_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v_x_3890_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3895_ = v_x_3890_;
v_isShared_3896_ = v_isSharedCheck_3913_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v_x_3890_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3913_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
uint32_t v___x_3897_; lean_object* v___x_3898_; uint8_t v___x_3899_; lean_object* v_val_3901_; lean_object* v___x_3904_; 
v___x_3897_ = 0;
v___x_3898_ = lean_unsigned_to_nat(0u);
v___x_3899_ = 0;
v___x_3904_ = lasm_js_call_into(v_a_3886_, v_op_3887_, v___x_3897_, v_flags_3888_, v_a_3893_, v_payload_3889_);
lean_dec(v_a_3893_);
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v_a_3905_; lean_object* v___x_3907_; 
v_a_3905_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_a_3905_);
lean_dec_ref_known(v___x_3904_, 1);
if (v_isShared_3896_ == 0)
{
lean_ctor_set(v___x_3895_, 0, v_a_3905_);
v___x_3907_ = v___x_3895_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_a_3905_);
v___x_3907_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
v_val_3901_ = v___x_3907_;
goto v___jp_3900_;
}
}
else
{
lean_object* v_a_3909_; lean_object* v___x_3911_; 
v_a_3909_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_a_3909_);
lean_dec_ref_known(v___x_3904_, 1);
if (v_isShared_3896_ == 0)
{
lean_ctor_set_tag(v___x_3895_, 0);
lean_ctor_set(v___x_3895_, 0, v_a_3909_);
v___x_3911_ = v___x_3895_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v_a_3909_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
v_val_3901_ = v___x_3911_;
goto v___jp_3900_;
}
}
v___jp_3900_:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3902_, 0, v_val_3901_);
v___x_3903_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3898_, v___x_3899_, v___x_3902_, v___f_3885_);
return v___x_3903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed(lean_object* v___f_3914_, lean_object* v_a_3915_, lean_object* v_op_3916_, lean_object* v_flags_3917_, lean_object* v_payload_3918_, lean_object* v_x_3919_, lean_object* v___y_3920_){
_start:
{
uint32_t v_op_boxed_3921_; uint64_t v_flags_boxed_3922_; lean_object* v_res_3923_; 
v_op_boxed_3921_ = lean_unbox_uint32(v_op_3916_);
lean_dec(v_op_3916_);
v_flags_boxed_3922_ = lean_unbox_uint64(v_flags_3917_);
lean_dec_ref(v_flags_3917_);
v_res_3923_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7(v___f_3914_, v_a_3915_, v_op_boxed_3921_, v_flags_boxed_3922_, v_payload_3918_, v_x_3919_);
lean_dec(v_payload_3918_);
lean_dec(v_a_3915_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5(lean_object* v___x_3924_, uint8_t v___x_3925_, lean_object* v___f_3926_, lean_object* v_a_3927_, uint32_t v_op_3928_, uint64_t v_flags_3929_, lean_object* v_payload_3930_, lean_object* v_x_3931_){
_start:
{
lean_object* v_val_3934_; 
if (lean_obj_tag(v_x_3931_) == 0)
{
lean_object* v___x_3937_; 
lean_dec_ref(v___f_3926_);
lean_dec(v___x_3924_);
v___x_3937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3937_, 0, v_x_3931_);
return v___x_3937_;
}
else
{
lean_object* v_a_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_3952_; 
v_a_3938_ = lean_ctor_get(v_x_3931_, 0);
v_isSharedCheck_3952_ = !lean_is_exclusive(v_x_3931_);
if (v_isSharedCheck_3952_ == 0)
{
v___x_3940_ = v_x_3931_;
v_isShared_3941_ = v_isSharedCheck_3952_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_a_3938_);
lean_dec(v_x_3931_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_3952_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
uint32_t v___x_3942_; lean_object* v___x_3943_; 
v___x_3942_ = 0;
v___x_3943_ = lasm_js_call_into(v_a_3927_, v_op_3928_, v___x_3942_, v_flags_3929_, v_a_3938_, v_payload_3930_);
lean_dec(v_a_3938_);
if (lean_obj_tag(v___x_3943_) == 0)
{
lean_object* v_a_3944_; lean_object* v___x_3946_; 
v_a_3944_ = lean_ctor_get(v___x_3943_, 0);
lean_inc(v_a_3944_);
lean_dec_ref_known(v___x_3943_, 1);
if (v_isShared_3941_ == 0)
{
lean_ctor_set(v___x_3940_, 0, v_a_3944_);
v___x_3946_ = v___x_3940_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v_a_3944_);
v___x_3946_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
v_val_3934_ = v___x_3946_;
goto v___jp_3933_;
}
}
else
{
lean_object* v_a_3948_; lean_object* v___x_3950_; 
v_a_3948_ = lean_ctor_get(v___x_3943_, 0);
lean_inc(v_a_3948_);
lean_dec_ref_known(v___x_3943_, 1);
if (v_isShared_3941_ == 0)
{
lean_ctor_set_tag(v___x_3940_, 0);
lean_ctor_set(v___x_3940_, 0, v_a_3948_);
v___x_3950_ = v___x_3940_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v_a_3948_);
v___x_3950_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
v_val_3934_ = v___x_3950_;
goto v___jp_3933_;
}
}
}
}
v___jp_3933_:
{
lean_object* v___x_3935_; lean_object* v___x_3936_; 
v___x_3935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3935_, 0, v_val_3934_);
v___x_3936_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3924_, v___x_3925_, v___x_3935_, v___f_3926_);
return v___x_3936_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed(lean_object* v___x_3953_, lean_object* v___x_3954_, lean_object* v___f_3955_, lean_object* v_a_3956_, lean_object* v_op_3957_, lean_object* v_flags_3958_, lean_object* v_payload_3959_, lean_object* v_x_3960_, lean_object* v___y_3961_){
_start:
{
uint8_t v___x_1154__boxed_3962_; uint32_t v_op_boxed_3963_; uint64_t v_flags_boxed_3964_; lean_object* v_res_3965_; 
v___x_1154__boxed_3962_ = lean_unbox(v___x_3954_);
v_op_boxed_3963_ = lean_unbox_uint32(v_op_3957_);
lean_dec(v_op_3957_);
v_flags_boxed_3964_ = lean_unbox_uint64(v_flags_3958_);
lean_dec_ref(v_flags_3958_);
v_res_3965_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5(v___x_3953_, v___x_1154__boxed_3962_, v___f_3955_, v_a_3956_, v_op_boxed_3963_, v_flags_boxed_3964_, v_payload_3959_, v_x_3960_);
lean_dec(v_payload_3959_);
lean_dec(v_a_3956_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3(lean_object* v_a_3966_, lean_object* v_x_3967_){
_start:
{
if (lean_obj_tag(v_x_3967_) == 0)
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3977_; 
v_a_3969_ = lean_ctor_get(v_x_3967_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v_x_3967_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3971_ = v_x_3967_;
v_isShared_3972_ = v_isSharedCheck_3977_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v_x_3967_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3977_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3974_; 
if (v_isShared_3972_ == 0)
{
v___x_3974_ = v___x_3971_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3969_);
v___x_3974_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
lean_object* v___x_3975_; 
v___x_3975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3975_, 0, v___x_3974_);
return v___x_3975_;
}
}
}
else
{
lean_object* v___x_3978_; 
lean_dec_ref_known(v_x_3967_, 1);
v___x_3978_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3966_);
return v___x_3978_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed(lean_object* v_a_3979_, lean_object* v_x_3980_, lean_object* v___y_3981_){
_start:
{
lean_object* v_res_3982_; 
v_res_3982_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3(v_a_3979_, v_x_3980_);
lean_dec(v_a_3979_);
return v_res_3982_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_3983_, uint32_t v_op_3984_, uint64_t v_flags_3985_, lean_object* v_payload_3986_, lean_object* v___f_3987_, lean_object* v___f_3988_, lean_object* v___f_3989_, lean_object* v_x_3990_){
_start:
{
if (lean_obj_tag(v_x_3990_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4000_; 
lean_dec_ref(v___f_3989_);
lean_dec_ref(v___f_3988_);
lean_dec_ref(v___f_3987_);
lean_dec(v_payload_3986_);
v_a_3992_ = lean_ctor_get(v_x_3990_, 0);
v_isSharedCheck_4000_ = !lean_is_exclusive(v_x_3990_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3994_ = v_x_3990_;
v_isShared_3995_ = v_isSharedCheck_4000_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v_x_3990_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4000_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3997_; 
if (v_isShared_3995_ == 0)
{
v___x_3997_ = v___x_3994_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_a_3992_);
v___x_3997_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
lean_object* v___x_3998_; 
v___x_3998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3997_);
return v___x_3998_;
}
}
}
else
{
lean_object* v_a_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4047_; 
v_a_4001_ = lean_ctor_get(v_x_3990_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v_x_3990_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4003_ = v_x_3990_;
v_isShared_4004_ = v_isSharedCheck_4047_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_a_4001_);
lean_dec(v_x_3990_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4047_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4005_; lean_object* v___x_4006_; uint8_t v___x_4007_; 
v___x_4005_ = lean_string_utf8_byte_size(v_failurePrefix_3983_);
v___x_4006_ = lean_unsigned_to_nat(0u);
v___x_4007_ = lean_nat_dec_eq(v___x_4005_, v___x_4006_);
if (v___x_4007_ == 0)
{
lean_object* v___f_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___f_4012_; lean_object* v_val_4014_; lean_object* v___x_4019_; 
lean_dec_ref(v___f_3989_);
lean_inc(v_a_4001_);
v___f_4008_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4008_, 0, v_a_4001_);
v___x_4009_ = lean_box(v___x_4007_);
v___x_4010_ = lean_box_uint32(v_op_3984_);
v___x_4011_ = lean_box_uint64(v_flags_3985_);
lean_inc(v_payload_3986_);
v___f_4012_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4012_, 0, v___x_4006_);
lean_closure_set(v___f_4012_, 1, v___x_4009_);
lean_closure_set(v___f_4012_, 2, v___f_4008_);
lean_closure_set(v___f_4012_, 3, v_a_4001_);
lean_closure_set(v___f_4012_, 4, v___x_4010_);
lean_closure_set(v___f_4012_, 5, v___x_4011_);
lean_closure_set(v___f_4012_, 6, v_payload_3986_);
v___x_4019_ = l_Lasm_JS_Wire_encodeIO(v_payload_3986_);
lean_dec(v_payload_3986_);
if (lean_obj_tag(v___x_4019_) == 0)
{
lean_object* v_a_4020_; lean_object* v___x_4022_; 
v_a_4020_ = lean_ctor_get(v___x_4019_, 0);
lean_inc(v_a_4020_);
lean_dec_ref_known(v___x_4019_, 1);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 0, v_a_4020_);
v___x_4022_ = v___x_4003_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4020_);
v___x_4022_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
v_val_4014_ = v___x_4022_;
goto v___jp_4013_;
}
}
else
{
lean_object* v_a_4024_; lean_object* v___x_4026_; 
v_a_4024_ = lean_ctor_get(v___x_4019_, 0);
lean_inc(v_a_4024_);
lean_dec_ref_known(v___x_4019_, 1);
if (v_isShared_4004_ == 0)
{
lean_ctor_set_tag(v___x_4003_, 0);
lean_ctor_set(v___x_4003_, 0, v_a_4024_);
v___x_4026_ = v___x_4003_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_a_4024_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
v_val_4014_ = v___x_4026_;
goto v___jp_4013_;
}
}
v___jp_4013_:
{
lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; 
v___x_4015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4015_, 0, v_val_4014_);
v___x_4016_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4006_, v___x_4007_, v___x_4015_, v___f_4012_);
v___x_4017_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4006_, v___x_4007_, v___x_4016_, v___f_3987_);
v___x_4018_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4006_, v___x_4007_, v___x_4017_, v___f_3988_);
return v___x_4018_;
}
}
else
{
lean_object* v___f_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___f_4031_; uint8_t v___x_4032_; lean_object* v_val_4034_; lean_object* v___x_4038_; 
lean_dec_ref(v___f_3988_);
lean_dec_ref(v___f_3987_);
lean_inc(v_a_4001_);
v___f_4028_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4028_, 0, v_a_4001_);
v___x_4029_ = lean_box_uint32(v_op_3984_);
v___x_4030_ = lean_box_uint64(v_flags_3985_);
lean_inc(v_payload_3986_);
v___f_4031_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4031_, 0, v___f_4028_);
lean_closure_set(v___f_4031_, 1, v_a_4001_);
lean_closure_set(v___f_4031_, 2, v___x_4029_);
lean_closure_set(v___f_4031_, 3, v___x_4030_);
lean_closure_set(v___f_4031_, 4, v_payload_3986_);
v___x_4032_ = 0;
v___x_4038_ = l_Lasm_JS_Wire_encodeIO(v_payload_3986_);
lean_dec(v_payload_3986_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4041_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
lean_inc(v_a_4039_);
lean_dec_ref_known(v___x_4038_, 1);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 0, v_a_4039_);
v___x_4041_ = v___x_4003_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v_a_4039_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
v_val_4034_ = v___x_4041_;
goto v___jp_4033_;
}
}
else
{
lean_object* v_a_4043_; lean_object* v___x_4045_; 
v_a_4043_ = lean_ctor_get(v___x_4038_, 0);
lean_inc(v_a_4043_);
lean_dec_ref_known(v___x_4038_, 1);
if (v_isShared_4004_ == 0)
{
lean_ctor_set_tag(v___x_4003_, 0);
lean_ctor_set(v___x_4003_, 0, v_a_4043_);
v___x_4045_ = v___x_4003_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4043_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
v_val_4034_ = v___x_4045_;
goto v___jp_4033_;
}
}
v___jp_4033_:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4035_, 0, v_val_4034_);
v___x_4036_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4006_, v___x_4032_, v___x_4035_, v___f_4031_);
v___x_4037_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4006_, v___x_4032_, v___x_4036_, v___f_3989_);
return v___x_4037_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_4048_, lean_object* v_op_4049_, lean_object* v_flags_4050_, lean_object* v_payload_4051_, lean_object* v___f_4052_, lean_object* v___f_4053_, lean_object* v___f_4054_, lean_object* v_x_4055_, lean_object* v___y_4056_){
_start:
{
uint32_t v_op_boxed_4057_; uint64_t v_flags_boxed_4058_; lean_object* v_res_4059_; 
v_op_boxed_4057_ = lean_unbox_uint32(v_op_4049_);
lean_dec(v_op_4049_);
v_flags_boxed_4058_ = lean_unbox_uint64(v_flags_4050_);
lean_dec_ref(v_flags_4050_);
v_res_4059_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6(v_failurePrefix_4048_, v_op_boxed_4057_, v_flags_boxed_4058_, v_payload_4051_, v___f_4052_, v___f_4053_, v___f_4054_, v_x_4055_);
lean_dec_ref(v_failurePrefix_4048_);
return v_res_4059_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_4060_, lean_object* v_x_4061_){
_start:
{
if (lean_obj_tag(v_x_4061_) == 0)
{
lean_object* v_a_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4074_; 
v_a_4063_ = lean_ctor_get(v_x_4061_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v_x_4061_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4065_ = v_x_4061_;
v_isShared_4066_ = v_isSharedCheck_4074_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_a_4063_);
lean_dec(v_x_4061_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4074_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4071_; 
v___x_4067_ = lean_io_error_to_string(v_a_4063_);
v___x_4068_ = lean_string_append(v_failurePrefix_4060_, v___x_4067_);
lean_dec_ref(v___x_4067_);
v___x_4069_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
if (v_isShared_4066_ == 0)
{
lean_ctor_set(v___x_4065_, 0, v___x_4069_);
v___x_4071_ = v___x_4065_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v___x_4069_);
v___x_4071_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
lean_object* v___x_4072_; 
v___x_4072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4071_);
return v___x_4072_;
}
}
}
else
{
lean_object* v___x_4075_; 
lean_dec_ref(v_failurePrefix_4060_);
v___x_4075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4075_, 0, v_x_4061_);
return v___x_4075_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_4076_, lean_object* v_x_4077_, lean_object* v___y_4078_){
_start:
{
lean_object* v_res_4079_; 
v_res_4079_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4(v_failurePrefix_4076_, v_x_4077_);
return v_res_4079_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1(lean_object* v___f_4080_, lean_object* v_bytes_4081_){
_start:
{
lean_object* v___x_4083_; uint8_t v___x_4084_; lean_object* v_val_4086_; lean_object* v___x_4089_; 
v___x_4083_ = lean_unsigned_to_nat(0u);
v___x_4084_ = 0;
v___x_4089_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4081_);
if (lean_obj_tag(v___x_4089_) == 0)
{
lean_object* v_a_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4097_; 
v_a_4090_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4097_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4097_ == 0)
{
v___x_4092_ = v___x_4089_;
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_a_4090_);
lean_dec(v___x_4089_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v___x_4095_; 
if (v_isShared_4093_ == 0)
{
lean_ctor_set_tag(v___x_4092_, 1);
v___x_4095_ = v___x_4092_;
goto v_reusejp_4094_;
}
else
{
lean_object* v_reuseFailAlloc_4096_; 
v_reuseFailAlloc_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4096_, 0, v_a_4090_);
v___x_4095_ = v_reuseFailAlloc_4096_;
goto v_reusejp_4094_;
}
v_reusejp_4094_:
{
v_val_4086_ = v___x_4095_;
goto v___jp_4085_;
}
}
}
else
{
lean_object* v_a_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4105_; 
v_a_4098_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4105_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4105_ == 0)
{
v___x_4100_ = v___x_4089_;
v_isShared_4101_ = v_isSharedCheck_4105_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_a_4098_);
lean_dec(v___x_4089_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4105_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v___x_4103_; 
if (v_isShared_4101_ == 0)
{
lean_ctor_set_tag(v___x_4100_, 0);
v___x_4103_ = v___x_4100_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v_a_4098_);
v___x_4103_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
v_val_4086_ = v___x_4103_;
goto v___jp_4085_;
}
}
}
v___jp_4085_:
{
lean_object* v___x_4087_; lean_object* v___x_4088_; 
v___x_4087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4087_, 0, v_val_4086_);
v___x_4088_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4083_, v___x_4084_, v___x_4087_, v___f_4080_);
return v___x_4088_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed(lean_object* v___f_4106_, lean_object* v_bytes_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v_res_4109_; 
v_res_4109_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1(v___f_4106_, v_bytes_4107_);
lean_dec_ref(v_bytes_4107_);
return v_res_4109_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8(lean_object* v___f_4110_, lean_object* v_x_4111_){
_start:
{
if (lean_obj_tag(v_x_4111_) == 0)
{
lean_object* v_a_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4121_; 
lean_dec_ref(v___f_4110_);
v_a_4113_ = lean_ctor_get(v_x_4111_, 0);
v_isSharedCheck_4121_ = !lean_is_exclusive(v_x_4111_);
if (v_isSharedCheck_4121_ == 0)
{
v___x_4115_ = v_x_4111_;
v_isShared_4116_ = v_isSharedCheck_4121_;
goto v_resetjp_4114_;
}
else
{
lean_inc(v_a_4113_);
lean_dec(v_x_4111_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4121_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
lean_object* v___x_4118_; 
if (v_isShared_4116_ == 0)
{
v___x_4118_ = v___x_4115_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_a_4113_);
v___x_4118_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
lean_object* v___x_4119_; 
v___x_4119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4119_, 0, v___x_4118_);
return v___x_4119_;
}
}
}
else
{
lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4133_; 
v_isSharedCheck_4133_ = !lean_is_exclusive(v_x_4111_);
if (v_isSharedCheck_4133_ == 0)
{
lean_object* v_unused_4134_; 
v_unused_4134_ = lean_ctor_get(v_x_4111_, 0);
lean_dec(v_unused_4134_);
v___x_4123_ = v_x_4111_;
v_isShared_4124_ = v_isSharedCheck_4133_;
goto v_resetjp_4122_;
}
else
{
lean_dec(v_x_4111_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4133_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4125_; uint8_t v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4129_; 
v___x_4125_ = lean_unsigned_to_nat(0u);
v___x_4126_ = 0;
v___x_4127_ = lean_io_promise_new();
if (v_isShared_4124_ == 0)
{
lean_ctor_set(v___x_4123_, 0, v___x_4127_);
v___x_4129_ = v___x_4123_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v___x_4127_);
v___x_4129_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
lean_object* v___x_4130_; lean_object* v___x_4131_; 
v___x_4130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4129_);
v___x_4131_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4125_, v___x_4126_, v___x_4130_, v___f_4110_);
return v___x_4131_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed(lean_object* v___f_4135_, lean_object* v_x_4136_, lean_object* v___y_4137_){
_start:
{
lean_object* v_res_4138_; 
v_res_4138_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8(v___f_4135_, v_x_4136_);
return v_res_4138_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0(lean_object* v_context_4139_, lean_object* v_x_4140_){
_start:
{
lean_object* v_val_4143_; 
if (lean_obj_tag(v_x_4140_) == 0)
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4153_; 
v_a_4145_ = lean_ctor_get(v_x_4140_, 0);
v_isSharedCheck_4153_ = !lean_is_exclusive(v_x_4140_);
if (v_isSharedCheck_4153_ == 0)
{
v___x_4147_ = v_x_4140_;
v_isShared_4148_ = v_isSharedCheck_4153_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v_x_4140_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4153_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
if (v_isShared_4148_ == 0)
{
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
lean_object* v___x_4151_; 
v___x_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4150_);
return v___x_4151_;
}
}
}
else
{
lean_object* v_a_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4167_; 
v_a_4154_ = lean_ctor_get(v_x_4140_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v_x_4140_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4156_ = v_x_4140_;
v_isShared_4157_ = v_isSharedCheck_4167_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_a_4154_);
lean_dec(v_x_4140_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4167_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v___x_4158_; 
v___x_4158_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_4139_, v_a_4154_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; lean_object* v___x_4161_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref_known(v___x_4158_, 1);
if (v_isShared_4157_ == 0)
{
lean_ctor_set(v___x_4156_, 0, v_a_4159_);
v___x_4161_ = v___x_4156_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v_a_4159_);
v___x_4161_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
v_val_4143_ = v___x_4161_;
goto v___jp_4142_;
}
}
else
{
lean_object* v_a_4163_; lean_object* v___x_4165_; 
v_a_4163_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4163_);
lean_dec_ref_known(v___x_4158_, 1);
if (v_isShared_4157_ == 0)
{
lean_ctor_set_tag(v___x_4156_, 0);
lean_ctor_set(v___x_4156_, 0, v_a_4163_);
v___x_4165_ = v___x_4156_;
goto v_reusejp_4164_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_a_4163_);
v___x_4165_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4164_;
}
v_reusejp_4164_:
{
v_val_4143_ = v___x_4165_;
goto v___jp_4142_;
}
}
}
}
v___jp_4142_:
{
lean_object* v___x_4144_; 
v___x_4144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4144_, 0, v_val_4143_);
return v___x_4144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4168_, lean_object* v_x_4169_, lean_object* v___y_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0(v_context_4168_, v_x_4169_);
lean_dec_ref(v_context_4168_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(lean_object* v_context_4172_, uint32_t v_op_4173_, uint64_t v_flags_4174_, lean_object* v_payload_4175_, lean_object* v_failurePrefix_4176_){
_start:
{
lean_object* v___f_4178_; lean_object* v___f_4179_; lean_object* v___f_4180_; lean_object* v___f_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___f_4184_; lean_object* v___f_4185_; lean_object* v___x_4186_; uint8_t v___x_4187_; lean_object* v_val_4189_; lean_object* v___x_4192_; 
v___f_4178_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4178_, 0, v_context_4172_);
v___f_4179_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4179_, 0, v___f_4178_);
v___f_4180_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4180_, 0, v___f_4179_);
lean_inc_ref(v_failurePrefix_4176_);
v___f_4181_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4181_, 0, v_failurePrefix_4176_);
v___x_4182_ = lean_box_uint32(v_op_4173_);
v___x_4183_ = lean_box_uint64(v_flags_4174_);
lean_inc_ref(v___f_4180_);
v___f_4184_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4184_, 0, v_failurePrefix_4176_);
lean_closure_set(v___f_4184_, 1, v___x_4182_);
lean_closure_set(v___f_4184_, 2, v___x_4183_);
lean_closure_set(v___f_4184_, 3, v_payload_4175_);
lean_closure_set(v___f_4184_, 4, v___f_4181_);
lean_closure_set(v___f_4184_, 5, v___f_4180_);
lean_closure_set(v___f_4184_, 6, v___f_4180_);
v___f_4185_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4185_, 0, v___f_4184_);
v___x_4186_ = lean_unsigned_to_nat(0u);
v___x_4187_ = 0;
v___x_4192_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4192_) == 0)
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
v_a_4193_ = lean_ctor_get(v___x_4192_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4192_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_4192_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_4192_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4196_ == 0)
{
lean_ctor_set_tag(v___x_4195_, 1);
v___x_4198_ = v___x_4195_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
v_val_4189_ = v___x_4198_;
goto v___jp_4188_;
}
}
}
else
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4208_; 
v_a_4201_ = lean_ctor_get(v___x_4192_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v___x_4192_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4203_ = v___x_4192_;
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4192_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4206_; 
if (v_isShared_4204_ == 0)
{
lean_ctor_set_tag(v___x_4203_, 0);
v___x_4206_ = v___x_4203_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v_a_4201_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
v_val_4189_ = v___x_4206_;
goto v___jp_4188_;
}
}
}
v___jp_4188_:
{
lean_object* v___x_4190_; lean_object* v___x_4191_; 
v___x_4190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4190_, 0, v_val_4189_);
v___x_4191_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4186_, v___x_4187_, v___x_4190_, v___f_4185_);
return v___x_4191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___boxed(lean_object* v_context_4209_, lean_object* v_op_4210_, lean_object* v_flags_4211_, lean_object* v_payload_4212_, lean_object* v_failurePrefix_4213_, lean_object* v_a_4214_){
_start:
{
uint32_t v_op_boxed_4215_; uint64_t v_flags_boxed_4216_; lean_object* v_res_4217_; 
v_op_boxed_4215_ = lean_unbox_uint32(v_op_4210_);
lean_dec(v_op_4210_);
v_flags_boxed_4216_ = lean_unbox_uint64(v_flags_4211_);
lean_dec_ref(v_flags_4211_);
v_res_4217_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(v_context_4209_, v_op_boxed_4215_, v_flags_boxed_4216_, v_payload_4212_, v_failurePrefix_4213_);
return v_res_4217_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_4218_; uint64_t v___x_4219_; 
v___x_4218_ = 1;
v___x_4219_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_4218_);
return v___x_4219_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(uint8_t v_await_4220_, uint64_t v_extra_4221_){
_start:
{
uint64_t v___x_4222_; uint64_t v___y_4224_; 
v___x_4222_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0);
if (v_await_4220_ == 0)
{
uint64_t v___x_4227_; 
v___x_4227_ = 0ULL;
v___y_4224_ = v___x_4227_;
goto v___jp_4223_;
}
else
{
uint64_t v___x_4228_; 
v___x_4228_ = 2ULL;
v___y_4224_ = v___x_4228_;
goto v___jp_4223_;
}
v___jp_4223_:
{
uint64_t v___x_4225_; uint64_t v___x_4226_; 
v___x_4225_ = lean_uint64_lor(v___x_4222_, v___y_4224_);
v___x_4226_ = lean_uint64_lor(v___x_4225_, v_extra_4221_);
return v___x_4226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___boxed(lean_object* v_await_4229_, lean_object* v_extra_4230_){
_start:
{
uint8_t v_await_boxed_4231_; uint64_t v_extra_boxed_4232_; uint64_t v_res_4233_; lean_object* v_r_4234_; 
v_await_boxed_4231_ = lean_unbox(v_await_4229_);
v_extra_boxed_4232_ = lean_unbox_uint64(v_extra_4230_);
lean_dec_ref(v_extra_4230_);
v_res_4233_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(v_await_boxed_4231_, v_extra_boxed_4232_);
v_r_4234_ = lean_box_uint64(v_res_4233_);
return v_r_4234_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4235_; uint8_t v___x_4236_; uint64_t v___x_4237_; 
v___x_4235_ = 8ULL;
v___x_4236_ = 0;
v___x_4237_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(v___x_4236_, v___x_4235_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(lean_object* v_o_4238_, lean_object* v_name_4239_, lean_object* v_args_4240_){
_start:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; uint32_t v___x_4247_; uint64_t v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; 
v___x_4242_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4243_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4243_, 0, v_o_4238_);
lean_ctor_set(v___x_4243_, 1, v___x_4242_);
lean_inc_ref(v_name_4239_);
v___x_4244_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4244_, 0, v_name_4239_);
v___x_4245_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__1));
v___x_4246_ = lean_string_append(v___x_4245_, v_name_4239_);
lean_dec_ref(v_name_4239_);
v___x_4247_ = 205;
v___x_4248_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0);
v___x_4249_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4249_, 0, v_args_4240_);
v___x_4250_ = lean_unsigned_to_nat(3u);
v___x_4251_ = lean_mk_empty_array_with_capacity(v___x_4250_);
v___x_4252_ = lean_array_push(v___x_4251_, v___x_4243_);
v___x_4253_ = lean_array_push(v___x_4252_, v___x_4244_);
v___x_4254_ = lean_array_push(v___x_4253_, v___x_4249_);
v___x_4255_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4255_, 0, v___x_4254_);
v___x_4256_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(v___x_4246_, v___x_4247_, v___x_4248_, v___x_4255_, v___x_4242_);
return v___x_4256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___boxed(lean_object* v_o_4257_, lean_object* v_name_4258_, lean_object* v_args_4259_, lean_object* v___y_4260_){
_start:
{
lean_object* v_res_4261_; 
v_res_4261_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_o_4257_, v_name_4258_, v_args_4259_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt(lean_object* v_self_4263_, lean_object* v_algorithm_4264_, lean_object* v_key_4265_, lean_object* v_data_4266_){
_start:
{
lean_object* v___f_4268_; lean_object* v___x_4269_; lean_object* v___y_4271_; 
v___f_4268_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4269_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0));
if (lean_obj_tag(v_algorithm_4264_) == 0)
{
lean_object* v_value_4285_; 
v_value_4285_ = lean_ctor_get(v_algorithm_4264_, 0);
lean_inc(v_value_4285_);
lean_dec_ref_known(v_algorithm_4264_, 1);
v___y_4271_ = v_value_4285_;
goto v___jp_4270_;
}
else
{
lean_object* v_value_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4293_; 
v_value_4286_ = lean_ctor_get(v_algorithm_4264_, 0);
v_isSharedCheck_4293_ = !lean_is_exclusive(v_algorithm_4264_);
if (v_isSharedCheck_4293_ == 0)
{
v___x_4288_ = v_algorithm_4264_;
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_value_4286_);
lean_dec(v_algorithm_4264_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___x_4291_; 
if (v_isShared_4289_ == 0)
{
lean_ctor_set_tag(v___x_4288_, 4);
v___x_4291_ = v___x_4288_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v_value_4286_);
v___x_4291_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
v___y_4271_ = v___x_4291_;
goto v___jp_4270_;
}
}
}
v___jp_4270_:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; uint8_t v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; 
v___x_4272_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4273_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4273_, 0, v_key_4265_);
lean_ctor_set(v___x_4273_, 1, v___x_4272_);
v___x_4274_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4274_, 0, v_data_4266_);
v___x_4275_ = lean_unsigned_to_nat(3u);
v___x_4276_ = lean_mk_empty_array_with_capacity(v___x_4275_);
v___x_4277_ = lean_array_push(v___x_4276_, v___y_4271_);
v___x_4278_ = lean_array_push(v___x_4277_, v___x_4273_);
v___x_4279_ = lean_array_push(v___x_4278_, v___x_4274_);
v___x_4280_ = l_Lasm_JS_Web_Support_args(v___x_4279_);
v___x_4281_ = lean_unsigned_to_nat(0u);
v___x_4282_ = 0;
v___x_4283_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4263_, v___x_4269_, v___x_4280_);
v___x_4284_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4281_, v___x_4282_, v___x_4283_, v___f_4268_);
return v___x_4284_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___boxed(lean_object* v_self_4294_, lean_object* v_algorithm_4295_, lean_object* v_key_4296_, lean_object* v_data_4297_, lean_object* v_a_4298_){
_start:
{
lean_object* v_res_4299_; 
v_res_4299_ = l_Lasm_JS_Web_SubtleCrypto_encrypt(v_self_4294_, v_algorithm_4295_, v_key_4296_, v_data_4297_);
return v_res_4299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt(lean_object* v_self_4300_, lean_object* v_algorithm_4301_, lean_object* v_key_4302_, lean_object* v_data_4303_){
_start:
{
lean_object* v___f_4305_; lean_object* v___x_4306_; lean_object* v___y_4308_; 
v___f_4305_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4306_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2));
if (lean_obj_tag(v_algorithm_4301_) == 0)
{
lean_object* v_value_4322_; 
v_value_4322_ = lean_ctor_get(v_algorithm_4301_, 0);
lean_inc(v_value_4322_);
lean_dec_ref_known(v_algorithm_4301_, 1);
v___y_4308_ = v_value_4322_;
goto v___jp_4307_;
}
else
{
lean_object* v_value_4323_; lean_object* v___x_4325_; uint8_t v_isShared_4326_; uint8_t v_isSharedCheck_4330_; 
v_value_4323_ = lean_ctor_get(v_algorithm_4301_, 0);
v_isSharedCheck_4330_ = !lean_is_exclusive(v_algorithm_4301_);
if (v_isSharedCheck_4330_ == 0)
{
v___x_4325_ = v_algorithm_4301_;
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
else
{
lean_inc(v_value_4323_);
lean_dec(v_algorithm_4301_);
v___x_4325_ = lean_box(0);
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
v_resetjp_4324_:
{
lean_object* v___x_4328_; 
if (v_isShared_4326_ == 0)
{
lean_ctor_set_tag(v___x_4325_, 4);
v___x_4328_ = v___x_4325_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v_value_4323_);
v___x_4328_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
v___y_4308_ = v___x_4328_;
goto v___jp_4307_;
}
}
}
v___jp_4307_:
{
lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; uint8_t v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; 
v___x_4309_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4310_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4310_, 0, v_key_4302_);
lean_ctor_set(v___x_4310_, 1, v___x_4309_);
v___x_4311_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4311_, 0, v_data_4303_);
v___x_4312_ = lean_unsigned_to_nat(3u);
v___x_4313_ = lean_mk_empty_array_with_capacity(v___x_4312_);
v___x_4314_ = lean_array_push(v___x_4313_, v___y_4308_);
v___x_4315_ = lean_array_push(v___x_4314_, v___x_4310_);
v___x_4316_ = lean_array_push(v___x_4315_, v___x_4311_);
v___x_4317_ = l_Lasm_JS_Web_Support_args(v___x_4316_);
v___x_4318_ = lean_unsigned_to_nat(0u);
v___x_4319_ = 0;
v___x_4320_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4300_, v___x_4306_, v___x_4317_);
v___x_4321_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4318_, v___x_4319_, v___x_4320_, v___f_4305_);
return v___x_4321_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt___boxed(lean_object* v_self_4331_, lean_object* v_algorithm_4332_, lean_object* v_key_4333_, lean_object* v_data_4334_, lean_object* v_a_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l_Lasm_JS_Web_SubtleCrypto_decrypt(v_self_4331_, v_algorithm_4332_, v_key_4333_, v_data_4334_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign(lean_object* v_self_4337_, lean_object* v_algorithm_4338_, lean_object* v_key_4339_, lean_object* v_data_4340_){
_start:
{
lean_object* v___f_4342_; lean_object* v___x_4343_; lean_object* v___y_4345_; 
v___f_4342_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4343_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4));
if (lean_obj_tag(v_algorithm_4338_) == 0)
{
lean_object* v_value_4359_; 
v_value_4359_ = lean_ctor_get(v_algorithm_4338_, 0);
lean_inc(v_value_4359_);
lean_dec_ref_known(v_algorithm_4338_, 1);
v___y_4345_ = v_value_4359_;
goto v___jp_4344_;
}
else
{
lean_object* v_value_4360_; lean_object* v___x_4362_; uint8_t v_isShared_4363_; uint8_t v_isSharedCheck_4367_; 
v_value_4360_ = lean_ctor_get(v_algorithm_4338_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v_algorithm_4338_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4362_ = v_algorithm_4338_;
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
else
{
lean_inc(v_value_4360_);
lean_dec(v_algorithm_4338_);
v___x_4362_ = lean_box(0);
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
v_resetjp_4361_:
{
lean_object* v___x_4365_; 
if (v_isShared_4363_ == 0)
{
lean_ctor_set_tag(v___x_4362_, 4);
v___x_4365_ = v___x_4362_;
goto v_reusejp_4364_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v_value_4360_);
v___x_4365_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4364_;
}
v_reusejp_4364_:
{
v___y_4345_ = v___x_4365_;
goto v___jp_4344_;
}
}
}
v___jp_4344_:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; uint8_t v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; 
v___x_4346_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4347_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4347_, 0, v_key_4339_);
lean_ctor_set(v___x_4347_, 1, v___x_4346_);
v___x_4348_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4348_, 0, v_data_4340_);
v___x_4349_ = lean_unsigned_to_nat(3u);
v___x_4350_ = lean_mk_empty_array_with_capacity(v___x_4349_);
v___x_4351_ = lean_array_push(v___x_4350_, v___y_4345_);
v___x_4352_ = lean_array_push(v___x_4351_, v___x_4347_);
v___x_4353_ = lean_array_push(v___x_4352_, v___x_4348_);
v___x_4354_ = l_Lasm_JS_Web_Support_args(v___x_4353_);
v___x_4355_ = lean_unsigned_to_nat(0u);
v___x_4356_ = 0;
v___x_4357_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4337_, v___x_4343_, v___x_4354_);
v___x_4358_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4355_, v___x_4356_, v___x_4357_, v___f_4342_);
return v___x_4358_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign___boxed(lean_object* v_self_4368_, lean_object* v_algorithm_4369_, lean_object* v_key_4370_, lean_object* v_data_4371_, lean_object* v_a_4372_){
_start:
{
lean_object* v_res_4373_; 
v_res_4373_ = l_Lasm_JS_Web_SubtleCrypto_sign(v_self_4368_, v_algorithm_4369_, v_key_4370_, v_data_4371_);
return v_res_4373_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(uint8_t v_await_4374_, uint64_t v_extra_4375_){
_start:
{
uint64_t v___x_4376_; uint64_t v___y_4378_; 
v___x_4376_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
if (v_await_4374_ == 0)
{
uint64_t v___x_4381_; 
v___x_4381_ = 0ULL;
v___y_4378_ = v___x_4381_;
goto v___jp_4377_;
}
else
{
uint64_t v___x_4382_; 
v___x_4382_ = 2ULL;
v___y_4378_ = v___x_4382_;
goto v___jp_4377_;
}
v___jp_4377_:
{
uint64_t v___x_4379_; uint64_t v___x_4380_; 
v___x_4379_ = lean_uint64_lor(v___x_4376_, v___y_4378_);
v___x_4380_ = lean_uint64_lor(v___x_4379_, v_extra_4375_);
return v___x_4380_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___boxed(lean_object* v_await_4383_, lean_object* v_extra_4384_){
_start:
{
uint8_t v_await_boxed_4385_; uint64_t v_extra_boxed_4386_; uint64_t v_res_4387_; lean_object* v_r_4388_; 
v_await_boxed_4385_ = lean_unbox(v_await_4383_);
v_extra_boxed_4386_ = lean_unbox_uint64(v_extra_4384_);
lean_dec_ref(v_extra_4384_);
v_res_4387_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(v_await_boxed_4385_, v_extra_boxed_4386_);
v_r_4388_ = lean_box_uint64(v_res_4387_);
return v_r_4388_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_4389_, uint32_t v_op_4390_, uint64_t v_flags_4391_, lean_object* v_payload_4392_, lean_object* v___f_4393_, lean_object* v___f_4394_, lean_object* v___f_4395_, lean_object* v_x_4396_){
_start:
{
if (lean_obj_tag(v_x_4396_) == 0)
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4406_; 
lean_dec_ref(v___f_4395_);
lean_dec_ref(v___f_4394_);
lean_dec_ref(v___f_4393_);
lean_dec(v_payload_4392_);
v_a_4398_ = lean_ctor_get(v_x_4396_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v_x_4396_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4400_ = v_x_4396_;
v_isShared_4401_ = v_isSharedCheck_4406_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v_x_4396_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4406_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4403_; 
if (v_isShared_4401_ == 0)
{
v___x_4403_ = v___x_4400_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4398_);
v___x_4403_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
lean_object* v___x_4404_; 
v___x_4404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4404_, 0, v___x_4403_);
return v___x_4404_;
}
}
}
else
{
lean_object* v_a_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4453_; 
v_a_4407_ = lean_ctor_get(v_x_4396_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v_x_4396_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4409_ = v_x_4396_;
v_isShared_4410_ = v_isSharedCheck_4453_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_a_4407_);
lean_dec(v_x_4396_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4453_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v___x_4411_; lean_object* v___x_4412_; uint8_t v___x_4413_; 
v___x_4411_ = lean_string_utf8_byte_size(v_failurePrefix_4389_);
v___x_4412_ = lean_unsigned_to_nat(0u);
v___x_4413_ = lean_nat_dec_eq(v___x_4411_, v___x_4412_);
if (v___x_4413_ == 0)
{
lean_object* v___f_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___f_4418_; lean_object* v_val_4420_; lean_object* v___x_4425_; 
lean_dec_ref(v___f_4395_);
lean_inc(v_a_4407_);
v___f_4414_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4414_, 0, v_a_4407_);
v___x_4415_ = lean_box(v___x_4413_);
v___x_4416_ = lean_box_uint32(v_op_4390_);
v___x_4417_ = lean_box_uint64(v_flags_4391_);
lean_inc(v_payload_4392_);
v___f_4418_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4418_, 0, v___x_4412_);
lean_closure_set(v___f_4418_, 1, v___x_4415_);
lean_closure_set(v___f_4418_, 2, v___f_4414_);
lean_closure_set(v___f_4418_, 3, v_a_4407_);
lean_closure_set(v___f_4418_, 4, v___x_4416_);
lean_closure_set(v___f_4418_, 5, v___x_4417_);
lean_closure_set(v___f_4418_, 6, v_payload_4392_);
v___x_4425_ = l_Lasm_JS_Wire_encodeIO(v_payload_4392_);
lean_dec(v_payload_4392_);
if (lean_obj_tag(v___x_4425_) == 0)
{
lean_object* v_a_4426_; lean_object* v___x_4428_; 
v_a_4426_ = lean_ctor_get(v___x_4425_, 0);
lean_inc(v_a_4426_);
lean_dec_ref_known(v___x_4425_, 1);
if (v_isShared_4410_ == 0)
{
lean_ctor_set(v___x_4409_, 0, v_a_4426_);
v___x_4428_ = v___x_4409_;
goto v_reusejp_4427_;
}
else
{
lean_object* v_reuseFailAlloc_4429_; 
v_reuseFailAlloc_4429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4429_, 0, v_a_4426_);
v___x_4428_ = v_reuseFailAlloc_4429_;
goto v_reusejp_4427_;
}
v_reusejp_4427_:
{
v_val_4420_ = v___x_4428_;
goto v___jp_4419_;
}
}
else
{
lean_object* v_a_4430_; lean_object* v___x_4432_; 
v_a_4430_ = lean_ctor_get(v___x_4425_, 0);
lean_inc(v_a_4430_);
lean_dec_ref_known(v___x_4425_, 1);
if (v_isShared_4410_ == 0)
{
lean_ctor_set_tag(v___x_4409_, 0);
lean_ctor_set(v___x_4409_, 0, v_a_4430_);
v___x_4432_ = v___x_4409_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v_a_4430_);
v___x_4432_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
v_val_4420_ = v___x_4432_;
goto v___jp_4419_;
}
}
v___jp_4419_:
{
lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; 
v___x_4421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4421_, 0, v_val_4420_);
v___x_4422_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4412_, v___x_4413_, v___x_4421_, v___f_4418_);
v___x_4423_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4412_, v___x_4413_, v___x_4422_, v___f_4393_);
v___x_4424_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4412_, v___x_4413_, v___x_4423_, v___f_4394_);
return v___x_4424_;
}
}
else
{
lean_object* v___f_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___f_4437_; uint8_t v___x_4438_; lean_object* v_val_4440_; lean_object* v___x_4444_; 
lean_dec_ref(v___f_4394_);
lean_dec_ref(v___f_4393_);
lean_inc(v_a_4407_);
v___f_4434_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4434_, 0, v_a_4407_);
v___x_4435_ = lean_box_uint32(v_op_4390_);
v___x_4436_ = lean_box_uint64(v_flags_4391_);
lean_inc(v_payload_4392_);
v___f_4437_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4437_, 0, v___f_4434_);
lean_closure_set(v___f_4437_, 1, v_a_4407_);
lean_closure_set(v___f_4437_, 2, v___x_4435_);
lean_closure_set(v___f_4437_, 3, v___x_4436_);
lean_closure_set(v___f_4437_, 4, v_payload_4392_);
v___x_4438_ = 0;
v___x_4444_ = l_Lasm_JS_Wire_encodeIO(v_payload_4392_);
lean_dec(v_payload_4392_);
if (lean_obj_tag(v___x_4444_) == 0)
{
lean_object* v_a_4445_; lean_object* v___x_4447_; 
v_a_4445_ = lean_ctor_get(v___x_4444_, 0);
lean_inc(v_a_4445_);
lean_dec_ref_known(v___x_4444_, 1);
if (v_isShared_4410_ == 0)
{
lean_ctor_set(v___x_4409_, 0, v_a_4445_);
v___x_4447_ = v___x_4409_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4448_; 
v_reuseFailAlloc_4448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4448_, 0, v_a_4445_);
v___x_4447_ = v_reuseFailAlloc_4448_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
v_val_4440_ = v___x_4447_;
goto v___jp_4439_;
}
}
else
{
lean_object* v_a_4449_; lean_object* v___x_4451_; 
v_a_4449_ = lean_ctor_get(v___x_4444_, 0);
lean_inc(v_a_4449_);
lean_dec_ref_known(v___x_4444_, 1);
if (v_isShared_4410_ == 0)
{
lean_ctor_set_tag(v___x_4409_, 0);
lean_ctor_set(v___x_4409_, 0, v_a_4449_);
v___x_4451_ = v___x_4409_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_a_4449_);
v___x_4451_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
v_val_4440_ = v___x_4451_;
goto v___jp_4439_;
}
}
v___jp_4439_:
{
lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
v___x_4441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4441_, 0, v_val_4440_);
v___x_4442_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4412_, v___x_4438_, v___x_4441_, v___f_4437_);
v___x_4443_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4412_, v___x_4438_, v___x_4442_, v___f_4395_);
return v___x_4443_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_4454_, lean_object* v_op_4455_, lean_object* v_flags_4456_, lean_object* v_payload_4457_, lean_object* v___f_4458_, lean_object* v___f_4459_, lean_object* v___f_4460_, lean_object* v_x_4461_, lean_object* v___y_4462_){
_start:
{
uint32_t v_op_boxed_4463_; uint64_t v_flags_boxed_4464_; lean_object* v_res_4465_; 
v_op_boxed_4463_ = lean_unbox_uint32(v_op_4455_);
lean_dec(v_op_4455_);
v_flags_boxed_4464_ = lean_unbox_uint64(v_flags_4456_);
lean_dec_ref(v_flags_4456_);
v_res_4465_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9(v_failurePrefix_4454_, v_op_boxed_4463_, v_flags_boxed_4464_, v_payload_4457_, v___f_4458_, v___f_4459_, v___f_4460_, v_x_4461_);
lean_dec_ref(v_failurePrefix_4454_);
return v_res_4465_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2(lean_object* v___f_4466_, lean_object* v_x_4467_){
_start:
{
if (lean_obj_tag(v_x_4467_) == 0)
{
lean_object* v_a_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4477_; 
lean_dec_ref(v___f_4466_);
v_a_4469_ = lean_ctor_get(v_x_4467_, 0);
v_isSharedCheck_4477_ = !lean_is_exclusive(v_x_4467_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4471_ = v_x_4467_;
v_isShared_4472_ = v_isSharedCheck_4477_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_a_4469_);
lean_dec(v_x_4467_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4477_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4474_; 
if (v_isShared_4472_ == 0)
{
v___x_4474_ = v___x_4471_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v_a_4469_);
v___x_4474_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
lean_object* v___x_4475_; 
v___x_4475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4475_, 0, v___x_4474_);
return v___x_4475_;
}
}
}
else
{
lean_object* v_a_4478_; lean_object* v___x_4479_; 
v_a_4478_ = lean_ctor_get(v_x_4467_, 0);
lean_inc(v_a_4478_);
lean_dec_ref_known(v_x_4467_, 1);
v___x_4479_ = lean_apply_2(v___f_4466_, v_a_4478_, lean_box(0));
return v___x_4479_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2___boxed(lean_object* v___f_4480_, lean_object* v_x_4481_, lean_object* v___y_4482_){
_start:
{
lean_object* v_res_4483_; 
v_res_4483_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2(v___f_4480_, v_x_4481_);
return v_res_4483_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1(lean_object* v___f_4484_, lean_object* v_bytes_4485_){
_start:
{
lean_object* v___x_4487_; uint8_t v___x_4488_; lean_object* v_val_4490_; lean_object* v___x_4493_; 
v___x_4487_ = lean_unsigned_to_nat(0u);
v___x_4488_ = 0;
v___x_4493_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4485_);
if (lean_obj_tag(v___x_4493_) == 0)
{
lean_object* v_a_4494_; lean_object* v___x_4496_; uint8_t v_isShared_4497_; uint8_t v_isSharedCheck_4501_; 
v_a_4494_ = lean_ctor_get(v___x_4493_, 0);
v_isSharedCheck_4501_ = !lean_is_exclusive(v___x_4493_);
if (v_isSharedCheck_4501_ == 0)
{
v___x_4496_ = v___x_4493_;
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
else
{
lean_inc(v_a_4494_);
lean_dec(v___x_4493_);
v___x_4496_ = lean_box(0);
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
v_resetjp_4495_:
{
lean_object* v___x_4499_; 
if (v_isShared_4497_ == 0)
{
lean_ctor_set_tag(v___x_4496_, 1);
v___x_4499_ = v___x_4496_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v_a_4494_);
v___x_4499_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
v_val_4490_ = v___x_4499_;
goto v___jp_4489_;
}
}
}
else
{
lean_object* v_a_4502_; lean_object* v___x_4504_; uint8_t v_isShared_4505_; uint8_t v_isSharedCheck_4509_; 
v_a_4502_ = lean_ctor_get(v___x_4493_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4493_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4504_ = v___x_4493_;
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
else
{
lean_inc(v_a_4502_);
lean_dec(v___x_4493_);
v___x_4504_ = lean_box(0);
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
v_resetjp_4503_:
{
lean_object* v___x_4507_; 
if (v_isShared_4505_ == 0)
{
lean_ctor_set_tag(v___x_4504_, 0);
v___x_4507_ = v___x_4504_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4502_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
v_val_4490_ = v___x_4507_;
goto v___jp_4489_;
}
}
}
v___jp_4489_:
{
lean_object* v___x_4491_; lean_object* v___x_4492_; 
v___x_4491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4491_, 0, v_val_4490_);
v___x_4492_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4487_, v___x_4488_, v___x_4491_, v___f_4484_);
return v___x_4492_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1___boxed(lean_object* v___f_4510_, lean_object* v_bytes_4511_, lean_object* v___y_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1(v___f_4510_, v_bytes_4511_);
lean_dec_ref(v_bytes_4511_);
return v_res_4513_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3(lean_object* v___f_4514_, lean_object* v_x_4515_){
_start:
{
if (lean_obj_tag(v_x_4515_) == 0)
{
lean_object* v_a_4517_; lean_object* v___x_4519_; uint8_t v_isShared_4520_; uint8_t v_isSharedCheck_4525_; 
lean_dec_ref(v___f_4514_);
v_a_4517_ = lean_ctor_get(v_x_4515_, 0);
v_isSharedCheck_4525_ = !lean_is_exclusive(v_x_4515_);
if (v_isSharedCheck_4525_ == 0)
{
v___x_4519_ = v_x_4515_;
v_isShared_4520_ = v_isSharedCheck_4525_;
goto v_resetjp_4518_;
}
else
{
lean_inc(v_a_4517_);
lean_dec(v_x_4515_);
v___x_4519_ = lean_box(0);
v_isShared_4520_ = v_isSharedCheck_4525_;
goto v_resetjp_4518_;
}
v_resetjp_4518_:
{
lean_object* v___x_4522_; 
if (v_isShared_4520_ == 0)
{
v___x_4522_ = v___x_4519_;
goto v_reusejp_4521_;
}
else
{
lean_object* v_reuseFailAlloc_4524_; 
v_reuseFailAlloc_4524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4524_, 0, v_a_4517_);
v___x_4522_ = v_reuseFailAlloc_4524_;
goto v_reusejp_4521_;
}
v_reusejp_4521_:
{
lean_object* v___x_4523_; 
v___x_4523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4522_);
return v___x_4523_;
}
}
}
else
{
lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4537_; 
v_isSharedCheck_4537_ = !lean_is_exclusive(v_x_4515_);
if (v_isSharedCheck_4537_ == 0)
{
lean_object* v_unused_4538_; 
v_unused_4538_ = lean_ctor_get(v_x_4515_, 0);
lean_dec(v_unused_4538_);
v___x_4527_ = v_x_4515_;
v_isShared_4528_ = v_isSharedCheck_4537_;
goto v_resetjp_4526_;
}
else
{
lean_dec(v_x_4515_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4537_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4529_; uint8_t v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4533_; 
v___x_4529_ = lean_unsigned_to_nat(0u);
v___x_4530_ = 0;
v___x_4531_ = lean_io_promise_new();
if (v_isShared_4528_ == 0)
{
lean_ctor_set(v___x_4527_, 0, v___x_4531_);
v___x_4533_ = v___x_4527_;
goto v_reusejp_4532_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v___x_4531_);
v___x_4533_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4532_;
}
v_reusejp_4532_:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; 
v___x_4534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4533_);
v___x_4535_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4529_, v___x_4530_, v___x_4534_, v___f_4514_);
return v___x_4535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3___boxed(lean_object* v___f_4539_, lean_object* v_x_4540_, lean_object* v___y_4541_){
_start:
{
lean_object* v_res_4542_; 
v_res_4542_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3(v___f_4539_, v_x_4540_);
return v_res_4542_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0(lean_object* v_context_4543_, lean_object* v_x_4544_){
_start:
{
lean_object* v_val_4547_; 
if (lean_obj_tag(v_x_4544_) == 0)
{
lean_object* v_a_4549_; lean_object* v___x_4551_; uint8_t v_isShared_4552_; uint8_t v_isSharedCheck_4557_; 
v_a_4549_ = lean_ctor_get(v_x_4544_, 0);
v_isSharedCheck_4557_ = !lean_is_exclusive(v_x_4544_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4551_ = v_x_4544_;
v_isShared_4552_ = v_isSharedCheck_4557_;
goto v_resetjp_4550_;
}
else
{
lean_inc(v_a_4549_);
lean_dec(v_x_4544_);
v___x_4551_ = lean_box(0);
v_isShared_4552_ = v_isSharedCheck_4557_;
goto v_resetjp_4550_;
}
v_resetjp_4550_:
{
lean_object* v___x_4554_; 
if (v_isShared_4552_ == 0)
{
v___x_4554_ = v___x_4551_;
goto v_reusejp_4553_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v_a_4549_);
v___x_4554_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4553_;
}
v_reusejp_4553_:
{
lean_object* v___x_4555_; 
v___x_4555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4555_, 0, v___x_4554_);
return v___x_4555_;
}
}
}
else
{
lean_object* v_a_4558_; lean_object* v___x_4560_; uint8_t v_isShared_4561_; uint8_t v_isSharedCheck_4571_; 
v_a_4558_ = lean_ctor_get(v_x_4544_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v_x_4544_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4560_ = v_x_4544_;
v_isShared_4561_ = v_isSharedCheck_4571_;
goto v_resetjp_4559_;
}
else
{
lean_inc(v_a_4558_);
lean_dec(v_x_4544_);
v___x_4560_ = lean_box(0);
v_isShared_4561_ = v_isSharedCheck_4571_;
goto v_resetjp_4559_;
}
v_resetjp_4559_:
{
lean_object* v___x_4562_; 
v___x_4562_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(v_context_4543_, v_a_4558_);
if (lean_obj_tag(v___x_4562_) == 0)
{
lean_object* v_a_4563_; lean_object* v___x_4565_; 
v_a_4563_ = lean_ctor_get(v___x_4562_, 0);
lean_inc(v_a_4563_);
lean_dec_ref_known(v___x_4562_, 1);
if (v_isShared_4561_ == 0)
{
lean_ctor_set(v___x_4560_, 0, v_a_4563_);
v___x_4565_ = v___x_4560_;
goto v_reusejp_4564_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v_a_4563_);
v___x_4565_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4564_;
}
v_reusejp_4564_:
{
v_val_4547_ = v___x_4565_;
goto v___jp_4546_;
}
}
else
{
lean_object* v_a_4567_; lean_object* v___x_4569_; 
v_a_4567_ = lean_ctor_get(v___x_4562_, 0);
lean_inc(v_a_4567_);
lean_dec_ref_known(v___x_4562_, 1);
if (v_isShared_4561_ == 0)
{
lean_ctor_set_tag(v___x_4560_, 0);
lean_ctor_set(v___x_4560_, 0, v_a_4567_);
v___x_4569_ = v___x_4560_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v_a_4567_);
v___x_4569_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
v_val_4547_ = v___x_4569_;
goto v___jp_4546_;
}
}
}
}
v___jp_4546_:
{
lean_object* v___x_4548_; 
v___x_4548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4548_, 0, v_val_4547_);
return v___x_4548_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4572_, lean_object* v_x_4573_, lean_object* v___y_4574_){
_start:
{
lean_object* v_res_4575_; 
v_res_4575_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0(v_context_4572_, v_x_4573_);
lean_dec_ref(v_context_4572_);
return v_res_4575_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(lean_object* v_context_4576_, uint32_t v_op_4577_, uint64_t v_flags_4578_, lean_object* v_payload_4579_, lean_object* v_failurePrefix_4580_){
_start:
{
lean_object* v___f_4582_; lean_object* v___f_4583_; lean_object* v___f_4584_; lean_object* v___f_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___f_4588_; lean_object* v___f_4589_; lean_object* v___x_4590_; uint8_t v___x_4591_; lean_object* v_val_4593_; lean_object* v___x_4596_; 
v___f_4582_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4582_, 0, v_context_4576_);
v___f_4583_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4583_, 0, v___f_4582_);
v___f_4584_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4584_, 0, v___f_4583_);
lean_inc_ref(v_failurePrefix_4580_);
v___f_4585_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4585_, 0, v_failurePrefix_4580_);
v___x_4586_ = lean_box_uint32(v_op_4577_);
v___x_4587_ = lean_box_uint64(v_flags_4578_);
lean_inc_ref(v___f_4584_);
v___f_4588_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4588_, 0, v_failurePrefix_4580_);
lean_closure_set(v___f_4588_, 1, v___x_4586_);
lean_closure_set(v___f_4588_, 2, v___x_4587_);
lean_closure_set(v___f_4588_, 3, v_payload_4579_);
lean_closure_set(v___f_4588_, 4, v___f_4585_);
lean_closure_set(v___f_4588_, 5, v___f_4584_);
lean_closure_set(v___f_4588_, 6, v___f_4584_);
v___f_4589_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4589_, 0, v___f_4588_);
v___x_4590_ = lean_unsigned_to_nat(0u);
v___x_4591_ = 0;
v___x_4596_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4596_) == 0)
{
lean_object* v_a_4597_; lean_object* v___x_4599_; uint8_t v_isShared_4600_; uint8_t v_isSharedCheck_4604_; 
v_a_4597_ = lean_ctor_get(v___x_4596_, 0);
v_isSharedCheck_4604_ = !lean_is_exclusive(v___x_4596_);
if (v_isSharedCheck_4604_ == 0)
{
v___x_4599_ = v___x_4596_;
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
else
{
lean_inc(v_a_4597_);
lean_dec(v___x_4596_);
v___x_4599_ = lean_box(0);
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
v_resetjp_4598_:
{
lean_object* v___x_4602_; 
if (v_isShared_4600_ == 0)
{
lean_ctor_set_tag(v___x_4599_, 1);
v___x_4602_ = v___x_4599_;
goto v_reusejp_4601_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v_a_4597_);
v___x_4602_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4601_;
}
v_reusejp_4601_:
{
v_val_4593_ = v___x_4602_;
goto v___jp_4592_;
}
}
}
else
{
lean_object* v_a_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4612_; 
v_a_4605_ = lean_ctor_get(v___x_4596_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4596_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4607_ = v___x_4596_;
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_a_4605_);
lean_dec(v___x_4596_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
v_resetjp_4606_:
{
lean_object* v___x_4610_; 
if (v_isShared_4608_ == 0)
{
lean_ctor_set_tag(v___x_4607_, 0);
v___x_4610_ = v___x_4607_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v_a_4605_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
v_val_4593_ = v___x_4610_;
goto v___jp_4592_;
}
}
}
v___jp_4592_:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; 
v___x_4594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4594_, 0, v_val_4593_);
v___x_4595_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4590_, v___x_4591_, v___x_4594_, v___f_4589_);
return v___x_4595_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___boxed(lean_object* v_context_4613_, lean_object* v_op_4614_, lean_object* v_flags_4615_, lean_object* v_payload_4616_, lean_object* v_failurePrefix_4617_, lean_object* v_a_4618_){
_start:
{
uint32_t v_op_boxed_4619_; uint64_t v_flags_boxed_4620_; lean_object* v_res_4621_; 
v_op_boxed_4619_ = lean_unbox_uint32(v_op_4614_);
lean_dec(v_op_4614_);
v_flags_boxed_4620_ = lean_unbox_uint64(v_flags_4615_);
lean_dec_ref(v_flags_4615_);
v_res_4621_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(v_context_4613_, v_op_boxed_4619_, v_flags_boxed_4620_, v_payload_4616_, v_failurePrefix_4617_);
return v_res_4621_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4622_; uint8_t v___x_4623_; uint64_t v___x_4624_; 
v___x_4622_ = 8ULL;
v___x_4623_ = 0;
v___x_4624_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(v___x_4623_, v___x_4622_);
return v___x_4624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(lean_object* v_o_4625_, lean_object* v_name_4626_, lean_object* v_args_4627_){
_start:
{
lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; uint32_t v___x_4634_; uint64_t v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; 
v___x_4629_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4630_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4630_, 0, v_o_4625_);
lean_ctor_set(v___x_4630_, 1, v___x_4629_);
lean_inc_ref(v_name_4626_);
v___x_4631_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4631_, 0, v_name_4626_);
v___x_4632_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__1));
v___x_4633_ = lean_string_append(v___x_4632_, v_name_4626_);
lean_dec_ref(v_name_4626_);
v___x_4634_ = 205;
v___x_4635_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0);
v___x_4636_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4636_, 0, v_args_4627_);
v___x_4637_ = lean_unsigned_to_nat(3u);
v___x_4638_ = lean_mk_empty_array_with_capacity(v___x_4637_);
v___x_4639_ = lean_array_push(v___x_4638_, v___x_4630_);
v___x_4640_ = lean_array_push(v___x_4639_, v___x_4631_);
v___x_4641_ = lean_array_push(v___x_4640_, v___x_4636_);
v___x_4642_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4642_, 0, v___x_4641_);
v___x_4643_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(v___x_4633_, v___x_4634_, v___x_4635_, v___x_4642_, v___x_4629_);
return v___x_4643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___boxed(lean_object* v_o_4644_, lean_object* v_name_4645_, lean_object* v_args_4646_, lean_object* v___y_4647_){
_start:
{
lean_object* v_res_4648_; 
v_res_4648_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(v_o_4644_, v_name_4645_, v_args_4646_);
return v_res_4648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify(lean_object* v_self_4649_, lean_object* v_algorithm_4650_, lean_object* v_key_4651_, lean_object* v_signature_4652_, lean_object* v_data_4653_){
_start:
{
lean_object* v___x_4655_; lean_object* v___y_4657_; 
v___x_4655_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6));
if (lean_obj_tag(v_algorithm_4650_) == 0)
{
lean_object* v_value_4670_; 
v_value_4670_ = lean_ctor_get(v_algorithm_4650_, 0);
lean_inc(v_value_4670_);
lean_dec_ref_known(v_algorithm_4650_, 1);
v___y_4657_ = v_value_4670_;
goto v___jp_4656_;
}
else
{
lean_object* v_value_4671_; lean_object* v___x_4673_; uint8_t v_isShared_4674_; uint8_t v_isSharedCheck_4678_; 
v_value_4671_ = lean_ctor_get(v_algorithm_4650_, 0);
v_isSharedCheck_4678_ = !lean_is_exclusive(v_algorithm_4650_);
if (v_isSharedCheck_4678_ == 0)
{
v___x_4673_ = v_algorithm_4650_;
v_isShared_4674_ = v_isSharedCheck_4678_;
goto v_resetjp_4672_;
}
else
{
lean_inc(v_value_4671_);
lean_dec(v_algorithm_4650_);
v___x_4673_ = lean_box(0);
v_isShared_4674_ = v_isSharedCheck_4678_;
goto v_resetjp_4672_;
}
v_resetjp_4672_:
{
lean_object* v___x_4676_; 
if (v_isShared_4674_ == 0)
{
lean_ctor_set_tag(v___x_4673_, 4);
v___x_4676_ = v___x_4673_;
goto v_reusejp_4675_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v_value_4671_);
v___x_4676_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4675_;
}
v_reusejp_4675_:
{
v___y_4657_ = v___x_4676_;
goto v___jp_4656_;
}
}
}
v___jp_4656_:
{
lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; 
v___x_4658_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4659_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4659_, 0, v_key_4651_);
lean_ctor_set(v___x_4659_, 1, v___x_4658_);
v___x_4660_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4660_, 0, v_signature_4652_);
v___x_4661_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4661_, 0, v_data_4653_);
v___x_4662_ = lean_unsigned_to_nat(4u);
v___x_4663_ = lean_mk_empty_array_with_capacity(v___x_4662_);
v___x_4664_ = lean_array_push(v___x_4663_, v___y_4657_);
v___x_4665_ = lean_array_push(v___x_4664_, v___x_4659_);
v___x_4666_ = lean_array_push(v___x_4665_, v___x_4660_);
v___x_4667_ = lean_array_push(v___x_4666_, v___x_4661_);
v___x_4668_ = l_Lasm_JS_Web_Support_args(v___x_4667_);
v___x_4669_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(v_self_4649_, v___x_4655_, v___x_4668_);
return v___x_4669_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify___boxed(lean_object* v_self_4679_, lean_object* v_algorithm_4680_, lean_object* v_key_4681_, lean_object* v_signature_4682_, lean_object* v_data_4683_, lean_object* v_a_4684_){
_start:
{
lean_object* v_res_4685_; 
v_res_4685_ = l_Lasm_JS_Web_SubtleCrypto_verify(v_self_4679_, v_algorithm_4680_, v_key_4681_, v_signature_4682_, v_data_4683_);
return v_res_4685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest(lean_object* v_self_4687_, lean_object* v_algorithm_4688_, lean_object* v_data_4689_){
_start:
{
lean_object* v___f_4691_; lean_object* v___x_4692_; lean_object* v___y_4694_; 
v___f_4691_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4692_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_digest___closed__0));
if (lean_obj_tag(v_algorithm_4688_) == 0)
{
lean_object* v_value_4705_; 
v_value_4705_ = lean_ctor_get(v_algorithm_4688_, 0);
lean_inc(v_value_4705_);
lean_dec_ref_known(v_algorithm_4688_, 1);
v___y_4694_ = v_value_4705_;
goto v___jp_4693_;
}
else
{
lean_object* v_value_4706_; lean_object* v___x_4708_; uint8_t v_isShared_4709_; uint8_t v_isSharedCheck_4713_; 
v_value_4706_ = lean_ctor_get(v_algorithm_4688_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v_algorithm_4688_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4708_ = v_algorithm_4688_;
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
else
{
lean_inc(v_value_4706_);
lean_dec(v_algorithm_4688_);
v___x_4708_ = lean_box(0);
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
v_resetjp_4707_:
{
lean_object* v___x_4711_; 
if (v_isShared_4709_ == 0)
{
lean_ctor_set_tag(v___x_4708_, 4);
v___x_4711_ = v___x_4708_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_value_4706_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
v___y_4694_ = v___x_4711_;
goto v___jp_4693_;
}
}
}
v___jp_4693_:
{
lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; uint8_t v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; 
v___x_4695_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4695_, 0, v_data_4689_);
v___x_4696_ = lean_unsigned_to_nat(2u);
v___x_4697_ = lean_mk_empty_array_with_capacity(v___x_4696_);
v___x_4698_ = lean_array_push(v___x_4697_, v___y_4694_);
v___x_4699_ = lean_array_push(v___x_4698_, v___x_4695_);
v___x_4700_ = l_Lasm_JS_Web_Support_args(v___x_4699_);
v___x_4701_ = lean_unsigned_to_nat(0u);
v___x_4702_ = 0;
v___x_4703_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4687_, v___x_4692_, v___x_4700_);
v___x_4704_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4701_, v___x_4702_, v___x_4703_, v___f_4691_);
return v___x_4704_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest___boxed(lean_object* v_self_4714_, lean_object* v_algorithm_4715_, lean_object* v_data_4716_, lean_object* v_a_4717_){
_start:
{
lean_object* v_res_4718_; 
v_res_4718_ = l_Lasm_JS_Web_SubtleCrypto_digest(v_self_4714_, v_algorithm_4715_, v_data_4716_);
return v_res_4718_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(uint8_t v_await_4719_, uint64_t v_extra_4720_){
_start:
{
uint64_t v___x_4721_; uint64_t v___y_4723_; 
v___x_4721_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
if (v_await_4719_ == 0)
{
uint64_t v___x_4726_; 
v___x_4726_ = 0ULL;
v___y_4723_ = v___x_4726_;
goto v___jp_4722_;
}
else
{
uint64_t v___x_4727_; 
v___x_4727_ = 2ULL;
v___y_4723_ = v___x_4727_;
goto v___jp_4722_;
}
v___jp_4722_:
{
uint64_t v___x_4724_; uint64_t v___x_4725_; 
v___x_4724_ = lean_uint64_lor(v___x_4721_, v___y_4723_);
v___x_4725_ = lean_uint64_lor(v___x_4724_, v_extra_4720_);
return v___x_4725_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1___boxed(lean_object* v_await_4728_, lean_object* v_extra_4729_){
_start:
{
uint8_t v_await_boxed_4730_; uint64_t v_extra_boxed_4731_; uint64_t v_res_4732_; lean_object* v_r_4733_; 
v_await_boxed_4730_ = lean_unbox(v_await_4728_);
v_extra_boxed_4731_ = lean_unbox_uint64(v_extra_4729_);
lean_dec_ref(v_extra_4729_);
v_res_4732_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(v_await_boxed_4730_, v_extra_boxed_4731_);
v_r_4733_ = lean_box_uint64(v_res_4732_);
return v_r_4733_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1(lean_object* v___f_4734_, lean_object* v_bytes_4735_){
_start:
{
lean_object* v___x_4737_; uint8_t v___x_4738_; lean_object* v_val_4740_; lean_object* v___x_4743_; 
v___x_4737_ = lean_unsigned_to_nat(0u);
v___x_4738_ = 0;
v___x_4743_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4735_);
if (lean_obj_tag(v___x_4743_) == 0)
{
lean_object* v_a_4744_; lean_object* v___x_4746_; uint8_t v_isShared_4747_; uint8_t v_isSharedCheck_4751_; 
v_a_4744_ = lean_ctor_get(v___x_4743_, 0);
v_isSharedCheck_4751_ = !lean_is_exclusive(v___x_4743_);
if (v_isSharedCheck_4751_ == 0)
{
v___x_4746_ = v___x_4743_;
v_isShared_4747_ = v_isSharedCheck_4751_;
goto v_resetjp_4745_;
}
else
{
lean_inc(v_a_4744_);
lean_dec(v___x_4743_);
v___x_4746_ = lean_box(0);
v_isShared_4747_ = v_isSharedCheck_4751_;
goto v_resetjp_4745_;
}
v_resetjp_4745_:
{
lean_object* v___x_4749_; 
if (v_isShared_4747_ == 0)
{
lean_ctor_set_tag(v___x_4746_, 1);
v___x_4749_ = v___x_4746_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v_a_4744_);
v___x_4749_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
v_val_4740_ = v___x_4749_;
goto v___jp_4739_;
}
}
}
else
{
lean_object* v_a_4752_; lean_object* v___x_4754_; uint8_t v_isShared_4755_; uint8_t v_isSharedCheck_4759_; 
v_a_4752_ = lean_ctor_get(v___x_4743_, 0);
v_isSharedCheck_4759_ = !lean_is_exclusive(v___x_4743_);
if (v_isSharedCheck_4759_ == 0)
{
v___x_4754_ = v___x_4743_;
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
else
{
lean_inc(v_a_4752_);
lean_dec(v___x_4743_);
v___x_4754_ = lean_box(0);
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
v_resetjp_4753_:
{
lean_object* v___x_4757_; 
if (v_isShared_4755_ == 0)
{
lean_ctor_set_tag(v___x_4754_, 0);
v___x_4757_ = v___x_4754_;
goto v_reusejp_4756_;
}
else
{
lean_object* v_reuseFailAlloc_4758_; 
v_reuseFailAlloc_4758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4758_, 0, v_a_4752_);
v___x_4757_ = v_reuseFailAlloc_4758_;
goto v_reusejp_4756_;
}
v_reusejp_4756_:
{
v_val_4740_ = v___x_4757_;
goto v___jp_4739_;
}
}
}
v___jp_4739_:
{
lean_object* v___x_4741_; lean_object* v___x_4742_; 
v___x_4741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4741_, 0, v_val_4740_);
v___x_4742_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4737_, v___x_4738_, v___x_4741_, v___f_4734_);
return v___x_4742_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1___boxed(lean_object* v___f_4760_, lean_object* v_bytes_4761_, lean_object* v___y_4762_){
_start:
{
lean_object* v_res_4763_; 
v_res_4763_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1(v___f_4760_, v_bytes_4761_);
lean_dec_ref(v_bytes_4761_);
return v_res_4763_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2(lean_object* v___f_4764_, lean_object* v_x_4765_){
_start:
{
if (lean_obj_tag(v_x_4765_) == 0)
{
lean_object* v_a_4767_; lean_object* v___x_4769_; uint8_t v_isShared_4770_; uint8_t v_isSharedCheck_4775_; 
lean_dec_ref(v___f_4764_);
v_a_4767_ = lean_ctor_get(v_x_4765_, 0);
v_isSharedCheck_4775_ = !lean_is_exclusive(v_x_4765_);
if (v_isSharedCheck_4775_ == 0)
{
v___x_4769_ = v_x_4765_;
v_isShared_4770_ = v_isSharedCheck_4775_;
goto v_resetjp_4768_;
}
else
{
lean_inc(v_a_4767_);
lean_dec(v_x_4765_);
v___x_4769_ = lean_box(0);
v_isShared_4770_ = v_isSharedCheck_4775_;
goto v_resetjp_4768_;
}
v_resetjp_4768_:
{
lean_object* v___x_4772_; 
if (v_isShared_4770_ == 0)
{
v___x_4772_ = v___x_4769_;
goto v_reusejp_4771_;
}
else
{
lean_object* v_reuseFailAlloc_4774_; 
v_reuseFailAlloc_4774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4774_, 0, v_a_4767_);
v___x_4772_ = v_reuseFailAlloc_4774_;
goto v_reusejp_4771_;
}
v_reusejp_4771_:
{
lean_object* v___x_4773_; 
v___x_4773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4773_, 0, v___x_4772_);
return v___x_4773_;
}
}
}
else
{
lean_object* v_a_4776_; lean_object* v___x_4777_; 
v_a_4776_ = lean_ctor_get(v_x_4765_, 0);
lean_inc(v_a_4776_);
lean_dec_ref_known(v_x_4765_, 1);
v___x_4777_ = lean_apply_2(v___f_4764_, v_a_4776_, lean_box(0));
return v___x_4777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2___boxed(lean_object* v___f_4778_, lean_object* v_x_4779_, lean_object* v___y_4780_){
_start:
{
lean_object* v_res_4781_; 
v_res_4781_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2(v___f_4778_, v_x_4779_);
return v_res_4781_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3(lean_object* v___f_4782_, lean_object* v_x_4783_){
_start:
{
if (lean_obj_tag(v_x_4783_) == 0)
{
lean_object* v_a_4785_; lean_object* v___x_4787_; uint8_t v_isShared_4788_; uint8_t v_isSharedCheck_4793_; 
lean_dec_ref(v___f_4782_);
v_a_4785_ = lean_ctor_get(v_x_4783_, 0);
v_isSharedCheck_4793_ = !lean_is_exclusive(v_x_4783_);
if (v_isSharedCheck_4793_ == 0)
{
v___x_4787_ = v_x_4783_;
v_isShared_4788_ = v_isSharedCheck_4793_;
goto v_resetjp_4786_;
}
else
{
lean_inc(v_a_4785_);
lean_dec(v_x_4783_);
v___x_4787_ = lean_box(0);
v_isShared_4788_ = v_isSharedCheck_4793_;
goto v_resetjp_4786_;
}
v_resetjp_4786_:
{
lean_object* v___x_4790_; 
if (v_isShared_4788_ == 0)
{
v___x_4790_ = v___x_4787_;
goto v_reusejp_4789_;
}
else
{
lean_object* v_reuseFailAlloc_4792_; 
v_reuseFailAlloc_4792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4792_, 0, v_a_4785_);
v___x_4790_ = v_reuseFailAlloc_4792_;
goto v_reusejp_4789_;
}
v_reusejp_4789_:
{
lean_object* v___x_4791_; 
v___x_4791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4791_, 0, v___x_4790_);
return v___x_4791_;
}
}
}
else
{
lean_object* v___x_4795_; uint8_t v_isShared_4796_; uint8_t v_isSharedCheck_4805_; 
v_isSharedCheck_4805_ = !lean_is_exclusive(v_x_4783_);
if (v_isSharedCheck_4805_ == 0)
{
lean_object* v_unused_4806_; 
v_unused_4806_ = lean_ctor_get(v_x_4783_, 0);
lean_dec(v_unused_4806_);
v___x_4795_ = v_x_4783_;
v_isShared_4796_ = v_isSharedCheck_4805_;
goto v_resetjp_4794_;
}
else
{
lean_dec(v_x_4783_);
v___x_4795_ = lean_box(0);
v_isShared_4796_ = v_isSharedCheck_4805_;
goto v_resetjp_4794_;
}
v_resetjp_4794_:
{
lean_object* v___x_4797_; uint8_t v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4801_; 
v___x_4797_ = lean_unsigned_to_nat(0u);
v___x_4798_ = 0;
v___x_4799_ = lean_io_promise_new();
if (v_isShared_4796_ == 0)
{
lean_ctor_set(v___x_4795_, 0, v___x_4799_);
v___x_4801_ = v___x_4795_;
goto v_reusejp_4800_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v___x_4799_);
v___x_4801_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4800_;
}
v_reusejp_4800_:
{
lean_object* v___x_4802_; lean_object* v___x_4803_; 
v___x_4802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4801_);
v___x_4803_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4797_, v___x_4798_, v___x_4802_, v___f_4782_);
return v___x_4803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3___boxed(lean_object* v___f_4807_, lean_object* v_x_4808_, lean_object* v___y_4809_){
_start:
{
lean_object* v_res_4810_; 
v_res_4810_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3(v___f_4807_, v_x_4808_);
return v_res_4810_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_4811_, uint32_t v_op_4812_, uint64_t v_flags_4813_, lean_object* v_payload_4814_, lean_object* v___f_4815_, lean_object* v___f_4816_, lean_object* v___f_4817_, lean_object* v_x_4818_){
_start:
{
if (lean_obj_tag(v_x_4818_) == 0)
{
lean_object* v_a_4820_; lean_object* v___x_4822_; uint8_t v_isShared_4823_; uint8_t v_isSharedCheck_4828_; 
lean_dec_ref(v___f_4817_);
lean_dec_ref(v___f_4816_);
lean_dec_ref(v___f_4815_);
lean_dec(v_payload_4814_);
v_a_4820_ = lean_ctor_get(v_x_4818_, 0);
v_isSharedCheck_4828_ = !lean_is_exclusive(v_x_4818_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4822_ = v_x_4818_;
v_isShared_4823_ = v_isSharedCheck_4828_;
goto v_resetjp_4821_;
}
else
{
lean_inc(v_a_4820_);
lean_dec(v_x_4818_);
v___x_4822_ = lean_box(0);
v_isShared_4823_ = v_isSharedCheck_4828_;
goto v_resetjp_4821_;
}
v_resetjp_4821_:
{
lean_object* v___x_4825_; 
if (v_isShared_4823_ == 0)
{
v___x_4825_ = v___x_4822_;
goto v_reusejp_4824_;
}
else
{
lean_object* v_reuseFailAlloc_4827_; 
v_reuseFailAlloc_4827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4827_, 0, v_a_4820_);
v___x_4825_ = v_reuseFailAlloc_4827_;
goto v_reusejp_4824_;
}
v_reusejp_4824_:
{
lean_object* v___x_4826_; 
v___x_4826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4826_, 0, v___x_4825_);
return v___x_4826_;
}
}
}
else
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4875_; 
v_a_4829_ = lean_ctor_get(v_x_4818_, 0);
v_isSharedCheck_4875_ = !lean_is_exclusive(v_x_4818_);
if (v_isSharedCheck_4875_ == 0)
{
v___x_4831_ = v_x_4818_;
v_isShared_4832_ = v_isSharedCheck_4875_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v_x_4818_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4875_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4833_; lean_object* v___x_4834_; uint8_t v___x_4835_; 
v___x_4833_ = lean_string_utf8_byte_size(v_failurePrefix_4811_);
v___x_4834_ = lean_unsigned_to_nat(0u);
v___x_4835_ = lean_nat_dec_eq(v___x_4833_, v___x_4834_);
if (v___x_4835_ == 0)
{
lean_object* v___f_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___f_4840_; lean_object* v_val_4842_; lean_object* v___x_4847_; 
lean_dec_ref(v___f_4817_);
lean_inc(v_a_4829_);
v___f_4836_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4836_, 0, v_a_4829_);
v___x_4837_ = lean_box(v___x_4835_);
v___x_4838_ = lean_box_uint32(v_op_4812_);
v___x_4839_ = lean_box_uint64(v_flags_4813_);
lean_inc(v_payload_4814_);
v___f_4840_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4840_, 0, v___x_4834_);
lean_closure_set(v___f_4840_, 1, v___x_4837_);
lean_closure_set(v___f_4840_, 2, v___f_4836_);
lean_closure_set(v___f_4840_, 3, v_a_4829_);
lean_closure_set(v___f_4840_, 4, v___x_4838_);
lean_closure_set(v___f_4840_, 5, v___x_4839_);
lean_closure_set(v___f_4840_, 6, v_payload_4814_);
v___x_4847_ = l_Lasm_JS_Wire_encodeIO(v_payload_4814_);
lean_dec(v_payload_4814_);
if (lean_obj_tag(v___x_4847_) == 0)
{
lean_object* v_a_4848_; lean_object* v___x_4850_; 
v_a_4848_ = lean_ctor_get(v___x_4847_, 0);
lean_inc(v_a_4848_);
lean_dec_ref_known(v___x_4847_, 1);
if (v_isShared_4832_ == 0)
{
lean_ctor_set(v___x_4831_, 0, v_a_4848_);
v___x_4850_ = v___x_4831_;
goto v_reusejp_4849_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v_a_4848_);
v___x_4850_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4849_;
}
v_reusejp_4849_:
{
v_val_4842_ = v___x_4850_;
goto v___jp_4841_;
}
}
else
{
lean_object* v_a_4852_; lean_object* v___x_4854_; 
v_a_4852_ = lean_ctor_get(v___x_4847_, 0);
lean_inc(v_a_4852_);
lean_dec_ref_known(v___x_4847_, 1);
if (v_isShared_4832_ == 0)
{
lean_ctor_set_tag(v___x_4831_, 0);
lean_ctor_set(v___x_4831_, 0, v_a_4852_);
v___x_4854_ = v___x_4831_;
goto v_reusejp_4853_;
}
else
{
lean_object* v_reuseFailAlloc_4855_; 
v_reuseFailAlloc_4855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4855_, 0, v_a_4852_);
v___x_4854_ = v_reuseFailAlloc_4855_;
goto v_reusejp_4853_;
}
v_reusejp_4853_:
{
v_val_4842_ = v___x_4854_;
goto v___jp_4841_;
}
}
v___jp_4841_:
{
lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; 
v___x_4843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4843_, 0, v_val_4842_);
v___x_4844_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4834_, v___x_4835_, v___x_4843_, v___f_4840_);
v___x_4845_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4834_, v___x_4835_, v___x_4844_, v___f_4815_);
v___x_4846_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4834_, v___x_4835_, v___x_4845_, v___f_4816_);
return v___x_4846_;
}
}
else
{
lean_object* v___f_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___f_4859_; uint8_t v___x_4860_; lean_object* v_val_4862_; lean_object* v___x_4866_; 
lean_dec_ref(v___f_4816_);
lean_dec_ref(v___f_4815_);
lean_inc(v_a_4829_);
v___f_4856_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4856_, 0, v_a_4829_);
v___x_4857_ = lean_box_uint32(v_op_4812_);
v___x_4858_ = lean_box_uint64(v_flags_4813_);
lean_inc(v_payload_4814_);
v___f_4859_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4859_, 0, v___f_4856_);
lean_closure_set(v___f_4859_, 1, v_a_4829_);
lean_closure_set(v___f_4859_, 2, v___x_4857_);
lean_closure_set(v___f_4859_, 3, v___x_4858_);
lean_closure_set(v___f_4859_, 4, v_payload_4814_);
v___x_4860_ = 0;
v___x_4866_ = l_Lasm_JS_Wire_encodeIO(v_payload_4814_);
lean_dec(v_payload_4814_);
if (lean_obj_tag(v___x_4866_) == 0)
{
lean_object* v_a_4867_; lean_object* v___x_4869_; 
v_a_4867_ = lean_ctor_get(v___x_4866_, 0);
lean_inc(v_a_4867_);
lean_dec_ref_known(v___x_4866_, 1);
if (v_isShared_4832_ == 0)
{
lean_ctor_set(v___x_4831_, 0, v_a_4867_);
v___x_4869_ = v___x_4831_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4867_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
v_val_4862_ = v___x_4869_;
goto v___jp_4861_;
}
}
else
{
lean_object* v_a_4871_; lean_object* v___x_4873_; 
v_a_4871_ = lean_ctor_get(v___x_4866_, 0);
lean_inc(v_a_4871_);
lean_dec_ref_known(v___x_4866_, 1);
if (v_isShared_4832_ == 0)
{
lean_ctor_set_tag(v___x_4831_, 0);
lean_ctor_set(v___x_4831_, 0, v_a_4871_);
v___x_4873_ = v___x_4831_;
goto v_reusejp_4872_;
}
else
{
lean_object* v_reuseFailAlloc_4874_; 
v_reuseFailAlloc_4874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4874_, 0, v_a_4871_);
v___x_4873_ = v_reuseFailAlloc_4874_;
goto v_reusejp_4872_;
}
v_reusejp_4872_:
{
v_val_4862_ = v___x_4873_;
goto v___jp_4861_;
}
}
v___jp_4861_:
{
lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; 
v___x_4863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4863_, 0, v_val_4862_);
v___x_4864_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4834_, v___x_4860_, v___x_4863_, v___f_4859_);
v___x_4865_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4834_, v___x_4860_, v___x_4864_, v___f_4817_);
return v___x_4865_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_4876_, lean_object* v_op_4877_, lean_object* v_flags_4878_, lean_object* v_payload_4879_, lean_object* v___f_4880_, lean_object* v___f_4881_, lean_object* v___f_4882_, lean_object* v_x_4883_, lean_object* v___y_4884_){
_start:
{
uint32_t v_op_boxed_4885_; uint64_t v_flags_boxed_4886_; lean_object* v_res_4887_; 
v_op_boxed_4885_ = lean_unbox_uint32(v_op_4877_);
lean_dec(v_op_4877_);
v_flags_boxed_4886_ = lean_unbox_uint64(v_flags_4878_);
lean_dec_ref(v_flags_4878_);
v_res_4887_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9(v_failurePrefix_4876_, v_op_boxed_4885_, v_flags_boxed_4886_, v_payload_4879_, v___f_4880_, v___f_4881_, v___f_4882_, v_x_4883_);
lean_dec_ref(v_failurePrefix_4876_);
return v_res_4887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_4893_, lean_object* v_key_4894_){
_start:
{
if (lean_obj_tag(v_d_4893_) == 8)
{
lean_object* v___x_4897_; lean_object* v___x_4899_; uint8_t v_isShared_4900_; uint8_t v_isSharedCheck_4925_; 
v___x_4897_ = l_Lasm_JS_Data_field(v_d_4893_, v_key_4894_);
v_isSharedCheck_4925_ = !lean_is_exclusive(v_d_4893_);
if (v_isSharedCheck_4925_ == 0)
{
lean_object* v_unused_4926_; 
v_unused_4926_ = lean_ctor_get(v_d_4893_, 0);
lean_dec(v_unused_4926_);
v___x_4899_ = v_d_4893_;
v_isShared_4900_ = v_isSharedCheck_4925_;
goto v_resetjp_4898_;
}
else
{
lean_dec(v_d_4893_);
v___x_4899_ = lean_box(0);
v_isShared_4900_ = v_isSharedCheck_4925_;
goto v_resetjp_4898_;
}
v_resetjp_4898_:
{
switch(lean_obj_tag(v___x_4897_))
{
case 1:
{
lean_del_object(v___x_4899_);
goto v___jp_4895_;
}
case 0:
{
lean_del_object(v___x_4899_);
goto v___jp_4895_;
}
default: 
{
if (lean_obj_tag(v___x_4897_) == 9)
{
lean_object* v_value_4901_; lean_object* v___x_4903_; 
v_value_4901_ = lean_ctor_get(v___x_4897_, 0);
lean_inc(v_value_4901_);
lean_dec_ref_known(v___x_4897_, 2);
if (v_isShared_4900_ == 0)
{
lean_ctor_set_tag(v___x_4899_, 1);
lean_ctor_set(v___x_4899_, 0, v_value_4901_);
v___x_4903_ = v___x_4899_;
goto v_reusejp_4902_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v_value_4901_);
v___x_4903_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4902_;
}
v_reusejp_4902_:
{
lean_object* v___x_4904_; 
v___x_4904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4904_, 0, v___x_4903_);
return v___x_4904_;
}
}
else
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; uint8_t v___x_4916_; 
v___x_4906_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_4907_ = lean_string_append(v___x_4906_, v_key_4894_);
v___x_4908_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_4909_ = lean_string_append(v___x_4907_, v___x_4908_);
v___x_4910_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_4911_ = lean_string_append(v___x_4909_, v___x_4910_);
v___x_4912_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_4913_ = lean_string_append(v___x_4911_, v___x_4912_);
v___x_4914_ = l_Lasm_JS_Data_describe(v___x_4897_);
v___x_4915_ = lean_string_append(v___x_4913_, v___x_4914_);
lean_dec_ref(v___x_4914_);
v___x_4916_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_4916_ == 0)
{
lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4920_; 
v___x_4917_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___x_4918_ = lean_string_append(v___x_4915_, v___x_4917_);
if (v_isShared_4900_ == 0)
{
lean_ctor_set_tag(v___x_4899_, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4918_);
v___x_4920_ = v___x_4899_;
goto v_reusejp_4919_;
}
else
{
lean_object* v_reuseFailAlloc_4921_; 
v_reuseFailAlloc_4921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4921_, 0, v___x_4918_);
v___x_4920_ = v_reuseFailAlloc_4921_;
goto v_reusejp_4919_;
}
v_reusejp_4919_:
{
return v___x_4920_;
}
}
else
{
lean_object* v___x_4923_; 
if (v_isShared_4900_ == 0)
{
lean_ctor_set_tag(v___x_4899_, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4915_);
v___x_4923_ = v___x_4899_;
goto v_reusejp_4922_;
}
else
{
lean_object* v_reuseFailAlloc_4924_; 
v_reuseFailAlloc_4924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4924_, 0, v___x_4915_);
v___x_4923_ = v_reuseFailAlloc_4924_;
goto v_reusejp_4922_;
}
v_reusejp_4922_:
{
return v___x_4923_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4927_; 
lean_dec(v_d_4893_);
v___x_4927_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__2));
return v___x_4927_;
}
v___jp_4895_:
{
lean_object* v___x_4896_; 
v___x_4896_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_4896_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_4928_, lean_object* v_key_4929_){
_start:
{
lean_object* v_res_4930_; 
v_res_4930_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4928_, v_key_4929_);
lean_dec_ref(v_key_4929_);
return v_res_4930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(lean_object* v_context_4931_, lean_object* v_d_4932_){
_start:
{
lean_object* v___y_4935_; lean_object* v___y_4936_; lean_object* v___y_4941_; lean_object* v_received_4942_; lean_object* v___y_4961_; lean_object* v_a_4964_; 
switch(lean_obj_tag(v_d_4932_))
{
case 9:
{
lean_object* v_value_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; 
v_value_4988_ = lean_ctor_get(v_d_4932_, 0);
lean_inc(v_value_4988_);
lean_dec_ref_known(v_d_4932_, 2);
v___x_4989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4989_, 0, v_value_4988_);
v___x_4990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4990_, 0, v___x_4989_);
return v___x_4990_;
}
case 8:
{
lean_object* v___x_4991_; lean_object* v___x_4992_; 
v___x_4991_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
lean_inc_ref(v_d_4932_);
v___x_4992_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4932_, v___x_4991_);
if (lean_obj_tag(v___x_4992_) == 0)
{
lean_object* v_a_4993_; 
v_a_4993_ = lean_ctor_get(v___x_4992_, 0);
lean_inc(v_a_4993_);
lean_dec_ref_known(v___x_4992_, 1);
v_a_4964_ = v_a_4993_;
goto v___jp_4963_;
}
else
{
lean_object* v_a_4994_; lean_object* v___x_4996_; uint8_t v_isShared_4997_; uint8_t v_isSharedCheck_5013_; 
v_a_4994_ = lean_ctor_get(v___x_4992_, 0);
v_isSharedCheck_5013_ = !lean_is_exclusive(v___x_4992_);
if (v_isSharedCheck_5013_ == 0)
{
v___x_4996_ = v___x_4992_;
v_isShared_4997_ = v_isSharedCheck_5013_;
goto v_resetjp_4995_;
}
else
{
lean_inc(v_a_4994_);
lean_dec(v___x_4992_);
v___x_4996_ = lean_box(0);
v_isShared_4997_ = v_isSharedCheck_5013_;
goto v_resetjp_4995_;
}
v_resetjp_4995_:
{
lean_object* v___x_4998_; lean_object* v___x_4999_; 
v___x_4998_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
lean_inc_ref(v_d_4932_);
v___x_4999_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4932_, v___x_4998_);
if (lean_obj_tag(v___x_4999_) == 0)
{
lean_object* v_a_5000_; 
lean_del_object(v___x_4996_);
lean_dec(v_a_4994_);
v_a_5000_ = lean_ctor_get(v___x_4999_, 0);
lean_inc(v_a_5000_);
lean_dec_ref_known(v___x_4999_, 1);
v_a_4964_ = v_a_5000_;
goto v___jp_4963_;
}
else
{
lean_object* v_a_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5012_; 
lean_dec_ref_known(v_d_4932_, 1);
v_a_5001_ = lean_ctor_get(v___x_4999_, 0);
v_isSharedCheck_5012_ = !lean_is_exclusive(v___x_4999_);
if (v_isSharedCheck_5012_ == 0)
{
v___x_5003_ = v___x_4999_;
v_isShared_5004_ = v_isSharedCheck_5012_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_a_5001_);
lean_dec(v___x_4999_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5012_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
lean_object* v___x_5005_; lean_object* v___x_5007_; 
v___x_5005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5005_, 0, v_a_4994_);
lean_ctor_set(v___x_5005_, 1, v_a_5001_);
if (v_isShared_5004_ == 0)
{
lean_ctor_set(v___x_5003_, 0, v___x_5005_);
v___x_5007_ = v___x_5003_;
goto v_reusejp_5006_;
}
else
{
lean_object* v_reuseFailAlloc_5011_; 
v_reuseFailAlloc_5011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5011_, 0, v___x_5005_);
v___x_5007_ = v_reuseFailAlloc_5011_;
goto v_reusejp_5006_;
}
v_reusejp_5006_:
{
lean_object* v___x_5009_; 
if (v_isShared_4997_ == 0)
{
lean_ctor_set_tag(v___x_4996_, 0);
lean_ctor_set(v___x_4996_, 0, v___x_5007_);
v___x_5009_ = v___x_4996_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5010_; 
v_reuseFailAlloc_5010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5010_, 0, v___x_5007_);
v___x_5009_ = v_reuseFailAlloc_5010_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
return v___x_5009_;
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_5014_; 
v___x_5014_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_4964_ = v___x_5014_;
goto v___jp_4963_;
}
}
v___jp_4934_:
{
lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; 
v___x_4937_ = lean_string_append(v___y_4935_, v___y_4936_);
lean_dec_ref(v___y_4936_);
v___x_4938_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4938_, 0, v___x_4937_);
v___x_4939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4939_, 0, v___x_4938_);
return v___x_4939_;
}
v___jp_4940_:
{
lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; uint8_t v___x_4954_; 
v___x_4943_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_4944_ = lean_string_append(v___x_4943_, v_context_4931_);
v___x_4945_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_4946_ = lean_string_append(v___x_4944_, v___x_4945_);
v___x_4947_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__1));
v___x_4948_ = lean_string_append(v___x_4946_, v___x_4947_);
v___x_4949_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_4950_ = lean_string_append(v___x_4948_, v___x_4949_);
v___x_4951_ = lean_string_append(v___x_4950_, v_received_4942_);
lean_dec_ref(v_received_4942_);
v___x_4952_ = lean_string_utf8_byte_size(v___y_4941_);
v___x_4953_ = lean_unsigned_to_nat(0u);
v___x_4954_ = lean_nat_dec_eq(v___x_4952_, v___x_4953_);
if (v___x_4954_ == 0)
{
lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; 
v___x_4955_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_4956_ = lean_string_append(v___x_4955_, v___y_4941_);
lean_dec_ref(v___y_4941_);
v___x_4957_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_4958_ = lean_string_append(v___x_4956_, v___x_4957_);
v___y_4935_ = v___x_4951_;
v___y_4936_ = v___x_4958_;
goto v___jp_4934_;
}
else
{
lean_object* v___x_4959_; 
lean_dec_ref(v___y_4941_);
v___x_4959_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_4935_ = v___x_4951_;
v___y_4936_ = v___x_4959_;
goto v___jp_4934_;
}
}
v___jp_4960_:
{
lean_object* v___x_4962_; 
v___x_4962_ = l_Lasm_JS_Data_describe(v_d_4932_);
v___y_4941_ = v___y_4961_;
v_received_4942_ = v___x_4962_;
goto v___jp_4940_;
}
v___jp_4963_:
{
if (lean_obj_tag(v_d_4932_) == 9)
{
lean_object* v_value_4965_; lean_object* v_description_4966_; lean_object* v___x_4967_; uint8_t v___x_4968_; 
v_value_4965_ = lean_ctor_get(v_d_4932_, 0);
v_description_4966_ = lean_ctor_get(v_d_4932_, 1);
v___x_4967_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4968_ = lean_string_dec_eq(v_description_4966_, v___x_4967_);
if (v___x_4968_ == 0)
{
v___y_4961_ = v_a_4964_;
goto v___jp_4960_;
}
else
{
lean_object* v___x_4970_; uint8_t v_isShared_4971_; uint8_t v_isSharedCheck_4985_; 
lean_inc(v_value_4965_);
v_isSharedCheck_4985_ = !lean_is_exclusive(v_d_4932_);
if (v_isSharedCheck_4985_ == 0)
{
lean_object* v_unused_4986_; lean_object* v_unused_4987_; 
v_unused_4986_ = lean_ctor_get(v_d_4932_, 1);
lean_dec(v_unused_4986_);
v_unused_4987_ = lean_ctor_get(v_d_4932_, 0);
lean_dec(v_unused_4987_);
v___x_4970_ = v_d_4932_;
v_isShared_4971_ = v_isSharedCheck_4985_;
goto v_resetjp_4969_;
}
else
{
lean_dec(v_d_4932_);
v___x_4970_ = lean_box(0);
v_isShared_4971_ = v_isSharedCheck_4985_;
goto v_resetjp_4969_;
}
v_resetjp_4969_:
{
uint32_t v___x_4972_; uint64_t v___x_4973_; lean_object* v___x_4975_; 
v___x_4972_ = 206;
v___x_4973_ = 0ULL;
lean_inc(v_value_4965_);
if (v_isShared_4971_ == 0)
{
lean_ctor_set(v___x_4970_, 1, v___x_4967_);
v___x_4975_ = v___x_4970_;
goto v_reusejp_4974_;
}
else
{
lean_object* v_reuseFailAlloc_4984_; 
v_reuseFailAlloc_4984_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4984_, 0, v_value_4965_);
lean_ctor_set(v_reuseFailAlloc_4984_, 1, v___x_4967_);
v___x_4975_ = v_reuseFailAlloc_4984_;
goto v_reusejp_4974_;
}
v_reusejp_4974_:
{
uint32_t v___x_4976_; lean_object* v___x_4977_; 
v___x_4976_ = lasm_js_value_handle(v_value_4965_);
lean_dec(v_value_4965_);
v___x_4977_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4972_, v___x_4973_, v___x_4975_, v___x_4976_);
lean_dec_ref(v___x_4975_);
if (lean_obj_tag(v___x_4977_) == 0)
{
lean_object* v_a_4978_; uint8_t v___x_4979_; 
v_a_4978_ = lean_ctor_get(v___x_4977_, 0);
lean_inc(v_a_4978_);
lean_dec_ref_known(v___x_4977_, 1);
v___x_4979_ = lean_string_validate_utf8(v_a_4978_);
if (v___x_4979_ == 0)
{
lean_object* v___x_4980_; lean_object* v___x_4981_; 
lean_dec(v_a_4978_);
v___x_4980_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_4981_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4980_);
v___y_4941_ = v_a_4964_;
v_received_4942_ = v___x_4981_;
goto v___jp_4940_;
}
else
{
lean_object* v___x_4982_; 
v___x_4982_ = lean_string_from_utf8_unchecked(v_a_4978_);
v___y_4941_ = v_a_4964_;
v_received_4942_ = v___x_4982_;
goto v___jp_4940_;
}
}
else
{
lean_object* v___x_4983_; 
lean_dec_ref_known(v___x_4977_, 1);
v___x_4983_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_4941_ = v_a_4964_;
v_received_4942_ = v___x_4983_;
goto v___jp_4940_;
}
}
}
}
}
else
{
v___y_4961_ = v_a_4964_;
goto v___jp_4960_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3___boxed(lean_object* v_context_5015_, lean_object* v_d_5016_, lean_object* v_a_5017_){
_start:
{
lean_object* v_res_5018_; 
v_res_5018_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(v_context_5015_, v_d_5016_);
lean_dec_ref(v_context_5015_);
return v_res_5018_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0(lean_object* v_context_5019_, lean_object* v_x_5020_){
_start:
{
lean_object* v_val_5023_; 
if (lean_obj_tag(v_x_5020_) == 0)
{
lean_object* v_a_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5033_; 
v_a_5025_ = lean_ctor_get(v_x_5020_, 0);
v_isSharedCheck_5033_ = !lean_is_exclusive(v_x_5020_);
if (v_isSharedCheck_5033_ == 0)
{
v___x_5027_ = v_x_5020_;
v_isShared_5028_ = v_isSharedCheck_5033_;
goto v_resetjp_5026_;
}
else
{
lean_inc(v_a_5025_);
lean_dec(v_x_5020_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5033_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5030_; 
if (v_isShared_5028_ == 0)
{
v___x_5030_ = v___x_5027_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5032_; 
v_reuseFailAlloc_5032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5032_, 0, v_a_5025_);
v___x_5030_ = v_reuseFailAlloc_5032_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
lean_object* v___x_5031_; 
v___x_5031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5031_, 0, v___x_5030_);
return v___x_5031_;
}
}
}
else
{
lean_object* v_a_5034_; lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5047_; 
v_a_5034_ = lean_ctor_get(v_x_5020_, 0);
v_isSharedCheck_5047_ = !lean_is_exclusive(v_x_5020_);
if (v_isSharedCheck_5047_ == 0)
{
v___x_5036_ = v_x_5020_;
v_isShared_5037_ = v_isSharedCheck_5047_;
goto v_resetjp_5035_;
}
else
{
lean_inc(v_a_5034_);
lean_dec(v_x_5020_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5047_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
lean_object* v___x_5038_; 
v___x_5038_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(v_context_5019_, v_a_5034_);
if (lean_obj_tag(v___x_5038_) == 0)
{
lean_object* v_a_5039_; lean_object* v___x_5041_; 
v_a_5039_ = lean_ctor_get(v___x_5038_, 0);
lean_inc(v_a_5039_);
lean_dec_ref_known(v___x_5038_, 1);
if (v_isShared_5037_ == 0)
{
lean_ctor_set(v___x_5036_, 0, v_a_5039_);
v___x_5041_ = v___x_5036_;
goto v_reusejp_5040_;
}
else
{
lean_object* v_reuseFailAlloc_5042_; 
v_reuseFailAlloc_5042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5042_, 0, v_a_5039_);
v___x_5041_ = v_reuseFailAlloc_5042_;
goto v_reusejp_5040_;
}
v_reusejp_5040_:
{
v_val_5023_ = v___x_5041_;
goto v___jp_5022_;
}
}
else
{
lean_object* v_a_5043_; lean_object* v___x_5045_; 
v_a_5043_ = lean_ctor_get(v___x_5038_, 0);
lean_inc(v_a_5043_);
lean_dec_ref_known(v___x_5038_, 1);
if (v_isShared_5037_ == 0)
{
lean_ctor_set_tag(v___x_5036_, 0);
lean_ctor_set(v___x_5036_, 0, v_a_5043_);
v___x_5045_ = v___x_5036_;
goto v_reusejp_5044_;
}
else
{
lean_object* v_reuseFailAlloc_5046_; 
v_reuseFailAlloc_5046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5046_, 0, v_a_5043_);
v___x_5045_ = v_reuseFailAlloc_5046_;
goto v_reusejp_5044_;
}
v_reusejp_5044_:
{
v_val_5023_ = v___x_5045_;
goto v___jp_5022_;
}
}
}
}
v___jp_5022_:
{
lean_object* v___x_5024_; 
v___x_5024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5024_, 0, v_val_5023_);
return v___x_5024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0___boxed(lean_object* v_context_5048_, lean_object* v_x_5049_, lean_object* v___y_5050_){
_start:
{
lean_object* v_res_5051_; 
v_res_5051_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0(v_context_5048_, v_x_5049_);
lean_dec_ref(v_context_5048_);
return v_res_5051_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(lean_object* v_context_5052_, uint32_t v_op_5053_, uint64_t v_flags_5054_, lean_object* v_payload_5055_, lean_object* v_failurePrefix_5056_){
_start:
{
lean_object* v___f_5058_; lean_object* v___f_5059_; lean_object* v___f_5060_; lean_object* v___f_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___f_5064_; lean_object* v___f_5065_; lean_object* v___x_5066_; uint8_t v___x_5067_; lean_object* v_val_5069_; lean_object* v___x_5072_; 
v___f_5058_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5058_, 0, v_context_5052_);
v___f_5059_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5059_, 0, v___f_5058_);
v___f_5060_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5060_, 0, v___f_5059_);
lean_inc_ref(v_failurePrefix_5056_);
v___f_5061_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5061_, 0, v_failurePrefix_5056_);
v___x_5062_ = lean_box_uint32(v_op_5053_);
v___x_5063_ = lean_box_uint64(v_flags_5054_);
lean_inc_ref(v___f_5060_);
v___f_5064_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5064_, 0, v_failurePrefix_5056_);
lean_closure_set(v___f_5064_, 1, v___x_5062_);
lean_closure_set(v___f_5064_, 2, v___x_5063_);
lean_closure_set(v___f_5064_, 3, v_payload_5055_);
lean_closure_set(v___f_5064_, 4, v___f_5061_);
lean_closure_set(v___f_5064_, 5, v___f_5060_);
lean_closure_set(v___f_5064_, 6, v___f_5060_);
v___f_5065_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5065_, 0, v___f_5064_);
v___x_5066_ = lean_unsigned_to_nat(0u);
v___x_5067_ = 0;
v___x_5072_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5072_) == 0)
{
lean_object* v_a_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5080_; 
v_a_5073_ = lean_ctor_get(v___x_5072_, 0);
v_isSharedCheck_5080_ = !lean_is_exclusive(v___x_5072_);
if (v_isSharedCheck_5080_ == 0)
{
v___x_5075_ = v___x_5072_;
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_a_5073_);
lean_dec(v___x_5072_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v___x_5078_; 
if (v_isShared_5076_ == 0)
{
lean_ctor_set_tag(v___x_5075_, 1);
v___x_5078_ = v___x_5075_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5079_; 
v_reuseFailAlloc_5079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5079_, 0, v_a_5073_);
v___x_5078_ = v_reuseFailAlloc_5079_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
v_val_5069_ = v___x_5078_;
goto v___jp_5068_;
}
}
}
else
{
lean_object* v_a_5081_; lean_object* v___x_5083_; uint8_t v_isShared_5084_; uint8_t v_isSharedCheck_5088_; 
v_a_5081_ = lean_ctor_get(v___x_5072_, 0);
v_isSharedCheck_5088_ = !lean_is_exclusive(v___x_5072_);
if (v_isSharedCheck_5088_ == 0)
{
v___x_5083_ = v___x_5072_;
v_isShared_5084_ = v_isSharedCheck_5088_;
goto v_resetjp_5082_;
}
else
{
lean_inc(v_a_5081_);
lean_dec(v___x_5072_);
v___x_5083_ = lean_box(0);
v_isShared_5084_ = v_isSharedCheck_5088_;
goto v_resetjp_5082_;
}
v_resetjp_5082_:
{
lean_object* v___x_5086_; 
if (v_isShared_5084_ == 0)
{
lean_ctor_set_tag(v___x_5083_, 0);
v___x_5086_ = v___x_5083_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5087_; 
v_reuseFailAlloc_5087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5087_, 0, v_a_5081_);
v___x_5086_ = v_reuseFailAlloc_5087_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
v_val_5069_ = v___x_5086_;
goto v___jp_5068_;
}
}
}
v___jp_5068_:
{
lean_object* v___x_5070_; lean_object* v___x_5071_; 
v___x_5070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5070_, 0, v_val_5069_);
v___x_5071_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5066_, v___x_5067_, v___x_5070_, v___f_5065_);
return v___x_5071_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___boxed(lean_object* v_context_5089_, lean_object* v_op_5090_, lean_object* v_flags_5091_, lean_object* v_payload_5092_, lean_object* v_failurePrefix_5093_, lean_object* v_a_5094_){
_start:
{
uint32_t v_op_boxed_5095_; uint64_t v_flags_boxed_5096_; lean_object* v_res_5097_; 
v_op_boxed_5095_ = lean_unbox_uint32(v_op_5090_);
lean_dec(v_op_5090_);
v_flags_boxed_5096_ = lean_unbox_uint64(v_flags_5091_);
lean_dec_ref(v_flags_5091_);
v_res_5097_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(v_context_5089_, v_op_boxed_5095_, v_flags_boxed_5096_, v_payload_5092_, v_failurePrefix_5093_);
return v_res_5097_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0(void){
_start:
{
uint64_t v___x_5098_; uint8_t v___x_5099_; uint64_t v___x_5100_; 
v___x_5098_ = 8ULL;
v___x_5099_ = 0;
v___x_5100_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(v___x_5099_, v___x_5098_);
return v___x_5100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(lean_object* v_o_5101_, lean_object* v_name_5102_, lean_object* v_args_5103_){
_start:
{
lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; uint32_t v___x_5110_; uint64_t v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; 
v___x_5105_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5106_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5106_, 0, v_o_5101_);
lean_ctor_set(v___x_5106_, 1, v___x_5105_);
lean_inc_ref(v_name_5102_);
v___x_5107_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5107_, 0, v_name_5102_);
v___x_5108_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__1));
v___x_5109_ = lean_string_append(v___x_5108_, v_name_5102_);
lean_dec_ref(v_name_5102_);
v___x_5110_ = 205;
v___x_5111_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0);
v___x_5112_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5112_, 0, v_args_5103_);
v___x_5113_ = lean_unsigned_to_nat(3u);
v___x_5114_ = lean_mk_empty_array_with_capacity(v___x_5113_);
v___x_5115_ = lean_array_push(v___x_5114_, v___x_5106_);
v___x_5116_ = lean_array_push(v___x_5115_, v___x_5107_);
v___x_5117_ = lean_array_push(v___x_5116_, v___x_5112_);
v___x_5118_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5118_, 0, v___x_5117_);
v___x_5119_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(v___x_5109_, v___x_5110_, v___x_5111_, v___x_5118_, v___x_5105_);
return v___x_5119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___boxed(lean_object* v_o_5120_, lean_object* v_name_5121_, lean_object* v_args_5122_, lean_object* v___y_5123_){
_start:
{
lean_object* v_res_5124_; 
v_res_5124_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(v_o_5120_, v_name_5121_, v_args_5122_);
return v_res_5124_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(size_t v_sz_5125_, size_t v_i_5126_, lean_object* v_bs_5127_){
_start:
{
uint8_t v___x_5128_; 
v___x_5128_ = lean_usize_dec_lt(v_i_5126_, v_sz_5125_);
if (v___x_5128_ == 0)
{
return v_bs_5127_;
}
else
{
lean_object* v_v_5129_; lean_object* v___x_5130_; lean_object* v_bs_x27_5131_; lean_object* v___y_5133_; uint8_t v___x_5138_; 
v_v_5129_ = lean_array_uget(v_bs_5127_, v_i_5126_);
v___x_5130_ = lean_unsigned_to_nat(0u);
v_bs_x27_5131_ = lean_array_uset(v_bs_5127_, v_i_5126_, v___x_5130_);
v___x_5138_ = lean_unbox(v_v_5129_);
lean_dec(v_v_5129_);
switch(v___x_5138_)
{
case 0:
{
lean_object* v___x_5139_; 
v___x_5139_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__1));
v___y_5133_ = v___x_5139_;
goto v___jp_5132_;
}
case 1:
{
lean_object* v___x_5140_; 
v___x_5140_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__3));
v___y_5133_ = v___x_5140_;
goto v___jp_5132_;
}
case 2:
{
lean_object* v___x_5141_; 
v___x_5141_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__5));
v___y_5133_ = v___x_5141_;
goto v___jp_5132_;
}
case 3:
{
lean_object* v___x_5142_; 
v___x_5142_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__7));
v___y_5133_ = v___x_5142_;
goto v___jp_5132_;
}
case 4:
{
lean_object* v___x_5143_; 
v___x_5143_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__9));
v___y_5133_ = v___x_5143_;
goto v___jp_5132_;
}
case 5:
{
lean_object* v___x_5144_; 
v___x_5144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__11));
v___y_5133_ = v___x_5144_;
goto v___jp_5132_;
}
case 6:
{
lean_object* v___x_5145_; 
v___x_5145_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__13));
v___y_5133_ = v___x_5145_;
goto v___jp_5132_;
}
case 7:
{
lean_object* v___x_5146_; 
v___x_5146_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__15));
v___y_5133_ = v___x_5146_;
goto v___jp_5132_;
}
case 8:
{
lean_object* v___x_5147_; 
v___x_5147_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__17));
v___y_5133_ = v___x_5147_;
goto v___jp_5132_;
}
case 9:
{
lean_object* v___x_5148_; 
v___x_5148_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__19));
v___y_5133_ = v___x_5148_;
goto v___jp_5132_;
}
case 10:
{
lean_object* v___x_5149_; 
v___x_5149_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__21));
v___y_5133_ = v___x_5149_;
goto v___jp_5132_;
}
default: 
{
lean_object* v___x_5150_; 
v___x_5150_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__23));
v___y_5133_ = v___x_5150_;
goto v___jp_5132_;
}
}
v___jp_5132_:
{
size_t v___x_5134_; size_t v___x_5135_; lean_object* v___x_5136_; 
v___x_5134_ = ((size_t)1ULL);
v___x_5135_ = lean_usize_add(v_i_5126_, v___x_5134_);
lean_inc(v___y_5133_);
v___x_5136_ = lean_array_uset(v_bs_x27_5131_, v_i_5126_, v___y_5133_);
v_i_5126_ = v___x_5135_;
v_bs_5127_ = v___x_5136_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0___boxed(lean_object* v_sz_5151_, lean_object* v_i_5152_, lean_object* v_bs_5153_){
_start:
{
size_t v_sz_boxed_5154_; size_t v_i_boxed_5155_; lean_object* v_res_5156_; 
v_sz_boxed_5154_ = lean_unbox_usize(v_sz_5151_);
lean_dec(v_sz_5151_);
v_i_boxed_5155_ = lean_unbox_usize(v_i_5152_);
lean_dec(v_i_5152_);
v_res_5156_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_boxed_5154_, v_i_boxed_5155_, v_bs_5153_);
return v_res_5156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey(lean_object* v_self_5158_, lean_object* v_algorithm_5159_, uint8_t v_extractable_5160_, lean_object* v_keyUsages_5161_){
_start:
{
lean_object* v___x_5163_; lean_object* v___y_5165_; 
v___x_5163_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_generateKey___closed__0));
if (lean_obj_tag(v_algorithm_5159_) == 0)
{
lean_object* v_value_5178_; 
v_value_5178_ = lean_ctor_get(v_algorithm_5159_, 0);
lean_inc(v_value_5178_);
lean_dec_ref_known(v_algorithm_5159_, 1);
v___y_5165_ = v_value_5178_;
goto v___jp_5164_;
}
else
{
lean_object* v_value_5179_; lean_object* v___x_5181_; uint8_t v_isShared_5182_; uint8_t v_isSharedCheck_5186_; 
v_value_5179_ = lean_ctor_get(v_algorithm_5159_, 0);
v_isSharedCheck_5186_ = !lean_is_exclusive(v_algorithm_5159_);
if (v_isSharedCheck_5186_ == 0)
{
v___x_5181_ = v_algorithm_5159_;
v_isShared_5182_ = v_isSharedCheck_5186_;
goto v_resetjp_5180_;
}
else
{
lean_inc(v_value_5179_);
lean_dec(v_algorithm_5159_);
v___x_5181_ = lean_box(0);
v_isShared_5182_ = v_isSharedCheck_5186_;
goto v_resetjp_5180_;
}
v_resetjp_5180_:
{
lean_object* v___x_5184_; 
if (v_isShared_5182_ == 0)
{
lean_ctor_set_tag(v___x_5181_, 4);
v___x_5184_ = v___x_5181_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v_value_5179_);
v___x_5184_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
v___y_5165_ = v___x_5184_;
goto v___jp_5164_;
}
}
}
v___jp_5164_:
{
lean_object* v___x_5166_; size_t v_sz_5167_; size_t v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; 
v___x_5166_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5166_, 0, v_extractable_5160_);
v_sz_5167_ = lean_array_size(v_keyUsages_5161_);
v___x_5168_ = ((size_t)0ULL);
v___x_5169_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5167_, v___x_5168_, v_keyUsages_5161_);
v___x_5170_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5170_, 0, v___x_5169_);
v___x_5171_ = lean_unsigned_to_nat(3u);
v___x_5172_ = lean_mk_empty_array_with_capacity(v___x_5171_);
v___x_5173_ = lean_array_push(v___x_5172_, v___y_5165_);
v___x_5174_ = lean_array_push(v___x_5173_, v___x_5166_);
v___x_5175_ = lean_array_push(v___x_5174_, v___x_5170_);
v___x_5176_ = l_Lasm_JS_Web_Support_args(v___x_5175_);
v___x_5177_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(v_self_5158_, v___x_5163_, v___x_5176_);
return v___x_5177_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey___boxed(lean_object* v_self_5187_, lean_object* v_algorithm_5188_, lean_object* v_extractable_5189_, lean_object* v_keyUsages_5190_, lean_object* v_a_5191_){
_start:
{
uint8_t v_extractable_boxed_5192_; lean_object* v_res_5193_; 
v_extractable_boxed_5192_ = lean_unbox(v_extractable_5189_);
v_res_5193_ = l_Lasm_JS_Web_SubtleCrypto_generateKey(v_self_5187_, v_algorithm_5188_, v_extractable_boxed_5192_, v_keyUsages_5190_);
return v_res_5193_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__0(uint8_t v_await_5194_, uint64_t v_extra_5195_){
_start:
{
uint64_t v___x_5196_; uint64_t v___y_5198_; 
v___x_5196_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
if (v_await_5194_ == 0)
{
uint64_t v___x_5201_; 
v___x_5201_ = 0ULL;
v___y_5198_ = v___x_5201_;
goto v___jp_5197_;
}
else
{
uint64_t v___x_5202_; 
v___x_5202_ = 2ULL;
v___y_5198_ = v___x_5202_;
goto v___jp_5197_;
}
v___jp_5197_:
{
uint64_t v___x_5199_; uint64_t v___x_5200_; 
v___x_5199_ = lean_uint64_lor(v___x_5196_, v___y_5198_);
v___x_5200_ = lean_uint64_lor(v___x_5199_, v_extra_5195_);
return v___x_5200_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__0___boxed(lean_object* v_await_5203_, lean_object* v_extra_5204_){
_start:
{
uint8_t v_await_boxed_5205_; uint64_t v_extra_boxed_5206_; uint64_t v_res_5207_; lean_object* v_r_5208_; 
v_await_boxed_5205_ = lean_unbox(v_await_5203_);
v_extra_boxed_5206_ = lean_unbox_uint64(v_extra_5204_);
lean_dec_ref(v_extra_5204_);
v_res_5207_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__0(v_await_boxed_5205_, v_extra_boxed_5206_);
v_r_5208_ = lean_box_uint64(v_res_5207_);
return v_r_5208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1_spec__2(lean_object* v_context_5209_, lean_object* v_d_5210_){
_start:
{
lean_object* v___y_5213_; lean_object* v___y_5214_; 
if (lean_obj_tag(v_d_5210_) == 9)
{
lean_object* v_value_5218_; lean_object* v___x_5219_; 
v_value_5218_ = lean_ctor_get(v_d_5210_, 0);
lean_inc(v_value_5218_);
lean_dec_ref_known(v_d_5210_, 2);
v___x_5219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5219_, 0, v_value_5218_);
return v___x_5219_;
}
else
{
lean_object* v___x_5220_; lean_object* v_received_5222_; 
v___x_5220_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
if (lean_obj_tag(v_d_5210_) == 9)
{
lean_object* v_value_5236_; lean_object* v_description_5237_; uint8_t v___x_5238_; 
v_value_5236_ = lean_ctor_get(v_d_5210_, 0);
v_description_5237_ = lean_ctor_get(v_d_5210_, 1);
v___x_5238_ = lean_string_dec_eq(v_description_5237_, v___x_5220_);
if (v___x_5238_ == 0)
{
goto v___jp_5234_;
}
else
{
uint32_t v___x_5239_; uint64_t v___x_5240_; lean_object* v___x_5241_; uint32_t v___x_5242_; lean_object* v___x_5243_; 
lean_inc_n(v_value_5236_, 2);
lean_dec_ref_known(v_d_5210_, 2);
v___x_5239_ = 206;
v___x_5240_ = 0ULL;
v___x_5241_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5241_, 0, v_value_5236_);
lean_ctor_set(v___x_5241_, 1, v___x_5220_);
v___x_5242_ = lasm_js_value_handle(v_value_5236_);
lean_dec(v_value_5236_);
v___x_5243_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5239_, v___x_5240_, v___x_5241_, v___x_5242_);
lean_dec_ref_known(v___x_5241_, 2);
if (lean_obj_tag(v___x_5243_) == 0)
{
lean_object* v_a_5244_; uint8_t v___x_5245_; 
v_a_5244_ = lean_ctor_get(v___x_5243_, 0);
lean_inc(v_a_5244_);
lean_dec_ref_known(v___x_5243_, 1);
v___x_5245_ = lean_string_validate_utf8(v_a_5244_);
if (v___x_5245_ == 0)
{
lean_object* v___x_5246_; lean_object* v___x_5247_; 
lean_dec(v_a_5244_);
v___x_5246_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_5247_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5246_);
v_received_5222_ = v___x_5247_;
goto v___jp_5221_;
}
else
{
lean_object* v___x_5248_; 
v___x_5248_ = lean_string_from_utf8_unchecked(v_a_5244_);
v_received_5222_ = v___x_5248_;
goto v___jp_5221_;
}
}
else
{
lean_object* v___x_5249_; 
lean_dec_ref_known(v___x_5243_, 1);
v___x_5249_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_5222_ = v___x_5249_;
goto v___jp_5221_;
}
}
}
else
{
goto v___jp_5234_;
}
v___jp_5221_:
{
lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; uint8_t v___x_5232_; 
v___x_5223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_5224_ = lean_string_append(v___x_5223_, v_context_5209_);
v___x_5225_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_5226_ = lean_string_append(v___x_5224_, v___x_5225_);
v___x_5227_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKey___closed__0));
v___x_5228_ = lean_string_append(v___x_5226_, v___x_5227_);
v___x_5229_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_5230_ = lean_string_append(v___x_5228_, v___x_5229_);
v___x_5231_ = lean_string_append(v___x_5230_, v_received_5222_);
lean_dec_ref(v_received_5222_);
v___x_5232_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_5232_ == 0)
{
lean_object* v___x_5233_; 
v___x_5233_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___y_5213_ = v___x_5231_;
v___y_5214_ = v___x_5233_;
goto v___jp_5212_;
}
else
{
v___y_5213_ = v___x_5231_;
v___y_5214_ = v___x_5220_;
goto v___jp_5212_;
}
}
v___jp_5234_:
{
lean_object* v___x_5235_; 
v___x_5235_ = l_Lasm_JS_Data_describe(v_d_5210_);
v_received_5222_ = v___x_5235_;
goto v___jp_5221_;
}
}
v___jp_5212_:
{
lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; 
v___x_5215_ = lean_string_append(v___y_5213_, v___y_5214_);
v___x_5216_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5216_, 0, v___x_5215_);
v___x_5217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5217_, 0, v___x_5216_);
return v___x_5217_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1_spec__2___boxed(lean_object* v_context_5250_, lean_object* v_d_5251_, lean_object* v_a_5252_){
_start:
{
lean_object* v_res_5253_; 
v_res_5253_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1_spec__2(v_context_5250_, v_d_5251_);
lean_dec_ref(v_context_5250_);
return v_res_5253_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1___lam__0(lean_object* v_context_5254_, lean_object* v_x_5255_){
_start:
{
lean_object* v_val_5258_; 
if (lean_obj_tag(v_x_5255_) == 0)
{
lean_object* v_a_5260_; lean_object* v___x_5262_; uint8_t v_isShared_5263_; uint8_t v_isSharedCheck_5268_; 
v_a_5260_ = lean_ctor_get(v_x_5255_, 0);
v_isSharedCheck_5268_ = !lean_is_exclusive(v_x_5255_);
if (v_isSharedCheck_5268_ == 0)
{
v___x_5262_ = v_x_5255_;
v_isShared_5263_ = v_isSharedCheck_5268_;
goto v_resetjp_5261_;
}
else
{
lean_inc(v_a_5260_);
lean_dec(v_x_5255_);
v___x_5262_ = lean_box(0);
v_isShared_5263_ = v_isSharedCheck_5268_;
goto v_resetjp_5261_;
}
v_resetjp_5261_:
{
lean_object* v___x_5265_; 
if (v_isShared_5263_ == 0)
{
v___x_5265_ = v___x_5262_;
goto v_reusejp_5264_;
}
else
{
lean_object* v_reuseFailAlloc_5267_; 
v_reuseFailAlloc_5267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5267_, 0, v_a_5260_);
v___x_5265_ = v_reuseFailAlloc_5267_;
goto v_reusejp_5264_;
}
v_reusejp_5264_:
{
lean_object* v___x_5266_; 
v___x_5266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5266_, 0, v___x_5265_);
return v___x_5266_;
}
}
}
else
{
lean_object* v_a_5269_; lean_object* v___x_5271_; uint8_t v_isShared_5272_; uint8_t v_isSharedCheck_5282_; 
v_a_5269_ = lean_ctor_get(v_x_5255_, 0);
v_isSharedCheck_5282_ = !lean_is_exclusive(v_x_5255_);
if (v_isSharedCheck_5282_ == 0)
{
v___x_5271_ = v_x_5255_;
v_isShared_5272_ = v_isSharedCheck_5282_;
goto v_resetjp_5270_;
}
else
{
lean_inc(v_a_5269_);
lean_dec(v_x_5255_);
v___x_5271_ = lean_box(0);
v_isShared_5272_ = v_isSharedCheck_5282_;
goto v_resetjp_5270_;
}
v_resetjp_5270_:
{
lean_object* v___x_5273_; 
v___x_5273_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1_spec__2(v_context_5254_, v_a_5269_);
if (lean_obj_tag(v___x_5273_) == 0)
{
lean_object* v_a_5274_; lean_object* v___x_5276_; 
v_a_5274_ = lean_ctor_get(v___x_5273_, 0);
lean_inc(v_a_5274_);
lean_dec_ref_known(v___x_5273_, 1);
if (v_isShared_5272_ == 0)
{
lean_ctor_set(v___x_5271_, 0, v_a_5274_);
v___x_5276_ = v___x_5271_;
goto v_reusejp_5275_;
}
else
{
lean_object* v_reuseFailAlloc_5277_; 
v_reuseFailAlloc_5277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5277_, 0, v_a_5274_);
v___x_5276_ = v_reuseFailAlloc_5277_;
goto v_reusejp_5275_;
}
v_reusejp_5275_:
{
v_val_5258_ = v___x_5276_;
goto v___jp_5257_;
}
}
else
{
lean_object* v_a_5278_; lean_object* v___x_5280_; 
v_a_5278_ = lean_ctor_get(v___x_5273_, 0);
lean_inc(v_a_5278_);
lean_dec_ref_known(v___x_5273_, 1);
if (v_isShared_5272_ == 0)
{
lean_ctor_set_tag(v___x_5271_, 0);
lean_ctor_set(v___x_5271_, 0, v_a_5278_);
v___x_5280_ = v___x_5271_;
goto v_reusejp_5279_;
}
else
{
lean_object* v_reuseFailAlloc_5281_; 
v_reuseFailAlloc_5281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5281_, 0, v_a_5278_);
v___x_5280_ = v_reuseFailAlloc_5281_;
goto v_reusejp_5279_;
}
v_reusejp_5279_:
{
v_val_5258_ = v___x_5280_;
goto v___jp_5257_;
}
}
}
}
v___jp_5257_:
{
lean_object* v___x_5259_; 
v___x_5259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5259_, 0, v_val_5258_);
return v___x_5259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1___lam__0___boxed(lean_object* v_context_5283_, lean_object* v_x_5284_, lean_object* v___y_5285_){
_start:
{
lean_object* v_res_5286_; 
v_res_5286_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1___lam__0(v_context_5283_, v_x_5284_);
lean_dec_ref(v_context_5283_);
return v_res_5286_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1(lean_object* v_context_5287_, uint32_t v_op_5288_, uint64_t v_flags_5289_, lean_object* v_payload_5290_, lean_object* v_failurePrefix_5291_){
_start:
{
lean_object* v___f_5293_; lean_object* v___f_5294_; lean_object* v___f_5295_; lean_object* v___f_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___f_5299_; lean_object* v___f_5300_; lean_object* v___x_5301_; uint8_t v___x_5302_; lean_object* v_val_5304_; lean_object* v___x_5307_; 
v___f_5293_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5293_, 0, v_context_5287_);
v___f_5294_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5294_, 0, v___f_5293_);
v___f_5295_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5295_, 0, v___f_5294_);
lean_inc_ref(v_failurePrefix_5291_);
v___f_5296_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5296_, 0, v_failurePrefix_5291_);
v___x_5297_ = lean_box_uint32(v_op_5288_);
v___x_5298_ = lean_box_uint64(v_flags_5289_);
lean_inc_ref(v___f_5295_);
v___f_5299_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_5299_, 0, v_failurePrefix_5291_);
lean_closure_set(v___f_5299_, 1, v___x_5297_);
lean_closure_set(v___f_5299_, 2, v___x_5298_);
lean_closure_set(v___f_5299_, 3, v_payload_5290_);
lean_closure_set(v___f_5299_, 4, v___f_5296_);
lean_closure_set(v___f_5299_, 5, v___f_5295_);
lean_closure_set(v___f_5299_, 6, v___f_5295_);
v___f_5300_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_5300_, 0, v___f_5299_);
v___x_5301_ = lean_unsigned_to_nat(0u);
v___x_5302_ = 0;
v___x_5307_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5307_) == 0)
{
lean_object* v_a_5308_; lean_object* v___x_5310_; uint8_t v_isShared_5311_; uint8_t v_isSharedCheck_5315_; 
v_a_5308_ = lean_ctor_get(v___x_5307_, 0);
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5310_ = v___x_5307_;
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
else
{
lean_inc(v_a_5308_);
lean_dec(v___x_5307_);
v___x_5310_ = lean_box(0);
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
v_resetjp_5309_:
{
lean_object* v___x_5313_; 
if (v_isShared_5311_ == 0)
{
lean_ctor_set_tag(v___x_5310_, 1);
v___x_5313_ = v___x_5310_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v_a_5308_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
v_val_5304_ = v___x_5313_;
goto v___jp_5303_;
}
}
}
else
{
lean_object* v_a_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5323_; 
v_a_5316_ = lean_ctor_get(v___x_5307_, 0);
v_isSharedCheck_5323_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5323_ == 0)
{
v___x_5318_ = v___x_5307_;
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_a_5316_);
lean_dec(v___x_5307_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5321_; 
if (v_isShared_5319_ == 0)
{
lean_ctor_set_tag(v___x_5318_, 0);
v___x_5321_ = v___x_5318_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_a_5316_);
v___x_5321_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
v_val_5304_ = v___x_5321_;
goto v___jp_5303_;
}
}
}
v___jp_5303_:
{
lean_object* v___x_5305_; lean_object* v___x_5306_; 
v___x_5305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5305_, 0, v_val_5304_);
v___x_5306_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5301_, v___x_5302_, v___x_5305_, v___f_5300_);
return v___x_5306_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1___boxed(lean_object* v_context_5324_, lean_object* v_op_5325_, lean_object* v_flags_5326_, lean_object* v_payload_5327_, lean_object* v_failurePrefix_5328_, lean_object* v_a_5329_){
_start:
{
uint32_t v_op_boxed_5330_; uint64_t v_flags_boxed_5331_; lean_object* v_res_5332_; 
v_op_boxed_5330_ = lean_unbox_uint32(v_op_5325_);
lean_dec(v_op_5325_);
v_flags_boxed_5331_ = lean_unbox_uint64(v_flags_5326_);
lean_dec_ref(v_flags_5326_);
v_res_5332_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1(v_context_5324_, v_op_boxed_5330_, v_flags_boxed_5331_, v_payload_5327_, v_failurePrefix_5328_);
return v_res_5332_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0___closed__0(void){
_start:
{
uint64_t v___x_5333_; uint8_t v___x_5334_; uint64_t v___x_5335_; 
v___x_5333_ = 8ULL;
v___x_5334_ = 0;
v___x_5335_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__0(v___x_5334_, v___x_5333_);
return v___x_5335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0(lean_object* v_o_5336_, lean_object* v_name_5337_, lean_object* v_args_5338_){
_start:
{
lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; uint32_t v___x_5345_; uint64_t v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; 
v___x_5340_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5341_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5341_, 0, v_o_5336_);
lean_ctor_set(v___x_5341_, 1, v___x_5340_);
lean_inc_ref(v_name_5337_);
v___x_5342_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5342_, 0, v_name_5337_);
v___x_5343_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__1));
v___x_5344_ = lean_string_append(v___x_5343_, v_name_5337_);
lean_dec_ref(v_name_5337_);
v___x_5345_ = 205;
v___x_5346_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0___closed__0);
v___x_5347_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5347_, 0, v_args_5338_);
v___x_5348_ = lean_unsigned_to_nat(3u);
v___x_5349_ = lean_mk_empty_array_with_capacity(v___x_5348_);
v___x_5350_ = lean_array_push(v___x_5349_, v___x_5341_);
v___x_5351_ = lean_array_push(v___x_5350_, v___x_5342_);
v___x_5352_ = lean_array_push(v___x_5351_, v___x_5347_);
v___x_5353_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5353_, 0, v___x_5352_);
v___x_5354_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0_spec__1(v___x_5344_, v___x_5345_, v___x_5346_, v___x_5353_, v___x_5340_);
return v___x_5354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0___boxed(lean_object* v_o_5355_, lean_object* v_name_5356_, lean_object* v_args_5357_, lean_object* v___y_5358_){
_start:
{
lean_object* v_res_5359_; 
v_res_5359_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0(v_o_5355_, v_name_5356_, v_args_5357_);
return v_res_5359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey(lean_object* v_self_5360_, lean_object* v_algorithm_5361_, lean_object* v_baseKey_5362_, lean_object* v_derivedKeyType_5363_, uint8_t v_extractable_5364_, lean_object* v_keyUsages_5365_){
_start:
{
lean_object* v___x_5367_; lean_object* v___y_5369_; lean_object* v___y_5370_; lean_object* v___y_5371_; lean_object* v___y_5387_; 
v___x_5367_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8));
if (lean_obj_tag(v_algorithm_5361_) == 0)
{
lean_object* v_value_5399_; 
v_value_5399_ = lean_ctor_get(v_algorithm_5361_, 0);
lean_inc(v_value_5399_);
lean_dec_ref_known(v_algorithm_5361_, 1);
v___y_5387_ = v_value_5399_;
goto v___jp_5386_;
}
else
{
lean_object* v_value_5400_; lean_object* v___x_5402_; uint8_t v_isShared_5403_; uint8_t v_isSharedCheck_5407_; 
v_value_5400_ = lean_ctor_get(v_algorithm_5361_, 0);
v_isSharedCheck_5407_ = !lean_is_exclusive(v_algorithm_5361_);
if (v_isSharedCheck_5407_ == 0)
{
v___x_5402_ = v_algorithm_5361_;
v_isShared_5403_ = v_isSharedCheck_5407_;
goto v_resetjp_5401_;
}
else
{
lean_inc(v_value_5400_);
lean_dec(v_algorithm_5361_);
v___x_5402_ = lean_box(0);
v_isShared_5403_ = v_isSharedCheck_5407_;
goto v_resetjp_5401_;
}
v_resetjp_5401_:
{
lean_object* v___x_5405_; 
if (v_isShared_5403_ == 0)
{
lean_ctor_set_tag(v___x_5402_, 4);
v___x_5405_ = v___x_5402_;
goto v_reusejp_5404_;
}
else
{
lean_object* v_reuseFailAlloc_5406_; 
v_reuseFailAlloc_5406_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5406_, 0, v_value_5400_);
v___x_5405_ = v_reuseFailAlloc_5406_;
goto v_reusejp_5404_;
}
v_reusejp_5404_:
{
v___y_5387_ = v___x_5405_;
goto v___jp_5386_;
}
}
}
v___jp_5368_:
{
lean_object* v___x_5372_; size_t v_sz_5373_; size_t v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; 
v___x_5372_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5372_, 0, v_extractable_5364_);
v_sz_5373_ = lean_array_size(v_keyUsages_5365_);
v___x_5374_ = ((size_t)0ULL);
v___x_5375_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5373_, v___x_5374_, v_keyUsages_5365_);
v___x_5376_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5376_, 0, v___x_5375_);
v___x_5377_ = lean_unsigned_to_nat(5u);
v___x_5378_ = lean_mk_empty_array_with_capacity(v___x_5377_);
v___x_5379_ = lean_array_push(v___x_5378_, v___y_5369_);
v___x_5380_ = lean_array_push(v___x_5379_, v___y_5370_);
v___x_5381_ = lean_array_push(v___x_5380_, v___y_5371_);
v___x_5382_ = lean_array_push(v___x_5381_, v___x_5372_);
v___x_5383_ = lean_array_push(v___x_5382_, v___x_5376_);
v___x_5384_ = l_Lasm_JS_Web_Support_args(v___x_5383_);
v___x_5385_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0(v_self_5360_, v___x_5367_, v___x_5384_);
return v___x_5385_;
}
v___jp_5386_:
{
lean_object* v___x_5388_; lean_object* v___x_5389_; 
v___x_5388_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5389_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5389_, 0, v_baseKey_5362_);
lean_ctor_set(v___x_5389_, 1, v___x_5388_);
if (lean_obj_tag(v_derivedKeyType_5363_) == 0)
{
lean_object* v_value_5390_; 
v_value_5390_ = lean_ctor_get(v_derivedKeyType_5363_, 0);
lean_inc(v_value_5390_);
lean_dec_ref_known(v_derivedKeyType_5363_, 1);
v___y_5369_ = v___y_5387_;
v___y_5370_ = v___x_5389_;
v___y_5371_ = v_value_5390_;
goto v___jp_5368_;
}
else
{
lean_object* v_value_5391_; lean_object* v___x_5393_; uint8_t v_isShared_5394_; uint8_t v_isSharedCheck_5398_; 
v_value_5391_ = lean_ctor_get(v_derivedKeyType_5363_, 0);
v_isSharedCheck_5398_ = !lean_is_exclusive(v_derivedKeyType_5363_);
if (v_isSharedCheck_5398_ == 0)
{
v___x_5393_ = v_derivedKeyType_5363_;
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
else
{
lean_inc(v_value_5391_);
lean_dec(v_derivedKeyType_5363_);
v___x_5393_ = lean_box(0);
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
v_resetjp_5392_:
{
lean_object* v___x_5396_; 
if (v_isShared_5394_ == 0)
{
lean_ctor_set_tag(v___x_5393_, 4);
v___x_5396_ = v___x_5393_;
goto v_reusejp_5395_;
}
else
{
lean_object* v_reuseFailAlloc_5397_; 
v_reuseFailAlloc_5397_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5397_, 0, v_value_5391_);
v___x_5396_ = v_reuseFailAlloc_5397_;
goto v_reusejp_5395_;
}
v_reusejp_5395_:
{
v___y_5369_ = v___y_5387_;
v___y_5370_ = v___x_5389_;
v___y_5371_ = v___x_5396_;
goto v___jp_5368_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___boxed(lean_object* v_self_5408_, lean_object* v_algorithm_5409_, lean_object* v_baseKey_5410_, lean_object* v_derivedKeyType_5411_, lean_object* v_extractable_5412_, lean_object* v_keyUsages_5413_, lean_object* v_a_5414_){
_start:
{
uint8_t v_extractable_boxed_5415_; lean_object* v_res_5416_; 
v_extractable_boxed_5415_ = lean_unbox(v_extractable_5412_);
v_res_5416_ = l_Lasm_JS_Web_SubtleCrypto_deriveKey(v_self_5408_, v_algorithm_5409_, v_baseKey_5410_, v_derivedKeyType_5411_, v_extractable_boxed_5415_, v_keyUsages_5413_);
return v_res_5416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_deriveBits_spec__0(lean_object* v_x_5417_){
_start:
{
if (lean_obj_tag(v_x_5417_) == 0)
{
lean_object* v___x_5418_; 
v___x_5418_ = lean_box(0);
return v___x_5418_;
}
else
{
lean_object* v_val_5419_; lean_object* v___x_5421_; uint8_t v_isShared_5422_; uint8_t v_isSharedCheck_5432_; 
v_val_5419_ = lean_ctor_get(v_x_5417_, 0);
v_isSharedCheck_5432_ = !lean_is_exclusive(v_x_5417_);
if (v_isSharedCheck_5432_ == 0)
{
v___x_5421_ = v_x_5417_;
v_isShared_5422_ = v_isSharedCheck_5432_;
goto v_resetjp_5420_;
}
else
{
lean_inc(v_val_5419_);
lean_dec(v_x_5417_);
v___x_5421_ = lean_box(0);
v_isShared_5422_ = v_isSharedCheck_5432_;
goto v_resetjp_5420_;
}
v_resetjp_5420_:
{
lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; uint8_t v___x_5426_; 
v___x_5423_ = lean_nat_to_int(v_val_5419_);
v___x_5424_ = lean_nat_abs(v___x_5423_);
v___x_5425_ = lean_cstr_to_nat("9007199254740991");
v___x_5426_ = lean_nat_dec_le(v___x_5424_, v___x_5425_);
lean_dec(v___x_5424_);
if (v___x_5426_ == 0)
{
lean_object* v___x_5428_; 
if (v_isShared_5422_ == 0)
{
lean_ctor_set_tag(v___x_5421_, 5);
lean_ctor_set(v___x_5421_, 0, v___x_5423_);
v___x_5428_ = v___x_5421_;
goto v_reusejp_5427_;
}
else
{
lean_object* v_reuseFailAlloc_5429_; 
v_reuseFailAlloc_5429_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5429_, 0, v___x_5423_);
v___x_5428_ = v_reuseFailAlloc_5429_;
goto v_reusejp_5427_;
}
v_reusejp_5427_:
{
return v___x_5428_;
}
}
else
{
double v___x_5430_; lean_object* v___x_5431_; 
lean_del_object(v___x_5421_);
v___x_5430_ = l_Float_ofInt(v___x_5423_);
lean_dec(v___x_5423_);
v___x_5431_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5431_, 0, v___x_5430_);
return v___x_5431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits(lean_object* v_self_5433_, lean_object* v_algorithm_5434_, lean_object* v_baseKey_5435_, lean_object* v_length_5436_){
_start:
{
lean_object* v___f_5438_; lean_object* v___x_5439_; lean_object* v___y_5441_; 
v___f_5438_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_5439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10));
if (lean_obj_tag(v_algorithm_5434_) == 0)
{
lean_object* v_value_5455_; 
v_value_5455_ = lean_ctor_get(v_algorithm_5434_, 0);
lean_inc(v_value_5455_);
lean_dec_ref_known(v_algorithm_5434_, 1);
v___y_5441_ = v_value_5455_;
goto v___jp_5440_;
}
else
{
lean_object* v_value_5456_; lean_object* v___x_5458_; uint8_t v_isShared_5459_; uint8_t v_isSharedCheck_5463_; 
v_value_5456_ = lean_ctor_get(v_algorithm_5434_, 0);
v_isSharedCheck_5463_ = !lean_is_exclusive(v_algorithm_5434_);
if (v_isSharedCheck_5463_ == 0)
{
v___x_5458_ = v_algorithm_5434_;
v_isShared_5459_ = v_isSharedCheck_5463_;
goto v_resetjp_5457_;
}
else
{
lean_inc(v_value_5456_);
lean_dec(v_algorithm_5434_);
v___x_5458_ = lean_box(0);
v_isShared_5459_ = v_isSharedCheck_5463_;
goto v_resetjp_5457_;
}
v_resetjp_5457_:
{
lean_object* v___x_5461_; 
if (v_isShared_5459_ == 0)
{
lean_ctor_set_tag(v___x_5458_, 4);
v___x_5461_ = v___x_5458_;
goto v_reusejp_5460_;
}
else
{
lean_object* v_reuseFailAlloc_5462_; 
v_reuseFailAlloc_5462_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5462_, 0, v_value_5456_);
v___x_5461_ = v_reuseFailAlloc_5462_;
goto v_reusejp_5460_;
}
v_reusejp_5460_:
{
v___y_5441_ = v___x_5461_;
goto v___jp_5440_;
}
}
}
v___jp_5440_:
{
lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; uint8_t v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; 
v___x_5442_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5443_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5443_, 0, v_baseKey_5435_);
lean_ctor_set(v___x_5443_, 1, v___x_5442_);
v___x_5444_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_deriveBits_spec__0(v_length_5436_);
v___x_5445_ = lean_unsigned_to_nat(3u);
v___x_5446_ = lean_mk_empty_array_with_capacity(v___x_5445_);
v___x_5447_ = lean_array_push(v___x_5446_, v___y_5441_);
v___x_5448_ = lean_array_push(v___x_5447_, v___x_5443_);
v___x_5449_ = lean_array_push(v___x_5448_, v___x_5444_);
v___x_5450_ = l_Lasm_JS_Web_Support_args(v___x_5449_);
v___x_5451_ = lean_unsigned_to_nat(0u);
v___x_5452_ = 0;
v___x_5453_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5433_, v___x_5439_, v___x_5450_);
v___x_5454_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5451_, v___x_5452_, v___x_5453_, v___f_5438_);
return v___x_5454_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits___boxed(lean_object* v_self_5464_, lean_object* v_algorithm_5465_, lean_object* v_baseKey_5466_, lean_object* v_length_5467_, lean_object* v_a_5468_){
_start:
{
lean_object* v_res_5469_; 
v_res_5469_ = l_Lasm_JS_Web_SubtleCrypto_deriveBits(v_self_5464_, v_algorithm_5465_, v_baseKey_5466_, v_length_5467_);
return v_res_5469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(lean_object* v_x_5470_){
_start:
{
if (lean_obj_tag(v_x_5470_) == 0)
{
lean_object* v___x_5471_; 
v___x_5471_ = lean_box(0);
return v___x_5471_;
}
else
{
lean_object* v_val_5472_; lean_object* v___x_5474_; uint8_t v_isShared_5475_; uint8_t v_isSharedCheck_5479_; 
v_val_5472_ = lean_ctor_get(v_x_5470_, 0);
v_isSharedCheck_5479_ = !lean_is_exclusive(v_x_5470_);
if (v_isSharedCheck_5479_ == 0)
{
v___x_5474_ = v_x_5470_;
v_isShared_5475_ = v_isSharedCheck_5479_;
goto v_resetjp_5473_;
}
else
{
lean_inc(v_val_5472_);
lean_dec(v_x_5470_);
v___x_5474_ = lean_box(0);
v_isShared_5475_ = v_isSharedCheck_5479_;
goto v_resetjp_5473_;
}
v_resetjp_5473_:
{
lean_object* v___x_5477_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set_tag(v___x_5474_, 4);
v___x_5477_ = v___x_5474_;
goto v_reusejp_5476_;
}
else
{
lean_object* v_reuseFailAlloc_5478_; 
v_reuseFailAlloc_5478_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5478_, 0, v_val_5472_);
v___x_5477_ = v_reuseFailAlloc_5478_;
goto v_reusejp_5476_;
}
v_reusejp_5476_:
{
return v___x_5477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(lean_object* v_x_5480_){
_start:
{
if (lean_obj_tag(v_x_5480_) == 0)
{
lean_object* v___x_5481_; 
v___x_5481_ = lean_box(0);
return v___x_5481_;
}
else
{
lean_object* v_val_5482_; lean_object* v___x_5483_; uint8_t v___x_5484_; 
v_val_5482_ = lean_ctor_get(v_x_5480_, 0);
v___x_5483_ = lean_alloc_ctor(2, 0, 1);
v___x_5484_ = lean_unbox(v_val_5482_);
lean_ctor_set_uint8(v___x_5483_, 0, v___x_5484_);
return v___x_5483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2___boxed(lean_object* v_x_5485_){
_start:
{
lean_object* v_res_5486_; 
v_res_5486_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(v_x_5485_);
lean_dec(v_x_5485_);
return v_res_5486_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(size_t v_sz_5487_, size_t v_i_5488_, lean_object* v_bs_5489_){
_start:
{
uint8_t v___x_5490_; 
v___x_5490_ = lean_usize_dec_lt(v_i_5488_, v_sz_5487_);
if (v___x_5490_ == 0)
{
return v_bs_5489_;
}
else
{
lean_object* v_v_5491_; lean_object* v___x_5492_; lean_object* v_bs_x27_5493_; lean_object* v___x_5494_; size_t v___x_5495_; size_t v___x_5496_; lean_object* v___x_5497_; 
v_v_5491_ = lean_array_uget(v_bs_5489_, v_i_5488_);
v___x_5492_ = lean_unsigned_to_nat(0u);
v_bs_x27_5493_ = lean_array_uset(v_bs_5489_, v_i_5488_, v___x_5492_);
v___x_5494_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5494_, 0, v_v_5491_);
v___x_5495_ = ((size_t)1ULL);
v___x_5496_ = lean_usize_add(v_i_5488_, v___x_5495_);
v___x_5497_ = lean_array_uset(v_bs_x27_5493_, v_i_5488_, v___x_5494_);
v_i_5488_ = v___x_5496_;
v_bs_5489_ = v___x_5497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1___boxed(lean_object* v_sz_5499_, lean_object* v_i_5500_, lean_object* v_bs_5501_){
_start:
{
size_t v_sz_boxed_5502_; size_t v_i_boxed_5503_; lean_object* v_res_5504_; 
v_sz_boxed_5502_ = lean_unbox_usize(v_sz_5499_);
lean_dec(v_sz_5499_);
v_i_boxed_5503_ = lean_unbox_usize(v_i_5500_);
lean_dec(v_i_5500_);
v_res_5504_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(v_sz_boxed_5502_, v_i_boxed_5503_, v_bs_5501_);
return v_res_5504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1(lean_object* v_x_5505_){
_start:
{
if (lean_obj_tag(v_x_5505_) == 0)
{
lean_object* v___x_5506_; 
v___x_5506_ = lean_box(0);
return v___x_5506_;
}
else
{
lean_object* v_val_5507_; lean_object* v___x_5509_; uint8_t v_isShared_5510_; uint8_t v_isSharedCheck_5517_; 
v_val_5507_ = lean_ctor_get(v_x_5505_, 0);
v_isSharedCheck_5517_ = !lean_is_exclusive(v_x_5505_);
if (v_isSharedCheck_5517_ == 0)
{
v___x_5509_ = v_x_5505_;
v_isShared_5510_ = v_isSharedCheck_5517_;
goto v_resetjp_5508_;
}
else
{
lean_inc(v_val_5507_);
lean_dec(v_x_5505_);
v___x_5509_ = lean_box(0);
v_isShared_5510_ = v_isSharedCheck_5517_;
goto v_resetjp_5508_;
}
v_resetjp_5508_:
{
size_t v_sz_5511_; size_t v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5515_; 
v_sz_5511_ = lean_array_size(v_val_5507_);
v___x_5512_ = ((size_t)0ULL);
v___x_5513_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(v_sz_5511_, v___x_5512_, v_val_5507_);
if (v_isShared_5510_ == 0)
{
lean_ctor_set_tag(v___x_5509_, 7);
lean_ctor_set(v___x_5509_, 0, v___x_5513_);
v___x_5515_ = v___x_5509_;
goto v_reusejp_5514_;
}
else
{
lean_object* v_reuseFailAlloc_5516_; 
v_reuseFailAlloc_5516_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5516_, 0, v___x_5513_);
v___x_5515_ = v_reuseFailAlloc_5516_;
goto v_reusejp_5514_;
}
v_reusejp_5514_:
{
return v___x_5515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(size_t v_sz_5518_, size_t v_i_5519_, lean_object* v_bs_5520_){
_start:
{
uint8_t v___x_5521_; 
v___x_5521_ = lean_usize_dec_lt(v_i_5519_, v_sz_5518_);
if (v___x_5521_ == 0)
{
return v_bs_5520_;
}
else
{
lean_object* v_v_5522_; lean_object* v_r_5523_; lean_object* v_d_5524_; lean_object* v_t_5525_; lean_object* v___x_5526_; lean_object* v_bs_x27_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; lean_object* v___x_5542_; size_t v___x_5543_; size_t v___x_5544_; lean_object* v___x_5545_; 
v_v_5522_ = lean_array_uget_borrowed(v_bs_5520_, v_i_5519_);
v_r_5523_ = lean_ctor_get(v_v_5522_, 0);
lean_inc(v_r_5523_);
v_d_5524_ = lean_ctor_get(v_v_5522_, 1);
lean_inc(v_d_5524_);
v_t_5525_ = lean_ctor_get(v_v_5522_, 2);
lean_inc(v_t_5525_);
v___x_5526_ = lean_unsigned_to_nat(0u);
v_bs_x27_5527_ = lean_array_uset(v_bs_5520_, v_i_5519_, v___x_5526_);
v___x_5528_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
v___x_5529_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_r_5523_);
v___x_5530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5530_, 0, v___x_5528_);
lean_ctor_set(v___x_5530_, 1, v___x_5529_);
v___x_5531_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_5532_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_d_5524_);
v___x_5533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5533_, 0, v___x_5531_);
lean_ctor_set(v___x_5533_, 1, v___x_5532_);
v___x_5534_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_5535_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_t_5525_);
v___x_5536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5536_, 0, v___x_5534_);
lean_ctor_set(v___x_5536_, 1, v___x_5535_);
v___x_5537_ = lean_unsigned_to_nat(3u);
v___x_5538_ = lean_mk_empty_array_with_capacity(v___x_5537_);
v___x_5539_ = lean_array_push(v___x_5538_, v___x_5530_);
v___x_5540_ = lean_array_push(v___x_5539_, v___x_5533_);
v___x_5541_ = lean_array_push(v___x_5540_, v___x_5536_);
v___x_5542_ = l_Lasm_JS_Web_Support_fields(v___x_5541_);
lean_dec_ref(v___x_5541_);
v___x_5543_ = ((size_t)1ULL);
v___x_5544_ = lean_usize_add(v_i_5519_, v___x_5543_);
v___x_5545_ = lean_array_uset(v_bs_x27_5527_, v_i_5519_, v___x_5542_);
v_i_5519_ = v___x_5544_;
v_bs_5520_ = v___x_5545_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4___boxed(lean_object* v_sz_5547_, lean_object* v_i_5548_, lean_object* v_bs_5549_){
_start:
{
size_t v_sz_boxed_5550_; size_t v_i_boxed_5551_; lean_object* v_res_5552_; 
v_sz_boxed_5550_ = lean_unbox_usize(v_sz_5547_);
lean_dec(v_sz_5547_);
v_i_boxed_5551_ = lean_unbox_usize(v_i_5548_);
lean_dec(v_i_5548_);
v_res_5552_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(v_sz_boxed_5550_, v_i_boxed_5551_, v_bs_5549_);
return v_res_5552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3(lean_object* v_x_5553_){
_start:
{
if (lean_obj_tag(v_x_5553_) == 0)
{
lean_object* v___x_5554_; 
v___x_5554_ = lean_box(0);
return v___x_5554_;
}
else
{
lean_object* v_val_5555_; lean_object* v___x_5557_; uint8_t v_isShared_5558_; uint8_t v_isSharedCheck_5565_; 
v_val_5555_ = lean_ctor_get(v_x_5553_, 0);
v_isSharedCheck_5565_ = !lean_is_exclusive(v_x_5553_);
if (v_isSharedCheck_5565_ == 0)
{
v___x_5557_ = v_x_5553_;
v_isShared_5558_ = v_isSharedCheck_5565_;
goto v_resetjp_5556_;
}
else
{
lean_inc(v_val_5555_);
lean_dec(v_x_5553_);
v___x_5557_ = lean_box(0);
v_isShared_5558_ = v_isSharedCheck_5565_;
goto v_resetjp_5556_;
}
v_resetjp_5556_:
{
size_t v_sz_5559_; size_t v___x_5560_; lean_object* v___x_5561_; lean_object* v___x_5563_; 
v_sz_5559_ = lean_array_size(v_val_5555_);
v___x_5560_ = ((size_t)0ULL);
v___x_5561_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(v_sz_5559_, v___x_5560_, v_val_5555_);
if (v_isShared_5558_ == 0)
{
lean_ctor_set_tag(v___x_5557_, 7);
lean_ctor_set(v___x_5557_, 0, v___x_5561_);
v___x_5563_ = v___x_5557_;
goto v_reusejp_5562_;
}
else
{
lean_object* v_reuseFailAlloc_5564_; 
v_reuseFailAlloc_5564_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5564_, 0, v___x_5561_);
v___x_5563_ = v_reuseFailAlloc_5564_;
goto v_reusejp_5562_;
}
v_reusejp_5562_:
{
return v___x_5563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey(lean_object* v_self_5567_, uint8_t v_format_5568_, lean_object* v_keyData_5569_, lean_object* v_algorithm_5570_, uint8_t v_extractable_5571_, lean_object* v_keyUsages_5572_){
_start:
{
lean_object* v___x_5574_; lean_object* v___y_5576_; lean_object* v___y_5577_; lean_object* v___y_5578_; lean_object* v___y_5594_; lean_object* v___y_5595_; lean_object* v___y_5606_; 
v___x_5574_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_importKey___closed__0));
switch(v_format_5568_)
{
case 0:
{
lean_object* v___x_5709_; 
v___x_5709_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5606_ = v___x_5709_;
goto v___jp_5605_;
}
case 1:
{
lean_object* v___x_5710_; 
v___x_5710_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5606_ = v___x_5710_;
goto v___jp_5605_;
}
case 2:
{
lean_object* v___x_5711_; 
v___x_5711_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5606_ = v___x_5711_;
goto v___jp_5605_;
}
case 3:
{
lean_object* v___x_5712_; 
v___x_5712_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5606_ = v___x_5712_;
goto v___jp_5605_;
}
case 4:
{
lean_object* v___x_5713_; 
v___x_5713_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5606_ = v___x_5713_;
goto v___jp_5605_;
}
case 5:
{
lean_object* v___x_5714_; 
v___x_5714_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5606_ = v___x_5714_;
goto v___jp_5605_;
}
case 6:
{
lean_object* v___x_5715_; 
v___x_5715_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5606_ = v___x_5715_;
goto v___jp_5605_;
}
default: 
{
lean_object* v___x_5716_; 
v___x_5716_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5606_ = v___x_5716_;
goto v___jp_5605_;
}
}
v___jp_5575_:
{
lean_object* v___x_5579_; size_t v_sz_5580_; size_t v___x_5581_; lean_object* v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; 
v___x_5579_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5579_, 0, v_extractable_5571_);
v_sz_5580_ = lean_array_size(v_keyUsages_5572_);
v___x_5581_ = ((size_t)0ULL);
v___x_5582_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5580_, v___x_5581_, v_keyUsages_5572_);
v___x_5583_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5583_, 0, v___x_5582_);
v___x_5584_ = lean_unsigned_to_nat(5u);
v___x_5585_ = lean_mk_empty_array_with_capacity(v___x_5584_);
lean_inc(v___y_5577_);
v___x_5586_ = lean_array_push(v___x_5585_, v___y_5577_);
v___x_5587_ = lean_array_push(v___x_5586_, v___y_5576_);
v___x_5588_ = lean_array_push(v___x_5587_, v___y_5578_);
v___x_5589_ = lean_array_push(v___x_5588_, v___x_5579_);
v___x_5590_ = lean_array_push(v___x_5589_, v___x_5583_);
v___x_5591_ = l_Lasm_JS_Web_Support_args(v___x_5590_);
v___x_5592_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0(v_self_5567_, v___x_5574_, v___x_5591_);
return v___x_5592_;
}
v___jp_5593_:
{
if (lean_obj_tag(v_algorithm_5570_) == 0)
{
lean_object* v_value_5596_; 
v_value_5596_ = lean_ctor_get(v_algorithm_5570_, 0);
lean_inc(v_value_5596_);
lean_dec_ref_known(v_algorithm_5570_, 1);
v___y_5576_ = v___y_5595_;
v___y_5577_ = v___y_5594_;
v___y_5578_ = v_value_5596_;
goto v___jp_5575_;
}
else
{
lean_object* v_value_5597_; lean_object* v___x_5599_; uint8_t v_isShared_5600_; uint8_t v_isSharedCheck_5604_; 
v_value_5597_ = lean_ctor_get(v_algorithm_5570_, 0);
v_isSharedCheck_5604_ = !lean_is_exclusive(v_algorithm_5570_);
if (v_isSharedCheck_5604_ == 0)
{
v___x_5599_ = v_algorithm_5570_;
v_isShared_5600_ = v_isSharedCheck_5604_;
goto v_resetjp_5598_;
}
else
{
lean_inc(v_value_5597_);
lean_dec(v_algorithm_5570_);
v___x_5599_ = lean_box(0);
v_isShared_5600_ = v_isSharedCheck_5604_;
goto v_resetjp_5598_;
}
v_resetjp_5598_:
{
lean_object* v___x_5602_; 
if (v_isShared_5600_ == 0)
{
lean_ctor_set_tag(v___x_5599_, 4);
v___x_5602_ = v___x_5599_;
goto v_reusejp_5601_;
}
else
{
lean_object* v_reuseFailAlloc_5603_; 
v_reuseFailAlloc_5603_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5603_, 0, v_value_5597_);
v___x_5602_ = v_reuseFailAlloc_5603_;
goto v_reusejp_5601_;
}
v_reusejp_5601_:
{
v___y_5576_ = v___y_5595_;
v___y_5577_ = v___y_5594_;
v___y_5578_ = v___x_5602_;
goto v___jp_5575_;
}
}
}
}
v___jp_5605_:
{
if (lean_obj_tag(v_keyData_5569_) == 0)
{
lean_object* v_value_5607_; lean_object* v___x_5609_; uint8_t v_isShared_5610_; uint8_t v_isSharedCheck_5614_; 
v_value_5607_ = lean_ctor_get(v_keyData_5569_, 0);
v_isSharedCheck_5614_ = !lean_is_exclusive(v_keyData_5569_);
if (v_isSharedCheck_5614_ == 0)
{
v___x_5609_ = v_keyData_5569_;
v_isShared_5610_ = v_isSharedCheck_5614_;
goto v_resetjp_5608_;
}
else
{
lean_inc(v_value_5607_);
lean_dec(v_keyData_5569_);
v___x_5609_ = lean_box(0);
v_isShared_5610_ = v_isSharedCheck_5614_;
goto v_resetjp_5608_;
}
v_resetjp_5608_:
{
lean_object* v___x_5612_; 
if (v_isShared_5610_ == 0)
{
lean_ctor_set_tag(v___x_5609_, 6);
v___x_5612_ = v___x_5609_;
goto v_reusejp_5611_;
}
else
{
lean_object* v_reuseFailAlloc_5613_; 
v_reuseFailAlloc_5613_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5613_, 0, v_value_5607_);
v___x_5612_ = v_reuseFailAlloc_5613_;
goto v_reusejp_5611_;
}
v_reusejp_5611_:
{
v___y_5594_ = v___y_5606_;
v___y_5595_ = v___x_5612_;
goto v___jp_5593_;
}
}
}
else
{
lean_object* v_value_5615_; lean_object* v_kty_5616_; lean_object* v_use_5617_; lean_object* v_key__ops_5618_; lean_object* v_alg_5619_; lean_object* v_ext_5620_; lean_object* v_crv_5621_; lean_object* v_x_5622_; lean_object* v_y_5623_; lean_object* v_d_5624_; lean_object* v_n_5625_; lean_object* v_e_5626_; lean_object* v_p_5627_; lean_object* v_q_5628_; lean_object* v_dp_5629_; lean_object* v_dq_5630_; lean_object* v_qi_5631_; lean_object* v_oth_5632_; lean_object* v_k_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; lean_object* v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; lean_object* v___x_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; 
v_value_5615_ = lean_ctor_get(v_keyData_5569_, 0);
lean_inc_ref(v_value_5615_);
lean_dec_ref_known(v_keyData_5569_, 1);
v_kty_5616_ = lean_ctor_get(v_value_5615_, 0);
lean_inc(v_kty_5616_);
v_use_5617_ = lean_ctor_get(v_value_5615_, 1);
lean_inc(v_use_5617_);
v_key__ops_5618_ = lean_ctor_get(v_value_5615_, 2);
lean_inc(v_key__ops_5618_);
v_alg_5619_ = lean_ctor_get(v_value_5615_, 3);
lean_inc(v_alg_5619_);
v_ext_5620_ = lean_ctor_get(v_value_5615_, 4);
lean_inc(v_ext_5620_);
v_crv_5621_ = lean_ctor_get(v_value_5615_, 5);
lean_inc(v_crv_5621_);
v_x_5622_ = lean_ctor_get(v_value_5615_, 6);
lean_inc(v_x_5622_);
v_y_5623_ = lean_ctor_get(v_value_5615_, 7);
lean_inc(v_y_5623_);
v_d_5624_ = lean_ctor_get(v_value_5615_, 8);
lean_inc(v_d_5624_);
v_n_5625_ = lean_ctor_get(v_value_5615_, 9);
lean_inc(v_n_5625_);
v_e_5626_ = lean_ctor_get(v_value_5615_, 10);
lean_inc(v_e_5626_);
v_p_5627_ = lean_ctor_get(v_value_5615_, 11);
lean_inc(v_p_5627_);
v_q_5628_ = lean_ctor_get(v_value_5615_, 12);
lean_inc(v_q_5628_);
v_dp_5629_ = lean_ctor_get(v_value_5615_, 13);
lean_inc(v_dp_5629_);
v_dq_5630_ = lean_ctor_get(v_value_5615_, 14);
lean_inc(v_dq_5630_);
v_qi_5631_ = lean_ctor_get(v_value_5615_, 15);
lean_inc(v_qi_5631_);
v_oth_5632_ = lean_ctor_get(v_value_5615_, 16);
lean_inc(v_oth_5632_);
v_k_5633_ = lean_ctor_get(v_value_5615_, 17);
lean_inc(v_k_5633_);
lean_dec_ref(v_value_5615_);
v___x_5634_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
v___x_5635_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_kty_5616_);
v___x_5636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5636_, 0, v___x_5634_);
lean_ctor_set(v___x_5636_, 1, v___x_5635_);
v___x_5637_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_5638_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_use_5617_);
v___x_5639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5639_, 0, v___x_5637_);
lean_ctor_set(v___x_5639_, 1, v___x_5638_);
v___x_5640_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_5641_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1(v_key__ops_5618_);
v___x_5642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5642_, 0, v___x_5640_);
lean_ctor_set(v___x_5642_, 1, v___x_5641_);
v___x_5643_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_5644_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_alg_5619_);
v___x_5645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5645_, 0, v___x_5643_);
lean_ctor_set(v___x_5645_, 1, v___x_5644_);
v___x_5646_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_5647_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(v_ext_5620_);
lean_dec(v_ext_5620_);
v___x_5648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5648_, 0, v___x_5646_);
lean_ctor_set(v___x_5648_, 1, v___x_5647_);
v___x_5649_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_5650_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_crv_5621_);
v___x_5651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5651_, 0, v___x_5649_);
lean_ctor_set(v___x_5651_, 1, v___x_5650_);
v___x_5652_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_5653_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_x_5622_);
v___x_5654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5654_, 0, v___x_5652_);
lean_ctor_set(v___x_5654_, 1, v___x_5653_);
v___x_5655_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_5656_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_y_5623_);
v___x_5657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5657_, 0, v___x_5655_);
lean_ctor_set(v___x_5657_, 1, v___x_5656_);
v___x_5658_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_5659_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_d_5624_);
v___x_5660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5660_, 0, v___x_5658_);
lean_ctor_set(v___x_5660_, 1, v___x_5659_);
v___x_5661_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_5662_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_n_5625_);
v___x_5663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5663_, 0, v___x_5661_);
lean_ctor_set(v___x_5663_, 1, v___x_5662_);
v___x_5664_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_5665_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_e_5626_);
v___x_5666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5666_, 0, v___x_5664_);
lean_ctor_set(v___x_5666_, 1, v___x_5665_);
v___x_5667_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_5668_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_p_5627_);
v___x_5669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5669_, 0, v___x_5667_);
lean_ctor_set(v___x_5669_, 1, v___x_5668_);
v___x_5670_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_5671_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_q_5628_);
v___x_5672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5672_, 0, v___x_5670_);
lean_ctor_set(v___x_5672_, 1, v___x_5671_);
v___x_5673_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_5674_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_dp_5629_);
v___x_5675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5675_, 0, v___x_5673_);
lean_ctor_set(v___x_5675_, 1, v___x_5674_);
v___x_5676_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_5677_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_dq_5630_);
v___x_5678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5678_, 0, v___x_5676_);
lean_ctor_set(v___x_5678_, 1, v___x_5677_);
v___x_5679_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_5680_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_qi_5631_);
v___x_5681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5681_, 0, v___x_5679_);
lean_ctor_set(v___x_5681_, 1, v___x_5680_);
v___x_5682_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_5683_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3(v_oth_5632_);
v___x_5684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5684_, 0, v___x_5682_);
lean_ctor_set(v___x_5684_, 1, v___x_5683_);
v___x_5685_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_5686_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_k_5633_);
v___x_5687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5687_, 0, v___x_5685_);
lean_ctor_set(v___x_5687_, 1, v___x_5686_);
v___x_5688_ = lean_unsigned_to_nat(18u);
v___x_5689_ = lean_mk_empty_array_with_capacity(v___x_5688_);
v___x_5690_ = lean_array_push(v___x_5689_, v___x_5636_);
v___x_5691_ = lean_array_push(v___x_5690_, v___x_5639_);
v___x_5692_ = lean_array_push(v___x_5691_, v___x_5642_);
v___x_5693_ = lean_array_push(v___x_5692_, v___x_5645_);
v___x_5694_ = lean_array_push(v___x_5693_, v___x_5648_);
v___x_5695_ = lean_array_push(v___x_5694_, v___x_5651_);
v___x_5696_ = lean_array_push(v___x_5695_, v___x_5654_);
v___x_5697_ = lean_array_push(v___x_5696_, v___x_5657_);
v___x_5698_ = lean_array_push(v___x_5697_, v___x_5660_);
v___x_5699_ = lean_array_push(v___x_5698_, v___x_5663_);
v___x_5700_ = lean_array_push(v___x_5699_, v___x_5666_);
v___x_5701_ = lean_array_push(v___x_5700_, v___x_5669_);
v___x_5702_ = lean_array_push(v___x_5701_, v___x_5672_);
v___x_5703_ = lean_array_push(v___x_5702_, v___x_5675_);
v___x_5704_ = lean_array_push(v___x_5703_, v___x_5678_);
v___x_5705_ = lean_array_push(v___x_5704_, v___x_5681_);
v___x_5706_ = lean_array_push(v___x_5705_, v___x_5684_);
v___x_5707_ = lean_array_push(v___x_5706_, v___x_5687_);
v___x_5708_ = l_Lasm_JS_Web_Support_fields(v___x_5707_);
lean_dec_ref(v___x_5707_);
v___y_5594_ = v___y_5606_;
v___y_5595_ = v___x_5708_;
goto v___jp_5593_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey___boxed(lean_object* v_self_5717_, lean_object* v_format_5718_, lean_object* v_keyData_5719_, lean_object* v_algorithm_5720_, lean_object* v_extractable_5721_, lean_object* v_keyUsages_5722_, lean_object* v_a_5723_){
_start:
{
uint8_t v_format_boxed_5724_; uint8_t v_extractable_boxed_5725_; lean_object* v_res_5726_; 
v_format_boxed_5724_ = lean_unbox(v_format_5718_);
v_extractable_boxed_5725_ = lean_unbox(v_extractable_5721_);
v_res_5726_ = l_Lasm_JS_Web_SubtleCrypto_importKey(v_self_5717_, v_format_boxed_5724_, v_keyData_5719_, v_algorithm_5720_, v_extractable_boxed_5725_, v_keyUsages_5722_);
return v_res_5726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0(lean_object* v_x_5727_){
_start:
{
lean_object* v_val_5730_; 
if (lean_obj_tag(v_x_5727_) == 0)
{
lean_object* v_a_5732_; lean_object* v___x_5734_; uint8_t v_isShared_5735_; uint8_t v_isSharedCheck_5740_; 
v_a_5732_ = lean_ctor_get(v_x_5727_, 0);
v_isSharedCheck_5740_ = !lean_is_exclusive(v_x_5727_);
if (v_isSharedCheck_5740_ == 0)
{
v___x_5734_ = v_x_5727_;
v_isShared_5735_ = v_isSharedCheck_5740_;
goto v_resetjp_5733_;
}
else
{
lean_inc(v_a_5732_);
lean_dec(v_x_5727_);
v___x_5734_ = lean_box(0);
v_isShared_5735_ = v_isSharedCheck_5740_;
goto v_resetjp_5733_;
}
v_resetjp_5733_:
{
lean_object* v___x_5737_; 
if (v_isShared_5735_ == 0)
{
v___x_5737_ = v___x_5734_;
goto v_reusejp_5736_;
}
else
{
lean_object* v_reuseFailAlloc_5739_; 
v_reuseFailAlloc_5739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5739_, 0, v_a_5732_);
v___x_5737_ = v_reuseFailAlloc_5739_;
goto v_reusejp_5736_;
}
v_reusejp_5736_:
{
lean_object* v___x_5738_; 
v___x_5738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5738_, 0, v___x_5737_);
return v___x_5738_;
}
}
}
else
{
lean_object* v_a_5741_; lean_object* v___x_5743_; uint8_t v_isShared_5744_; uint8_t v_isSharedCheck_5754_; 
v_a_5741_ = lean_ctor_get(v_x_5727_, 0);
v_isSharedCheck_5754_ = !lean_is_exclusive(v_x_5727_);
if (v_isSharedCheck_5754_ == 0)
{
v___x_5743_ = v_x_5727_;
v_isShared_5744_ = v_isSharedCheck_5754_;
goto v_resetjp_5742_;
}
else
{
lean_inc(v_a_5741_);
lean_dec(v_x_5727_);
v___x_5743_ = lean_box(0);
v_isShared_5744_ = v_isSharedCheck_5754_;
goto v_resetjp_5742_;
}
v_resetjp_5742_:
{
lean_object* v___x_5745_; 
v___x_5745_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(v_a_5741_);
if (lean_obj_tag(v___x_5745_) == 0)
{
lean_object* v_a_5746_; lean_object* v___x_5748_; 
v_a_5746_ = lean_ctor_get(v___x_5745_, 0);
lean_inc(v_a_5746_);
lean_dec_ref_known(v___x_5745_, 1);
if (v_isShared_5744_ == 0)
{
lean_ctor_set(v___x_5743_, 0, v_a_5746_);
v___x_5748_ = v___x_5743_;
goto v_reusejp_5747_;
}
else
{
lean_object* v_reuseFailAlloc_5749_; 
v_reuseFailAlloc_5749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5749_, 0, v_a_5746_);
v___x_5748_ = v_reuseFailAlloc_5749_;
goto v_reusejp_5747_;
}
v_reusejp_5747_:
{
v_val_5730_ = v___x_5748_;
goto v___jp_5729_;
}
}
else
{
lean_object* v_a_5750_; lean_object* v___x_5752_; 
v_a_5750_ = lean_ctor_get(v___x_5745_, 0);
lean_inc(v_a_5750_);
lean_dec_ref_known(v___x_5745_, 1);
if (v_isShared_5744_ == 0)
{
lean_ctor_set_tag(v___x_5743_, 0);
lean_ctor_set(v___x_5743_, 0, v_a_5750_);
v___x_5752_ = v___x_5743_;
goto v_reusejp_5751_;
}
else
{
lean_object* v_reuseFailAlloc_5753_; 
v_reuseFailAlloc_5753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5753_, 0, v_a_5750_);
v___x_5752_ = v_reuseFailAlloc_5753_;
goto v_reusejp_5751_;
}
v_reusejp_5751_:
{
v_val_5730_ = v___x_5752_;
goto v___jp_5729_;
}
}
}
}
v___jp_5729_:
{
lean_object* v___x_5731_; 
v___x_5731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5731_, 0, v_val_5730_);
return v___x_5731_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0___boxed(lean_object* v_x_5755_, lean_object* v___y_5756_){
_start:
{
lean_object* v_res_5757_; 
v_res_5757_ = l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0(v_x_5755_);
return v_res_5757_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(uint8_t v_await_5758_, uint64_t v_extra_5759_){
_start:
{
uint64_t v___x_5760_; uint64_t v___y_5762_; 
v___x_5760_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
if (v_await_5758_ == 0)
{
uint64_t v___x_5765_; 
v___x_5765_ = 0ULL;
v___y_5762_ = v___x_5765_;
goto v___jp_5761_;
}
else
{
uint64_t v___x_5766_; 
v___x_5766_ = 2ULL;
v___y_5762_ = v___x_5766_;
goto v___jp_5761_;
}
v___jp_5761_:
{
uint64_t v___x_5763_; uint64_t v___x_5764_; 
v___x_5763_ = lean_uint64_lor(v___x_5760_, v___y_5762_);
v___x_5764_ = lean_uint64_lor(v___x_5763_, v_extra_5759_);
return v___x_5764_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___boxed(lean_object* v_await_5767_, lean_object* v_extra_5768_){
_start:
{
uint8_t v_await_boxed_5769_; uint64_t v_extra_boxed_5770_; uint64_t v_res_5771_; lean_object* v_r_5772_; 
v_await_boxed_5769_ = lean_unbox(v_await_5767_);
v_extra_boxed_5770_ = lean_unbox_uint64(v_extra_5768_);
lean_dec_ref(v_extra_5768_);
v_res_5771_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(v_await_boxed_5769_, v_extra_boxed_5770_);
v_r_5772_ = lean_box_uint64(v_res_5771_);
return v_r_5772_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__0(lean_object* v_x_5773_){
_start:
{
lean_object* v___x_5775_; 
v___x_5775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5775_, 0, v_x_5773_);
return v___x_5775_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v_x_5776_, lean_object* v___y_5777_){
_start:
{
lean_object* v_res_5778_; 
v_res_5778_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__0(v_x_5776_);
return v_res_5778_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__3(lean_object* v___f_5779_, lean_object* v_x_5780_){
_start:
{
if (lean_obj_tag(v_x_5780_) == 0)
{
lean_object* v_a_5782_; lean_object* v___x_5784_; uint8_t v_isShared_5785_; uint8_t v_isSharedCheck_5790_; 
lean_dec_ref(v___f_5779_);
v_a_5782_ = lean_ctor_get(v_x_5780_, 0);
v_isSharedCheck_5790_ = !lean_is_exclusive(v_x_5780_);
if (v_isSharedCheck_5790_ == 0)
{
v___x_5784_ = v_x_5780_;
v_isShared_5785_ = v_isSharedCheck_5790_;
goto v_resetjp_5783_;
}
else
{
lean_inc(v_a_5782_);
lean_dec(v_x_5780_);
v___x_5784_ = lean_box(0);
v_isShared_5785_ = v_isSharedCheck_5790_;
goto v_resetjp_5783_;
}
v_resetjp_5783_:
{
lean_object* v___x_5787_; 
if (v_isShared_5785_ == 0)
{
v___x_5787_ = v___x_5784_;
goto v_reusejp_5786_;
}
else
{
lean_object* v_reuseFailAlloc_5789_; 
v_reuseFailAlloc_5789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5789_, 0, v_a_5782_);
v___x_5787_ = v_reuseFailAlloc_5789_;
goto v_reusejp_5786_;
}
v_reusejp_5786_:
{
lean_object* v___x_5788_; 
v___x_5788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5788_, 0, v___x_5787_);
return v___x_5788_;
}
}
}
else
{
lean_object* v___x_5792_; uint8_t v_isShared_5793_; uint8_t v_isSharedCheck_5802_; 
v_isSharedCheck_5802_ = !lean_is_exclusive(v_x_5780_);
if (v_isSharedCheck_5802_ == 0)
{
lean_object* v_unused_5803_; 
v_unused_5803_ = lean_ctor_get(v_x_5780_, 0);
lean_dec(v_unused_5803_);
v___x_5792_ = v_x_5780_;
v_isShared_5793_ = v_isSharedCheck_5802_;
goto v_resetjp_5791_;
}
else
{
lean_dec(v_x_5780_);
v___x_5792_ = lean_box(0);
v_isShared_5793_ = v_isSharedCheck_5802_;
goto v_resetjp_5791_;
}
v_resetjp_5791_:
{
lean_object* v___x_5794_; uint8_t v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5798_; 
v___x_5794_ = lean_unsigned_to_nat(0u);
v___x_5795_ = 0;
v___x_5796_ = lean_io_promise_new();
if (v_isShared_5793_ == 0)
{
lean_ctor_set(v___x_5792_, 0, v___x_5796_);
v___x_5798_ = v___x_5792_;
goto v_reusejp_5797_;
}
else
{
lean_object* v_reuseFailAlloc_5801_; 
v_reuseFailAlloc_5801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5801_, 0, v___x_5796_);
v___x_5798_ = v_reuseFailAlloc_5801_;
goto v_reusejp_5797_;
}
v_reusejp_5797_:
{
lean_object* v___x_5799_; lean_object* v___x_5800_; 
v___x_5799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5799_, 0, v___x_5798_);
v___x_5800_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5794_, v___x_5795_, v___x_5799_, v___f_5779_);
return v___x_5800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__3___boxed(lean_object* v___f_5804_, lean_object* v_x_5805_, lean_object* v___y_5806_){
_start:
{
lean_object* v_res_5807_; 
v_res_5807_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__3(v___f_5804_, v_x_5805_);
return v_res_5807_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__2(lean_object* v___f_5808_, lean_object* v_x_5809_){
_start:
{
if (lean_obj_tag(v_x_5809_) == 0)
{
lean_object* v_a_5811_; lean_object* v___x_5813_; uint8_t v_isShared_5814_; uint8_t v_isSharedCheck_5819_; 
lean_dec_ref(v___f_5808_);
v_a_5811_ = lean_ctor_get(v_x_5809_, 0);
v_isSharedCheck_5819_ = !lean_is_exclusive(v_x_5809_);
if (v_isSharedCheck_5819_ == 0)
{
v___x_5813_ = v_x_5809_;
v_isShared_5814_ = v_isSharedCheck_5819_;
goto v_resetjp_5812_;
}
else
{
lean_inc(v_a_5811_);
lean_dec(v_x_5809_);
v___x_5813_ = lean_box(0);
v_isShared_5814_ = v_isSharedCheck_5819_;
goto v_resetjp_5812_;
}
v_resetjp_5812_:
{
lean_object* v___x_5816_; 
if (v_isShared_5814_ == 0)
{
v___x_5816_ = v___x_5813_;
goto v_reusejp_5815_;
}
else
{
lean_object* v_reuseFailAlloc_5818_; 
v_reuseFailAlloc_5818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5818_, 0, v_a_5811_);
v___x_5816_ = v_reuseFailAlloc_5818_;
goto v_reusejp_5815_;
}
v_reusejp_5815_:
{
lean_object* v___x_5817_; 
v___x_5817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5817_, 0, v___x_5816_);
return v___x_5817_;
}
}
}
else
{
lean_object* v_a_5820_; lean_object* v___x_5821_; 
v_a_5820_ = lean_ctor_get(v_x_5809_, 0);
lean_inc(v_a_5820_);
lean_dec_ref_known(v_x_5809_, 1);
v___x_5821_ = lean_apply_2(v___f_5808_, v_a_5820_, lean_box(0));
return v___x_5821_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__2___boxed(lean_object* v___f_5822_, lean_object* v_x_5823_, lean_object* v___y_5824_){
_start:
{
lean_object* v_res_5825_; 
v_res_5825_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__2(v___f_5822_, v_x_5823_);
return v_res_5825_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__9(lean_object* v_failurePrefix_5826_, uint32_t v_op_5827_, uint64_t v_flags_5828_, lean_object* v_payload_5829_, lean_object* v___f_5830_, lean_object* v___f_5831_, lean_object* v___f_5832_, lean_object* v_x_5833_){
_start:
{
if (lean_obj_tag(v_x_5833_) == 0)
{
lean_object* v_a_5835_; lean_object* v___x_5837_; uint8_t v_isShared_5838_; uint8_t v_isSharedCheck_5843_; 
lean_dec_ref(v___f_5832_);
lean_dec_ref(v___f_5831_);
lean_dec_ref(v___f_5830_);
lean_dec(v_payload_5829_);
v_a_5835_ = lean_ctor_get(v_x_5833_, 0);
v_isSharedCheck_5843_ = !lean_is_exclusive(v_x_5833_);
if (v_isSharedCheck_5843_ == 0)
{
v___x_5837_ = v_x_5833_;
v_isShared_5838_ = v_isSharedCheck_5843_;
goto v_resetjp_5836_;
}
else
{
lean_inc(v_a_5835_);
lean_dec(v_x_5833_);
v___x_5837_ = lean_box(0);
v_isShared_5838_ = v_isSharedCheck_5843_;
goto v_resetjp_5836_;
}
v_resetjp_5836_:
{
lean_object* v___x_5840_; 
if (v_isShared_5838_ == 0)
{
v___x_5840_ = v___x_5837_;
goto v_reusejp_5839_;
}
else
{
lean_object* v_reuseFailAlloc_5842_; 
v_reuseFailAlloc_5842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5842_, 0, v_a_5835_);
v___x_5840_ = v_reuseFailAlloc_5842_;
goto v_reusejp_5839_;
}
v_reusejp_5839_:
{
lean_object* v___x_5841_; 
v___x_5841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5841_, 0, v___x_5840_);
return v___x_5841_;
}
}
}
else
{
lean_object* v_a_5844_; lean_object* v___x_5846_; uint8_t v_isShared_5847_; uint8_t v_isSharedCheck_5890_; 
v_a_5844_ = lean_ctor_get(v_x_5833_, 0);
v_isSharedCheck_5890_ = !lean_is_exclusive(v_x_5833_);
if (v_isSharedCheck_5890_ == 0)
{
v___x_5846_ = v_x_5833_;
v_isShared_5847_ = v_isSharedCheck_5890_;
goto v_resetjp_5845_;
}
else
{
lean_inc(v_a_5844_);
lean_dec(v_x_5833_);
v___x_5846_ = lean_box(0);
v_isShared_5847_ = v_isSharedCheck_5890_;
goto v_resetjp_5845_;
}
v_resetjp_5845_:
{
lean_object* v___x_5848_; lean_object* v___x_5849_; uint8_t v___x_5850_; 
v___x_5848_ = lean_string_utf8_byte_size(v_failurePrefix_5826_);
v___x_5849_ = lean_unsigned_to_nat(0u);
v___x_5850_ = lean_nat_dec_eq(v___x_5848_, v___x_5849_);
if (v___x_5850_ == 0)
{
lean_object* v___f_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; lean_object* v___f_5855_; lean_object* v_val_5857_; lean_object* v___x_5862_; 
lean_dec_ref(v___f_5832_);
lean_inc(v_a_5844_);
v___f_5851_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5851_, 0, v_a_5844_);
v___x_5852_ = lean_box(v___x_5850_);
v___x_5853_ = lean_box_uint32(v_op_5827_);
v___x_5854_ = lean_box_uint64(v_flags_5828_);
lean_inc(v_payload_5829_);
v___f_5855_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_5855_, 0, v___x_5849_);
lean_closure_set(v___f_5855_, 1, v___x_5852_);
lean_closure_set(v___f_5855_, 2, v___f_5851_);
lean_closure_set(v___f_5855_, 3, v_a_5844_);
lean_closure_set(v___f_5855_, 4, v___x_5853_);
lean_closure_set(v___f_5855_, 5, v___x_5854_);
lean_closure_set(v___f_5855_, 6, v_payload_5829_);
v___x_5862_ = l_Lasm_JS_Wire_encodeIO(v_payload_5829_);
lean_dec(v_payload_5829_);
if (lean_obj_tag(v___x_5862_) == 0)
{
lean_object* v_a_5863_; lean_object* v___x_5865_; 
v_a_5863_ = lean_ctor_get(v___x_5862_, 0);
lean_inc(v_a_5863_);
lean_dec_ref_known(v___x_5862_, 1);
if (v_isShared_5847_ == 0)
{
lean_ctor_set(v___x_5846_, 0, v_a_5863_);
v___x_5865_ = v___x_5846_;
goto v_reusejp_5864_;
}
else
{
lean_object* v_reuseFailAlloc_5866_; 
v_reuseFailAlloc_5866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5866_, 0, v_a_5863_);
v___x_5865_ = v_reuseFailAlloc_5866_;
goto v_reusejp_5864_;
}
v_reusejp_5864_:
{
v_val_5857_ = v___x_5865_;
goto v___jp_5856_;
}
}
else
{
lean_object* v_a_5867_; lean_object* v___x_5869_; 
v_a_5867_ = lean_ctor_get(v___x_5862_, 0);
lean_inc(v_a_5867_);
lean_dec_ref_known(v___x_5862_, 1);
if (v_isShared_5847_ == 0)
{
lean_ctor_set_tag(v___x_5846_, 0);
lean_ctor_set(v___x_5846_, 0, v_a_5867_);
v___x_5869_ = v___x_5846_;
goto v_reusejp_5868_;
}
else
{
lean_object* v_reuseFailAlloc_5870_; 
v_reuseFailAlloc_5870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5870_, 0, v_a_5867_);
v___x_5869_ = v_reuseFailAlloc_5870_;
goto v_reusejp_5868_;
}
v_reusejp_5868_:
{
v_val_5857_ = v___x_5869_;
goto v___jp_5856_;
}
}
v___jp_5856_:
{
lean_object* v___x_5858_; lean_object* v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5861_; 
v___x_5858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5858_, 0, v_val_5857_);
v___x_5859_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5849_, v___x_5850_, v___x_5858_, v___f_5855_);
v___x_5860_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5849_, v___x_5850_, v___x_5859_, v___f_5830_);
v___x_5861_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5849_, v___x_5850_, v___x_5860_, v___f_5831_);
return v___x_5861_;
}
}
else
{
lean_object* v___f_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___f_5874_; uint8_t v___x_5875_; lean_object* v_val_5877_; lean_object* v___x_5881_; 
lean_dec_ref(v___f_5831_);
lean_dec_ref(v___f_5830_);
lean_inc(v_a_5844_);
v___f_5871_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5871_, 0, v_a_5844_);
v___x_5872_ = lean_box_uint32(v_op_5827_);
v___x_5873_ = lean_box_uint64(v_flags_5828_);
lean_inc(v_payload_5829_);
v___f_5874_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_5874_, 0, v___f_5871_);
lean_closure_set(v___f_5874_, 1, v_a_5844_);
lean_closure_set(v___f_5874_, 2, v___x_5872_);
lean_closure_set(v___f_5874_, 3, v___x_5873_);
lean_closure_set(v___f_5874_, 4, v_payload_5829_);
v___x_5875_ = 0;
v___x_5881_ = l_Lasm_JS_Wire_encodeIO(v_payload_5829_);
lean_dec(v_payload_5829_);
if (lean_obj_tag(v___x_5881_) == 0)
{
lean_object* v_a_5882_; lean_object* v___x_5884_; 
v_a_5882_ = lean_ctor_get(v___x_5881_, 0);
lean_inc(v_a_5882_);
lean_dec_ref_known(v___x_5881_, 1);
if (v_isShared_5847_ == 0)
{
lean_ctor_set(v___x_5846_, 0, v_a_5882_);
v___x_5884_ = v___x_5846_;
goto v_reusejp_5883_;
}
else
{
lean_object* v_reuseFailAlloc_5885_; 
v_reuseFailAlloc_5885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5885_, 0, v_a_5882_);
v___x_5884_ = v_reuseFailAlloc_5885_;
goto v_reusejp_5883_;
}
v_reusejp_5883_:
{
v_val_5877_ = v___x_5884_;
goto v___jp_5876_;
}
}
else
{
lean_object* v_a_5886_; lean_object* v___x_5888_; 
v_a_5886_ = lean_ctor_get(v___x_5881_, 0);
lean_inc(v_a_5886_);
lean_dec_ref_known(v___x_5881_, 1);
if (v_isShared_5847_ == 0)
{
lean_ctor_set_tag(v___x_5846_, 0);
lean_ctor_set(v___x_5846_, 0, v_a_5886_);
v___x_5888_ = v___x_5846_;
goto v_reusejp_5887_;
}
else
{
lean_object* v_reuseFailAlloc_5889_; 
v_reuseFailAlloc_5889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5889_, 0, v_a_5886_);
v___x_5888_ = v_reuseFailAlloc_5889_;
goto v_reusejp_5887_;
}
v_reusejp_5887_:
{
v_val_5877_ = v___x_5888_;
goto v___jp_5876_;
}
}
v___jp_5876_:
{
lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; 
v___x_5878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5878_, 0, v_val_5877_);
v___x_5879_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5849_, v___x_5875_, v___x_5878_, v___f_5874_);
v___x_5880_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5849_, v___x_5875_, v___x_5879_, v___f_5832_);
return v___x_5880_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__9___boxed(lean_object* v_failurePrefix_5891_, lean_object* v_op_5892_, lean_object* v_flags_5893_, lean_object* v_payload_5894_, lean_object* v___f_5895_, lean_object* v___f_5896_, lean_object* v___f_5897_, lean_object* v_x_5898_, lean_object* v___y_5899_){
_start:
{
uint32_t v_op_boxed_5900_; uint64_t v_flags_boxed_5901_; lean_object* v_res_5902_; 
v_op_boxed_5900_ = lean_unbox_uint32(v_op_5892_);
lean_dec(v_op_5892_);
v_flags_boxed_5901_ = lean_unbox_uint64(v_flags_5893_);
lean_dec_ref(v_flags_5893_);
v_res_5902_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__9(v_failurePrefix_5891_, v_op_boxed_5900_, v_flags_boxed_5901_, v_payload_5894_, v___f_5895_, v___f_5896_, v___f_5897_, v_x_5898_);
lean_dec_ref(v_failurePrefix_5891_);
return v_res_5902_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__1(lean_object* v___f_5903_, lean_object* v_bytes_5904_){
_start:
{
lean_object* v___x_5906_; uint8_t v___x_5907_; lean_object* v_val_5909_; lean_object* v___x_5912_; 
v___x_5906_ = lean_unsigned_to_nat(0u);
v___x_5907_ = 0;
v___x_5912_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5904_);
if (lean_obj_tag(v___x_5912_) == 0)
{
lean_object* v_a_5913_; lean_object* v___x_5915_; uint8_t v_isShared_5916_; uint8_t v_isSharedCheck_5920_; 
v_a_5913_ = lean_ctor_get(v___x_5912_, 0);
v_isSharedCheck_5920_ = !lean_is_exclusive(v___x_5912_);
if (v_isSharedCheck_5920_ == 0)
{
v___x_5915_ = v___x_5912_;
v_isShared_5916_ = v_isSharedCheck_5920_;
goto v_resetjp_5914_;
}
else
{
lean_inc(v_a_5913_);
lean_dec(v___x_5912_);
v___x_5915_ = lean_box(0);
v_isShared_5916_ = v_isSharedCheck_5920_;
goto v_resetjp_5914_;
}
v_resetjp_5914_:
{
lean_object* v___x_5918_; 
if (v_isShared_5916_ == 0)
{
lean_ctor_set_tag(v___x_5915_, 1);
v___x_5918_ = v___x_5915_;
goto v_reusejp_5917_;
}
else
{
lean_object* v_reuseFailAlloc_5919_; 
v_reuseFailAlloc_5919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5919_, 0, v_a_5913_);
v___x_5918_ = v_reuseFailAlloc_5919_;
goto v_reusejp_5917_;
}
v_reusejp_5917_:
{
v_val_5909_ = v___x_5918_;
goto v___jp_5908_;
}
}
}
else
{
lean_object* v_a_5921_; lean_object* v___x_5923_; uint8_t v_isShared_5924_; uint8_t v_isSharedCheck_5928_; 
v_a_5921_ = lean_ctor_get(v___x_5912_, 0);
v_isSharedCheck_5928_ = !lean_is_exclusive(v___x_5912_);
if (v_isSharedCheck_5928_ == 0)
{
v___x_5923_ = v___x_5912_;
v_isShared_5924_ = v_isSharedCheck_5928_;
goto v_resetjp_5922_;
}
else
{
lean_inc(v_a_5921_);
lean_dec(v___x_5912_);
v___x_5923_ = lean_box(0);
v_isShared_5924_ = v_isSharedCheck_5928_;
goto v_resetjp_5922_;
}
v_resetjp_5922_:
{
lean_object* v___x_5926_; 
if (v_isShared_5924_ == 0)
{
lean_ctor_set_tag(v___x_5923_, 0);
v___x_5926_ = v___x_5923_;
goto v_reusejp_5925_;
}
else
{
lean_object* v_reuseFailAlloc_5927_; 
v_reuseFailAlloc_5927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5927_, 0, v_a_5921_);
v___x_5926_ = v_reuseFailAlloc_5927_;
goto v_reusejp_5925_;
}
v_reusejp_5925_:
{
v_val_5909_ = v___x_5926_;
goto v___jp_5908_;
}
}
}
v___jp_5908_:
{
lean_object* v___x_5910_; lean_object* v___x_5911_; 
v___x_5910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5910_, 0, v_val_5909_);
v___x_5911_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5906_, v___x_5907_, v___x_5910_, v___f_5903_);
return v___x_5911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__1___boxed(lean_object* v___f_5929_, lean_object* v_bytes_5930_, lean_object* v___y_5931_){
_start:
{
lean_object* v_res_5932_; 
v_res_5932_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__1(v___f_5929_, v_bytes_5930_);
lean_dec_ref(v_bytes_5930_);
return v_res_5932_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg(uint32_t v_op_5938_, uint64_t v_flags_5939_, lean_object* v_payload_5940_, lean_object* v_failurePrefix_5941_){
_start:
{
lean_object* v___f_5943_; lean_object* v___f_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___f_5947_; lean_object* v___f_5948_; lean_object* v___x_5949_; uint8_t v___x_5950_; lean_object* v_val_5952_; lean_object* v___x_5955_; 
v___f_5943_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___closed__2));
lean_inc_ref(v_failurePrefix_5941_);
v___f_5944_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5944_, 0, v_failurePrefix_5941_);
v___x_5945_ = lean_box_uint32(v_op_5938_);
v___x_5946_ = lean_box_uint64(v_flags_5939_);
v___f_5947_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5947_, 0, v_failurePrefix_5941_);
lean_closure_set(v___f_5947_, 1, v___x_5945_);
lean_closure_set(v___f_5947_, 2, v___x_5946_);
lean_closure_set(v___f_5947_, 3, v_payload_5940_);
lean_closure_set(v___f_5947_, 4, v___f_5944_);
lean_closure_set(v___f_5947_, 5, v___f_5943_);
lean_closure_set(v___f_5947_, 6, v___f_5943_);
v___f_5948_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5948_, 0, v___f_5947_);
v___x_5949_ = lean_unsigned_to_nat(0u);
v___x_5950_ = 0;
v___x_5955_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5955_) == 0)
{
lean_object* v_a_5956_; lean_object* v___x_5958_; uint8_t v_isShared_5959_; uint8_t v_isSharedCheck_5963_; 
v_a_5956_ = lean_ctor_get(v___x_5955_, 0);
v_isSharedCheck_5963_ = !lean_is_exclusive(v___x_5955_);
if (v_isSharedCheck_5963_ == 0)
{
v___x_5958_ = v___x_5955_;
v_isShared_5959_ = v_isSharedCheck_5963_;
goto v_resetjp_5957_;
}
else
{
lean_inc(v_a_5956_);
lean_dec(v___x_5955_);
v___x_5958_ = lean_box(0);
v_isShared_5959_ = v_isSharedCheck_5963_;
goto v_resetjp_5957_;
}
v_resetjp_5957_:
{
lean_object* v___x_5961_; 
if (v_isShared_5959_ == 0)
{
lean_ctor_set_tag(v___x_5958_, 1);
v___x_5961_ = v___x_5958_;
goto v_reusejp_5960_;
}
else
{
lean_object* v_reuseFailAlloc_5962_; 
v_reuseFailAlloc_5962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5962_, 0, v_a_5956_);
v___x_5961_ = v_reuseFailAlloc_5962_;
goto v_reusejp_5960_;
}
v_reusejp_5960_:
{
v_val_5952_ = v___x_5961_;
goto v___jp_5951_;
}
}
}
else
{
lean_object* v_a_5964_; lean_object* v___x_5966_; uint8_t v_isShared_5967_; uint8_t v_isSharedCheck_5971_; 
v_a_5964_ = lean_ctor_get(v___x_5955_, 0);
v_isSharedCheck_5971_ = !lean_is_exclusive(v___x_5955_);
if (v_isSharedCheck_5971_ == 0)
{
v___x_5966_ = v___x_5955_;
v_isShared_5967_ = v_isSharedCheck_5971_;
goto v_resetjp_5965_;
}
else
{
lean_inc(v_a_5964_);
lean_dec(v___x_5955_);
v___x_5966_ = lean_box(0);
v_isShared_5967_ = v_isSharedCheck_5971_;
goto v_resetjp_5965_;
}
v_resetjp_5965_:
{
lean_object* v___x_5969_; 
if (v_isShared_5967_ == 0)
{
lean_ctor_set_tag(v___x_5966_, 0);
v___x_5969_ = v___x_5966_;
goto v_reusejp_5968_;
}
else
{
lean_object* v_reuseFailAlloc_5970_; 
v_reuseFailAlloc_5970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5970_, 0, v_a_5964_);
v___x_5969_ = v_reuseFailAlloc_5970_;
goto v_reusejp_5968_;
}
v_reusejp_5968_:
{
v_val_5952_ = v___x_5969_;
goto v___jp_5951_;
}
}
}
v___jp_5951_:
{
lean_object* v___x_5953_; lean_object* v___x_5954_; 
v___x_5953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5953_, 0, v_val_5952_);
v___x_5954_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5949_, v___x_5950_, v___x_5953_, v___f_5948_);
return v___x_5954_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg___boxed(lean_object* v_op_5972_, lean_object* v_flags_5973_, lean_object* v_payload_5974_, lean_object* v_failurePrefix_5975_, lean_object* v_a_5976_){
_start:
{
uint32_t v_op_boxed_5977_; uint64_t v_flags_boxed_5978_; lean_object* v_res_5979_; 
v_op_boxed_5977_ = lean_unbox_uint32(v_op_5972_);
lean_dec(v_op_5972_);
v_flags_boxed_5978_ = lean_unbox_uint64(v_flags_5973_);
lean_dec_ref(v_flags_5973_);
v_res_5979_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg(v_op_boxed_5977_, v_flags_boxed_5978_, v_payload_5974_, v_failurePrefix_5975_);
return v_res_5979_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___closed__0(void){
_start:
{
uint64_t v___x_5980_; uint8_t v___x_5981_; uint64_t v___x_5982_; 
v___x_5980_ = 8ULL;
v___x_5981_ = 0;
v___x_5982_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(v___x_5981_, v___x_5980_);
return v___x_5982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(lean_object* v_o_5983_, lean_object* v_name_5984_, lean_object* v_args_5985_){
_start:
{
lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; uint32_t v___x_5990_; uint64_t v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; lean_object* v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; 
v___x_5987_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5988_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5988_, 0, v_o_5983_);
lean_ctor_set(v___x_5988_, 1, v___x_5987_);
v___x_5989_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5989_, 0, v_name_5984_);
v___x_5990_ = 205;
v___x_5991_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___closed__0);
v___x_5992_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5992_, 0, v_args_5985_);
v___x_5993_ = lean_unsigned_to_nat(3u);
v___x_5994_ = lean_mk_empty_array_with_capacity(v___x_5993_);
v___x_5995_ = lean_array_push(v___x_5994_, v___x_5988_);
v___x_5996_ = lean_array_push(v___x_5995_, v___x_5989_);
v___x_5997_ = lean_array_push(v___x_5996_, v___x_5992_);
v___x_5998_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5998_, 0, v___x_5997_);
v___x_5999_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg(v___x_5990_, v___x_5991_, v___x_5998_, v___x_5987_);
return v___x_5999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___boxed(lean_object* v_o_6000_, lean_object* v_name_6001_, lean_object* v_args_6002_, lean_object* v___y_6003_){
_start:
{
lean_object* v_res_6004_; 
v_res_6004_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(v_o_6000_, v_name_6001_, v_args_6002_);
return v_res_6004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey(lean_object* v_self_6007_, uint8_t v_format_6008_, lean_object* v_key_6009_){
_start:
{
lean_object* v___f_6011_; lean_object* v___x_6012_; lean_object* v___y_6014_; 
v___f_6011_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0));
v___x_6012_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1));
switch(v_format_6008_)
{
case 0:
{
lean_object* v___x_6026_; 
v___x_6026_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_6014_ = v___x_6026_;
goto v___jp_6013_;
}
case 1:
{
lean_object* v___x_6027_; 
v___x_6027_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_6014_ = v___x_6027_;
goto v___jp_6013_;
}
case 2:
{
lean_object* v___x_6028_; 
v___x_6028_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_6014_ = v___x_6028_;
goto v___jp_6013_;
}
case 3:
{
lean_object* v___x_6029_; 
v___x_6029_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_6014_ = v___x_6029_;
goto v___jp_6013_;
}
case 4:
{
lean_object* v___x_6030_; 
v___x_6030_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_6014_ = v___x_6030_;
goto v___jp_6013_;
}
case 5:
{
lean_object* v___x_6031_; 
v___x_6031_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_6014_ = v___x_6031_;
goto v___jp_6013_;
}
case 6:
{
lean_object* v___x_6032_; 
v___x_6032_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_6014_ = v___x_6032_;
goto v___jp_6013_;
}
default: 
{
lean_object* v___x_6033_; 
v___x_6033_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_6014_ = v___x_6033_;
goto v___jp_6013_;
}
}
v___jp_6013_:
{
lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; uint8_t v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; 
v___x_6015_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_6016_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6016_, 0, v_key_6009_);
lean_ctor_set(v___x_6016_, 1, v___x_6015_);
v___x_6017_ = lean_unsigned_to_nat(2u);
v___x_6018_ = lean_mk_empty_array_with_capacity(v___x_6017_);
lean_inc(v___y_6014_);
v___x_6019_ = lean_array_push(v___x_6018_, v___y_6014_);
v___x_6020_ = lean_array_push(v___x_6019_, v___x_6016_);
v___x_6021_ = l_Lasm_JS_Web_Support_args(v___x_6020_);
v___x_6022_ = lean_unsigned_to_nat(0u);
v___x_6023_ = 0;
v___x_6024_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(v_self_6007_, v___x_6012_, v___x_6021_);
v___x_6025_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6022_, v___x_6023_, v___x_6024_, v___f_6011_);
return v___x_6025_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___boxed(lean_object* v_self_6034_, lean_object* v_format_6035_, lean_object* v_key_6036_, lean_object* v_a_6037_){
_start:
{
uint8_t v_format_boxed_6038_; lean_object* v_res_6039_; 
v_format_boxed_6038_ = lean_unbox(v_format_6035_);
v_res_6039_ = l_Lasm_JS_Web_SubtleCrypto_exportKey(v_self_6034_, v_format_boxed_6038_, v_key_6036_);
return v_res_6039_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1(lean_object* v_context_6040_, uint32_t v_op_6041_, uint64_t v_flags_6042_, lean_object* v_payload_6043_, lean_object* v_failurePrefix_6044_){
_start:
{
lean_object* v___x_6046_; 
v___x_6046_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___redArg(v_op_6041_, v_flags_6042_, v_payload_6043_, v_failurePrefix_6044_);
return v___x_6046_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1___boxed(lean_object* v_context_6047_, lean_object* v_op_6048_, lean_object* v_flags_6049_, lean_object* v_payload_6050_, lean_object* v_failurePrefix_6051_, lean_object* v_a_6052_){
_start:
{
uint32_t v_op_boxed_6053_; uint64_t v_flags_boxed_6054_; lean_object* v_res_6055_; 
v_op_boxed_6053_ = lean_unbox_uint32(v_op_6048_);
lean_dec(v_op_6048_);
v_flags_boxed_6054_ = lean_unbox_uint64(v_flags_6049_);
lean_dec_ref(v_flags_6049_);
v_res_6055_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__1(v_context_6047_, v_op_boxed_6053_, v_flags_boxed_6054_, v_payload_6050_, v_failurePrefix_6051_);
lean_dec_ref(v_context_6047_);
return v_res_6055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey(lean_object* v_self_6056_, uint8_t v_format_6057_, lean_object* v_key_6058_, lean_object* v_wrappingKey_6059_, lean_object* v_wrapAlgorithm_6060_){
_start:
{
lean_object* v___f_6062_; lean_object* v___x_6063_; lean_object* v___y_6065_; lean_object* v___y_6066_; lean_object* v___y_6067_; lean_object* v___y_6068_; lean_object* v___y_6081_; 
v___f_6062_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_6063_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12));
switch(v_format_6057_)
{
case 0:
{
lean_object* v___x_6094_; 
v___x_6094_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_6081_ = v___x_6094_;
goto v___jp_6080_;
}
case 1:
{
lean_object* v___x_6095_; 
v___x_6095_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_6081_ = v___x_6095_;
goto v___jp_6080_;
}
case 2:
{
lean_object* v___x_6096_; 
v___x_6096_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_6081_ = v___x_6096_;
goto v___jp_6080_;
}
case 3:
{
lean_object* v___x_6097_; 
v___x_6097_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_6081_ = v___x_6097_;
goto v___jp_6080_;
}
case 4:
{
lean_object* v___x_6098_; 
v___x_6098_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_6081_ = v___x_6098_;
goto v___jp_6080_;
}
case 5:
{
lean_object* v___x_6099_; 
v___x_6099_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_6081_ = v___x_6099_;
goto v___jp_6080_;
}
case 6:
{
lean_object* v___x_6100_; 
v___x_6100_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_6081_ = v___x_6100_;
goto v___jp_6080_;
}
default: 
{
lean_object* v___x_6101_; 
v___x_6101_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_6081_ = v___x_6101_;
goto v___jp_6080_;
}
}
v___jp_6064_:
{
lean_object* v___x_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; uint8_t v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6079_; 
v___x_6069_ = lean_unsigned_to_nat(4u);
v___x_6070_ = lean_mk_empty_array_with_capacity(v___x_6069_);
lean_inc(v___y_6067_);
v___x_6071_ = lean_array_push(v___x_6070_, v___y_6067_);
v___x_6072_ = lean_array_push(v___x_6071_, v___y_6066_);
v___x_6073_ = lean_array_push(v___x_6072_, v___y_6065_);
v___x_6074_ = lean_array_push(v___x_6073_, v___y_6068_);
v___x_6075_ = l_Lasm_JS_Web_Support_args(v___x_6074_);
v___x_6076_ = lean_unsigned_to_nat(0u);
v___x_6077_ = 0;
v___x_6078_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_6056_, v___x_6063_, v___x_6075_);
v___x_6079_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6076_, v___x_6077_, v___x_6078_, v___f_6062_);
return v___x_6079_;
}
v___jp_6080_:
{
lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; 
v___x_6082_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_6083_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6083_, 0, v_key_6058_);
lean_ctor_set(v___x_6083_, 1, v___x_6082_);
v___x_6084_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6084_, 0, v_wrappingKey_6059_);
lean_ctor_set(v___x_6084_, 1, v___x_6082_);
if (lean_obj_tag(v_wrapAlgorithm_6060_) == 0)
{
lean_object* v_value_6085_; 
v_value_6085_ = lean_ctor_get(v_wrapAlgorithm_6060_, 0);
lean_inc(v_value_6085_);
lean_dec_ref_known(v_wrapAlgorithm_6060_, 1);
v___y_6065_ = v___x_6084_;
v___y_6066_ = v___x_6083_;
v___y_6067_ = v___y_6081_;
v___y_6068_ = v_value_6085_;
goto v___jp_6064_;
}
else
{
lean_object* v_value_6086_; lean_object* v___x_6088_; uint8_t v_isShared_6089_; uint8_t v_isSharedCheck_6093_; 
v_value_6086_ = lean_ctor_get(v_wrapAlgorithm_6060_, 0);
v_isSharedCheck_6093_ = !lean_is_exclusive(v_wrapAlgorithm_6060_);
if (v_isSharedCheck_6093_ == 0)
{
v___x_6088_ = v_wrapAlgorithm_6060_;
v_isShared_6089_ = v_isSharedCheck_6093_;
goto v_resetjp_6087_;
}
else
{
lean_inc(v_value_6086_);
lean_dec(v_wrapAlgorithm_6060_);
v___x_6088_ = lean_box(0);
v_isShared_6089_ = v_isSharedCheck_6093_;
goto v_resetjp_6087_;
}
v_resetjp_6087_:
{
lean_object* v___x_6091_; 
if (v_isShared_6089_ == 0)
{
lean_ctor_set_tag(v___x_6088_, 4);
v___x_6091_ = v___x_6088_;
goto v_reusejp_6090_;
}
else
{
lean_object* v_reuseFailAlloc_6092_; 
v_reuseFailAlloc_6092_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6092_, 0, v_value_6086_);
v___x_6091_ = v_reuseFailAlloc_6092_;
goto v_reusejp_6090_;
}
v_reusejp_6090_:
{
v___y_6065_ = v___x_6084_;
v___y_6066_ = v___x_6083_;
v___y_6067_ = v___y_6081_;
v___y_6068_ = v___x_6091_;
goto v___jp_6064_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey___boxed(lean_object* v_self_6102_, lean_object* v_format_6103_, lean_object* v_key_6104_, lean_object* v_wrappingKey_6105_, lean_object* v_wrapAlgorithm_6106_, lean_object* v_a_6107_){
_start:
{
uint8_t v_format_boxed_6108_; lean_object* v_res_6109_; 
v_format_boxed_6108_ = lean_unbox(v_format_6103_);
v_res_6109_ = l_Lasm_JS_Web_SubtleCrypto_wrapKey(v_self_6102_, v_format_boxed_6108_, v_key_6104_, v_wrappingKey_6105_, v_wrapAlgorithm_6106_);
return v_res_6109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey(lean_object* v_self_6110_, uint8_t v_format_6111_, lean_object* v_wrappedKey_6112_, lean_object* v_unwrappingKey_6113_, lean_object* v_unwrapAlgorithm_6114_, lean_object* v_unwrappedKeyAlgorithm_6115_, uint8_t v_extractable_6116_, lean_object* v_keyUsages_6117_){
_start:
{
lean_object* v___x_6119_; lean_object* v___y_6121_; lean_object* v___y_6122_; lean_object* v___y_6123_; lean_object* v___y_6124_; lean_object* v___y_6125_; lean_object* v___y_6143_; lean_object* v___y_6144_; lean_object* v___y_6145_; lean_object* v___y_6146_; lean_object* v___y_6157_; 
v___x_6119_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14));
switch(v_format_6111_)
{
case 0:
{
lean_object* v___x_6170_; 
v___x_6170_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_6157_ = v___x_6170_;
goto v___jp_6156_;
}
case 1:
{
lean_object* v___x_6171_; 
v___x_6171_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_6157_ = v___x_6171_;
goto v___jp_6156_;
}
case 2:
{
lean_object* v___x_6172_; 
v___x_6172_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_6157_ = v___x_6172_;
goto v___jp_6156_;
}
case 3:
{
lean_object* v___x_6173_; 
v___x_6173_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_6157_ = v___x_6173_;
goto v___jp_6156_;
}
case 4:
{
lean_object* v___x_6174_; 
v___x_6174_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_6157_ = v___x_6174_;
goto v___jp_6156_;
}
case 5:
{
lean_object* v___x_6175_; 
v___x_6175_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_6157_ = v___x_6175_;
goto v___jp_6156_;
}
case 6:
{
lean_object* v___x_6176_; 
v___x_6176_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_6157_ = v___x_6176_;
goto v___jp_6156_;
}
default: 
{
lean_object* v___x_6177_; 
v___x_6177_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_6157_ = v___x_6177_;
goto v___jp_6156_;
}
}
v___jp_6120_:
{
lean_object* v___x_6126_; size_t v_sz_6127_; size_t v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; 
v___x_6126_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_6126_, 0, v_extractable_6116_);
v_sz_6127_ = lean_array_size(v_keyUsages_6117_);
v___x_6128_ = ((size_t)0ULL);
v___x_6129_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_6127_, v___x_6128_, v_keyUsages_6117_);
v___x_6130_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6130_, 0, v___x_6129_);
v___x_6131_ = lean_unsigned_to_nat(7u);
v___x_6132_ = lean_mk_empty_array_with_capacity(v___x_6131_);
lean_inc(v___y_6122_);
v___x_6133_ = lean_array_push(v___x_6132_, v___y_6122_);
v___x_6134_ = lean_array_push(v___x_6133_, v___y_6123_);
v___x_6135_ = lean_array_push(v___x_6134_, v___y_6121_);
v___x_6136_ = lean_array_push(v___x_6135_, v___y_6124_);
v___x_6137_ = lean_array_push(v___x_6136_, v___y_6125_);
v___x_6138_ = lean_array_push(v___x_6137_, v___x_6126_);
v___x_6139_ = lean_array_push(v___x_6138_, v___x_6130_);
v___x_6140_ = l_Lasm_JS_Web_Support_args(v___x_6139_);
v___x_6141_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_deriveKey_spec__0(v_self_6110_, v___x_6119_, v___x_6140_);
return v___x_6141_;
}
v___jp_6142_:
{
if (lean_obj_tag(v_unwrappedKeyAlgorithm_6115_) == 0)
{
lean_object* v_value_6147_; 
v_value_6147_ = lean_ctor_get(v_unwrappedKeyAlgorithm_6115_, 0);
lean_inc(v_value_6147_);
lean_dec_ref_known(v_unwrappedKeyAlgorithm_6115_, 1);
v___y_6121_ = v___y_6143_;
v___y_6122_ = v___y_6144_;
v___y_6123_ = v___y_6145_;
v___y_6124_ = v___y_6146_;
v___y_6125_ = v_value_6147_;
goto v___jp_6120_;
}
else
{
lean_object* v_value_6148_; lean_object* v___x_6150_; uint8_t v_isShared_6151_; uint8_t v_isSharedCheck_6155_; 
v_value_6148_ = lean_ctor_get(v_unwrappedKeyAlgorithm_6115_, 0);
v_isSharedCheck_6155_ = !lean_is_exclusive(v_unwrappedKeyAlgorithm_6115_);
if (v_isSharedCheck_6155_ == 0)
{
v___x_6150_ = v_unwrappedKeyAlgorithm_6115_;
v_isShared_6151_ = v_isSharedCheck_6155_;
goto v_resetjp_6149_;
}
else
{
lean_inc(v_value_6148_);
lean_dec(v_unwrappedKeyAlgorithm_6115_);
v___x_6150_ = lean_box(0);
v_isShared_6151_ = v_isSharedCheck_6155_;
goto v_resetjp_6149_;
}
v_resetjp_6149_:
{
lean_object* v___x_6153_; 
if (v_isShared_6151_ == 0)
{
lean_ctor_set_tag(v___x_6150_, 4);
v___x_6153_ = v___x_6150_;
goto v_reusejp_6152_;
}
else
{
lean_object* v_reuseFailAlloc_6154_; 
v_reuseFailAlloc_6154_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6154_, 0, v_value_6148_);
v___x_6153_ = v_reuseFailAlloc_6154_;
goto v_reusejp_6152_;
}
v_reusejp_6152_:
{
v___y_6121_ = v___y_6143_;
v___y_6122_ = v___y_6144_;
v___y_6123_ = v___y_6145_;
v___y_6124_ = v___y_6146_;
v___y_6125_ = v___x_6153_;
goto v___jp_6120_;
}
}
}
}
v___jp_6156_:
{
lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; 
v___x_6158_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6158_, 0, v_wrappedKey_6112_);
v___x_6159_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_6160_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6160_, 0, v_unwrappingKey_6113_);
lean_ctor_set(v___x_6160_, 1, v___x_6159_);
if (lean_obj_tag(v_unwrapAlgorithm_6114_) == 0)
{
lean_object* v_value_6161_; 
v_value_6161_ = lean_ctor_get(v_unwrapAlgorithm_6114_, 0);
lean_inc(v_value_6161_);
lean_dec_ref_known(v_unwrapAlgorithm_6114_, 1);
v___y_6143_ = v___x_6160_;
v___y_6144_ = v___y_6157_;
v___y_6145_ = v___x_6158_;
v___y_6146_ = v_value_6161_;
goto v___jp_6142_;
}
else
{
lean_object* v_value_6162_; lean_object* v___x_6164_; uint8_t v_isShared_6165_; uint8_t v_isSharedCheck_6169_; 
v_value_6162_ = lean_ctor_get(v_unwrapAlgorithm_6114_, 0);
v_isSharedCheck_6169_ = !lean_is_exclusive(v_unwrapAlgorithm_6114_);
if (v_isSharedCheck_6169_ == 0)
{
v___x_6164_ = v_unwrapAlgorithm_6114_;
v_isShared_6165_ = v_isSharedCheck_6169_;
goto v_resetjp_6163_;
}
else
{
lean_inc(v_value_6162_);
lean_dec(v_unwrapAlgorithm_6114_);
v___x_6164_ = lean_box(0);
v_isShared_6165_ = v_isSharedCheck_6169_;
goto v_resetjp_6163_;
}
v_resetjp_6163_:
{
lean_object* v___x_6167_; 
if (v_isShared_6165_ == 0)
{
lean_ctor_set_tag(v___x_6164_, 4);
v___x_6167_ = v___x_6164_;
goto v_reusejp_6166_;
}
else
{
lean_object* v_reuseFailAlloc_6168_; 
v_reuseFailAlloc_6168_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6168_, 0, v_value_6162_);
v___x_6167_ = v_reuseFailAlloc_6168_;
goto v_reusejp_6166_;
}
v_reusejp_6166_:
{
v___y_6143_ = v___x_6160_;
v___y_6144_ = v___y_6157_;
v___y_6145_ = v___x_6158_;
v___y_6146_ = v___x_6167_;
goto v___jp_6142_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey___boxed(lean_object* v_self_6178_, lean_object* v_format_6179_, lean_object* v_wrappedKey_6180_, lean_object* v_unwrappingKey_6181_, lean_object* v_unwrapAlgorithm_6182_, lean_object* v_unwrappedKeyAlgorithm_6183_, lean_object* v_extractable_6184_, lean_object* v_keyUsages_6185_, lean_object* v_a_6186_){
_start:
{
uint8_t v_format_boxed_6187_; uint8_t v_extractable_boxed_6188_; lean_object* v_res_6189_; 
v_format_boxed_6187_ = lean_unbox(v_format_6179_);
v_extractable_boxed_6188_ = lean_unbox(v_extractable_6184_);
v_res_6189_ = l_Lasm_JS_Web_SubtleCrypto_unwrapKey(v_self_6178_, v_format_boxed_6187_, v_wrappedKey_6180_, v_unwrappingKey_6181_, v_unwrapAlgorithm_6182_, v_unwrappedKeyAlgorithm_6183_, v_extractable_boxed_6188_, v_keyUsages_6185_);
return v_res_6189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__2(lean_object* v_o_6190_, lean_object* v_key_6191_){
_start:
{
lean_object* v___x_6193_; lean_object* v___x_6194_; 
lean_inc_ref(v_key_6191_);
v___x_6193_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6193_, 0, v_key_6191_);
v___x_6194_ = l_Lasm_JS_Wire_encodeIO(v___x_6193_);
lean_dec_ref_known(v___x_6193_, 1);
if (lean_obj_tag(v___x_6194_) == 0)
{
lean_object* v_a_6195_; uint32_t v___x_6196_; uint32_t v___x_6197_; uint64_t v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; 
v_a_6195_ = lean_ctor_get(v___x_6194_, 0);
lean_inc(v_a_6195_);
lean_dec_ref_known(v___x_6194_, 1);
v___x_6196_ = 203;
v___x_6197_ = lasm_js_value_handle(v_o_6190_);
v___x_6198_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0);
v___x_6199_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_6200_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6200_, 0, v_o_6190_);
lean_ctor_set(v___x_6200_, 1, v___x_6199_);
v___x_6201_ = lasm_js_call(v___x_6196_, v___x_6197_, v___x_6198_, v_a_6195_, v___x_6200_);
lean_dec_ref_known(v___x_6200_, 2);
lean_dec(v_a_6195_);
if (lean_obj_tag(v___x_6201_) == 0)
{
lean_object* v_a_6202_; lean_object* v___x_6203_; lean_object* v___x_6204_; lean_object* v___x_6205_; lean_object* v___x_6206_; lean_object* v___x_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; lean_object* v___x_6210_; 
v_a_6202_ = lean_ctor_get(v___x_6201_, 0);
lean_inc(v_a_6202_);
lean_dec_ref_known(v___x_6201_, 1);
v___x_6203_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__1));
v___x_6204_ = l_String_quote(v_key_6191_);
v___x_6205_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6205_, 0, v___x_6204_);
v___x_6206_ = lean_unsigned_to_nat(120u);
v___x_6207_ = lean_unsigned_to_nat(0u);
v___x_6208_ = l_Std_Format_pretty(v___x_6205_, v___x_6206_, v___x_6207_, v___x_6207_);
v___x_6209_ = lean_string_append(v___x_6203_, v___x_6208_);
lean_dec_ref(v___x_6208_);
v___x_6210_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_6209_, v_a_6202_);
lean_dec(v_a_6202_);
lean_dec_ref(v___x_6209_);
return v___x_6210_;
}
else
{
lean_object* v_a_6211_; lean_object* v___x_6213_; uint8_t v_isShared_6214_; uint8_t v_isSharedCheck_6218_; 
lean_dec_ref(v_key_6191_);
v_a_6211_ = lean_ctor_get(v___x_6201_, 0);
v_isSharedCheck_6218_ = !lean_is_exclusive(v___x_6201_);
if (v_isSharedCheck_6218_ == 0)
{
v___x_6213_ = v___x_6201_;
v_isShared_6214_ = v_isSharedCheck_6218_;
goto v_resetjp_6212_;
}
else
{
lean_inc(v_a_6211_);
lean_dec(v___x_6201_);
v___x_6213_ = lean_box(0);
v_isShared_6214_ = v_isSharedCheck_6218_;
goto v_resetjp_6212_;
}
v_resetjp_6212_:
{
lean_object* v___x_6216_; 
if (v_isShared_6214_ == 0)
{
v___x_6216_ = v___x_6213_;
goto v_reusejp_6215_;
}
else
{
lean_object* v_reuseFailAlloc_6217_; 
v_reuseFailAlloc_6217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6217_, 0, v_a_6211_);
v___x_6216_ = v_reuseFailAlloc_6217_;
goto v_reusejp_6215_;
}
v_reusejp_6215_:
{
return v___x_6216_;
}
}
}
}
else
{
lean_object* v_a_6219_; lean_object* v___x_6221_; uint8_t v_isShared_6222_; uint8_t v_isSharedCheck_6226_; 
lean_dec_ref(v_key_6191_);
lean_dec(v_o_6190_);
v_a_6219_ = lean_ctor_get(v___x_6194_, 0);
v_isSharedCheck_6226_ = !lean_is_exclusive(v___x_6194_);
if (v_isSharedCheck_6226_ == 0)
{
v___x_6221_ = v___x_6194_;
v_isShared_6222_ = v_isSharedCheck_6226_;
goto v_resetjp_6220_;
}
else
{
lean_inc(v_a_6219_);
lean_dec(v___x_6194_);
v___x_6221_ = lean_box(0);
v_isShared_6222_ = v_isSharedCheck_6226_;
goto v_resetjp_6220_;
}
v_resetjp_6220_:
{
lean_object* v___x_6224_; 
if (v_isShared_6222_ == 0)
{
v___x_6224_ = v___x_6221_;
goto v_reusejp_6223_;
}
else
{
lean_object* v_reuseFailAlloc_6225_; 
v_reuseFailAlloc_6225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6225_, 0, v_a_6219_);
v___x_6224_ = v_reuseFailAlloc_6225_;
goto v_reusejp_6223_;
}
v_reusejp_6223_:
{
return v___x_6224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__2___boxed(lean_object* v_o_6227_, lean_object* v_key_6228_, lean_object* v_a_6229_){
_start:
{
lean_object* v_res_6230_; 
v_res_6230_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__2(v_o_6227_, v_key_6228_);
return v_res_6230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_6231_, lean_object* v_d_6232_){
_start:
{
lean_object* v___y_6235_; lean_object* v___y_6236_; 
if (lean_obj_tag(v_d_6232_) == 9)
{
lean_object* v_value_6240_; lean_object* v___x_6241_; 
v_value_6240_ = lean_ctor_get(v_d_6232_, 0);
lean_inc(v_value_6240_);
lean_dec_ref_known(v_d_6232_, 2);
v___x_6241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6241_, 0, v_value_6240_);
return v___x_6241_;
}
else
{
lean_object* v___x_6242_; lean_object* v_received_6244_; 
v___x_6242_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
if (lean_obj_tag(v_d_6232_) == 9)
{
lean_object* v_value_6258_; lean_object* v_description_6259_; uint8_t v___x_6260_; 
v_value_6258_ = lean_ctor_get(v_d_6232_, 0);
v_description_6259_ = lean_ctor_get(v_d_6232_, 1);
v___x_6260_ = lean_string_dec_eq(v_description_6259_, v___x_6242_);
if (v___x_6260_ == 0)
{
goto v___jp_6256_;
}
else
{
uint32_t v___x_6261_; uint64_t v___x_6262_; lean_object* v___x_6263_; uint32_t v___x_6264_; lean_object* v___x_6265_; 
lean_inc_n(v_value_6258_, 2);
lean_dec_ref_known(v_d_6232_, 2);
v___x_6261_ = 206;
v___x_6262_ = 0ULL;
v___x_6263_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6263_, 0, v_value_6258_);
lean_ctor_set(v___x_6263_, 1, v___x_6242_);
v___x_6264_ = lasm_js_value_handle(v_value_6258_);
lean_dec(v_value_6258_);
v___x_6265_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_6261_, v___x_6262_, v___x_6263_, v___x_6264_);
lean_dec_ref_known(v___x_6263_, 2);
if (lean_obj_tag(v___x_6265_) == 0)
{
lean_object* v_a_6266_; uint8_t v___x_6267_; 
v_a_6266_ = lean_ctor_get(v___x_6265_, 0);
lean_inc(v_a_6266_);
lean_dec_ref_known(v___x_6265_, 1);
v___x_6267_ = lean_string_validate_utf8(v_a_6266_);
if (v___x_6267_ == 0)
{
lean_object* v___x_6268_; lean_object* v___x_6269_; 
lean_dec(v_a_6266_);
v___x_6268_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_6269_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_6268_);
v_received_6244_ = v___x_6269_;
goto v___jp_6243_;
}
else
{
lean_object* v___x_6270_; 
v___x_6270_ = lean_string_from_utf8_unchecked(v_a_6266_);
v_received_6244_ = v___x_6270_;
goto v___jp_6243_;
}
}
else
{
lean_object* v___x_6271_; 
lean_dec_ref_known(v___x_6265_, 1);
v___x_6271_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_6244_ = v___x_6271_;
goto v___jp_6243_;
}
}
}
else
{
goto v___jp_6256_;
}
v___jp_6243_:
{
lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v___x_6247_; lean_object* v___x_6248_; lean_object* v___x_6249_; lean_object* v___x_6250_; lean_object* v___x_6251_; lean_object* v___x_6252_; lean_object* v___x_6253_; uint8_t v___x_6254_; 
v___x_6245_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_6246_ = lean_string_append(v___x_6245_, v_context_6231_);
v___x_6247_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_6248_ = lean_string_append(v___x_6246_, v___x_6247_);
v___x_6249_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCrypto___closed__1));
v___x_6250_ = lean_string_append(v___x_6248_, v___x_6249_);
v___x_6251_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_6252_ = lean_string_append(v___x_6250_, v___x_6251_);
v___x_6253_ = lean_string_append(v___x_6252_, v_received_6244_);
lean_dec_ref(v_received_6244_);
v___x_6254_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_6254_ == 0)
{
lean_object* v___x_6255_; 
v___x_6255_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___y_6235_ = v___x_6253_;
v___y_6236_ = v___x_6255_;
goto v___jp_6234_;
}
else
{
v___y_6235_ = v___x_6253_;
v___y_6236_ = v___x_6242_;
goto v___jp_6234_;
}
}
v___jp_6256_:
{
lean_object* v___x_6257_; 
v___x_6257_ = l_Lasm_JS_Data_describe(v_d_6232_);
v_received_6244_ = v___x_6257_;
goto v___jp_6243_;
}
}
v___jp_6234_:
{
lean_object* v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; 
v___x_6237_ = lean_string_append(v___y_6235_, v___y_6236_);
v___x_6238_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6238_, 0, v___x_6237_);
v___x_6239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6239_, 0, v___x_6238_);
return v___x_6239_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_6272_, lean_object* v_d_6273_, lean_object* v_a_6274_){
_start:
{
lean_object* v_res_6275_; 
v_res_6275_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_6272_, v_d_6273_);
lean_dec_ref(v_context_6272_);
return v_res_6275_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_6276_, lean_object* v_bytes_6277_){
_start:
{
lean_object* v___x_6279_; 
v___x_6279_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_6277_);
if (lean_obj_tag(v___x_6279_) == 0)
{
lean_object* v_a_6280_; lean_object* v___x_6281_; 
v_a_6280_ = lean_ctor_get(v___x_6279_, 0);
lean_inc(v_a_6280_);
lean_dec_ref_known(v___x_6279_, 1);
v___x_6281_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_6276_, v_a_6280_);
return v___x_6281_;
}
else
{
lean_object* v_a_6282_; lean_object* v___x_6284_; uint8_t v_isShared_6285_; uint8_t v_isSharedCheck_6289_; 
v_a_6282_ = lean_ctor_get(v___x_6279_, 0);
v_isSharedCheck_6289_ = !lean_is_exclusive(v___x_6279_);
if (v_isSharedCheck_6289_ == 0)
{
v___x_6284_ = v___x_6279_;
v_isShared_6285_ = v_isSharedCheck_6289_;
goto v_resetjp_6283_;
}
else
{
lean_inc(v_a_6282_);
lean_dec(v___x_6279_);
v___x_6284_ = lean_box(0);
v_isShared_6285_ = v_isSharedCheck_6289_;
goto v_resetjp_6283_;
}
v_resetjp_6283_:
{
lean_object* v___x_6287_; 
if (v_isShared_6285_ == 0)
{
v___x_6287_ = v___x_6284_;
goto v_reusejp_6286_;
}
else
{
lean_object* v_reuseFailAlloc_6288_; 
v_reuseFailAlloc_6288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6288_, 0, v_a_6282_);
v___x_6287_ = v_reuseFailAlloc_6288_;
goto v_reusejp_6286_;
}
v_reusejp_6286_:
{
return v___x_6287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_6290_, lean_object* v_bytes_6291_, lean_object* v_a_6292_){
_start:
{
lean_object* v_res_6293_; 
v_res_6293_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2(v_context_6290_, v_bytes_6291_);
lean_dec_ref(v_bytes_6291_);
lean_dec_ref(v_context_6290_);
return v_res_6293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1(lean_object* v_o_6294_, lean_object* v_key_6295_){
_start:
{
lean_object* v___x_6297_; lean_object* v___x_6298_; 
lean_inc_ref(v_key_6295_);
v___x_6297_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6297_, 0, v_key_6295_);
v___x_6298_ = l_Lasm_JS_Wire_encodeIO(v___x_6297_);
lean_dec_ref_known(v___x_6297_, 1);
if (lean_obj_tag(v___x_6298_) == 0)
{
lean_object* v_a_6299_; uint32_t v___x_6300_; uint32_t v___x_6301_; uint64_t v___x_6302_; lean_object* v___x_6303_; lean_object* v___x_6304_; lean_object* v___x_6305_; 
v_a_6299_ = lean_ctor_get(v___x_6298_, 0);
lean_inc(v_a_6299_);
lean_dec_ref_known(v___x_6298_, 1);
v___x_6300_ = 203;
v___x_6301_ = lasm_js_value_handle(v_o_6294_);
v___x_6302_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__0);
v___x_6303_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_6304_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6304_, 0, v_o_6294_);
lean_ctor_set(v___x_6304_, 1, v___x_6303_);
v___x_6305_ = lasm_js_call(v___x_6300_, v___x_6301_, v___x_6302_, v_a_6299_, v___x_6304_);
lean_dec_ref_known(v___x_6304_, 2);
lean_dec(v_a_6299_);
if (lean_obj_tag(v___x_6305_) == 0)
{
lean_object* v_a_6306_; lean_object* v___x_6307_; lean_object* v___x_6308_; lean_object* v___x_6309_; lean_object* v___x_6310_; lean_object* v___x_6311_; lean_object* v___x_6312_; lean_object* v___x_6313_; lean_object* v___x_6314_; 
v_a_6306_ = lean_ctor_get(v___x_6305_, 0);
lean_inc(v_a_6306_);
lean_dec_ref_known(v___x_6305_, 1);
v___x_6307_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Crypto_subtle_spec__0___closed__1));
v___x_6308_ = l_String_quote(v_key_6295_);
v___x_6309_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6309_, 0, v___x_6308_);
v___x_6310_ = lean_unsigned_to_nat(120u);
v___x_6311_ = lean_unsigned_to_nat(0u);
v___x_6312_ = l_Std_Format_pretty(v___x_6309_, v___x_6310_, v___x_6311_, v___x_6311_);
v___x_6313_ = lean_string_append(v___x_6307_, v___x_6312_);
lean_dec_ref(v___x_6312_);
v___x_6314_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1_spec__2(v___x_6313_, v_a_6306_);
lean_dec(v_a_6306_);
lean_dec_ref(v___x_6313_);
return v___x_6314_;
}
else
{
lean_object* v_a_6315_; lean_object* v___x_6317_; uint8_t v_isShared_6318_; uint8_t v_isSharedCheck_6322_; 
lean_dec_ref(v_key_6295_);
v_a_6315_ = lean_ctor_get(v___x_6305_, 0);
v_isSharedCheck_6322_ = !lean_is_exclusive(v___x_6305_);
if (v_isSharedCheck_6322_ == 0)
{
v___x_6317_ = v___x_6305_;
v_isShared_6318_ = v_isSharedCheck_6322_;
goto v_resetjp_6316_;
}
else
{
lean_inc(v_a_6315_);
lean_dec(v___x_6305_);
v___x_6317_ = lean_box(0);
v_isShared_6318_ = v_isSharedCheck_6322_;
goto v_resetjp_6316_;
}
v_resetjp_6316_:
{
lean_object* v___x_6320_; 
if (v_isShared_6318_ == 0)
{
v___x_6320_ = v___x_6317_;
goto v_reusejp_6319_;
}
else
{
lean_object* v_reuseFailAlloc_6321_; 
v_reuseFailAlloc_6321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6321_, 0, v_a_6315_);
v___x_6320_ = v_reuseFailAlloc_6321_;
goto v_reusejp_6319_;
}
v_reusejp_6319_:
{
return v___x_6320_;
}
}
}
}
else
{
lean_object* v_a_6323_; lean_object* v___x_6325_; uint8_t v_isShared_6326_; uint8_t v_isSharedCheck_6330_; 
lean_dec_ref(v_key_6295_);
lean_dec(v_o_6294_);
v_a_6323_ = lean_ctor_get(v___x_6298_, 0);
v_isSharedCheck_6330_ = !lean_is_exclusive(v___x_6298_);
if (v_isSharedCheck_6330_ == 0)
{
v___x_6325_ = v___x_6298_;
v_isShared_6326_ = v_isSharedCheck_6330_;
goto v_resetjp_6324_;
}
else
{
lean_inc(v_a_6323_);
lean_dec(v___x_6298_);
v___x_6325_ = lean_box(0);
v_isShared_6326_ = v_isSharedCheck_6330_;
goto v_resetjp_6324_;
}
v_resetjp_6324_:
{
lean_object* v___x_6328_; 
if (v_isShared_6326_ == 0)
{
v___x_6328_ = v___x_6325_;
goto v_reusejp_6327_;
}
else
{
lean_object* v_reuseFailAlloc_6329_; 
v_reuseFailAlloc_6329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6329_, 0, v_a_6323_);
v___x_6328_ = v_reuseFailAlloc_6329_;
goto v_reusejp_6327_;
}
v_reusejp_6327_:
{
return v___x_6328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1___boxed(lean_object* v_o_6331_, lean_object* v_key_6332_, lean_object* v_a_6333_){
_start:
{
lean_object* v_res_6334_; 
v_res_6334_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1(v_o_6331_, v_key_6332_);
return v_res_6334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(lean_object* v_o_6338_, lean_object* v_a_6339_){
_start:
{
if (lean_obj_tag(v_a_6339_) == 0)
{
lean_object* v___x_6341_; lean_object* v___x_6342_; 
lean_dec(v_o_6338_);
v___x_6341_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__1));
v___x_6342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6342_, 0, v___x_6341_);
return v___x_6342_;
}
else
{
lean_object* v_tail_6343_; 
v_tail_6343_ = lean_ctor_get(v_a_6339_, 1);
if (lean_obj_tag(v_tail_6343_) == 0)
{
lean_object* v_head_6344_; lean_object* v___x_6345_; 
v_head_6344_ = lean_ctor_get(v_a_6339_, 0);
lean_inc(v_head_6344_);
lean_dec_ref_known(v_a_6339_, 2);
v___x_6345_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__1(v_o_6338_, v_head_6344_);
return v___x_6345_;
}
else
{
lean_object* v_head_6346_; lean_object* v___x_6347_; 
lean_inc(v_tail_6343_);
v_head_6346_ = lean_ctor_get(v_a_6339_, 0);
lean_inc(v_head_6346_);
lean_dec_ref_known(v_a_6339_, 2);
v___x_6347_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0_spec__2(v_o_6338_, v_head_6346_);
if (lean_obj_tag(v___x_6347_) == 0)
{
lean_object* v_a_6348_; 
v_a_6348_ = lean_ctor_get(v___x_6347_, 0);
lean_inc(v_a_6348_);
lean_dec_ref_known(v___x_6347_, 1);
v_o_6338_ = v_a_6348_;
v_a_6339_ = v_tail_6343_;
goto _start;
}
else
{
lean_object* v_a_6350_; lean_object* v___x_6352_; uint8_t v_isShared_6353_; uint8_t v_isSharedCheck_6357_; 
lean_dec(v_tail_6343_);
v_a_6350_ = lean_ctor_get(v___x_6347_, 0);
v_isSharedCheck_6357_ = !lean_is_exclusive(v___x_6347_);
if (v_isSharedCheck_6357_ == 0)
{
v___x_6352_ = v___x_6347_;
v_isShared_6353_ = v_isSharedCheck_6357_;
goto v_resetjp_6351_;
}
else
{
lean_inc(v_a_6350_);
lean_dec(v___x_6347_);
v___x_6352_ = lean_box(0);
v_isShared_6353_ = v_isSharedCheck_6357_;
goto v_resetjp_6351_;
}
v_resetjp_6351_:
{
lean_object* v___x_6355_; 
if (v_isShared_6353_ == 0)
{
v___x_6355_ = v___x_6352_;
goto v_reusejp_6354_;
}
else
{
lean_object* v_reuseFailAlloc_6356_; 
v_reuseFailAlloc_6356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6356_, 0, v_a_6350_);
v___x_6355_ = v_reuseFailAlloc_6356_;
goto v_reusejp_6354_;
}
v_reusejp_6354_:
{
return v___x_6355_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___boxed(lean_object* v_o_6358_, lean_object* v_a_6359_, lean_object* v_a_6360_){
_start:
{
lean_object* v_res_6361_; 
v_res_6361_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(v_o_6358_, v_a_6359_);
return v_res_6361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(lean_object* v_path_6362_){
_start:
{
lean_object* v___x_6364_; 
v___x_6364_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_6364_) == 0)
{
lean_object* v_a_6365_; lean_object* v___x_6366_; 
v_a_6365_ = lean_ctor_get(v___x_6364_, 0);
lean_inc(v_a_6365_);
lean_dec_ref_known(v___x_6364_, 1);
v___x_6366_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(v_a_6365_, v_path_6362_);
return v___x_6366_;
}
else
{
lean_object* v_a_6367_; lean_object* v___x_6369_; uint8_t v_isShared_6370_; uint8_t v_isSharedCheck_6374_; 
lean_dec(v_path_6362_);
v_a_6367_ = lean_ctor_get(v___x_6364_, 0);
v_isSharedCheck_6374_ = !lean_is_exclusive(v___x_6364_);
if (v_isSharedCheck_6374_ == 0)
{
v___x_6369_ = v___x_6364_;
v_isShared_6370_ = v_isSharedCheck_6374_;
goto v_resetjp_6368_;
}
else
{
lean_inc(v_a_6367_);
lean_dec(v___x_6364_);
v___x_6369_ = lean_box(0);
v_isShared_6370_ = v_isSharedCheck_6374_;
goto v_resetjp_6368_;
}
v_resetjp_6368_:
{
lean_object* v___x_6372_; 
if (v_isShared_6370_ == 0)
{
v___x_6372_ = v___x_6369_;
goto v_reusejp_6371_;
}
else
{
lean_object* v_reuseFailAlloc_6373_; 
v_reuseFailAlloc_6373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6373_, 0, v_a_6367_);
v___x_6372_ = v_reuseFailAlloc_6373_;
goto v_reusejp_6371_;
}
v_reusejp_6371_:
{
return v___x_6372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0___boxed(lean_object* v_path_6375_, lean_object* v_a_6376_){
_start:
{
lean_object* v_res_6377_; 
v_res_6377_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(v_path_6375_);
return v_res_6377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto(){
_start:
{
lean_object* v___x_6383_; lean_object* v___x_6384_; 
v___x_6383_ = ((lean_object*)(l_Lasm_JS_Web_crypto___closed__1));
v___x_6384_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(v___x_6383_);
return v___x_6384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto___boxed(lean_object* v_a_6385_){
_start:
{
lean_object* v_res_6386_; 
v_res_6386_ = l_Lasm_JS_Web_crypto();
return v_res_6386_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Crypto(uint8_t builtin) {
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
l_Lasm_JS_Web_instInhabitedKeyType_default = _init_l_Lasm_JS_Web_instInhabitedKeyType_default();
l_Lasm_JS_Web_instInhabitedKeyType = _init_l_Lasm_JS_Web_instInhabitedKeyType();
l_Lasm_JS_Web_instInhabitedKeyUsage_default = _init_l_Lasm_JS_Web_instInhabitedKeyUsage_default();
l_Lasm_JS_Web_instInhabitedKeyUsage = _init_l_Lasm_JS_Web_instInhabitedKeyUsage();
l_Lasm_JS_Web_instInhabitedKeyFormat_default = _init_l_Lasm_JS_Web_instInhabitedKeyFormat_default();
l_Lasm_JS_Web_instInhabitedKeyFormat = _init_l_Lasm_JS_Web_instInhabitedKeyFormat();
l_Lasm_JS_Web_instFromJSCryptoKeyPair = _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSCryptoKeyPair);
l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo = _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo);
l_Lasm_JS_Web_instToJSJsonWebKey = _init_l_Lasm_JS_Web_instToJSJsonWebKey();
lean_mark_persistent(l_Lasm_JS_Web_instToJSJsonWebKey);
l_Lasm_JS_Web_instFromJSJsonWebKey = _init_l_Lasm_JS_Web_instFromJSJsonWebKey();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSJsonWebKey);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
