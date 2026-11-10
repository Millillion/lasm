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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
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
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_Web_Support_viewBytes(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringAlgorithmIdentifier___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringAlgorithmIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringAlgorithmIdentifier___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeStringAlgorithmIdentifier___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeStringAlgorithmIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringAlgorithmIdentifier = (const lean_object*)&l_Lasm_JS_Web_instCoeStringAlgorithmIdentifier___closed__0_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrJsonWebKey___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrJsonWebKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrJsonWebKey___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrJsonWebKey___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrJsonWebKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrJsonWebKey = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrJsonWebKey___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeJsonWebKeyBufferSourceOrJsonWebKey___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeJsonWebKeyBufferSourceOrJsonWebKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeJsonWebKeyBufferSourceOrJsonWebKey___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeJsonWebKeyBufferSourceOrJsonWebKey___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeJsonWebKeyBufferSourceOrJsonWebKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeJsonWebKeyBufferSourceOrJsonWebKey = (const lean_object*)&l_Lasm_JS_Web_instCoeJsonWebKeyBufferSourceOrJsonWebKey___closed__0_value;
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
static const lean_string_object l_Lasm_JS_Web_Crypto_subtle___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "subtle"};
static const lean_object* l_Lasm_JS_Web_Crypto_subtle___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Crypto_subtle___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Crypto_getRandomValues___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getRandomValues"};
static const lean_object* l_Lasm_JS_Web_Crypto_getRandomValues___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Crypto_getRandomValues___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___closed__0_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CryptoKey_algorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "algorithm"};
static const lean_object* l_Lasm_JS_Web_CryptoKey_algorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CryptoKey_algorithm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0_value;
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__0_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__1_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__1_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "exportKey"};
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringAlgorithmIdentifier___lam__0(lean_object* v_value_1155_){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1156_, 0, v_value_1155_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0(lean_object* v___x_1161_, lean_object* v_d_1162_){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
lean_inc_ref(v___x_1161_);
v___x_1164_ = l_Lasm_JS_readField___redArg(v___x_1161_, v_d_1162_, v___x_1163_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
lean_dec_ref(v___x_1161_);
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v___x_1164_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1164_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
else
{
lean_object* v_a_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v_a_1173_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v___x_1164_, 1);
v___x_1174_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
v___x_1175_ = l_Lasm_JS_readField___redArg(v___x_1161_, v_d_1162_, v___x_1174_);
if (lean_obj_tag(v___x_1175_) == 0)
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
lean_dec(v_a_1173_);
v_a_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1192_; 
v_a_1184_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1186_ = v___x_1175_;
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1175_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v_a_1173_);
lean_ctor_set(v___x_1188_, 1, v_a_1184_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 0, v___x_1188_);
v___x_1190_ = v___x_1186_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___boxed(lean_object* v___x_1193_, lean_object* v_d_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0(v___x_1193_, v_d_1194_);
lean_dec(v_d_1194_);
return v_res_1195_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKey));
v___x_1197_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1196_);
return v___x_1197_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1(void){
_start:
{
lean_object* v___x_1198_; lean_object* v___f_1199_; 
v___x_1198_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0);
v___f_1199_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1199_, 0, v___x_1198_);
return v___f_1199_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3(void){
_start:
{
uint8_t v___x_1201_; lean_object* v___x_1202_; lean_object* v___f_1203_; lean_object* v___x_1204_; 
v___x_1201_ = 0;
v___x_1202_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__2));
v___f_1203_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1);
v___x_1204_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1204_, 0, v___f_1203_);
lean_ctor_set(v___x_1204_, 1, v___x_1202_);
lean_ctor_set_uint8(v___x_1204_, sizeof(void*)*2, v___x_1201_);
return v___x_1204_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair(void){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx(lean_object* v_x_1206_){
_start:
{
if (lean_obj_tag(v_x_1206_) == 0)
{
lean_object* v___x_1207_; 
v___x_1207_ = lean_unsigned_to_nat(0u);
return v___x_1207_;
}
else
{
lean_object* v___x_1208_; 
v___x_1208_ = lean_unsigned_to_nat(1u);
return v___x_1208_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx___boxed(lean_object* v_x_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx(v_x_1209_);
lean_dec_ref(v_x_1209_);
return v_res_1210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(lean_object* v_t_1211_, lean_object* v_k_1212_){
_start:
{
if (lean_obj_tag(v_t_1211_) == 0)
{
lean_object* v_value_1213_; lean_object* v___x_1214_; 
v_value_1213_ = lean_ctor_get(v_t_1211_, 0);
lean_inc(v_value_1213_);
lean_dec_ref_known(v_t_1211_, 1);
v___x_1214_ = lean_apply_1(v_k_1212_, v_value_1213_);
return v___x_1214_;
}
else
{
lean_object* v_value_1215_; lean_object* v___x_1216_; 
v_value_1215_ = lean_ctor_get(v_t_1211_, 0);
lean_inc_ref(v_value_1215_);
lean_dec_ref_known(v_t_1211_, 1);
v___x_1216_ = lean_apply_1(v_k_1212_, v_value_1215_);
return v___x_1216_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim(lean_object* v_motive_1217_, lean_object* v_ctorIdx_1218_, lean_object* v_t_1219_, lean_object* v_h_1220_, lean_object* v_k_1221_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1219_, v_k_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___boxed(lean_object* v_motive_1223_, lean_object* v_ctorIdx_1224_, lean_object* v_t_1225_, lean_object* v_h_1226_, lean_object* v_k_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim(v_motive_1223_, v_ctorIdx_1224_, v_t_1225_, v_h_1226_, v_k_1227_);
lean_dec(v_ctorIdx_1224_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKey_elim___redArg(lean_object* v_t_1229_, lean_object* v_cryptoKey_1230_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1229_, v_cryptoKey_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKey_elim(lean_object* v_motive_1232_, lean_object* v_t_1233_, lean_object* v_h_1234_, lean_object* v_cryptoKey_1235_){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1233_, v_cryptoKey_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKeyPair_elim___redArg(lean_object* v_t_1237_, lean_object* v_cryptoKeyPair_1238_){
_start:
{
lean_object* v___x_1239_; 
v___x_1239_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1237_, v_cryptoKeyPair_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKeyPair_elim(lean_object* v_motive_1240_, lean_object* v_t_1241_, lean_object* v_h_1242_, lean_object* v_cryptoKeyPair_1243_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1241_, v_cryptoKeyPair_1243_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0(lean_object* v_x_1247_){
_start:
{
switch(lean_obj_tag(v_x_1247_))
{
case 9:
{
lean_object* v_value_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v_value_1248_ = lean_ctor_get(v_x_1247_, 0);
lean_inc(v_value_1248_);
lean_dec_ref_known(v_x_1247_, 2);
v___x_1249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1249_, 0, v_value_1248_);
v___x_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1249_);
return v___x_1250_;
}
case 8:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1251_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0);
v___x_1252_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
v___x_1253_ = l_Lasm_JS_readField___redArg(v___x_1251_, v_x_1247_, v___x_1252_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1261_; 
lean_dec_ref_known(v_x_1247_, 1);
v_a_1254_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1256_ = v___x_1253_;
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v___x_1253_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1259_; 
if (v_isShared_1257_ == 0)
{
v___x_1259_ = v___x_1256_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_a_1254_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1288_; 
v_a_1262_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_1253_, 1);
v___x_1263_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
v___x_1264_ = l_Lasm_JS_readField___redArg(v___x_1251_, v_x_1247_, v___x_1263_);
v_isSharedCheck_1288_ = !lean_is_exclusive(v_x_1247_);
if (v_isSharedCheck_1288_ == 0)
{
lean_object* v_unused_1289_; 
v_unused_1289_ = lean_ctor_get(v_x_1247_, 0);
lean_dec(v_unused_1289_);
v___x_1266_ = v_x_1247_;
v_isShared_1267_ = v_isSharedCheck_1288_;
goto v_resetjp_1265_;
}
else
{
lean_dec(v_x_1247_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1288_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_del_object(v___x_1266_);
lean_dec(v_a_1262_);
v_a_1268_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1264_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1264_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1287_; 
v_a_1276_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1278_ = v___x_1264_;
v_isShared_1279_ = v_isSharedCheck_1287_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1264_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1287_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1280_; lean_object* v___x_1282_; 
v___x_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1280_, 0, v_a_1262_);
lean_ctor_set(v___x_1280_, 1, v_a_1276_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set_tag(v___x_1266_, 1);
lean_ctor_set(v___x_1266_, 0, v___x_1280_);
v___x_1282_ = v___x_1266_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v___x_1280_);
v___x_1282_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
lean_object* v___x_1284_; 
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 0, v___x_1282_);
v___x_1284_ = v___x_1278_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_1290_; 
lean_dec(v_x_1247_);
v___x_1290_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0___closed__0));
return v___x_1290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0(lean_object* v___f_1301_, lean_object* v_d_1302_){
_start:
{
lean_object* v_r_1303_; lean_object* v_d_1304_; lean_object* v_t_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v_r_1303_ = lean_ctor_get(v_d_1302_, 0);
lean_inc(v_r_1303_);
v_d_1304_ = lean_ctor_get(v_d_1302_, 1);
lean_inc(v_d_1304_);
v_t_1305_ = lean_ctor_get(v_d_1302_, 2);
lean_inc(v_t_1305_);
lean_dec_ref(v_d_1302_);
v___x_1306_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
lean_inc_ref_n(v___f_1301_, 2);
v___x_1307_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1301_, v_r_1303_);
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_1310_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1301_, v_d_1304_);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_1313_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1301_, v_t_1305_);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = lean_unsigned_to_nat(3u);
v___x_1316_ = lean_mk_empty_array_with_capacity(v___x_1315_);
v___x_1317_ = lean_array_push(v___x_1316_, v___x_1308_);
v___x_1318_ = lean_array_push(v___x_1317_, v___x_1311_);
v___x_1319_ = lean_array_push(v___x_1318_, v___x_1314_);
v___x_1320_ = l_Lasm_JS_Web_Support_fields(v___x_1319_);
lean_dec_ref(v___x_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0(lean_object* v___x_1325_, lean_object* v_d_1326_){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
lean_inc_ref(v___x_1325_);
v___x_1328_ = l_Lasm_JS_readField___redArg(v___x_1325_, v_d_1326_, v___x_1327_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
lean_dec_ref(v___x_1325_);
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___x_1328_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1328_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v_a_1337_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v___x_1328_, 1);
v___x_1338_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc_ref(v___x_1325_);
v___x_1339_ = l_Lasm_JS_readField___redArg(v___x_1325_, v_d_1326_, v___x_1338_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec(v_a_1337_);
lean_dec_ref(v___x_1325_);
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1339_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1339_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v_a_1348_ = lean_ctor_get(v___x_1339_, 0);
lean_inc(v_a_1348_);
lean_dec_ref_known(v___x_1339_, 1);
v___x_1349_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_1350_ = l_Lasm_JS_readField___redArg(v___x_1325_, v_d_1326_, v___x_1349_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec(v_a_1348_);
lean_dec(v_a_1337_);
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1350_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1350_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1367_; 
v_a_1359_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1361_ = v___x_1350_;
v_isShared_1362_ = v_isSharedCheck_1367_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1350_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1367_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1363_; lean_object* v___x_1365_; 
v___x_1363_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1363_, 0, v_a_1337_);
lean_ctor_set(v___x_1363_, 1, v_a_1348_);
lean_ctor_set(v___x_1363_, 2, v_a_1359_);
if (v_isShared_1362_ == 0)
{
lean_ctor_set(v___x_1361_, 0, v___x_1363_);
v___x_1365_ = v___x_1361_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1363_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0___boxed(lean_object* v___x_1368_, lean_object* v_d_1369_){
_start:
{
lean_object* v_res_1370_; 
v_res_1370_ = l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0(v___x_1368_, v_d_1369_);
lean_dec(v_d_1369_);
return v_res_1370_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0(void){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = l_Lasm_JS_instFromJSString;
v___x_1372_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1371_);
return v___x_1372_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___f_1374_; 
v___x_1373_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0);
v___f_1374_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1374_, 0, v___x_1373_);
return v___f_1374_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3(void){
_start:
{
uint8_t v___x_1376_; lean_object* v___x_1377_; lean_object* v___f_1378_; lean_object* v___x_1379_; 
v___x_1376_ = 0;
v___x_1377_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__2));
v___f_1378_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1);
v___x_1379_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1379_, 0, v___f_1378_);
lean_ctor_set(v___x_1379_, 1, v___x_1377_);
lean_ctor_set_uint8(v___x_1379_, sizeof(void*)*2, v___x_1376_);
return v___x_1379_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo(void){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0(lean_object* v___f_1398_, lean_object* v___x_1399_, lean_object* v___f_1400_, lean_object* v___x_1401_, lean_object* v_d_1402_){
_start:
{
lean_object* v_kty_1403_; lean_object* v_use_1404_; lean_object* v_key__ops_1405_; lean_object* v_alg_1406_; lean_object* v_ext_1407_; lean_object* v_crv_1408_; lean_object* v_x_1409_; lean_object* v_y_1410_; lean_object* v_d_1411_; lean_object* v_n_1412_; lean_object* v_e_1413_; lean_object* v_p_1414_; lean_object* v_q_1415_; lean_object* v_dp_1416_; lean_object* v_dq_1417_; lean_object* v_qi_1418_; lean_object* v_oth_1419_; lean_object* v_k_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v_kty_1403_ = lean_ctor_get(v_d_1402_, 0);
lean_inc(v_kty_1403_);
v_use_1404_ = lean_ctor_get(v_d_1402_, 1);
lean_inc(v_use_1404_);
v_key__ops_1405_ = lean_ctor_get(v_d_1402_, 2);
lean_inc(v_key__ops_1405_);
v_alg_1406_ = lean_ctor_get(v_d_1402_, 3);
lean_inc(v_alg_1406_);
v_ext_1407_ = lean_ctor_get(v_d_1402_, 4);
lean_inc(v_ext_1407_);
v_crv_1408_ = lean_ctor_get(v_d_1402_, 5);
lean_inc(v_crv_1408_);
v_x_1409_ = lean_ctor_get(v_d_1402_, 6);
lean_inc(v_x_1409_);
v_y_1410_ = lean_ctor_get(v_d_1402_, 7);
lean_inc(v_y_1410_);
v_d_1411_ = lean_ctor_get(v_d_1402_, 8);
lean_inc(v_d_1411_);
v_n_1412_ = lean_ctor_get(v_d_1402_, 9);
lean_inc(v_n_1412_);
v_e_1413_ = lean_ctor_get(v_d_1402_, 10);
lean_inc(v_e_1413_);
v_p_1414_ = lean_ctor_get(v_d_1402_, 11);
lean_inc(v_p_1414_);
v_q_1415_ = lean_ctor_get(v_d_1402_, 12);
lean_inc(v_q_1415_);
v_dp_1416_ = lean_ctor_get(v_d_1402_, 13);
lean_inc(v_dp_1416_);
v_dq_1417_ = lean_ctor_get(v_d_1402_, 14);
lean_inc(v_dq_1417_);
v_qi_1418_ = lean_ctor_get(v_d_1402_, 15);
lean_inc(v_qi_1418_);
v_oth_1419_ = lean_ctor_get(v_d_1402_, 16);
lean_inc(v_oth_1419_);
v_k_1420_ = lean_ctor_get(v_d_1402_, 17);
lean_inc(v_k_1420_);
lean_dec_ref(v_d_1402_);
v___x_1421_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
lean_inc_ref_n(v___f_1398_, 14);
v___x_1422_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_kty_1403_);
v___x_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1421_);
lean_ctor_set(v___x_1423_, 1, v___x_1422_);
v___x_1424_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_1425_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_use_1404_);
v___x_1426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1424_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_1428_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1399_, v_key__ops_1405_);
v___x_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1427_);
lean_ctor_set(v___x_1429_, 1, v___x_1428_);
v___x_1430_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_1431_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_alg_1406_);
v___x_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1430_);
lean_ctor_set(v___x_1432_, 1, v___x_1431_);
v___x_1433_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_1434_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1400_, v_ext_1407_);
v___x_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
v___x_1436_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_1437_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_crv_1408_);
v___x_1438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1436_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_1440_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_x_1409_);
v___x_1441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1439_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
v___x_1442_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_1443_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_y_1410_);
v___x_1444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1442_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
v___x_1445_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_1446_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_d_1411_);
v___x_1447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1445_);
lean_ctor_set(v___x_1447_, 1, v___x_1446_);
v___x_1448_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_1449_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_n_1412_);
v___x_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1448_);
lean_ctor_set(v___x_1450_, 1, v___x_1449_);
v___x_1451_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_1452_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_e_1413_);
v___x_1453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1451_);
lean_ctor_set(v___x_1453_, 1, v___x_1452_);
v___x_1454_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_1455_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_p_1414_);
v___x_1456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1454_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
v___x_1457_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_1458_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_q_1415_);
v___x_1459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1457_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_1461_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_dp_1416_);
v___x_1462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1460_);
lean_ctor_set(v___x_1462_, 1, v___x_1461_);
v___x_1463_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_1464_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_dq_1417_);
v___x_1465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_1467_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_qi_1418_);
v___x_1468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1466_);
lean_ctor_set(v___x_1468_, 1, v___x_1467_);
v___x_1469_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_1470_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1401_, v_oth_1419_);
v___x_1471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1469_);
lean_ctor_set(v___x_1471_, 1, v___x_1470_);
v___x_1472_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_1473_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1398_, v_k_1420_);
v___x_1474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1472_);
lean_ctor_set(v___x_1474_, 1, v___x_1473_);
v___x_1475_ = lean_unsigned_to_nat(18u);
v___x_1476_ = lean_mk_empty_array_with_capacity(v___x_1475_);
v___x_1477_ = lean_array_push(v___x_1476_, v___x_1423_);
v___x_1478_ = lean_array_push(v___x_1477_, v___x_1426_);
v___x_1479_ = lean_array_push(v___x_1478_, v___x_1429_);
v___x_1480_ = lean_array_push(v___x_1479_, v___x_1432_);
v___x_1481_ = lean_array_push(v___x_1480_, v___x_1435_);
v___x_1482_ = lean_array_push(v___x_1481_, v___x_1438_);
v___x_1483_ = lean_array_push(v___x_1482_, v___x_1441_);
v___x_1484_ = lean_array_push(v___x_1483_, v___x_1444_);
v___x_1485_ = lean_array_push(v___x_1484_, v___x_1447_);
v___x_1486_ = lean_array_push(v___x_1485_, v___x_1450_);
v___x_1487_ = lean_array_push(v___x_1486_, v___x_1453_);
v___x_1488_ = lean_array_push(v___x_1487_, v___x_1456_);
v___x_1489_ = lean_array_push(v___x_1488_, v___x_1459_);
v___x_1490_ = lean_array_push(v___x_1489_, v___x_1462_);
v___x_1491_ = lean_array_push(v___x_1490_, v___x_1465_);
v___x_1492_ = lean_array_push(v___x_1491_, v___x_1468_);
v___x_1493_ = lean_array_push(v___x_1492_, v___x_1471_);
v___x_1494_ = lean_array_push(v___x_1493_, v___x_1474_);
v___x_1495_ = l_Lasm_JS_Web_Support_fields(v___x_1494_);
lean_dec_ref(v___x_1494_);
return v___x_1495_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__0(void){
_start:
{
lean_object* v___f_1496_; lean_object* v___x_1497_; 
v___f_1496_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0));
v___x_1497_ = l_Lasm_JS_instToJSArray___redArg(v___f_1496_);
return v___x_1497_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__2(void){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1499_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo));
v___x_1500_ = l_Lasm_JS_instToJSArray___redArg(v___x_1499_);
return v___x_1500_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__3(void){
_start:
{
lean_object* v___x_1501_; lean_object* v___f_1502_; lean_object* v___x_1503_; lean_object* v___f_1504_; lean_object* v___f_1505_; 
v___x_1501_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__2, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__2_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__2);
v___f_1502_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___closed__1));
v___x_1503_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__0, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__0_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__0);
v___f_1504_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0));
v___f_1505_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0), 5, 4);
lean_closure_set(v___f_1505_, 0, v___f_1504_);
lean_closure_set(v___f_1505_, 1, v___x_1503_);
lean_closure_set(v___f_1505_, 2, v___f_1502_);
lean_closure_set(v___f_1505_, 3, v___x_1501_);
return v___f_1505_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey(void){
_start:
{
lean_object* v___f_1506_; 
v___f_1506_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__3, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__3_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__3);
return v___f_1506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0(lean_object* v___x_1507_, lean_object* v___x_1508_, lean_object* v___x_1509_, lean_object* v___x_1510_, lean_object* v_d_1511_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
lean_inc_ref(v___x_1507_);
v___x_1513_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1512_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1509_);
lean_dec_ref(v___x_1508_);
lean_dec_ref(v___x_1507_);
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v_a_1522_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1513_, 1);
v___x_1523_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
lean_inc_ref(v___x_1507_);
v___x_1524_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1523_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1509_);
lean_dec_ref(v___x_1508_);
lean_dec_ref(v___x_1507_);
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v_a_1533_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1533_);
lean_dec_ref_known(v___x_1524_, 1);
v___x_1534_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_1535_ = l_Lasm_JS_readField___redArg(v___x_1508_, v_d_1511_, v___x_1534_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1543_; 
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1509_);
lean_dec_ref(v___x_1507_);
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1538_ = v___x_1535_;
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_a_1536_);
lean_dec(v___x_1535_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1541_; 
if (v_isShared_1539_ == 0)
{
v___x_1541_ = v___x_1538_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_a_1536_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
else
{
lean_object* v_a_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v_a_1544_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1544_);
lean_dec_ref_known(v___x_1535_, 1);
v___x_1545_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
lean_inc_ref(v___x_1507_);
v___x_1546_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1545_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1554_; 
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1509_);
lean_dec_ref(v___x_1507_);
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1549_ = v___x_1546_;
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1546_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1552_; 
if (v_isShared_1550_ == 0)
{
v___x_1552_ = v___x_1549_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_a_1547_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_a_1555_ = lean_ctor_get(v___x_1546_, 0);
lean_inc(v_a_1555_);
lean_dec_ref_known(v___x_1546_, 1);
v___x_1556_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_1557_ = l_Lasm_JS_readField___redArg(v___x_1509_, v_d_1511_, v___x_1556_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1557_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1557_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_a_1566_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1557_, 1);
v___x_1567_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
lean_inc_ref(v___x_1507_);
v___x_1568_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1567_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1568_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1568_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
else
{
lean_object* v_a_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v_a_1577_ = lean_ctor_get(v___x_1568_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1568_, 1);
v___x_1578_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
lean_inc_ref(v___x_1507_);
v___x_1579_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1578_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1579_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1579_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
else
{
lean_object* v_a_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v_a_1588_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v___x_1579_, 1);
v___x_1589_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
lean_inc_ref(v___x_1507_);
v___x_1590_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1589_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___x_1590_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1590_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v_a_1599_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1590_, 1);
v___x_1600_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc_ref(v___x_1507_);
v___x_1601_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1600_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v_a_1610_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_a_1610_);
lean_dec_ref_known(v___x_1601_, 1);
v___x_1611_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
lean_inc_ref(v___x_1507_);
v___x_1612_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1611_);
if (lean_obj_tag(v___x_1612_) == 0)
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
lean_dec(v_a_1610_);
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1613_ = lean_ctor_get(v___x_1612_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1612_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1615_ = v___x_1612_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v___x_1612_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1613_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
else
{
lean_object* v_a_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v_a_1621_ = lean_ctor_get(v___x_1612_, 0);
lean_inc(v_a_1621_);
lean_dec_ref_known(v___x_1612_, 1);
v___x_1622_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
lean_inc_ref(v___x_1507_);
v___x_1623_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1622_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
lean_dec(v_a_1621_);
lean_dec(v_a_1610_);
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
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
else
{
lean_object* v_a_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v_a_1632_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1633_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
lean_inc_ref(v___x_1507_);
v___x_1634_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1633_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1642_; 
lean_dec(v_a_1632_);
lean_dec(v_a_1621_);
lean_dec(v_a_1610_);
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1635_ = lean_ctor_get(v___x_1634_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v___x_1634_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1637_ = v___x_1634_;
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v___x_1634_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1640_; 
if (v_isShared_1638_ == 0)
{
v___x_1640_ = v___x_1637_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_a_1635_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v_a_1643_ = lean_ctor_get(v___x_1634_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1634_, 1);
v___x_1644_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
lean_inc_ref(v___x_1507_);
v___x_1645_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1644_);
if (lean_obj_tag(v___x_1645_) == 0)
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1653_; 
lean_dec(v_a_1643_);
lean_dec(v_a_1632_);
lean_dec(v_a_1621_);
lean_dec(v_a_1610_);
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1646_ = lean_ctor_get(v___x_1645_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1645_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1648_ = v___x_1645_;
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1645_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v_a_1654_ = lean_ctor_get(v___x_1645_, 0);
lean_inc(v_a_1654_);
lean_dec_ref_known(v___x_1645_, 1);
v___x_1655_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
lean_inc_ref(v___x_1507_);
v___x_1656_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1655_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
lean_dec(v_a_1654_);
lean_dec(v_a_1643_);
lean_dec(v_a_1632_);
lean_dec(v_a_1621_);
lean_dec(v_a_1610_);
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1656_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1656_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
else
{
lean_object* v_a_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v_a_1665_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1665_);
lean_dec_ref_known(v___x_1656_, 1);
v___x_1666_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
lean_inc_ref(v___x_1507_);
v___x_1667_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1666_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
lean_dec(v_a_1665_);
lean_dec(v_a_1654_);
lean_dec(v_a_1643_);
lean_dec(v_a_1632_);
lean_dec(v_a_1621_);
lean_dec(v_a_1610_);
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1667_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1667_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v_a_1676_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1676_);
lean_dec_ref_known(v___x_1667_, 1);
v___x_1677_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
lean_inc_ref(v___x_1507_);
v___x_1678_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1677_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
lean_dec(v_a_1676_);
lean_dec(v_a_1665_);
lean_dec(v_a_1654_);
lean_dec(v_a_1643_);
lean_dec(v_a_1632_);
lean_dec(v_a_1621_);
lean_dec(v_a_1610_);
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1507_);
v_a_1679_ = lean_ctor_get(v___x_1678_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1678_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1678_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
else
{
lean_object* v_a_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v_a_1687_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_a_1687_);
lean_dec_ref_known(v___x_1678_, 1);
v___x_1688_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_1689_ = l_Lasm_JS_readField___redArg(v___x_1510_, v_d_1511_, v___x_1688_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
lean_dec(v_a_1687_);
lean_dec(v_a_1676_);
lean_dec(v_a_1665_);
lean_dec(v_a_1654_);
lean_dec(v_a_1643_);
lean_dec(v_a_1632_);
lean_dec(v_a_1621_);
lean_dec(v_a_1610_);
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
lean_dec_ref(v___x_1507_);
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
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v_a_1698_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1698_);
lean_dec_ref_known(v___x_1689_, 1);
v___x_1699_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_1700_ = l_Lasm_JS_readField___redArg(v___x_1507_, v_d_1511_, v___x_1699_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1708_; 
lean_dec(v_a_1698_);
lean_dec(v_a_1687_);
lean_dec(v_a_1676_);
lean_dec(v_a_1665_);
lean_dec(v_a_1654_);
lean_dec(v_a_1643_);
lean_dec(v_a_1632_);
lean_dec(v_a_1621_);
lean_dec(v_a_1610_);
lean_dec(v_a_1599_);
lean_dec(v_a_1588_);
lean_dec(v_a_1577_);
lean_dec(v_a_1566_);
lean_dec(v_a_1555_);
lean_dec(v_a_1544_);
lean_dec(v_a_1533_);
lean_dec(v_a_1522_);
v_a_1701_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1703_ = v___x_1700_;
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v___x_1700_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1706_; 
if (v_isShared_1704_ == 0)
{
v___x_1706_ = v___x_1703_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_a_1701_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
else
{
lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1717_; 
v_a_1709_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1711_ = v___x_1700_;
v_isShared_1712_ = v_isSharedCheck_1717_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_dec(v___x_1700_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1717_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1713_; lean_object* v___x_1715_; 
v___x_1713_ = lean_alloc_ctor(0, 18, 0);
lean_ctor_set(v___x_1713_, 0, v_a_1522_);
lean_ctor_set(v___x_1713_, 1, v_a_1533_);
lean_ctor_set(v___x_1713_, 2, v_a_1544_);
lean_ctor_set(v___x_1713_, 3, v_a_1555_);
lean_ctor_set(v___x_1713_, 4, v_a_1566_);
lean_ctor_set(v___x_1713_, 5, v_a_1577_);
lean_ctor_set(v___x_1713_, 6, v_a_1588_);
lean_ctor_set(v___x_1713_, 7, v_a_1599_);
lean_ctor_set(v___x_1713_, 8, v_a_1610_);
lean_ctor_set(v___x_1713_, 9, v_a_1621_);
lean_ctor_set(v___x_1713_, 10, v_a_1632_);
lean_ctor_set(v___x_1713_, 11, v_a_1643_);
lean_ctor_set(v___x_1713_, 12, v_a_1654_);
lean_ctor_set(v___x_1713_, 13, v_a_1665_);
lean_ctor_set(v___x_1713_, 14, v_a_1676_);
lean_ctor_set(v___x_1713_, 15, v_a_1687_);
lean_ctor_set(v___x_1713_, 16, v_a_1698_);
lean_ctor_set(v___x_1713_, 17, v_a_1709_);
if (v_isShared_1712_ == 0)
{
lean_ctor_set(v___x_1711_, 0, v___x_1713_);
v___x_1715_ = v___x_1711_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v___x_1713_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0___boxed(lean_object* v___x_1718_, lean_object* v___x_1719_, lean_object* v___x_1720_, lean_object* v___x_1721_, lean_object* v_d_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0(v___x_1718_, v___x_1719_, v___x_1720_, v___x_1721_, v_d_1722_);
lean_dec(v_d_1722_);
return v_res_1723_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0(void){
_start:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1724_ = l_Lasm_JS_instFromJSString;
v___x_1725_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1724_);
return v___x_1725_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1(void){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1726_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0);
v___x_1727_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1726_);
return v___x_1727_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2(void){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = l_Lasm_JS_instFromJSBool;
v___x_1729_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1728_);
return v___x_1729_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo;
v___x_1731_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1730_);
return v___x_1731_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4(void){
_start:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3);
v___x_1733_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1732_);
return v___x_1733_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5(void){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___f_1738_; 
v___x_1734_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4);
v___x_1735_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2);
v___x_1736_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1);
v___x_1737_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0);
v___f_1738_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1738_, 0, v___x_1737_);
lean_closure_set(v___f_1738_, 1, v___x_1736_);
lean_closure_set(v___f_1738_, 2, v___x_1735_);
lean_closure_set(v___f_1738_, 3, v___x_1734_);
return v___f_1738_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7(void){
_start:
{
uint8_t v___x_1740_; lean_object* v___x_1741_; lean_object* v___f_1742_; lean_object* v___x_1743_; 
v___x_1740_ = 0;
v___x_1741_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJsonWebKey___closed__6));
v___f_1742_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5);
v___x_1743_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1743_, 0, v___f_1742_);
lean_ctor_set(v___x_1743_, 1, v___x_1741_);
lean_ctor_set_uint8(v___x_1743_, sizeof(void*)*2, v___x_1740_);
return v___x_1743_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey(void){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx(lean_object* v_x_1745_){
_start:
{
if (lean_obj_tag(v_x_1745_) == 0)
{
lean_object* v___x_1746_; 
v___x_1746_ = lean_unsigned_to_nat(0u);
return v___x_1746_;
}
else
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_unsigned_to_nat(1u);
return v___x_1747_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx___boxed(lean_object* v_x_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx(v_x_1748_);
lean_dec_ref(v_x_1748_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(lean_object* v_t_1750_, lean_object* v_k_1751_){
_start:
{
lean_object* v_value_1752_; lean_object* v___x_1753_; 
v_value_1752_ = lean_ctor_get(v_t_1750_, 0);
lean_inc_ref(v_value_1752_);
lean_dec_ref(v_t_1750_);
v___x_1753_ = lean_apply_1(v_k_1751_, v_value_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim(lean_object* v_motive_1754_, lean_object* v_ctorIdx_1755_, lean_object* v_t_1756_, lean_object* v_h_1757_, lean_object* v_k_1758_){
_start:
{
lean_object* v___x_1759_; 
v___x_1759_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1756_, v_k_1758_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___boxed(lean_object* v_motive_1760_, lean_object* v_ctorIdx_1761_, lean_object* v_t_1762_, lean_object* v_h_1763_, lean_object* v_k_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim(v_motive_1760_, v_ctorIdx_1761_, v_t_1762_, v_h_1763_, v_k_1764_);
lean_dec(v_ctorIdx_1761_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_bufferSource_elim___redArg(lean_object* v_t_1766_, lean_object* v_bufferSource_1767_){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1766_, v_bufferSource_1767_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_bufferSource_elim(lean_object* v_motive_1769_, lean_object* v_t_1770_, lean_object* v_h_1771_, lean_object* v_bufferSource_1772_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1770_, v_bufferSource_1772_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_jsonWebKey_elim___redArg(lean_object* v_t_1774_, lean_object* v_jsonWebKey_1775_){
_start:
{
lean_object* v___x_1776_; 
v___x_1776_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1774_, v_jsonWebKey_1775_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_jsonWebKey_elim(lean_object* v_motive_1777_, lean_object* v_t_1778_, lean_object* v_h_1779_, lean_object* v_jsonWebKey_1780_){
_start:
{
lean_object* v___x_1781_; 
v___x_1781_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1778_, v_jsonWebKey_1780_);
return v___x_1781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey___lam__0(lean_object* v_x_1782_){
_start:
{
if (lean_obj_tag(v_x_1782_) == 0)
{
lean_object* v_value_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1790_; 
v_value_1783_ = lean_ctor_get(v_x_1782_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v_x_1782_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1785_ = v_x_1782_;
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_value_1783_);
lean_dec(v_x_1782_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
lean_ctor_set_tag(v___x_1785_, 6);
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_value_1783_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
else
{
lean_object* v_value_1791_; lean_object* v_kty_1792_; lean_object* v_use_1793_; lean_object* v_key__ops_1794_; lean_object* v_alg_1795_; lean_object* v_ext_1796_; lean_object* v_crv_1797_; lean_object* v_x_1798_; lean_object* v_y_1799_; lean_object* v_d_1800_; lean_object* v_n_1801_; lean_object* v_e_1802_; lean_object* v_p_1803_; lean_object* v_q_1804_; lean_object* v_dp_1805_; lean_object* v_dq_1806_; lean_object* v_qi_1807_; lean_object* v_oth_1808_; lean_object* v_k_1809_; lean_object* v___f_1810_; lean_object* v___x_1811_; lean_object* v___f_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v_value_1791_ = lean_ctor_get(v_x_1782_, 0);
lean_inc_ref(v_value_1791_);
lean_dec_ref_known(v_x_1782_, 1);
v_kty_1792_ = lean_ctor_get(v_value_1791_, 0);
lean_inc(v_kty_1792_);
v_use_1793_ = lean_ctor_get(v_value_1791_, 1);
lean_inc(v_use_1793_);
v_key__ops_1794_ = lean_ctor_get(v_value_1791_, 2);
lean_inc(v_key__ops_1794_);
v_alg_1795_ = lean_ctor_get(v_value_1791_, 3);
lean_inc(v_alg_1795_);
v_ext_1796_ = lean_ctor_get(v_value_1791_, 4);
lean_inc(v_ext_1796_);
v_crv_1797_ = lean_ctor_get(v_value_1791_, 5);
lean_inc(v_crv_1797_);
v_x_1798_ = lean_ctor_get(v_value_1791_, 6);
lean_inc(v_x_1798_);
v_y_1799_ = lean_ctor_get(v_value_1791_, 7);
lean_inc(v_y_1799_);
v_d_1800_ = lean_ctor_get(v_value_1791_, 8);
lean_inc(v_d_1800_);
v_n_1801_ = lean_ctor_get(v_value_1791_, 9);
lean_inc(v_n_1801_);
v_e_1802_ = lean_ctor_get(v_value_1791_, 10);
lean_inc(v_e_1802_);
v_p_1803_ = lean_ctor_get(v_value_1791_, 11);
lean_inc(v_p_1803_);
v_q_1804_ = lean_ctor_get(v_value_1791_, 12);
lean_inc(v_q_1804_);
v_dp_1805_ = lean_ctor_get(v_value_1791_, 13);
lean_inc(v_dp_1805_);
v_dq_1806_ = lean_ctor_get(v_value_1791_, 14);
lean_inc(v_dq_1806_);
v_qi_1807_ = lean_ctor_get(v_value_1791_, 15);
lean_inc(v_qi_1807_);
v_oth_1808_ = lean_ctor_get(v_value_1791_, 16);
lean_inc(v_oth_1808_);
v_k_1809_ = lean_ctor_get(v_value_1791_, 17);
lean_inc(v_k_1809_);
lean_dec_ref(v_value_1791_);
v___f_1810_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0));
v___x_1811_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__0, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__0_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__0);
v___f_1812_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___closed__1));
v___x_1813_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__2, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__2_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__2);
v___x_1814_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
v___x_1815_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_kty_1792_);
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1814_);
lean_ctor_set(v___x_1816_, 1, v___x_1815_);
v___x_1817_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_1818_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_use_1793_);
v___x_1819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1817_);
lean_ctor_set(v___x_1819_, 1, v___x_1818_);
v___x_1820_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_1821_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1811_, v_key__ops_1794_);
v___x_1822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1820_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
v___x_1823_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_1824_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_alg_1795_);
v___x_1825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1823_);
lean_ctor_set(v___x_1825_, 1, v___x_1824_);
v___x_1826_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_1827_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1812_, v_ext_1796_);
v___x_1828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1826_);
lean_ctor_set(v___x_1828_, 1, v___x_1827_);
v___x_1829_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_1830_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_crv_1797_);
v___x_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1829_);
lean_ctor_set(v___x_1831_, 1, v___x_1830_);
v___x_1832_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_1833_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_x_1798_);
v___x_1834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1832_);
lean_ctor_set(v___x_1834_, 1, v___x_1833_);
v___x_1835_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_1836_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_y_1799_);
v___x_1837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1835_);
lean_ctor_set(v___x_1837_, 1, v___x_1836_);
v___x_1838_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_1839_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_d_1800_);
v___x_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1838_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
v___x_1841_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_1842_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_n_1801_);
v___x_1843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1841_);
lean_ctor_set(v___x_1843_, 1, v___x_1842_);
v___x_1844_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_1845_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_e_1802_);
v___x_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1844_);
lean_ctor_set(v___x_1846_, 1, v___x_1845_);
v___x_1847_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_1848_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_p_1803_);
v___x_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1847_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
v___x_1850_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_1851_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_q_1804_);
v___x_1852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1850_);
lean_ctor_set(v___x_1852_, 1, v___x_1851_);
v___x_1853_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_1854_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_dp_1805_);
v___x_1855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1853_);
lean_ctor_set(v___x_1855_, 1, v___x_1854_);
v___x_1856_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_1857_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_dq_1806_);
v___x_1858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1856_);
lean_ctor_set(v___x_1858_, 1, v___x_1857_);
v___x_1859_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_1860_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_qi_1807_);
v___x_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1859_);
lean_ctor_set(v___x_1861_, 1, v___x_1860_);
v___x_1862_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_1863_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1813_, v_oth_1808_);
v___x_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1862_);
lean_ctor_set(v___x_1864_, 1, v___x_1863_);
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_1866_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1810_, v_k_1809_);
v___x_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1865_);
lean_ctor_set(v___x_1867_, 1, v___x_1866_);
v___x_1868_ = lean_unsigned_to_nat(18u);
v___x_1869_ = lean_mk_empty_array_with_capacity(v___x_1868_);
v___x_1870_ = lean_array_push(v___x_1869_, v___x_1816_);
v___x_1871_ = lean_array_push(v___x_1870_, v___x_1819_);
v___x_1872_ = lean_array_push(v___x_1871_, v___x_1822_);
v___x_1873_ = lean_array_push(v___x_1872_, v___x_1825_);
v___x_1874_ = lean_array_push(v___x_1873_, v___x_1828_);
v___x_1875_ = lean_array_push(v___x_1874_, v___x_1831_);
v___x_1876_ = lean_array_push(v___x_1875_, v___x_1834_);
v___x_1877_ = lean_array_push(v___x_1876_, v___x_1837_);
v___x_1878_ = lean_array_push(v___x_1877_, v___x_1840_);
v___x_1879_ = lean_array_push(v___x_1878_, v___x_1843_);
v___x_1880_ = lean_array_push(v___x_1879_, v___x_1846_);
v___x_1881_ = lean_array_push(v___x_1880_, v___x_1849_);
v___x_1882_ = lean_array_push(v___x_1881_, v___x_1852_);
v___x_1883_ = lean_array_push(v___x_1882_, v___x_1855_);
v___x_1884_ = lean_array_push(v___x_1883_, v___x_1858_);
v___x_1885_ = lean_array_push(v___x_1884_, v___x_1861_);
v___x_1886_ = lean_array_push(v___x_1885_, v___x_1864_);
v___x_1887_ = lean_array_push(v___x_1886_, v___x_1867_);
v___x_1888_ = l_Lasm_JS_Web_Support_fields(v___x_1887_);
lean_dec_ref(v___x_1887_);
return v___x_1888_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrJsonWebKey___lam__0(lean_object* v_value_1891_){
_start:
{
lean_object* v___x_1892_; 
v___x_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1892_, 0, v_value_1891_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeJsonWebKeyBufferSourceOrJsonWebKey___lam__0(lean_object* v_value_1895_){
_start:
{
lean_object* v___x_1896_; 
v___x_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1896_, 0, v_value_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx(lean_object* v_x_1899_){
_start:
{
if (lean_obj_tag(v_x_1899_) == 0)
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_unsigned_to_nat(0u);
return v___x_1900_;
}
else
{
lean_object* v___x_1901_; 
v___x_1901_ = lean_unsigned_to_nat(1u);
return v___x_1901_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx___boxed(lean_object* v_x_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx(v_x_1902_);
lean_dec_ref(v_x_1902_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(lean_object* v_t_1904_, lean_object* v_k_1905_){
_start:
{
lean_object* v_value_1906_; lean_object* v___x_1907_; 
v_value_1906_ = lean_ctor_get(v_t_1904_, 0);
lean_inc_ref(v_value_1906_);
lean_dec_ref(v_t_1904_);
v___x_1907_ = lean_apply_1(v_k_1905_, v_value_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim(lean_object* v_motive_1908_, lean_object* v_ctorIdx_1909_, lean_object* v_t_1910_, lean_object* v_h_1911_, lean_object* v_k_1912_){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1910_, v_k_1912_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___boxed(lean_object* v_motive_1914_, lean_object* v_ctorIdx_1915_, lean_object* v_t_1916_, lean_object* v_h_1917_, lean_object* v_k_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim(v_motive_1914_, v_ctorIdx_1915_, v_t_1916_, v_h_1917_, v_k_1918_);
lean_dec(v_ctorIdx_1915_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_arrayBuffer_elim___redArg(lean_object* v_t_1920_, lean_object* v_arrayBuffer_1921_){
_start:
{
lean_object* v___x_1922_; 
v___x_1922_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1920_, v_arrayBuffer_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_arrayBuffer_elim(lean_object* v_motive_1923_, lean_object* v_t_1924_, lean_object* v_h_1925_, lean_object* v_arrayBuffer_1926_){
_start:
{
lean_object* v___x_1927_; 
v___x_1927_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1924_, v_arrayBuffer_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_jsonWebKey_elim___redArg(lean_object* v_t_1928_, lean_object* v_jsonWebKey_1929_){
_start:
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1928_, v_jsonWebKey_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_jsonWebKey_elim(lean_object* v_motive_1931_, lean_object* v_t_1932_, lean_object* v_h_1933_, lean_object* v_jsonWebKey_1934_){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1932_, v_jsonWebKey_1934_);
return v___x_1935_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_1943_ = lean_string_utf8_byte_size(v___x_1942_);
return v___x_1943_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6(void){
_start:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; uint8_t v___x_1946_; 
v___x_1944_ = lean_unsigned_to_nat(0u);
v___x_1945_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5);
v___x_1946_ = lean_nat_dec_eq(v___x_1945_, v___x_1944_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(lean_object* v_d_1951_, lean_object* v_key_1952_){
_start:
{
if (lean_obj_tag(v_d_1951_) == 8)
{
lean_object* v___x_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1984_; 
v___x_1955_ = l_Lasm_JS_Data_field(v_d_1951_, v_key_1952_);
v_isSharedCheck_1984_ = !lean_is_exclusive(v_d_1951_);
if (v_isSharedCheck_1984_ == 0)
{
lean_object* v_unused_1985_; 
v_unused_1985_ = lean_ctor_get(v_d_1951_, 0);
lean_dec(v_unused_1985_);
v___x_1957_ = v_d_1951_;
v_isShared_1958_ = v_isSharedCheck_1984_;
goto v_resetjp_1956_;
}
else
{
lean_dec(v_d_1951_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1984_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
switch(lean_obj_tag(v___x_1955_))
{
case 1:
{
lean_del_object(v___x_1957_);
goto v___jp_1953_;
}
case 0:
{
lean_del_object(v___x_1957_);
goto v___jp_1953_;
}
default: 
{
if (lean_obj_tag(v___x_1955_) == 2)
{
uint8_t v_b_1959_; lean_object* v___x_1960_; lean_object* v___x_1962_; 
v_b_1959_ = lean_ctor_get_uint8(v___x_1955_, 0);
lean_dec_ref_known(v___x_1955_, 0);
v___x_1960_ = lean_box(v_b_1959_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set_tag(v___x_1957_, 1);
lean_ctor_set(v___x_1957_, 0, v___x_1960_);
v___x_1962_ = v___x_1957_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v___x_1960_);
v___x_1962_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
lean_object* v___x_1963_; 
v___x_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
return v___x_1963_;
}
}
else
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; uint8_t v___x_1975_; 
v___x_1965_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_1966_ = lean_string_append(v___x_1965_, v_key_1952_);
v___x_1967_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_1968_ = lean_string_append(v___x_1966_, v___x_1967_);
v___x_1969_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__3));
v___x_1970_ = lean_string_append(v___x_1968_, v___x_1969_);
v___x_1971_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_1972_ = lean_string_append(v___x_1970_, v___x_1971_);
v___x_1973_ = l_Lasm_JS_Data_describe(v___x_1955_);
v___x_1974_ = lean_string_append(v___x_1972_, v___x_1973_);
lean_dec_ref(v___x_1973_);
v___x_1975_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1979_; 
v___x_1976_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___x_1977_ = lean_string_append(v___x_1974_, v___x_1976_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set_tag(v___x_1957_, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1977_);
v___x_1979_ = v___x_1957_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___x_1977_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
else
{
lean_object* v___x_1982_; 
if (v_isShared_1958_ == 0)
{
lean_ctor_set_tag(v___x_1957_, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1974_);
v___x_1982_ = v___x_1957_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1974_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1986_; 
lean_dec(v_d_1951_);
v___x_1986_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__9));
return v___x_1986_;
}
v___jp_1953_:
{
lean_object* v___x_1954_; 
v___x_1954_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__0));
return v___x_1954_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___boxed(lean_object* v_d_1987_, lean_object* v_key_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(v_d_1987_, v_key_1988_);
lean_dec_ref(v_key_1988_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(size_t v_sz_1992_, size_t v_i_1993_, lean_object* v_bs_1994_){
_start:
{
uint8_t v___x_1995_; 
v___x_1995_ = lean_usize_dec_lt(v_i_1993_, v_sz_1992_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1996_; 
v___x_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1996_, 0, v_bs_1994_);
return v___x_1996_;
}
else
{
lean_object* v_v_1997_; 
v_v_1997_ = lean_array_uget_borrowed(v_bs_1994_, v_i_1993_);
if (lean_obj_tag(v_v_1997_) == 4)
{
lean_object* v_s_1998_; lean_object* v___x_1999_; lean_object* v_bs_x27_2000_; size_t v___x_2001_; size_t v___x_2002_; lean_object* v___x_2003_; 
v_s_1998_ = lean_ctor_get(v_v_1997_, 0);
lean_inc_ref(v_s_1998_);
v___x_1999_ = lean_unsigned_to_nat(0u);
v_bs_x27_2000_ = lean_array_uset(v_bs_1994_, v_i_1993_, v___x_1999_);
v___x_2001_ = ((size_t)1ULL);
v___x_2002_ = lean_usize_add(v_i_1993_, v___x_2001_);
v___x_2003_ = lean_array_uset(v_bs_x27_2000_, v_i_1993_, v_s_1998_);
v_i_1993_ = v___x_2002_;
v_bs_1994_ = v___x_2003_;
goto _start;
}
else
{
lean_object* v___x_2005_; 
lean_dec_ref(v_bs_1994_);
v___x_2005_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___closed__0));
return v___x_2005_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2006_, lean_object* v_i_2007_, lean_object* v_bs_2008_){
_start:
{
size_t v_sz_boxed_2009_; size_t v_i_boxed_2010_; lean_object* v_res_2011_; 
v_sz_boxed_2009_ = lean_unbox_usize(v_sz_2006_);
lean_dec(v_sz_2006_);
v_i_boxed_2010_ = lean_unbox_usize(v_i_2007_);
lean_dec(v_i_2007_);
v_res_2011_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(v_sz_boxed_2009_, v_i_boxed_2010_, v_bs_2008_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(lean_object* v_d_2021_, lean_object* v_key_2022_){
_start:
{
if (lean_obj_tag(v_d_2021_) == 8)
{
lean_object* v___x_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2078_; 
v___x_2025_ = l_Lasm_JS_Data_field(v_d_2021_, v_key_2022_);
v_isSharedCheck_2078_ = !lean_is_exclusive(v_d_2021_);
if (v_isSharedCheck_2078_ == 0)
{
lean_object* v_unused_2079_; 
v_unused_2079_ = lean_ctor_get(v_d_2021_, 0);
lean_dec(v_unused_2079_);
v___x_2027_ = v_d_2021_;
v_isShared_2028_ = v_isSharedCheck_2078_;
goto v_resetjp_2026_;
}
else
{
lean_dec(v_d_2021_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2078_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v_a_2030_; 
switch(lean_obj_tag(v___x_2025_))
{
case 1:
{
lean_del_object(v___x_2027_);
goto v___jp_2023_;
}
case 0:
{
lean_del_object(v___x_2027_);
goto v___jp_2023_;
}
default: 
{
if (lean_obj_tag(v___x_2025_) == 7)
{
lean_object* v_items_2055_; size_t v_sz_2056_; size_t v___x_2057_; lean_object* v___x_2058_; 
v_items_2055_ = lean_ctor_get(v___x_2025_, 0);
lean_inc_ref(v_items_2055_);
v_sz_2056_ = lean_array_size(v_items_2055_);
v___x_2057_ = ((size_t)0ULL);
v___x_2058_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(v_sz_2056_, v___x_2057_, v_items_2055_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; uint8_t v___x_2063_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2059_);
lean_dec_ref_known(v___x_2058_, 1);
v___x_2060_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__4));
v___x_2061_ = lean_string_utf8_byte_size(v_a_2059_);
v___x_2062_ = lean_unsigned_to_nat(0u);
v___x_2063_ = lean_nat_dec_eq(v___x_2061_, v___x_2062_);
if (v___x_2063_ == 0)
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2064_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__5));
v___x_2065_ = lean_string_append(v___x_2064_, v_a_2059_);
lean_dec(v_a_2059_);
v___x_2066_ = lean_string_append(v___x_2060_, v___x_2065_);
lean_dec_ref(v___x_2065_);
v_a_2030_ = v___x_2066_;
goto v___jp_2029_;
}
else
{
lean_dec(v_a_2059_);
v_a_2030_ = v___x_2060_;
goto v___jp_2029_;
}
}
else
{
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2067_; 
v_a_2067_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2067_);
lean_dec_ref_known(v___x_2058_, 1);
v_a_2030_ = v_a_2067_;
goto v___jp_2029_;
}
else
{
lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2076_; 
lean_dec_ref_known(v___x_2025_, 1);
lean_del_object(v___x_2027_);
v_a_2068_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2070_ = v___x_2058_;
v_isShared_2071_ = v_isSharedCheck_2076_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2058_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2076_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2072_; lean_object* v___x_2074_; 
v___x_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2072_, 0, v_a_2068_);
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 0, v___x_2072_);
v___x_2074_ = v___x_2070_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2072_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
}
else
{
lean_object* v___x_2077_; 
v___x_2077_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_2030_ = v___x_2077_;
goto v___jp_2029_;
}
}
}
v___jp_2029_:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; uint8_t v___x_2043_; 
v___x_2031_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_2032_ = lean_string_append(v___x_2031_, v_key_2022_);
v___x_2033_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_2034_ = lean_string_append(v___x_2032_, v___x_2033_);
v___x_2035_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__1));
v___x_2036_ = lean_string_append(v___x_2034_, v___x_2035_);
v___x_2037_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_2038_ = lean_string_append(v___x_2036_, v___x_2037_);
v___x_2039_ = l_Lasm_JS_Data_describe(v___x_2025_);
v___x_2040_ = lean_string_append(v___x_2038_, v___x_2039_);
lean_dec_ref(v___x_2039_);
v___x_2041_ = lean_string_utf8_byte_size(v_a_2030_);
v___x_2042_ = lean_unsigned_to_nat(0u);
v___x_2043_ = lean_nat_dec_eq(v___x_2041_, v___x_2042_);
if (v___x_2043_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2050_; 
v___x_2044_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_2045_ = lean_string_append(v___x_2044_, v_a_2030_);
lean_dec_ref(v_a_2030_);
v___x_2046_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_2047_ = lean_string_append(v___x_2045_, v___x_2046_);
v___x_2048_ = lean_string_append(v___x_2040_, v___x_2047_);
lean_dec_ref(v___x_2047_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set_tag(v___x_2027_, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2048_);
v___x_2050_ = v___x_2027_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2048_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
else
{
lean_object* v___x_2053_; 
lean_dec_ref(v_a_2030_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set_tag(v___x_2027_, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2040_);
v___x_2053_ = v___x_2027_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2040_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
}
}
else
{
lean_object* v___x_2080_; 
lean_dec(v_d_2021_);
v___x_2080_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__6));
return v___x_2080_;
}
v___jp_2023_:
{
lean_object* v___x_2024_; 
v___x_2024_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__0));
return v___x_2024_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___boxed(lean_object* v_d_2081_, lean_object* v_key_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(v_d_2081_, v_key_2082_);
lean_dec_ref(v_key_2082_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(lean_object* v_d_2089_, lean_object* v_key_2090_){
_start:
{
if (lean_obj_tag(v_d_2089_) == 8)
{
lean_object* v___x_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2121_; 
v___x_2093_ = l_Lasm_JS_Data_field(v_d_2089_, v_key_2090_);
v_isSharedCheck_2121_ = !lean_is_exclusive(v_d_2089_);
if (v_isSharedCheck_2121_ == 0)
{
lean_object* v_unused_2122_; 
v_unused_2122_ = lean_ctor_get(v_d_2089_, 0);
lean_dec(v_unused_2122_);
v___x_2095_ = v_d_2089_;
v_isShared_2096_ = v_isSharedCheck_2121_;
goto v_resetjp_2094_;
}
else
{
lean_dec(v_d_2089_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2121_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
switch(lean_obj_tag(v___x_2093_))
{
case 1:
{
lean_del_object(v___x_2095_);
goto v___jp_2091_;
}
case 0:
{
lean_del_object(v___x_2095_);
goto v___jp_2091_;
}
default: 
{
if (lean_obj_tag(v___x_2093_) == 4)
{
lean_object* v_s_2097_; lean_object* v___x_2099_; 
v_s_2097_ = lean_ctor_get(v___x_2093_, 0);
lean_inc_ref(v_s_2097_);
lean_dec_ref_known(v___x_2093_, 1);
if (v_isShared_2096_ == 0)
{
lean_ctor_set_tag(v___x_2095_, 1);
lean_ctor_set(v___x_2095_, 0, v_s_2097_);
v___x_2099_ = v___x_2095_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_s_2097_);
v___x_2099_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2100_; 
v___x_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2099_);
return v___x_2100_;
}
}
else
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; uint8_t v___x_2112_; 
v___x_2102_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_2103_ = lean_string_append(v___x_2102_, v_key_2090_);
v___x_2104_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_2105_ = lean_string_append(v___x_2103_, v___x_2104_);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__1));
v___x_2107_ = lean_string_append(v___x_2105_, v___x_2106_);
v___x_2108_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_2109_ = lean_string_append(v___x_2107_, v___x_2108_);
v___x_2110_ = l_Lasm_JS_Data_describe(v___x_2093_);
v___x_2111_ = lean_string_append(v___x_2109_, v___x_2110_);
lean_dec_ref(v___x_2110_);
v___x_2112_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_2112_ == 0)
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2116_; 
v___x_2113_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___x_2114_ = lean_string_append(v___x_2111_, v___x_2113_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set_tag(v___x_2095_, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2114_);
v___x_2116_ = v___x_2095_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v___x_2114_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
else
{
lean_object* v___x_2119_; 
if (v_isShared_2096_ == 0)
{
lean_ctor_set_tag(v___x_2095_, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2111_);
v___x_2119_ = v___x_2095_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2111_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2123_; 
lean_dec(v_d_2089_);
v___x_2123_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__2));
return v___x_2123_;
}
v___jp_2091_:
{
lean_object* v___x_2092_; 
v___x_2092_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__0));
return v___x_2092_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___boxed(lean_object* v_d_2124_, lean_object* v_key_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2124_, v_key_2125_);
lean_dec_ref(v_key_2125_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(size_t v_sz_2127_, size_t v_i_2128_, lean_object* v_bs_2129_){
_start:
{
uint8_t v___x_2130_; 
v___x_2130_ = lean_usize_dec_lt(v_i_2128_, v_sz_2127_);
if (v___x_2130_ == 0)
{
lean_object* v___x_2131_; 
v___x_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2131_, 0, v_bs_2129_);
return v___x_2131_;
}
else
{
lean_object* v_v_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v_v_2132_ = lean_array_uget_borrowed(v_bs_2129_, v_i_2128_);
v___x_2133_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
lean_inc(v_v_2132_);
v___x_2134_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_v_2132_, v___x_2133_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2142_; 
lean_dec_ref(v_bs_2129_);
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2137_ = v___x_2134_;
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2134_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2140_; 
if (v_isShared_2138_ == 0)
{
v___x_2140_ = v___x_2137_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_a_2135_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v_a_2143_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2143_);
lean_dec_ref_known(v___x_2134_, 1);
v___x_2144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc(v_v_2132_);
v___x_2145_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_v_2132_, v___x_2144_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
lean_dec(v_a_2143_);
lean_dec_ref(v_bs_2129_);
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2145_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2145_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
v_a_2154_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2154_);
lean_dec_ref_known(v___x_2145_, 1);
v___x_2155_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
lean_inc(v_v_2132_);
v___x_2156_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_v_2132_, v___x_2155_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
lean_dec(v_a_2154_);
lean_dec(v_a_2143_);
lean_dec_ref(v_bs_2129_);
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_2156_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2156_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2166_; lean_object* v_bs_x27_2167_; lean_object* v___x_2168_; size_t v___x_2169_; size_t v___x_2170_; lean_object* v___x_2171_; 
v_a_2165_ = lean_ctor_get(v___x_2156_, 0);
lean_inc(v_a_2165_);
lean_dec_ref_known(v___x_2156_, 1);
v___x_2166_ = lean_unsigned_to_nat(0u);
v_bs_x27_2167_ = lean_array_uset(v_bs_2129_, v_i_2128_, v___x_2166_);
v___x_2168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2168_, 0, v_a_2143_);
lean_ctor_set(v___x_2168_, 1, v_a_2154_);
lean_ctor_set(v___x_2168_, 2, v_a_2165_);
v___x_2169_ = ((size_t)1ULL);
v___x_2170_ = lean_usize_add(v_i_2128_, v___x_2169_);
v___x_2171_ = lean_array_uset(v_bs_x27_2167_, v_i_2128_, v___x_2168_);
v_i_2128_ = v___x_2170_;
v_bs_2129_ = v___x_2171_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5___boxed(lean_object* v_sz_2173_, lean_object* v_i_2174_, lean_object* v_bs_2175_){
_start:
{
size_t v_sz_boxed_2176_; size_t v_i_boxed_2177_; lean_object* v_res_2178_; 
v_sz_boxed_2176_ = lean_unbox_usize(v_sz_2173_);
lean_dec(v_sz_2173_);
v_i_boxed_2177_ = lean_unbox_usize(v_i_2174_);
lean_dec(v_i_2174_);
v_res_2178_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(v_sz_boxed_2176_, v_i_boxed_2177_, v_bs_2175_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(lean_object* v_d_2185_, lean_object* v_key_2186_){
_start:
{
if (lean_obj_tag(v_d_2185_) == 8)
{
lean_object* v___x_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2242_; 
v___x_2189_ = l_Lasm_JS_Data_field(v_d_2185_, v_key_2186_);
v_isSharedCheck_2242_ = !lean_is_exclusive(v_d_2185_);
if (v_isSharedCheck_2242_ == 0)
{
lean_object* v_unused_2243_; 
v_unused_2243_ = lean_ctor_get(v_d_2185_, 0);
lean_dec(v_unused_2243_);
v___x_2191_ = v_d_2185_;
v_isShared_2192_ = v_isSharedCheck_2242_;
goto v_resetjp_2190_;
}
else
{
lean_dec(v_d_2185_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2242_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
lean_object* v_a_2194_; 
switch(lean_obj_tag(v___x_2189_))
{
case 1:
{
lean_del_object(v___x_2191_);
goto v___jp_2187_;
}
case 0:
{
lean_del_object(v___x_2191_);
goto v___jp_2187_;
}
default: 
{
if (lean_obj_tag(v___x_2189_) == 7)
{
lean_object* v_items_2219_; size_t v_sz_2220_; size_t v___x_2221_; lean_object* v___x_2222_; 
v_items_2219_ = lean_ctor_get(v___x_2189_, 0);
lean_inc_ref(v_items_2219_);
v_sz_2220_ = lean_array_size(v_items_2219_);
v___x_2221_ = ((size_t)0ULL);
v___x_2222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(v_sz_2220_, v___x_2221_, v_items_2219_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v_a_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; uint8_t v___x_2227_; 
v_a_2223_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_a_2223_);
lean_dec_ref_known(v___x_2222_, 1);
v___x_2224_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__2));
v___x_2225_ = lean_string_utf8_byte_size(v_a_2223_);
v___x_2226_ = lean_unsigned_to_nat(0u);
v___x_2227_ = lean_nat_dec_eq(v___x_2225_, v___x_2226_);
if (v___x_2227_ == 0)
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__5));
v___x_2229_ = lean_string_append(v___x_2228_, v_a_2223_);
lean_dec(v_a_2223_);
v___x_2230_ = lean_string_append(v___x_2224_, v___x_2229_);
lean_dec_ref(v___x_2229_);
v_a_2194_ = v___x_2230_;
goto v___jp_2193_;
}
else
{
lean_dec(v_a_2223_);
v_a_2194_ = v___x_2224_;
goto v___jp_2193_;
}
}
else
{
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v_a_2231_; 
v_a_2231_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_a_2231_);
lean_dec_ref_known(v___x_2222_, 1);
v_a_2194_ = v_a_2231_;
goto v___jp_2193_;
}
else
{
lean_object* v_a_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2240_; 
lean_dec_ref_known(v___x_2189_, 1);
lean_del_object(v___x_2191_);
v_a_2232_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2234_ = v___x_2222_;
v_isShared_2235_ = v_isSharedCheck_2240_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_a_2232_);
lean_dec(v___x_2222_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2240_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2238_; 
v___x_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2236_, 0, v_a_2232_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 0, v___x_2236_);
v___x_2238_ = v___x_2234_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2236_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
}
}
else
{
lean_object* v___x_2241_; 
v___x_2241_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_2194_ = v___x_2241_;
goto v___jp_2193_;
}
}
}
v___jp_2193_:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2195_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_2196_ = lean_string_append(v___x_2195_, v_key_2186_);
v___x_2197_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_2198_ = lean_string_append(v___x_2196_, v___x_2197_);
v___x_2199_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__1));
v___x_2200_ = lean_string_append(v___x_2198_, v___x_2199_);
v___x_2201_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_2202_ = lean_string_append(v___x_2200_, v___x_2201_);
v___x_2203_ = l_Lasm_JS_Data_describe(v___x_2189_);
v___x_2204_ = lean_string_append(v___x_2202_, v___x_2203_);
lean_dec_ref(v___x_2203_);
v___x_2205_ = lean_string_utf8_byte_size(v_a_2194_);
v___x_2206_ = lean_unsigned_to_nat(0u);
v___x_2207_ = lean_nat_dec_eq(v___x_2205_, v___x_2206_);
if (v___x_2207_ == 0)
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2214_; 
v___x_2208_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_2209_ = lean_string_append(v___x_2208_, v_a_2194_);
lean_dec_ref(v_a_2194_);
v___x_2210_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_2211_ = lean_string_append(v___x_2209_, v___x_2210_);
v___x_2212_ = lean_string_append(v___x_2204_, v___x_2211_);
lean_dec_ref(v___x_2211_);
if (v_isShared_2192_ == 0)
{
lean_ctor_set_tag(v___x_2191_, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2212_);
v___x_2214_ = v___x_2191_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v___x_2212_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
else
{
lean_object* v___x_2217_; 
lean_dec_ref(v_a_2194_);
if (v_isShared_2192_ == 0)
{
lean_ctor_set_tag(v___x_2191_, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2204_);
v___x_2217_ = v___x_2191_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v___x_2204_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
else
{
lean_object* v___x_2244_; 
lean_dec(v_d_2185_);
v___x_2244_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__3));
return v___x_2244_;
}
v___jp_2187_:
{
lean_object* v___x_2188_; 
v___x_2188_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__0));
return v___x_2188_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___boxed(lean_object* v_d_2245_, lean_object* v_key_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(v_d_2245_, v_key_2246_);
lean_dec_ref(v_key_2246_);
return v_res_2247_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6(void){
_start:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2254_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__5));
v___x_2255_ = lean_unsigned_to_nat(46u);
v___x_2256_ = lean_unsigned_to_nat(193u);
v___x_2257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__4));
v___x_2258_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__3));
v___x_2259_ = l_mkPanicMessageWithDecl(v___x_2258_, v___x_2257_, v___x_2256_, v___x_2255_, v___x_2254_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(lean_object* v_context_2261_, lean_object* v_d_2262_){
_start:
{
lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2271_; lean_object* v_received_2272_; lean_object* v___y_2291_; lean_object* v_a_2294_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
lean_inc(v_d_2262_);
v___x_2319_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2318_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; 
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2319_, 1);
v_a_2294_ = v_a_2320_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v_a_2321_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2319_, 1);
v___x_2322_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
lean_inc(v_d_2262_);
v___x_2323_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2322_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; 
lean_dec(v_a_2321_);
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2324_);
lean_dec_ref_known(v___x_2323_, 1);
v_a_2294_ = v_a_2324_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v_a_2325_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2323_, 1);
v___x_2326_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
lean_inc(v_d_2262_);
v___x_2327_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(v_d_2262_, v___x_2326_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; 
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2328_);
lean_dec_ref_known(v___x_2327_, 1);
v_a_2294_ = v_a_2328_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v_a_2329_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v___x_2327_, 1);
v___x_2330_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
lean_inc(v_d_2262_);
v___x_2331_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2330_);
if (lean_obj_tag(v___x_2331_) == 0)
{
lean_object* v_a_2332_; 
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
v_a_2332_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_a_2332_);
lean_dec_ref_known(v___x_2331_, 1);
v_a_2294_ = v_a_2332_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v_a_2333_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2331_, 1);
v___x_2334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
lean_inc(v_d_2262_);
v___x_2335_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(v_d_2262_, v___x_2334_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; 
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2336_);
lean_dec_ref_known(v___x_2335_, 1);
v_a_2294_ = v_a_2336_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v_a_2337_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2335_, 1);
v___x_2338_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
lean_inc(v_d_2262_);
v___x_2339_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2338_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; 
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
v_a_2294_ = v_a_2340_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v_a_2341_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2339_, 1);
v___x_2342_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
lean_inc(v_d_2262_);
v___x_2343_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2342_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; 
lean_dec(v_a_2341_);
lean_dec(v_a_2337_);
lean_dec(v_a_2333_);
lean_dec(v_a_2329_);
lean_dec(v_a_2325_);
lean_dec(v_a_2321_);
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2343_, 1);
v_a_2294_ = v_a_2344_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v_a_2345_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2345_);
lean_dec_ref_known(v___x_2343_, 1);
v___x_2346_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
lean_inc(v_d_2262_);
v___x_2347_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2346_);
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
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2348_);
lean_dec_ref_known(v___x_2347_, 1);
v_a_2294_ = v_a_2348_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v_a_2349_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2349_);
lean_dec_ref_known(v___x_2347_, 1);
v___x_2350_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc(v_d_2262_);
v___x_2351_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2350_);
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
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
v_a_2294_ = v_a_2352_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v_a_2353_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2353_);
lean_dec_ref_known(v___x_2351_, 1);
v___x_2354_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
lean_inc(v_d_2262_);
v___x_2355_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2354_);
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
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2356_);
lean_dec_ref_known(v___x_2355_, 1);
v_a_2294_ = v_a_2356_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v_a_2357_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2357_);
lean_dec_ref_known(v___x_2355_, 1);
v___x_2358_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
lean_inc(v_d_2262_);
v___x_2359_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2358_);
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
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_a_2360_);
lean_dec_ref_known(v___x_2359_, 1);
v_a_2294_ = v_a_2360_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v_a_2361_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_a_2361_);
lean_dec_ref_known(v___x_2359_, 1);
v___x_2362_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
lean_inc(v_d_2262_);
v___x_2363_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2362_);
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
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2364_);
lean_dec_ref_known(v___x_2363_, 1);
v_a_2294_ = v_a_2364_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; 
v_a_2365_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2365_);
lean_dec_ref_known(v___x_2363_, 1);
v___x_2366_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
lean_inc(v_d_2262_);
v___x_2367_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2366_);
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
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2367_, 1);
v_a_2294_ = v_a_2368_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_a_2369_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2369_);
lean_dec_ref_known(v___x_2367_, 1);
v___x_2370_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
lean_inc(v_d_2262_);
v___x_2371_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2370_);
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
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2372_);
lean_dec_ref_known(v___x_2371_, 1);
v_a_2294_ = v_a_2372_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v_a_2373_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2371_, 1);
v___x_2374_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
lean_inc(v_d_2262_);
v___x_2375_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2374_);
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
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2376_);
lean_dec_ref_known(v___x_2375_, 1);
v_a_2294_ = v_a_2376_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_a_2377_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2375_, 1);
v___x_2378_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
lean_inc(v_d_2262_);
v___x_2379_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2378_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; 
lean_dec(v_a_2377_);
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
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2379_, 1);
v_a_2294_ = v_a_2380_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
v_a_2381_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2381_);
lean_dec_ref_known(v___x_2379_, 1);
v___x_2382_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
lean_inc(v_d_2262_);
v___x_2383_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(v_d_2262_, v___x_2382_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v_a_2384_; 
lean_dec(v_a_2381_);
lean_dec(v_a_2377_);
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
v_a_2384_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v___x_2383_, 1);
v_a_2294_ = v_a_2384_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v_a_2385_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2385_);
lean_dec_ref_known(v___x_2383_, 1);
v___x_2386_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
lean_inc(v_d_2262_);
v___x_2387_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2262_, v___x_2386_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v_a_2388_; 
lean_dec(v_a_2385_);
lean_dec(v_a_2381_);
lean_dec(v_a_2377_);
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
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2388_);
lean_dec_ref_known(v___x_2387_, 1);
v_a_2294_ = v_a_2388_;
goto v___jp_2293_;
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2397_; 
lean_dec(v_d_2262_);
v_a_2389_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2391_ = v___x_2387_;
v_isShared_2392_ = v_isSharedCheck_2397_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2387_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2397_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2393_; lean_object* v___x_2395_; 
v___x_2393_ = lean_alloc_ctor(0, 18, 0);
lean_ctor_set(v___x_2393_, 0, v_a_2321_);
lean_ctor_set(v___x_2393_, 1, v_a_2325_);
lean_ctor_set(v___x_2393_, 2, v_a_2329_);
lean_ctor_set(v___x_2393_, 3, v_a_2333_);
lean_ctor_set(v___x_2393_, 4, v_a_2337_);
lean_ctor_set(v___x_2393_, 5, v_a_2341_);
lean_ctor_set(v___x_2393_, 6, v_a_2345_);
lean_ctor_set(v___x_2393_, 7, v_a_2349_);
lean_ctor_set(v___x_2393_, 8, v_a_2353_);
lean_ctor_set(v___x_2393_, 9, v_a_2357_);
lean_ctor_set(v___x_2393_, 10, v_a_2361_);
lean_ctor_set(v___x_2393_, 11, v_a_2365_);
lean_ctor_set(v___x_2393_, 12, v_a_2369_);
lean_ctor_set(v___x_2393_, 13, v_a_2373_);
lean_ctor_set(v___x_2393_, 14, v_a_2377_);
lean_ctor_set(v___x_2393_, 15, v_a_2381_);
lean_ctor_set(v___x_2393_, 16, v_a_2385_);
lean_ctor_set(v___x_2393_, 17, v_a_2389_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set_tag(v___x_2391_, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2393_);
v___x_2395_ = v___x_2391_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v___x_2393_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
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
v___jp_2264_:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2267_ = lean_string_append(v___y_2265_, v___y_2266_);
lean_dec_ref(v___y_2266_);
v___x_2268_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2267_);
v___x_2269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2268_);
return v___x_2269_;
}
v___jp_2270_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; uint8_t v___x_2284_; 
v___x_2273_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_2274_ = lean_string_append(v___x_2273_, v_context_2261_);
v___x_2275_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_2276_ = lean_string_append(v___x_2274_, v___x_2275_);
v___x_2277_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJsonWebKey___closed__6));
v___x_2278_ = lean_string_append(v___x_2276_, v___x_2277_);
v___x_2279_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_2280_ = lean_string_append(v___x_2278_, v___x_2279_);
v___x_2281_ = lean_string_append(v___x_2280_, v_received_2272_);
lean_dec_ref(v_received_2272_);
v___x_2282_ = lean_string_utf8_byte_size(v___y_2271_);
v___x_2283_ = lean_unsigned_to_nat(0u);
v___x_2284_ = lean_nat_dec_eq(v___x_2282_, v___x_2283_);
if (v___x_2284_ == 0)
{
lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2285_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_2286_ = lean_string_append(v___x_2285_, v___y_2271_);
lean_dec_ref(v___y_2271_);
v___x_2287_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_2288_ = lean_string_append(v___x_2286_, v___x_2287_);
v___y_2265_ = v___x_2281_;
v___y_2266_ = v___x_2288_;
goto v___jp_2264_;
}
else
{
lean_object* v___x_2289_; 
lean_dec_ref(v___y_2271_);
v___x_2289_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_2265_ = v___x_2281_;
v___y_2266_ = v___x_2289_;
goto v___jp_2264_;
}
}
v___jp_2290_:
{
lean_object* v___x_2292_; 
v___x_2292_ = l_Lasm_JS_Data_describe(v_d_2262_);
v___y_2271_ = v___y_2291_;
v_received_2272_ = v___x_2292_;
goto v___jp_2270_;
}
v___jp_2293_:
{
if (lean_obj_tag(v_d_2262_) == 9)
{
lean_object* v_value_2295_; lean_object* v_description_2296_; lean_object* v___x_2297_; uint8_t v___x_2298_; 
v_value_2295_ = lean_ctor_get(v_d_2262_, 0);
v_description_2296_ = lean_ctor_get(v_d_2262_, 1);
v___x_2297_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_2298_ = lean_string_dec_eq(v_description_2296_, v___x_2297_);
if (v___x_2298_ == 0)
{
v___y_2291_ = v_a_2294_;
goto v___jp_2290_;
}
else
{
lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2315_; 
lean_inc(v_value_2295_);
v_isSharedCheck_2315_ = !lean_is_exclusive(v_d_2262_);
if (v_isSharedCheck_2315_ == 0)
{
lean_object* v_unused_2316_; lean_object* v_unused_2317_; 
v_unused_2316_ = lean_ctor_get(v_d_2262_, 1);
lean_dec(v_unused_2316_);
v_unused_2317_ = lean_ctor_get(v_d_2262_, 0);
lean_dec(v_unused_2317_);
v___x_2300_ = v_d_2262_;
v_isShared_2301_ = v_isSharedCheck_2315_;
goto v_resetjp_2299_;
}
else
{
lean_dec(v_d_2262_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2315_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
uint32_t v___x_2302_; uint64_t v___x_2303_; lean_object* v___x_2305_; 
v___x_2302_ = 206;
v___x_2303_ = 0ULL;
lean_inc(v_value_2295_);
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 1, v___x_2297_);
v___x_2305_ = v___x_2300_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_value_2295_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v___x_2297_);
v___x_2305_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
uint32_t v___x_2306_; lean_object* v___x_2307_; 
v___x_2306_ = lasm_js_value_handle(v_value_2295_);
lean_dec(v_value_2295_);
v___x_2307_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2302_, v___x_2303_, v___x_2305_, v___x_2306_);
lean_dec_ref(v___x_2305_);
if (lean_obj_tag(v___x_2307_) == 0)
{
lean_object* v_a_2308_; uint8_t v___x_2309_; 
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2308_);
lean_dec_ref_known(v___x_2307_, 1);
v___x_2309_ = lean_string_validate_utf8(v_a_2308_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
lean_dec(v_a_2308_);
v___x_2310_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_2311_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2310_);
v___y_2271_ = v_a_2294_;
v_received_2272_ = v___x_2311_;
goto v___jp_2270_;
}
else
{
lean_object* v___x_2312_; 
v___x_2312_ = lean_string_from_utf8_unchecked(v_a_2308_);
v___y_2271_ = v_a_2294_;
v_received_2272_ = v___x_2312_;
goto v___jp_2270_;
}
}
else
{
lean_object* v___x_2313_; 
lean_dec_ref_known(v___x_2307_, 1);
v___x_2313_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_2271_ = v_a_2294_;
v_received_2272_ = v___x_2313_;
goto v___jp_2270_;
}
}
}
}
}
else
{
v___y_2291_ = v_a_2294_;
goto v___jp_2290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___boxed(lean_object* v_context_2398_, lean_object* v_d_2399_, lean_object* v_a_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(v_context_2398_, v_d_2399_);
lean_dec_ref(v_context_2398_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(lean_object* v_d_2404_){
_start:
{
switch(lean_obj_tag(v_d_2404_))
{
case 9:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = ((lean_object*)(l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__0));
v___x_2407_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_2406_, v_d_2404_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2409_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
v___x_2409_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2408_);
if (lean_obj_tag(v___x_2409_) == 0)
{
lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2418_; 
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2412_ = v___x_2409_;
v_isShared_2413_ = v_isSharedCheck_2418_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2409_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2418_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2414_; lean_object* v___x_2416_; 
v___x_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2414_, 0, v_a_2410_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 0, v___x_2414_);
v___x_2416_ = v___x_2412_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v___x_2414_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
v_a_2419_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2409_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2409_);
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
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2434_; 
v_a_2427_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2429_ = v___x_2407_;
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v___x_2407_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2427_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
case 8:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = ((lean_object*)(l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__0));
v___x_2436_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(v___x_2435_, v_d_2404_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2445_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2439_ = v___x_2436_;
v_isShared_2440_ = v_isSharedCheck_2445_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2436_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2445_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2441_; lean_object* v___x_2443_; 
v___x_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2441_, 0, v_a_2437_);
if (v_isShared_2440_ == 0)
{
lean_ctor_set(v___x_2439_, 0, v___x_2441_);
v___x_2443_ = v___x_2439_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2441_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
return v___x_2443_;
}
}
}
else
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2453_; 
v_a_2446_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2448_ = v___x_2436_;
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v___x_2436_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
if (v_isShared_2449_ == 0)
{
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_a_2446_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
}
default: 
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2454_ = ((lean_object*)(l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__1));
v___x_2455_ = l_Lasm_JS_Data_describe(v_d_2404_);
v___x_2456_ = lean_string_append(v___x_2454_, v___x_2455_);
lean_dec_ref(v___x_2455_);
v___x_2457_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2456_);
v___x_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2457_);
return v___x_2458_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___boxed(lean_object* v_d_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(v_d_2459_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAlgorithm___lam__0(lean_object* v_d_2463_){
_start:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2464_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2465_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2465_, 0, v_d_2463_);
v___x_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2464_);
lean_ctor_set(v___x_2466_, 1, v___x_2465_);
v___x_2467_ = lean_unsigned_to_nat(1u);
v___x_2468_ = lean_mk_empty_array_with_capacity(v___x_2467_);
v___x_2469_ = lean_array_push(v___x_2468_, v___x_2466_);
v___x_2470_ = l_Lasm_JS_Web_Support_fields(v___x_2469_);
lean_dec_ref(v___x_2469_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0(lean_object* v_d_2476_){
_start:
{
lean_object* v_name_2477_; lean_object* v_modulusLength_2478_; lean_object* v_publicExponent_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___y_2485_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; uint8_t v___x_2499_; 
v_name_2477_ = lean_ctor_get(v_d_2476_, 0);
lean_inc_ref(v_name_2477_);
v_modulusLength_2478_ = lean_ctor_get(v_d_2476_, 1);
lean_inc(v_modulusLength_2478_);
v_publicExponent_2479_ = lean_ctor_get(v_d_2476_, 2);
lean_inc_ref(v_publicExponent_2479_);
lean_dec_ref(v_d_2476_);
v___x_2480_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2481_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2481_, 0, v_name_2477_);
v___x_2482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2496_ = lean_nat_to_int(v_modulusLength_2478_);
v___x_2497_ = lean_nat_abs(v___x_2496_);
v___x_2498_ = lean_cstr_to_nat("9007199254740991");
v___x_2499_ = lean_nat_dec_le(v___x_2497_, v___x_2498_);
lean_dec(v___x_2497_);
if (v___x_2499_ == 0)
{
lean_object* v___x_2500_; 
v___x_2500_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2496_);
v___y_2485_ = v___x_2500_;
goto v___jp_2484_;
}
else
{
double v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = l_Float_ofInt(v___x_2496_);
lean_dec(v___x_2496_);
v___x_2502_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2502_, 0, v___x_2501_);
v___y_2485_ = v___x_2502_;
goto v___jp_2484_;
}
v___jp_2484_:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2483_);
lean_ctor_set(v___x_2486_, 1, v___y_2485_);
v___x_2487_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2488_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2488_, 0, v_publicExponent_2479_);
v___x_2489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2487_);
lean_ctor_set(v___x_2489_, 1, v___x_2488_);
v___x_2490_ = lean_unsigned_to_nat(3u);
v___x_2491_ = lean_mk_empty_array_with_capacity(v___x_2490_);
v___x_2492_ = lean_array_push(v___x_2491_, v___x_2482_);
v___x_2493_ = lean_array_push(v___x_2492_, v___x_2486_);
v___x_2494_ = lean_array_push(v___x_2493_, v___x_2489_);
v___x_2495_ = l_Lasm_JS_Web_Support_fields(v___x_2494_);
lean_dec_ref(v___x_2494_);
return v___x_2495_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0(lean_object* v_d_2506_){
_start:
{
lean_object* v_name_2507_; lean_object* v_modulusLength_2508_; lean_object* v_publicExponent_2509_; lean_object* v_hash_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___y_2515_; lean_object* v___y_2516_; lean_object* v___y_2517_; lean_object* v___y_2518_; lean_object* v___x_2527_; lean_object* v___y_2529_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; 
v_name_2507_ = lean_ctor_get(v_d_2506_, 0);
lean_inc_ref(v_name_2507_);
v_modulusLength_2508_ = lean_ctor_get(v_d_2506_, 1);
lean_inc(v_modulusLength_2508_);
v_publicExponent_2509_ = lean_ctor_get(v_d_2506_, 2);
lean_inc_ref(v_publicExponent_2509_);
v_hash_2510_ = lean_ctor_get(v_d_2506_, 3);
lean_inc_ref(v_hash_2510_);
lean_dec_ref(v_d_2506_);
v___x_2511_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2512_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2512_, 0, v_name_2507_);
v___x_2513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2511_);
lean_ctor_set(v___x_2513_, 1, v___x_2512_);
v___x_2527_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2544_ = lean_nat_to_int(v_modulusLength_2508_);
v___x_2545_ = lean_nat_abs(v___x_2544_);
v___x_2546_ = lean_cstr_to_nat("9007199254740991");
v___x_2547_ = lean_nat_dec_le(v___x_2545_, v___x_2546_);
lean_dec(v___x_2545_);
if (v___x_2547_ == 0)
{
lean_object* v___x_2548_; 
v___x_2548_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2544_);
v___y_2529_ = v___x_2548_;
goto v___jp_2528_;
}
else
{
double v___x_2549_; lean_object* v___x_2550_; 
v___x_2549_ = l_Float_ofInt(v___x_2544_);
lean_dec(v___x_2544_);
v___x_2550_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2550_, 0, v___x_2549_);
v___y_2529_ = v___x_2550_;
goto v___jp_2528_;
}
v___jp_2514_:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
lean_inc_ref(v___y_2515_);
v___x_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___y_2515_);
lean_ctor_set(v___x_2519_, 1, v___y_2518_);
v___x_2520_ = lean_unsigned_to_nat(4u);
v___x_2521_ = lean_mk_empty_array_with_capacity(v___x_2520_);
v___x_2522_ = lean_array_push(v___x_2521_, v___x_2513_);
v___x_2523_ = lean_array_push(v___x_2522_, v___y_2517_);
v___x_2524_ = lean_array_push(v___x_2523_, v___y_2516_);
v___x_2525_ = lean_array_push(v___x_2524_, v___x_2519_);
v___x_2526_ = l_Lasm_JS_Web_Support_fields(v___x_2525_);
lean_dec_ref(v___x_2525_);
return v___x_2526_;
}
v___jp_2528_:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2527_);
lean_ctor_set(v___x_2530_, 1, v___y_2529_);
v___x_2531_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2532_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2532_, 0, v_publicExponent_2509_);
v___x_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2531_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
v___x_2534_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2510_) == 0)
{
lean_object* v_value_2535_; 
v_value_2535_ = lean_ctor_get(v_hash_2510_, 0);
lean_inc(v_value_2535_);
lean_dec_ref_known(v_hash_2510_, 1);
v___y_2515_ = v___x_2534_;
v___y_2516_ = v___x_2533_;
v___y_2517_ = v___x_2530_;
v___y_2518_ = v_value_2535_;
goto v___jp_2514_;
}
else
{
lean_object* v_value_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
v_value_2536_ = lean_ctor_get(v_hash_2510_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v_hash_2510_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v_hash_2510_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_value_2536_);
lean_dec(v_hash_2510_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2541_; 
if (v_isShared_2539_ == 0)
{
lean_ctor_set_tag(v___x_2538_, 4);
v___x_2541_ = v___x_2538_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_value_2536_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
v___y_2515_ = v___x_2534_;
v___y_2516_ = v___x_2533_;
v___y_2517_ = v___x_2530_;
v___y_2518_ = v___x_2541_;
goto v___jp_2514_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaKeyAlgorithm___lam__0(lean_object* v_d_2553_){
_start:
{
lean_object* v_name_2554_; lean_object* v_modulusLength_2555_; lean_object* v_publicExponent_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___y_2562_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; uint8_t v___x_2576_; 
v_name_2554_ = lean_ctor_get(v_d_2553_, 0);
lean_inc_ref(v_name_2554_);
v_modulusLength_2555_ = lean_ctor_get(v_d_2553_, 1);
lean_inc(v_modulusLength_2555_);
v_publicExponent_2556_ = lean_ctor_get(v_d_2553_, 2);
lean_inc_ref(v_publicExponent_2556_);
lean_dec_ref(v_d_2553_);
v___x_2557_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2558_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2558_, 0, v_name_2554_);
v___x_2559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2557_);
lean_ctor_set(v___x_2559_, 1, v___x_2558_);
v___x_2560_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2573_ = lean_nat_to_int(v_modulusLength_2555_);
v___x_2574_ = lean_nat_abs(v___x_2573_);
v___x_2575_ = lean_cstr_to_nat("9007199254740991");
v___x_2576_ = lean_nat_dec_le(v___x_2574_, v___x_2575_);
lean_dec(v___x_2574_);
if (v___x_2576_ == 0)
{
lean_object* v___x_2577_; 
v___x_2577_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2573_);
v___y_2562_ = v___x_2577_;
goto v___jp_2561_;
}
else
{
double v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = l_Float_ofInt(v___x_2573_);
lean_dec(v___x_2573_);
v___x_2579_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2579_, 0, v___x_2578_);
v___y_2562_ = v___x_2579_;
goto v___jp_2561_;
}
v___jp_2561_:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2560_);
lean_ctor_set(v___x_2563_, 1, v___y_2562_);
v___x_2564_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2565_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2565_, 0, v_publicExponent_2556_);
v___x_2566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2564_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
v___x_2567_ = lean_unsigned_to_nat(3u);
v___x_2568_ = lean_mk_empty_array_with_capacity(v___x_2567_);
v___x_2569_ = lean_array_push(v___x_2568_, v___x_2559_);
v___x_2570_ = lean_array_push(v___x_2569_, v___x_2563_);
v___x_2571_ = lean_array_push(v___x_2570_, v___x_2566_);
v___x_2572_ = l_Lasm_JS_Web_Support_fields(v___x_2571_);
lean_dec_ref(v___x_2571_);
return v___x_2572_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm___lam__0(lean_object* v_d_2582_){
_start:
{
lean_object* v_name_2583_; lean_object* v_modulusLength_2584_; lean_object* v_publicExponent_2585_; lean_object* v_hash_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___y_2592_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; uint8_t v___x_2615_; 
v_name_2583_ = lean_ctor_get(v_d_2582_, 0);
lean_inc_ref(v_name_2583_);
v_modulusLength_2584_ = lean_ctor_get(v_d_2582_, 1);
lean_inc(v_modulusLength_2584_);
v_publicExponent_2585_ = lean_ctor_get(v_d_2582_, 2);
lean_inc_ref(v_publicExponent_2585_);
v_hash_2586_ = lean_ctor_get(v_d_2582_, 3);
lean_inc_ref(v_hash_2586_);
lean_dec_ref(v_d_2582_);
v___x_2587_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2588_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2588_, 0, v_name_2583_);
v___x_2589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2587_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2612_ = lean_nat_to_int(v_modulusLength_2584_);
v___x_2613_ = lean_nat_abs(v___x_2612_);
v___x_2614_ = lean_cstr_to_nat("9007199254740991");
v___x_2615_ = lean_nat_dec_le(v___x_2613_, v___x_2614_);
lean_dec(v___x_2613_);
if (v___x_2615_ == 0)
{
lean_object* v___x_2616_; 
v___x_2616_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2612_);
v___y_2592_ = v___x_2616_;
goto v___jp_2591_;
}
else
{
double v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = l_Float_ofInt(v___x_2612_);
lean_dec(v___x_2612_);
v___x_2618_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2618_, 0, v___x_2617_);
v___y_2592_ = v___x_2618_;
goto v___jp_2591_;
}
v___jp_2591_:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2590_);
lean_ctor_set(v___x_2593_, 1, v___y_2592_);
v___x_2594_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2595_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2595_, 0, v_publicExponent_2585_);
v___x_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2594_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
v___x_2598_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2598_, 0, v_hash_2586_);
v___x_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2587_);
lean_ctor_set(v___x_2599_, 1, v___x_2598_);
v___x_2600_ = lean_unsigned_to_nat(1u);
v___x_2601_ = lean_mk_empty_array_with_capacity(v___x_2600_);
v___x_2602_ = lean_array_push(v___x_2601_, v___x_2599_);
v___x_2603_ = l_Lasm_JS_Web_Support_fields(v___x_2602_);
lean_dec_ref(v___x_2602_);
v___x_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2597_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = lean_unsigned_to_nat(4u);
v___x_2606_ = lean_mk_empty_array_with_capacity(v___x_2605_);
v___x_2607_ = lean_array_push(v___x_2606_, v___x_2589_);
v___x_2608_ = lean_array_push(v___x_2607_, v___x_2593_);
v___x_2609_ = lean_array_push(v___x_2608_, v___x_2596_);
v___x_2610_ = lean_array_push(v___x_2609_, v___x_2604_);
v___x_2611_ = l_Lasm_JS_Web_Support_fields(v___x_2610_);
lean_dec_ref(v___x_2610_);
return v___x_2611_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedImportParams___lam__0(lean_object* v_d_2621_){
_start:
{
lean_object* v_name_2622_; lean_object* v_hash_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2650_; 
v_name_2622_ = lean_ctor_get(v_d_2621_, 0);
v_hash_2623_ = lean_ctor_get(v_d_2621_, 1);
v_isSharedCheck_2650_ = !lean_is_exclusive(v_d_2621_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2625_ = v_d_2621_;
v_isShared_2626_ = v_isSharedCheck_2650_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_hash_2623_);
lean_inc(v_name_2622_);
lean_dec(v_d_2621_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2650_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2630_; 
v___x_2627_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2628_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2628_, 0, v_name_2622_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 1, v___x_2628_);
lean_ctor_set(v___x_2625_, 0, v___x_2627_);
v___x_2630_ = v___x_2625_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v___x_2627_);
lean_ctor_set(v_reuseFailAlloc_2649_, 1, v___x_2628_);
v___x_2630_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
lean_object* v___x_2631_; lean_object* v___y_2633_; 
v___x_2631_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2623_) == 0)
{
lean_object* v_value_2640_; 
v_value_2640_ = lean_ctor_get(v_hash_2623_, 0);
lean_inc(v_value_2640_);
lean_dec_ref_known(v_hash_2623_, 1);
v___y_2633_ = v_value_2640_;
goto v___jp_2632_;
}
else
{
lean_object* v_value_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2648_; 
v_value_2641_ = lean_ctor_get(v_hash_2623_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v_hash_2623_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2643_ = v_hash_2623_;
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_value_2641_);
lean_dec(v_hash_2623_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
lean_ctor_set_tag(v___x_2643_, 4);
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_value_2641_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
v___y_2633_ = v___x_2646_;
goto v___jp_2632_;
}
}
}
v___jp_2632_:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2631_);
lean_ctor_set(v___x_2634_, 1, v___y_2633_);
v___x_2635_ = lean_unsigned_to_nat(2u);
v___x_2636_ = lean_mk_empty_array_with_capacity(v___x_2635_);
v___x_2637_ = lean_array_push(v___x_2636_, v___x_2630_);
v___x_2638_ = lean_array_push(v___x_2637_, v___x_2634_);
v___x_2639_ = l_Lasm_JS_Web_Support_fields(v___x_2638_);
lean_dec_ref(v___x_2638_);
return v___x_2639_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaPssParams___lam__0(lean_object* v_d_2654_){
_start:
{
lean_object* v_name_2655_; lean_object* v_saltLength_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2681_; 
v_name_2655_ = lean_ctor_get(v_d_2654_, 0);
v_saltLength_2656_ = lean_ctor_get(v_d_2654_, 1);
v_isSharedCheck_2681_ = !lean_is_exclusive(v_d_2654_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2658_ = v_d_2654_;
v_isShared_2659_ = v_isSharedCheck_2681_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_saltLength_2656_);
lean_inc(v_name_2655_);
lean_dec(v_d_2654_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2681_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2663_; 
v___x_2660_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2661_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2661_, 0, v_name_2655_);
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 1, v___x_2661_);
lean_ctor_set(v___x_2658_, 0, v___x_2660_);
v___x_2663_ = v___x_2658_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v___x_2660_);
lean_ctor_set(v_reuseFailAlloc_2680_, 1, v___x_2661_);
v___x_2663_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
lean_object* v___x_2664_; lean_object* v___y_2666_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; uint8_t v___x_2676_; 
v___x_2664_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaPssParams___lam__0___closed__0));
v___x_2673_ = lean_nat_to_int(v_saltLength_2656_);
v___x_2674_ = lean_nat_abs(v___x_2673_);
v___x_2675_ = lean_cstr_to_nat("9007199254740991");
v___x_2676_ = lean_nat_dec_le(v___x_2674_, v___x_2675_);
lean_dec(v___x_2674_);
if (v___x_2676_ == 0)
{
lean_object* v___x_2677_; 
v___x_2677_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2677_, 0, v___x_2673_);
v___y_2666_ = v___x_2677_;
goto v___jp_2665_;
}
else
{
double v___x_2678_; lean_object* v___x_2679_; 
v___x_2678_ = l_Float_ofInt(v___x_2673_);
lean_dec(v___x_2673_);
v___x_2679_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2679_, 0, v___x_2678_);
v___y_2666_ = v___x_2679_;
goto v___jp_2665_;
}
v___jp_2665_:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2664_);
lean_ctor_set(v___x_2667_, 1, v___y_2666_);
v___x_2668_ = lean_unsigned_to_nat(2u);
v___x_2669_ = lean_mk_empty_array_with_capacity(v___x_2668_);
v___x_2670_ = lean_array_push(v___x_2669_, v___x_2663_);
v___x_2671_ = lean_array_push(v___x_2670_, v___x_2667_);
v___x_2672_ = l_Lasm_JS_Web_Support_fields(v___x_2671_);
lean_dec_ref(v___x_2671_);
return v___x_2672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0(lean_object* v___f_2685_, lean_object* v_d_2686_){
_start:
{
lean_object* v_name_2687_; lean_object* v_label_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2705_; 
v_name_2687_ = lean_ctor_get(v_d_2686_, 0);
v_label_2688_ = lean_ctor_get(v_d_2686_, 1);
v_isSharedCheck_2705_ = !lean_is_exclusive(v_d_2686_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2690_ = v_d_2686_;
v_isShared_2691_ = v_isSharedCheck_2705_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_label_2688_);
lean_inc(v_name_2687_);
lean_dec(v_d_2686_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2705_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2695_; 
v___x_2692_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2693_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2693_, 0, v_name_2687_);
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 1, v___x_2693_);
lean_ctor_set(v___x_2690_, 0, v___x_2692_);
v___x_2695_ = v___x_2690_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2692_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v___x_2693_);
v___x_2695_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2696_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0___closed__0));
v___x_2697_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2685_, v_label_2688_);
v___x_2698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2696_);
lean_ctor_set(v___x_2698_, 1, v___x_2697_);
v___x_2699_ = lean_unsigned_to_nat(2u);
v___x_2700_ = lean_mk_empty_array_with_capacity(v___x_2699_);
v___x_2701_ = lean_array_push(v___x_2700_, v___x_2695_);
v___x_2702_ = lean_array_push(v___x_2701_, v___x_2698_);
v___x_2703_ = l_Lasm_JS_Web_Support_fields(v___x_2702_);
lean_dec_ref(v___x_2702_);
return v___x_2703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcdsaParams___lam__0(lean_object* v_d_2710_){
_start:
{
lean_object* v_name_2711_; lean_object* v_hash_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2739_; 
v_name_2711_ = lean_ctor_get(v_d_2710_, 0);
v_hash_2712_ = lean_ctor_get(v_d_2710_, 1);
v_isSharedCheck_2739_ = !lean_is_exclusive(v_d_2710_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2714_ = v_d_2710_;
v_isShared_2715_ = v_isSharedCheck_2739_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_hash_2712_);
lean_inc(v_name_2711_);
lean_dec(v_d_2710_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2739_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
v___x_2716_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2717_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2717_, 0, v_name_2711_);
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 1, v___x_2717_);
lean_ctor_set(v___x_2714_, 0, v___x_2716_);
v___x_2719_ = v___x_2714_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v___x_2716_);
lean_ctor_set(v_reuseFailAlloc_2738_, 1, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
lean_object* v___x_2720_; lean_object* v___y_2722_; 
v___x_2720_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2712_) == 0)
{
lean_object* v_value_2729_; 
v_value_2729_ = lean_ctor_get(v_hash_2712_, 0);
lean_inc(v_value_2729_);
lean_dec_ref_known(v_hash_2712_, 1);
v___y_2722_ = v_value_2729_;
goto v___jp_2721_;
}
else
{
lean_object* v_value_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2737_; 
v_value_2730_ = lean_ctor_get(v_hash_2712_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v_hash_2712_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2732_ = v_hash_2712_;
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_value_2730_);
lean_dec(v_hash_2712_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2735_; 
if (v_isShared_2733_ == 0)
{
lean_ctor_set_tag(v___x_2732_, 4);
v___x_2735_ = v___x_2732_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_value_2730_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
v___y_2722_ = v___x_2735_;
goto v___jp_2721_;
}
}
}
v___jp_2721_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2720_);
lean_ctor_set(v___x_2723_, 1, v___y_2722_);
v___x_2724_ = lean_unsigned_to_nat(2u);
v___x_2725_ = lean_mk_empty_array_with_capacity(v___x_2724_);
v___x_2726_ = lean_array_push(v___x_2725_, v___x_2719_);
v___x_2727_ = lean_array_push(v___x_2726_, v___x_2723_);
v___x_2728_ = l_Lasm_JS_Web_Support_fields(v___x_2727_);
lean_dec_ref(v___x_2727_);
return v___x_2728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0(lean_object* v_d_2743_){
_start:
{
lean_object* v_name_2744_; lean_object* v_namedCurve_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2762_; 
v_name_2744_ = lean_ctor_get(v_d_2743_, 0);
v_namedCurve_2745_ = lean_ctor_get(v_d_2743_, 1);
v_isSharedCheck_2762_ = !lean_is_exclusive(v_d_2743_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2747_ = v_d_2743_;
v_isShared_2748_ = v_isSharedCheck_2762_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_namedCurve_2745_);
lean_inc(v_name_2744_);
lean_dec(v_d_2743_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2762_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2752_; 
v___x_2749_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2750_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2750_, 0, v_name_2744_);
if (v_isShared_2748_ == 0)
{
lean_ctor_set(v___x_2747_, 1, v___x_2750_);
lean_ctor_set(v___x_2747_, 0, v___x_2749_);
v___x_2752_ = v___x_2747_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v___x_2749_);
lean_ctor_set(v_reuseFailAlloc_2761_, 1, v___x_2750_);
v___x_2752_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v___x_2753_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0));
v___x_2754_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2754_, 0, v_namedCurve_2745_);
v___x_2755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2753_);
lean_ctor_set(v___x_2755_, 1, v___x_2754_);
v___x_2756_ = lean_unsigned_to_nat(2u);
v___x_2757_ = lean_mk_empty_array_with_capacity(v___x_2756_);
v___x_2758_ = lean_array_push(v___x_2757_, v___x_2752_);
v___x_2759_ = lean_array_push(v___x_2758_, v___x_2755_);
v___x_2760_ = l_Lasm_JS_Web_Support_fields(v___x_2759_);
lean_dec_ref(v___x_2759_);
return v___x_2760_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyAlgorithm___lam__0(lean_object* v_d_2765_){
_start:
{
lean_object* v_name_2766_; lean_object* v_namedCurve_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2784_; 
v_name_2766_ = lean_ctor_get(v_d_2765_, 0);
v_namedCurve_2767_ = lean_ctor_get(v_d_2765_, 1);
v_isSharedCheck_2784_ = !lean_is_exclusive(v_d_2765_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2769_ = v_d_2765_;
v_isShared_2770_ = v_isSharedCheck_2784_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_namedCurve_2767_);
lean_inc(v_name_2766_);
lean_dec(v_d_2765_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2784_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2774_; 
v___x_2771_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2772_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2772_, 0, v_name_2766_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 1, v___x_2772_);
lean_ctor_set(v___x_2769_, 0, v___x_2771_);
v___x_2774_ = v___x_2769_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2771_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v___x_2772_);
v___x_2774_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2775_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0));
v___x_2776_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2776_, 0, v_namedCurve_2767_);
v___x_2777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2775_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
v___x_2778_ = lean_unsigned_to_nat(2u);
v___x_2779_ = lean_mk_empty_array_with_capacity(v___x_2778_);
v___x_2780_ = lean_array_push(v___x_2779_, v___x_2774_);
v___x_2781_ = lean_array_push(v___x_2780_, v___x_2777_);
v___x_2782_ = l_Lasm_JS_Web_Support_fields(v___x_2781_);
lean_dec_ref(v___x_2781_);
return v___x_2782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyImportParams___lam__0(lean_object* v_d_2787_){
_start:
{
lean_object* v_name_2788_; lean_object* v_namedCurve_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2806_; 
v_name_2788_ = lean_ctor_get(v_d_2787_, 0);
v_namedCurve_2789_ = lean_ctor_get(v_d_2787_, 1);
v_isSharedCheck_2806_ = !lean_is_exclusive(v_d_2787_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2791_ = v_d_2787_;
v_isShared_2792_ = v_isSharedCheck_2806_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_namedCurve_2789_);
lean_inc(v_name_2788_);
lean_dec(v_d_2787_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2806_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2796_; 
v___x_2793_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2794_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2794_, 0, v_name_2788_);
if (v_isShared_2792_ == 0)
{
lean_ctor_set(v___x_2791_, 1, v___x_2794_);
lean_ctor_set(v___x_2791_, 0, v___x_2793_);
v___x_2796_ = v___x_2791_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v___x_2793_);
lean_ctor_set(v_reuseFailAlloc_2805_, 1, v___x_2794_);
v___x_2796_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2797_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0));
v___x_2798_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2798_, 0, v_namedCurve_2789_);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2797_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
v___x_2800_ = lean_unsigned_to_nat(2u);
v___x_2801_ = lean_mk_empty_array_with_capacity(v___x_2800_);
v___x_2802_ = lean_array_push(v___x_2801_, v___x_2796_);
v___x_2803_ = lean_array_push(v___x_2802_, v___x_2799_);
v___x_2804_ = l_Lasm_JS_Web_Support_fields(v___x_2803_);
lean_dec_ref(v___x_2803_);
return v___x_2804_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams___lam__0(lean_object* v_d_2809_){
_start:
{
lean_object* v_name_2810_; lean_object* v_public_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2829_; 
v_name_2810_ = lean_ctor_get(v_d_2809_, 0);
v_public_2811_ = lean_ctor_get(v_d_2809_, 1);
v_isSharedCheck_2829_ = !lean_is_exclusive(v_d_2809_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2813_ = v_d_2809_;
v_isShared_2814_ = v_isSharedCheck_2829_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_public_2811_);
lean_inc(v_name_2810_);
lean_dec(v_d_2809_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2829_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2818_; 
v___x_2815_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2816_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2816_, 0, v_name_2810_);
if (v_isShared_2814_ == 0)
{
lean_ctor_set(v___x_2813_, 1, v___x_2816_);
lean_ctor_set(v___x_2813_, 0, v___x_2815_);
v___x_2818_ = v___x_2813_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v___x_2815_);
lean_ctor_set(v_reuseFailAlloc_2828_, 1, v___x_2816_);
v___x_2818_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; 
v___x_2819_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0));
v___x_2820_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_2821_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2821_, 0, v_public_2811_);
lean_ctor_set(v___x_2821_, 1, v___x_2820_);
v___x_2822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2819_);
lean_ctor_set(v___x_2822_, 1, v___x_2821_);
v___x_2823_ = lean_unsigned_to_nat(2u);
v___x_2824_ = lean_mk_empty_array_with_capacity(v___x_2823_);
v___x_2825_ = lean_array_push(v___x_2824_, v___x_2818_);
v___x_2826_ = lean_array_push(v___x_2825_, v___x_2822_);
v___x_2827_ = l_Lasm_JS_Web_Support_fields(v___x_2826_);
lean_dec_ref(v___x_2826_);
return v___x_2827_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesCtrParams___lam__0(lean_object* v_d_2834_){
_start:
{
lean_object* v_name_2835_; lean_object* v_counter_2836_; lean_object* v_length_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___y_2846_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; uint8_t v___x_2857_; 
v_name_2835_ = lean_ctor_get(v_d_2834_, 0);
lean_inc_ref(v_name_2835_);
v_counter_2836_ = lean_ctor_get(v_d_2834_, 1);
lean_inc_ref(v_counter_2836_);
v_length_2837_ = lean_ctor_get(v_d_2834_, 2);
lean_inc(v_length_2837_);
lean_dec_ref(v_d_2834_);
v___x_2838_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2839_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2839_, 0, v_name_2835_);
v___x_2840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2838_);
lean_ctor_set(v___x_2840_, 1, v___x_2839_);
v___x_2841_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__0));
v___x_2842_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2842_, 0, v_counter_2836_);
v___x_2843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2841_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2854_ = lean_nat_to_int(v_length_2837_);
v___x_2855_ = lean_nat_abs(v___x_2854_);
v___x_2856_ = lean_cstr_to_nat("9007199254740991");
v___x_2857_ = lean_nat_dec_le(v___x_2855_, v___x_2856_);
lean_dec(v___x_2855_);
if (v___x_2857_ == 0)
{
lean_object* v___x_2858_; 
v___x_2858_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2854_);
v___y_2846_ = v___x_2858_;
goto v___jp_2845_;
}
else
{
double v___x_2859_; lean_object* v___x_2860_; 
v___x_2859_ = l_Float_ofInt(v___x_2854_);
lean_dec(v___x_2854_);
v___x_2860_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2860_, 0, v___x_2859_);
v___y_2846_ = v___x_2860_;
goto v___jp_2845_;
}
v___jp_2845_:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; 
v___x_2847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2847_, 0, v___x_2844_);
lean_ctor_set(v___x_2847_, 1, v___y_2846_);
v___x_2848_ = lean_unsigned_to_nat(3u);
v___x_2849_ = lean_mk_empty_array_with_capacity(v___x_2848_);
v___x_2850_ = lean_array_push(v___x_2849_, v___x_2840_);
v___x_2851_ = lean_array_push(v___x_2850_, v___x_2843_);
v___x_2852_ = lean_array_push(v___x_2851_, v___x_2847_);
v___x_2853_ = l_Lasm_JS_Web_Support_fields(v___x_2852_);
lean_dec_ref(v___x_2852_);
return v___x_2853_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesKeyAlgorithm___lam__0(lean_object* v_d_2863_){
_start:
{
lean_object* v_name_2864_; lean_object* v_length_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2890_; 
v_name_2864_ = lean_ctor_get(v_d_2863_, 0);
v_length_2865_ = lean_ctor_get(v_d_2863_, 1);
v_isSharedCheck_2890_ = !lean_is_exclusive(v_d_2863_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2867_ = v_d_2863_;
v_isShared_2868_ = v_isSharedCheck_2890_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_length_2865_);
lean_inc(v_name_2864_);
lean_dec(v_d_2863_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2890_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2872_; 
v___x_2869_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2870_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2870_, 0, v_name_2864_);
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 1, v___x_2870_);
lean_ctor_set(v___x_2867_, 0, v___x_2869_);
v___x_2872_ = v___x_2867_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v___x_2869_);
lean_ctor_set(v_reuseFailAlloc_2889_, 1, v___x_2870_);
v___x_2872_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
lean_object* v___x_2873_; lean_object* v___y_2875_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; uint8_t v___x_2885_; 
v___x_2873_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2882_ = lean_nat_to_int(v_length_2865_);
v___x_2883_ = lean_nat_abs(v___x_2882_);
v___x_2884_ = lean_cstr_to_nat("9007199254740991");
v___x_2885_ = lean_nat_dec_le(v___x_2883_, v___x_2884_);
lean_dec(v___x_2883_);
if (v___x_2885_ == 0)
{
lean_object* v___x_2886_; 
v___x_2886_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2882_);
v___y_2875_ = v___x_2886_;
goto v___jp_2874_;
}
else
{
double v___x_2887_; lean_object* v___x_2888_; 
v___x_2887_ = l_Float_ofInt(v___x_2882_);
lean_dec(v___x_2882_);
v___x_2888_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2888_, 0, v___x_2887_);
v___y_2875_ = v___x_2888_;
goto v___jp_2874_;
}
v___jp_2874_:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2873_);
lean_ctor_set(v___x_2876_, 1, v___y_2875_);
v___x_2877_ = lean_unsigned_to_nat(2u);
v___x_2878_ = lean_mk_empty_array_with_capacity(v___x_2877_);
v___x_2879_ = lean_array_push(v___x_2878_, v___x_2872_);
v___x_2880_ = lean_array_push(v___x_2879_, v___x_2876_);
v___x_2881_ = l_Lasm_JS_Web_Support_fields(v___x_2880_);
lean_dec_ref(v___x_2880_);
return v___x_2881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesKeyGenParams___lam__0(lean_object* v_d_2893_){
_start:
{
lean_object* v_name_2894_; lean_object* v_length_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2920_; 
v_name_2894_ = lean_ctor_get(v_d_2893_, 0);
v_length_2895_ = lean_ctor_get(v_d_2893_, 1);
v_isSharedCheck_2920_ = !lean_is_exclusive(v_d_2893_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2897_ = v_d_2893_;
v_isShared_2898_ = v_isSharedCheck_2920_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_length_2895_);
lean_inc(v_name_2894_);
lean_dec(v_d_2893_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2920_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2902_; 
v___x_2899_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2900_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2900_, 0, v_name_2894_);
if (v_isShared_2898_ == 0)
{
lean_ctor_set(v___x_2897_, 1, v___x_2900_);
lean_ctor_set(v___x_2897_, 0, v___x_2899_);
v___x_2902_ = v___x_2897_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v___x_2899_);
lean_ctor_set(v_reuseFailAlloc_2919_, 1, v___x_2900_);
v___x_2902_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
lean_object* v___x_2903_; lean_object* v___y_2905_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; uint8_t v___x_2915_; 
v___x_2903_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2912_ = lean_nat_to_int(v_length_2895_);
v___x_2913_ = lean_nat_abs(v___x_2912_);
v___x_2914_ = lean_cstr_to_nat("9007199254740991");
v___x_2915_ = lean_nat_dec_le(v___x_2913_, v___x_2914_);
lean_dec(v___x_2913_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; 
v___x_2916_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2912_);
v___y_2905_ = v___x_2916_;
goto v___jp_2904_;
}
else
{
double v___x_2917_; lean_object* v___x_2918_; 
v___x_2917_ = l_Float_ofInt(v___x_2912_);
lean_dec(v___x_2912_);
v___x_2918_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2918_, 0, v___x_2917_);
v___y_2905_ = v___x_2918_;
goto v___jp_2904_;
}
v___jp_2904_:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2903_);
lean_ctor_set(v___x_2906_, 1, v___y_2905_);
v___x_2907_ = lean_unsigned_to_nat(2u);
v___x_2908_ = lean_mk_empty_array_with_capacity(v___x_2907_);
v___x_2909_ = lean_array_push(v___x_2908_, v___x_2902_);
v___x_2910_ = lean_array_push(v___x_2909_, v___x_2906_);
v___x_2911_ = l_Lasm_JS_Web_Support_fields(v___x_2910_);
lean_dec_ref(v___x_2910_);
return v___x_2911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesDerivedKeyParams___lam__0(lean_object* v_d_2923_){
_start:
{
lean_object* v_name_2924_; lean_object* v_length_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2950_; 
v_name_2924_ = lean_ctor_get(v_d_2923_, 0);
v_length_2925_ = lean_ctor_get(v_d_2923_, 1);
v_isSharedCheck_2950_ = !lean_is_exclusive(v_d_2923_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2927_ = v_d_2923_;
v_isShared_2928_ = v_isSharedCheck_2950_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_length_2925_);
lean_inc(v_name_2924_);
lean_dec(v_d_2923_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2950_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2932_; 
v___x_2929_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2930_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2930_, 0, v_name_2924_);
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 1, v___x_2930_);
lean_ctor_set(v___x_2927_, 0, v___x_2929_);
v___x_2932_ = v___x_2927_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v___x_2929_);
lean_ctor_set(v_reuseFailAlloc_2949_, 1, v___x_2930_);
v___x_2932_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
lean_object* v___x_2933_; lean_object* v___y_2935_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; uint8_t v___x_2945_; 
v___x_2933_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2942_ = lean_nat_to_int(v_length_2925_);
v___x_2943_ = lean_nat_abs(v___x_2942_);
v___x_2944_ = lean_cstr_to_nat("9007199254740991");
v___x_2945_ = lean_nat_dec_le(v___x_2943_, v___x_2944_);
lean_dec(v___x_2943_);
if (v___x_2945_ == 0)
{
lean_object* v___x_2946_; 
v___x_2946_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2942_);
v___y_2935_ = v___x_2946_;
goto v___jp_2934_;
}
else
{
double v___x_2947_; lean_object* v___x_2948_; 
v___x_2947_ = l_Float_ofInt(v___x_2942_);
lean_dec(v___x_2942_);
v___x_2948_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2948_, 0, v___x_2947_);
v___y_2935_ = v___x_2948_;
goto v___jp_2934_;
}
v___jp_2934_:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2936_, 0, v___x_2933_);
lean_ctor_set(v___x_2936_, 1, v___y_2935_);
v___x_2937_ = lean_unsigned_to_nat(2u);
v___x_2938_ = lean_mk_empty_array_with_capacity(v___x_2937_);
v___x_2939_ = lean_array_push(v___x_2938_, v___x_2932_);
v___x_2940_ = lean_array_push(v___x_2939_, v___x_2936_);
v___x_2941_ = l_Lasm_JS_Web_Support_fields(v___x_2940_);
lean_dec_ref(v___x_2940_);
return v___x_2941_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesCbcParams___lam__0(lean_object* v_d_2954_){
_start:
{
lean_object* v_name_2955_; lean_object* v_iv_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2973_; 
v_name_2955_ = lean_ctor_get(v_d_2954_, 0);
v_iv_2956_ = lean_ctor_get(v_d_2954_, 1);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_d_2954_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2958_ = v_d_2954_;
v_isShared_2959_ = v_isSharedCheck_2973_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_iv_2956_);
lean_inc(v_name_2955_);
lean_dec(v_d_2954_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2973_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2963_; 
v___x_2960_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2961_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2961_, 0, v_name_2955_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 1, v___x_2961_);
lean_ctor_set(v___x_2958_, 0, v___x_2960_);
v___x_2963_ = v___x_2958_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2960_);
lean_ctor_set(v_reuseFailAlloc_2972_, 1, v___x_2961_);
v___x_2963_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2964_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCbcParams___lam__0___closed__0));
v___x_2965_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2965_, 0, v_iv_2956_);
v___x_2966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2966_, 0, v___x_2964_);
lean_ctor_set(v___x_2966_, 1, v___x_2965_);
v___x_2967_ = lean_unsigned_to_nat(2u);
v___x_2968_ = lean_mk_empty_array_with_capacity(v___x_2967_);
v___x_2969_ = lean_array_push(v___x_2968_, v___x_2963_);
v___x_2970_ = lean_array_push(v___x_2969_, v___x_2966_);
v___x_2971_ = l_Lasm_JS_Web_Support_fields(v___x_2970_);
lean_dec_ref(v___x_2970_);
return v___x_2971_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesGcmParams___lam__0(lean_object* v___f_2978_, lean_object* v___f_2979_, lean_object* v_d_2980_){
_start:
{
lean_object* v_name_2981_; lean_object* v_iv_2982_; lean_object* v_additionalData_2983_; lean_object* v_tagLength_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v_name_2981_ = lean_ctor_get(v_d_2980_, 0);
lean_inc_ref(v_name_2981_);
v_iv_2982_ = lean_ctor_get(v_d_2980_, 1);
lean_inc_ref(v_iv_2982_);
v_additionalData_2983_ = lean_ctor_get(v_d_2980_, 2);
lean_inc(v_additionalData_2983_);
v_tagLength_2984_ = lean_ctor_get(v_d_2980_, 3);
lean_inc(v_tagLength_2984_);
lean_dec_ref(v_d_2980_);
v___x_2985_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2986_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2986_, 0, v_name_2981_);
v___x_2987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2985_);
lean_ctor_set(v___x_2987_, 1, v___x_2986_);
v___x_2988_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCbcParams___lam__0___closed__0));
v___x_2989_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2989_, 0, v_iv_2982_);
v___x_2990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2988_);
lean_ctor_set(v___x_2990_, 1, v___x_2989_);
v___x_2991_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__0));
v___x_2992_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2978_, v_additionalData_2983_);
v___x_2993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2991_);
lean_ctor_set(v___x_2993_, 1, v___x_2992_);
v___x_2994_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__1));
v___x_2995_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2979_, v_tagLength_2984_);
v___x_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2994_);
lean_ctor_set(v___x_2996_, 1, v___x_2995_);
v___x_2997_ = lean_unsigned_to_nat(4u);
v___x_2998_ = lean_mk_empty_array_with_capacity(v___x_2997_);
v___x_2999_ = lean_array_push(v___x_2998_, v___x_2987_);
v___x_3000_ = lean_array_push(v___x_2999_, v___x_2990_);
v___x_3001_ = lean_array_push(v___x_3000_, v___x_2993_);
v___x_3002_ = lean_array_push(v___x_3001_, v___x_2996_);
v___x_3003_ = l_Lasm_JS_Web_Support_fields(v___x_3002_);
lean_dec_ref(v___x_3002_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacImportParams___lam__0(lean_object* v___f_3009_, lean_object* v_d_3010_){
_start:
{
lean_object* v_name_3011_; lean_object* v_hash_3012_; lean_object* v_length_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___y_3019_; 
v_name_3011_ = lean_ctor_get(v_d_3010_, 0);
lean_inc_ref(v_name_3011_);
v_hash_3012_ = lean_ctor_get(v_d_3010_, 1);
lean_inc_ref(v_hash_3012_);
v_length_3013_ = lean_ctor_get(v_d_3010_, 2);
lean_inc(v_length_3013_);
lean_dec_ref(v_d_3010_);
v___x_3014_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3015_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3015_, 0, v_name_3011_);
v___x_3016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3014_);
lean_ctor_set(v___x_3016_, 1, v___x_3015_);
v___x_3017_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3012_) == 0)
{
lean_object* v_value_3030_; 
v_value_3030_ = lean_ctor_get(v_hash_3012_, 0);
lean_inc(v_value_3030_);
lean_dec_ref_known(v_hash_3012_, 1);
v___y_3019_ = v_value_3030_;
goto v___jp_3018_;
}
else
{
lean_object* v_value_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
v_value_3031_ = lean_ctor_get(v_hash_3012_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v_hash_3012_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3033_ = v_hash_3012_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_value_3031_);
lean_dec(v_hash_3012_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
lean_ctor_set_tag(v___x_3033_, 4);
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_value_3031_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
v___y_3019_ = v___x_3036_;
goto v___jp_3018_;
}
}
}
v___jp_3018_:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; 
v___x_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3017_);
lean_ctor_set(v___x_3020_, 1, v___y_3019_);
v___x_3021_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_3022_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_3009_, v_length_3013_);
v___x_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3021_);
lean_ctor_set(v___x_3023_, 1, v___x_3022_);
v___x_3024_ = lean_unsigned_to_nat(3u);
v___x_3025_ = lean_mk_empty_array_with_capacity(v___x_3024_);
v___x_3026_ = lean_array_push(v___x_3025_, v___x_3016_);
v___x_3027_ = lean_array_push(v___x_3026_, v___x_3020_);
v___x_3028_ = lean_array_push(v___x_3027_, v___x_3023_);
v___x_3029_ = l_Lasm_JS_Web_Support_fields(v___x_3028_);
lean_dec_ref(v___x_3028_);
return v___x_3029_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacKeyAlgorithm___lam__0(lean_object* v_d_3042_){
_start:
{
lean_object* v_name_3043_; lean_object* v_hash_3044_; lean_object* v_length_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___y_3059_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; 
v_name_3043_ = lean_ctor_get(v_d_3042_, 0);
lean_inc_ref(v_name_3043_);
v_hash_3044_ = lean_ctor_get(v_d_3042_, 1);
lean_inc_ref(v_hash_3044_);
v_length_3045_ = lean_ctor_get(v_d_3042_, 2);
lean_inc(v_length_3045_);
lean_dec_ref(v_d_3042_);
v___x_3046_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3047_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3047_, 0, v_name_3043_);
v___x_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3046_);
lean_ctor_set(v___x_3048_, 1, v___x_3047_);
v___x_3049_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
v___x_3050_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3050_, 0, v_hash_3044_);
v___x_3051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3046_);
lean_ctor_set(v___x_3051_, 1, v___x_3050_);
v___x_3052_ = lean_unsigned_to_nat(1u);
v___x_3053_ = lean_mk_empty_array_with_capacity(v___x_3052_);
v___x_3054_ = lean_array_push(v___x_3053_, v___x_3051_);
v___x_3055_ = l_Lasm_JS_Web_Support_fields(v___x_3054_);
lean_dec_ref(v___x_3054_);
v___x_3056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3049_);
lean_ctor_set(v___x_3056_, 1, v___x_3055_);
v___x_3057_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_3067_ = lean_nat_to_int(v_length_3045_);
v___x_3068_ = lean_nat_abs(v___x_3067_);
v___x_3069_ = lean_cstr_to_nat("9007199254740991");
v___x_3070_ = lean_nat_dec_le(v___x_3068_, v___x_3069_);
lean_dec(v___x_3068_);
if (v___x_3070_ == 0)
{
lean_object* v___x_3071_; 
v___x_3071_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3067_);
v___y_3059_ = v___x_3071_;
goto v___jp_3058_;
}
else
{
double v___x_3072_; lean_object* v___x_3073_; 
v___x_3072_ = l_Float_ofInt(v___x_3067_);
lean_dec(v___x_3067_);
v___x_3073_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3073_, 0, v___x_3072_);
v___y_3059_ = v___x_3073_;
goto v___jp_3058_;
}
v___jp_3058_:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3057_);
lean_ctor_set(v___x_3060_, 1, v___y_3059_);
v___x_3061_ = lean_unsigned_to_nat(3u);
v___x_3062_ = lean_mk_empty_array_with_capacity(v___x_3061_);
v___x_3063_ = lean_array_push(v___x_3062_, v___x_3048_);
v___x_3064_ = lean_array_push(v___x_3063_, v___x_3056_);
v___x_3065_ = lean_array_push(v___x_3064_, v___x_3060_);
v___x_3066_ = l_Lasm_JS_Web_Support_fields(v___x_3065_);
lean_dec_ref(v___x_3065_);
return v___x_3066_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacKeyGenParams___lam__0(lean_object* v___f_3076_, lean_object* v_d_3077_){
_start:
{
lean_object* v_name_3078_; lean_object* v_hash_3079_; lean_object* v_length_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___y_3086_; 
v_name_3078_ = lean_ctor_get(v_d_3077_, 0);
lean_inc_ref(v_name_3078_);
v_hash_3079_ = lean_ctor_get(v_d_3077_, 1);
lean_inc_ref(v_hash_3079_);
v_length_3080_ = lean_ctor_get(v_d_3077_, 2);
lean_inc(v_length_3080_);
lean_dec_ref(v_d_3077_);
v___x_3081_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3082_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_name_3078_);
v___x_3083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3081_);
lean_ctor_set(v___x_3083_, 1, v___x_3082_);
v___x_3084_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3079_) == 0)
{
lean_object* v_value_3097_; 
v_value_3097_ = lean_ctor_get(v_hash_3079_, 0);
lean_inc(v_value_3097_);
lean_dec_ref_known(v_hash_3079_, 1);
v___y_3086_ = v_value_3097_;
goto v___jp_3085_;
}
else
{
lean_object* v_value_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3105_; 
v_value_3098_ = lean_ctor_get(v_hash_3079_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v_hash_3079_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3100_ = v_hash_3079_;
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_value_3098_);
lean_dec(v_hash_3079_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___x_3103_; 
if (v_isShared_3101_ == 0)
{
lean_ctor_set_tag(v___x_3100_, 4);
v___x_3103_ = v___x_3100_;
goto v_reusejp_3102_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_value_3098_);
v___x_3103_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3102_;
}
v_reusejp_3102_:
{
v___y_3086_ = v___x_3103_;
goto v___jp_3085_;
}
}
}
v___jp_3085_:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3084_);
lean_ctor_set(v___x_3087_, 1, v___y_3086_);
v___x_3088_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_3089_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_3076_, v_length_3080_);
v___x_3090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3088_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
v___x_3091_ = lean_unsigned_to_nat(3u);
v___x_3092_ = lean_mk_empty_array_with_capacity(v___x_3091_);
v___x_3093_ = lean_array_push(v___x_3092_, v___x_3083_);
v___x_3094_ = lean_array_push(v___x_3093_, v___x_3087_);
v___x_3095_ = lean_array_push(v___x_3094_, v___x_3090_);
v___x_3096_ = l_Lasm_JS_Web_Support_fields(v___x_3095_);
lean_dec_ref(v___x_3095_);
return v___x_3096_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHkdfParams___lam__0(lean_object* v_d_3111_){
_start:
{
lean_object* v_name_3112_; lean_object* v_hash_3113_; lean_object* v_salt_3114_; lean_object* v_info_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___y_3121_; 
v_name_3112_ = lean_ctor_get(v_d_3111_, 0);
lean_inc_ref(v_name_3112_);
v_hash_3113_ = lean_ctor_get(v_d_3111_, 1);
lean_inc_ref(v_hash_3113_);
v_salt_3114_ = lean_ctor_get(v_d_3111_, 2);
lean_inc_ref(v_salt_3114_);
v_info_3115_ = lean_ctor_get(v_d_3111_, 3);
lean_inc_ref(v_info_3115_);
lean_dec_ref(v_d_3111_);
v___x_3116_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3117_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3117_, 0, v_name_3112_);
v___x_3118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3116_);
lean_ctor_set(v___x_3118_, 1, v___x_3117_);
v___x_3119_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3113_) == 0)
{
lean_object* v_value_3136_; 
v_value_3136_ = lean_ctor_get(v_hash_3113_, 0);
lean_inc(v_value_3136_);
lean_dec_ref_known(v_hash_3113_, 1);
v___y_3121_ = v_value_3136_;
goto v___jp_3120_;
}
else
{
lean_object* v_value_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
v_value_3137_ = lean_ctor_get(v_hash_3113_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v_hash_3113_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v_hash_3113_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_value_3137_);
lean_dec(v_hash_3113_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
lean_ctor_set_tag(v___x_3139_, 4);
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_value_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
v___y_3121_ = v___x_3142_;
goto v___jp_3120_;
}
}
}
v___jp_3120_:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3119_);
lean_ctor_set(v___x_3122_, 1, v___y_3121_);
v___x_3123_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__0));
v___x_3124_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3124_, 0, v_salt_3114_);
v___x_3125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3123_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__1));
v___x_3127_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3127_, 0, v_info_3115_);
v___x_3128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3126_);
lean_ctor_set(v___x_3128_, 1, v___x_3127_);
v___x_3129_ = lean_unsigned_to_nat(4u);
v___x_3130_ = lean_mk_empty_array_with_capacity(v___x_3129_);
v___x_3131_ = lean_array_push(v___x_3130_, v___x_3118_);
v___x_3132_ = lean_array_push(v___x_3131_, v___x_3122_);
v___x_3133_ = lean_array_push(v___x_3132_, v___x_3125_);
v___x_3134_ = lean_array_push(v___x_3133_, v___x_3128_);
v___x_3135_ = l_Lasm_JS_Web_Support_fields(v___x_3134_);
lean_dec_ref(v___x_3134_);
return v___x_3135_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0(lean_object* v_d_3148_){
_start:
{
lean_object* v_name_3149_; lean_object* v_salt_3150_; lean_object* v_iterations_3151_; lean_object* v_hash_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v___x_3171_; lean_object* v___y_3173_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; uint8_t v___x_3188_; 
v_name_3149_ = lean_ctor_get(v_d_3148_, 0);
lean_inc_ref(v_name_3149_);
v_salt_3150_ = lean_ctor_get(v_d_3148_, 1);
lean_inc_ref(v_salt_3150_);
v_iterations_3151_ = lean_ctor_get(v_d_3148_, 2);
lean_inc(v_iterations_3151_);
v_hash_3152_ = lean_ctor_get(v_d_3148_, 3);
lean_inc_ref(v_hash_3152_);
lean_dec_ref(v_d_3148_);
v___x_3153_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3154_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3154_, 0, v_name_3149_);
v___x_3155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3153_);
lean_ctor_set(v___x_3155_, 1, v___x_3154_);
v___x_3156_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__0));
v___x_3157_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3157_, 0, v_salt_3150_);
v___x_3158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3156_);
lean_ctor_set(v___x_3158_, 1, v___x_3157_);
v___x_3171_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0___closed__0));
v___x_3185_ = lean_nat_to_int(v_iterations_3151_);
v___x_3186_ = lean_nat_abs(v___x_3185_);
v___x_3187_ = lean_cstr_to_nat("9007199254740991");
v___x_3188_ = lean_nat_dec_le(v___x_3186_, v___x_3187_);
lean_dec(v___x_3186_);
if (v___x_3188_ == 0)
{
lean_object* v___x_3189_; 
v___x_3189_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3185_);
v___y_3173_ = v___x_3189_;
goto v___jp_3172_;
}
else
{
double v___x_3190_; lean_object* v___x_3191_; 
v___x_3190_ = l_Float_ofInt(v___x_3185_);
lean_dec(v___x_3185_);
v___x_3191_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3191_, 0, v___x_3190_);
v___y_3173_ = v___x_3191_;
goto v___jp_3172_;
}
v___jp_3159_:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
lean_inc_ref(v___y_3160_);
v___x_3163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___y_3160_);
lean_ctor_set(v___x_3163_, 1, v___y_3162_);
v___x_3164_ = lean_unsigned_to_nat(4u);
v___x_3165_ = lean_mk_empty_array_with_capacity(v___x_3164_);
v___x_3166_ = lean_array_push(v___x_3165_, v___x_3155_);
v___x_3167_ = lean_array_push(v___x_3166_, v___x_3158_);
v___x_3168_ = lean_array_push(v___x_3167_, v___y_3161_);
v___x_3169_ = lean_array_push(v___x_3168_, v___x_3163_);
v___x_3170_ = l_Lasm_JS_Web_Support_fields(v___x_3169_);
lean_dec_ref(v___x_3169_);
return v___x_3170_;
}
v___jp_3172_:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3171_);
lean_ctor_set(v___x_3174_, 1, v___y_3173_);
v___x_3175_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3152_) == 0)
{
lean_object* v_value_3176_; 
v_value_3176_ = lean_ctor_get(v_hash_3152_, 0);
lean_inc(v_value_3176_);
lean_dec_ref_known(v_hash_3152_, 1);
v___y_3160_ = v___x_3175_;
v___y_3161_ = v___x_3174_;
v___y_3162_ = v_value_3176_;
goto v___jp_3159_;
}
else
{
lean_object* v_value_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3184_; 
v_value_3177_ = lean_ctor_get(v_hash_3152_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v_hash_3152_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3179_ = v_hash_3152_;
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_value_3177_);
lean_dec(v_hash_3152_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3182_; 
if (v_isShared_3180_ == 0)
{
lean_ctor_set_tag(v___x_3179_, 4);
v___x_3182_ = v___x_3179_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_value_3177_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
v___y_3160_ = v___x_3175_;
v___y_3161_ = v___x_3174_;
v___y_3162_ = v___x_3182_;
goto v___jp_3159_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle(lean_object* v_self_3195_){
_start:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3197_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_subtle___closed__0));
v___x_3198_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3195_, v___x_3197_);
if (lean_obj_tag(v___x_3198_) == 0)
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3206_; 
v_a_3199_ = lean_ctor_get(v___x_3198_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3198_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3201_ = v___x_3198_;
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3198_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3204_; 
if (v_isShared_3202_ == 0)
{
v___x_3204_ = v___x_3201_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3199_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
else
{
lean_object* v_a_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3214_; 
v_a_3207_ = lean_ctor_get(v___x_3198_, 0);
v_isSharedCheck_3214_ = !lean_is_exclusive(v___x_3198_);
if (v_isSharedCheck_3214_ == 0)
{
v___x_3209_ = v___x_3198_;
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_a_3207_);
lean_dec(v___x_3198_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3212_; 
if (v_isShared_3210_ == 0)
{
v___x_3212_ = v___x_3209_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v_a_3207_);
v___x_3212_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
return v___x_3212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle___boxed(lean_object* v_self_3215_, lean_object* v_a_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = l_Lasm_JS_Web_Crypto_subtle(v_self_3215_);
return v_res_3217_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3218_; uint64_t v___x_3219_; 
v___x_3218_ = 0;
v___x_3219_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3218_);
return v___x_3219_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(uint8_t v_await_3220_, uint64_t v_extra_3221_){
_start:
{
uint64_t v___x_3222_; uint64_t v___y_3224_; 
v___x_3222_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_3220_ == 0)
{
uint64_t v___x_3227_; 
v___x_3227_ = 0ULL;
v___y_3224_ = v___x_3227_;
goto v___jp_3223_;
}
else
{
uint64_t v___x_3228_; 
v___x_3228_ = 2ULL;
v___y_3224_ = v___x_3228_;
goto v___jp_3223_;
}
v___jp_3223_:
{
uint64_t v___x_3225_; uint64_t v___x_3226_; 
v___x_3225_ = lean_uint64_lor(v___x_3222_, v___y_3224_);
v___x_3226_ = lean_uint64_lor(v___x_3225_, v_extra_3221_);
return v___x_3226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___boxed(lean_object* v_await_3229_, lean_object* v_extra_3230_){
_start:
{
uint8_t v_await_boxed_3231_; uint64_t v_extra_boxed_3232_; uint64_t v_res_3233_; lean_object* v_r_3234_; 
v_await_boxed_3231_ = lean_unbox(v_await_3229_);
v_extra_boxed_3232_ = lean_unbox_uint64(v_extra_3230_);
lean_dec_ref(v_extra_3230_);
v_res_3233_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(v_await_boxed_3231_, v_extra_boxed_3232_);
v_r_3234_ = lean_box_uint64(v_res_3233_);
return v_r_3234_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(lean_object* v_bytes_3235_){
_start:
{
lean_object* v___x_3237_; 
v___x_3237_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3235_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3245_; 
v_a_3238_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3240_ = v___x_3237_;
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3237_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3243_; 
if (v_isShared_3241_ == 0)
{
v___x_3243_ = v___x_3240_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v_a_3238_);
v___x_3243_ = v_reuseFailAlloc_3244_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
return v___x_3243_;
}
}
}
else
{
return v___x_3237_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg___boxed(lean_object* v_bytes_3246_, lean_object* v_a_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_bytes_3246_);
lean_dec_ref(v_bytes_3246_);
return v_res_3248_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3249_; uint8_t v___x_3250_; uint64_t v___x_3251_; 
v___x_3249_ = 8ULL;
v___x_3250_ = 0;
v___x_3251_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(v___x_3250_, v___x_3249_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(lean_object* v_o_3252_, lean_object* v_name_3253_, lean_object* v_args_3254_){
_start:
{
lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; uint64_t v___x_3259_; lean_object* v___x_3260_; 
v___x_3256_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3257_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3257_, 0, v_o_3252_);
lean_ctor_set(v___x_3257_, 1, v___x_3256_);
v___x_3258_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3258_, 0, v_name_3253_);
v___x_3259_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0);
v___x_3260_ = l_Lasm_JS_Value_invokeRaw(v___x_3257_, v___x_3258_, v_args_3254_, v___x_3259_);
if (lean_obj_tag(v___x_3260_) == 0)
{
lean_object* v_a_3261_; lean_object* v___x_3262_; 
v_a_3261_ = lean_ctor_get(v___x_3260_, 0);
lean_inc(v_a_3261_);
lean_dec_ref_known(v___x_3260_, 1);
v___x_3262_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_a_3261_);
lean_dec(v_a_3261_);
return v___x_3262_;
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3270_; 
v_a_3263_ = lean_ctor_get(v___x_3260_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3260_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3260_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3260_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3268_; 
if (v_isShared_3266_ == 0)
{
v___x_3268_ = v___x_3265_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3263_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___boxed(lean_object* v_o_3271_, lean_object* v_name_3272_, lean_object* v_args_3273_, lean_object* v_a_3274_){
_start:
{
lean_object* v_res_3275_; 
v_res_3275_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(v_o_3271_, v_name_3272_, v_args_3273_);
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues(lean_object* v_self_3277_, lean_object* v_array_3278_){
_start:
{
lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___x_3280_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_getRandomValues___closed__0));
v___x_3281_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3281_, 0, v_array_3278_);
v___x_3282_ = lean_unsigned_to_nat(1u);
v___x_3283_ = lean_mk_empty_array_with_capacity(v___x_3282_);
v___x_3284_ = lean_array_push(v___x_3283_, v___x_3281_);
v___x_3285_ = l_Lasm_JS_Web_Support_args(v___x_3284_);
v___x_3286_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(v_self_3277_, v___x_3280_, v___x_3285_);
if (lean_obj_tag(v___x_3286_) == 0)
{
lean_object* v_a_3287_; lean_object* v___x_3288_; 
v_a_3287_ = lean_ctor_get(v___x_3286_, 0);
lean_inc(v_a_3287_);
lean_dec_ref_known(v___x_3286_, 1);
v___x_3288_ = l_Lasm_JS_Web_Support_viewBytes(v_a_3287_);
return v___x_3288_;
}
else
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
v_a_3289_ = lean_ctor_get(v___x_3286_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___x_3286_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___x_3286_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues___boxed(lean_object* v_self_3297_, lean_object* v_array_3298_, lean_object* v_a_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l_Lasm_JS_Web_Crypto_getRandomValues(v_self_3297_, v_array_3298_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg(lean_object* v_d_3301_){
_start:
{
lean_object* v___x_3303_; 
v___x_3303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3303_, 0, v_d_3301_);
return v___x_3303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_d_3304_, lean_object* v_a_3305_){
_start:
{
lean_object* v_res_3306_; 
v_res_3306_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg(v_d_3304_);
return v_res_3306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2(lean_object* v_context_3307_, lean_object* v_d_3308_){
_start:
{
lean_object* v___x_3310_; 
v___x_3310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3310_, 0, v_d_3308_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3311_, lean_object* v_d_3312_, lean_object* v_a_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2(v_context_3311_, v_d_3312_);
lean_dec_ref(v_context_3311_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(lean_object* v_context_3315_, lean_object* v_bytes_3316_){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_bytes_3316_);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___boxed(lean_object* v_context_3319_, lean_object* v_bytes_3320_, lean_object* v_a_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(v_context_3319_, v_bytes_3320_);
lean_dec_ref(v_bytes_3320_);
lean_dec_ref(v_context_3319_);
return v_res_3322_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(uint8_t v_await_3323_, uint64_t v_extra_3324_){
_start:
{
uint64_t v___x_3325_; uint64_t v___y_3327_; 
v___x_3325_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_3323_ == 0)
{
uint64_t v___x_3330_; 
v___x_3330_ = 0ULL;
v___y_3327_ = v___x_3330_;
goto v___jp_3326_;
}
else
{
uint64_t v___x_3331_; 
v___x_3331_ = 2ULL;
v___y_3327_ = v___x_3331_;
goto v___jp_3326_;
}
v___jp_3326_:
{
uint64_t v___x_3328_; uint64_t v___x_3329_; 
v___x_3328_ = lean_uint64_lor(v___x_3325_, v___y_3327_);
v___x_3329_ = lean_uint64_lor(v___x_3328_, v_extra_3324_);
return v___x_3329_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0___boxed(lean_object* v_await_3332_, lean_object* v_extra_3333_){
_start:
{
uint8_t v_await_boxed_3334_; uint64_t v_extra_boxed_3335_; uint64_t v_res_3336_; lean_object* v_r_3337_; 
v_await_boxed_3334_ = lean_unbox(v_await_3332_);
v_extra_boxed_3335_ = lean_unbox_uint64(v_extra_3333_);
lean_dec_ref(v_extra_3333_);
v_res_3336_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(v_await_boxed_3334_, v_extra_boxed_3335_);
v_r_3337_ = lean_box_uint64(v_res_3336_);
return v_r_3337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(lean_object* v_context_3339_, lean_object* v_d_3340_){
_start:
{
lean_object* v___y_3343_; lean_object* v___y_3344_; 
if (lean_obj_tag(v_d_3340_) == 4)
{
lean_object* v_s_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3355_; 
v_s_3348_ = lean_ctor_get(v_d_3340_, 0);
v_isSharedCheck_3355_ = !lean_is_exclusive(v_d_3340_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_3350_ = v_d_3340_;
v_isShared_3351_ = v_isSharedCheck_3355_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_s_3348_);
lean_dec(v_d_3340_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3355_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3353_; 
if (v_isShared_3351_ == 0)
{
lean_ctor_set_tag(v___x_3350_, 0);
v___x_3353_ = v___x_3350_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_s_3348_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
else
{
lean_object* v___x_3356_; lean_object* v_received_3358_; 
v___x_3356_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
if (lean_obj_tag(v_d_3340_) == 9)
{
lean_object* v_value_3372_; lean_object* v_description_3373_; uint8_t v___x_3374_; 
v_value_3372_ = lean_ctor_get(v_d_3340_, 0);
v_description_3373_ = lean_ctor_get(v_d_3340_, 1);
v___x_3374_ = lean_string_dec_eq(v_description_3373_, v___x_3356_);
if (v___x_3374_ == 0)
{
goto v___jp_3370_;
}
else
{
uint32_t v___x_3375_; uint64_t v___x_3376_; lean_object* v___x_3377_; uint32_t v___x_3378_; lean_object* v___x_3379_; 
lean_inc_n(v_value_3372_, 2);
lean_dec_ref_known(v_d_3340_, 2);
v___x_3375_ = 206;
v___x_3376_ = 0ULL;
v___x_3377_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3377_, 0, v_value_3372_);
lean_ctor_set(v___x_3377_, 1, v___x_3356_);
v___x_3378_ = lasm_js_value_handle(v_value_3372_);
lean_dec(v_value_3372_);
v___x_3379_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3375_, v___x_3376_, v___x_3377_, v___x_3378_);
lean_dec_ref_known(v___x_3377_, 2);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; uint8_t v___x_3381_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
v___x_3381_ = lean_string_validate_utf8(v_a_3380_);
if (v___x_3381_ == 0)
{
lean_object* v___x_3382_; lean_object* v___x_3383_; 
lean_dec(v_a_3380_);
v___x_3382_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3383_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3382_);
v_received_3358_ = v___x_3383_;
goto v___jp_3357_;
}
else
{
lean_object* v___x_3384_; 
v___x_3384_ = lean_string_from_utf8_unchecked(v_a_3380_);
v_received_3358_ = v___x_3384_;
goto v___jp_3357_;
}
}
else
{
lean_object* v___x_3385_; 
lean_dec_ref_known(v___x_3379_, 1);
v___x_3385_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_3358_ = v___x_3385_;
goto v___jp_3357_;
}
}
}
else
{
goto v___jp_3370_;
}
v___jp_3357_:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; uint8_t v___x_3368_; 
v___x_3359_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3360_ = lean_string_append(v___x_3359_, v_context_3339_);
v___x_3361_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3362_ = lean_string_append(v___x_3360_, v___x_3361_);
v___x_3363_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___closed__0));
v___x_3364_ = lean_string_append(v___x_3362_, v___x_3363_);
v___x_3365_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3366_ = lean_string_append(v___x_3364_, v___x_3365_);
v___x_3367_ = lean_string_append(v___x_3366_, v_received_3358_);
lean_dec_ref(v_received_3358_);
v___x_3368_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_3368_ == 0)
{
lean_object* v___x_3369_; 
v___x_3369_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___y_3343_ = v___x_3367_;
v___y_3344_ = v___x_3369_;
goto v___jp_3342_;
}
else
{
v___y_3343_ = v___x_3367_;
v___y_3344_ = v___x_3356_;
goto v___jp_3342_;
}
}
v___jp_3370_:
{
lean_object* v___x_3371_; 
v___x_3371_ = l_Lasm_JS_Data_describe(v_d_3340_);
v_received_3358_ = v___x_3371_;
goto v___jp_3357_;
}
}
v___jp_3342_:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3345_ = lean_string_append(v___y_3343_, v___y_3344_);
v___x_3346_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3345_);
v___x_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3346_);
return v___x_3347_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3386_, lean_object* v_d_3387_, lean_object* v_a_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(v_context_3386_, v_d_3387_);
lean_dec_ref(v_context_3386_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(lean_object* v_context_3390_, lean_object* v_bytes_3391_){
_start:
{
lean_object* v___x_3393_; 
v___x_3393_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3391_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v_a_3394_; lean_object* v___x_3395_; 
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_a_3394_);
lean_dec_ref_known(v___x_3393_, 1);
v___x_3395_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(v_context_3390_, v_a_3394_);
return v___x_3395_;
}
else
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3403_; 
v_a_3396_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3403_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3403_ == 0)
{
v___x_3398_ = v___x_3393_;
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v___x_3393_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___x_3401_; 
if (v_isShared_3399_ == 0)
{
v___x_3401_ = v___x_3398_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v_a_3396_);
v___x_3401_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
return v___x_3401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1___boxed(lean_object* v_context_3404_, lean_object* v_bytes_3405_, lean_object* v_a_3406_){
_start:
{
lean_object* v_res_3407_; 
v_res_3407_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(v_context_3404_, v_bytes_3405_);
lean_dec_ref(v_bytes_3405_);
lean_dec_ref(v_context_3404_);
return v_res_3407_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3408_; uint8_t v___x_3409_; uint64_t v___x_3410_; 
v___x_3408_ = 8ULL;
v___x_3409_ = 0;
v___x_3410_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(v___x_3409_, v___x_3408_);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(lean_object* v_o_3412_, lean_object* v_name_3413_, lean_object* v_args_3414_){
_start:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; uint64_t v___x_3419_; lean_object* v___x_3420_; 
v___x_3416_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3417_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3417_, 0, v_o_3412_);
lean_ctor_set(v___x_3417_, 1, v___x_3416_);
lean_inc_ref(v_name_3413_);
v___x_3418_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3418_, 0, v_name_3413_);
v___x_3419_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0);
v___x_3420_ = l_Lasm_JS_Value_invokeRaw(v___x_3417_, v___x_3418_, v_args_3414_, v___x_3419_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_object* v_a_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v_a_3421_ = lean_ctor_get(v___x_3420_, 0);
lean_inc(v_a_3421_);
lean_dec_ref_known(v___x_3420_, 1);
v___x_3422_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_3423_ = lean_string_append(v___x_3422_, v_name_3413_);
lean_dec_ref(v_name_3413_);
v___x_3424_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(v___x_3423_, v_a_3421_);
lean_dec(v_a_3421_);
lean_dec_ref(v___x_3423_);
return v___x_3424_;
}
else
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
lean_dec_ref(v_name_3413_);
v_a_3425_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3427_ = v___x_3420_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v___x_3420_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3425_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___boxed(lean_object* v_o_3433_, lean_object* v_name_3434_, lean_object* v_args_3435_, lean_object* v_a_3436_){
_start:
{
lean_object* v_res_3437_; 
v_res_3437_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(v_o_3433_, v_name_3434_, v_args_3435_);
return v_res_3437_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Crypto_randomUUID___closed__2(void){
_start:
{
lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3441_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_randomUUID___closed__1));
v___x_3442_ = l_Lasm_JS_Web_Support_args(v___x_3441_);
return v___x_3442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID(lean_object* v_self_3443_){
_start:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3445_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_randomUUID___closed__0));
v___x_3446_ = lean_obj_once(&l_Lasm_JS_Web_Crypto_randomUUID___closed__2, &l_Lasm_JS_Web_Crypto_randomUUID___closed__2_once, _init_l_Lasm_JS_Web_Crypto_randomUUID___closed__2);
v___x_3447_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(v_self_3443_, v___x_3445_, v___x_3446_);
return v___x_3447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID___boxed(lean_object* v_self_3448_, lean_object* v_a_3449_){
_start:
{
lean_object* v_res_3450_; 
v_res_3450_ = l_Lasm_JS_Web_Crypto_randomUUID(v_self_3448_);
return v_res_3450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(lean_object* v_context_3452_, lean_object* v_d_3453_){
_start:
{
lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3462_; lean_object* v_received_3463_; lean_object* v___y_3479_; 
if (lean_obj_tag(v_d_3453_) == 4)
{
lean_object* v_s_3506_; lean_object* v___x_3507_; uint8_t v___x_3508_; 
v_s_3506_ = lean_ctor_get(v_d_3453_, 0);
v___x_3507_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0));
v___x_3508_ = lean_string_dec_eq(v_s_3506_, v___x_3507_);
if (v___x_3508_ == 0)
{
lean_object* v___x_3509_; uint8_t v___x_3510_; 
v___x_3509_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2));
v___x_3510_ = lean_string_dec_eq(v_s_3506_, v___x_3509_);
if (v___x_3510_ == 0)
{
lean_object* v___x_3511_; uint8_t v___x_3512_; 
v___x_3511_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4));
v___x_3512_ = lean_string_dec_eq(v_s_3506_, v___x_3511_);
if (v___x_3512_ == 0)
{
goto v___jp_3481_;
}
else
{
uint8_t v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
lean_dec_ref_known(v_d_3453_, 1);
v___x_3513_ = 2;
v___x_3514_ = lean_box(v___x_3513_);
v___x_3515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
return v___x_3515_;
}
}
else
{
uint8_t v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
lean_dec_ref_known(v_d_3453_, 1);
v___x_3516_ = 1;
v___x_3517_ = lean_box(v___x_3516_);
v___x_3518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3517_);
return v___x_3518_;
}
}
else
{
uint8_t v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
lean_dec_ref_known(v_d_3453_, 1);
v___x_3519_ = 0;
v___x_3520_ = lean_box(v___x_3519_);
v___x_3521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
return v___x_3521_;
}
}
else
{
goto v___jp_3481_;
}
v___jp_3455_:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
v___x_3458_ = lean_string_append(v___y_3456_, v___y_3457_);
v___x_3459_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3459_, 0, v___x_3458_);
v___x_3460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
return v___x_3460_;
}
v___jp_3461_:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; uint8_t v___x_3475_; 
v___x_3464_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3465_ = lean_string_append(v___x_3464_, v_context_3452_);
v___x_3466_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3467_ = lean_string_append(v___x_3465_, v___x_3466_);
v___x_3468_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___closed__1));
v___x_3469_ = lean_string_append(v___x_3467_, v___x_3468_);
v___x_3470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3471_ = lean_string_append(v___x_3469_, v___x_3470_);
v___x_3472_ = lean_string_append(v___x_3471_, v_received_3463_);
lean_dec_ref(v_received_3463_);
v___x_3473_ = lean_string_utf8_byte_size(v___y_3462_);
v___x_3474_ = lean_unsigned_to_nat(0u);
v___x_3475_ = lean_nat_dec_eq(v___x_3473_, v___x_3474_);
if (v___x_3475_ == 0)
{
lean_object* v___x_3476_; 
v___x_3476_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___closed__0));
v___y_3456_ = v___x_3472_;
v___y_3457_ = v___x_3476_;
goto v___jp_3455_;
}
else
{
lean_object* v___x_3477_; 
v___x_3477_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_3456_ = v___x_3472_;
v___y_3457_ = v___x_3477_;
goto v___jp_3455_;
}
}
v___jp_3478_:
{
lean_object* v___x_3480_; 
v___x_3480_ = l_Lasm_JS_Data_describe(v_d_3453_);
v___y_3462_ = v___y_3479_;
v_received_3463_ = v___x_3480_;
goto v___jp_3461_;
}
v___jp_3481_:
{
lean_object* v___x_3482_; 
v___x_3482_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__0));
if (lean_obj_tag(v_d_3453_) == 9)
{
lean_object* v_value_3483_; lean_object* v_description_3484_; lean_object* v___x_3485_; uint8_t v___x_3486_; 
v_value_3483_ = lean_ctor_get(v_d_3453_, 0);
v_description_3484_ = lean_ctor_get(v_d_3453_, 1);
v___x_3485_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3486_ = lean_string_dec_eq(v_description_3484_, v___x_3485_);
if (v___x_3486_ == 0)
{
v___y_3479_ = v___x_3482_;
goto v___jp_3478_;
}
else
{
lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3503_; 
lean_inc(v_value_3483_);
v_isSharedCheck_3503_ = !lean_is_exclusive(v_d_3453_);
if (v_isSharedCheck_3503_ == 0)
{
lean_object* v_unused_3504_; lean_object* v_unused_3505_; 
v_unused_3504_ = lean_ctor_get(v_d_3453_, 1);
lean_dec(v_unused_3504_);
v_unused_3505_ = lean_ctor_get(v_d_3453_, 0);
lean_dec(v_unused_3505_);
v___x_3488_ = v_d_3453_;
v_isShared_3489_ = v_isSharedCheck_3503_;
goto v_resetjp_3487_;
}
else
{
lean_dec(v_d_3453_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3503_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
uint32_t v___x_3490_; uint64_t v___x_3491_; lean_object* v___x_3493_; 
v___x_3490_ = 206;
v___x_3491_ = 0ULL;
lean_inc(v_value_3483_);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 1, v___x_3485_);
v___x_3493_ = v___x_3488_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v_value_3483_);
lean_ctor_set(v_reuseFailAlloc_3502_, 1, v___x_3485_);
v___x_3493_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
uint32_t v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = lasm_js_value_handle(v_value_3483_);
lean_dec(v_value_3483_);
v___x_3495_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3490_, v___x_3491_, v___x_3493_, v___x_3494_);
lean_dec_ref(v___x_3493_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; uint8_t v___x_3497_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
lean_dec_ref_known(v___x_3495_, 1);
v___x_3497_ = lean_string_validate_utf8(v_a_3496_);
if (v___x_3497_ == 0)
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
lean_dec(v_a_3496_);
v___x_3498_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3499_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3498_);
v___y_3462_ = v___x_3482_;
v_received_3463_ = v___x_3499_;
goto v___jp_3461_;
}
else
{
lean_object* v___x_3500_; 
v___x_3500_ = lean_string_from_utf8_unchecked(v_a_3496_);
v___y_3462_ = v___x_3482_;
v_received_3463_ = v___x_3500_;
goto v___jp_3461_;
}
}
else
{
lean_object* v___x_3501_; 
lean_dec_ref_known(v___x_3495_, 1);
v___x_3501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_3462_ = v___x_3482_;
v_received_3463_ = v___x_3501_;
goto v___jp_3461_;
}
}
}
}
}
else
{
v___y_3479_ = v___x_3482_;
goto v___jp_3478_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3522_, lean_object* v_d_3523_, lean_object* v_a_3524_){
_start:
{
lean_object* v_res_3525_; 
v_res_3525_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(v_context_3522_, v_d_3523_);
lean_dec_ref(v_context_3522_);
return v_res_3525_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(lean_object* v_context_3526_, lean_object* v_bytes_3527_){
_start:
{
lean_object* v___x_3529_; 
v___x_3529_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3527_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; lean_object* v___x_3531_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3529_, 1);
v___x_3531_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(v_context_3526_, v_a_3530_);
return v___x_3531_;
}
else
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3539_; 
v_a_3532_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3534_ = v___x_3529_;
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3529_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3537_; 
if (v_isShared_3535_ == 0)
{
v___x_3537_ = v___x_3534_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3532_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0___boxed(lean_object* v_context_3540_, lean_object* v_bytes_3541_, lean_object* v_a_3542_){
_start:
{
lean_object* v_res_3543_; 
v_res_3543_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(v_context_3540_, v_bytes_3541_);
lean_dec_ref(v_bytes_3541_);
lean_dec_ref(v_context_3540_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(lean_object* v_o_3545_, lean_object* v_key_3546_){
_start:
{
lean_object* v_k_3548_; lean_object* v___x_3549_; 
v_k_3548_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3548_, 0, v_key_3546_);
v___x_3549_ = l_Lasm_JS_Wire_encodeIO(v_k_3548_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v_a_3550_; uint32_t v___x_3551_; uint32_t v___x_3552_; uint64_t v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
v_a_3550_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_a_3550_);
lean_dec_ref_known(v___x_3549_, 1);
v___x_3551_ = 203;
v___x_3552_ = lasm_js_value_handle(v_o_3545_);
v___x_3553_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
v___x_3554_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3555_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3555_, 0, v_o_3545_);
lean_ctor_set(v___x_3555_, 1, v___x_3554_);
v___x_3556_ = lean_unsigned_to_nat(2u);
v___x_3557_ = lean_mk_empty_array_with_capacity(v___x_3556_);
lean_inc_ref(v_k_3548_);
v___x_3558_ = lean_array_push(v___x_3557_, v_k_3548_);
v___x_3559_ = lean_array_push(v___x_3558_, v___x_3555_);
v___x_3560_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3559_);
v___x_3561_ = lasm_js_call(v___x_3551_, v___x_3552_, v___x_3553_, v_a_3550_, v___x_3560_);
lean_dec_ref_known(v___x_3560_, 1);
lean_dec(v_a_3550_);
if (lean_obj_tag(v___x_3561_) == 0)
{
lean_object* v_a_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v_a_3562_ = lean_ctor_get(v___x_3561_, 0);
lean_inc(v_a_3562_);
lean_dec_ref_known(v___x_3561_, 1);
v___x_3563_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___closed__0));
v___x_3564_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3548_);
v___x_3565_ = lean_string_append(v___x_3563_, v___x_3564_);
lean_dec_ref(v___x_3564_);
v___x_3566_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(v___x_3565_, v_a_3562_);
lean_dec(v_a_3562_);
lean_dec_ref(v___x_3565_);
return v___x_3566_;
}
else
{
lean_object* v_a_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
lean_dec_ref_known(v_k_3548_, 1);
v_a_3567_ = lean_ctor_get(v___x_3561_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3561_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v___x_3561_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_a_3567_);
lean_dec(v___x_3561_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_a_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
else
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
lean_dec_ref_known(v_k_3548_, 1);
lean_dec(v_o_3545_);
v_a_3575_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3549_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3549_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___boxed(lean_object* v_o_3583_, lean_object* v_key_3584_, lean_object* v_a_3585_){
_start:
{
lean_object* v_res_3586_; 
v_res_3586_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(v_o_3583_, v_key_3584_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type(lean_object* v_self_3588_){
_start:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; 
v___x_3590_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_type___closed__0));
v___x_3591_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(v_self_3588_, v___x_3590_);
return v___x_3591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type___boxed(lean_object* v_self_3592_, lean_object* v_a_3593_){
_start:
{
lean_object* v_res_3594_; 
v_res_3594_ = l_Lasm_JS_Web_CryptoKey_type(v_self_3592_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(lean_object* v_context_3596_, lean_object* v_d_3597_){
_start:
{
lean_object* v___y_3600_; lean_object* v___y_3601_; 
if (lean_obj_tag(v_d_3597_) == 2)
{
uint8_t v_b_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
v_b_3605_ = lean_ctor_get_uint8(v_d_3597_, 0);
lean_dec_ref_known(v_d_3597_, 0);
v___x_3606_ = lean_box(v_b_3605_);
v___x_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3606_);
return v___x_3607_;
}
else
{
lean_object* v___x_3608_; lean_object* v_received_3610_; 
v___x_3608_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
if (lean_obj_tag(v_d_3597_) == 9)
{
lean_object* v_value_3624_; lean_object* v_description_3625_; uint8_t v___x_3626_; 
v_value_3624_ = lean_ctor_get(v_d_3597_, 0);
v_description_3625_ = lean_ctor_get(v_d_3597_, 1);
v___x_3626_ = lean_string_dec_eq(v_description_3625_, v___x_3608_);
if (v___x_3626_ == 0)
{
goto v___jp_3622_;
}
else
{
uint32_t v___x_3627_; uint64_t v___x_3628_; lean_object* v___x_3629_; uint32_t v___x_3630_; lean_object* v___x_3631_; 
lean_inc_n(v_value_3624_, 2);
lean_dec_ref_known(v_d_3597_, 2);
v___x_3627_ = 206;
v___x_3628_ = 0ULL;
v___x_3629_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3629_, 0, v_value_3624_);
lean_ctor_set(v___x_3629_, 1, v___x_3608_);
v___x_3630_ = lasm_js_value_handle(v_value_3624_);
lean_dec(v_value_3624_);
v___x_3631_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3627_, v___x_3628_, v___x_3629_, v___x_3630_);
lean_dec_ref_known(v___x_3629_, 2);
if (lean_obj_tag(v___x_3631_) == 0)
{
lean_object* v_a_3632_; uint8_t v___x_3633_; 
v_a_3632_ = lean_ctor_get(v___x_3631_, 0);
lean_inc(v_a_3632_);
lean_dec_ref_known(v___x_3631_, 1);
v___x_3633_ = lean_string_validate_utf8(v_a_3632_);
if (v___x_3633_ == 0)
{
lean_object* v___x_3634_; lean_object* v___x_3635_; 
lean_dec(v_a_3632_);
v___x_3634_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3635_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3634_);
v_received_3610_ = v___x_3635_;
goto v___jp_3609_;
}
else
{
lean_object* v___x_3636_; 
v___x_3636_ = lean_string_from_utf8_unchecked(v_a_3632_);
v_received_3610_ = v___x_3636_;
goto v___jp_3609_;
}
}
else
{
lean_object* v___x_3637_; 
lean_dec_ref_known(v___x_3631_, 1);
v___x_3637_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_3610_ = v___x_3637_;
goto v___jp_3609_;
}
}
}
else
{
goto v___jp_3622_;
}
v___jp_3609_:
{
lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; uint8_t v___x_3620_; 
v___x_3611_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3612_ = lean_string_append(v___x_3611_, v_context_3596_);
v___x_3613_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3614_ = lean_string_append(v___x_3612_, v___x_3613_);
v___x_3615_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___closed__0));
v___x_3616_ = lean_string_append(v___x_3614_, v___x_3615_);
v___x_3617_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3618_ = lean_string_append(v___x_3616_, v___x_3617_);
v___x_3619_ = lean_string_append(v___x_3618_, v_received_3610_);
lean_dec_ref(v_received_3610_);
v___x_3620_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_3620_ == 0)
{
lean_object* v___x_3621_; 
v___x_3621_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___y_3600_ = v___x_3619_;
v___y_3601_ = v___x_3621_;
goto v___jp_3599_;
}
else
{
v___y_3600_ = v___x_3619_;
v___y_3601_ = v___x_3608_;
goto v___jp_3599_;
}
}
v___jp_3622_:
{
lean_object* v___x_3623_; 
v___x_3623_ = l_Lasm_JS_Data_describe(v_d_3597_);
v_received_3610_ = v___x_3623_;
goto v___jp_3609_;
}
}
v___jp_3599_:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3602_ = lean_string_append(v___y_3600_, v___y_3601_);
v___x_3603_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3603_, 0, v___x_3602_);
v___x_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
return v___x_3604_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3638_, lean_object* v_d_3639_, lean_object* v_a_3640_){
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(v_context_3638_, v_d_3639_);
lean_dec_ref(v_context_3638_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(lean_object* v_context_3642_, lean_object* v_bytes_3643_){
_start:
{
lean_object* v___x_3645_; 
v___x_3645_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3643_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_object* v_a_3646_; lean_object* v___x_3647_; 
v_a_3646_ = lean_ctor_get(v___x_3645_, 0);
lean_inc(v_a_3646_);
lean_dec_ref_known(v___x_3645_, 1);
v___x_3647_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(v_context_3642_, v_a_3646_);
return v___x_3647_;
}
else
{
lean_object* v_a_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3655_; 
v_a_3648_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3650_ = v___x_3645_;
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_a_3648_);
lean_dec(v___x_3645_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3653_; 
if (v_isShared_3651_ == 0)
{
v___x_3653_ = v___x_3650_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_a_3648_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0___boxed(lean_object* v_context_3656_, lean_object* v_bytes_3657_, lean_object* v_a_3658_){
_start:
{
lean_object* v_res_3659_; 
v_res_3659_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(v_context_3656_, v_bytes_3657_);
lean_dec_ref(v_bytes_3657_);
lean_dec_ref(v_context_3656_);
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(lean_object* v_o_3660_, lean_object* v_key_3661_){
_start:
{
lean_object* v_k_3663_; lean_object* v___x_3664_; 
v_k_3663_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3663_, 0, v_key_3661_);
v___x_3664_ = l_Lasm_JS_Wire_encodeIO(v_k_3663_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_a_3665_; uint32_t v___x_3666_; uint32_t v___x_3667_; uint64_t v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
lean_inc(v_a_3665_);
lean_dec_ref_known(v___x_3664_, 1);
v___x_3666_ = 203;
v___x_3667_ = lasm_js_value_handle(v_o_3660_);
v___x_3668_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
v___x_3669_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3670_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3670_, 0, v_o_3660_);
lean_ctor_set(v___x_3670_, 1, v___x_3669_);
v___x_3671_ = lean_unsigned_to_nat(2u);
v___x_3672_ = lean_mk_empty_array_with_capacity(v___x_3671_);
lean_inc_ref(v_k_3663_);
v___x_3673_ = lean_array_push(v___x_3672_, v_k_3663_);
v___x_3674_ = lean_array_push(v___x_3673_, v___x_3670_);
v___x_3675_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3674_);
v___x_3676_ = lasm_js_call(v___x_3666_, v___x_3667_, v___x_3668_, v_a_3665_, v___x_3675_);
lean_dec_ref_known(v___x_3675_, 1);
lean_dec(v_a_3665_);
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_a_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; 
v_a_3677_ = lean_ctor_get(v___x_3676_, 0);
lean_inc(v_a_3677_);
lean_dec_ref_known(v___x_3676_, 1);
v___x_3678_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___closed__0));
v___x_3679_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3663_);
v___x_3680_ = lean_string_append(v___x_3678_, v___x_3679_);
lean_dec_ref(v___x_3679_);
v___x_3681_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(v___x_3680_, v_a_3677_);
lean_dec(v_a_3677_);
lean_dec_ref(v___x_3680_);
return v___x_3681_;
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_dec_ref_known(v_k_3663_, 1);
v_a_3682_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3676_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3676_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
lean_dec_ref_known(v_k_3663_, 1);
lean_dec(v_o_3660_);
v_a_3690_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3664_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3664_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3690_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0___boxed(lean_object* v_o_3698_, lean_object* v_key_3699_, lean_object* v_a_3700_){
_start:
{
lean_object* v_res_3701_; 
v_res_3701_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(v_o_3698_, v_key_3699_);
return v_res_3701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable(lean_object* v_self_3703_){
_start:
{
lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3705_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_extractable___closed__0));
v___x_3706_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(v_self_3703_, v___x_3705_);
return v___x_3706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable___boxed(lean_object* v_self_3707_, lean_object* v_a_3708_){
_start:
{
lean_object* v_res_3709_; 
v_res_3709_ = l_Lasm_JS_Web_CryptoKey_extractable(v_self_3707_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(lean_object* v_o_3710_, lean_object* v_key_3711_){
_start:
{
lean_object* v_k_3713_; lean_object* v___x_3714_; 
v_k_3713_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3713_, 0, v_key_3711_);
v___x_3714_ = l_Lasm_JS_Wire_encodeIO(v_k_3713_);
if (lean_obj_tag(v___x_3714_) == 0)
{
lean_object* v_a_3715_; uint32_t v___x_3716_; uint32_t v___x_3717_; uint64_t v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v_a_3715_ = lean_ctor_get(v___x_3714_, 0);
lean_inc(v_a_3715_);
lean_dec_ref_known(v___x_3714_, 1);
v___x_3716_ = 203;
v___x_3717_ = lasm_js_value_handle(v_o_3710_);
v___x_3718_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
v___x_3719_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3720_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3720_, 0, v_o_3710_);
lean_ctor_set(v___x_3720_, 1, v___x_3719_);
v___x_3721_ = lean_unsigned_to_nat(2u);
v___x_3722_ = lean_mk_empty_array_with_capacity(v___x_3721_);
v___x_3723_ = lean_array_push(v___x_3722_, v_k_3713_);
v___x_3724_ = lean_array_push(v___x_3723_, v___x_3720_);
v___x_3725_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3724_);
v___x_3726_ = lasm_js_call(v___x_3716_, v___x_3717_, v___x_3718_, v_a_3715_, v___x_3725_);
lean_dec_ref_known(v___x_3725_, 1);
lean_dec(v_a_3715_);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; lean_object* v___x_3728_; 
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
lean_inc(v_a_3727_);
lean_dec_ref_known(v___x_3726_, 1);
v___x_3728_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_a_3727_);
lean_dec(v_a_3727_);
return v___x_3728_;
}
else
{
lean_object* v_a_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3736_; 
v_a_3729_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3736_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3731_ = v___x_3726_;
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_a_3729_);
lean_dec(v___x_3726_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v___x_3734_; 
if (v_isShared_3732_ == 0)
{
v___x_3734_ = v___x_3731_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v_a_3729_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
return v___x_3734_;
}
}
}
}
else
{
lean_object* v_a_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3744_; 
lean_dec_ref_known(v_k_3713_, 1);
lean_dec(v_o_3710_);
v_a_3737_ = lean_ctor_get(v___x_3714_, 0);
v_isSharedCheck_3744_ = !lean_is_exclusive(v___x_3714_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3739_ = v___x_3714_;
v_isShared_3740_ = v_isSharedCheck_3744_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_a_3737_);
lean_dec(v___x_3714_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3744_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v___x_3742_; 
if (v_isShared_3740_ == 0)
{
v___x_3742_ = v___x_3739_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v_a_3737_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0___boxed(lean_object* v_o_3745_, lean_object* v_key_3746_, lean_object* v_a_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_o_3745_, v_key_3746_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm(lean_object* v_self_3750_){
_start:
{
lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3752_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_algorithm___closed__0));
v___x_3753_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_self_3750_, v___x_3752_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm___boxed(lean_object* v_self_3754_, lean_object* v_a_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l_Lasm_JS_Web_CryptoKey_algorithm(v_self_3754_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages(lean_object* v_self_3758_){
_start:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; 
v___x_3760_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_usages___closed__0));
v___x_3761_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_self_3758_, v___x_3760_);
return v___x_3761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages___boxed(lean_object* v_self_3762_, lean_object* v_a_3763_){
_start:
{
lean_object* v_res_3764_; 
v_res_3764_ = l_Lasm_JS_Web_CryptoKey_usages(v_self_3762_);
return v_res_3764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0(lean_object* v_x_3765_){
_start:
{
lean_object* v_val_3768_; 
if (lean_obj_tag(v_x_3765_) == 0)
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3778_; 
v_a_3770_ = lean_ctor_get(v_x_3765_, 0);
v_isSharedCheck_3778_ = !lean_is_exclusive(v_x_3765_);
if (v_isSharedCheck_3778_ == 0)
{
v___x_3772_ = v_x_3765_;
v_isShared_3773_ = v_isSharedCheck_3778_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v_x_3765_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3778_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3775_; 
if (v_isShared_3773_ == 0)
{
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3777_; 
v_reuseFailAlloc_3777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3777_, 0, v_a_3770_);
v___x_3775_ = v_reuseFailAlloc_3777_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; 
v___x_3776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3775_);
return v___x_3776_;
}
}
}
else
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3792_; 
v_a_3779_ = lean_ctor_get(v_x_3765_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v_x_3765_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3781_ = v_x_3765_;
v_isShared_3782_ = v_isSharedCheck_3792_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v_x_3765_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3792_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3783_; 
v___x_3783_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_3779_);
if (lean_obj_tag(v___x_3783_) == 0)
{
lean_object* v_a_3784_; lean_object* v___x_3786_; 
v_a_3784_ = lean_ctor_get(v___x_3783_, 0);
lean_inc(v_a_3784_);
lean_dec_ref_known(v___x_3783_, 1);
if (v_isShared_3782_ == 0)
{
lean_ctor_set(v___x_3781_, 0, v_a_3784_);
v___x_3786_ = v___x_3781_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3784_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
v_val_3768_ = v___x_3786_;
goto v___jp_3767_;
}
}
else
{
lean_object* v_a_3788_; lean_object* v___x_3790_; 
v_a_3788_ = lean_ctor_get(v___x_3783_, 0);
lean_inc(v_a_3788_);
lean_dec_ref_known(v___x_3783_, 1);
if (v_isShared_3782_ == 0)
{
lean_ctor_set_tag(v___x_3781_, 0);
lean_ctor_set(v___x_3781_, 0, v_a_3788_);
v___x_3790_ = v___x_3781_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3788_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
v_val_3768_ = v___x_3790_;
goto v___jp_3767_;
}
}
}
}
v___jp_3767_:
{
lean_object* v___x_3769_; 
v___x_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3769_, 0, v_val_3768_);
return v___x_3769_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0___boxed(lean_object* v_x_3793_, lean_object* v___y_3794_){
_start:
{
lean_object* v_res_3795_; 
v_res_3795_ = l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0(v_x_3793_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2(lean_object* v___f_3796_, lean_object* v_x_3797_){
_start:
{
if (lean_obj_tag(v_x_3797_) == 0)
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3807_; 
lean_dec_ref(v___f_3796_);
v_a_3799_ = lean_ctor_get(v_x_3797_, 0);
v_isSharedCheck_3807_ = !lean_is_exclusive(v_x_3797_);
if (v_isSharedCheck_3807_ == 0)
{
v___x_3801_ = v_x_3797_;
v_isShared_3802_ = v_isSharedCheck_3807_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v_x_3797_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3807_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3804_; 
if (v_isShared_3802_ == 0)
{
v___x_3804_ = v___x_3801_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v_a_3799_);
v___x_3804_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
lean_object* v___x_3805_; 
v___x_3805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3804_);
return v___x_3805_;
}
}
}
else
{
lean_object* v_a_3808_; lean_object* v___x_3809_; 
v_a_3808_ = lean_ctor_get(v_x_3797_, 0);
lean_inc(v_a_3808_);
lean_dec_ref_known(v_x_3797_, 1);
v___x_3809_ = lean_apply_2(v___f_3796_, v_a_3808_, lean_box(0));
return v___x_3809_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed(lean_object* v___f_3810_, lean_object* v_x_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2(v___f_3810_, v_x_3811_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7(lean_object* v___f_3814_, lean_object* v_a_3815_, uint32_t v_op_3816_, uint64_t v_flags_3817_, lean_object* v_payload_3818_, lean_object* v_x_3819_){
_start:
{
if (lean_obj_tag(v_x_3819_) == 0)
{
lean_object* v___x_3821_; 
lean_dec_ref(v___f_3814_);
v___x_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3821_, 0, v_x_3819_);
return v___x_3821_;
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3842_; 
v_a_3822_ = lean_ctor_get(v_x_3819_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v_x_3819_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3824_ = v_x_3819_;
v_isShared_3825_ = v_isSharedCheck_3842_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v_x_3819_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3842_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
uint32_t v___x_3826_; lean_object* v___x_3827_; uint8_t v___x_3828_; lean_object* v_val_3830_; lean_object* v___x_3833_; 
v___x_3826_ = 0;
v___x_3827_ = lean_unsigned_to_nat(0u);
v___x_3828_ = 0;
v___x_3833_ = lasm_js_call_into(v_a_3815_, v_op_3816_, v___x_3826_, v_flags_3817_, v_a_3822_, v_payload_3818_);
lean_dec(v_a_3822_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3836_; 
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3834_);
lean_dec_ref_known(v___x_3833_, 1);
if (v_isShared_3825_ == 0)
{
lean_ctor_set(v___x_3824_, 0, v_a_3834_);
v___x_3836_ = v___x_3824_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v_a_3834_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
v_val_3830_ = v___x_3836_;
goto v___jp_3829_;
}
}
else
{
lean_object* v_a_3838_; lean_object* v___x_3840_; 
v_a_3838_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3838_);
lean_dec_ref_known(v___x_3833_, 1);
if (v_isShared_3825_ == 0)
{
lean_ctor_set_tag(v___x_3824_, 0);
lean_ctor_set(v___x_3824_, 0, v_a_3838_);
v___x_3840_ = v___x_3824_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_a_3838_);
v___x_3840_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
v_val_3830_ = v___x_3840_;
goto v___jp_3829_;
}
}
v___jp_3829_:
{
lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3831_, 0, v_val_3830_);
v___x_3832_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3827_, v___x_3828_, v___x_3831_, v___f_3814_);
return v___x_3832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed(lean_object* v___f_3843_, lean_object* v_a_3844_, lean_object* v_op_3845_, lean_object* v_flags_3846_, lean_object* v_payload_3847_, lean_object* v_x_3848_, lean_object* v___y_3849_){
_start:
{
uint32_t v_op_boxed_3850_; uint64_t v_flags_boxed_3851_; lean_object* v_res_3852_; 
v_op_boxed_3850_ = lean_unbox_uint32(v_op_3845_);
lean_dec(v_op_3845_);
v_flags_boxed_3851_ = lean_unbox_uint64(v_flags_3846_);
lean_dec_ref(v_flags_3846_);
v_res_3852_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7(v___f_3843_, v_a_3844_, v_op_boxed_3850_, v_flags_boxed_3851_, v_payload_3847_, v_x_3848_);
lean_dec(v_payload_3847_);
lean_dec(v_a_3844_);
return v_res_3852_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5(lean_object* v___x_3853_, uint8_t v___x_3854_, lean_object* v___f_3855_, lean_object* v_a_3856_, uint32_t v_op_3857_, uint64_t v_flags_3858_, lean_object* v_payload_3859_, lean_object* v_x_3860_){
_start:
{
lean_object* v_val_3863_; 
if (lean_obj_tag(v_x_3860_) == 0)
{
lean_object* v___x_3866_; 
lean_dec_ref(v___f_3855_);
lean_dec(v___x_3853_);
v___x_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3866_, 0, v_x_3860_);
return v___x_3866_;
}
else
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3881_; 
v_a_3867_ = lean_ctor_get(v_x_3860_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v_x_3860_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3869_ = v_x_3860_;
v_isShared_3870_ = v_isSharedCheck_3881_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v_x_3860_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3881_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
uint32_t v___x_3871_; lean_object* v___x_3872_; 
v___x_3871_ = 0;
v___x_3872_ = lasm_js_call_into(v_a_3856_, v_op_3857_, v___x_3871_, v_flags_3858_, v_a_3867_, v_payload_3859_);
lean_dec(v_a_3867_);
if (lean_obj_tag(v___x_3872_) == 0)
{
lean_object* v_a_3873_; lean_object* v___x_3875_; 
v_a_3873_ = lean_ctor_get(v___x_3872_, 0);
lean_inc(v_a_3873_);
lean_dec_ref_known(v___x_3872_, 1);
if (v_isShared_3870_ == 0)
{
lean_ctor_set(v___x_3869_, 0, v_a_3873_);
v___x_3875_ = v___x_3869_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v_a_3873_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
v_val_3863_ = v___x_3875_;
goto v___jp_3862_;
}
}
else
{
lean_object* v_a_3877_; lean_object* v___x_3879_; 
v_a_3877_ = lean_ctor_get(v___x_3872_, 0);
lean_inc(v_a_3877_);
lean_dec_ref_known(v___x_3872_, 1);
if (v_isShared_3870_ == 0)
{
lean_ctor_set_tag(v___x_3869_, 0);
lean_ctor_set(v___x_3869_, 0, v_a_3877_);
v___x_3879_ = v___x_3869_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_a_3877_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
v_val_3863_ = v___x_3879_;
goto v___jp_3862_;
}
}
}
}
v___jp_3862_:
{
lean_object* v___x_3864_; lean_object* v___x_3865_; 
v___x_3864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3864_, 0, v_val_3863_);
v___x_3865_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3853_, v___x_3854_, v___x_3864_, v___f_3855_);
return v___x_3865_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed(lean_object* v___x_3882_, lean_object* v___x_3883_, lean_object* v___f_3884_, lean_object* v_a_3885_, lean_object* v_op_3886_, lean_object* v_flags_3887_, lean_object* v_payload_3888_, lean_object* v_x_3889_, lean_object* v___y_3890_){
_start:
{
uint8_t v___x_1154__boxed_3891_; uint32_t v_op_boxed_3892_; uint64_t v_flags_boxed_3893_; lean_object* v_res_3894_; 
v___x_1154__boxed_3891_ = lean_unbox(v___x_3883_);
v_op_boxed_3892_ = lean_unbox_uint32(v_op_3886_);
lean_dec(v_op_3886_);
v_flags_boxed_3893_ = lean_unbox_uint64(v_flags_3887_);
lean_dec_ref(v_flags_3887_);
v_res_3894_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5(v___x_3882_, v___x_1154__boxed_3891_, v___f_3884_, v_a_3885_, v_op_boxed_3892_, v_flags_boxed_3893_, v_payload_3888_, v_x_3889_);
lean_dec(v_payload_3888_);
lean_dec(v_a_3885_);
return v_res_3894_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3(lean_object* v_a_3895_, lean_object* v_x_3896_){
_start:
{
if (lean_obj_tag(v_x_3896_) == 0)
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3906_; 
v_a_3898_ = lean_ctor_get(v_x_3896_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v_x_3896_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3900_ = v_x_3896_;
v_isShared_3901_ = v_isSharedCheck_3906_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v_x_3896_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3906_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
lean_object* v___x_3904_; 
v___x_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3903_);
return v___x_3904_;
}
}
}
else
{
lean_object* v___x_3907_; 
lean_dec_ref_known(v_x_3896_, 1);
v___x_3907_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3895_);
return v___x_3907_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed(lean_object* v_a_3908_, lean_object* v_x_3909_, lean_object* v___y_3910_){
_start:
{
lean_object* v_res_3911_; 
v_res_3911_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3(v_a_3908_, v_x_3909_);
lean_dec(v_a_3908_);
return v_res_3911_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_3912_, uint32_t v_op_3913_, uint64_t v_flags_3914_, lean_object* v_payload_3915_, lean_object* v___f_3916_, lean_object* v___f_3917_, lean_object* v___f_3918_, lean_object* v_x_3919_){
_start:
{
if (lean_obj_tag(v_x_3919_) == 0)
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3929_; 
lean_dec_ref(v___f_3918_);
lean_dec_ref(v___f_3917_);
lean_dec_ref(v___f_3916_);
lean_dec(v_payload_3915_);
v_a_3921_ = lean_ctor_get(v_x_3919_, 0);
v_isSharedCheck_3929_ = !lean_is_exclusive(v_x_3919_);
if (v_isSharedCheck_3929_ == 0)
{
v___x_3923_ = v_x_3919_;
v_isShared_3924_ = v_isSharedCheck_3929_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v_x_3919_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3929_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3926_; 
if (v_isShared_3924_ == 0)
{
v___x_3926_ = v___x_3923_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3928_; 
v_reuseFailAlloc_3928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3928_, 0, v_a_3921_);
v___x_3926_ = v_reuseFailAlloc_3928_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
lean_object* v___x_3927_; 
v___x_3927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3927_, 0, v___x_3926_);
return v___x_3927_;
}
}
}
else
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3976_; 
v_a_3930_ = lean_ctor_get(v_x_3919_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v_x_3919_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3932_ = v_x_3919_;
v_isShared_3933_ = v_isSharedCheck_3976_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v_x_3919_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3976_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3934_; lean_object* v___x_3935_; uint8_t v___x_3936_; 
v___x_3934_ = lean_string_utf8_byte_size(v_failurePrefix_3912_);
v___x_3935_ = lean_unsigned_to_nat(0u);
v___x_3936_ = lean_nat_dec_eq(v___x_3934_, v___x_3935_);
if (v___x_3936_ == 0)
{
lean_object* v___f_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___f_3941_; lean_object* v_val_3943_; lean_object* v___x_3948_; 
lean_dec_ref(v___f_3918_);
lean_inc(v_a_3930_);
v___f_3937_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3937_, 0, v_a_3930_);
v___x_3938_ = lean_box(v___x_3936_);
v___x_3939_ = lean_box_uint32(v_op_3913_);
v___x_3940_ = lean_box_uint64(v_flags_3914_);
lean_inc(v_payload_3915_);
v___f_3941_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3941_, 0, v___x_3935_);
lean_closure_set(v___f_3941_, 1, v___x_3938_);
lean_closure_set(v___f_3941_, 2, v___f_3937_);
lean_closure_set(v___f_3941_, 3, v_a_3930_);
lean_closure_set(v___f_3941_, 4, v___x_3939_);
lean_closure_set(v___f_3941_, 5, v___x_3940_);
lean_closure_set(v___f_3941_, 6, v_payload_3915_);
v___x_3948_ = l_Lasm_JS_Wire_encodeIO(v_payload_3915_);
lean_dec(v_payload_3915_);
if (lean_obj_tag(v___x_3948_) == 0)
{
lean_object* v_a_3949_; lean_object* v___x_3951_; 
v_a_3949_ = lean_ctor_get(v___x_3948_, 0);
lean_inc(v_a_3949_);
lean_dec_ref_known(v___x_3948_, 1);
if (v_isShared_3933_ == 0)
{
lean_ctor_set(v___x_3932_, 0, v_a_3949_);
v___x_3951_ = v___x_3932_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v_a_3949_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
v_val_3943_ = v___x_3951_;
goto v___jp_3942_;
}
}
else
{
lean_object* v_a_3953_; lean_object* v___x_3955_; 
v_a_3953_ = lean_ctor_get(v___x_3948_, 0);
lean_inc(v_a_3953_);
lean_dec_ref_known(v___x_3948_, 1);
if (v_isShared_3933_ == 0)
{
lean_ctor_set_tag(v___x_3932_, 0);
lean_ctor_set(v___x_3932_, 0, v_a_3953_);
v___x_3955_ = v___x_3932_;
goto v_reusejp_3954_;
}
else
{
lean_object* v_reuseFailAlloc_3956_; 
v_reuseFailAlloc_3956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3956_, 0, v_a_3953_);
v___x_3955_ = v_reuseFailAlloc_3956_;
goto v_reusejp_3954_;
}
v_reusejp_3954_:
{
v_val_3943_ = v___x_3955_;
goto v___jp_3942_;
}
}
v___jp_3942_:
{
lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; 
v___x_3944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3944_, 0, v_val_3943_);
v___x_3945_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3935_, v___x_3936_, v___x_3944_, v___f_3941_);
v___x_3946_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3935_, v___x_3936_, v___x_3945_, v___f_3916_);
v___x_3947_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3935_, v___x_3936_, v___x_3946_, v___f_3917_);
return v___x_3947_;
}
}
else
{
lean_object* v___f_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___f_3960_; uint8_t v___x_3961_; lean_object* v_val_3963_; lean_object* v___x_3967_; 
lean_dec_ref(v___f_3917_);
lean_dec_ref(v___f_3916_);
lean_inc(v_a_3930_);
v___f_3957_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3957_, 0, v_a_3930_);
v___x_3958_ = lean_box_uint32(v_op_3913_);
v___x_3959_ = lean_box_uint64(v_flags_3914_);
lean_inc(v_payload_3915_);
v___f_3960_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3960_, 0, v___f_3957_);
lean_closure_set(v___f_3960_, 1, v_a_3930_);
lean_closure_set(v___f_3960_, 2, v___x_3958_);
lean_closure_set(v___f_3960_, 3, v___x_3959_);
lean_closure_set(v___f_3960_, 4, v_payload_3915_);
v___x_3961_ = 0;
v___x_3967_ = l_Lasm_JS_Wire_encodeIO(v_payload_3915_);
lean_dec(v_payload_3915_);
if (lean_obj_tag(v___x_3967_) == 0)
{
lean_object* v_a_3968_; lean_object* v___x_3970_; 
v_a_3968_ = lean_ctor_get(v___x_3967_, 0);
lean_inc(v_a_3968_);
lean_dec_ref_known(v___x_3967_, 1);
if (v_isShared_3933_ == 0)
{
lean_ctor_set(v___x_3932_, 0, v_a_3968_);
v___x_3970_ = v___x_3932_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3968_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
v_val_3963_ = v___x_3970_;
goto v___jp_3962_;
}
}
else
{
lean_object* v_a_3972_; lean_object* v___x_3974_; 
v_a_3972_ = lean_ctor_get(v___x_3967_, 0);
lean_inc(v_a_3972_);
lean_dec_ref_known(v___x_3967_, 1);
if (v_isShared_3933_ == 0)
{
lean_ctor_set_tag(v___x_3932_, 0);
lean_ctor_set(v___x_3932_, 0, v_a_3972_);
v___x_3974_ = v___x_3932_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_a_3972_);
v___x_3974_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
v_val_3963_ = v___x_3974_;
goto v___jp_3962_;
}
}
v___jp_3962_:
{
lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v___x_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3964_, 0, v_val_3963_);
v___x_3965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3935_, v___x_3961_, v___x_3964_, v___f_3960_);
v___x_3966_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3935_, v___x_3961_, v___x_3965_, v___f_3918_);
return v___x_3966_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_3977_, lean_object* v_op_3978_, lean_object* v_flags_3979_, lean_object* v_payload_3980_, lean_object* v___f_3981_, lean_object* v___f_3982_, lean_object* v___f_3983_, lean_object* v_x_3984_, lean_object* v___y_3985_){
_start:
{
uint32_t v_op_boxed_3986_; uint64_t v_flags_boxed_3987_; lean_object* v_res_3988_; 
v_op_boxed_3986_ = lean_unbox_uint32(v_op_3978_);
lean_dec(v_op_3978_);
v_flags_boxed_3987_ = lean_unbox_uint64(v_flags_3979_);
lean_dec_ref(v_flags_3979_);
v_res_3988_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6(v_failurePrefix_3977_, v_op_boxed_3986_, v_flags_boxed_3987_, v_payload_3980_, v___f_3981_, v___f_3982_, v___f_3983_, v_x_3984_);
lean_dec_ref(v_failurePrefix_3977_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_3989_, lean_object* v_x_3990_){
_start:
{
if (lean_obj_tag(v_x_3990_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4003_; 
v_a_3992_ = lean_ctor_get(v_x_3990_, 0);
v_isSharedCheck_4003_ = !lean_is_exclusive(v_x_3990_);
if (v_isSharedCheck_4003_ == 0)
{
v___x_3994_ = v_x_3990_;
v_isShared_3995_ = v_isSharedCheck_4003_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v_x_3990_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4003_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_4000_; 
v___x_3996_ = lean_io_error_to_string(v_a_3992_);
v___x_3997_ = lean_string_append(v_failurePrefix_3989_, v___x_3996_);
lean_dec_ref(v___x_3996_);
v___x_3998_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3997_);
if (v_isShared_3995_ == 0)
{
lean_ctor_set(v___x_3994_, 0, v___x_3998_);
v___x_4000_ = v___x_3994_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v___x_3998_);
v___x_4000_ = v_reuseFailAlloc_4002_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
lean_object* v___x_4001_; 
v___x_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4001_, 0, v___x_4000_);
return v___x_4001_;
}
}
}
else
{
lean_object* v___x_4004_; 
lean_dec_ref(v_failurePrefix_3989_);
v___x_4004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4004_, 0, v_x_3990_);
return v___x_4004_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_4005_, lean_object* v_x_4006_, lean_object* v___y_4007_){
_start:
{
lean_object* v_res_4008_; 
v_res_4008_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4(v_failurePrefix_4005_, v_x_4006_);
return v_res_4008_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1(lean_object* v___f_4009_, lean_object* v_bytes_4010_){
_start:
{
lean_object* v___x_4012_; uint8_t v___x_4013_; lean_object* v_val_4015_; lean_object* v___x_4018_; 
v___x_4012_ = lean_unsigned_to_nat(0u);
v___x_4013_ = 0;
v___x_4018_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4010_);
if (lean_obj_tag(v___x_4018_) == 0)
{
lean_object* v_a_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4026_; 
v_a_4019_ = lean_ctor_get(v___x_4018_, 0);
v_isSharedCheck_4026_ = !lean_is_exclusive(v___x_4018_);
if (v_isSharedCheck_4026_ == 0)
{
v___x_4021_ = v___x_4018_;
v_isShared_4022_ = v_isSharedCheck_4026_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_a_4019_);
lean_dec(v___x_4018_);
v___x_4021_ = lean_box(0);
v_isShared_4022_ = v_isSharedCheck_4026_;
goto v_resetjp_4020_;
}
v_resetjp_4020_:
{
lean_object* v___x_4024_; 
if (v_isShared_4022_ == 0)
{
lean_ctor_set_tag(v___x_4021_, 1);
v___x_4024_ = v___x_4021_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4025_; 
v_reuseFailAlloc_4025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4025_, 0, v_a_4019_);
v___x_4024_ = v_reuseFailAlloc_4025_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
v_val_4015_ = v___x_4024_;
goto v___jp_4014_;
}
}
}
else
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4034_; 
v_a_4027_ = lean_ctor_get(v___x_4018_, 0);
v_isSharedCheck_4034_ = !lean_is_exclusive(v___x_4018_);
if (v_isSharedCheck_4034_ == 0)
{
v___x_4029_ = v___x_4018_;
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v___x_4018_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4032_; 
if (v_isShared_4030_ == 0)
{
lean_ctor_set_tag(v___x_4029_, 0);
v___x_4032_ = v___x_4029_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v_a_4027_);
v___x_4032_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
v_val_4015_ = v___x_4032_;
goto v___jp_4014_;
}
}
}
v___jp_4014_:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4016_, 0, v_val_4015_);
v___x_4017_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4012_, v___x_4013_, v___x_4016_, v___f_4009_);
return v___x_4017_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed(lean_object* v___f_4035_, lean_object* v_bytes_4036_, lean_object* v___y_4037_){
_start:
{
lean_object* v_res_4038_; 
v_res_4038_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1(v___f_4035_, v_bytes_4036_);
lean_dec_ref(v_bytes_4036_);
return v_res_4038_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8(lean_object* v___f_4039_, lean_object* v_x_4040_){
_start:
{
if (lean_obj_tag(v_x_4040_) == 0)
{
lean_object* v_a_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4050_; 
lean_dec_ref(v___f_4039_);
v_a_4042_ = lean_ctor_get(v_x_4040_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v_x_4040_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_4044_ = v_x_4040_;
v_isShared_4045_ = v_isSharedCheck_4050_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_a_4042_);
lean_dec(v_x_4040_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4050_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_4045_ == 0)
{
v___x_4047_ = v___x_4044_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_a_4042_);
v___x_4047_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
lean_object* v___x_4048_; 
v___x_4048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4047_);
return v___x_4048_;
}
}
}
else
{
lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4062_; 
v_isSharedCheck_4062_ = !lean_is_exclusive(v_x_4040_);
if (v_isSharedCheck_4062_ == 0)
{
lean_object* v_unused_4063_; 
v_unused_4063_ = lean_ctor_get(v_x_4040_, 0);
lean_dec(v_unused_4063_);
v___x_4052_ = v_x_4040_;
v_isShared_4053_ = v_isSharedCheck_4062_;
goto v_resetjp_4051_;
}
else
{
lean_dec(v_x_4040_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4062_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4054_; uint8_t v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4058_; 
v___x_4054_ = lean_unsigned_to_nat(0u);
v___x_4055_ = 0;
v___x_4056_ = lean_io_promise_new();
if (v_isShared_4053_ == 0)
{
lean_ctor_set(v___x_4052_, 0, v___x_4056_);
v___x_4058_ = v___x_4052_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v___x_4056_);
v___x_4058_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
lean_object* v___x_4059_; lean_object* v___x_4060_; 
v___x_4059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4058_);
v___x_4060_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4054_, v___x_4055_, v___x_4059_, v___f_4039_);
return v___x_4060_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed(lean_object* v___f_4064_, lean_object* v_x_4065_, lean_object* v___y_4066_){
_start:
{
lean_object* v_res_4067_; 
v_res_4067_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8(v___f_4064_, v_x_4065_);
return v_res_4067_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0(lean_object* v_context_4068_, lean_object* v_x_4069_){
_start:
{
lean_object* v_val_4072_; 
if (lean_obj_tag(v_x_4069_) == 0)
{
lean_object* v_a_4074_; lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4082_; 
v_a_4074_ = lean_ctor_get(v_x_4069_, 0);
v_isSharedCheck_4082_ = !lean_is_exclusive(v_x_4069_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4076_ = v_x_4069_;
v_isShared_4077_ = v_isSharedCheck_4082_;
goto v_resetjp_4075_;
}
else
{
lean_inc(v_a_4074_);
lean_dec(v_x_4069_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4082_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
lean_object* v___x_4079_; 
if (v_isShared_4077_ == 0)
{
v___x_4079_ = v___x_4076_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v_a_4074_);
v___x_4079_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
lean_object* v___x_4080_; 
v___x_4080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4080_, 0, v___x_4079_);
return v___x_4080_;
}
}
}
else
{
lean_object* v_a_4083_; lean_object* v___x_4085_; uint8_t v_isShared_4086_; uint8_t v_isSharedCheck_4096_; 
v_a_4083_ = lean_ctor_get(v_x_4069_, 0);
v_isSharedCheck_4096_ = !lean_is_exclusive(v_x_4069_);
if (v_isSharedCheck_4096_ == 0)
{
v___x_4085_ = v_x_4069_;
v_isShared_4086_ = v_isSharedCheck_4096_;
goto v_resetjp_4084_;
}
else
{
lean_inc(v_a_4083_);
lean_dec(v_x_4069_);
v___x_4085_ = lean_box(0);
v_isShared_4086_ = v_isSharedCheck_4096_;
goto v_resetjp_4084_;
}
v_resetjp_4084_:
{
lean_object* v___x_4087_; 
v___x_4087_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_4068_, v_a_4083_);
if (lean_obj_tag(v___x_4087_) == 0)
{
lean_object* v_a_4088_; lean_object* v___x_4090_; 
v_a_4088_ = lean_ctor_get(v___x_4087_, 0);
lean_inc(v_a_4088_);
lean_dec_ref_known(v___x_4087_, 1);
if (v_isShared_4086_ == 0)
{
lean_ctor_set(v___x_4085_, 0, v_a_4088_);
v___x_4090_ = v___x_4085_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v_a_4088_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
v_val_4072_ = v___x_4090_;
goto v___jp_4071_;
}
}
else
{
lean_object* v_a_4092_; lean_object* v___x_4094_; 
v_a_4092_ = lean_ctor_get(v___x_4087_, 0);
lean_inc(v_a_4092_);
lean_dec_ref_known(v___x_4087_, 1);
if (v_isShared_4086_ == 0)
{
lean_ctor_set_tag(v___x_4085_, 0);
lean_ctor_set(v___x_4085_, 0, v_a_4092_);
v___x_4094_ = v___x_4085_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_a_4092_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
v_val_4072_ = v___x_4094_;
goto v___jp_4071_;
}
}
}
}
v___jp_4071_:
{
lean_object* v___x_4073_; 
v___x_4073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4073_, 0, v_val_4072_);
return v___x_4073_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4097_, lean_object* v_x_4098_, lean_object* v___y_4099_){
_start:
{
lean_object* v_res_4100_; 
v_res_4100_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0(v_context_4097_, v_x_4098_);
lean_dec_ref(v_context_4097_);
return v_res_4100_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(lean_object* v_context_4101_, uint32_t v_op_4102_, uint64_t v_flags_4103_, lean_object* v_payload_4104_, lean_object* v_failurePrefix_4105_){
_start:
{
lean_object* v___f_4107_; lean_object* v___f_4108_; lean_object* v___f_4109_; lean_object* v___f_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___f_4113_; lean_object* v___f_4114_; lean_object* v___x_4115_; uint8_t v___x_4116_; lean_object* v_val_4118_; lean_object* v___x_4121_; 
v___f_4107_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4107_, 0, v_context_4101_);
v___f_4108_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4108_, 0, v___f_4107_);
v___f_4109_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4109_, 0, v___f_4108_);
lean_inc_ref(v_failurePrefix_4105_);
v___f_4110_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4110_, 0, v_failurePrefix_4105_);
v___x_4111_ = lean_box_uint32(v_op_4102_);
v___x_4112_ = lean_box_uint64(v_flags_4103_);
lean_inc_ref(v___f_4109_);
v___f_4113_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4113_, 0, v_failurePrefix_4105_);
lean_closure_set(v___f_4113_, 1, v___x_4111_);
lean_closure_set(v___f_4113_, 2, v___x_4112_);
lean_closure_set(v___f_4113_, 3, v_payload_4104_);
lean_closure_set(v___f_4113_, 4, v___f_4110_);
lean_closure_set(v___f_4113_, 5, v___f_4109_);
lean_closure_set(v___f_4113_, 6, v___f_4109_);
v___f_4114_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4114_, 0, v___f_4113_);
v___x_4115_ = lean_unsigned_to_nat(0u);
v___x_4116_ = 0;
v___x_4121_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4121_) == 0)
{
lean_object* v_a_4122_; lean_object* v___x_4124_; uint8_t v_isShared_4125_; uint8_t v_isSharedCheck_4129_; 
v_a_4122_ = lean_ctor_get(v___x_4121_, 0);
v_isSharedCheck_4129_ = !lean_is_exclusive(v___x_4121_);
if (v_isSharedCheck_4129_ == 0)
{
v___x_4124_ = v___x_4121_;
v_isShared_4125_ = v_isSharedCheck_4129_;
goto v_resetjp_4123_;
}
else
{
lean_inc(v_a_4122_);
lean_dec(v___x_4121_);
v___x_4124_ = lean_box(0);
v_isShared_4125_ = v_isSharedCheck_4129_;
goto v_resetjp_4123_;
}
v_resetjp_4123_:
{
lean_object* v___x_4127_; 
if (v_isShared_4125_ == 0)
{
lean_ctor_set_tag(v___x_4124_, 1);
v___x_4127_ = v___x_4124_;
goto v_reusejp_4126_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v_a_4122_);
v___x_4127_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4126_;
}
v_reusejp_4126_:
{
v_val_4118_ = v___x_4127_;
goto v___jp_4117_;
}
}
}
else
{
lean_object* v_a_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4137_; 
v_a_4130_ = lean_ctor_get(v___x_4121_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4121_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4132_ = v___x_4121_;
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_a_4130_);
lean_dec(v___x_4121_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4135_; 
if (v_isShared_4133_ == 0)
{
lean_ctor_set_tag(v___x_4132_, 0);
v___x_4135_ = v___x_4132_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_a_4130_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
v_val_4118_ = v___x_4135_;
goto v___jp_4117_;
}
}
}
v___jp_4117_:
{
lean_object* v___x_4119_; lean_object* v___x_4120_; 
v___x_4119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4119_, 0, v_val_4118_);
v___x_4120_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4115_, v___x_4116_, v___x_4119_, v___f_4114_);
return v___x_4120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___boxed(lean_object* v_context_4138_, lean_object* v_op_4139_, lean_object* v_flags_4140_, lean_object* v_payload_4141_, lean_object* v_failurePrefix_4142_, lean_object* v_a_4143_){
_start:
{
uint32_t v_op_boxed_4144_; uint64_t v_flags_boxed_4145_; lean_object* v_res_4146_; 
v_op_boxed_4144_ = lean_unbox_uint32(v_op_4139_);
lean_dec(v_op_4139_);
v_flags_boxed_4145_ = lean_unbox_uint64(v_flags_4140_);
lean_dec_ref(v_flags_4140_);
v_res_4146_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(v_context_4138_, v_op_boxed_4144_, v_flags_boxed_4145_, v_payload_4141_, v_failurePrefix_4142_);
return v_res_4146_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_4147_; uint64_t v___x_4148_; 
v___x_4147_ = 1;
v___x_4148_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_4147_);
return v___x_4148_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(uint8_t v_await_4149_, uint64_t v_extra_4150_){
_start:
{
uint64_t v___x_4151_; uint64_t v___y_4153_; 
v___x_4151_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0);
if (v_await_4149_ == 0)
{
uint64_t v___x_4156_; 
v___x_4156_ = 0ULL;
v___y_4153_ = v___x_4156_;
goto v___jp_4152_;
}
else
{
uint64_t v___x_4157_; 
v___x_4157_ = 2ULL;
v___y_4153_ = v___x_4157_;
goto v___jp_4152_;
}
v___jp_4152_:
{
uint64_t v___x_4154_; uint64_t v___x_4155_; 
v___x_4154_ = lean_uint64_lor(v___x_4151_, v___y_4153_);
v___x_4155_ = lean_uint64_lor(v___x_4154_, v_extra_4150_);
return v___x_4155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___boxed(lean_object* v_await_4158_, lean_object* v_extra_4159_){
_start:
{
uint8_t v_await_boxed_4160_; uint64_t v_extra_boxed_4161_; uint64_t v_res_4162_; lean_object* v_r_4163_; 
v_await_boxed_4160_ = lean_unbox(v_await_4158_);
v_extra_boxed_4161_ = lean_unbox_uint64(v_extra_4159_);
lean_dec_ref(v_extra_4159_);
v_res_4162_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(v_await_boxed_4160_, v_extra_boxed_4161_);
v_r_4163_ = lean_box_uint64(v_res_4162_);
return v_r_4163_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4164_; uint8_t v___x_4165_; uint64_t v___x_4166_; 
v___x_4164_ = 8ULL;
v___x_4165_ = 0;
v___x_4166_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(v___x_4165_, v___x_4164_);
return v___x_4166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(lean_object* v_o_4167_, lean_object* v_name_4168_, lean_object* v_args_4169_){
_start:
{
lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; uint32_t v___x_4176_; uint64_t v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; 
v___x_4171_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4172_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4172_, 0, v_o_4167_);
lean_ctor_set(v___x_4172_, 1, v___x_4171_);
lean_inc_ref(v_name_4168_);
v___x_4173_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4173_, 0, v_name_4168_);
v___x_4174_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_4175_ = lean_string_append(v___x_4174_, v_name_4168_);
lean_dec_ref(v_name_4168_);
v___x_4176_ = 205;
v___x_4177_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0);
v___x_4178_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4178_, 0, v_args_4169_);
v___x_4179_ = lean_unsigned_to_nat(3u);
v___x_4180_ = lean_mk_empty_array_with_capacity(v___x_4179_);
v___x_4181_ = lean_array_push(v___x_4180_, v___x_4172_);
v___x_4182_ = lean_array_push(v___x_4181_, v___x_4173_);
v___x_4183_ = lean_array_push(v___x_4182_, v___x_4178_);
v___x_4184_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4184_, 0, v___x_4183_);
v___x_4185_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(v___x_4175_, v___x_4176_, v___x_4177_, v___x_4184_, v___x_4171_);
return v___x_4185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___boxed(lean_object* v_o_4186_, lean_object* v_name_4187_, lean_object* v_args_4188_, lean_object* v___y_4189_){
_start:
{
lean_object* v_res_4190_; 
v_res_4190_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_o_4186_, v_name_4187_, v_args_4188_);
return v_res_4190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt(lean_object* v_self_4192_, lean_object* v_algorithm_4193_, lean_object* v_key_4194_, lean_object* v_data_4195_){
_start:
{
lean_object* v___f_4197_; lean_object* v___x_4198_; lean_object* v___y_4200_; 
v___f_4197_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4198_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0));
if (lean_obj_tag(v_algorithm_4193_) == 0)
{
lean_object* v_value_4214_; 
v_value_4214_ = lean_ctor_get(v_algorithm_4193_, 0);
lean_inc(v_value_4214_);
lean_dec_ref_known(v_algorithm_4193_, 1);
v___y_4200_ = v_value_4214_;
goto v___jp_4199_;
}
else
{
lean_object* v_value_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4222_; 
v_value_4215_ = lean_ctor_get(v_algorithm_4193_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v_algorithm_4193_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4217_ = v_algorithm_4193_;
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_value_4215_);
lean_dec(v_algorithm_4193_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4220_; 
if (v_isShared_4218_ == 0)
{
lean_ctor_set_tag(v___x_4217_, 4);
v___x_4220_ = v___x_4217_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_value_4215_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
v___y_4200_ = v___x_4220_;
goto v___jp_4199_;
}
}
}
v___jp_4199_:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; uint8_t v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; 
v___x_4201_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4202_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4202_, 0, v_key_4194_);
lean_ctor_set(v___x_4202_, 1, v___x_4201_);
v___x_4203_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4203_, 0, v_data_4195_);
v___x_4204_ = lean_unsigned_to_nat(3u);
v___x_4205_ = lean_mk_empty_array_with_capacity(v___x_4204_);
v___x_4206_ = lean_array_push(v___x_4205_, v___y_4200_);
v___x_4207_ = lean_array_push(v___x_4206_, v___x_4202_);
v___x_4208_ = lean_array_push(v___x_4207_, v___x_4203_);
v___x_4209_ = l_Lasm_JS_Web_Support_args(v___x_4208_);
v___x_4210_ = lean_unsigned_to_nat(0u);
v___x_4211_ = 0;
v___x_4212_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4192_, v___x_4198_, v___x_4209_);
v___x_4213_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4210_, v___x_4211_, v___x_4212_, v___f_4197_);
return v___x_4213_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___boxed(lean_object* v_self_4223_, lean_object* v_algorithm_4224_, lean_object* v_key_4225_, lean_object* v_data_4226_, lean_object* v_a_4227_){
_start:
{
lean_object* v_res_4228_; 
v_res_4228_ = l_Lasm_JS_Web_SubtleCrypto_encrypt(v_self_4223_, v_algorithm_4224_, v_key_4225_, v_data_4226_);
return v_res_4228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt(lean_object* v_self_4229_, lean_object* v_algorithm_4230_, lean_object* v_key_4231_, lean_object* v_data_4232_){
_start:
{
lean_object* v___f_4234_; lean_object* v___x_4235_; lean_object* v___y_4237_; 
v___f_4234_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4235_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2));
if (lean_obj_tag(v_algorithm_4230_) == 0)
{
lean_object* v_value_4251_; 
v_value_4251_ = lean_ctor_get(v_algorithm_4230_, 0);
lean_inc(v_value_4251_);
lean_dec_ref_known(v_algorithm_4230_, 1);
v___y_4237_ = v_value_4251_;
goto v___jp_4236_;
}
else
{
lean_object* v_value_4252_; lean_object* v___x_4254_; uint8_t v_isShared_4255_; uint8_t v_isSharedCheck_4259_; 
v_value_4252_ = lean_ctor_get(v_algorithm_4230_, 0);
v_isSharedCheck_4259_ = !lean_is_exclusive(v_algorithm_4230_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4254_ = v_algorithm_4230_;
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
else
{
lean_inc(v_value_4252_);
lean_dec(v_algorithm_4230_);
v___x_4254_ = lean_box(0);
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
v_resetjp_4253_:
{
lean_object* v___x_4257_; 
if (v_isShared_4255_ == 0)
{
lean_ctor_set_tag(v___x_4254_, 4);
v___x_4257_ = v___x_4254_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v_value_4252_);
v___x_4257_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
v___y_4237_ = v___x_4257_;
goto v___jp_4236_;
}
}
}
v___jp_4236_:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; uint8_t v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; 
v___x_4238_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4239_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4239_, 0, v_key_4231_);
lean_ctor_set(v___x_4239_, 1, v___x_4238_);
v___x_4240_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4240_, 0, v_data_4232_);
v___x_4241_ = lean_unsigned_to_nat(3u);
v___x_4242_ = lean_mk_empty_array_with_capacity(v___x_4241_);
v___x_4243_ = lean_array_push(v___x_4242_, v___y_4237_);
v___x_4244_ = lean_array_push(v___x_4243_, v___x_4239_);
v___x_4245_ = lean_array_push(v___x_4244_, v___x_4240_);
v___x_4246_ = l_Lasm_JS_Web_Support_args(v___x_4245_);
v___x_4247_ = lean_unsigned_to_nat(0u);
v___x_4248_ = 0;
v___x_4249_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4229_, v___x_4235_, v___x_4246_);
v___x_4250_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4247_, v___x_4248_, v___x_4249_, v___f_4234_);
return v___x_4250_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt___boxed(lean_object* v_self_4260_, lean_object* v_algorithm_4261_, lean_object* v_key_4262_, lean_object* v_data_4263_, lean_object* v_a_4264_){
_start:
{
lean_object* v_res_4265_; 
v_res_4265_ = l_Lasm_JS_Web_SubtleCrypto_decrypt(v_self_4260_, v_algorithm_4261_, v_key_4262_, v_data_4263_);
return v_res_4265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign(lean_object* v_self_4266_, lean_object* v_algorithm_4267_, lean_object* v_key_4268_, lean_object* v_data_4269_){
_start:
{
lean_object* v___f_4271_; lean_object* v___x_4272_; lean_object* v___y_4274_; 
v___f_4271_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4272_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4));
if (lean_obj_tag(v_algorithm_4267_) == 0)
{
lean_object* v_value_4288_; 
v_value_4288_ = lean_ctor_get(v_algorithm_4267_, 0);
lean_inc(v_value_4288_);
lean_dec_ref_known(v_algorithm_4267_, 1);
v___y_4274_ = v_value_4288_;
goto v___jp_4273_;
}
else
{
lean_object* v_value_4289_; lean_object* v___x_4291_; uint8_t v_isShared_4292_; uint8_t v_isSharedCheck_4296_; 
v_value_4289_ = lean_ctor_get(v_algorithm_4267_, 0);
v_isSharedCheck_4296_ = !lean_is_exclusive(v_algorithm_4267_);
if (v_isSharedCheck_4296_ == 0)
{
v___x_4291_ = v_algorithm_4267_;
v_isShared_4292_ = v_isSharedCheck_4296_;
goto v_resetjp_4290_;
}
else
{
lean_inc(v_value_4289_);
lean_dec(v_algorithm_4267_);
v___x_4291_ = lean_box(0);
v_isShared_4292_ = v_isSharedCheck_4296_;
goto v_resetjp_4290_;
}
v_resetjp_4290_:
{
lean_object* v___x_4294_; 
if (v_isShared_4292_ == 0)
{
lean_ctor_set_tag(v___x_4291_, 4);
v___x_4294_ = v___x_4291_;
goto v_reusejp_4293_;
}
else
{
lean_object* v_reuseFailAlloc_4295_; 
v_reuseFailAlloc_4295_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4295_, 0, v_value_4289_);
v___x_4294_ = v_reuseFailAlloc_4295_;
goto v_reusejp_4293_;
}
v_reusejp_4293_:
{
v___y_4274_ = v___x_4294_;
goto v___jp_4273_;
}
}
}
v___jp_4273_:
{
lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; uint8_t v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4275_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4276_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4276_, 0, v_key_4268_);
lean_ctor_set(v___x_4276_, 1, v___x_4275_);
v___x_4277_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4277_, 0, v_data_4269_);
v___x_4278_ = lean_unsigned_to_nat(3u);
v___x_4279_ = lean_mk_empty_array_with_capacity(v___x_4278_);
v___x_4280_ = lean_array_push(v___x_4279_, v___y_4274_);
v___x_4281_ = lean_array_push(v___x_4280_, v___x_4276_);
v___x_4282_ = lean_array_push(v___x_4281_, v___x_4277_);
v___x_4283_ = l_Lasm_JS_Web_Support_args(v___x_4282_);
v___x_4284_ = lean_unsigned_to_nat(0u);
v___x_4285_ = 0;
v___x_4286_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4266_, v___x_4272_, v___x_4283_);
v___x_4287_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4284_, v___x_4285_, v___x_4286_, v___f_4271_);
return v___x_4287_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign___boxed(lean_object* v_self_4297_, lean_object* v_algorithm_4298_, lean_object* v_key_4299_, lean_object* v_data_4300_, lean_object* v_a_4301_){
_start:
{
lean_object* v_res_4302_; 
v_res_4302_ = l_Lasm_JS_Web_SubtleCrypto_sign(v_self_4297_, v_algorithm_4298_, v_key_4299_, v_data_4300_);
return v_res_4302_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(uint8_t v_await_4303_, uint64_t v_extra_4304_){
_start:
{
uint64_t v___x_4305_; uint64_t v___y_4307_; 
v___x_4305_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_4303_ == 0)
{
uint64_t v___x_4310_; 
v___x_4310_ = 0ULL;
v___y_4307_ = v___x_4310_;
goto v___jp_4306_;
}
else
{
uint64_t v___x_4311_; 
v___x_4311_ = 2ULL;
v___y_4307_ = v___x_4311_;
goto v___jp_4306_;
}
v___jp_4306_:
{
uint64_t v___x_4308_; uint64_t v___x_4309_; 
v___x_4308_ = lean_uint64_lor(v___x_4305_, v___y_4307_);
v___x_4309_ = lean_uint64_lor(v___x_4308_, v_extra_4304_);
return v___x_4309_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___boxed(lean_object* v_await_4312_, lean_object* v_extra_4313_){
_start:
{
uint8_t v_await_boxed_4314_; uint64_t v_extra_boxed_4315_; uint64_t v_res_4316_; lean_object* v_r_4317_; 
v_await_boxed_4314_ = lean_unbox(v_await_4312_);
v_extra_boxed_4315_ = lean_unbox_uint64(v_extra_4313_);
lean_dec_ref(v_extra_4313_);
v_res_4316_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(v_await_boxed_4314_, v_extra_boxed_4315_);
v_r_4317_ = lean_box_uint64(v_res_4316_);
return v_r_4317_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_4318_, uint32_t v_op_4319_, uint64_t v_flags_4320_, lean_object* v_payload_4321_, lean_object* v___f_4322_, lean_object* v___f_4323_, lean_object* v___f_4324_, lean_object* v_x_4325_){
_start:
{
if (lean_obj_tag(v_x_4325_) == 0)
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4335_; 
lean_dec_ref(v___f_4324_);
lean_dec_ref(v___f_4323_);
lean_dec_ref(v___f_4322_);
lean_dec(v_payload_4321_);
v_a_4327_ = lean_ctor_get(v_x_4325_, 0);
v_isSharedCheck_4335_ = !lean_is_exclusive(v_x_4325_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4329_ = v_x_4325_;
v_isShared_4330_ = v_isSharedCheck_4335_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v_x_4325_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4335_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4332_; 
if (v_isShared_4330_ == 0)
{
v___x_4332_ = v___x_4329_;
goto v_reusejp_4331_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v_a_4327_);
v___x_4332_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4331_;
}
v_reusejp_4331_:
{
lean_object* v___x_4333_; 
v___x_4333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4333_, 0, v___x_4332_);
return v___x_4333_;
}
}
}
else
{
lean_object* v_a_4336_; lean_object* v___x_4338_; uint8_t v_isShared_4339_; uint8_t v_isSharedCheck_4382_; 
v_a_4336_ = lean_ctor_get(v_x_4325_, 0);
v_isSharedCheck_4382_ = !lean_is_exclusive(v_x_4325_);
if (v_isSharedCheck_4382_ == 0)
{
v___x_4338_ = v_x_4325_;
v_isShared_4339_ = v_isSharedCheck_4382_;
goto v_resetjp_4337_;
}
else
{
lean_inc(v_a_4336_);
lean_dec(v_x_4325_);
v___x_4338_ = lean_box(0);
v_isShared_4339_ = v_isSharedCheck_4382_;
goto v_resetjp_4337_;
}
v_resetjp_4337_:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; uint8_t v___x_4342_; 
v___x_4340_ = lean_string_utf8_byte_size(v_failurePrefix_4318_);
v___x_4341_ = lean_unsigned_to_nat(0u);
v___x_4342_ = lean_nat_dec_eq(v___x_4340_, v___x_4341_);
if (v___x_4342_ == 0)
{
lean_object* v___f_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___f_4347_; lean_object* v_val_4349_; lean_object* v___x_4354_; 
lean_dec_ref(v___f_4324_);
lean_inc(v_a_4336_);
v___f_4343_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4343_, 0, v_a_4336_);
v___x_4344_ = lean_box(v___x_4342_);
v___x_4345_ = lean_box_uint32(v_op_4319_);
v___x_4346_ = lean_box_uint64(v_flags_4320_);
lean_inc(v_payload_4321_);
v___f_4347_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4347_, 0, v___x_4341_);
lean_closure_set(v___f_4347_, 1, v___x_4344_);
lean_closure_set(v___f_4347_, 2, v___f_4343_);
lean_closure_set(v___f_4347_, 3, v_a_4336_);
lean_closure_set(v___f_4347_, 4, v___x_4345_);
lean_closure_set(v___f_4347_, 5, v___x_4346_);
lean_closure_set(v___f_4347_, 6, v_payload_4321_);
v___x_4354_ = l_Lasm_JS_Wire_encodeIO(v_payload_4321_);
lean_dec(v_payload_4321_);
if (lean_obj_tag(v___x_4354_) == 0)
{
lean_object* v_a_4355_; lean_object* v___x_4357_; 
v_a_4355_ = lean_ctor_get(v___x_4354_, 0);
lean_inc(v_a_4355_);
lean_dec_ref_known(v___x_4354_, 1);
if (v_isShared_4339_ == 0)
{
lean_ctor_set(v___x_4338_, 0, v_a_4355_);
v___x_4357_ = v___x_4338_;
goto v_reusejp_4356_;
}
else
{
lean_object* v_reuseFailAlloc_4358_; 
v_reuseFailAlloc_4358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4358_, 0, v_a_4355_);
v___x_4357_ = v_reuseFailAlloc_4358_;
goto v_reusejp_4356_;
}
v_reusejp_4356_:
{
v_val_4349_ = v___x_4357_;
goto v___jp_4348_;
}
}
else
{
lean_object* v_a_4359_; lean_object* v___x_4361_; 
v_a_4359_ = lean_ctor_get(v___x_4354_, 0);
lean_inc(v_a_4359_);
lean_dec_ref_known(v___x_4354_, 1);
if (v_isShared_4339_ == 0)
{
lean_ctor_set_tag(v___x_4338_, 0);
lean_ctor_set(v___x_4338_, 0, v_a_4359_);
v___x_4361_ = v___x_4338_;
goto v_reusejp_4360_;
}
else
{
lean_object* v_reuseFailAlloc_4362_; 
v_reuseFailAlloc_4362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4362_, 0, v_a_4359_);
v___x_4361_ = v_reuseFailAlloc_4362_;
goto v_reusejp_4360_;
}
v_reusejp_4360_:
{
v_val_4349_ = v___x_4361_;
goto v___jp_4348_;
}
}
v___jp_4348_:
{
lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
v___x_4350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4350_, 0, v_val_4349_);
v___x_4351_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4341_, v___x_4342_, v___x_4350_, v___f_4347_);
v___x_4352_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4341_, v___x_4342_, v___x_4351_, v___f_4322_);
v___x_4353_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4341_, v___x_4342_, v___x_4352_, v___f_4323_);
return v___x_4353_;
}
}
else
{
lean_object* v___f_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___f_4366_; uint8_t v___x_4367_; lean_object* v_val_4369_; lean_object* v___x_4373_; 
lean_dec_ref(v___f_4323_);
lean_dec_ref(v___f_4322_);
lean_inc(v_a_4336_);
v___f_4363_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4363_, 0, v_a_4336_);
v___x_4364_ = lean_box_uint32(v_op_4319_);
v___x_4365_ = lean_box_uint64(v_flags_4320_);
lean_inc(v_payload_4321_);
v___f_4366_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4366_, 0, v___f_4363_);
lean_closure_set(v___f_4366_, 1, v_a_4336_);
lean_closure_set(v___f_4366_, 2, v___x_4364_);
lean_closure_set(v___f_4366_, 3, v___x_4365_);
lean_closure_set(v___f_4366_, 4, v_payload_4321_);
v___x_4367_ = 0;
v___x_4373_ = l_Lasm_JS_Wire_encodeIO(v_payload_4321_);
lean_dec(v_payload_4321_);
if (lean_obj_tag(v___x_4373_) == 0)
{
lean_object* v_a_4374_; lean_object* v___x_4376_; 
v_a_4374_ = lean_ctor_get(v___x_4373_, 0);
lean_inc(v_a_4374_);
lean_dec_ref_known(v___x_4373_, 1);
if (v_isShared_4339_ == 0)
{
lean_ctor_set(v___x_4338_, 0, v_a_4374_);
v___x_4376_ = v___x_4338_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4377_; 
v_reuseFailAlloc_4377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4377_, 0, v_a_4374_);
v___x_4376_ = v_reuseFailAlloc_4377_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
v_val_4369_ = v___x_4376_;
goto v___jp_4368_;
}
}
else
{
lean_object* v_a_4378_; lean_object* v___x_4380_; 
v_a_4378_ = lean_ctor_get(v___x_4373_, 0);
lean_inc(v_a_4378_);
lean_dec_ref_known(v___x_4373_, 1);
if (v_isShared_4339_ == 0)
{
lean_ctor_set_tag(v___x_4338_, 0);
lean_ctor_set(v___x_4338_, 0, v_a_4378_);
v___x_4380_ = v___x_4338_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v_a_4378_);
v___x_4380_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
v_val_4369_ = v___x_4380_;
goto v___jp_4368_;
}
}
v___jp_4368_:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4370_, 0, v_val_4369_);
v___x_4371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4341_, v___x_4367_, v___x_4370_, v___f_4366_);
v___x_4372_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4341_, v___x_4367_, v___x_4371_, v___f_4324_);
return v___x_4372_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_4383_, lean_object* v_op_4384_, lean_object* v_flags_4385_, lean_object* v_payload_4386_, lean_object* v___f_4387_, lean_object* v___f_4388_, lean_object* v___f_4389_, lean_object* v_x_4390_, lean_object* v___y_4391_){
_start:
{
uint32_t v_op_boxed_4392_; uint64_t v_flags_boxed_4393_; lean_object* v_res_4394_; 
v_op_boxed_4392_ = lean_unbox_uint32(v_op_4384_);
lean_dec(v_op_4384_);
v_flags_boxed_4393_ = lean_unbox_uint64(v_flags_4385_);
lean_dec_ref(v_flags_4385_);
v_res_4394_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9(v_failurePrefix_4383_, v_op_boxed_4392_, v_flags_boxed_4393_, v_payload_4386_, v___f_4387_, v___f_4388_, v___f_4389_, v_x_4390_);
lean_dec_ref(v_failurePrefix_4383_);
return v_res_4394_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2(lean_object* v___f_4395_, lean_object* v_x_4396_){
_start:
{
if (lean_obj_tag(v_x_4396_) == 0)
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4406_; 
lean_dec_ref(v___f_4395_);
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
lean_object* v_a_4407_; lean_object* v___x_4408_; 
v_a_4407_ = lean_ctor_get(v_x_4396_, 0);
lean_inc(v_a_4407_);
lean_dec_ref_known(v_x_4396_, 1);
v___x_4408_ = lean_apply_2(v___f_4395_, v_a_4407_, lean_box(0));
return v___x_4408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2___boxed(lean_object* v___f_4409_, lean_object* v_x_4410_, lean_object* v___y_4411_){
_start:
{
lean_object* v_res_4412_; 
v_res_4412_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2(v___f_4409_, v_x_4410_);
return v_res_4412_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1(lean_object* v___f_4413_, lean_object* v_bytes_4414_){
_start:
{
lean_object* v___x_4416_; uint8_t v___x_4417_; lean_object* v_val_4419_; lean_object* v___x_4422_; 
v___x_4416_ = lean_unsigned_to_nat(0u);
v___x_4417_ = 0;
v___x_4422_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4414_);
if (lean_obj_tag(v___x_4422_) == 0)
{
lean_object* v_a_4423_; lean_object* v___x_4425_; uint8_t v_isShared_4426_; uint8_t v_isSharedCheck_4430_; 
v_a_4423_ = lean_ctor_get(v___x_4422_, 0);
v_isSharedCheck_4430_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4430_ == 0)
{
v___x_4425_ = v___x_4422_;
v_isShared_4426_ = v_isSharedCheck_4430_;
goto v_resetjp_4424_;
}
else
{
lean_inc(v_a_4423_);
lean_dec(v___x_4422_);
v___x_4425_ = lean_box(0);
v_isShared_4426_ = v_isSharedCheck_4430_;
goto v_resetjp_4424_;
}
v_resetjp_4424_:
{
lean_object* v___x_4428_; 
if (v_isShared_4426_ == 0)
{
lean_ctor_set_tag(v___x_4425_, 1);
v___x_4428_ = v___x_4425_;
goto v_reusejp_4427_;
}
else
{
lean_object* v_reuseFailAlloc_4429_; 
v_reuseFailAlloc_4429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4429_, 0, v_a_4423_);
v___x_4428_ = v_reuseFailAlloc_4429_;
goto v_reusejp_4427_;
}
v_reusejp_4427_:
{
v_val_4419_ = v___x_4428_;
goto v___jp_4418_;
}
}
}
else
{
lean_object* v_a_4431_; lean_object* v___x_4433_; uint8_t v_isShared_4434_; uint8_t v_isSharedCheck_4438_; 
v_a_4431_ = lean_ctor_get(v___x_4422_, 0);
v_isSharedCheck_4438_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4438_ == 0)
{
v___x_4433_ = v___x_4422_;
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
else
{
lean_inc(v_a_4431_);
lean_dec(v___x_4422_);
v___x_4433_ = lean_box(0);
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
v_resetjp_4432_:
{
lean_object* v___x_4436_; 
if (v_isShared_4434_ == 0)
{
lean_ctor_set_tag(v___x_4433_, 0);
v___x_4436_ = v___x_4433_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v_a_4431_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
v_val_4419_ = v___x_4436_;
goto v___jp_4418_;
}
}
}
v___jp_4418_:
{
lean_object* v___x_4420_; lean_object* v___x_4421_; 
v___x_4420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4420_, 0, v_val_4419_);
v___x_4421_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4416_, v___x_4417_, v___x_4420_, v___f_4413_);
return v___x_4421_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1___boxed(lean_object* v___f_4439_, lean_object* v_bytes_4440_, lean_object* v___y_4441_){
_start:
{
lean_object* v_res_4442_; 
v_res_4442_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1(v___f_4439_, v_bytes_4440_);
lean_dec_ref(v_bytes_4440_);
return v_res_4442_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3(lean_object* v___f_4443_, lean_object* v_x_4444_){
_start:
{
if (lean_obj_tag(v_x_4444_) == 0)
{
lean_object* v_a_4446_; lean_object* v___x_4448_; uint8_t v_isShared_4449_; uint8_t v_isSharedCheck_4454_; 
lean_dec_ref(v___f_4443_);
v_a_4446_ = lean_ctor_get(v_x_4444_, 0);
v_isSharedCheck_4454_ = !lean_is_exclusive(v_x_4444_);
if (v_isSharedCheck_4454_ == 0)
{
v___x_4448_ = v_x_4444_;
v_isShared_4449_ = v_isSharedCheck_4454_;
goto v_resetjp_4447_;
}
else
{
lean_inc(v_a_4446_);
lean_dec(v_x_4444_);
v___x_4448_ = lean_box(0);
v_isShared_4449_ = v_isSharedCheck_4454_;
goto v_resetjp_4447_;
}
v_resetjp_4447_:
{
lean_object* v___x_4451_; 
if (v_isShared_4449_ == 0)
{
v___x_4451_ = v___x_4448_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4453_; 
v_reuseFailAlloc_4453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4453_, 0, v_a_4446_);
v___x_4451_ = v_reuseFailAlloc_4453_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
lean_object* v___x_4452_; 
v___x_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4452_, 0, v___x_4451_);
return v___x_4452_;
}
}
}
else
{
lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4466_; 
v_isSharedCheck_4466_ = !lean_is_exclusive(v_x_4444_);
if (v_isSharedCheck_4466_ == 0)
{
lean_object* v_unused_4467_; 
v_unused_4467_ = lean_ctor_get(v_x_4444_, 0);
lean_dec(v_unused_4467_);
v___x_4456_ = v_x_4444_;
v_isShared_4457_ = v_isSharedCheck_4466_;
goto v_resetjp_4455_;
}
else
{
lean_dec(v_x_4444_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4466_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4458_; uint8_t v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4462_; 
v___x_4458_ = lean_unsigned_to_nat(0u);
v___x_4459_ = 0;
v___x_4460_ = lean_io_promise_new();
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 0, v___x_4460_);
v___x_4462_ = v___x_4456_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v___x_4460_);
v___x_4462_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4463_, 0, v___x_4462_);
v___x_4464_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4458_, v___x_4459_, v___x_4463_, v___f_4443_);
return v___x_4464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3___boxed(lean_object* v___f_4468_, lean_object* v_x_4469_, lean_object* v___y_4470_){
_start:
{
lean_object* v_res_4471_; 
v_res_4471_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3(v___f_4468_, v_x_4469_);
return v_res_4471_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0(lean_object* v_context_4472_, lean_object* v_x_4473_){
_start:
{
lean_object* v_val_4476_; 
if (lean_obj_tag(v_x_4473_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4486_; 
v_a_4478_ = lean_ctor_get(v_x_4473_, 0);
v_isSharedCheck_4486_ = !lean_is_exclusive(v_x_4473_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4480_ = v_x_4473_;
v_isShared_4481_ = v_isSharedCheck_4486_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_a_4478_);
lean_dec(v_x_4473_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4486_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
lean_object* v___x_4483_; 
if (v_isShared_4481_ == 0)
{
v___x_4483_ = v___x_4480_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v_a_4478_);
v___x_4483_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
lean_object* v___x_4484_; 
v___x_4484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4484_, 0, v___x_4483_);
return v___x_4484_;
}
}
}
else
{
lean_object* v_a_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4500_; 
v_a_4487_ = lean_ctor_get(v_x_4473_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v_x_4473_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4489_ = v_x_4473_;
v_isShared_4490_ = v_isSharedCheck_4500_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_a_4487_);
lean_dec(v_x_4473_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4500_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v___x_4491_; 
v___x_4491_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(v_context_4472_, v_a_4487_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_object* v_a_4492_; lean_object* v___x_4494_; 
v_a_4492_ = lean_ctor_get(v___x_4491_, 0);
lean_inc(v_a_4492_);
lean_dec_ref_known(v___x_4491_, 1);
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 0, v_a_4492_);
v___x_4494_ = v___x_4489_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v_a_4492_);
v___x_4494_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
v_val_4476_ = v___x_4494_;
goto v___jp_4475_;
}
}
else
{
lean_object* v_a_4496_; lean_object* v___x_4498_; 
v_a_4496_ = lean_ctor_get(v___x_4491_, 0);
lean_inc(v_a_4496_);
lean_dec_ref_known(v___x_4491_, 1);
if (v_isShared_4490_ == 0)
{
lean_ctor_set_tag(v___x_4489_, 0);
lean_ctor_set(v___x_4489_, 0, v_a_4496_);
v___x_4498_ = v___x_4489_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_a_4496_);
v___x_4498_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
v_val_4476_ = v___x_4498_;
goto v___jp_4475_;
}
}
}
}
v___jp_4475_:
{
lean_object* v___x_4477_; 
v___x_4477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4477_, 0, v_val_4476_);
return v___x_4477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4501_, lean_object* v_x_4502_, lean_object* v___y_4503_){
_start:
{
lean_object* v_res_4504_; 
v_res_4504_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0(v_context_4501_, v_x_4502_);
lean_dec_ref(v_context_4501_);
return v_res_4504_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(lean_object* v_context_4505_, uint32_t v_op_4506_, uint64_t v_flags_4507_, lean_object* v_payload_4508_, lean_object* v_failurePrefix_4509_){
_start:
{
lean_object* v___f_4511_; lean_object* v___f_4512_; lean_object* v___f_4513_; lean_object* v___f_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___f_4517_; lean_object* v___f_4518_; lean_object* v___x_4519_; uint8_t v___x_4520_; lean_object* v_val_4522_; lean_object* v___x_4525_; 
v___f_4511_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4511_, 0, v_context_4505_);
v___f_4512_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4512_, 0, v___f_4511_);
v___f_4513_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4513_, 0, v___f_4512_);
lean_inc_ref(v_failurePrefix_4509_);
v___f_4514_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4514_, 0, v_failurePrefix_4509_);
v___x_4515_ = lean_box_uint32(v_op_4506_);
v___x_4516_ = lean_box_uint64(v_flags_4507_);
lean_inc_ref(v___f_4513_);
v___f_4517_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4517_, 0, v_failurePrefix_4509_);
lean_closure_set(v___f_4517_, 1, v___x_4515_);
lean_closure_set(v___f_4517_, 2, v___x_4516_);
lean_closure_set(v___f_4517_, 3, v_payload_4508_);
lean_closure_set(v___f_4517_, 4, v___f_4514_);
lean_closure_set(v___f_4517_, 5, v___f_4513_);
lean_closure_set(v___f_4517_, 6, v___f_4513_);
v___f_4518_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4518_, 0, v___f_4517_);
v___x_4519_ = lean_unsigned_to_nat(0u);
v___x_4520_ = 0;
v___x_4525_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4525_) == 0)
{
lean_object* v_a_4526_; lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4533_; 
v_a_4526_ = lean_ctor_get(v___x_4525_, 0);
v_isSharedCheck_4533_ = !lean_is_exclusive(v___x_4525_);
if (v_isSharedCheck_4533_ == 0)
{
v___x_4528_ = v___x_4525_;
v_isShared_4529_ = v_isSharedCheck_4533_;
goto v_resetjp_4527_;
}
else
{
lean_inc(v_a_4526_);
lean_dec(v___x_4525_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4533_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
lean_object* v___x_4531_; 
if (v_isShared_4529_ == 0)
{
lean_ctor_set_tag(v___x_4528_, 1);
v___x_4531_ = v___x_4528_;
goto v_reusejp_4530_;
}
else
{
lean_object* v_reuseFailAlloc_4532_; 
v_reuseFailAlloc_4532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4532_, 0, v_a_4526_);
v___x_4531_ = v_reuseFailAlloc_4532_;
goto v_reusejp_4530_;
}
v_reusejp_4530_:
{
v_val_4522_ = v___x_4531_;
goto v___jp_4521_;
}
}
}
else
{
lean_object* v_a_4534_; lean_object* v___x_4536_; uint8_t v_isShared_4537_; uint8_t v_isSharedCheck_4541_; 
v_a_4534_ = lean_ctor_get(v___x_4525_, 0);
v_isSharedCheck_4541_ = !lean_is_exclusive(v___x_4525_);
if (v_isSharedCheck_4541_ == 0)
{
v___x_4536_ = v___x_4525_;
v_isShared_4537_ = v_isSharedCheck_4541_;
goto v_resetjp_4535_;
}
else
{
lean_inc(v_a_4534_);
lean_dec(v___x_4525_);
v___x_4536_ = lean_box(0);
v_isShared_4537_ = v_isSharedCheck_4541_;
goto v_resetjp_4535_;
}
v_resetjp_4535_:
{
lean_object* v___x_4539_; 
if (v_isShared_4537_ == 0)
{
lean_ctor_set_tag(v___x_4536_, 0);
v___x_4539_ = v___x_4536_;
goto v_reusejp_4538_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v_a_4534_);
v___x_4539_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4538_;
}
v_reusejp_4538_:
{
v_val_4522_ = v___x_4539_;
goto v___jp_4521_;
}
}
}
v___jp_4521_:
{
lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4523_, 0, v_val_4522_);
v___x_4524_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4519_, v___x_4520_, v___x_4523_, v___f_4518_);
return v___x_4524_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___boxed(lean_object* v_context_4542_, lean_object* v_op_4543_, lean_object* v_flags_4544_, lean_object* v_payload_4545_, lean_object* v_failurePrefix_4546_, lean_object* v_a_4547_){
_start:
{
uint32_t v_op_boxed_4548_; uint64_t v_flags_boxed_4549_; lean_object* v_res_4550_; 
v_op_boxed_4548_ = lean_unbox_uint32(v_op_4543_);
lean_dec(v_op_4543_);
v_flags_boxed_4549_ = lean_unbox_uint64(v_flags_4544_);
lean_dec_ref(v_flags_4544_);
v_res_4550_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(v_context_4542_, v_op_boxed_4548_, v_flags_boxed_4549_, v_payload_4545_, v_failurePrefix_4546_);
return v_res_4550_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4551_; uint8_t v___x_4552_; uint64_t v___x_4553_; 
v___x_4551_ = 8ULL;
v___x_4552_ = 0;
v___x_4553_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(v___x_4552_, v___x_4551_);
return v___x_4553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(lean_object* v_o_4554_, lean_object* v_name_4555_, lean_object* v_args_4556_){
_start:
{
lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; uint32_t v___x_4563_; uint64_t v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; 
v___x_4558_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4559_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4559_, 0, v_o_4554_);
lean_ctor_set(v___x_4559_, 1, v___x_4558_);
lean_inc_ref(v_name_4555_);
v___x_4560_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4560_, 0, v_name_4555_);
v___x_4561_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_4562_ = lean_string_append(v___x_4561_, v_name_4555_);
lean_dec_ref(v_name_4555_);
v___x_4563_ = 205;
v___x_4564_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0);
v___x_4565_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4565_, 0, v_args_4556_);
v___x_4566_ = lean_unsigned_to_nat(3u);
v___x_4567_ = lean_mk_empty_array_with_capacity(v___x_4566_);
v___x_4568_ = lean_array_push(v___x_4567_, v___x_4559_);
v___x_4569_ = lean_array_push(v___x_4568_, v___x_4560_);
v___x_4570_ = lean_array_push(v___x_4569_, v___x_4565_);
v___x_4571_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4571_, 0, v___x_4570_);
v___x_4572_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(v___x_4562_, v___x_4563_, v___x_4564_, v___x_4571_, v___x_4558_);
return v___x_4572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___boxed(lean_object* v_o_4573_, lean_object* v_name_4574_, lean_object* v_args_4575_, lean_object* v___y_4576_){
_start:
{
lean_object* v_res_4577_; 
v_res_4577_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(v_o_4573_, v_name_4574_, v_args_4575_);
return v_res_4577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify(lean_object* v_self_4578_, lean_object* v_algorithm_4579_, lean_object* v_key_4580_, lean_object* v_signature_4581_, lean_object* v_data_4582_){
_start:
{
lean_object* v___x_4584_; lean_object* v___y_4586_; 
v___x_4584_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6));
if (lean_obj_tag(v_algorithm_4579_) == 0)
{
lean_object* v_value_4599_; 
v_value_4599_ = lean_ctor_get(v_algorithm_4579_, 0);
lean_inc(v_value_4599_);
lean_dec_ref_known(v_algorithm_4579_, 1);
v___y_4586_ = v_value_4599_;
goto v___jp_4585_;
}
else
{
lean_object* v_value_4600_; lean_object* v___x_4602_; uint8_t v_isShared_4603_; uint8_t v_isSharedCheck_4607_; 
v_value_4600_ = lean_ctor_get(v_algorithm_4579_, 0);
v_isSharedCheck_4607_ = !lean_is_exclusive(v_algorithm_4579_);
if (v_isSharedCheck_4607_ == 0)
{
v___x_4602_ = v_algorithm_4579_;
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
else
{
lean_inc(v_value_4600_);
lean_dec(v_algorithm_4579_);
v___x_4602_ = lean_box(0);
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
v_resetjp_4601_:
{
lean_object* v___x_4605_; 
if (v_isShared_4603_ == 0)
{
lean_ctor_set_tag(v___x_4602_, 4);
v___x_4605_ = v___x_4602_;
goto v_reusejp_4604_;
}
else
{
lean_object* v_reuseFailAlloc_4606_; 
v_reuseFailAlloc_4606_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4606_, 0, v_value_4600_);
v___x_4605_ = v_reuseFailAlloc_4606_;
goto v_reusejp_4604_;
}
v_reusejp_4604_:
{
v___y_4586_ = v___x_4605_;
goto v___jp_4585_;
}
}
}
v___jp_4585_:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; 
v___x_4587_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4588_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4588_, 0, v_key_4580_);
lean_ctor_set(v___x_4588_, 1, v___x_4587_);
v___x_4589_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4589_, 0, v_signature_4581_);
v___x_4590_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4590_, 0, v_data_4582_);
v___x_4591_ = lean_unsigned_to_nat(4u);
v___x_4592_ = lean_mk_empty_array_with_capacity(v___x_4591_);
v___x_4593_ = lean_array_push(v___x_4592_, v___y_4586_);
v___x_4594_ = lean_array_push(v___x_4593_, v___x_4588_);
v___x_4595_ = lean_array_push(v___x_4594_, v___x_4589_);
v___x_4596_ = lean_array_push(v___x_4595_, v___x_4590_);
v___x_4597_ = l_Lasm_JS_Web_Support_args(v___x_4596_);
v___x_4598_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(v_self_4578_, v___x_4584_, v___x_4597_);
return v___x_4598_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify___boxed(lean_object* v_self_4608_, lean_object* v_algorithm_4609_, lean_object* v_key_4610_, lean_object* v_signature_4611_, lean_object* v_data_4612_, lean_object* v_a_4613_){
_start:
{
lean_object* v_res_4614_; 
v_res_4614_ = l_Lasm_JS_Web_SubtleCrypto_verify(v_self_4608_, v_algorithm_4609_, v_key_4610_, v_signature_4611_, v_data_4612_);
return v_res_4614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest(lean_object* v_self_4616_, lean_object* v_algorithm_4617_, lean_object* v_data_4618_){
_start:
{
lean_object* v___f_4620_; lean_object* v___x_4621_; lean_object* v___y_4623_; 
v___f_4620_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4621_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_digest___closed__0));
if (lean_obj_tag(v_algorithm_4617_) == 0)
{
lean_object* v_value_4634_; 
v_value_4634_ = lean_ctor_get(v_algorithm_4617_, 0);
lean_inc(v_value_4634_);
lean_dec_ref_known(v_algorithm_4617_, 1);
v___y_4623_ = v_value_4634_;
goto v___jp_4622_;
}
else
{
lean_object* v_value_4635_; lean_object* v___x_4637_; uint8_t v_isShared_4638_; uint8_t v_isSharedCheck_4642_; 
v_value_4635_ = lean_ctor_get(v_algorithm_4617_, 0);
v_isSharedCheck_4642_ = !lean_is_exclusive(v_algorithm_4617_);
if (v_isSharedCheck_4642_ == 0)
{
v___x_4637_ = v_algorithm_4617_;
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
else
{
lean_inc(v_value_4635_);
lean_dec(v_algorithm_4617_);
v___x_4637_ = lean_box(0);
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
v_resetjp_4636_:
{
lean_object* v___x_4640_; 
if (v_isShared_4638_ == 0)
{
lean_ctor_set_tag(v___x_4637_, 4);
v___x_4640_ = v___x_4637_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v_value_4635_);
v___x_4640_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4639_;
}
v_reusejp_4639_:
{
v___y_4623_ = v___x_4640_;
goto v___jp_4622_;
}
}
}
v___jp_4622_:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; uint8_t v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4624_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4624_, 0, v_data_4618_);
v___x_4625_ = lean_unsigned_to_nat(2u);
v___x_4626_ = lean_mk_empty_array_with_capacity(v___x_4625_);
v___x_4627_ = lean_array_push(v___x_4626_, v___y_4623_);
v___x_4628_ = lean_array_push(v___x_4627_, v___x_4624_);
v___x_4629_ = l_Lasm_JS_Web_Support_args(v___x_4628_);
v___x_4630_ = lean_unsigned_to_nat(0u);
v___x_4631_ = 0;
v___x_4632_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4616_, v___x_4621_, v___x_4629_);
v___x_4633_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4630_, v___x_4631_, v___x_4632_, v___f_4620_);
return v___x_4633_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest___boxed(lean_object* v_self_4643_, lean_object* v_algorithm_4644_, lean_object* v_data_4645_, lean_object* v_a_4646_){
_start:
{
lean_object* v_res_4647_; 
v_res_4647_ = l_Lasm_JS_Web_SubtleCrypto_digest(v_self_4643_, v_algorithm_4644_, v_data_4645_);
return v_res_4647_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(uint8_t v_await_4648_, uint64_t v_extra_4649_){
_start:
{
uint64_t v___x_4650_; uint64_t v___y_4652_; 
v___x_4650_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_4648_ == 0)
{
uint64_t v___x_4655_; 
v___x_4655_ = 0ULL;
v___y_4652_ = v___x_4655_;
goto v___jp_4651_;
}
else
{
uint64_t v___x_4656_; 
v___x_4656_ = 2ULL;
v___y_4652_ = v___x_4656_;
goto v___jp_4651_;
}
v___jp_4651_:
{
uint64_t v___x_4653_; uint64_t v___x_4654_; 
v___x_4653_ = lean_uint64_lor(v___x_4650_, v___y_4652_);
v___x_4654_ = lean_uint64_lor(v___x_4653_, v_extra_4649_);
return v___x_4654_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1___boxed(lean_object* v_await_4657_, lean_object* v_extra_4658_){
_start:
{
uint8_t v_await_boxed_4659_; uint64_t v_extra_boxed_4660_; uint64_t v_res_4661_; lean_object* v_r_4662_; 
v_await_boxed_4659_ = lean_unbox(v_await_4657_);
v_extra_boxed_4660_ = lean_unbox_uint64(v_extra_4658_);
lean_dec_ref(v_extra_4658_);
v_res_4661_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(v_await_boxed_4659_, v_extra_boxed_4660_);
v_r_4662_ = lean_box_uint64(v_res_4661_);
return v_r_4662_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1(lean_object* v___f_4663_, lean_object* v_bytes_4664_){
_start:
{
lean_object* v___x_4666_; uint8_t v___x_4667_; lean_object* v_val_4669_; lean_object* v___x_4672_; 
v___x_4666_ = lean_unsigned_to_nat(0u);
v___x_4667_ = 0;
v___x_4672_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4664_);
if (lean_obj_tag(v___x_4672_) == 0)
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4680_; 
v_a_4673_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4675_ = v___x_4672_;
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4672_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4676_ == 0)
{
lean_ctor_set_tag(v___x_4675_, 1);
v___x_4678_ = v___x_4675_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
v_val_4669_ = v___x_4678_;
goto v___jp_4668_;
}
}
}
else
{
lean_object* v_a_4681_; lean_object* v___x_4683_; uint8_t v_isShared_4684_; uint8_t v_isSharedCheck_4688_; 
v_a_4681_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4683_ = v___x_4672_;
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
else
{
lean_inc(v_a_4681_);
lean_dec(v___x_4672_);
v___x_4683_ = lean_box(0);
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
v_resetjp_4682_:
{
lean_object* v___x_4686_; 
if (v_isShared_4684_ == 0)
{
lean_ctor_set_tag(v___x_4683_, 0);
v___x_4686_ = v___x_4683_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v_a_4681_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
v_val_4669_ = v___x_4686_;
goto v___jp_4668_;
}
}
}
v___jp_4668_:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; 
v___x_4670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4670_, 0, v_val_4669_);
v___x_4671_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4666_, v___x_4667_, v___x_4670_, v___f_4663_);
return v___x_4671_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1___boxed(lean_object* v___f_4689_, lean_object* v_bytes_4690_, lean_object* v___y_4691_){
_start:
{
lean_object* v_res_4692_; 
v_res_4692_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1(v___f_4689_, v_bytes_4690_);
lean_dec_ref(v_bytes_4690_);
return v_res_4692_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2(lean_object* v___f_4693_, lean_object* v_x_4694_){
_start:
{
if (lean_obj_tag(v_x_4694_) == 0)
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4704_; 
lean_dec_ref(v___f_4693_);
v_a_4696_ = lean_ctor_get(v_x_4694_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v_x_4694_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4698_ = v_x_4694_;
v_isShared_4699_ = v_isSharedCheck_4704_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v_x_4694_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4704_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
lean_object* v___x_4702_; 
v___x_4702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4701_);
return v___x_4702_;
}
}
}
else
{
lean_object* v_a_4705_; lean_object* v___x_4706_; 
v_a_4705_ = lean_ctor_get(v_x_4694_, 0);
lean_inc(v_a_4705_);
lean_dec_ref_known(v_x_4694_, 1);
v___x_4706_ = lean_apply_2(v___f_4693_, v_a_4705_, lean_box(0));
return v___x_4706_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2___boxed(lean_object* v___f_4707_, lean_object* v_x_4708_, lean_object* v___y_4709_){
_start:
{
lean_object* v_res_4710_; 
v_res_4710_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2(v___f_4707_, v_x_4708_);
return v_res_4710_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3(lean_object* v___f_4711_, lean_object* v_x_4712_){
_start:
{
if (lean_obj_tag(v_x_4712_) == 0)
{
lean_object* v_a_4714_; lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4722_; 
lean_dec_ref(v___f_4711_);
v_a_4714_ = lean_ctor_get(v_x_4712_, 0);
v_isSharedCheck_4722_ = !lean_is_exclusive(v_x_4712_);
if (v_isSharedCheck_4722_ == 0)
{
v___x_4716_ = v_x_4712_;
v_isShared_4717_ = v_isSharedCheck_4722_;
goto v_resetjp_4715_;
}
else
{
lean_inc(v_a_4714_);
lean_dec(v_x_4712_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4722_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
lean_object* v___x_4719_; 
if (v_isShared_4717_ == 0)
{
v___x_4719_ = v___x_4716_;
goto v_reusejp_4718_;
}
else
{
lean_object* v_reuseFailAlloc_4721_; 
v_reuseFailAlloc_4721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4721_, 0, v_a_4714_);
v___x_4719_ = v_reuseFailAlloc_4721_;
goto v_reusejp_4718_;
}
v_reusejp_4718_:
{
lean_object* v___x_4720_; 
v___x_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4719_);
return v___x_4720_;
}
}
}
else
{
lean_object* v___x_4724_; uint8_t v_isShared_4725_; uint8_t v_isSharedCheck_4734_; 
v_isSharedCheck_4734_ = !lean_is_exclusive(v_x_4712_);
if (v_isSharedCheck_4734_ == 0)
{
lean_object* v_unused_4735_; 
v_unused_4735_ = lean_ctor_get(v_x_4712_, 0);
lean_dec(v_unused_4735_);
v___x_4724_ = v_x_4712_;
v_isShared_4725_ = v_isSharedCheck_4734_;
goto v_resetjp_4723_;
}
else
{
lean_dec(v_x_4712_);
v___x_4724_ = lean_box(0);
v_isShared_4725_ = v_isSharedCheck_4734_;
goto v_resetjp_4723_;
}
v_resetjp_4723_:
{
lean_object* v___x_4726_; uint8_t v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4730_; 
v___x_4726_ = lean_unsigned_to_nat(0u);
v___x_4727_ = 0;
v___x_4728_ = lean_io_promise_new();
if (v_isShared_4725_ == 0)
{
lean_ctor_set(v___x_4724_, 0, v___x_4728_);
v___x_4730_ = v___x_4724_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v___x_4728_);
v___x_4730_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
lean_object* v___x_4731_; lean_object* v___x_4732_; 
v___x_4731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4731_, 0, v___x_4730_);
v___x_4732_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4726_, v___x_4727_, v___x_4731_, v___f_4711_);
return v___x_4732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3___boxed(lean_object* v___f_4736_, lean_object* v_x_4737_, lean_object* v___y_4738_){
_start:
{
lean_object* v_res_4739_; 
v_res_4739_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3(v___f_4736_, v_x_4737_);
return v_res_4739_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_4740_, uint32_t v_op_4741_, uint64_t v_flags_4742_, lean_object* v_payload_4743_, lean_object* v___f_4744_, lean_object* v___f_4745_, lean_object* v___f_4746_, lean_object* v_x_4747_){
_start:
{
if (lean_obj_tag(v_x_4747_) == 0)
{
lean_object* v_a_4749_; lean_object* v___x_4751_; uint8_t v_isShared_4752_; uint8_t v_isSharedCheck_4757_; 
lean_dec_ref(v___f_4746_);
lean_dec_ref(v___f_4745_);
lean_dec_ref(v___f_4744_);
lean_dec(v_payload_4743_);
v_a_4749_ = lean_ctor_get(v_x_4747_, 0);
v_isSharedCheck_4757_ = !lean_is_exclusive(v_x_4747_);
if (v_isSharedCheck_4757_ == 0)
{
v___x_4751_ = v_x_4747_;
v_isShared_4752_ = v_isSharedCheck_4757_;
goto v_resetjp_4750_;
}
else
{
lean_inc(v_a_4749_);
lean_dec(v_x_4747_);
v___x_4751_ = lean_box(0);
v_isShared_4752_ = v_isSharedCheck_4757_;
goto v_resetjp_4750_;
}
v_resetjp_4750_:
{
lean_object* v___x_4754_; 
if (v_isShared_4752_ == 0)
{
v___x_4754_ = v___x_4751_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4756_; 
v_reuseFailAlloc_4756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4756_, 0, v_a_4749_);
v___x_4754_ = v_reuseFailAlloc_4756_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
lean_object* v___x_4755_; 
v___x_4755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4755_, 0, v___x_4754_);
return v___x_4755_;
}
}
}
else
{
lean_object* v_a_4758_; lean_object* v___x_4760_; uint8_t v_isShared_4761_; uint8_t v_isSharedCheck_4804_; 
v_a_4758_ = lean_ctor_get(v_x_4747_, 0);
v_isSharedCheck_4804_ = !lean_is_exclusive(v_x_4747_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4760_ = v_x_4747_;
v_isShared_4761_ = v_isSharedCheck_4804_;
goto v_resetjp_4759_;
}
else
{
lean_inc(v_a_4758_);
lean_dec(v_x_4747_);
v___x_4760_ = lean_box(0);
v_isShared_4761_ = v_isSharedCheck_4804_;
goto v_resetjp_4759_;
}
v_resetjp_4759_:
{
lean_object* v___x_4762_; lean_object* v___x_4763_; uint8_t v___x_4764_; 
v___x_4762_ = lean_string_utf8_byte_size(v_failurePrefix_4740_);
v___x_4763_ = lean_unsigned_to_nat(0u);
v___x_4764_ = lean_nat_dec_eq(v___x_4762_, v___x_4763_);
if (v___x_4764_ == 0)
{
lean_object* v___f_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___f_4769_; lean_object* v_val_4771_; lean_object* v___x_4776_; 
lean_dec_ref(v___f_4746_);
lean_inc(v_a_4758_);
v___f_4765_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4765_, 0, v_a_4758_);
v___x_4766_ = lean_box(v___x_4764_);
v___x_4767_ = lean_box_uint32(v_op_4741_);
v___x_4768_ = lean_box_uint64(v_flags_4742_);
lean_inc(v_payload_4743_);
v___f_4769_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4769_, 0, v___x_4763_);
lean_closure_set(v___f_4769_, 1, v___x_4766_);
lean_closure_set(v___f_4769_, 2, v___f_4765_);
lean_closure_set(v___f_4769_, 3, v_a_4758_);
lean_closure_set(v___f_4769_, 4, v___x_4767_);
lean_closure_set(v___f_4769_, 5, v___x_4768_);
lean_closure_set(v___f_4769_, 6, v_payload_4743_);
v___x_4776_ = l_Lasm_JS_Wire_encodeIO(v_payload_4743_);
lean_dec(v_payload_4743_);
if (lean_obj_tag(v___x_4776_) == 0)
{
lean_object* v_a_4777_; lean_object* v___x_4779_; 
v_a_4777_ = lean_ctor_get(v___x_4776_, 0);
lean_inc(v_a_4777_);
lean_dec_ref_known(v___x_4776_, 1);
if (v_isShared_4761_ == 0)
{
lean_ctor_set(v___x_4760_, 0, v_a_4777_);
v___x_4779_ = v___x_4760_;
goto v_reusejp_4778_;
}
else
{
lean_object* v_reuseFailAlloc_4780_; 
v_reuseFailAlloc_4780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4780_, 0, v_a_4777_);
v___x_4779_ = v_reuseFailAlloc_4780_;
goto v_reusejp_4778_;
}
v_reusejp_4778_:
{
v_val_4771_ = v___x_4779_;
goto v___jp_4770_;
}
}
else
{
lean_object* v_a_4781_; lean_object* v___x_4783_; 
v_a_4781_ = lean_ctor_get(v___x_4776_, 0);
lean_inc(v_a_4781_);
lean_dec_ref_known(v___x_4776_, 1);
if (v_isShared_4761_ == 0)
{
lean_ctor_set_tag(v___x_4760_, 0);
lean_ctor_set(v___x_4760_, 0, v_a_4781_);
v___x_4783_ = v___x_4760_;
goto v_reusejp_4782_;
}
else
{
lean_object* v_reuseFailAlloc_4784_; 
v_reuseFailAlloc_4784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4784_, 0, v_a_4781_);
v___x_4783_ = v_reuseFailAlloc_4784_;
goto v_reusejp_4782_;
}
v_reusejp_4782_:
{
v_val_4771_ = v___x_4783_;
goto v___jp_4770_;
}
}
v___jp_4770_:
{
lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4772_, 0, v_val_4771_);
v___x_4773_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4763_, v___x_4764_, v___x_4772_, v___f_4769_);
v___x_4774_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4763_, v___x_4764_, v___x_4773_, v___f_4744_);
v___x_4775_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4763_, v___x_4764_, v___x_4774_, v___f_4745_);
return v___x_4775_;
}
}
else
{
lean_object* v___f_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___f_4788_; uint8_t v___x_4789_; lean_object* v_val_4791_; lean_object* v___x_4795_; 
lean_dec_ref(v___f_4745_);
lean_dec_ref(v___f_4744_);
lean_inc(v_a_4758_);
v___f_4785_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4785_, 0, v_a_4758_);
v___x_4786_ = lean_box_uint32(v_op_4741_);
v___x_4787_ = lean_box_uint64(v_flags_4742_);
lean_inc(v_payload_4743_);
v___f_4788_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4788_, 0, v___f_4785_);
lean_closure_set(v___f_4788_, 1, v_a_4758_);
lean_closure_set(v___f_4788_, 2, v___x_4786_);
lean_closure_set(v___f_4788_, 3, v___x_4787_);
lean_closure_set(v___f_4788_, 4, v_payload_4743_);
v___x_4789_ = 0;
v___x_4795_ = l_Lasm_JS_Wire_encodeIO(v_payload_4743_);
lean_dec(v_payload_4743_);
if (lean_obj_tag(v___x_4795_) == 0)
{
lean_object* v_a_4796_; lean_object* v___x_4798_; 
v_a_4796_ = lean_ctor_get(v___x_4795_, 0);
lean_inc(v_a_4796_);
lean_dec_ref_known(v___x_4795_, 1);
if (v_isShared_4761_ == 0)
{
lean_ctor_set(v___x_4760_, 0, v_a_4796_);
v___x_4798_ = v___x_4760_;
goto v_reusejp_4797_;
}
else
{
lean_object* v_reuseFailAlloc_4799_; 
v_reuseFailAlloc_4799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4799_, 0, v_a_4796_);
v___x_4798_ = v_reuseFailAlloc_4799_;
goto v_reusejp_4797_;
}
v_reusejp_4797_:
{
v_val_4791_ = v___x_4798_;
goto v___jp_4790_;
}
}
else
{
lean_object* v_a_4800_; lean_object* v___x_4802_; 
v_a_4800_ = lean_ctor_get(v___x_4795_, 0);
lean_inc(v_a_4800_);
lean_dec_ref_known(v___x_4795_, 1);
if (v_isShared_4761_ == 0)
{
lean_ctor_set_tag(v___x_4760_, 0);
lean_ctor_set(v___x_4760_, 0, v_a_4800_);
v___x_4802_ = v___x_4760_;
goto v_reusejp_4801_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v_a_4800_);
v___x_4802_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4801_;
}
v_reusejp_4801_:
{
v_val_4791_ = v___x_4802_;
goto v___jp_4790_;
}
}
v___jp_4790_:
{
lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; 
v___x_4792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4792_, 0, v_val_4791_);
v___x_4793_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4763_, v___x_4789_, v___x_4792_, v___f_4788_);
v___x_4794_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4763_, v___x_4789_, v___x_4793_, v___f_4746_);
return v___x_4794_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_4805_, lean_object* v_op_4806_, lean_object* v_flags_4807_, lean_object* v_payload_4808_, lean_object* v___f_4809_, lean_object* v___f_4810_, lean_object* v___f_4811_, lean_object* v_x_4812_, lean_object* v___y_4813_){
_start:
{
uint32_t v_op_boxed_4814_; uint64_t v_flags_boxed_4815_; lean_object* v_res_4816_; 
v_op_boxed_4814_ = lean_unbox_uint32(v_op_4806_);
lean_dec(v_op_4806_);
v_flags_boxed_4815_ = lean_unbox_uint64(v_flags_4807_);
lean_dec_ref(v_flags_4807_);
v_res_4816_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9(v_failurePrefix_4805_, v_op_boxed_4814_, v_flags_boxed_4815_, v_payload_4808_, v___f_4809_, v___f_4810_, v___f_4811_, v_x_4812_);
lean_dec_ref(v_failurePrefix_4805_);
return v_res_4816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_4822_, lean_object* v_key_4823_){
_start:
{
if (lean_obj_tag(v_d_4822_) == 8)
{
lean_object* v___x_4826_; lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4854_; 
v___x_4826_ = l_Lasm_JS_Data_field(v_d_4822_, v_key_4823_);
v_isSharedCheck_4854_ = !lean_is_exclusive(v_d_4822_);
if (v_isSharedCheck_4854_ == 0)
{
lean_object* v_unused_4855_; 
v_unused_4855_ = lean_ctor_get(v_d_4822_, 0);
lean_dec(v_unused_4855_);
v___x_4828_ = v_d_4822_;
v_isShared_4829_ = v_isSharedCheck_4854_;
goto v_resetjp_4827_;
}
else
{
lean_dec(v_d_4822_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4854_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
switch(lean_obj_tag(v___x_4826_))
{
case 1:
{
lean_del_object(v___x_4828_);
goto v___jp_4824_;
}
case 0:
{
lean_del_object(v___x_4828_);
goto v___jp_4824_;
}
default: 
{
if (lean_obj_tag(v___x_4826_) == 9)
{
lean_object* v_value_4830_; lean_object* v___x_4832_; 
v_value_4830_ = lean_ctor_get(v___x_4826_, 0);
lean_inc(v_value_4830_);
lean_dec_ref_known(v___x_4826_, 2);
if (v_isShared_4829_ == 0)
{
lean_ctor_set_tag(v___x_4828_, 1);
lean_ctor_set(v___x_4828_, 0, v_value_4830_);
v___x_4832_ = v___x_4828_;
goto v_reusejp_4831_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v_value_4830_);
v___x_4832_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4831_;
}
v_reusejp_4831_:
{
lean_object* v___x_4833_; 
v___x_4833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4832_);
return v___x_4833_;
}
}
else
{
lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; uint8_t v___x_4845_; 
v___x_4835_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_4836_ = lean_string_append(v___x_4835_, v_key_4823_);
v___x_4837_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_4838_ = lean_string_append(v___x_4836_, v___x_4837_);
v___x_4839_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_4840_ = lean_string_append(v___x_4838_, v___x_4839_);
v___x_4841_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_4842_ = lean_string_append(v___x_4840_, v___x_4841_);
v___x_4843_ = l_Lasm_JS_Data_describe(v___x_4826_);
v___x_4844_ = lean_string_append(v___x_4842_, v___x_4843_);
lean_dec_ref(v___x_4843_);
v___x_4845_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_4845_ == 0)
{
lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4849_; 
v___x_4846_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___x_4847_ = lean_string_append(v___x_4844_, v___x_4846_);
if (v_isShared_4829_ == 0)
{
lean_ctor_set_tag(v___x_4828_, 0);
lean_ctor_set(v___x_4828_, 0, v___x_4847_);
v___x_4849_ = v___x_4828_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v___x_4847_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
else
{
lean_object* v___x_4852_; 
if (v_isShared_4829_ == 0)
{
lean_ctor_set_tag(v___x_4828_, 0);
lean_ctor_set(v___x_4828_, 0, v___x_4844_);
v___x_4852_ = v___x_4828_;
goto v_reusejp_4851_;
}
else
{
lean_object* v_reuseFailAlloc_4853_; 
v_reuseFailAlloc_4853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4853_, 0, v___x_4844_);
v___x_4852_ = v_reuseFailAlloc_4853_;
goto v_reusejp_4851_;
}
v_reusejp_4851_:
{
return v___x_4852_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4856_; 
lean_dec(v_d_4822_);
v___x_4856_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__2));
return v___x_4856_;
}
v___jp_4824_:
{
lean_object* v___x_4825_; 
v___x_4825_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_4825_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_4857_, lean_object* v_key_4858_){
_start:
{
lean_object* v_res_4859_; 
v_res_4859_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4857_, v_key_4858_);
lean_dec_ref(v_key_4858_);
return v_res_4859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(lean_object* v_context_4860_, lean_object* v_d_4861_){
_start:
{
lean_object* v___y_4864_; lean_object* v___y_4865_; lean_object* v___y_4870_; lean_object* v_received_4871_; lean_object* v___y_4890_; lean_object* v_a_4893_; 
switch(lean_obj_tag(v_d_4861_))
{
case 9:
{
lean_object* v_value_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; 
v_value_4917_ = lean_ctor_get(v_d_4861_, 0);
lean_inc(v_value_4917_);
lean_dec_ref_known(v_d_4861_, 2);
v___x_4918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4918_, 0, v_value_4917_);
v___x_4919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4919_, 0, v___x_4918_);
return v___x_4919_;
}
case 8:
{
lean_object* v___x_4920_; lean_object* v___x_4921_; 
v___x_4920_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
lean_inc_ref(v_d_4861_);
v___x_4921_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4861_, v___x_4920_);
if (lean_obj_tag(v___x_4921_) == 0)
{
lean_object* v_a_4922_; 
v_a_4922_ = lean_ctor_get(v___x_4921_, 0);
lean_inc(v_a_4922_);
lean_dec_ref_known(v___x_4921_, 1);
v_a_4893_ = v_a_4922_;
goto v___jp_4892_;
}
else
{
lean_object* v_a_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4942_; 
v_a_4923_ = lean_ctor_get(v___x_4921_, 0);
v_isSharedCheck_4942_ = !lean_is_exclusive(v___x_4921_);
if (v_isSharedCheck_4942_ == 0)
{
v___x_4925_ = v___x_4921_;
v_isShared_4926_ = v_isSharedCheck_4942_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_a_4923_);
lean_dec(v___x_4921_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4942_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4927_; lean_object* v___x_4928_; 
v___x_4927_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
lean_inc_ref(v_d_4861_);
v___x_4928_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4861_, v___x_4927_);
if (lean_obj_tag(v___x_4928_) == 0)
{
lean_object* v_a_4929_; 
lean_del_object(v___x_4925_);
lean_dec(v_a_4923_);
v_a_4929_ = lean_ctor_get(v___x_4928_, 0);
lean_inc(v_a_4929_);
lean_dec_ref_known(v___x_4928_, 1);
v_a_4893_ = v_a_4929_;
goto v___jp_4892_;
}
else
{
lean_object* v_a_4930_; lean_object* v___x_4932_; uint8_t v_isShared_4933_; uint8_t v_isSharedCheck_4941_; 
lean_dec_ref_known(v_d_4861_, 1);
v_a_4930_ = lean_ctor_get(v___x_4928_, 0);
v_isSharedCheck_4941_ = !lean_is_exclusive(v___x_4928_);
if (v_isSharedCheck_4941_ == 0)
{
v___x_4932_ = v___x_4928_;
v_isShared_4933_ = v_isSharedCheck_4941_;
goto v_resetjp_4931_;
}
else
{
lean_inc(v_a_4930_);
lean_dec(v___x_4928_);
v___x_4932_ = lean_box(0);
v_isShared_4933_ = v_isSharedCheck_4941_;
goto v_resetjp_4931_;
}
v_resetjp_4931_:
{
lean_object* v___x_4934_; lean_object* v___x_4936_; 
v___x_4934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4934_, 0, v_a_4923_);
lean_ctor_set(v___x_4934_, 1, v_a_4930_);
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 0, v___x_4934_);
v___x_4936_ = v___x_4932_;
goto v_reusejp_4935_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v___x_4934_);
v___x_4936_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4935_;
}
v_reusejp_4935_:
{
lean_object* v___x_4938_; 
if (v_isShared_4926_ == 0)
{
lean_ctor_set_tag(v___x_4925_, 0);
lean_ctor_set(v___x_4925_, 0, v___x_4936_);
v___x_4938_ = v___x_4925_;
goto v_reusejp_4937_;
}
else
{
lean_object* v_reuseFailAlloc_4939_; 
v_reuseFailAlloc_4939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4939_, 0, v___x_4936_);
v___x_4938_ = v_reuseFailAlloc_4939_;
goto v_reusejp_4937_;
}
v_reusejp_4937_:
{
return v___x_4938_;
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_4943_; 
v___x_4943_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_4893_ = v___x_4943_;
goto v___jp_4892_;
}
}
v___jp_4863_:
{
lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; 
v___x_4866_ = lean_string_append(v___y_4864_, v___y_4865_);
lean_dec_ref(v___y_4865_);
v___x_4867_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4866_);
v___x_4868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4868_, 0, v___x_4867_);
return v___x_4868_;
}
v___jp_4869_:
{
lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; uint8_t v___x_4883_; 
v___x_4872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_4873_ = lean_string_append(v___x_4872_, v_context_4860_);
v___x_4874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_4875_ = lean_string_append(v___x_4873_, v___x_4874_);
v___x_4876_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__1));
v___x_4877_ = lean_string_append(v___x_4875_, v___x_4876_);
v___x_4878_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_4879_ = lean_string_append(v___x_4877_, v___x_4878_);
v___x_4880_ = lean_string_append(v___x_4879_, v_received_4871_);
lean_dec_ref(v_received_4871_);
v___x_4881_ = lean_string_utf8_byte_size(v___y_4870_);
v___x_4882_ = lean_unsigned_to_nat(0u);
v___x_4883_ = lean_nat_dec_eq(v___x_4881_, v___x_4882_);
if (v___x_4883_ == 0)
{
lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; 
v___x_4884_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_4885_ = lean_string_append(v___x_4884_, v___y_4870_);
lean_dec_ref(v___y_4870_);
v___x_4886_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_4887_ = lean_string_append(v___x_4885_, v___x_4886_);
v___y_4864_ = v___x_4880_;
v___y_4865_ = v___x_4887_;
goto v___jp_4863_;
}
else
{
lean_object* v___x_4888_; 
lean_dec_ref(v___y_4870_);
v___x_4888_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_4864_ = v___x_4880_;
v___y_4865_ = v___x_4888_;
goto v___jp_4863_;
}
}
v___jp_4889_:
{
lean_object* v___x_4891_; 
v___x_4891_ = l_Lasm_JS_Data_describe(v_d_4861_);
v___y_4870_ = v___y_4890_;
v_received_4871_ = v___x_4891_;
goto v___jp_4869_;
}
v___jp_4892_:
{
if (lean_obj_tag(v_d_4861_) == 9)
{
lean_object* v_value_4894_; lean_object* v_description_4895_; lean_object* v___x_4896_; uint8_t v___x_4897_; 
v_value_4894_ = lean_ctor_get(v_d_4861_, 0);
v_description_4895_ = lean_ctor_get(v_d_4861_, 1);
v___x_4896_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4897_ = lean_string_dec_eq(v_description_4895_, v___x_4896_);
if (v___x_4897_ == 0)
{
v___y_4890_ = v_a_4893_;
goto v___jp_4889_;
}
else
{
lean_object* v___x_4899_; uint8_t v_isShared_4900_; uint8_t v_isSharedCheck_4914_; 
lean_inc(v_value_4894_);
v_isSharedCheck_4914_ = !lean_is_exclusive(v_d_4861_);
if (v_isSharedCheck_4914_ == 0)
{
lean_object* v_unused_4915_; lean_object* v_unused_4916_; 
v_unused_4915_ = lean_ctor_get(v_d_4861_, 1);
lean_dec(v_unused_4915_);
v_unused_4916_ = lean_ctor_get(v_d_4861_, 0);
lean_dec(v_unused_4916_);
v___x_4899_ = v_d_4861_;
v_isShared_4900_ = v_isSharedCheck_4914_;
goto v_resetjp_4898_;
}
else
{
lean_dec(v_d_4861_);
v___x_4899_ = lean_box(0);
v_isShared_4900_ = v_isSharedCheck_4914_;
goto v_resetjp_4898_;
}
v_resetjp_4898_:
{
uint32_t v___x_4901_; uint64_t v___x_4902_; lean_object* v___x_4904_; 
v___x_4901_ = 206;
v___x_4902_ = 0ULL;
lean_inc(v_value_4894_);
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 1, v___x_4896_);
v___x_4904_ = v___x_4899_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4913_; 
v_reuseFailAlloc_4913_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4913_, 0, v_value_4894_);
lean_ctor_set(v_reuseFailAlloc_4913_, 1, v___x_4896_);
v___x_4904_ = v_reuseFailAlloc_4913_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
uint32_t v___x_4905_; lean_object* v___x_4906_; 
v___x_4905_ = lasm_js_value_handle(v_value_4894_);
lean_dec(v_value_4894_);
v___x_4906_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4901_, v___x_4902_, v___x_4904_, v___x_4905_);
lean_dec_ref(v___x_4904_);
if (lean_obj_tag(v___x_4906_) == 0)
{
lean_object* v_a_4907_; uint8_t v___x_4908_; 
v_a_4907_ = lean_ctor_get(v___x_4906_, 0);
lean_inc(v_a_4907_);
lean_dec_ref_known(v___x_4906_, 1);
v___x_4908_ = lean_string_validate_utf8(v_a_4907_);
if (v___x_4908_ == 0)
{
lean_object* v___x_4909_; lean_object* v___x_4910_; 
lean_dec(v_a_4907_);
v___x_4909_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_4910_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4909_);
v___y_4870_ = v_a_4893_;
v_received_4871_ = v___x_4910_;
goto v___jp_4869_;
}
else
{
lean_object* v___x_4911_; 
v___x_4911_ = lean_string_from_utf8_unchecked(v_a_4907_);
v___y_4870_ = v_a_4893_;
v_received_4871_ = v___x_4911_;
goto v___jp_4869_;
}
}
else
{
lean_object* v___x_4912_; 
lean_dec_ref_known(v___x_4906_, 1);
v___x_4912_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_4870_ = v_a_4893_;
v_received_4871_ = v___x_4912_;
goto v___jp_4869_;
}
}
}
}
}
else
{
v___y_4890_ = v_a_4893_;
goto v___jp_4889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3___boxed(lean_object* v_context_4944_, lean_object* v_d_4945_, lean_object* v_a_4946_){
_start:
{
lean_object* v_res_4947_; 
v_res_4947_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(v_context_4944_, v_d_4945_);
lean_dec_ref(v_context_4944_);
return v_res_4947_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0(lean_object* v_context_4948_, lean_object* v_x_4949_){
_start:
{
lean_object* v_val_4952_; 
if (lean_obj_tag(v_x_4949_) == 0)
{
lean_object* v_a_4954_; lean_object* v___x_4956_; uint8_t v_isShared_4957_; uint8_t v_isSharedCheck_4962_; 
v_a_4954_ = lean_ctor_get(v_x_4949_, 0);
v_isSharedCheck_4962_ = !lean_is_exclusive(v_x_4949_);
if (v_isSharedCheck_4962_ == 0)
{
v___x_4956_ = v_x_4949_;
v_isShared_4957_ = v_isSharedCheck_4962_;
goto v_resetjp_4955_;
}
else
{
lean_inc(v_a_4954_);
lean_dec(v_x_4949_);
v___x_4956_ = lean_box(0);
v_isShared_4957_ = v_isSharedCheck_4962_;
goto v_resetjp_4955_;
}
v_resetjp_4955_:
{
lean_object* v___x_4959_; 
if (v_isShared_4957_ == 0)
{
v___x_4959_ = v___x_4956_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4961_; 
v_reuseFailAlloc_4961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4961_, 0, v_a_4954_);
v___x_4959_ = v_reuseFailAlloc_4961_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
lean_object* v___x_4960_; 
v___x_4960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4960_, 0, v___x_4959_);
return v___x_4960_;
}
}
}
else
{
lean_object* v_a_4963_; lean_object* v___x_4965_; uint8_t v_isShared_4966_; uint8_t v_isSharedCheck_4976_; 
v_a_4963_ = lean_ctor_get(v_x_4949_, 0);
v_isSharedCheck_4976_ = !lean_is_exclusive(v_x_4949_);
if (v_isSharedCheck_4976_ == 0)
{
v___x_4965_ = v_x_4949_;
v_isShared_4966_ = v_isSharedCheck_4976_;
goto v_resetjp_4964_;
}
else
{
lean_inc(v_a_4963_);
lean_dec(v_x_4949_);
v___x_4965_ = lean_box(0);
v_isShared_4966_ = v_isSharedCheck_4976_;
goto v_resetjp_4964_;
}
v_resetjp_4964_:
{
lean_object* v___x_4967_; 
v___x_4967_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(v_context_4948_, v_a_4963_);
if (lean_obj_tag(v___x_4967_) == 0)
{
lean_object* v_a_4968_; lean_object* v___x_4970_; 
v_a_4968_ = lean_ctor_get(v___x_4967_, 0);
lean_inc(v_a_4968_);
lean_dec_ref_known(v___x_4967_, 1);
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 0, v_a_4968_);
v___x_4970_ = v___x_4965_;
goto v_reusejp_4969_;
}
else
{
lean_object* v_reuseFailAlloc_4971_; 
v_reuseFailAlloc_4971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4971_, 0, v_a_4968_);
v___x_4970_ = v_reuseFailAlloc_4971_;
goto v_reusejp_4969_;
}
v_reusejp_4969_:
{
v_val_4952_ = v___x_4970_;
goto v___jp_4951_;
}
}
else
{
lean_object* v_a_4972_; lean_object* v___x_4974_; 
v_a_4972_ = lean_ctor_get(v___x_4967_, 0);
lean_inc(v_a_4972_);
lean_dec_ref_known(v___x_4967_, 1);
if (v_isShared_4966_ == 0)
{
lean_ctor_set_tag(v___x_4965_, 0);
lean_ctor_set(v___x_4965_, 0, v_a_4972_);
v___x_4974_ = v___x_4965_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4975_; 
v_reuseFailAlloc_4975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4975_, 0, v_a_4972_);
v___x_4974_ = v_reuseFailAlloc_4975_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
v_val_4952_ = v___x_4974_;
goto v___jp_4951_;
}
}
}
}
v___jp_4951_:
{
lean_object* v___x_4953_; 
v___x_4953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4953_, 0, v_val_4952_);
return v___x_4953_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0___boxed(lean_object* v_context_4977_, lean_object* v_x_4978_, lean_object* v___y_4979_){
_start:
{
lean_object* v_res_4980_; 
v_res_4980_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0(v_context_4977_, v_x_4978_);
lean_dec_ref(v_context_4977_);
return v_res_4980_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(lean_object* v_context_4981_, uint32_t v_op_4982_, uint64_t v_flags_4983_, lean_object* v_payload_4984_, lean_object* v_failurePrefix_4985_){
_start:
{
lean_object* v___f_4987_; lean_object* v___f_4988_; lean_object* v___f_4989_; lean_object* v___f_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___f_4993_; lean_object* v___f_4994_; lean_object* v___x_4995_; uint8_t v___x_4996_; lean_object* v_val_4998_; lean_object* v___x_5001_; 
v___f_4987_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4987_, 0, v_context_4981_);
v___f_4988_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4988_, 0, v___f_4987_);
v___f_4989_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4989_, 0, v___f_4988_);
lean_inc_ref(v_failurePrefix_4985_);
v___f_4990_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4990_, 0, v_failurePrefix_4985_);
v___x_4991_ = lean_box_uint32(v_op_4982_);
v___x_4992_ = lean_box_uint64(v_flags_4983_);
lean_inc_ref(v___f_4989_);
v___f_4993_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4993_, 0, v_failurePrefix_4985_);
lean_closure_set(v___f_4993_, 1, v___x_4991_);
lean_closure_set(v___f_4993_, 2, v___x_4992_);
lean_closure_set(v___f_4993_, 3, v_payload_4984_);
lean_closure_set(v___f_4993_, 4, v___f_4990_);
lean_closure_set(v___f_4993_, 5, v___f_4989_);
lean_closure_set(v___f_4993_, 6, v___f_4989_);
v___f_4994_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4994_, 0, v___f_4993_);
v___x_4995_ = lean_unsigned_to_nat(0u);
v___x_4996_ = 0;
v___x_5001_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5001_) == 0)
{
lean_object* v_a_5002_; lean_object* v___x_5004_; uint8_t v_isShared_5005_; uint8_t v_isSharedCheck_5009_; 
v_a_5002_ = lean_ctor_get(v___x_5001_, 0);
v_isSharedCheck_5009_ = !lean_is_exclusive(v___x_5001_);
if (v_isSharedCheck_5009_ == 0)
{
v___x_5004_ = v___x_5001_;
v_isShared_5005_ = v_isSharedCheck_5009_;
goto v_resetjp_5003_;
}
else
{
lean_inc(v_a_5002_);
lean_dec(v___x_5001_);
v___x_5004_ = lean_box(0);
v_isShared_5005_ = v_isSharedCheck_5009_;
goto v_resetjp_5003_;
}
v_resetjp_5003_:
{
lean_object* v___x_5007_; 
if (v_isShared_5005_ == 0)
{
lean_ctor_set_tag(v___x_5004_, 1);
v___x_5007_ = v___x_5004_;
goto v_reusejp_5006_;
}
else
{
lean_object* v_reuseFailAlloc_5008_; 
v_reuseFailAlloc_5008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5008_, 0, v_a_5002_);
v___x_5007_ = v_reuseFailAlloc_5008_;
goto v_reusejp_5006_;
}
v_reusejp_5006_:
{
v_val_4998_ = v___x_5007_;
goto v___jp_4997_;
}
}
}
else
{
lean_object* v_a_5010_; lean_object* v___x_5012_; uint8_t v_isShared_5013_; uint8_t v_isSharedCheck_5017_; 
v_a_5010_ = lean_ctor_get(v___x_5001_, 0);
v_isSharedCheck_5017_ = !lean_is_exclusive(v___x_5001_);
if (v_isSharedCheck_5017_ == 0)
{
v___x_5012_ = v___x_5001_;
v_isShared_5013_ = v_isSharedCheck_5017_;
goto v_resetjp_5011_;
}
else
{
lean_inc(v_a_5010_);
lean_dec(v___x_5001_);
v___x_5012_ = lean_box(0);
v_isShared_5013_ = v_isSharedCheck_5017_;
goto v_resetjp_5011_;
}
v_resetjp_5011_:
{
lean_object* v___x_5015_; 
if (v_isShared_5013_ == 0)
{
lean_ctor_set_tag(v___x_5012_, 0);
v___x_5015_ = v___x_5012_;
goto v_reusejp_5014_;
}
else
{
lean_object* v_reuseFailAlloc_5016_; 
v_reuseFailAlloc_5016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5016_, 0, v_a_5010_);
v___x_5015_ = v_reuseFailAlloc_5016_;
goto v_reusejp_5014_;
}
v_reusejp_5014_:
{
v_val_4998_ = v___x_5015_;
goto v___jp_4997_;
}
}
}
v___jp_4997_:
{
lean_object* v___x_4999_; lean_object* v___x_5000_; 
v___x_4999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4999_, 0, v_val_4998_);
v___x_5000_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4995_, v___x_4996_, v___x_4999_, v___f_4994_);
return v___x_5000_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___boxed(lean_object* v_context_5018_, lean_object* v_op_5019_, lean_object* v_flags_5020_, lean_object* v_payload_5021_, lean_object* v_failurePrefix_5022_, lean_object* v_a_5023_){
_start:
{
uint32_t v_op_boxed_5024_; uint64_t v_flags_boxed_5025_; lean_object* v_res_5026_; 
v_op_boxed_5024_ = lean_unbox_uint32(v_op_5019_);
lean_dec(v_op_5019_);
v_flags_boxed_5025_ = lean_unbox_uint64(v_flags_5020_);
lean_dec_ref(v_flags_5020_);
v_res_5026_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(v_context_5018_, v_op_boxed_5024_, v_flags_boxed_5025_, v_payload_5021_, v_failurePrefix_5022_);
return v_res_5026_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0(void){
_start:
{
uint64_t v___x_5027_; uint8_t v___x_5028_; uint64_t v___x_5029_; 
v___x_5027_ = 8ULL;
v___x_5028_ = 0;
v___x_5029_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(v___x_5028_, v___x_5027_);
return v___x_5029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(lean_object* v_o_5030_, lean_object* v_name_5031_, lean_object* v_args_5032_){
_start:
{
lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; uint32_t v___x_5039_; uint64_t v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; 
v___x_5034_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5035_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5035_, 0, v_o_5030_);
lean_ctor_set(v___x_5035_, 1, v___x_5034_);
lean_inc_ref(v_name_5031_);
v___x_5036_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5036_, 0, v_name_5031_);
v___x_5037_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_5038_ = lean_string_append(v___x_5037_, v_name_5031_);
lean_dec_ref(v_name_5031_);
v___x_5039_ = 205;
v___x_5040_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0);
v___x_5041_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5041_, 0, v_args_5032_);
v___x_5042_ = lean_unsigned_to_nat(3u);
v___x_5043_ = lean_mk_empty_array_with_capacity(v___x_5042_);
v___x_5044_ = lean_array_push(v___x_5043_, v___x_5035_);
v___x_5045_ = lean_array_push(v___x_5044_, v___x_5036_);
v___x_5046_ = lean_array_push(v___x_5045_, v___x_5041_);
v___x_5047_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5047_, 0, v___x_5046_);
v___x_5048_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(v___x_5038_, v___x_5039_, v___x_5040_, v___x_5047_, v___x_5034_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___boxed(lean_object* v_o_5049_, lean_object* v_name_5050_, lean_object* v_args_5051_, lean_object* v___y_5052_){
_start:
{
lean_object* v_res_5053_; 
v_res_5053_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(v_o_5049_, v_name_5050_, v_args_5051_);
return v_res_5053_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(size_t v_sz_5054_, size_t v_i_5055_, lean_object* v_bs_5056_){
_start:
{
uint8_t v___x_5057_; 
v___x_5057_ = lean_usize_dec_lt(v_i_5055_, v_sz_5054_);
if (v___x_5057_ == 0)
{
return v_bs_5056_;
}
else
{
lean_object* v_v_5058_; lean_object* v___x_5059_; lean_object* v_bs_x27_5060_; lean_object* v___y_5062_; uint8_t v___x_5067_; 
v_v_5058_ = lean_array_uget(v_bs_5056_, v_i_5055_);
v___x_5059_ = lean_unsigned_to_nat(0u);
v_bs_x27_5060_ = lean_array_uset(v_bs_5056_, v_i_5055_, v___x_5059_);
v___x_5067_ = lean_unbox(v_v_5058_);
lean_dec(v_v_5058_);
switch(v___x_5067_)
{
case 0:
{
lean_object* v___x_5068_; 
v___x_5068_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__1));
v___y_5062_ = v___x_5068_;
goto v___jp_5061_;
}
case 1:
{
lean_object* v___x_5069_; 
v___x_5069_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__3));
v___y_5062_ = v___x_5069_;
goto v___jp_5061_;
}
case 2:
{
lean_object* v___x_5070_; 
v___x_5070_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__5));
v___y_5062_ = v___x_5070_;
goto v___jp_5061_;
}
case 3:
{
lean_object* v___x_5071_; 
v___x_5071_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__7));
v___y_5062_ = v___x_5071_;
goto v___jp_5061_;
}
case 4:
{
lean_object* v___x_5072_; 
v___x_5072_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__9));
v___y_5062_ = v___x_5072_;
goto v___jp_5061_;
}
case 5:
{
lean_object* v___x_5073_; 
v___x_5073_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__11));
v___y_5062_ = v___x_5073_;
goto v___jp_5061_;
}
case 6:
{
lean_object* v___x_5074_; 
v___x_5074_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__13));
v___y_5062_ = v___x_5074_;
goto v___jp_5061_;
}
case 7:
{
lean_object* v___x_5075_; 
v___x_5075_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__15));
v___y_5062_ = v___x_5075_;
goto v___jp_5061_;
}
case 8:
{
lean_object* v___x_5076_; 
v___x_5076_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__17));
v___y_5062_ = v___x_5076_;
goto v___jp_5061_;
}
case 9:
{
lean_object* v___x_5077_; 
v___x_5077_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__19));
v___y_5062_ = v___x_5077_;
goto v___jp_5061_;
}
case 10:
{
lean_object* v___x_5078_; 
v___x_5078_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__21));
v___y_5062_ = v___x_5078_;
goto v___jp_5061_;
}
default: 
{
lean_object* v___x_5079_; 
v___x_5079_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__23));
v___y_5062_ = v___x_5079_;
goto v___jp_5061_;
}
}
v___jp_5061_:
{
size_t v___x_5063_; size_t v___x_5064_; lean_object* v___x_5065_; 
v___x_5063_ = ((size_t)1ULL);
v___x_5064_ = lean_usize_add(v_i_5055_, v___x_5063_);
lean_inc(v___y_5062_);
v___x_5065_ = lean_array_uset(v_bs_x27_5060_, v_i_5055_, v___y_5062_);
v_i_5055_ = v___x_5064_;
v_bs_5056_ = v___x_5065_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0___boxed(lean_object* v_sz_5080_, lean_object* v_i_5081_, lean_object* v_bs_5082_){
_start:
{
size_t v_sz_boxed_5083_; size_t v_i_boxed_5084_; lean_object* v_res_5085_; 
v_sz_boxed_5083_ = lean_unbox_usize(v_sz_5080_);
lean_dec(v_sz_5080_);
v_i_boxed_5084_ = lean_unbox_usize(v_i_5081_);
lean_dec(v_i_5081_);
v_res_5085_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_boxed_5083_, v_i_boxed_5084_, v_bs_5082_);
return v_res_5085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey(lean_object* v_self_5087_, lean_object* v_algorithm_5088_, uint8_t v_extractable_5089_, lean_object* v_keyUsages_5090_){
_start:
{
lean_object* v___x_5092_; lean_object* v___y_5094_; 
v___x_5092_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_generateKey___closed__0));
if (lean_obj_tag(v_algorithm_5088_) == 0)
{
lean_object* v_value_5107_; 
v_value_5107_ = lean_ctor_get(v_algorithm_5088_, 0);
lean_inc(v_value_5107_);
lean_dec_ref_known(v_algorithm_5088_, 1);
v___y_5094_ = v_value_5107_;
goto v___jp_5093_;
}
else
{
lean_object* v_value_5108_; lean_object* v___x_5110_; uint8_t v_isShared_5111_; uint8_t v_isSharedCheck_5115_; 
v_value_5108_ = lean_ctor_get(v_algorithm_5088_, 0);
v_isSharedCheck_5115_ = !lean_is_exclusive(v_algorithm_5088_);
if (v_isSharedCheck_5115_ == 0)
{
v___x_5110_ = v_algorithm_5088_;
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
else
{
lean_inc(v_value_5108_);
lean_dec(v_algorithm_5088_);
v___x_5110_ = lean_box(0);
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
v_resetjp_5109_:
{
lean_object* v___x_5113_; 
if (v_isShared_5111_ == 0)
{
lean_ctor_set_tag(v___x_5110_, 4);
v___x_5113_ = v___x_5110_;
goto v_reusejp_5112_;
}
else
{
lean_object* v_reuseFailAlloc_5114_; 
v_reuseFailAlloc_5114_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5114_, 0, v_value_5108_);
v___x_5113_ = v_reuseFailAlloc_5114_;
goto v_reusejp_5112_;
}
v_reusejp_5112_:
{
v___y_5094_ = v___x_5113_;
goto v___jp_5093_;
}
}
}
v___jp_5093_:
{
lean_object* v___x_5095_; size_t v_sz_5096_; size_t v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; 
v___x_5095_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5095_, 0, v_extractable_5089_);
v_sz_5096_ = lean_array_size(v_keyUsages_5090_);
v___x_5097_ = ((size_t)0ULL);
v___x_5098_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5096_, v___x_5097_, v_keyUsages_5090_);
v___x_5099_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5099_, 0, v___x_5098_);
v___x_5100_ = lean_unsigned_to_nat(3u);
v___x_5101_ = lean_mk_empty_array_with_capacity(v___x_5100_);
v___x_5102_ = lean_array_push(v___x_5101_, v___y_5094_);
v___x_5103_ = lean_array_push(v___x_5102_, v___x_5095_);
v___x_5104_ = lean_array_push(v___x_5103_, v___x_5099_);
v___x_5105_ = l_Lasm_JS_Web_Support_args(v___x_5104_);
v___x_5106_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(v_self_5087_, v___x_5092_, v___x_5105_);
return v___x_5106_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey___boxed(lean_object* v_self_5116_, lean_object* v_algorithm_5117_, lean_object* v_extractable_5118_, lean_object* v_keyUsages_5119_, lean_object* v_a_5120_){
_start:
{
uint8_t v_extractable_boxed_5121_; lean_object* v_res_5122_; 
v_extractable_boxed_5121_ = lean_unbox(v_extractable_5118_);
v_res_5122_ = l_Lasm_JS_Web_SubtleCrypto_generateKey(v_self_5116_, v_algorithm_5117_, v_extractable_boxed_5121_, v_keyUsages_5119_);
return v_res_5122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0(lean_object* v_x_5123_){
_start:
{
if (lean_obj_tag(v_x_5123_) == 0)
{
lean_object* v_a_5125_; lean_object* v___x_5127_; uint8_t v_isShared_5128_; uint8_t v_isSharedCheck_5133_; 
v_a_5125_ = lean_ctor_get(v_x_5123_, 0);
v_isSharedCheck_5133_ = !lean_is_exclusive(v_x_5123_);
if (v_isSharedCheck_5133_ == 0)
{
v___x_5127_ = v_x_5123_;
v_isShared_5128_ = v_isSharedCheck_5133_;
goto v_resetjp_5126_;
}
else
{
lean_inc(v_a_5125_);
lean_dec(v_x_5123_);
v___x_5127_ = lean_box(0);
v_isShared_5128_ = v_isSharedCheck_5133_;
goto v_resetjp_5126_;
}
v_resetjp_5126_:
{
lean_object* v___x_5130_; 
if (v_isShared_5128_ == 0)
{
v___x_5130_ = v___x_5127_;
goto v_reusejp_5129_;
}
else
{
lean_object* v_reuseFailAlloc_5132_; 
v_reuseFailAlloc_5132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5132_, 0, v_a_5125_);
v___x_5130_ = v_reuseFailAlloc_5132_;
goto v_reusejp_5129_;
}
v_reusejp_5129_:
{
lean_object* v___x_5131_; 
v___x_5131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5131_, 0, v___x_5130_);
return v___x_5131_;
}
}
}
else
{
lean_object* v_a_5134_; lean_object* v___x_5136_; uint8_t v_isShared_5137_; uint8_t v_isSharedCheck_5142_; 
v_a_5134_ = lean_ctor_get(v_x_5123_, 0);
v_isSharedCheck_5142_ = !lean_is_exclusive(v_x_5123_);
if (v_isSharedCheck_5142_ == 0)
{
v___x_5136_ = v_x_5123_;
v_isShared_5137_ = v_isSharedCheck_5142_;
goto v_resetjp_5135_;
}
else
{
lean_inc(v_a_5134_);
lean_dec(v_x_5123_);
v___x_5136_ = lean_box(0);
v_isShared_5137_ = v_isSharedCheck_5142_;
goto v_resetjp_5135_;
}
v_resetjp_5135_:
{
lean_object* v___x_5139_; 
if (v_isShared_5137_ == 0)
{
v___x_5139_ = v___x_5136_;
goto v_reusejp_5138_;
}
else
{
lean_object* v_reuseFailAlloc_5141_; 
v_reuseFailAlloc_5141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5141_, 0, v_a_5134_);
v___x_5139_ = v_reuseFailAlloc_5141_;
goto v_reusejp_5138_;
}
v_reusejp_5138_:
{
lean_object* v___x_5140_; 
v___x_5140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5140_, 0, v___x_5139_);
return v___x_5140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0___boxed(lean_object* v_x_5143_, lean_object* v___y_5144_){
_start:
{
lean_object* v_res_5145_; 
v_res_5145_ = l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0(v_x_5143_);
return v_res_5145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey(lean_object* v_self_5147_, lean_object* v_algorithm_5148_, lean_object* v_baseKey_5149_, lean_object* v_derivedKeyType_5150_, uint8_t v_extractable_5151_, lean_object* v_keyUsages_5152_){
_start:
{
lean_object* v___f_5154_; lean_object* v___x_5155_; lean_object* v___y_5157_; lean_object* v___y_5158_; lean_object* v___y_5159_; lean_object* v___y_5178_; 
v___f_5154_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0));
v___x_5155_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8));
if (lean_obj_tag(v_algorithm_5148_) == 0)
{
lean_object* v_value_5190_; 
v_value_5190_ = lean_ctor_get(v_algorithm_5148_, 0);
lean_inc(v_value_5190_);
lean_dec_ref_known(v_algorithm_5148_, 1);
v___y_5178_ = v_value_5190_;
goto v___jp_5177_;
}
else
{
lean_object* v_value_5191_; lean_object* v___x_5193_; uint8_t v_isShared_5194_; uint8_t v_isSharedCheck_5198_; 
v_value_5191_ = lean_ctor_get(v_algorithm_5148_, 0);
v_isSharedCheck_5198_ = !lean_is_exclusive(v_algorithm_5148_);
if (v_isSharedCheck_5198_ == 0)
{
v___x_5193_ = v_algorithm_5148_;
v_isShared_5194_ = v_isSharedCheck_5198_;
goto v_resetjp_5192_;
}
else
{
lean_inc(v_value_5191_);
lean_dec(v_algorithm_5148_);
v___x_5193_ = lean_box(0);
v_isShared_5194_ = v_isSharedCheck_5198_;
goto v_resetjp_5192_;
}
v_resetjp_5192_:
{
lean_object* v___x_5196_; 
if (v_isShared_5194_ == 0)
{
lean_ctor_set_tag(v___x_5193_, 4);
v___x_5196_ = v___x_5193_;
goto v_reusejp_5195_;
}
else
{
lean_object* v_reuseFailAlloc_5197_; 
v_reuseFailAlloc_5197_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5197_, 0, v_value_5191_);
v___x_5196_ = v_reuseFailAlloc_5197_;
goto v_reusejp_5195_;
}
v_reusejp_5195_:
{
v___y_5178_ = v___x_5196_;
goto v___jp_5177_;
}
}
}
v___jp_5156_:
{
lean_object* v___x_5160_; size_t v_sz_5161_; size_t v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; uint8_t v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; 
v___x_5160_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5160_, 0, v_extractable_5151_);
v_sz_5161_ = lean_array_size(v_keyUsages_5152_);
v___x_5162_ = ((size_t)0ULL);
v___x_5163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5161_, v___x_5162_, v_keyUsages_5152_);
v___x_5164_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5164_, 0, v___x_5163_);
v___x_5165_ = lean_unsigned_to_nat(5u);
v___x_5166_ = lean_mk_empty_array_with_capacity(v___x_5165_);
v___x_5167_ = lean_array_push(v___x_5166_, v___y_5157_);
v___x_5168_ = lean_array_push(v___x_5167_, v___y_5158_);
v___x_5169_ = lean_array_push(v___x_5168_, v___y_5159_);
v___x_5170_ = lean_array_push(v___x_5169_, v___x_5160_);
v___x_5171_ = lean_array_push(v___x_5170_, v___x_5164_);
v___x_5172_ = l_Lasm_JS_Web_Support_args(v___x_5171_);
v___x_5173_ = lean_unsigned_to_nat(0u);
v___x_5174_ = 0;
v___x_5175_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5147_, v___x_5155_, v___x_5172_);
v___x_5176_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5173_, v___x_5174_, v___x_5175_, v___f_5154_);
return v___x_5176_;
}
v___jp_5177_:
{
lean_object* v___x_5179_; lean_object* v___x_5180_; 
v___x_5179_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5180_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5180_, 0, v_baseKey_5149_);
lean_ctor_set(v___x_5180_, 1, v___x_5179_);
if (lean_obj_tag(v_derivedKeyType_5150_) == 0)
{
lean_object* v_value_5181_; 
v_value_5181_ = lean_ctor_get(v_derivedKeyType_5150_, 0);
lean_inc(v_value_5181_);
lean_dec_ref_known(v_derivedKeyType_5150_, 1);
v___y_5157_ = v___y_5178_;
v___y_5158_ = v___x_5180_;
v___y_5159_ = v_value_5181_;
goto v___jp_5156_;
}
else
{
lean_object* v_value_5182_; lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5189_; 
v_value_5182_ = lean_ctor_get(v_derivedKeyType_5150_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v_derivedKeyType_5150_);
if (v_isSharedCheck_5189_ == 0)
{
v___x_5184_ = v_derivedKeyType_5150_;
v_isShared_5185_ = v_isSharedCheck_5189_;
goto v_resetjp_5183_;
}
else
{
lean_inc(v_value_5182_);
lean_dec(v_derivedKeyType_5150_);
v___x_5184_ = lean_box(0);
v_isShared_5185_ = v_isSharedCheck_5189_;
goto v_resetjp_5183_;
}
v_resetjp_5183_:
{
lean_object* v___x_5187_; 
if (v_isShared_5185_ == 0)
{
lean_ctor_set_tag(v___x_5184_, 4);
v___x_5187_ = v___x_5184_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v_value_5182_);
v___x_5187_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
v___y_5157_ = v___y_5178_;
v___y_5158_ = v___x_5180_;
v___y_5159_ = v___x_5187_;
goto v___jp_5156_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___boxed(lean_object* v_self_5199_, lean_object* v_algorithm_5200_, lean_object* v_baseKey_5201_, lean_object* v_derivedKeyType_5202_, lean_object* v_extractable_5203_, lean_object* v_keyUsages_5204_, lean_object* v_a_5205_){
_start:
{
uint8_t v_extractable_boxed_5206_; lean_object* v_res_5207_; 
v_extractable_boxed_5206_ = lean_unbox(v_extractable_5203_);
v_res_5207_ = l_Lasm_JS_Web_SubtleCrypto_deriveKey(v_self_5199_, v_algorithm_5200_, v_baseKey_5201_, v_derivedKeyType_5202_, v_extractable_boxed_5206_, v_keyUsages_5204_);
return v_res_5207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_deriveBits_spec__0(lean_object* v_x_5208_){
_start:
{
if (lean_obj_tag(v_x_5208_) == 0)
{
lean_object* v___x_5209_; 
v___x_5209_ = lean_box(0);
return v___x_5209_;
}
else
{
lean_object* v_val_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5223_; 
v_val_5210_ = lean_ctor_get(v_x_5208_, 0);
v_isSharedCheck_5223_ = !lean_is_exclusive(v_x_5208_);
if (v_isSharedCheck_5223_ == 0)
{
v___x_5212_ = v_x_5208_;
v_isShared_5213_ = v_isSharedCheck_5223_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_val_5210_);
lean_dec(v_x_5208_);
v___x_5212_ = lean_box(0);
v_isShared_5213_ = v_isSharedCheck_5223_;
goto v_resetjp_5211_;
}
v_resetjp_5211_:
{
lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; uint8_t v___x_5217_; 
v___x_5214_ = lean_nat_to_int(v_val_5210_);
v___x_5215_ = lean_nat_abs(v___x_5214_);
v___x_5216_ = lean_cstr_to_nat("9007199254740991");
v___x_5217_ = lean_nat_dec_le(v___x_5215_, v___x_5216_);
lean_dec(v___x_5215_);
if (v___x_5217_ == 0)
{
lean_object* v___x_5219_; 
if (v_isShared_5213_ == 0)
{
lean_ctor_set_tag(v___x_5212_, 5);
lean_ctor_set(v___x_5212_, 0, v___x_5214_);
v___x_5219_ = v___x_5212_;
goto v_reusejp_5218_;
}
else
{
lean_object* v_reuseFailAlloc_5220_; 
v_reuseFailAlloc_5220_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5220_, 0, v___x_5214_);
v___x_5219_ = v_reuseFailAlloc_5220_;
goto v_reusejp_5218_;
}
v_reusejp_5218_:
{
return v___x_5219_;
}
}
else
{
double v___x_5221_; lean_object* v___x_5222_; 
lean_del_object(v___x_5212_);
v___x_5221_ = l_Float_ofInt(v___x_5214_);
lean_dec(v___x_5214_);
v___x_5222_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5222_, 0, v___x_5221_);
return v___x_5222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits(lean_object* v_self_5224_, lean_object* v_algorithm_5225_, lean_object* v_baseKey_5226_, lean_object* v_length_5227_){
_start:
{
lean_object* v___f_5229_; lean_object* v___x_5230_; lean_object* v___y_5232_; 
v___f_5229_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_5230_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10));
if (lean_obj_tag(v_algorithm_5225_) == 0)
{
lean_object* v_value_5246_; 
v_value_5246_ = lean_ctor_get(v_algorithm_5225_, 0);
lean_inc(v_value_5246_);
lean_dec_ref_known(v_algorithm_5225_, 1);
v___y_5232_ = v_value_5246_;
goto v___jp_5231_;
}
else
{
lean_object* v_value_5247_; lean_object* v___x_5249_; uint8_t v_isShared_5250_; uint8_t v_isSharedCheck_5254_; 
v_value_5247_ = lean_ctor_get(v_algorithm_5225_, 0);
v_isSharedCheck_5254_ = !lean_is_exclusive(v_algorithm_5225_);
if (v_isSharedCheck_5254_ == 0)
{
v___x_5249_ = v_algorithm_5225_;
v_isShared_5250_ = v_isSharedCheck_5254_;
goto v_resetjp_5248_;
}
else
{
lean_inc(v_value_5247_);
lean_dec(v_algorithm_5225_);
v___x_5249_ = lean_box(0);
v_isShared_5250_ = v_isSharedCheck_5254_;
goto v_resetjp_5248_;
}
v_resetjp_5248_:
{
lean_object* v___x_5252_; 
if (v_isShared_5250_ == 0)
{
lean_ctor_set_tag(v___x_5249_, 4);
v___x_5252_ = v___x_5249_;
goto v_reusejp_5251_;
}
else
{
lean_object* v_reuseFailAlloc_5253_; 
v_reuseFailAlloc_5253_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5253_, 0, v_value_5247_);
v___x_5252_ = v_reuseFailAlloc_5253_;
goto v_reusejp_5251_;
}
v_reusejp_5251_:
{
v___y_5232_ = v___x_5252_;
goto v___jp_5231_;
}
}
}
v___jp_5231_:
{
lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; lean_object* v___x_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; uint8_t v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; 
v___x_5233_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5234_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5234_, 0, v_baseKey_5226_);
lean_ctor_set(v___x_5234_, 1, v___x_5233_);
v___x_5235_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_deriveBits_spec__0(v_length_5227_);
v___x_5236_ = lean_unsigned_to_nat(3u);
v___x_5237_ = lean_mk_empty_array_with_capacity(v___x_5236_);
v___x_5238_ = lean_array_push(v___x_5237_, v___y_5232_);
v___x_5239_ = lean_array_push(v___x_5238_, v___x_5234_);
v___x_5240_ = lean_array_push(v___x_5239_, v___x_5235_);
v___x_5241_ = l_Lasm_JS_Web_Support_args(v___x_5240_);
v___x_5242_ = lean_unsigned_to_nat(0u);
v___x_5243_ = 0;
v___x_5244_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5224_, v___x_5230_, v___x_5241_);
v___x_5245_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5242_, v___x_5243_, v___x_5244_, v___f_5229_);
return v___x_5245_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits___boxed(lean_object* v_self_5255_, lean_object* v_algorithm_5256_, lean_object* v_baseKey_5257_, lean_object* v_length_5258_, lean_object* v_a_5259_){
_start:
{
lean_object* v_res_5260_; 
v_res_5260_ = l_Lasm_JS_Web_SubtleCrypto_deriveBits(v_self_5255_, v_algorithm_5256_, v_baseKey_5257_, v_length_5258_);
return v_res_5260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(lean_object* v_x_5261_){
_start:
{
if (lean_obj_tag(v_x_5261_) == 0)
{
lean_object* v___x_5262_; 
v___x_5262_ = lean_box(0);
return v___x_5262_;
}
else
{
lean_object* v_val_5263_; lean_object* v___x_5265_; uint8_t v_isShared_5266_; uint8_t v_isSharedCheck_5270_; 
v_val_5263_ = lean_ctor_get(v_x_5261_, 0);
v_isSharedCheck_5270_ = !lean_is_exclusive(v_x_5261_);
if (v_isSharedCheck_5270_ == 0)
{
v___x_5265_ = v_x_5261_;
v_isShared_5266_ = v_isSharedCheck_5270_;
goto v_resetjp_5264_;
}
else
{
lean_inc(v_val_5263_);
lean_dec(v_x_5261_);
v___x_5265_ = lean_box(0);
v_isShared_5266_ = v_isSharedCheck_5270_;
goto v_resetjp_5264_;
}
v_resetjp_5264_:
{
lean_object* v___x_5268_; 
if (v_isShared_5266_ == 0)
{
lean_ctor_set_tag(v___x_5265_, 4);
v___x_5268_ = v___x_5265_;
goto v_reusejp_5267_;
}
else
{
lean_object* v_reuseFailAlloc_5269_; 
v_reuseFailAlloc_5269_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5269_, 0, v_val_5263_);
v___x_5268_ = v_reuseFailAlloc_5269_;
goto v_reusejp_5267_;
}
v_reusejp_5267_:
{
return v___x_5268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(lean_object* v_x_5271_){
_start:
{
if (lean_obj_tag(v_x_5271_) == 0)
{
lean_object* v___x_5272_; 
v___x_5272_ = lean_box(0);
return v___x_5272_;
}
else
{
lean_object* v_val_5273_; lean_object* v___x_5274_; uint8_t v___x_5275_; 
v_val_5273_ = lean_ctor_get(v_x_5271_, 0);
v___x_5274_ = lean_alloc_ctor(2, 0, 1);
v___x_5275_ = lean_unbox(v_val_5273_);
lean_ctor_set_uint8(v___x_5274_, 0, v___x_5275_);
return v___x_5274_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2___boxed(lean_object* v_x_5276_){
_start:
{
lean_object* v_res_5277_; 
v_res_5277_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(v_x_5276_);
lean_dec(v_x_5276_);
return v_res_5277_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(size_t v_sz_5278_, size_t v_i_5279_, lean_object* v_bs_5280_){
_start:
{
uint8_t v___x_5281_; 
v___x_5281_ = lean_usize_dec_lt(v_i_5279_, v_sz_5278_);
if (v___x_5281_ == 0)
{
return v_bs_5280_;
}
else
{
lean_object* v_v_5282_; lean_object* v___x_5283_; lean_object* v_bs_x27_5284_; lean_object* v___x_5285_; size_t v___x_5286_; size_t v___x_5287_; lean_object* v___x_5288_; 
v_v_5282_ = lean_array_uget(v_bs_5280_, v_i_5279_);
v___x_5283_ = lean_unsigned_to_nat(0u);
v_bs_x27_5284_ = lean_array_uset(v_bs_5280_, v_i_5279_, v___x_5283_);
v___x_5285_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5285_, 0, v_v_5282_);
v___x_5286_ = ((size_t)1ULL);
v___x_5287_ = lean_usize_add(v_i_5279_, v___x_5286_);
v___x_5288_ = lean_array_uset(v_bs_x27_5284_, v_i_5279_, v___x_5285_);
v_i_5279_ = v___x_5287_;
v_bs_5280_ = v___x_5288_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1___boxed(lean_object* v_sz_5290_, lean_object* v_i_5291_, lean_object* v_bs_5292_){
_start:
{
size_t v_sz_boxed_5293_; size_t v_i_boxed_5294_; lean_object* v_res_5295_; 
v_sz_boxed_5293_ = lean_unbox_usize(v_sz_5290_);
lean_dec(v_sz_5290_);
v_i_boxed_5294_ = lean_unbox_usize(v_i_5291_);
lean_dec(v_i_5291_);
v_res_5295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(v_sz_boxed_5293_, v_i_boxed_5294_, v_bs_5292_);
return v_res_5295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1(lean_object* v_x_5296_){
_start:
{
if (lean_obj_tag(v_x_5296_) == 0)
{
lean_object* v___x_5297_; 
v___x_5297_ = lean_box(0);
return v___x_5297_;
}
else
{
lean_object* v_val_5298_; lean_object* v___x_5300_; uint8_t v_isShared_5301_; uint8_t v_isSharedCheck_5308_; 
v_val_5298_ = lean_ctor_get(v_x_5296_, 0);
v_isSharedCheck_5308_ = !lean_is_exclusive(v_x_5296_);
if (v_isSharedCheck_5308_ == 0)
{
v___x_5300_ = v_x_5296_;
v_isShared_5301_ = v_isSharedCheck_5308_;
goto v_resetjp_5299_;
}
else
{
lean_inc(v_val_5298_);
lean_dec(v_x_5296_);
v___x_5300_ = lean_box(0);
v_isShared_5301_ = v_isSharedCheck_5308_;
goto v_resetjp_5299_;
}
v_resetjp_5299_:
{
size_t v_sz_5302_; size_t v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5306_; 
v_sz_5302_ = lean_array_size(v_val_5298_);
v___x_5303_ = ((size_t)0ULL);
v___x_5304_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(v_sz_5302_, v___x_5303_, v_val_5298_);
if (v_isShared_5301_ == 0)
{
lean_ctor_set_tag(v___x_5300_, 7);
lean_ctor_set(v___x_5300_, 0, v___x_5304_);
v___x_5306_ = v___x_5300_;
goto v_reusejp_5305_;
}
else
{
lean_object* v_reuseFailAlloc_5307_; 
v_reuseFailAlloc_5307_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5307_, 0, v___x_5304_);
v___x_5306_ = v_reuseFailAlloc_5307_;
goto v_reusejp_5305_;
}
v_reusejp_5305_:
{
return v___x_5306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(size_t v_sz_5309_, size_t v_i_5310_, lean_object* v_bs_5311_){
_start:
{
uint8_t v___x_5312_; 
v___x_5312_ = lean_usize_dec_lt(v_i_5310_, v_sz_5309_);
if (v___x_5312_ == 0)
{
return v_bs_5311_;
}
else
{
lean_object* v_v_5313_; lean_object* v_r_5314_; lean_object* v_d_5315_; lean_object* v_t_5316_; lean_object* v___x_5317_; lean_object* v_bs_x27_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; size_t v___x_5334_; size_t v___x_5335_; lean_object* v___x_5336_; 
v_v_5313_ = lean_array_uget_borrowed(v_bs_5311_, v_i_5310_);
v_r_5314_ = lean_ctor_get(v_v_5313_, 0);
lean_inc(v_r_5314_);
v_d_5315_ = lean_ctor_get(v_v_5313_, 1);
lean_inc(v_d_5315_);
v_t_5316_ = lean_ctor_get(v_v_5313_, 2);
lean_inc(v_t_5316_);
v___x_5317_ = lean_unsigned_to_nat(0u);
v_bs_x27_5318_ = lean_array_uset(v_bs_5311_, v_i_5310_, v___x_5317_);
v___x_5319_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
v___x_5320_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_r_5314_);
v___x_5321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5321_, 0, v___x_5319_);
lean_ctor_set(v___x_5321_, 1, v___x_5320_);
v___x_5322_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_5323_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_d_5315_);
v___x_5324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5324_, 0, v___x_5322_);
lean_ctor_set(v___x_5324_, 1, v___x_5323_);
v___x_5325_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_5326_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_t_5316_);
v___x_5327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5327_, 0, v___x_5325_);
lean_ctor_set(v___x_5327_, 1, v___x_5326_);
v___x_5328_ = lean_unsigned_to_nat(3u);
v___x_5329_ = lean_mk_empty_array_with_capacity(v___x_5328_);
v___x_5330_ = lean_array_push(v___x_5329_, v___x_5321_);
v___x_5331_ = lean_array_push(v___x_5330_, v___x_5324_);
v___x_5332_ = lean_array_push(v___x_5331_, v___x_5327_);
v___x_5333_ = l_Lasm_JS_Web_Support_fields(v___x_5332_);
lean_dec_ref(v___x_5332_);
v___x_5334_ = ((size_t)1ULL);
v___x_5335_ = lean_usize_add(v_i_5310_, v___x_5334_);
v___x_5336_ = lean_array_uset(v_bs_x27_5318_, v_i_5310_, v___x_5333_);
v_i_5310_ = v___x_5335_;
v_bs_5311_ = v___x_5336_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4___boxed(lean_object* v_sz_5338_, lean_object* v_i_5339_, lean_object* v_bs_5340_){
_start:
{
size_t v_sz_boxed_5341_; size_t v_i_boxed_5342_; lean_object* v_res_5343_; 
v_sz_boxed_5341_ = lean_unbox_usize(v_sz_5338_);
lean_dec(v_sz_5338_);
v_i_boxed_5342_ = lean_unbox_usize(v_i_5339_);
lean_dec(v_i_5339_);
v_res_5343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(v_sz_boxed_5341_, v_i_boxed_5342_, v_bs_5340_);
return v_res_5343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3(lean_object* v_x_5344_){
_start:
{
if (lean_obj_tag(v_x_5344_) == 0)
{
lean_object* v___x_5345_; 
v___x_5345_ = lean_box(0);
return v___x_5345_;
}
else
{
lean_object* v_val_5346_; lean_object* v___x_5348_; uint8_t v_isShared_5349_; uint8_t v_isSharedCheck_5356_; 
v_val_5346_ = lean_ctor_get(v_x_5344_, 0);
v_isSharedCheck_5356_ = !lean_is_exclusive(v_x_5344_);
if (v_isSharedCheck_5356_ == 0)
{
v___x_5348_ = v_x_5344_;
v_isShared_5349_ = v_isSharedCheck_5356_;
goto v_resetjp_5347_;
}
else
{
lean_inc(v_val_5346_);
lean_dec(v_x_5344_);
v___x_5348_ = lean_box(0);
v_isShared_5349_ = v_isSharedCheck_5356_;
goto v_resetjp_5347_;
}
v_resetjp_5347_:
{
size_t v_sz_5350_; size_t v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5354_; 
v_sz_5350_ = lean_array_size(v_val_5346_);
v___x_5351_ = ((size_t)0ULL);
v___x_5352_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(v_sz_5350_, v___x_5351_, v_val_5346_);
if (v_isShared_5349_ == 0)
{
lean_ctor_set_tag(v___x_5348_, 7);
lean_ctor_set(v___x_5348_, 0, v___x_5352_);
v___x_5354_ = v___x_5348_;
goto v_reusejp_5353_;
}
else
{
lean_object* v_reuseFailAlloc_5355_; 
v_reuseFailAlloc_5355_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5355_, 0, v___x_5352_);
v___x_5354_ = v_reuseFailAlloc_5355_;
goto v_reusejp_5353_;
}
v_reusejp_5353_:
{
return v___x_5354_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey(lean_object* v_self_5358_, uint8_t v_format_5359_, lean_object* v_keyData_5360_, lean_object* v_algorithm_5361_, uint8_t v_extractable_5362_, lean_object* v_keyUsages_5363_){
_start:
{
lean_object* v___f_5365_; lean_object* v___x_5366_; lean_object* v___y_5368_; lean_object* v___y_5369_; lean_object* v___y_5370_; lean_object* v___y_5389_; lean_object* v___y_5390_; lean_object* v___y_5401_; 
v___f_5365_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0));
v___x_5366_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_importKey___closed__0));
switch(v_format_5359_)
{
case 0:
{
lean_object* v___x_5504_; 
v___x_5504_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5401_ = v___x_5504_;
goto v___jp_5400_;
}
case 1:
{
lean_object* v___x_5505_; 
v___x_5505_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5401_ = v___x_5505_;
goto v___jp_5400_;
}
case 2:
{
lean_object* v___x_5506_; 
v___x_5506_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5401_ = v___x_5506_;
goto v___jp_5400_;
}
case 3:
{
lean_object* v___x_5507_; 
v___x_5507_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5401_ = v___x_5507_;
goto v___jp_5400_;
}
case 4:
{
lean_object* v___x_5508_; 
v___x_5508_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5401_ = v___x_5508_;
goto v___jp_5400_;
}
case 5:
{
lean_object* v___x_5509_; 
v___x_5509_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5401_ = v___x_5509_;
goto v___jp_5400_;
}
case 6:
{
lean_object* v___x_5510_; 
v___x_5510_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5401_ = v___x_5510_;
goto v___jp_5400_;
}
default: 
{
lean_object* v___x_5511_; 
v___x_5511_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5401_ = v___x_5511_;
goto v___jp_5400_;
}
}
v___jp_5367_:
{
lean_object* v___x_5371_; size_t v_sz_5372_; size_t v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; uint8_t v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; 
v___x_5371_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5371_, 0, v_extractable_5362_);
v_sz_5372_ = lean_array_size(v_keyUsages_5363_);
v___x_5373_ = ((size_t)0ULL);
v___x_5374_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5372_, v___x_5373_, v_keyUsages_5363_);
v___x_5375_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5375_, 0, v___x_5374_);
v___x_5376_ = lean_unsigned_to_nat(5u);
v___x_5377_ = lean_mk_empty_array_with_capacity(v___x_5376_);
lean_inc(v___y_5368_);
v___x_5378_ = lean_array_push(v___x_5377_, v___y_5368_);
v___x_5379_ = lean_array_push(v___x_5378_, v___y_5369_);
v___x_5380_ = lean_array_push(v___x_5379_, v___y_5370_);
v___x_5381_ = lean_array_push(v___x_5380_, v___x_5371_);
v___x_5382_ = lean_array_push(v___x_5381_, v___x_5375_);
v___x_5383_ = l_Lasm_JS_Web_Support_args(v___x_5382_);
v___x_5384_ = lean_unsigned_to_nat(0u);
v___x_5385_ = 0;
v___x_5386_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5358_, v___x_5366_, v___x_5383_);
v___x_5387_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5384_, v___x_5385_, v___x_5386_, v___f_5365_);
return v___x_5387_;
}
v___jp_5388_:
{
if (lean_obj_tag(v_algorithm_5361_) == 0)
{
lean_object* v_value_5391_; 
v_value_5391_ = lean_ctor_get(v_algorithm_5361_, 0);
lean_inc(v_value_5391_);
lean_dec_ref_known(v_algorithm_5361_, 1);
v___y_5368_ = v___y_5389_;
v___y_5369_ = v___y_5390_;
v___y_5370_ = v_value_5391_;
goto v___jp_5367_;
}
else
{
lean_object* v_value_5392_; lean_object* v___x_5394_; uint8_t v_isShared_5395_; uint8_t v_isSharedCheck_5399_; 
v_value_5392_ = lean_ctor_get(v_algorithm_5361_, 0);
v_isSharedCheck_5399_ = !lean_is_exclusive(v_algorithm_5361_);
if (v_isSharedCheck_5399_ == 0)
{
v___x_5394_ = v_algorithm_5361_;
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
else
{
lean_inc(v_value_5392_);
lean_dec(v_algorithm_5361_);
v___x_5394_ = lean_box(0);
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
v_resetjp_5393_:
{
lean_object* v___x_5397_; 
if (v_isShared_5395_ == 0)
{
lean_ctor_set_tag(v___x_5394_, 4);
v___x_5397_ = v___x_5394_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5398_; 
v_reuseFailAlloc_5398_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5398_, 0, v_value_5392_);
v___x_5397_ = v_reuseFailAlloc_5398_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
v___y_5368_ = v___y_5389_;
v___y_5369_ = v___y_5390_;
v___y_5370_ = v___x_5397_;
goto v___jp_5367_;
}
}
}
}
v___jp_5400_:
{
if (lean_obj_tag(v_keyData_5360_) == 0)
{
lean_object* v_value_5402_; lean_object* v___x_5404_; uint8_t v_isShared_5405_; uint8_t v_isSharedCheck_5409_; 
v_value_5402_ = lean_ctor_get(v_keyData_5360_, 0);
v_isSharedCheck_5409_ = !lean_is_exclusive(v_keyData_5360_);
if (v_isSharedCheck_5409_ == 0)
{
v___x_5404_ = v_keyData_5360_;
v_isShared_5405_ = v_isSharedCheck_5409_;
goto v_resetjp_5403_;
}
else
{
lean_inc(v_value_5402_);
lean_dec(v_keyData_5360_);
v___x_5404_ = lean_box(0);
v_isShared_5405_ = v_isSharedCheck_5409_;
goto v_resetjp_5403_;
}
v_resetjp_5403_:
{
lean_object* v___x_5407_; 
if (v_isShared_5405_ == 0)
{
lean_ctor_set_tag(v___x_5404_, 6);
v___x_5407_ = v___x_5404_;
goto v_reusejp_5406_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v_value_5402_);
v___x_5407_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5406_;
}
v_reusejp_5406_:
{
v___y_5389_ = v___y_5401_;
v___y_5390_ = v___x_5407_;
goto v___jp_5388_;
}
}
}
else
{
lean_object* v_value_5410_; lean_object* v_kty_5411_; lean_object* v_use_5412_; lean_object* v_key__ops_5413_; lean_object* v_alg_5414_; lean_object* v_ext_5415_; lean_object* v_crv_5416_; lean_object* v_x_5417_; lean_object* v_y_5418_; lean_object* v_d_5419_; lean_object* v_n_5420_; lean_object* v_e_5421_; lean_object* v_p_5422_; lean_object* v_q_5423_; lean_object* v_dp_5424_; lean_object* v_dq_5425_; lean_object* v_qi_5426_; lean_object* v_oth_5427_; lean_object* v_k_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; lean_object* v___x_5474_; lean_object* v___x_5475_; lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; 
v_value_5410_ = lean_ctor_get(v_keyData_5360_, 0);
lean_inc_ref(v_value_5410_);
lean_dec_ref_known(v_keyData_5360_, 1);
v_kty_5411_ = lean_ctor_get(v_value_5410_, 0);
lean_inc(v_kty_5411_);
v_use_5412_ = lean_ctor_get(v_value_5410_, 1);
lean_inc(v_use_5412_);
v_key__ops_5413_ = lean_ctor_get(v_value_5410_, 2);
lean_inc(v_key__ops_5413_);
v_alg_5414_ = lean_ctor_get(v_value_5410_, 3);
lean_inc(v_alg_5414_);
v_ext_5415_ = lean_ctor_get(v_value_5410_, 4);
lean_inc(v_ext_5415_);
v_crv_5416_ = lean_ctor_get(v_value_5410_, 5);
lean_inc(v_crv_5416_);
v_x_5417_ = lean_ctor_get(v_value_5410_, 6);
lean_inc(v_x_5417_);
v_y_5418_ = lean_ctor_get(v_value_5410_, 7);
lean_inc(v_y_5418_);
v_d_5419_ = lean_ctor_get(v_value_5410_, 8);
lean_inc(v_d_5419_);
v_n_5420_ = lean_ctor_get(v_value_5410_, 9);
lean_inc(v_n_5420_);
v_e_5421_ = lean_ctor_get(v_value_5410_, 10);
lean_inc(v_e_5421_);
v_p_5422_ = lean_ctor_get(v_value_5410_, 11);
lean_inc(v_p_5422_);
v_q_5423_ = lean_ctor_get(v_value_5410_, 12);
lean_inc(v_q_5423_);
v_dp_5424_ = lean_ctor_get(v_value_5410_, 13);
lean_inc(v_dp_5424_);
v_dq_5425_ = lean_ctor_get(v_value_5410_, 14);
lean_inc(v_dq_5425_);
v_qi_5426_ = lean_ctor_get(v_value_5410_, 15);
lean_inc(v_qi_5426_);
v_oth_5427_ = lean_ctor_get(v_value_5410_, 16);
lean_inc(v_oth_5427_);
v_k_5428_ = lean_ctor_get(v_value_5410_, 17);
lean_inc(v_k_5428_);
lean_dec_ref(v_value_5410_);
v___x_5429_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
v___x_5430_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_kty_5411_);
v___x_5431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5431_, 0, v___x_5429_);
lean_ctor_set(v___x_5431_, 1, v___x_5430_);
v___x_5432_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_5433_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_use_5412_);
v___x_5434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5434_, 0, v___x_5432_);
lean_ctor_set(v___x_5434_, 1, v___x_5433_);
v___x_5435_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_5436_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1(v_key__ops_5413_);
v___x_5437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5437_, 0, v___x_5435_);
lean_ctor_set(v___x_5437_, 1, v___x_5436_);
v___x_5438_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_5439_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_alg_5414_);
v___x_5440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5440_, 0, v___x_5438_);
lean_ctor_set(v___x_5440_, 1, v___x_5439_);
v___x_5441_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_5442_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(v_ext_5415_);
lean_dec(v_ext_5415_);
v___x_5443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5443_, 0, v___x_5441_);
lean_ctor_set(v___x_5443_, 1, v___x_5442_);
v___x_5444_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_5445_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_crv_5416_);
v___x_5446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5446_, 0, v___x_5444_);
lean_ctor_set(v___x_5446_, 1, v___x_5445_);
v___x_5447_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_5448_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_x_5417_);
v___x_5449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5449_, 0, v___x_5447_);
lean_ctor_set(v___x_5449_, 1, v___x_5448_);
v___x_5450_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_5451_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_y_5418_);
v___x_5452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5452_, 0, v___x_5450_);
lean_ctor_set(v___x_5452_, 1, v___x_5451_);
v___x_5453_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_5454_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_d_5419_);
v___x_5455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5455_, 0, v___x_5453_);
lean_ctor_set(v___x_5455_, 1, v___x_5454_);
v___x_5456_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_5457_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_n_5420_);
v___x_5458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5458_, 0, v___x_5456_);
lean_ctor_set(v___x_5458_, 1, v___x_5457_);
v___x_5459_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_5460_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_e_5421_);
v___x_5461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5461_, 0, v___x_5459_);
lean_ctor_set(v___x_5461_, 1, v___x_5460_);
v___x_5462_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_5463_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_p_5422_);
v___x_5464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5464_, 0, v___x_5462_);
lean_ctor_set(v___x_5464_, 1, v___x_5463_);
v___x_5465_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_5466_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_q_5423_);
v___x_5467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5467_, 0, v___x_5465_);
lean_ctor_set(v___x_5467_, 1, v___x_5466_);
v___x_5468_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_5469_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_dp_5424_);
v___x_5470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5470_, 0, v___x_5468_);
lean_ctor_set(v___x_5470_, 1, v___x_5469_);
v___x_5471_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_5472_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_dq_5425_);
v___x_5473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5473_, 0, v___x_5471_);
lean_ctor_set(v___x_5473_, 1, v___x_5472_);
v___x_5474_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_5475_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_qi_5426_);
v___x_5476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5476_, 0, v___x_5474_);
lean_ctor_set(v___x_5476_, 1, v___x_5475_);
v___x_5477_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_5478_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3(v_oth_5427_);
v___x_5479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5479_, 0, v___x_5477_);
lean_ctor_set(v___x_5479_, 1, v___x_5478_);
v___x_5480_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_5481_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_k_5428_);
v___x_5482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5482_, 0, v___x_5480_);
lean_ctor_set(v___x_5482_, 1, v___x_5481_);
v___x_5483_ = lean_unsigned_to_nat(18u);
v___x_5484_ = lean_mk_empty_array_with_capacity(v___x_5483_);
v___x_5485_ = lean_array_push(v___x_5484_, v___x_5431_);
v___x_5486_ = lean_array_push(v___x_5485_, v___x_5434_);
v___x_5487_ = lean_array_push(v___x_5486_, v___x_5437_);
v___x_5488_ = lean_array_push(v___x_5487_, v___x_5440_);
v___x_5489_ = lean_array_push(v___x_5488_, v___x_5443_);
v___x_5490_ = lean_array_push(v___x_5489_, v___x_5446_);
v___x_5491_ = lean_array_push(v___x_5490_, v___x_5449_);
v___x_5492_ = lean_array_push(v___x_5491_, v___x_5452_);
v___x_5493_ = lean_array_push(v___x_5492_, v___x_5455_);
v___x_5494_ = lean_array_push(v___x_5493_, v___x_5458_);
v___x_5495_ = lean_array_push(v___x_5494_, v___x_5461_);
v___x_5496_ = lean_array_push(v___x_5495_, v___x_5464_);
v___x_5497_ = lean_array_push(v___x_5496_, v___x_5467_);
v___x_5498_ = lean_array_push(v___x_5497_, v___x_5470_);
v___x_5499_ = lean_array_push(v___x_5498_, v___x_5473_);
v___x_5500_ = lean_array_push(v___x_5499_, v___x_5476_);
v___x_5501_ = lean_array_push(v___x_5500_, v___x_5479_);
v___x_5502_ = lean_array_push(v___x_5501_, v___x_5482_);
v___x_5503_ = l_Lasm_JS_Web_Support_fields(v___x_5502_);
lean_dec_ref(v___x_5502_);
v___y_5389_ = v___y_5401_;
v___y_5390_ = v___x_5503_;
goto v___jp_5388_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey___boxed(lean_object* v_self_5512_, lean_object* v_format_5513_, lean_object* v_keyData_5514_, lean_object* v_algorithm_5515_, lean_object* v_extractable_5516_, lean_object* v_keyUsages_5517_, lean_object* v_a_5518_){
_start:
{
uint8_t v_format_boxed_5519_; uint8_t v_extractable_boxed_5520_; lean_object* v_res_5521_; 
v_format_boxed_5519_ = lean_unbox(v_format_5513_);
v_extractable_boxed_5520_ = lean_unbox(v_extractable_5516_);
v_res_5521_ = l_Lasm_JS_Web_SubtleCrypto_importKey(v_self_5512_, v_format_boxed_5519_, v_keyData_5514_, v_algorithm_5515_, v_extractable_boxed_5520_, v_keyUsages_5517_);
return v_res_5521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0(lean_object* v_x_5522_){
_start:
{
lean_object* v_val_5525_; 
if (lean_obj_tag(v_x_5522_) == 0)
{
lean_object* v_a_5527_; lean_object* v___x_5529_; uint8_t v_isShared_5530_; uint8_t v_isSharedCheck_5535_; 
v_a_5527_ = lean_ctor_get(v_x_5522_, 0);
v_isSharedCheck_5535_ = !lean_is_exclusive(v_x_5522_);
if (v_isSharedCheck_5535_ == 0)
{
v___x_5529_ = v_x_5522_;
v_isShared_5530_ = v_isSharedCheck_5535_;
goto v_resetjp_5528_;
}
else
{
lean_inc(v_a_5527_);
lean_dec(v_x_5522_);
v___x_5529_ = lean_box(0);
v_isShared_5530_ = v_isSharedCheck_5535_;
goto v_resetjp_5528_;
}
v_resetjp_5528_:
{
lean_object* v___x_5532_; 
if (v_isShared_5530_ == 0)
{
v___x_5532_ = v___x_5529_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5534_; 
v_reuseFailAlloc_5534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5534_, 0, v_a_5527_);
v___x_5532_ = v_reuseFailAlloc_5534_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
lean_object* v___x_5533_; 
v___x_5533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5533_, 0, v___x_5532_);
return v___x_5533_;
}
}
}
else
{
lean_object* v_a_5536_; lean_object* v___x_5538_; uint8_t v_isShared_5539_; uint8_t v_isSharedCheck_5549_; 
v_a_5536_ = lean_ctor_get(v_x_5522_, 0);
v_isSharedCheck_5549_ = !lean_is_exclusive(v_x_5522_);
if (v_isSharedCheck_5549_ == 0)
{
v___x_5538_ = v_x_5522_;
v_isShared_5539_ = v_isSharedCheck_5549_;
goto v_resetjp_5537_;
}
else
{
lean_inc(v_a_5536_);
lean_dec(v_x_5522_);
v___x_5538_ = lean_box(0);
v_isShared_5539_ = v_isSharedCheck_5549_;
goto v_resetjp_5537_;
}
v_resetjp_5537_:
{
lean_object* v___x_5540_; 
v___x_5540_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(v_a_5536_);
if (lean_obj_tag(v___x_5540_) == 0)
{
lean_object* v_a_5541_; lean_object* v___x_5543_; 
v_a_5541_ = lean_ctor_get(v___x_5540_, 0);
lean_inc(v_a_5541_);
lean_dec_ref_known(v___x_5540_, 1);
if (v_isShared_5539_ == 0)
{
lean_ctor_set(v___x_5538_, 0, v_a_5541_);
v___x_5543_ = v___x_5538_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5544_; 
v_reuseFailAlloc_5544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5544_, 0, v_a_5541_);
v___x_5543_ = v_reuseFailAlloc_5544_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
v_val_5525_ = v___x_5543_;
goto v___jp_5524_;
}
}
else
{
lean_object* v_a_5545_; lean_object* v___x_5547_; 
v_a_5545_ = lean_ctor_get(v___x_5540_, 0);
lean_inc(v_a_5545_);
lean_dec_ref_known(v___x_5540_, 1);
if (v_isShared_5539_ == 0)
{
lean_ctor_set_tag(v___x_5538_, 0);
lean_ctor_set(v___x_5538_, 0, v_a_5545_);
v___x_5547_ = v___x_5538_;
goto v_reusejp_5546_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v_a_5545_);
v___x_5547_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5546_;
}
v_reusejp_5546_:
{
v_val_5525_ = v___x_5547_;
goto v___jp_5524_;
}
}
}
}
v___jp_5524_:
{
lean_object* v___x_5526_; 
v___x_5526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5526_, 0, v_val_5525_);
return v___x_5526_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0___boxed(lean_object* v_x_5550_, lean_object* v___y_5551_){
_start:
{
lean_object* v_res_5552_; 
v_res_5552_ = l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0(v_x_5550_);
return v_res_5552_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9(lean_object* v_failurePrefix_5553_, uint32_t v_op_5554_, uint64_t v_flags_5555_, lean_object* v_payload_5556_, lean_object* v___f_5557_, lean_object* v___f_5558_, lean_object* v___f_5559_, lean_object* v_x_5560_){
_start:
{
if (lean_obj_tag(v_x_5560_) == 0)
{
lean_object* v_a_5562_; lean_object* v___x_5564_; uint8_t v_isShared_5565_; uint8_t v_isSharedCheck_5570_; 
lean_dec_ref(v___f_5559_);
lean_dec_ref(v___f_5558_);
lean_dec_ref(v___f_5557_);
lean_dec(v_payload_5556_);
v_a_5562_ = lean_ctor_get(v_x_5560_, 0);
v_isSharedCheck_5570_ = !lean_is_exclusive(v_x_5560_);
if (v_isSharedCheck_5570_ == 0)
{
v___x_5564_ = v_x_5560_;
v_isShared_5565_ = v_isSharedCheck_5570_;
goto v_resetjp_5563_;
}
else
{
lean_inc(v_a_5562_);
lean_dec(v_x_5560_);
v___x_5564_ = lean_box(0);
v_isShared_5565_ = v_isSharedCheck_5570_;
goto v_resetjp_5563_;
}
v_resetjp_5563_:
{
lean_object* v___x_5567_; 
if (v_isShared_5565_ == 0)
{
v___x_5567_ = v___x_5564_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5569_; 
v_reuseFailAlloc_5569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5569_, 0, v_a_5562_);
v___x_5567_ = v_reuseFailAlloc_5569_;
goto v_reusejp_5566_;
}
v_reusejp_5566_:
{
lean_object* v___x_5568_; 
v___x_5568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5568_, 0, v___x_5567_);
return v___x_5568_;
}
}
}
else
{
lean_object* v_a_5571_; lean_object* v___x_5573_; uint8_t v_isShared_5574_; uint8_t v_isSharedCheck_5617_; 
v_a_5571_ = lean_ctor_get(v_x_5560_, 0);
v_isSharedCheck_5617_ = !lean_is_exclusive(v_x_5560_);
if (v_isSharedCheck_5617_ == 0)
{
v___x_5573_ = v_x_5560_;
v_isShared_5574_ = v_isSharedCheck_5617_;
goto v_resetjp_5572_;
}
else
{
lean_inc(v_a_5571_);
lean_dec(v_x_5560_);
v___x_5573_ = lean_box(0);
v_isShared_5574_ = v_isSharedCheck_5617_;
goto v_resetjp_5572_;
}
v_resetjp_5572_:
{
lean_object* v___x_5575_; lean_object* v___x_5576_; uint8_t v___x_5577_; 
v___x_5575_ = lean_string_utf8_byte_size(v_failurePrefix_5553_);
v___x_5576_ = lean_unsigned_to_nat(0u);
v___x_5577_ = lean_nat_dec_eq(v___x_5575_, v___x_5576_);
if (v___x_5577_ == 0)
{
lean_object* v___f_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; lean_object* v___f_5582_; lean_object* v_val_5584_; lean_object* v___x_5589_; 
lean_dec_ref(v___f_5559_);
lean_inc(v_a_5571_);
v___f_5578_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5578_, 0, v_a_5571_);
v___x_5579_ = lean_box(v___x_5577_);
v___x_5580_ = lean_box_uint32(v_op_5554_);
v___x_5581_ = lean_box_uint64(v_flags_5555_);
lean_inc(v_payload_5556_);
v___f_5582_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_5582_, 0, v___x_5576_);
lean_closure_set(v___f_5582_, 1, v___x_5579_);
lean_closure_set(v___f_5582_, 2, v___f_5578_);
lean_closure_set(v___f_5582_, 3, v_a_5571_);
lean_closure_set(v___f_5582_, 4, v___x_5580_);
lean_closure_set(v___f_5582_, 5, v___x_5581_);
lean_closure_set(v___f_5582_, 6, v_payload_5556_);
v___x_5589_ = l_Lasm_JS_Wire_encodeIO(v_payload_5556_);
lean_dec(v_payload_5556_);
if (lean_obj_tag(v___x_5589_) == 0)
{
lean_object* v_a_5590_; lean_object* v___x_5592_; 
v_a_5590_ = lean_ctor_get(v___x_5589_, 0);
lean_inc(v_a_5590_);
lean_dec_ref_known(v___x_5589_, 1);
if (v_isShared_5574_ == 0)
{
lean_ctor_set(v___x_5573_, 0, v_a_5590_);
v___x_5592_ = v___x_5573_;
goto v_reusejp_5591_;
}
else
{
lean_object* v_reuseFailAlloc_5593_; 
v_reuseFailAlloc_5593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5593_, 0, v_a_5590_);
v___x_5592_ = v_reuseFailAlloc_5593_;
goto v_reusejp_5591_;
}
v_reusejp_5591_:
{
v_val_5584_ = v___x_5592_;
goto v___jp_5583_;
}
}
else
{
lean_object* v_a_5594_; lean_object* v___x_5596_; 
v_a_5594_ = lean_ctor_get(v___x_5589_, 0);
lean_inc(v_a_5594_);
lean_dec_ref_known(v___x_5589_, 1);
if (v_isShared_5574_ == 0)
{
lean_ctor_set_tag(v___x_5573_, 0);
lean_ctor_set(v___x_5573_, 0, v_a_5594_);
v___x_5596_ = v___x_5573_;
goto v_reusejp_5595_;
}
else
{
lean_object* v_reuseFailAlloc_5597_; 
v_reuseFailAlloc_5597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5597_, 0, v_a_5594_);
v___x_5596_ = v_reuseFailAlloc_5597_;
goto v_reusejp_5595_;
}
v_reusejp_5595_:
{
v_val_5584_ = v___x_5596_;
goto v___jp_5583_;
}
}
v___jp_5583_:
{
lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; 
v___x_5585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5585_, 0, v_val_5584_);
v___x_5586_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5576_, v___x_5577_, v___x_5585_, v___f_5582_);
v___x_5587_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5576_, v___x_5577_, v___x_5586_, v___f_5557_);
v___x_5588_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5576_, v___x_5577_, v___x_5587_, v___f_5558_);
return v___x_5588_;
}
}
else
{
lean_object* v___f_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___f_5601_; uint8_t v___x_5602_; lean_object* v_val_5604_; lean_object* v___x_5608_; 
lean_dec_ref(v___f_5558_);
lean_dec_ref(v___f_5557_);
lean_inc(v_a_5571_);
v___f_5598_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5598_, 0, v_a_5571_);
v___x_5599_ = lean_box_uint32(v_op_5554_);
v___x_5600_ = lean_box_uint64(v_flags_5555_);
lean_inc(v_payload_5556_);
v___f_5601_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_5601_, 0, v___f_5598_);
lean_closure_set(v___f_5601_, 1, v_a_5571_);
lean_closure_set(v___f_5601_, 2, v___x_5599_);
lean_closure_set(v___f_5601_, 3, v___x_5600_);
lean_closure_set(v___f_5601_, 4, v_payload_5556_);
v___x_5602_ = 0;
v___x_5608_ = l_Lasm_JS_Wire_encodeIO(v_payload_5556_);
lean_dec(v_payload_5556_);
if (lean_obj_tag(v___x_5608_) == 0)
{
lean_object* v_a_5609_; lean_object* v___x_5611_; 
v_a_5609_ = lean_ctor_get(v___x_5608_, 0);
lean_inc(v_a_5609_);
lean_dec_ref_known(v___x_5608_, 1);
if (v_isShared_5574_ == 0)
{
lean_ctor_set(v___x_5573_, 0, v_a_5609_);
v___x_5611_ = v___x_5573_;
goto v_reusejp_5610_;
}
else
{
lean_object* v_reuseFailAlloc_5612_; 
v_reuseFailAlloc_5612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5612_, 0, v_a_5609_);
v___x_5611_ = v_reuseFailAlloc_5612_;
goto v_reusejp_5610_;
}
v_reusejp_5610_:
{
v_val_5604_ = v___x_5611_;
goto v___jp_5603_;
}
}
else
{
lean_object* v_a_5613_; lean_object* v___x_5615_; 
v_a_5613_ = lean_ctor_get(v___x_5608_, 0);
lean_inc(v_a_5613_);
lean_dec_ref_known(v___x_5608_, 1);
if (v_isShared_5574_ == 0)
{
lean_ctor_set_tag(v___x_5573_, 0);
lean_ctor_set(v___x_5573_, 0, v_a_5613_);
v___x_5615_ = v___x_5573_;
goto v_reusejp_5614_;
}
else
{
lean_object* v_reuseFailAlloc_5616_; 
v_reuseFailAlloc_5616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5616_, 0, v_a_5613_);
v___x_5615_ = v_reuseFailAlloc_5616_;
goto v_reusejp_5614_;
}
v_reusejp_5614_:
{
v_val_5604_ = v___x_5615_;
goto v___jp_5603_;
}
}
v___jp_5603_:
{
lean_object* v___x_5605_; lean_object* v___x_5606_; lean_object* v___x_5607_; 
v___x_5605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5605_, 0, v_val_5604_);
v___x_5606_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5576_, v___x_5602_, v___x_5605_, v___f_5601_);
v___x_5607_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5576_, v___x_5602_, v___x_5606_, v___f_5559_);
return v___x_5607_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9___boxed(lean_object* v_failurePrefix_5618_, lean_object* v_op_5619_, lean_object* v_flags_5620_, lean_object* v_payload_5621_, lean_object* v___f_5622_, lean_object* v___f_5623_, lean_object* v___f_5624_, lean_object* v_x_5625_, lean_object* v___y_5626_){
_start:
{
uint32_t v_op_boxed_5627_; uint64_t v_flags_boxed_5628_; lean_object* v_res_5629_; 
v_op_boxed_5627_ = lean_unbox_uint32(v_op_5619_);
lean_dec(v_op_5619_);
v_flags_boxed_5628_ = lean_unbox_uint64(v_flags_5620_);
lean_dec_ref(v_flags_5620_);
v_res_5629_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9(v_failurePrefix_5618_, v_op_boxed_5627_, v_flags_boxed_5628_, v_payload_5621_, v___f_5622_, v___f_5623_, v___f_5624_, v_x_5625_);
lean_dec_ref(v_failurePrefix_5618_);
return v_res_5629_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2(lean_object* v___f_5630_, lean_object* v_x_5631_){
_start:
{
if (lean_obj_tag(v_x_5631_) == 0)
{
lean_object* v_a_5633_; lean_object* v___x_5635_; uint8_t v_isShared_5636_; uint8_t v_isSharedCheck_5641_; 
lean_dec_ref(v___f_5630_);
v_a_5633_ = lean_ctor_get(v_x_5631_, 0);
v_isSharedCheck_5641_ = !lean_is_exclusive(v_x_5631_);
if (v_isSharedCheck_5641_ == 0)
{
v___x_5635_ = v_x_5631_;
v_isShared_5636_ = v_isSharedCheck_5641_;
goto v_resetjp_5634_;
}
else
{
lean_inc(v_a_5633_);
lean_dec(v_x_5631_);
v___x_5635_ = lean_box(0);
v_isShared_5636_ = v_isSharedCheck_5641_;
goto v_resetjp_5634_;
}
v_resetjp_5634_:
{
lean_object* v___x_5638_; 
if (v_isShared_5636_ == 0)
{
v___x_5638_ = v___x_5635_;
goto v_reusejp_5637_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5640_, 0, v_a_5633_);
v___x_5638_ = v_reuseFailAlloc_5640_;
goto v_reusejp_5637_;
}
v_reusejp_5637_:
{
lean_object* v___x_5639_; 
v___x_5639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5639_, 0, v___x_5638_);
return v___x_5639_;
}
}
}
else
{
lean_object* v_a_5642_; lean_object* v___x_5643_; 
v_a_5642_ = lean_ctor_get(v_x_5631_, 0);
lean_inc(v_a_5642_);
lean_dec_ref_known(v_x_5631_, 1);
v___x_5643_ = lean_apply_2(v___f_5630_, v_a_5642_, lean_box(0));
return v___x_5643_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_5644_, lean_object* v_x_5645_, lean_object* v___y_5646_){
_start:
{
lean_object* v_res_5647_; 
v_res_5647_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2(v___f_5644_, v_x_5645_);
return v_res_5647_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1(lean_object* v___f_5648_, lean_object* v_bytes_5649_){
_start:
{
lean_object* v___x_5651_; uint8_t v___x_5652_; lean_object* v_val_5654_; lean_object* v___x_5657_; 
v___x_5651_ = lean_unsigned_to_nat(0u);
v___x_5652_ = 0;
v___x_5657_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5649_);
if (lean_obj_tag(v___x_5657_) == 0)
{
lean_object* v_a_5658_; lean_object* v___x_5660_; uint8_t v_isShared_5661_; uint8_t v_isSharedCheck_5665_; 
v_a_5658_ = lean_ctor_get(v___x_5657_, 0);
v_isSharedCheck_5665_ = !lean_is_exclusive(v___x_5657_);
if (v_isSharedCheck_5665_ == 0)
{
v___x_5660_ = v___x_5657_;
v_isShared_5661_ = v_isSharedCheck_5665_;
goto v_resetjp_5659_;
}
else
{
lean_inc(v_a_5658_);
lean_dec(v___x_5657_);
v___x_5660_ = lean_box(0);
v_isShared_5661_ = v_isSharedCheck_5665_;
goto v_resetjp_5659_;
}
v_resetjp_5659_:
{
lean_object* v___x_5663_; 
if (v_isShared_5661_ == 0)
{
lean_ctor_set_tag(v___x_5660_, 1);
v___x_5663_ = v___x_5660_;
goto v_reusejp_5662_;
}
else
{
lean_object* v_reuseFailAlloc_5664_; 
v_reuseFailAlloc_5664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5664_, 0, v_a_5658_);
v___x_5663_ = v_reuseFailAlloc_5664_;
goto v_reusejp_5662_;
}
v_reusejp_5662_:
{
v_val_5654_ = v___x_5663_;
goto v___jp_5653_;
}
}
}
else
{
lean_object* v_a_5666_; lean_object* v___x_5668_; uint8_t v_isShared_5669_; uint8_t v_isSharedCheck_5673_; 
v_a_5666_ = lean_ctor_get(v___x_5657_, 0);
v_isSharedCheck_5673_ = !lean_is_exclusive(v___x_5657_);
if (v_isSharedCheck_5673_ == 0)
{
v___x_5668_ = v___x_5657_;
v_isShared_5669_ = v_isSharedCheck_5673_;
goto v_resetjp_5667_;
}
else
{
lean_inc(v_a_5666_);
lean_dec(v___x_5657_);
v___x_5668_ = lean_box(0);
v_isShared_5669_ = v_isSharedCheck_5673_;
goto v_resetjp_5667_;
}
v_resetjp_5667_:
{
lean_object* v___x_5671_; 
if (v_isShared_5669_ == 0)
{
lean_ctor_set_tag(v___x_5668_, 0);
v___x_5671_ = v___x_5668_;
goto v_reusejp_5670_;
}
else
{
lean_object* v_reuseFailAlloc_5672_; 
v_reuseFailAlloc_5672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5672_, 0, v_a_5666_);
v___x_5671_ = v_reuseFailAlloc_5672_;
goto v_reusejp_5670_;
}
v_reusejp_5670_:
{
v_val_5654_ = v___x_5671_;
goto v___jp_5653_;
}
}
}
v___jp_5653_:
{
lean_object* v___x_5655_; lean_object* v___x_5656_; 
v___x_5655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5655_, 0, v_val_5654_);
v___x_5656_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5651_, v___x_5652_, v___x_5655_, v___f_5648_);
return v___x_5656_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v___f_5674_, lean_object* v_bytes_5675_, lean_object* v___y_5676_){
_start:
{
lean_object* v_res_5677_; 
v_res_5677_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1(v___f_5674_, v_bytes_5675_);
lean_dec_ref(v_bytes_5675_);
return v_res_5677_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3(lean_object* v___f_5678_, lean_object* v_x_5679_){
_start:
{
if (lean_obj_tag(v_x_5679_) == 0)
{
lean_object* v_a_5681_; lean_object* v___x_5683_; uint8_t v_isShared_5684_; uint8_t v_isSharedCheck_5689_; 
lean_dec_ref(v___f_5678_);
v_a_5681_ = lean_ctor_get(v_x_5679_, 0);
v_isSharedCheck_5689_ = !lean_is_exclusive(v_x_5679_);
if (v_isSharedCheck_5689_ == 0)
{
v___x_5683_ = v_x_5679_;
v_isShared_5684_ = v_isSharedCheck_5689_;
goto v_resetjp_5682_;
}
else
{
lean_inc(v_a_5681_);
lean_dec(v_x_5679_);
v___x_5683_ = lean_box(0);
v_isShared_5684_ = v_isSharedCheck_5689_;
goto v_resetjp_5682_;
}
v_resetjp_5682_:
{
lean_object* v___x_5686_; 
if (v_isShared_5684_ == 0)
{
v___x_5686_ = v___x_5683_;
goto v_reusejp_5685_;
}
else
{
lean_object* v_reuseFailAlloc_5688_; 
v_reuseFailAlloc_5688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5688_, 0, v_a_5681_);
v___x_5686_ = v_reuseFailAlloc_5688_;
goto v_reusejp_5685_;
}
v_reusejp_5685_:
{
lean_object* v___x_5687_; 
v___x_5687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5687_, 0, v___x_5686_);
return v___x_5687_;
}
}
}
else
{
lean_object* v___x_5691_; uint8_t v_isShared_5692_; uint8_t v_isSharedCheck_5701_; 
v_isSharedCheck_5701_ = !lean_is_exclusive(v_x_5679_);
if (v_isSharedCheck_5701_ == 0)
{
lean_object* v_unused_5702_; 
v_unused_5702_ = lean_ctor_get(v_x_5679_, 0);
lean_dec(v_unused_5702_);
v___x_5691_ = v_x_5679_;
v_isShared_5692_ = v_isSharedCheck_5701_;
goto v_resetjp_5690_;
}
else
{
lean_dec(v_x_5679_);
v___x_5691_ = lean_box(0);
v_isShared_5692_ = v_isSharedCheck_5701_;
goto v_resetjp_5690_;
}
v_resetjp_5690_:
{
lean_object* v___x_5693_; uint8_t v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5697_; 
v___x_5693_ = lean_unsigned_to_nat(0u);
v___x_5694_ = 0;
v___x_5695_ = lean_io_promise_new();
if (v_isShared_5692_ == 0)
{
lean_ctor_set(v___x_5691_, 0, v___x_5695_);
v___x_5697_ = v___x_5691_;
goto v_reusejp_5696_;
}
else
{
lean_object* v_reuseFailAlloc_5700_; 
v_reuseFailAlloc_5700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5700_, 0, v___x_5695_);
v___x_5697_ = v_reuseFailAlloc_5700_;
goto v_reusejp_5696_;
}
v_reusejp_5696_:
{
lean_object* v___x_5698_; lean_object* v___x_5699_; 
v___x_5698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5698_, 0, v___x_5697_);
v___x_5699_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5693_, v___x_5694_, v___x_5698_, v___f_5678_);
return v___x_5699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v___f_5703_, lean_object* v_x_5704_, lean_object* v___y_5705_){
_start:
{
lean_object* v_res_5706_; 
v_res_5706_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3(v___f_5703_, v_x_5704_);
return v_res_5706_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0(lean_object* v_x_5707_){
_start:
{
lean_object* v___x_5709_; 
v___x_5709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5709_, 0, v_x_5707_);
return v___x_5709_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_x_5710_, lean_object* v___y_5711_){
_start:
{
lean_object* v_res_5712_; 
v_res_5712_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0(v_x_5710_);
return v_res_5712_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(uint32_t v_op_5718_, uint64_t v_flags_5719_, lean_object* v_payload_5720_, lean_object* v_failurePrefix_5721_){
_start:
{
lean_object* v___f_5723_; lean_object* v___f_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___f_5727_; lean_object* v___f_5728_; lean_object* v___x_5729_; uint8_t v___x_5730_; lean_object* v_val_5732_; lean_object* v___x_5735_; 
v___f_5723_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__2));
lean_inc_ref(v_failurePrefix_5721_);
v___f_5724_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5724_, 0, v_failurePrefix_5721_);
v___x_5725_ = lean_box_uint32(v_op_5718_);
v___x_5726_ = lean_box_uint64(v_flags_5719_);
v___f_5727_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5727_, 0, v_failurePrefix_5721_);
lean_closure_set(v___f_5727_, 1, v___x_5725_);
lean_closure_set(v___f_5727_, 2, v___x_5726_);
lean_closure_set(v___f_5727_, 3, v_payload_5720_);
lean_closure_set(v___f_5727_, 4, v___f_5724_);
lean_closure_set(v___f_5727_, 5, v___f_5723_);
lean_closure_set(v___f_5727_, 6, v___f_5723_);
v___f_5728_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5728_, 0, v___f_5727_);
v___x_5729_ = lean_unsigned_to_nat(0u);
v___x_5730_ = 0;
v___x_5735_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5735_) == 0)
{
lean_object* v_a_5736_; lean_object* v___x_5738_; uint8_t v_isShared_5739_; uint8_t v_isSharedCheck_5743_; 
v_a_5736_ = lean_ctor_get(v___x_5735_, 0);
v_isSharedCheck_5743_ = !lean_is_exclusive(v___x_5735_);
if (v_isSharedCheck_5743_ == 0)
{
v___x_5738_ = v___x_5735_;
v_isShared_5739_ = v_isSharedCheck_5743_;
goto v_resetjp_5737_;
}
else
{
lean_inc(v_a_5736_);
lean_dec(v___x_5735_);
v___x_5738_ = lean_box(0);
v_isShared_5739_ = v_isSharedCheck_5743_;
goto v_resetjp_5737_;
}
v_resetjp_5737_:
{
lean_object* v___x_5741_; 
if (v_isShared_5739_ == 0)
{
lean_ctor_set_tag(v___x_5738_, 1);
v___x_5741_ = v___x_5738_;
goto v_reusejp_5740_;
}
else
{
lean_object* v_reuseFailAlloc_5742_; 
v_reuseFailAlloc_5742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5742_, 0, v_a_5736_);
v___x_5741_ = v_reuseFailAlloc_5742_;
goto v_reusejp_5740_;
}
v_reusejp_5740_:
{
v_val_5732_ = v___x_5741_;
goto v___jp_5731_;
}
}
}
else
{
lean_object* v_a_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5751_; 
v_a_5744_ = lean_ctor_get(v___x_5735_, 0);
v_isSharedCheck_5751_ = !lean_is_exclusive(v___x_5735_);
if (v_isSharedCheck_5751_ == 0)
{
v___x_5746_ = v___x_5735_;
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_a_5744_);
lean_dec(v___x_5735_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v___x_5749_; 
if (v_isShared_5747_ == 0)
{
lean_ctor_set_tag(v___x_5746_, 0);
v___x_5749_ = v___x_5746_;
goto v_reusejp_5748_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_a_5744_);
v___x_5749_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5748_;
}
v_reusejp_5748_:
{
v_val_5732_ = v___x_5749_;
goto v___jp_5731_;
}
}
}
v___jp_5731_:
{
lean_object* v___x_5733_; lean_object* v___x_5734_; 
v___x_5733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5733_, 0, v_val_5732_);
v___x_5734_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5729_, v___x_5730_, v___x_5733_, v___f_5728_);
return v___x_5734_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___boxed(lean_object* v_op_5752_, lean_object* v_flags_5753_, lean_object* v_payload_5754_, lean_object* v_failurePrefix_5755_, lean_object* v_a_5756_){
_start:
{
uint32_t v_op_boxed_5757_; uint64_t v_flags_boxed_5758_; lean_object* v_res_5759_; 
v_op_boxed_5757_ = lean_unbox_uint32(v_op_5752_);
lean_dec(v_op_5752_);
v_flags_boxed_5758_ = lean_unbox_uint64(v_flags_5753_);
lean_dec_ref(v_flags_5753_);
v_res_5759_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(v_op_boxed_5757_, v_flags_boxed_5758_, v_payload_5754_, v_failurePrefix_5755_);
return v_res_5759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(lean_object* v_o_5760_, lean_object* v_name_5761_, lean_object* v_args_5762_){
_start:
{
lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; uint32_t v___x_5767_; uint64_t v___x_5768_; lean_object* v___x_5769_; lean_object* v___x_5770_; lean_object* v___x_5771_; lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5776_; 
v___x_5764_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5765_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5765_, 0, v_o_5760_);
lean_ctor_set(v___x_5765_, 1, v___x_5764_);
v___x_5766_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5766_, 0, v_name_5761_);
v___x_5767_ = 205;
v___x_5768_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0);
v___x_5769_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5769_, 0, v_args_5762_);
v___x_5770_ = lean_unsigned_to_nat(3u);
v___x_5771_ = lean_mk_empty_array_with_capacity(v___x_5770_);
v___x_5772_ = lean_array_push(v___x_5771_, v___x_5765_);
v___x_5773_ = lean_array_push(v___x_5772_, v___x_5766_);
v___x_5774_ = lean_array_push(v___x_5773_, v___x_5769_);
v___x_5775_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5775_, 0, v___x_5774_);
v___x_5776_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(v___x_5767_, v___x_5768_, v___x_5775_, v___x_5764_);
return v___x_5776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___boxed(lean_object* v_o_5777_, lean_object* v_name_5778_, lean_object* v_args_5779_, lean_object* v___y_5780_){
_start:
{
lean_object* v_res_5781_; 
v_res_5781_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(v_o_5777_, v_name_5778_, v_args_5779_);
return v_res_5781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey(lean_object* v_self_5784_, uint8_t v_format_5785_, lean_object* v_key_5786_){
_start:
{
lean_object* v___f_5788_; lean_object* v___x_5789_; lean_object* v___y_5791_; 
v___f_5788_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0));
v___x_5789_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1));
switch(v_format_5785_)
{
case 0:
{
lean_object* v___x_5803_; 
v___x_5803_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5791_ = v___x_5803_;
goto v___jp_5790_;
}
case 1:
{
lean_object* v___x_5804_; 
v___x_5804_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5791_ = v___x_5804_;
goto v___jp_5790_;
}
case 2:
{
lean_object* v___x_5805_; 
v___x_5805_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5791_ = v___x_5805_;
goto v___jp_5790_;
}
case 3:
{
lean_object* v___x_5806_; 
v___x_5806_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5791_ = v___x_5806_;
goto v___jp_5790_;
}
case 4:
{
lean_object* v___x_5807_; 
v___x_5807_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5791_ = v___x_5807_;
goto v___jp_5790_;
}
case 5:
{
lean_object* v___x_5808_; 
v___x_5808_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5791_ = v___x_5808_;
goto v___jp_5790_;
}
case 6:
{
lean_object* v___x_5809_; 
v___x_5809_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5791_ = v___x_5809_;
goto v___jp_5790_;
}
default: 
{
lean_object* v___x_5810_; 
v___x_5810_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5791_ = v___x_5810_;
goto v___jp_5790_;
}
}
v___jp_5790_:
{
lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5799_; uint8_t v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; 
v___x_5792_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5793_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5793_, 0, v_key_5786_);
lean_ctor_set(v___x_5793_, 1, v___x_5792_);
v___x_5794_ = lean_unsigned_to_nat(2u);
v___x_5795_ = lean_mk_empty_array_with_capacity(v___x_5794_);
lean_inc(v___y_5791_);
v___x_5796_ = lean_array_push(v___x_5795_, v___y_5791_);
v___x_5797_ = lean_array_push(v___x_5796_, v___x_5793_);
v___x_5798_ = l_Lasm_JS_Web_Support_args(v___x_5797_);
v___x_5799_ = lean_unsigned_to_nat(0u);
v___x_5800_ = 0;
v___x_5801_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(v_self_5784_, v___x_5789_, v___x_5798_);
v___x_5802_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5799_, v___x_5800_, v___x_5801_, v___f_5788_);
return v___x_5802_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___boxed(lean_object* v_self_5811_, lean_object* v_format_5812_, lean_object* v_key_5813_, lean_object* v_a_5814_){
_start:
{
uint8_t v_format_boxed_5815_; lean_object* v_res_5816_; 
v_format_boxed_5815_ = lean_unbox(v_format_5812_);
v_res_5816_ = l_Lasm_JS_Web_SubtleCrypto_exportKey(v_self_5811_, v_format_boxed_5815_, v_key_5813_);
return v_res_5816_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(lean_object* v_context_5817_, uint32_t v_op_5818_, uint64_t v_flags_5819_, lean_object* v_payload_5820_, lean_object* v_failurePrefix_5821_){
_start:
{
lean_object* v___x_5823_; 
v___x_5823_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(v_op_5818_, v_flags_5819_, v_payload_5820_, v_failurePrefix_5821_);
return v___x_5823_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___boxed(lean_object* v_context_5824_, lean_object* v_op_5825_, lean_object* v_flags_5826_, lean_object* v_payload_5827_, lean_object* v_failurePrefix_5828_, lean_object* v_a_5829_){
_start:
{
uint32_t v_op_boxed_5830_; uint64_t v_flags_boxed_5831_; lean_object* v_res_5832_; 
v_op_boxed_5830_ = lean_unbox_uint32(v_op_5825_);
lean_dec(v_op_5825_);
v_flags_boxed_5831_ = lean_unbox_uint64(v_flags_5826_);
lean_dec_ref(v_flags_5826_);
v_res_5832_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(v_context_5824_, v_op_boxed_5830_, v_flags_boxed_5831_, v_payload_5827_, v_failurePrefix_5828_);
lean_dec_ref(v_context_5824_);
return v_res_5832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey(lean_object* v_self_5833_, uint8_t v_format_5834_, lean_object* v_key_5835_, lean_object* v_wrappingKey_5836_, lean_object* v_wrapAlgorithm_5837_){
_start:
{
lean_object* v___f_5839_; lean_object* v___x_5840_; lean_object* v___y_5842_; lean_object* v___y_5843_; lean_object* v___y_5844_; lean_object* v___y_5845_; lean_object* v___y_5858_; 
v___f_5839_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_5840_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12));
switch(v_format_5834_)
{
case 0:
{
lean_object* v___x_5871_; 
v___x_5871_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5858_ = v___x_5871_;
goto v___jp_5857_;
}
case 1:
{
lean_object* v___x_5872_; 
v___x_5872_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5858_ = v___x_5872_;
goto v___jp_5857_;
}
case 2:
{
lean_object* v___x_5873_; 
v___x_5873_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5858_ = v___x_5873_;
goto v___jp_5857_;
}
case 3:
{
lean_object* v___x_5874_; 
v___x_5874_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5858_ = v___x_5874_;
goto v___jp_5857_;
}
case 4:
{
lean_object* v___x_5875_; 
v___x_5875_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5858_ = v___x_5875_;
goto v___jp_5857_;
}
case 5:
{
lean_object* v___x_5876_; 
v___x_5876_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5858_ = v___x_5876_;
goto v___jp_5857_;
}
case 6:
{
lean_object* v___x_5877_; 
v___x_5877_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5858_ = v___x_5877_;
goto v___jp_5857_;
}
default: 
{
lean_object* v___x_5878_; 
v___x_5878_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5858_ = v___x_5878_;
goto v___jp_5857_;
}
}
v___jp_5841_:
{
lean_object* v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; uint8_t v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; 
v___x_5846_ = lean_unsigned_to_nat(4u);
v___x_5847_ = lean_mk_empty_array_with_capacity(v___x_5846_);
lean_inc(v___y_5842_);
v___x_5848_ = lean_array_push(v___x_5847_, v___y_5842_);
v___x_5849_ = lean_array_push(v___x_5848_, v___y_5843_);
v___x_5850_ = lean_array_push(v___x_5849_, v___y_5844_);
v___x_5851_ = lean_array_push(v___x_5850_, v___y_5845_);
v___x_5852_ = l_Lasm_JS_Web_Support_args(v___x_5851_);
v___x_5853_ = lean_unsigned_to_nat(0u);
v___x_5854_ = 0;
v___x_5855_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5833_, v___x_5840_, v___x_5852_);
v___x_5856_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5853_, v___x_5854_, v___x_5855_, v___f_5839_);
return v___x_5856_;
}
v___jp_5857_:
{
lean_object* v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5861_; 
v___x_5859_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5860_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5860_, 0, v_key_5835_);
lean_ctor_set(v___x_5860_, 1, v___x_5859_);
v___x_5861_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5861_, 0, v_wrappingKey_5836_);
lean_ctor_set(v___x_5861_, 1, v___x_5859_);
if (lean_obj_tag(v_wrapAlgorithm_5837_) == 0)
{
lean_object* v_value_5862_; 
v_value_5862_ = lean_ctor_get(v_wrapAlgorithm_5837_, 0);
lean_inc(v_value_5862_);
lean_dec_ref_known(v_wrapAlgorithm_5837_, 1);
v___y_5842_ = v___y_5858_;
v___y_5843_ = v___x_5860_;
v___y_5844_ = v___x_5861_;
v___y_5845_ = v_value_5862_;
goto v___jp_5841_;
}
else
{
lean_object* v_value_5863_; lean_object* v___x_5865_; uint8_t v_isShared_5866_; uint8_t v_isSharedCheck_5870_; 
v_value_5863_ = lean_ctor_get(v_wrapAlgorithm_5837_, 0);
v_isSharedCheck_5870_ = !lean_is_exclusive(v_wrapAlgorithm_5837_);
if (v_isSharedCheck_5870_ == 0)
{
v___x_5865_ = v_wrapAlgorithm_5837_;
v_isShared_5866_ = v_isSharedCheck_5870_;
goto v_resetjp_5864_;
}
else
{
lean_inc(v_value_5863_);
lean_dec(v_wrapAlgorithm_5837_);
v___x_5865_ = lean_box(0);
v_isShared_5866_ = v_isSharedCheck_5870_;
goto v_resetjp_5864_;
}
v_resetjp_5864_:
{
lean_object* v___x_5868_; 
if (v_isShared_5866_ == 0)
{
lean_ctor_set_tag(v___x_5865_, 4);
v___x_5868_ = v___x_5865_;
goto v_reusejp_5867_;
}
else
{
lean_object* v_reuseFailAlloc_5869_; 
v_reuseFailAlloc_5869_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5869_, 0, v_value_5863_);
v___x_5868_ = v_reuseFailAlloc_5869_;
goto v_reusejp_5867_;
}
v_reusejp_5867_:
{
v___y_5842_ = v___y_5858_;
v___y_5843_ = v___x_5860_;
v___y_5844_ = v___x_5861_;
v___y_5845_ = v___x_5868_;
goto v___jp_5841_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey___boxed(lean_object* v_self_5879_, lean_object* v_format_5880_, lean_object* v_key_5881_, lean_object* v_wrappingKey_5882_, lean_object* v_wrapAlgorithm_5883_, lean_object* v_a_5884_){
_start:
{
uint8_t v_format_boxed_5885_; lean_object* v_res_5886_; 
v_format_boxed_5885_ = lean_unbox(v_format_5880_);
v_res_5886_ = l_Lasm_JS_Web_SubtleCrypto_wrapKey(v_self_5879_, v_format_boxed_5885_, v_key_5881_, v_wrappingKey_5882_, v_wrapAlgorithm_5883_);
return v_res_5886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey(lean_object* v_self_5887_, uint8_t v_format_5888_, lean_object* v_wrappedKey_5889_, lean_object* v_unwrappingKey_5890_, lean_object* v_unwrapAlgorithm_5891_, lean_object* v_unwrappedKeyAlgorithm_5892_, uint8_t v_extractable_5893_, lean_object* v_keyUsages_5894_){
_start:
{
lean_object* v___f_5896_; lean_object* v___x_5897_; lean_object* v___y_5899_; lean_object* v___y_5900_; lean_object* v___y_5901_; lean_object* v___y_5902_; lean_object* v___y_5903_; lean_object* v___y_5924_; lean_object* v___y_5925_; lean_object* v___y_5926_; lean_object* v___y_5927_; lean_object* v___y_5938_; 
v___f_5896_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0));
v___x_5897_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14));
switch(v_format_5888_)
{
case 0:
{
lean_object* v___x_5951_; 
v___x_5951_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5938_ = v___x_5951_;
goto v___jp_5937_;
}
case 1:
{
lean_object* v___x_5952_; 
v___x_5952_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5938_ = v___x_5952_;
goto v___jp_5937_;
}
case 2:
{
lean_object* v___x_5953_; 
v___x_5953_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5938_ = v___x_5953_;
goto v___jp_5937_;
}
case 3:
{
lean_object* v___x_5954_; 
v___x_5954_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5938_ = v___x_5954_;
goto v___jp_5937_;
}
case 4:
{
lean_object* v___x_5955_; 
v___x_5955_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5938_ = v___x_5955_;
goto v___jp_5937_;
}
case 5:
{
lean_object* v___x_5956_; 
v___x_5956_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5938_ = v___x_5956_;
goto v___jp_5937_;
}
case 6:
{
lean_object* v___x_5957_; 
v___x_5957_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5938_ = v___x_5957_;
goto v___jp_5937_;
}
default: 
{
lean_object* v___x_5958_; 
v___x_5958_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5938_ = v___x_5958_;
goto v___jp_5937_;
}
}
v___jp_5898_:
{
lean_object* v___x_5904_; size_t v_sz_5905_; size_t v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; uint8_t v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; 
v___x_5904_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5904_, 0, v_extractable_5893_);
v_sz_5905_ = lean_array_size(v_keyUsages_5894_);
v___x_5906_ = ((size_t)0ULL);
v___x_5907_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5905_, v___x_5906_, v_keyUsages_5894_);
v___x_5908_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5908_, 0, v___x_5907_);
v___x_5909_ = lean_unsigned_to_nat(7u);
v___x_5910_ = lean_mk_empty_array_with_capacity(v___x_5909_);
lean_inc(v___y_5900_);
v___x_5911_ = lean_array_push(v___x_5910_, v___y_5900_);
v___x_5912_ = lean_array_push(v___x_5911_, v___y_5902_);
v___x_5913_ = lean_array_push(v___x_5912_, v___y_5901_);
v___x_5914_ = lean_array_push(v___x_5913_, v___y_5899_);
v___x_5915_ = lean_array_push(v___x_5914_, v___y_5903_);
v___x_5916_ = lean_array_push(v___x_5915_, v___x_5904_);
v___x_5917_ = lean_array_push(v___x_5916_, v___x_5908_);
v___x_5918_ = l_Lasm_JS_Web_Support_args(v___x_5917_);
v___x_5919_ = lean_unsigned_to_nat(0u);
v___x_5920_ = 0;
v___x_5921_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5887_, v___x_5897_, v___x_5918_);
v___x_5922_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5919_, v___x_5920_, v___x_5921_, v___f_5896_);
return v___x_5922_;
}
v___jp_5923_:
{
if (lean_obj_tag(v_unwrappedKeyAlgorithm_5892_) == 0)
{
lean_object* v_value_5928_; 
v_value_5928_ = lean_ctor_get(v_unwrappedKeyAlgorithm_5892_, 0);
lean_inc(v_value_5928_);
lean_dec_ref_known(v_unwrappedKeyAlgorithm_5892_, 1);
v___y_5899_ = v___y_5927_;
v___y_5900_ = v___y_5924_;
v___y_5901_ = v___y_5925_;
v___y_5902_ = v___y_5926_;
v___y_5903_ = v_value_5928_;
goto v___jp_5898_;
}
else
{
lean_object* v_value_5929_; lean_object* v___x_5931_; uint8_t v_isShared_5932_; uint8_t v_isSharedCheck_5936_; 
v_value_5929_ = lean_ctor_get(v_unwrappedKeyAlgorithm_5892_, 0);
v_isSharedCheck_5936_ = !lean_is_exclusive(v_unwrappedKeyAlgorithm_5892_);
if (v_isSharedCheck_5936_ == 0)
{
v___x_5931_ = v_unwrappedKeyAlgorithm_5892_;
v_isShared_5932_ = v_isSharedCheck_5936_;
goto v_resetjp_5930_;
}
else
{
lean_inc(v_value_5929_);
lean_dec(v_unwrappedKeyAlgorithm_5892_);
v___x_5931_ = lean_box(0);
v_isShared_5932_ = v_isSharedCheck_5936_;
goto v_resetjp_5930_;
}
v_resetjp_5930_:
{
lean_object* v___x_5934_; 
if (v_isShared_5932_ == 0)
{
lean_ctor_set_tag(v___x_5931_, 4);
v___x_5934_ = v___x_5931_;
goto v_reusejp_5933_;
}
else
{
lean_object* v_reuseFailAlloc_5935_; 
v_reuseFailAlloc_5935_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5935_, 0, v_value_5929_);
v___x_5934_ = v_reuseFailAlloc_5935_;
goto v_reusejp_5933_;
}
v_reusejp_5933_:
{
v___y_5899_ = v___y_5927_;
v___y_5900_ = v___y_5924_;
v___y_5901_ = v___y_5925_;
v___y_5902_ = v___y_5926_;
v___y_5903_ = v___x_5934_;
goto v___jp_5898_;
}
}
}
}
v___jp_5937_:
{
lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; 
v___x_5939_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5939_, 0, v_wrappedKey_5889_);
v___x_5940_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5941_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5941_, 0, v_unwrappingKey_5890_);
lean_ctor_set(v___x_5941_, 1, v___x_5940_);
if (lean_obj_tag(v_unwrapAlgorithm_5891_) == 0)
{
lean_object* v_value_5942_; 
v_value_5942_ = lean_ctor_get(v_unwrapAlgorithm_5891_, 0);
lean_inc(v_value_5942_);
lean_dec_ref_known(v_unwrapAlgorithm_5891_, 1);
v___y_5924_ = v___y_5938_;
v___y_5925_ = v___x_5941_;
v___y_5926_ = v___x_5939_;
v___y_5927_ = v_value_5942_;
goto v___jp_5923_;
}
else
{
lean_object* v_value_5943_; lean_object* v___x_5945_; uint8_t v_isShared_5946_; uint8_t v_isSharedCheck_5950_; 
v_value_5943_ = lean_ctor_get(v_unwrapAlgorithm_5891_, 0);
v_isSharedCheck_5950_ = !lean_is_exclusive(v_unwrapAlgorithm_5891_);
if (v_isSharedCheck_5950_ == 0)
{
v___x_5945_ = v_unwrapAlgorithm_5891_;
v_isShared_5946_ = v_isSharedCheck_5950_;
goto v_resetjp_5944_;
}
else
{
lean_inc(v_value_5943_);
lean_dec(v_unwrapAlgorithm_5891_);
v___x_5945_ = lean_box(0);
v_isShared_5946_ = v_isSharedCheck_5950_;
goto v_resetjp_5944_;
}
v_resetjp_5944_:
{
lean_object* v___x_5948_; 
if (v_isShared_5946_ == 0)
{
lean_ctor_set_tag(v___x_5945_, 4);
v___x_5948_ = v___x_5945_;
goto v_reusejp_5947_;
}
else
{
lean_object* v_reuseFailAlloc_5949_; 
v_reuseFailAlloc_5949_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5949_, 0, v_value_5943_);
v___x_5948_ = v_reuseFailAlloc_5949_;
goto v_reusejp_5947_;
}
v_reusejp_5947_:
{
v___y_5924_ = v___y_5938_;
v___y_5925_ = v___x_5941_;
v___y_5926_ = v___x_5939_;
v___y_5927_ = v___x_5948_;
goto v___jp_5923_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey___boxed(lean_object* v_self_5959_, lean_object* v_format_5960_, lean_object* v_wrappedKey_5961_, lean_object* v_unwrappingKey_5962_, lean_object* v_unwrapAlgorithm_5963_, lean_object* v_unwrappedKeyAlgorithm_5964_, lean_object* v_extractable_5965_, lean_object* v_keyUsages_5966_, lean_object* v_a_5967_){
_start:
{
uint8_t v_format_boxed_5968_; uint8_t v_extractable_boxed_5969_; lean_object* v_res_5970_; 
v_format_boxed_5968_ = lean_unbox(v_format_5960_);
v_extractable_boxed_5969_ = lean_unbox(v_extractable_5965_);
v_res_5970_ = l_Lasm_JS_Web_SubtleCrypto_unwrapKey(v_self_5959_, v_format_boxed_5968_, v_wrappedKey_5961_, v_unwrappingKey_5962_, v_unwrapAlgorithm_5963_, v_unwrappedKeyAlgorithm_5964_, v_extractable_boxed_5969_, v_keyUsages_5966_);
return v_res_5970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(lean_object* v_o_5974_, lean_object* v_a_5975_){
_start:
{
if (lean_obj_tag(v_a_5975_) == 0)
{
lean_object* v___x_5977_; lean_object* v___x_5978_; 
lean_dec(v_o_5974_);
v___x_5977_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__1));
v___x_5978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5978_, 0, v___x_5977_);
return v___x_5978_;
}
else
{
lean_object* v_tail_5979_; 
v_tail_5979_ = lean_ctor_get(v_a_5975_, 1);
if (lean_obj_tag(v_tail_5979_) == 0)
{
lean_object* v_head_5980_; lean_object* v___x_5981_; 
v_head_5980_ = lean_ctor_get(v_a_5975_, 0);
lean_inc(v_head_5980_);
lean_dec_ref_known(v_a_5975_, 2);
v___x_5981_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_5974_, v_head_5980_);
return v___x_5981_;
}
else
{
lean_object* v_head_5982_; lean_object* v___x_5983_; 
lean_inc(v_tail_5979_);
v_head_5982_ = lean_ctor_get(v_a_5975_, 0);
lean_inc(v_head_5982_);
lean_dec_ref_known(v_a_5975_, 2);
v___x_5983_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_5974_, v_head_5982_);
if (lean_obj_tag(v___x_5983_) == 0)
{
lean_object* v_a_5984_; 
v_a_5984_ = lean_ctor_get(v___x_5983_, 0);
lean_inc(v_a_5984_);
lean_dec_ref_known(v___x_5983_, 1);
v_o_5974_ = v_a_5984_;
v_a_5975_ = v_tail_5979_;
goto _start;
}
else
{
lean_dec(v_tail_5979_);
return v___x_5983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___boxed(lean_object* v_o_5986_, lean_object* v_a_5987_, lean_object* v_a_5988_){
_start:
{
lean_object* v_res_5989_; 
v_res_5989_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(v_o_5986_, v_a_5987_);
return v_res_5989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(lean_object* v_path_5990_){
_start:
{
lean_object* v___x_5992_; 
v___x_5992_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5992_) == 0)
{
lean_object* v_a_5993_; lean_object* v___x_5994_; 
v_a_5993_ = lean_ctor_get(v___x_5992_, 0);
lean_inc(v_a_5993_);
lean_dec_ref_known(v___x_5992_, 1);
v___x_5994_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(v_a_5993_, v_path_5990_);
return v___x_5994_;
}
else
{
lean_dec(v_path_5990_);
return v___x_5992_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0___boxed(lean_object* v_path_5995_, lean_object* v_a_5996_){
_start:
{
lean_object* v_res_5997_; 
v_res_5997_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(v_path_5995_);
return v_res_5997_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto(){
_start:
{
lean_object* v___x_6003_; lean_object* v___x_6004_; 
v___x_6003_ = ((lean_object*)(l_Lasm_JS_Web_crypto___closed__1));
v___x_6004_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(v___x_6003_);
if (lean_obj_tag(v___x_6004_) == 0)
{
lean_object* v_a_6005_; lean_object* v___x_6007_; uint8_t v_isShared_6008_; uint8_t v_isSharedCheck_6012_; 
v_a_6005_ = lean_ctor_get(v___x_6004_, 0);
v_isSharedCheck_6012_ = !lean_is_exclusive(v___x_6004_);
if (v_isSharedCheck_6012_ == 0)
{
v___x_6007_ = v___x_6004_;
v_isShared_6008_ = v_isSharedCheck_6012_;
goto v_resetjp_6006_;
}
else
{
lean_inc(v_a_6005_);
lean_dec(v___x_6004_);
v___x_6007_ = lean_box(0);
v_isShared_6008_ = v_isSharedCheck_6012_;
goto v_resetjp_6006_;
}
v_resetjp_6006_:
{
lean_object* v___x_6010_; 
if (v_isShared_6008_ == 0)
{
v___x_6010_ = v___x_6007_;
goto v_reusejp_6009_;
}
else
{
lean_object* v_reuseFailAlloc_6011_; 
v_reuseFailAlloc_6011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6011_, 0, v_a_6005_);
v___x_6010_ = v_reuseFailAlloc_6011_;
goto v_reusejp_6009_;
}
v_reusejp_6009_:
{
return v___x_6010_;
}
}
}
else
{
lean_object* v_a_6013_; lean_object* v___x_6015_; uint8_t v_isShared_6016_; uint8_t v_isSharedCheck_6020_; 
v_a_6013_ = lean_ctor_get(v___x_6004_, 0);
v_isSharedCheck_6020_ = !lean_is_exclusive(v___x_6004_);
if (v_isSharedCheck_6020_ == 0)
{
v___x_6015_ = v___x_6004_;
v_isShared_6016_ = v_isSharedCheck_6020_;
goto v_resetjp_6014_;
}
else
{
lean_inc(v_a_6013_);
lean_dec(v___x_6004_);
v___x_6015_ = lean_box(0);
v_isShared_6016_ = v_isSharedCheck_6020_;
goto v_resetjp_6014_;
}
v_resetjp_6014_:
{
lean_object* v___x_6018_; 
if (v_isShared_6016_ == 0)
{
v___x_6018_ = v___x_6015_;
goto v_reusejp_6017_;
}
else
{
lean_object* v_reuseFailAlloc_6019_; 
v_reuseFailAlloc_6019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6019_, 0, v_a_6013_);
v___x_6018_ = v_reuseFailAlloc_6019_;
goto v_reusejp_6017_;
}
v_reusejp_6017_:
{
return v___x_6018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto___boxed(lean_object* v_a_6021_){
_start:
{
lean_object* v_res_6022_; 
v_res_6022_ = l_Lasm_JS_Web_crypto();
return v_res_6022_;
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
